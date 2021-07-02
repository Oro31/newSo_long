#include "so_long.h"

static void	ft_check_assets(t_vars *vars, t_map *monde, int *i, int *j)
{
	while (monde->map[*j])
	{
		*i = 0;
		while (monde->map[*j][*i])
		{
			if (monde->map[*j][*i] == 'C')
				monde->ncol++;
			else if (monde->map[*j][*i] == 'E')
			{
				monde->posxe = *i;
				monde->posye = *j;
			}
			else if (monde->map[*j][*i] == 'P')
			{
				vars->ply.posx = *i;
				vars->ply.posy = *j;
			}
			*i++;
		}
		*j++;
	}
}

int	ft_init_world(t_vars *vars, t_map *monde)
{
	int	i;
	int	j;

	j = 0;
	ft_check_assets(vars, monde, &i, &j);
	vars->rsl.w = i * 24;
	vars->rsl.h = j * 24;
	if (monde->ncol == 0 || monde->posxe < 0 || vars->ply.posx < 0)
		return (0);
	return (1);
}

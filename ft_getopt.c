#include "libft.h"

int ft_is_opt(char *arg) { return arg && arg[0] == '-'; }

int ft_getopt(int argc, char **argv, const char *optstring) {
  static int i = 1;
  static int j = 1;
  while (i < argc) {
    if (argv[i] && ft_is_opt(argv[i]) && argv[i][j]) {
      j++;
      return (ft_strchr(optstring, argv[i][j - 1])) ? argv[i][j - 1] : '?';
    }
    i++;
    j = 1;
  }
  return -1;
}

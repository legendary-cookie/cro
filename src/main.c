#include "download.h"
#include "parse.h"
#include "utils.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  const char *program_name = argv[0];
  download("https://cro-pkg.github.io/CROPKG", "CROPKG");
  FILE *fp = fopen("CROPKG", "r");
  parse_pkg_file(fp);
  return 0;
}

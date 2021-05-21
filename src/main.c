#include "download.h"
#include "utils.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  const char *program_name = argv[0];
  const char *f = "/home/vincent/cro/package-manager/build/"
                  "cropkg.tar.zst";
  int res = download("https://cro-pkg.github.io/CROPKG.tar.zst",
                     "/home/vincent/cro/package-manager/build/cropkg.tar.zst");
  return 0;
}

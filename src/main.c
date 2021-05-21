#include <stdio.h>
#include "download.h"
#include "utils.h"


int main(int argc, char const *argv[]) {
  int res = download("https://cro-pkg.github.io/CROPKG.bz2", "cropkg.bz2");
  if (!res) {
    printf("%s\n","Downloading went wrong!" );
    return 1;
  }
  FILE* f = fopen("cropkg.bz2", "rb");
  bunzip(f);
  return 0;
}

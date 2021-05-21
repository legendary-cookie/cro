#include "download.h"
#include "utils.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int res = download("https://cro-pkg.github.io/CROPKG.zst", "cropkg.zst");
  if (!res) {
    printf("%s\n", "Downloading went wrong!");
    return 1;
  }
  decompress("cropkg.zst");
  return 0;
}

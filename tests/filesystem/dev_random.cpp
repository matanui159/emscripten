// Copyright 2019 The Emscripten Authors.  All rights reserved.
// Emscripten is available under two separate licenses, the MIT license and the
// University of Illinois/NCSA Open Source License.  Both these licenses can be
// found in the LICENSE file.

#include <stdio.h>
int main() {
  int byte_count = 64;
  char data[64];
  FILE *fp;
  fp = fopen("/dev/random", "r");
  fread(&data, 1, byte_count, fp);
  fclose(fp);
  return 0;
}

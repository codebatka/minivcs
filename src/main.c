#include <stdio.h>
#include "config.h"

int main(void) 
{
  printf("MiniVCS version %s\n", VCS_VERSION);

  LOG("debug logging is on, value = %d", 5);

  return VCS_OK;
}

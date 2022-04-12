#include "types.h"
#include "stat.h"
#include "user.h"
#include "mmu.h"

void
mprotectNotInTheRangeTest(){
  int returnValue = mprotect((void *)4096, 5);
  printf(1, "The return value of mprotect is: %d\n\n", returnValue);
}

void
mprotectNotInTheRangeTest(){
  int returnValue = munprotect((void *)4096, 5);
  printf(1, "The return value of mprotect is: %d\n\n", returnValue);
}

// +build tests

#include <stdio.h>
#include <string.h>
#include <memory.h>

#include "joylol.h"
#include "joylolCTests.h"

#include "_cgo_export.h"
#include "cTests.h"

char *newJBlockCTest(void) {
  JBlock *aJBlock = newJBlock(100);
  
  cTest_NotNil_MayFail("aJBlock nil", aJBlock);
  cTest_UIntEquals("wrong aJBlock.size", aJBlock->size, (size_t)100);
  
  return 0;
}
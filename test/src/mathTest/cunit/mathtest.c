#include <CUnit/Basic.h>
#include "math.h"

int init_mathtest(void) {
	return 0;
}

int clean_mathtest(void) {
	return 0;
}

void test_maxInt(void) {
  CU_ASSERT(maxInt(0, 2) == 2);
  CU_ASSERT(maxInt(0, -2) == 0);
  CU_ASSERT(maxInt(2, 2) == 2);
}

void gradle_cunit_register() {
    CU_pSuite pSuiteMath = CU_add_suite("math test", init_mathtest, clean_mathtest);
    CU_add_test(pSuiteMath, "test of maxInt", test_maxInt);
}

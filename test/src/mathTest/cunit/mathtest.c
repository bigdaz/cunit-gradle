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

int main() {
    CU_initialize_registry();

    CU_pSuite pSuiteMath = CU_add_suite("math test", init_mathtest, clean_mathtest);
    CU_add_test(pSuiteMath, "test of maxInt", test_maxInt);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
	int failureCount = CU_get_number_of_failures();
    CU_cleanup_registry();

	return failureCount == 0 ? 0 : -1;
}

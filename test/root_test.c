#include <ctest.h>
#include <root.h>

CTEST(check_result_suite, first_test) {
	double x1 = 0, x2 = 0;
	int result = 0;
	korni(1,-5, 6, &x1, &x2);
	if (x1 == 2) result++;
	if (x2 == 3) result++;
	int exp = 2;
	ASSERT_EQUAL(exp, result);
	}

CTEST(otricat_diskrem_suite, second_test) {
	double x1 = 0, x2 = 0;
	int result = 0;
	korni(1, 4, 6, &x1, &x2);
	if (x1 == 0) result++;
	if (x2 == 0) result++;
	int exp = 2;
	ASSERT_EQUAL(exp, result);
	}

CTEST(Null_diskrem_suite, third_test) {
	double x1 = 0, x2 = 0;
	int result = 0;
	korni(1, -4, 4, &x1, &x2);
	if (x1 == x2) result++;
	int exp = 1;
	ASSERT_EQUAL(exp, result);
	}


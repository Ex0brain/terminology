#ifndef _TY_UNIT_TESTS_H__
#define _TY_UNIT_TESTS_H__ 1

/* Unit tests */
typedef int (*tytest_func)(void);

/* list of tests */
int tytest_dummy(void);
int tytest_sb_skip(void);
int tytest_sb_trim(void);
int tytest_sb_gap(void);
int tytest_sb_steal(void);

#endif

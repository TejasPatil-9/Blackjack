/**
 * @file test_quiz_game.c
 * @author Tejas Patil (tejasrajeshp@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "../unity/unity.h"
#include "../inc/fun.h"

void test_showrecord(void)
{  
    TEST_PASS();
}
void test_resetscore(void)
{
    TEST_PASS();
}
void test_help(void)
{
    TEST_PASS();
}
void test_editscore(void)
{
    TEST_PASS();
}
int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_showrecord);
  RUN_TEST(test_resetscore);
  RUN_TEST(test_help);
  RUN_TEST(test_editscore);
  return UNITY_END();
}
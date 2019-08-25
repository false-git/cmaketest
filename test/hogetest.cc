#include <gtest/gtest.h>
#include "hogelib/hogelib.h"

TEST(HogeTest, test_01) {
    Hoge hoge;
    ASSERT_EQ(5, hoge.hoge());
}

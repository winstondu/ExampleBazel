#include "gtest/gtest.h"
#include "lib/testobj.h"

TEST(SampleTest, Sample) {
    testobjects::TestObject obj(2);
    EXPECT_EQ(obj.ReturnMem(), 2);
    EXPECT_EQ(1, 1);
    EXPECT_NE(1, 3);
}

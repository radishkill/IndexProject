#include <iostream>

#include <gtest/gtest.h>

TEST(MainTest, AddTest) {
    using namespace std;
    cout << "test123" << endl;
    ASSERT_EQ(1, 1);
}
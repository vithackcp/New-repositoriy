#include "vector_operations.h"
#include <gtest/gtest.h>

TEST(IncreaseElementsTest, HandlesEmptyVector) {
    std::vector<int> input = {};
    std::vector<int> expected = {};
    EXPECT_EQ(increase_elements(input, 5), expected);
}

TEST(IncreaseElementsTest, HandlesSingleElementVector) {
    std::vector<int> input = {1};
    std::vector<int> expected = {6};
    EXPECT_EQ(increase_elements(input, 5), expected);
}

TEST(IncreaseElementsTest, HandlesMultipleElementsVector) {
    std::vector<int> input = {1, 2, 3};
    std::vector<int> expected = {6, 7, 8};
    EXPECT_EQ(increase_elements(input, 5), expected);
}

TEST(IncreaseElementsTest, HandlesNegativeElements) {
    std::vector<int> input = {-1, -2, -3};
    std::vector<int> expected = {4, 3, 2};
    EXPECT_EQ(increase_elements(input, 5), expected);
}

TEST(IncreaseElementsTest, HandlesZeroIncrement) {
    std::vector<int> input = {1, 2, 3};
    std::vector<int> expected = {1, 2, 3};
    EXPECT_EQ(increase_elements(input, 0), expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

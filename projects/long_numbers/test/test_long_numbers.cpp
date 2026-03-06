#include <gtest/gtest.h>
#include "long_number.hpp"

using drw::LongNumber;

TEST(LongNumberTest, Plus) {
    EXPECT_EQ(LongNumber("123") + LongNumber("456"), LongNumber("579"));
    EXPECT_EQ(LongNumber("999") + LongNumber("1"), LongNumber("1000"));
}

TEST(LongNumberTest, Plus_WithZero) {
    EXPECT_EQ(LongNumber("123") + LongNumber("0"), LongNumber("123"));
}

TEST(LongNumberTest, Plus_Negative) {
    EXPECT_EQ(LongNumber("-5") + LongNumber("10"), LongNumber("5"));
    EXPECT_EQ(LongNumber("5") + LongNumber("-10"), LongNumber("-5"));
    EXPECT_EQ(LongNumber("-10") + LongNumber("10"), LongNumber("0"));
}

TEST(LongNumberTest, Minus) {
    EXPECT_EQ(LongNumber("10") - LongNumber("3"), LongNumber("7"));
}

TEST(LongNumberTest, Minus_Same) {
    EXPECT_EQ(LongNumber("5") - LongNumber("5"), LongNumber("0"));
}

TEST(LongNumberTest, Minus_Negative) {
    EXPECT_EQ(LongNumber("-10") - LongNumber("3"), LongNumber("-13"));
}

TEST(LongNumberTest, Multiplication) {
    EXPECT_EQ(LongNumber("3") * LongNumber("4"), LongNumber("12"));
    EXPECT_EQ(LongNumber("999") * LongNumber("999"), LongNumber("998001"));
}

TEST(LongNumberTest, Multiplication_01) {
    EXPECT_EQ(LongNumber("0") * LongNumber("123"), LongNumber("0"));
    EXPECT_EQ(LongNumber("1") * LongNumber("123"), LongNumber("123"));
}

TEST(LongNumberTest, Multiplication_Signs) {
    EXPECT_EQ(LongNumber("-5") * LongNumber("4"), LongNumber("-20"));
    EXPECT_EQ(LongNumber("-5") * LongNumber("-4"), LongNumber("20"));
}

TEST(LongNumberTest, Division) {
    EXPECT_EQ(LongNumber("10") / LongNumber("3"), LongNumber("3"));
    EXPECT_EQ(LongNumber("3") / LongNumber("10"), LongNumber("0"));
}

TEST(LongNumberTest, Division_Signs) {
    EXPECT_EQ(LongNumber("-15") / LongNumber("4"), LongNumber("-3"));
    EXPECT_EQ(LongNumber("15") / LongNumber("-4"), LongNumber("-3"));
    EXPECT_EQ(LongNumber("-15") / LongNumber("-4"), LongNumber("3"));
}

TEST(LongNumberTest, Modulo) {
    EXPECT_EQ(LongNumber("10") % LongNumber("3"), LongNumber("1"));
    EXPECT_EQ(LongNumber("100") % LongNumber("7"), LongNumber("2"));
}

TEST(LongNumberTest, Equal) {
    EXPECT_TRUE(LongNumber("123") == LongNumber("123"));
    EXPECT_TRUE(LongNumber("0") == LongNumber("0"));
    EXPECT_FALSE(LongNumber("123") == LongNumber("124"));
}

TEST(LongNumberTest, NonEqual) {
    EXPECT_TRUE(LongNumber("100") > LongNumber("99"));
    EXPECT_TRUE(LongNumber("5") > LongNumber("-100"));
    EXPECT_TRUE(LongNumber("-1") > LongNumber("-100"));
    EXPECT_FALSE(LongNumber("99") > LongNumber("100"));

    EXPECT_TRUE(LongNumber("99") < LongNumber("100"));
    EXPECT_TRUE(LongNumber("-100") < LongNumber("5"));
    EXPECT_FALSE(LongNumber("100") < LongNumber("99"));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

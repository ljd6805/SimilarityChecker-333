#include "pch.h"
#include "../Project7/SimilarityChecker.cpp"

TEST(TestCaseName, TestSameAlpha) {
	similarityChecker sChecker;
	string input1 = "ASD";
	string input2 = "DSA";
	int expect = 40;

	EXPECT_EQ(expect, sChecker.checkAlphaScore(input1, input2));
}

TEST(TestCaseName, TestDiffAlphaCase1) {
	similarityChecker sChecker;
	string input1 = "A";
	string input2 = "DBB";
	int expect = 0;

	EXPECT_EQ(expect, sChecker.checkAlphaScore(input1, input2));
}

TEST(TestCaseName, TestDiffAlphaCase2) {
	similarityChecker sChecker;
	string input1 = "AAABB";
	string input2 = "BA";
	int expect = 40;

	EXPECT_EQ(expect, sChecker.checkAlphaScore(input1, input2));
}

TEST(TestCaseName, TestDiffAlphaCase3) {
	similarityChecker sChecker;
	string input1 = "AA";
	string input2 = "AAE";
	int expect = 20;

	EXPECT_EQ(expect, sChecker.checkAlphaScore(input1, input2));
}
#include "pch.h"
#include "../Project7/SimilarityChecker.cpp"

TEST(LengthTest, LengthSame) {
	string inputA = "ASD";
	string inputB = "DSA";
	similarityChecker Schecker;
	int result = Schecker.checkLength(inputA, inputB);
	EXPECT_EQ(60, result);
}

TEST(LengthTest, LengthDiffCase1) {
	string inputA = "ASDDA";
	string inputB = "DSA";
	similarityChecker Schecker;
	int result = Schecker.checkLength(inputA, inputB);
	EXPECT_EQ(19, result);
}

TEST(LengthTest, LengthDiffCase2) {
	string inputA = "ADA";
	string inputB = "DSDSA";
	similarityChecker Schecker;
	int result = Schecker.checkLength(inputA, inputB);
	EXPECT_EQ(19, result);
}

TEST(LengthTest, LengthDiffDouble) {
	string inputA = "ASDDDDA";
	string inputB = "DSA";
	similarityChecker Schecker;
	int result = Schecker.checkLength(inputA, inputB);
	EXPECT_EQ(0, result);
}

TEST(LengthTest, LengthDiffDoublePlus1) {
	string inputA = "ASDDDDAAAAD";
	string inputB = "DSA";
	similarityChecker Schecker;
	int result = Schecker.checkLength(inputA, inputB);
	EXPECT_EQ(0, result);
}
// example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "gtest/src/gtest.h"

int main(int argc, char **argv) {
		std::cout << "Running main() from gtest_main.cc\n";
		testing::InitGoogleTest(&argc, argv);
		return RUN_ALL_TESTS();
}


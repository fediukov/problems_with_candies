#pragma once

#include <cassert>

#include "candies.h"

void TestFairCandySwap()
{
	Candies c;
	{
		std::vector<int> alice_candies = { 1,1 };
		std::vector<int> bob_candies = { 2,2 };
		std::vector<int> result = { 1,2 };
		assert(c.FairCandySwap(alice_candies, bob_candies) == result);
	}
	{
		std::vector<int> alice_candies = { 1,2 };
		std::vector<int> bob_candies = { 2,3 };
		std::vector<int> result = { 1,2 };
		assert(c.FairCandySwap(alice_candies, bob_candies) == result);
	}
	{
		std::vector<int> alice_candies = { 2 };
		std::vector<int> bob_candies = { 1,3 };
		std::vector<int> result = { 2,3 };
		assert(c.FairCandySwap(alice_candies, bob_candies) == result);
	}

}

void AllTest()
{
	TestFairCandySwap();
}

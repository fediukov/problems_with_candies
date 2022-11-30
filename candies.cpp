#include "candies.h"

std::vector<int> Candies::FairCandySwap(std::vector<int>& AliceCandies, std::vector<int>& BobCandies)
{
    std::unordered_map<int, int> a;
    std::unordered_map<int, int> b;
    int count_a = 0, count_b = 0;
    for (int i = 0; i < AliceCandies.size(); ++i)
    {
        ++a[AliceCandies[i]];
        count_a += AliceCandies[i];
    }
    for (int i = 0; i < BobCandies.size(); ++i)
    {
        ++b[BobCandies[i]];
        count_b += BobCandies[i];
    }
    int aim_count = (count_a + count_b) / 2;
    for (const auto [count_in_box, box_count] : a)
    {
        auto it = b.find(aim_count - count_a + count_in_box);
        if (it != b.end())
        {
            return { count_in_box, it->first };
        }
    }
	return {};
}
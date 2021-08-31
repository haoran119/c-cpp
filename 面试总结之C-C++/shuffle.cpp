/*
Write a program that creates a standard deck of cards, shuffles them and returns the top card from the deck. 
(This is a standalone program, you are not passed in any data.)

Fisher–Yates shuffle - Wikipedia
* https://en.wikipedia.org/wiki/Fisher–Yates_shuffle

洗牌算法汇总以及测试洗牌程序的正确性 - tenos - 博客园
* http://www.cnblogs.com/TenosDoIt/p/3384141.html　
* FisherYates洗牌算法，算法的思想是每次从未选中的数字中随机挑选一个加入排列，时间复杂度为O(n)

网易游戏面试题：如何设计一个公平的洗牌算法
* https://mp.weixin.qq.com/s/cQDcgwKNYEXbXBXE-kZG8A
* 这里的公平，我们其实可以理解为，对于生成的排列，每一个元素都能等概率地出现在每一个位置。或者说，每一个位置都能等概率地放置每一个元素。这就是Knuth洗牌算法的核心思想。
* 假设我们第一次随机抓到编号为1的球，那么第二次取到编号为[2,3,4,5,6,7,8]的任意一个球的概率是(1 - 1/8) * 1/7 = 1/8.
* 推而广之，假设有n个数，用这n个数生成的一个排列，任意一个位置存放元素的概率都是1/n.
* 比如：第一个元素的概率为1/n，最后一个元素的概率为(1 - 1/n) * ... * (1 - 1/2) * 1 = 1/n.

random_shuffle - C++ Reference
* http://www.cplusplus.com/reference/algorithm/random_shuffle/
* generator by default (1)
* template <class RandomAccessIterator> void random_shuffle (RandomAccessIterator first, RandomAccessIterator last);
* specific generator (2)
* template <class RandomAccessIterator, class RandomNumberGenerator> void random_shuffle (RandomAccessIterator first, RandomAccessIterator last, 
    RandomNumberGenerator&& gen);

std::random_shuffle, std::shuffle - cppreference.com
* https://en.cppreference.com/w/cpp/algorithm/random_shuffle
*/

//
//  main.cpp
//  LEETCODE
//
//  Created by Hao on 2021/8/31.
//  Copyright © 2021年 Hao. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Shuffle
{
public:
    Shuffle()
    {
        for (int i = 0; i < m_n; i ++)
            m_cards.push_back(i + 1);
    }

    void shuffle_FisherYates()
    {
        for (int i = m_n - 1; i > 0; i --) {
            // random integer with 0 <= j <= i
            int j = rand() % (i + 1);
            swap(m_cards[i], m_cards[j]);
        }
    }

    void shuffle_random_shuffle()
    {
        // STL
        // using built-in random generator
        random_shuffle(m_cards.begin(), m_cards.end());
    }

    void print_cards()
    {
        for (auto card: m_cards)
            cout << card << " ";

        cout << endl;
    }

private:
    vector<int> m_cards;
    int m_n = 54;
};

int main(int argc, char* argv[])
{
    Shuffle myShuffle;

    // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54
    myShuffle.print_cards();

    myShuffle.shuffle_FisherYates();

    // 13 10 15 43 9 22 33 5 3 52 36 35 51 49 46 34 41 24 23 48 32 50 16 2 44 7 53 40 30 11 42 54 8 4 18 17 19 12 27 28 47 1 45 29 20 26 38 25 21 31 39 6 37 14
    myShuffle.print_cards();

    myShuffle.shuffle_random_shuffle();

    // 30 25 38 18 52 27 31 45 26 49 19 5 13 37 39 47 33 43 36 29 3 41 50 6 12 35 9 1 17 22 48 7 34 32 16 51 40 24 2 4 11 10 20 28 21 23 53 54 46 44 42 14 15 8
    myShuffle.print_cards();

    return 0;
}

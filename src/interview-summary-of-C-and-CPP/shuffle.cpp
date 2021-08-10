//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> cards;
    int         n = 54;

    for (int i = 0; i < n; i ++) {
        cards.push_back(i + 1);
    }

    for (int i = n - 1; i > 0; i --) {
        int j = rand() % (i + 1);
        swap(cards[i], cards[j]);
    }

    // STL for reference
//    random_shuffle(cards.begin(), cards.end());

    /*
     13 10 15 43 9 22 33 5 3 52 36 35 51 49 46 34 41 24 23 48 32 50 16 2 44 7 53 40 30 11 42 54 8 4 18 17 19 12 27 28 47 1 45 29 20 26 38 25 21 31 39 6 37 14
     */
    for (auto card : cards) {
        cout << card << " ";
    }

    return 0;
}

/*
Write a program that creates a standard deck of cards, shuffles them and returns the top card from the deck. (This is a standalone program, you are not passed in any data.)

Fisher–Yates shuffle - Wikipedia
https://en.wikipedia.org/wiki/Fisher–Yates_shuffle
洗牌算法汇总以及测试洗牌程序的正确性 - tenos - 博客园
http://www.cnblogs.com/TenosDoIt/p/3384141.html　
*/

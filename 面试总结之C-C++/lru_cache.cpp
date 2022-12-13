/*
https://practice.geeksforgeeks.org/problems/lru-cache/1
https://www.geeksforgeeks.org/lru-cache-implementation/

Design a data structure that works like a LRU Cache. Here cap denotes the capacity of the cache and Q denotes the number of queries. 
Query can be of two types:

SET x y : sets the value of the key x with value y
GET x : gets the key of x if present else returns -1.

The LRUCache class has two methods get() and set() which are defined as follows.

get(key)   : returns the value of the key if it already exists in the cache otherwise returns -1.
set(key, value) : if the key is already present, update its value. If not present, add the key-value pair to the cache. 
                    If the cache reaches its capacity it should invalidate the least recently used item before inserting the new item.
In the constructor of the class the capacity of the cache should be intitialized.
 

Example 1:

Input:
cap = 2
Q = 2
Queries = SET 1 2 GET 1
Output: 2
Explanation: 
Cache Size = 2

SET 1 2 GET 1
SET 1 2 : 1 -> 2

GET 1 : Print the value corresponding
to Key 1, ie 2.

Example 2:

Input:
cap = 2
Q = 8
Queries = SET 1 2 SET 2 3 SET 1 5
SET 4 5 SET 6 7 GET 4 SET 1 2 GET 3
Output: 5 -1
Explanation: 
Cache Size = 2
SET 1 2 : 1 -> 2

SET 2 3 : 1 -> 2, 2 -> 3 (the most recently 
used one is kept at the rightmost position) 

SET 1 5 : 2 -> 3, 1 -> 5

SET 4 5 : 1 -> 5, 4 -> 5 (Cache size is 2, hence 
we delete the least recently used key-value pair)

SET 6 7 : 4 -> 5, 6 -> 7 

GET 4 : Prints 5 (The cache now looks like
6 -> 7, 4->5)

SET 1 2 : 4 -> 5, 1 -> 2 
(Cache size is 2, hence we delete the least 
recently used key-value pair)

GET 3 : No key value pair having 
key = 3. Hence, -1 is printed.

Your Task:
You don't need to read input or print anything . Complete the constructor and get(), set() methods of the class LRUcache. 


Expected Time Complexity: O(1) for both get() and set().
Expected Auxiliary Space: O(1) for both get() and set(). 
(Although, you may use extra space for cache storage and implementation purposes).


Constraints:
1 <= cap <= 1000
1 <= Q <= 100000
1 <= x, y <= 1000
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{
private:
    int m_capacity;
    std::list<std::pair<int, int> >  m_lru;
    std::unordered_map<int, std::list<std::pair<int, int> >::iterator > m_dict;

public:
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap) : m_capacity(cap)
    {
        // code here
    }
    
    //Function to return value corresponding to the key.
    int GET(int key)
    {
        // your code here
        if (m_dict.find(key) != m_dict.end()) {
            m_lru.erase(m_dict.at(key));
            m_lru.emplace_front(*m_dict.at(key));
            m_dict.at(key) = m_lru.begin();
            
            return m_dict.at(key)->second;
        }
        else {
            return -1;
        }
    }
    
    //Function for storing key-value pair.
    void SET(int key, int value)
    {
        // your code here
        if (m_dict.find(key) != m_dict.end()) {
            m_lru.erase(m_dict.at(key));
        }
        else {
            // cache is full
            if (m_lru.size() == m_capacity) {
                // delete least recently used item
                m_dict.erase(m_lru.back().first);
                m_lru.pop_back();
            }
        }
        
        // update reference
        m_lru.emplace_front(std::make_pair(key, value));
        m_dict[key] = m_lru.begin();
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->SET(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->GET(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

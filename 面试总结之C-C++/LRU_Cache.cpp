/*

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

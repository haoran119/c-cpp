//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

/*
What's wrong, and how to fix?

When multiple access, the Next function will make the current pointer behave unexpected. E.g. A is calling doSomething(), and B issues Next(). When A issues Next(), actually the current node is not current->next but current->next->next.
To fix it, add a parameter for Next() => Next(Thing *currentNode) so that it could make sure that the next node would not be changed by others.
*/

#include <iostream>
using namespace std;

class Thing {
public:
    void    doSomething() { cout << __func__ << endl; }
    Thing*    next;
};

class Things {
public:
    Things(Thing *myThing) : head(myThing), current(myThing) {}

    Thing*  First() {
        return head;
    }

    Thing*  Next() {
        current = current->next;
        return current;
    }

    bool OK() {
        if (current != nullptr)
            return true;
        else
            return false;
    }

private:
    Thing *head, *current;
};

int main()
{
    Thing*   myThing = new Thing;
    Things myThings(myThing);

    // This is how we do with class Things
    /*
     doSomething
     */
    for (Thing *ptr = myThings.First(); myThings.OK(); myThings.Next()) {
        ptr->doSomething();
    }

    return 0;
}

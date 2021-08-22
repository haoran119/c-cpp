/*
What's wrong, and how to fix?

Const variable aaa should be initialized when being defined.
To fix it, we could take any one action as below.
1) Initialize aaa in construct function
2) Assign a value in this statement const int aaa;
3) Remove keyword const
*/

class TryConst
{
public:
    TryConst () {}
private:
    const int aaa;
};

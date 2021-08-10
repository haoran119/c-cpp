class TryStatic
{
public:
    TryStatic () : aa (0) {}
private:
    static int aa;
};

/*
What's wrong, and how to fix?

Static variable could not be initialized inside the class.
To fix it, we could initialize it outside the class, e.g. int aa = 0. 
*/

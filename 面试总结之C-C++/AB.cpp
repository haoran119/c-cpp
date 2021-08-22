/*
What will be printed, and why?

data=1.
Because class B inherits class A, it would call constructor of A and B when constructing b. When calling the constructor of A, A::SetData() was called, so data was set to 1.
*/

class A
{
public:
    A () : data (0) { SetData (); printf ("data=%d", data); }
    virtual void SetData () { data = 1; }
protected:
    int data;
};

class B : public A
{
public:
    B () {}
    virtual void SetData () { data = 2; }
};

int main(int argc, char* argv[])
{
    B b;
    return 0;
}

# 学习笔记之Boost

* [Boost C++ Libraries](https://www.boost.org/)
    * Boost provides free peer-reviewed portable C++ source libraries.
    * [Boost Getting Started on Windows - 1.77.0](https://www.boost.org/doc/libs/1_77_0/more/getting_started/windows.html)
    * [Boost Downloads](https://www.boost.org/users/download/)
    * [Invocation](https://www.boost.org/build/doc/html/bbv2/overview/invocation.html)
* [c++ - How do you build the x64 Boost libraries on Windows? - Stack Overflow](https://stackoverflow.com/questions/302208/how-do-you-build-the-x64-boost-libraries-on-windows/302257)
```sh
b2 --build-dir=build/x64 address-model=64 threading=multi --build-type=complete --stagedir=./stage/x64
```
* [Building Boost 32-bit and 64-bit libraries on Windows](http://informilabs.com/building-boost-32-bit-and-64-bit-libraries-on-windows/)
```sh
cd \where_i_extracted_boost\  
bootstrap.bat  
b2 --build-dir=build/x86 address-model=32 threading=multi --build-type=complete --stagedir=./stage/x86 --toolset=msvc-14.0 -j 12  
b2 --build-dir=build/x64 address-model=64 threading=multi --build-type=complete --stagedir=./stage/x64 --toolset=msvc-14.0 -j 12  
```

## [Boost.Interprocess - 1.77.0](https://www.boost.org/doc/libs/1_77_0/doc/html/interprocess.html)

* [Sharing memory between processes - 1.77.0](https://www.boost.org/doc/libs/1_77_0/doc/html/interprocess/sharedmemorybetweenprocesses.html)
    * What is shared memory?
        * Shared memory is the fastest interprocess communication mechanism. The operating system maps a memory segment in the address space of several processes, so that several processes can read and write in that memory segment without calling operating system functions. However, we need some kind of synchronization between processes that read and write shared memory.
        * Consider what happens when a server process wants to send an HTML file to a client process that resides in the same machine using network mechanisms:
            * The server must read the file to memory and pass it to the network functions, that copy that memory to the OS's internal memory.
            * The client uses the network functions to copy the data from the OS's internal memory to its own memory.
        * As we can see, there are two copies, one from memory to the network and another one from the network to memory. And those copies are made using operating system calls that normally are expensive. Shared memory avoids this overhead, but we need to synchronize both processes:
            * The server maps a shared memory in its address space and also gets access to a synchronization mechanism. The server obtains exclusive access to the memory using the synchronization mechanism and copies the file to memory.
            * The client maps the shared memory in its address space. Waits until the server releases the exclusive access and uses the data.
        * Using shared memory, we can avoid two data copies, but we have to synchronize the access to the shared memory segment.

## [Boost.Python - 1.76.0](https://www.boost.org/doc/libs/1_76_0/libs/python/doc/html/index.html)

* Welcome to Boost.Python, a C++ library which enables seamless interoperability between C++ and the Python programming language. The library includes support for:
    * References and Pointers
    * Globally Registered Type Coercions
    * Automatic Cross-Module Type Conversions
    * Efficient Function Overloading
    * C++ to Python Exception Translation
    * Default Arguments
    * Keyword Arguments
    * Manipulating Python objects in C++
    * Exporting C++ Iterators as Python Iterators
    * Documentation Strings

### [Boost.Python Tutorial](https://www.boost.org/doc/libs/1_76_0/libs/python/doc/html/tutorial/index.html)
        
#### [Functions](https://www.boost.org/doc/libs/1_76_0/libs/python/doc/html/tutorial/tutorial/functions.html)

* In this chapter, we'll look at Boost.Python powered functions in closer detail. We will see some facilities to make exposing C++ functions to Python safe from potential pifalls such as dangling pointers and references. We will also see facilities that will make it even easier for us to expose C++ functions that take advantage of C++ features such as overloading and default arguments.

##### [Auto-Overloading](https://www.boost.org/doc/libs/1_76_0/libs/python/doc/html/tutorial/tutorial/functions.html#tutorial.functions.auto_overloading)

* It was mentioned in passing in the previous section that BOOST_PYTHON_FUNCTION_OVERLOADS and BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS can also be used for overloaded functions and member functions with a common sequence of initial arguments. Here is an example:
```c++
void foo()
{
   /*...*/
}

void foo(bool a)
{
   /*...*/
}

void foo(bool a, int b)
{
   /*...*/
}

void foo(bool a, int b, char c)
{
   /*...*/
}
```
* Like in the previous section, we can generate thin wrappers for these overloaded functions in one-shot:
    * `BOOST_PYTHON_FUNCTION_OVERLOADS(foo_overloads, foo, 0, 3)`
* Then...
    * `.def("foo", (void(*)(bool, int, char))0, foo_overloads());`
* Notice though that we have a situation now where we have a minimum of zero (0) arguments and a maximum of 3 arguments.

### [Boost.Python Reference Manual](https://www.boost.org/doc/libs/1_76_0/libs/python/doc/html/reference/index.html)

#### [2. High Level Components](https://www.boost.org/doc/libs/1_76_0/libs/python/doc/html/reference/high_level_components.html)

##### [boost/python/def.hpp](https://www.boost.org/doc/libs/1_76_0/libs/python/doc/html/reference/high_level_components/boost_python_def_hpp.html)

* def() is the function which can be used to expose C++ functions and callable objects as Python functions in the current scope.
* Example
```c++
#include <boost/python/def.hpp>
#include <boost/python/module.hpp>
#include <boost/python/args.hpp>

using namespace boost::python;

char const* foo(int x, int y) { return "foo"; }

BOOST_PYTHON_MODULE(def_test)
{
    def("foo", foo, args("x", "y"), "foo's docstring");
}
```

###### MISC

* `def()` v.s. `.def()` in boost.python ?
    * Both def() and .def() are functions used in boost.python to expose C++ functions to Python. However, they are used in different contexts.
    * The def() function is used to define a Python function that maps to a C++ function. It is typically used in the module definition to expose one or more C++ functions to Python. Here is an example:
    ```c++
    #include <boost/python.hpp>

    int add(int x, int y) {
        return x + y;
    }

    BOOST_PYTHON_MODULE(example) {
        using namespace boost::python;
        def("add", add);
    }
    ```
    * In this example, the def() function is used to define a Python function named add that maps to the C++ function add(). When the module is imported into Python, the add() function can be called like any other Python function.
    * On the other hand, the .def() member function is used to add methods to a class that is being exposed to Python. It is typically used inside the class_ definition to add one or more methods to the Python class. Here is an example:
    ```c++
    #include <boost/python.hpp>

    class Rectangle {
    public:
        Rectangle(int w, int h) : width(w), height(h) {}
        int area() const { return width * height; }
        int perimeter() const { return 2 * (width + height); }
    private:
        int width;
        int height;
    };

    BOOST_PYTHON_MODULE(example) {
        using namespace boost::python;
        class_<Rectangle>("Rectangle", init<int, int>())
            .def("area", &Rectangle::area)
            .def("perimeter", &Rectangle::perimeter);
    }
    ```
    * In this example, the .def() member function is used to add two methods, area() and perimeter(), to the Python class Rectangle. The first argument of .def() is the name of the method in Python, and the second argument is a pointer to the C++ method.
    * So, to summarize, def() is used to define Python functions that map to C++ functions, while .def() is used to add methods to a Python class that is defined in C++.

#### [4. Function Invocation and Creation](https://www.boost.org/doc/libs/1_76_0/libs/python/doc/html/reference/function_invocation_and_creation.html)

##### [boost/python/overloads.hpp](https://www.boost.org/doc/libs/1_76_0/libs/python/doc/html/reference/function_invocation_and_creation/boost_python_overloads_hpp.html#function_invocation_and_creation.boost_python_overloads_hpp.macros)

* Defines facilities for generating families of overloaded Python functions and extension class methods from C++ functions and member functions with default arguments, or from similar families of C++ overloads
* Example
```c++
#include <boost/python/module.hpp>
#include <boost/python/def.hpp>
#include <boost/python/args.hpp>
#include <boost/python/tuple.hpp>
#include <boost/python/class.hpp>
#include <boost/python/overloads.hpp>
#include <boost/python/return_internal_reference.hpp>

using namespace boost::python;

tuple f(int x = 1, double y = 4.25, char const* z = "wow")
{
    return make_tuple(x, y, z);
}

BOOST_PYTHON_FUNCTION_OVERLOADS(f_overloads, f, 0, 3)

struct Y {};
struct X
{
    Y& f(int x, double y = 4.25, char const* z = "wow")
    {
        return inner;
    }
    Y inner;
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(f_member_overloads, f, 1, 3)

BOOST_PYTHON_MODULE(args_ext)
{
    def("f", f,
        f_overloads(
            args("x", "y", "z"), "This is f's docstring"
        ));


    class_<Y>("Y")
        ;

    class_<X>("X", "This is X's docstring")
        .def("f1", &X::f,
                f_member_overloads(
                    args("x", "y", "z"), "f's docstring"
                )[return_internal_reference<>()]
        )
        ;
}
```

##### [Models of CallPolicies](https://www.boost.org/doc/libs/1_76_0/libs/python/doc/html/reference/function_invocation_and_creation/models_of_callpolicies.html#function_invocation_and_creation.models_of_callpolicies.boost_python_return_value_policy)
    
###### [boost/python/return_value_policy.hpp](https://www.boost.org/doc/libs/1_76_0/libs/python/doc/html/reference/function_invocation_and_creation/models_of_callpolicies.html#function_invocation_and_creation.models_of_callpolicies.boost_python_return_value_policy)

* return_value_policy instantiations are simply models of CallPolicies which are composed of a ResultConverterGenerator and optional Base CallPolicies.
* Example
    * C++ module definition:
    ```c++
    #include <boost/python/module.hpp>
    #include <boost/python/class.hpp>
    #include <boost/python/copy_const_reference.hpp>
    #include <boost/python/return_value_policy.hpp>

    // classes to wrap
    struct Bar { int x; }

    struct Foo {
       Foo(int x) : { b.x = x; }
       Bar const& get_bar() const { return b; }
     private:
       Bar b;
    };

    // Wrapper code
    using namespace boost::python;
    BOOST_PYTHON_MODULE(my_module)
    {
       class_<Bar>("Bar");

       class_<Foo>("Foo", init<int>())
          .def("get_bar", &Foo::get_bar
              , return_value_policy<copy_const_reference>())
          ;
    }
    ```
    * Python code:
    ```c++
    >>> from my_module import *
    >>> f = Foo(3)         # create a Foo object
    >>> b = f.get_bar()    # make a copy of the internal Bar object
    ```

### MISC

* [TNG/boost-python-examples: Some examples for the use of boost::python](https://github.com/TNG/boost-python-examples)
* [boost python - Checking whether a converter has already been registered - Stack Overflow](https://stackoverflow.com/questions/9888289/checking-whether-a-converter-has-already-been-registered)
```c++
#include <boost/python.hpp>
#include <vector>

template<typename T>
struct vector_to_list
{
    static PyObject* convert(const std::vector<T>& vec)
    {
        boost::python::list lst;
        for (const auto& it : vec)
        {
            lst.append(boost::python::object(it));
        }
        return boost::python::incref(lst.ptr());
    }
};

template <typename T>
void register_vector_to_list_converter()
{
    auto typeID = boost::python::type_id<std::vector<T> >();
    if (auto reg = boost::python::converter::registry::query(typeID); reg == nullptr || reg->m_to_python == nullptr)
    {
        boost::python::to_python_converter<std::vector<T>, vector_to_list<T> >();
    }
}

BOOST_PYTHON_MODULE(example)
{
    register_vector_to_list_converter<double>();
}
```

# END

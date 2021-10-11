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

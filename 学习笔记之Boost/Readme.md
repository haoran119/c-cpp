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
* [Chapter 18. Boost.Interprocess - 1.77.0](https://www.boost.org/doc/libs/1_77_0/doc/html/interprocess.html)
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

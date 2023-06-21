# 学习笔记之Clang

* [Clang C Language Family Frontend for LLVM](https://clang.llvm.org/)
    * The Clang project provides a language front-end and tooling infrastructure for languages in the C language family (C, C++, Objective C/C++, OpenCL, CUDA, and RenderScript) for the LLVM project. Both a GCC-compatible compiler driver (clang) and an MSVC-compatible compiler driver (clang-cl.exe) are provided. You can get and build the source today.
* [clang: API](https://clang.llvm.org/doxygen/index.html)
* [clang: clang::QualType Class Reference](https://clang.llvm.org/doxygen/classclang_1_1QualType.html)
* [clang: clang::TemplateArgument Class Reference](https://clang.llvm.org/doxygen/classclang_1_1TemplateArgument.html)
* [c++ - How to get the actual type of a template typed class member with Clang? - Stack Overflow](https://stackoverflow.com/questions/56792760/how-to-get-the-actual-type-of-a-template-typed-class-member-with-clang)
* [clang: clang::PrintingPolicy Struct Reference](https://clang.llvm.org/doxygen/structclang_1_1PrintingPolicy.html)
* What's Clang?
    * Clang is a compiler front end for the C, C++, and Objective-C programming languages. It uses LLVM as its back end and has been part of the LLVM release cycle since LLVM 2.6.
    * Clang is designed to provide:
        * Fast compiles and low memory use: Clang is designed to give users expressive diagnostics, a modular library-based architecture, and strong support for debugging and other tools.
        * Expressive diagnostics: Clang aims to provide clear, actionable feedback on code errors.
        * GCC compatibility: Clang is command-line-compatible with the GNU Compiler Collection (GCC), meaning it aims to accept the same options and produce the same output as GCC.
        * Integration Support: It's built as a set of reusable libraries, which makes it easier to integrate into other systems.
        * Built-in Static Analysis: Clang has a static analyzer and it checks for common coding errors (like buffer overflows, division by zero, use of uninitialized variables, etc.) at compile time, even before the program runs.
    * Clang is open-source and part of the LLVM project. It is used in various software systems, including Apple's software development tools for macOS and iOS.

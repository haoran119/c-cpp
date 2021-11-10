# 学习笔记之Catch2

* [catchorg/Catch2: A modern, C++-native, header-only, test framework for unit-tests, TDD and BDD - using C++11, C++14, C++17 and later (or C++03 on the Catch1.x branch)](https://github.com/catchorg/Catch2)
  * Catch2 is mainly a unit testing framework for C++, but it also provides basic micro-benchmarking features, and simple BDD macros.
  * Catch2's main advantage is that using it is both simple and natural. Tests autoregister themselves and do not have to be named with valid identifiers, assertions look like normal C++ code, and sections provide a nice way to share set-up and tear-down code in tests.
  * [Why do we need yet another C++ Test Framework?](https://github.com/catchorg/Catch2/blob/devel/docs/why-catch.md#top)
  * [Tutorial - getting started](https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#top)
    * [BDD-Style](https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#bdd-style)
  * [Reference section - all the details](https://github.com/catchorg/Catch2/blob/devel/docs/Readme.md#top)
    * [BDD-style test cases](https://github.com/catchorg/Catch2/blob/devel/docs/test-cases-and-sections.md#bdd-style-test-cases)
* [A guide to using Catch2 for Unit Testing in C++ | by Junaid Rahim | DSC KIIT | Medium](https://medium.com/dsckiit/a-guide-to-using-catch2-for-unit-testing-in-c-f0f5450d05fb)
* [Assertion Macros - Catch2/assertions.md at devel · catchorg/Catch2](https://github.com/catchorg/Catch2/blob/devel/docs/assertions.md#assertion-macros)
  * The REQUIRE family of macros tests an expression and aborts the test case if it fails. The CHECK family are equivalent but execution continues in the same test case even if the assertion fails. This is useful if you have a series of essentially orthogonal assertions and it is useful to see all the results rather than stopping at the first failure.
    * REQUIRE( expression ) and
    * CHECK( expression )

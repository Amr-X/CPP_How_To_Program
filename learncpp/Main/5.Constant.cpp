/*
--Constants
---Named Constants (Normal)
---Literal Constants (No Identifier)

--Literals Have Data Type
--- 5 , 5.7, "hello" -> 5u, 5.7f, "hello"s

!--C-style string literals are const objects that are created at the start of
the program and are guaranteed to exist for the entirety of the program.?
std::string literals create temporary objects as soon expression ends.

--Compiler Optimization takes Time Compiling Your Code But Better and Faster
Executables are Produced.
---Dead Code
---Constant Propagation
---Constant Folding

*-Compiler's Can Target (OS - Specific Architecture) Compile for Pc - PS in
Games - Cross Platforms
*-Because Different Instuction Set

*/
int x{7};
int y{3};
std::cout << x + y << '\n';

// Compiler Optimization (Make x, y Const to Help The Compiler) : Tell It that
// "No" you will not change x or y So use Const Propagation Please
//! Note : this will not modify your source code Only how you Executable Behave
// And If Executable Behavior change then debuging is hard (Lol)
int x{7};
int y{3};
std::cout << 10 << '\n';

//------------------------------------------------------------------------------------------------------------------------
// Const integral variables with a constant expression initializer can be used
// in constant expressions:
const int a{5};      // a is usable in constant expressions
const int b{a};      // b is usable in constant expressions (a is a constant
                     // expression per the prior statement)
const long c{a + 2}; // c is usable in constant expressions (operator+ has
                     // constant expression operands)

// Other variables cannot be used in constant expressions (even when they have a
// constant expression initializer):
int d{5};       // d is not usable in constant expressions (d is non-const)
const int e{d}; // e is not usable in constant expressions (initializer is not a
                // constant expression)
const double f{1.2}; // f is not usable in constant expressions (not a const
                     // integral variable)

const int x{3 +
            4}; // constant expression 3 + 4 must be evaluated at compile-time
int y{
    3 +
    4}; // constant expression 3 + 4 may be evaluated at compile-time or runtime
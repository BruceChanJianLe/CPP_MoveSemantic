# C++ Move Semantics

- Introduction1
- Introduction2
- createMoveConstructor
- createMoveAssignmentOperator 
- useCopyandSwap

Note that you cannot move a const qualify object.  
Move is just a cast really, it unconditionally casts its input into an rvalue reference.
Cast in cpp is a adult feature, which compiler will not complain if its wrong.

Please use vscode and cmake tools to run the above code!

## Practice of Implementing Move Semantics

1. A default constructor:   `X()`
1. A copy constructor   :   `X(const X&)`
1. A copy assignment    :   `operator=(const X&)`
1. A move constructor   :   `X(X&&) noexpect`
1. A move assignment    :   `operator=(X&&) noexpect`
1. A destructor         :   `~X()`

## Forwarding References

```cpp
template<typename T>
void f(T&& x);          // Fowarding reference

auto&& var2 = var1;     // Forwarding reference
```

Forwarding references represent:
- an lvalue reference if they are initialized by an lvalue.
- an rvalue reference if they are initialized by an rvalue.

Rvalue references are forwarding references if they:
- involve type deduction.
- appear in exactly the from T&& or auto&&.
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
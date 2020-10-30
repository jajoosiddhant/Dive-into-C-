# Classes

### Classes in C++
- Variables and functions declared in classes are by default private. Use `public:` to make it public.

### Classes vs Structures
- The contents of structure is by default `public` as opposed to classes which are `private`.   
    There is technically no difference between a structure and a class other than the above mentioned point. You can actually make the contents of a structure private by using `private:` before the declaration.  
    Functions can be defined inside a `structure` as we do in `C++ Classes`.  
    The only reason we have structures around in C++ is for backward compatibility with C.
- A structure in `C++` has the same capabilities as `Classes`. It just boils down to the type of coding that one wants to follow.  
- A structure in `C++` supports inheritance as any other class. A structure in C does not support inheritance since C language does not support inheritance.
Normally structures are used for handling less complexities such as handling just a block of variables and the classes are used for much wider functionalities to operate on those variables and limit the scope of variables and methods defined inside the classes.
# Extern

The extern variable only needs to be defined once. 
If the same variable value needs to be used in any other cpp file, we just need to declare it using extern so that the linker tries to find its value in a different translation unit and fetches and uses the value that is defined in a different cpp file.

### Example
file1.cpp
int x = 3;

file2.cpp
extern int x;
std::cout << x << std::endl;  Output would be 3.
No compilation or linker errors would be seen here.
But if the extern word is removed, there would be linker errors.
We can have multiple file.cpp files with different names referencing the same variable as extern to use their value.
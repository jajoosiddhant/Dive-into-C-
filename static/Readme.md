# Static

Static has two different meanings in C++.  
- One depends if declared inside a class or struct
- The second depends if it is declared outside a class or struct  


## Static Declared outside a class or struct  
If  a variable or function is declared static in a cpp file, it would be visible only in that cpp file i.e in the same translational unit. The function or variable won't be visible in any other .cpp file.

## Static declared inside a header file.
When a variable is declared static inside a header file and the header file is included in two different cpp files, you have actually created two copies of same variables in two different translational units. 
This is because the include header line copies and pastes the entire .hpp code in the .cpp file, thus having the same two static variables in two different .cpp files. Note since these two variables are static, they would only be visible in the same file or translational units. Thus both will hold values as modified by their respective cpp files and will not necessaruly have the same values in both the files.

## Static Declared inside a class or struct


# References:
- Static in C++ by TheCherno
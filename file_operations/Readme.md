# File Operations  
  
This directory consists of programs for file operations.  
[file_exists.cpp](file_exists.cpp) - Checks if a file or a directory exists with the use of `stat()` and `c_str()` functions.

## c_str()
- The `string` datatype in C++ is not a null terminated string.  
- The `c_str()` function converts the C++ (not null-terminated datatype) into a null terminated dataype in order to use it with C functions.  
- The C functions are declared in such a way that they expect a `char *` that should point to a Null-terminated String(C-Style String). 
- The `c_str()` function adds a null character at the end. `c_str()` returns a `const char *`.   
- The `stat()` function takes in `const char *` as its first argument, thus the use of `c_str()` in the program [file_exists.cpp](file_exists.cpp).  
- It should also be noted that a `std::string` in C++ can consist of a null character in between the string. So, developer should be cautious to not pass a string into a C style function with a null character in between as the C-style function would then just end prematurely while executing due to the presence of the NULL character in the middle of the string.  

**As per the man page:** 
- Returns a pointer to an array that contains a null-terminated sequence of characters (i.e., a C-string) representing the current value of the string object.

This array includes the same sequence of characters that make up the value of the string object plus an additional terminating null-character ('\0') at the end.

## Stat()  
- `Stat` is the fastest way to check if a file or a directory exists or not as per the [link here](https://stackoverflow.com/a/12774387/14225230).  
- `Stat` return 0 on success and -1 on error and `errno` is set accordingly. See [Man Page](https://linux.die.net/man/2/stat).  
- The `man page` also details Macros to check if the files is regular file, directory, character device, block device, FIFO, symbolic Link or Socket.

**References**: https://stackoverflow.com/a/7416473/14225230  
                http://www.cplusplus.com/reference/string/string/c_str/





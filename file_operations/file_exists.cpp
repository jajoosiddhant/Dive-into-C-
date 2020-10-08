#include <iostream>
#include <sys/stat.h>
using namespace std;

#define FILEPATH                    ("testfile")


// Stat returns 0 on success and -1 on error and errno is set accordingly. See Man page: https://linux.die.net/man/2/stat
bool path_exists(const string path)
{
    struct stat buffer;
    // Note the use of c_str() here
    if ((stat(path.c_str(), &buffer) == 0))
        {return true;}
    else
        {return false;}
}


// Checking if a Regular file exists
bool file_exists(const string filepath)
{
    struct stat buffer;
    if ((stat(filepath.c_str(), &buffer) == 0) && (S_ISREG(buffer.st_mode)))
        {return true;}
    else
        {return false;}
}


// Similarly use for character device, block device, FIFO, symbolic Link or Socket
// using Man Page mentioned in the Readme.md.
bool dir_exists(const string dirpath)
{
    struct stat buffer;
    if ((stat(dirpath.c_str(), &buffer) == 0) && (S_ISDIR(buffer.st_mode)))
        {return true;}
    else
        {return false;}
}

int main()
{
    bool pathstatus = path_exists(FILEPATH);
    cout << "Path Status: " << pathstatus << endl;

    bool filestatus = file_exists(FILEPATH);
    cout << "File Status: " << filestatus << endl;

    bool dirstatus = dir_exists(FILEPATH);
    cout << "Directory Status: " << dirstatus << endl;
    
    return 0;
}
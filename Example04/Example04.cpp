// Command-line arguments example
// compile with: /EHsc

#include <iostream>
#include <string.h>

using namespace std;
int main(int argc, char* argv[], char* envp[]) {    

    // Display each command-line argument.
    cout << "\nCommand-line arguments:\n";
    for (int i = 0; i < argc; i++) {
        cout << "  argv[" << i << "]   " << argv[i] << "\n";
    }

    // If /n is passed to the .exe, display numbered listing
    // of environment variables.
    cout << "\nEnvironment variables:\n";
    if ((argc == 2) && _stricmp(argv[1], "/n") == 0) {
        // Walk through list of strings until a NULL is encountered.
        for (int i = 0; envp[i] != NULL; ++i) {            
            cout << i << ": " << envp[i] << "\n";
        }
    }

}

/*
 Implement the function endsWith(str, suffix), which returns true if
 str ends with suffix. Like its startsWith counterpart, the endsWith
 function should allow the second argument to be either a string or a character.
*/


#include <iostream>
using namespace std;

/* Function prototypes */

bool myEndsWith(string str, string suffix);
bool myEndsWith(string str, char ch);

/* Main Function  */

int main() {
    
    if (myEndsWith("nearest", "rest")) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}


bool myEndsWith(string str, string suffix) {
    if (str.length() < suffix.length()) return false;
    
    for (int i = str.length() - 1, j = suffix.length() - 1; i >= i - j; i--, j--) {
        if (str[i] != suffix[j]) return false;
    }
    return true;
}

bool myEndsWith(string str, char suffix) {
    if (str[str.length() - 1] != suffix) return false;
    
    return true;
}

// Libraries
#include <iostream>
#include <random>
// include <strings.h>
using namespace std;

// VARIABLES
int attemps = 10;
char character;
char word[15];
string DATA[5] = [
    "cat",
    "dog",
    "apple",
    "watermelon"
];

// RANDOM_WORD FUNCTION
string random_word() {
    // GETS A RANDOM INT
    int i = random()
    return random_word = DATA[i]    // RETURNS THE RANDOM_WORD BY ACCEDING THE ARRAY WITH THE RANDOM INT
}

// VERIFY FUNCTION
void verify(int DATA, string random_word, char character) {
    for(int x = 0; x > DATA.size(); x++) {  // MAKES A FOR LOOP FOR THE WORD TO GUESS
        if(random_word[x] == character) {   // IF THE CHAR IT'S IN THE RANDOM_WORDE
            word[] += character;            // REPLACES THE CHARACTER IN THE WORD BLANK LIST
        }
    }
}


// MAIN FUNCTION
int main() {
    while (attemps > 0) {   // WHILE ATTEMPS ARE > 0
        cout << ">>> Please enter a character: " << endl;   // ASK FOR A CHAR
        cin >> character;   // KEEPS THE CHAR INTO THE VARIABLE
        verify(DATA, random_word(),character);  // CALLS THE VERIFY FUNCTION AND SEND SOME ARGUMENTS
    }

    return 0;
}


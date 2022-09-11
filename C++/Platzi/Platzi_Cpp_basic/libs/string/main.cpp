#include<iostream>
#include<string>

using namespace std;

//text[] = {'H', 'o', 'l', 'a'}; -> withput the <string> lib.
string text = "Hola mundo!";
string string_numbers = ""; 
string my_text = "PRO 100% real";

// Declarating my function -> This is a good practice. 
void stringToInt(string text);
void stringToFloat(string text);
void printMyText(string my_text);

int main() {
    system("clear");
    
    cout << text.size() << endl;
    cout << ">>> Pls, send an int number: " << endl;
    cin >> string_numbers;
    stringToInt(string_numbers);

    cout << ">>> Pls, send a float number: " << endl;
    cin >> string_numbers;
    stringToFloat(string_numbers);
    cout << endl;

    printMyText(my_text);
    return 0;
}

void stringToInt(string text) {
    int numberInt = stoi(text);
    cout << "The string to int is: " << numberInt << endl;
    cout << "If I'd like to sum 5 to the value, the result it's: " << numberInt + 5 << endl;
}

void stringToFloat(string text) {
    float numberFloat = stof(text);
    cout << "The string to float is: " << numberFloat << endl;
    cout << "If I'd like to sum 5 to the value, the result it's: " << numberFloat + 5 << endl;
}

void printMyText(string my_text) {
    cout << "Simple, I'm a: ;)" << endl;
    for(int i = 0; i <= my_text.size(); i++) {
        cout << my_text[i] << endl;
    }
    cout << ";)" << endl;
}
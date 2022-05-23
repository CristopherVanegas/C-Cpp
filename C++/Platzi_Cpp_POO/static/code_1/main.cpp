// This code is a implementation of 'static' attribute. -> Basically this share variables into many classes.
// ' Static ' attributes cannot been keept into dynamic storage.
//We need to book some storage.

#include<iostream>
#include<string>

using namespace std;

class Person {
    private: 
        string name;
        int age;

    public:
        static int num_people;
        static string names[11];

        Person();
        ~Person();

        Person &setUpName();
        Person &setUpAge();
        void greeting();
        void createAnotherPerson();
        void printNumberOfPeople();
};

int Person::num_people = 0; // Give a value to the 'static int variable' from class 'Person'
string Person::names[11];

Person::Person() {
    this->name = name;
    this->age = age;
    num_people += 1;
}

Person::~Person() {
    cout << ">>> Calling the destructor" << endl;
}

void Person::greeting() {
    cout << ">>> My name is: " << name << " and my age is: " << age << endl;
}

void Person::printNumberOfPeople() {
    cout << endl << "There are " << Person::num_people << " characters." << endl;
}

void Person::createAnotherPerson() {
    char answer;
    string number_char;
    int ages[11];
    
    static string name_char = "Person_";

    cout << endl << "Do you want to add another character? y/n" << endl;
    cin >> answer; 
    cout << "What number of character is this?" << endl<< "You can just add 10 characters - Characters added: " << num_people << endl;
    cin >> number_char;


    switch(answer) {
        case 'y':
            for (int i = 0; i < 9 ; i++) {
                name_char += number_char; 
                cout << name_char << endl;

                Person *person = new Person();
                person->setUpName().setUpAge();
                names[i] = this->name;
                ages[i] = this->age;

                person->greeting();
                person->printNumberOfPeople();

                if (i < 10) {
                    person->createAnotherPerson();
                } else {
                    break;
                }
            }
            break;

        case 'n':
            break;
    }

}

Person &Person::setUpName() {
    string name;
    cout << "Please, enter the charater's name: ";
    cin >> name;
    //cout << endl;
    this->name = name;
    return *this;
}

Person &Person::setUpAge() {
    int age;
    cout << "Please, now enter the character's age: ";
    cin >> age;
    //cout << endl;
    this->age = age;
    return *this;
}

int main() {
    system("clear");
    Person *person_0 = new Person();
    person_0 -> createAnotherPerson();
    return 0;
}


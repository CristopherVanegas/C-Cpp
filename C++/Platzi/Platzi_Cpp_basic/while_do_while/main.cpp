// This programs make a y/n questions
// This will not stop until you send n

#include<iostream>
using namespace std;

int main() {
	system("clear");
	int i;

	for (i = 0; i < 10000; i+=1) {
		char respuesta = ' ';
		cout << "Deseas Terminar?:" << endl;
		cin >> respuesta;

		switch(respuesta) {
			case 'y':
				cout << "Bye bye" << endl;
				i = 10000;
			case 'n':
				break;
			default:
				cout << "This is not a valid answer, pls just type 'y' or 'n', try again!" << endl;
				break;
		}
	}
}


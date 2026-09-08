

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	cout << "Factoral:";
	int x;
	//inputs and outputs
	cout << "Enter a number: ";
	cin >> x;
	//checking for negative numbers
	while (x <= 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> x;
		cout << x << "!  ";
	}
	//calculations
	int total = 1;

	for (int i = 1; i <= x; i++) {
			total = total * i;
			cout << i;
			if (i < x) {
				cout << " * ";
			}
	}
	//output for total
	cout << " = " << total << endl;
}
void arithmetic() {
	//The number to start at
	int x;
	//the number to add each time
	int y;
	//the number of elements in the sereis
	int z;
	//inputs and outputs
	cout << "Arithmetic Series:" << endl;
	cout << "Enter a number to start at: ";
	cin >> x;
	cout << "Enter a number to add each time: ";
	cin >> y;
	cout << "Enter the number of elements in the series: ";
	cin >> z;
	//checking for negative numbers
	while (z <= 0) {
		cout << "Nice try, please enter a POSITIVE number...:";
		cin >> z;
	}
	//calculations
	int total = 0;

	for (int i = 1; i <= z; i++) {
		total = total + x;
		cout << x;
		x = x + y;
		if (i < z) {
			cout << " + ";
		}
		
	}
	//output for total
	cout << " = " << total << endl;

}
void geometric() {
	//The number to start at
	int x;
	//the number to multiply by each time
	int y;
	//the number of elements in the sereis
	int z;
	cout << "Geometric Series:" << endl;
	//inputs and outputs
	cout << "Enter a number to start at: ";
	cin >> x;
	cout << "Enter a number to multiply by each time: ";
	cin >> y;
	cout << "Enter the number of elements in the series: ";
	cin >> z;
	//checking for negative numbers
	while (z <= 0) {
		cout << "Nice try, please enter a POSITIVE number...:";
		cin >> z;
	}
	//calculations
	int total = 0;

	for (int i = 1; i <= z; i++) {
		total = total + x;
		cout << x;
		x = x * y;
		if (i < z) {
			cout << " + ";
		}

	}
	//output for total
	cout << " = " << total << endl;

	// I recommend writing your geometric series code here
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}


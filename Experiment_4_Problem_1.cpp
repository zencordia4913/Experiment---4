#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	bool cont = false; //for the y/n switching
	char ans; // letter y or n
	int x, y; // two integers
	char op; //Operation

	cout << "Experiment 4 - Problem 1" << endl;
	cout << "------------------------" << endl;
	cout << "Welcome to Basic operation calculator \n\n";
	do {
		cout << "Continue? [Y] Yes [N] No : " << flush;
		cin >> ans;
		cout << " " << endl;
		cout << " " << endl;
		switch (ans) //Option for continuation or discontinuation
		{
		case 'y': //y for yes
		case 'Y': 
			{
				cout << "Choose an operation \n\n";
				cout << " [1] - Addition" << endl;
				cout << " [2] - Subtraction" << endl;
				cout << " [3] - Multiplication" << endl;
				cout << " [4] - Division" << endl;
				cout << " [5] - Modulus" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "Operation: "; cin >> op;
				cout << " " << endl;
				switch (op) //Switching for operation
				{
				case '1': // +
					cout << "Select two integers: " << endl;
				cin >> x; 
				cin >> y;
					cout << "The answer is: " << x + y << endl;
					cout << " " << endl;
					break; 
				case '2': // -
					cout << "Select two integers: " << endl;
				cin >> x; 
				cin >> y;
					cout << "The answer is: " << x - y << endl;
					cout << " " << endl;
					break;
				case '3': // *
					cout << "Select two integers: " << endl;
				cin >> x; 
				cin >> y;
					cout << "The answer is: " << x * y << endl;
					cout << " " << endl;
					break;
				case '4': // /
					cout << "Select two integers: " << endl;
				cin >> x; 
				cin >> y;
					cout << "The answer is: " << x / y << endl;
					cout << " " << endl;
					break;
				case '5':// %
					cout << "Select two integers: " << endl;
				cin >> x; 
				cin >> y;
					cout << "The answer is: " << x % y << endl;
					cout << " " << endl;
					break;
				default:// wrong input of number
					cout << "SYNTAX ERROR!!. Please enter a correct number" << endl;
					cout << " " << endl;
				}
				break;
			}
		case 'n': // n for no
		case 'N':
			{
				cout << "Exiting........." << endl;
				cout << " " << endl;
				cont = true;
				break;
			}
		default: // for wrong input of letter
				cout << "Please enter a correct letter" << endl;
				cout << " " << endl;
				continue;
		}
	}while(!cont); // While cont = false
 system("pause"); // Press anywhere to continue
 getch();
 return 0;
}



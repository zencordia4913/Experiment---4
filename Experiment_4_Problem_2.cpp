#include <iostream>
#include <conio.h>
using namespace std;
int main ()
 {
	 int arr[100], temp, elements, i, j;

	 cout << "Experiment 4 - Problem 2" << endl;
	 cout << "------------------------- \n\n" << endl;
	 cout << "Selection sorting \n\n";
	 cout << "Enter the array size: "; cin >> elements; //Entering array size
	 cout << " " << endl;   
	 cout << "Enter the " << elements << " elements." << endl;

	 for ( i=0; i < elements; i++) // For looping for input of array
	 {
		 cin >> arr[i];
	 }
	 cout << " " << endl;
	 cout << " " << endl;
	 cout << "Your data: ";
	 for (i=0; i < elements; i++) // For looping for displaying of input
	 {
		 cout << arr[i] << "," << flush;
	 }

	 cout << " " << endl;
	 cout << "--Sorting elements in ascending order--" << endl; //Sorting
	 cout << " " << endl;
	  cout << " " << endl;

	 for (i=0; i < elements; i++) //Selection sorting method
	 {
		 for (j= i + 1; j < elements; j++)
		 {
			 if (arr[i] > arr [j])
			 {
				 temp = arr[i]; //Switching
				 arr[i] = arr[j];
				 arr[j] = temp;
			 }
		 }
	 }
     
	 cout << "Sorted data: ";

	 for (i=0; i < elements; i++) //Displaying of sorted data
	 {
		 cout << arr[i] << ",";

	 }
cout << " " << endl;
cout << " " << endl;
system("pause"); //Press anywhere to continue
getch();
return 0;
}
	 
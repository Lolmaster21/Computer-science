//Sequential search code
//given user input, this code walks throught the slots of an array from beginning to end
//and prints out result


#include<iostream>
using namespace std;

int main() {
	int location; //to keep track of which slot in the array we're looking at
	bool found = false; //have we fount it?
	int IDs[] = { 234,567,321,567,234,789 }; //slot array 
	location = sizeof(IDs) / sizeof(IDs[0]); //You can put a lot of slots since it divides by itself
	//add a variable that keeps track of how many you've found
	int lol = 0;
	int searchItem;
	cout << "Enter ID you are searching for: " << endl;
	cin >> searchItem;



	while (location >=0) { //keeping going as long as we haven't reached the end AND we haven't found it
		if (IDs[location] == searchItem) {//check if what were looking for is in that slot
			found = true;
			cout << "Id " << searchItem << " was found in slot " << location << "." << endl;
			//add one to that variable here
			lol += 1;
			location--;
		}
		else
			location--; // This counts up or down for your array if you + or -

	}
		 

	if (found == true) {
		
		//print out how many you found
		cout << "Thre are " << lol<< " numbers of ID's with that number" << endl;
	}
	else
		cout << "ID was not found." << endl;

}

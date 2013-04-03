#include <iostream>
#include <math.h>
using namespace std;
int main () {
	int testnumber = 3; //declares the number that will be tested on. this is the first prime
	int findingprime = testnumber - 1; // the number that is used to divid by testnumber to check if there is a remander
	while (testnumber < 100) { //loops while primes are under 100
		if (testnumber%findingprime == 0) { // check for to see if there is no remander and if there is its not a prime number and adds 2 to the testnumber to start testing the next number
			testnumber = testnumber + 2;
			findingprime = testnumber - 1;
		}
		else { //else if there is a remander it takes one of the findingprime veriable and reruns the loop
			findingprime = findingprime - 1;
		}
		while (findingprime == 1) { //if it goes through all the looping and finding prime is equal to 1 then that means testnumber is a prime
			cout << testnumber << "\n"; //print the prime to the screen
			testnumber = testnumber + 2; //moves onto next number
			findingprime = testnumber - 1; // sets findingprime to one lest then testnumber
		}
	}
	cin.get(); // waits for user to press enter to stop the programe.
}

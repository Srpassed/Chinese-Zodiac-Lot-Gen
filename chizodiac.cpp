/*
Juan Rivera
COSC 1436
Exam-Chinese Zodiac/Lottery Number Generator
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
//First ask user for year of birth PART 1
	int year;

	cout << "Please Enter your birth year: ";
	cin >> year;
	if ((year < 1900) || ( year > 2018))
	cout << "Please Enter date from 1900 to 2018" << endl;

	//get mod number from 0-11
	else switch(year % 12)
	{

	case 0:
	cout << "You got Monkey: They are very funny and good problem solvers!" << endl;
	break;

	case 1:
	cout << "You got Rooster: They are talented and hard workers!" << endl;
	break;

	case 2:
	cout << "You got Dog: They are very loyal and can keep a secret!" << endl;
	break;

	case 3:
	cout << "You got Pig: They are good students, honest and brave!" << endl;
	break;

	case 4:
	cout << "You got Rat: They are very popular!" << endl;
	break;

	case 5:
	cout << "You got Ox: They are dependeple and calm!" << endl;
	break;

	case 6:
	cout << "You got Tiger: They are brave and respected" << endl;
	break;

	case 7:
	cout << "You got Rabbit: They are nice to be around!" << endl;
	break;

	case 8:
	cout << "You got Dragon: They have good health and lots of energy!" << endl;
	break;

	case 9:
	cout << "You got Snake: They have good luck with money!" << endl;
	break;

	case 10:
	cout << "You got Horse: They are popular, cheerful, and quick to compliment others!" << endl;
	break;

	case 11:
	cout << "You got Ram: They are good Artists!" << endl;
	break;

	}
	/*
	PART 2 Lottery number generator
	1)make random number generator
	2)make them into an integer from 1-54
	3)display 6 integers to user
	*/

	srand(time(0));
	int random = rand() % 54 + 1;
	cout << " YOUR LUCKY LOTTERY NUMBERS" << endl;
	cout << random << " " << random << " " << random << " " <<random << " " <<random << " " << random << endl;







	return 0;
}

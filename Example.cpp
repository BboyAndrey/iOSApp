
#include <iostream>
#include <string>

using std::cout; 

using std::cin; 
using std:: endl;

struct CandyBar
{
	std::string namesweet;
	float weight;
	int caloriy;
};

int main() {

	CandyBar snack = {"Mocha Munch", 2.3, 350};
	cout << snack.namesweet << " " << snack.weight << " " << snack.caloriy << endl << endl;
	cout << "Hello World" << endl;

	
	cout << endl;
	
	system ("pause");
	return 0; 
}

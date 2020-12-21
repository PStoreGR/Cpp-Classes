#include "MyClass.h"

int main() 
{ 
	MyClass class1, class2;
	string nam;
	int val;

	cout << "\nInitial values for object 1" << endl; 
	cout << "_____________________________" << endl; 
	
	class1.print();
	cout << "\nInitial values for object 2" << endl; 
	cout << "_____________________________" << endl; 
	
	class2.print(); 

	cout << "\n\nGive a name for object 1: "; 
	cin >> nam; 
	
	class1.setName(nam); 
	class1.print(); 

	cout << "\nGive a value for object 1: "; 
	cin >> val; 
	
	class1.setValue(val); 
	class1.print(); 

	cout << "\n\nGive a name and a value for object 2: "; 
	cin >> nam >> val; 
	
	class2.setAll(nam, val); 
	class2.print(); 

	system("PAUSE"); 

	return 0;
}

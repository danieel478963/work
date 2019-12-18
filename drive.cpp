#include "WorkingStudent.h"
#include <string.h>
#include <string>
int main() {
	int size , i , choose , age , average ;
	long id ;
	float salary ;
	bool same_institute ;
	string name, institute ;
	cout << "Enter number of Persons: " << endl ;
	cin >> size;
	Person** arr = new Person*[size];
	for (i = 0; i < size; i) {
		cout << "Choose what class u want " << endl << "1-Person // 2-Student // 3-Employee // 4-WorkingStudent " << endl;
		cin >> choose;
		do {
			cout << "Please enter a name: " << endl;
			cin >> name;
		} while (name.size() > 10);
		cout << "Please enter a id: " << endl;
		cin >> id;
		cout << "Please enter a age: " << endl;
		cin >> age;
		if (choose == 1) {
			arr[i] = new Person(name, id, age);
			i++;
		}
		if (choose == 2) {
			cout << "Please enter a average: " << endl;
			cin >> average;
			do {
				cout << "Please enter a institute: " << endl;
				cin >> institute;
			} while (institute.size() > 10);
			arr[i] = new Student(average, institute, name, id, age);
			i++;
		}
		if (choose == 3) {
			cout << "Please enter a salary: " << endl;
			cin >> salary;
			arr[i] = new Employee(salary, name, id, age);
			i++;
		}
		if (choose == 4) {
			cout << "Please enter a salary: " << endl;
			cin >> salary;
			cout << "Please enter a average: " << endl;
			cin >> average;
			cout << "Please enter a institute: " << endl;
			cin >> institute;
			cout << "please enter same institute " << endl;
			cin >> same_institute;
			arr[i] = new WorkingStudent(same_institute, average, institute, salary, name, id, age);
			i++;
		}
		if (choose > 4 or choose < 1)
			cout << "u enter wrong choose please try again!!!" << endl;
	}
	for (i = 0; i < size; i++)
		arr[i]->print();
	system("pause");
	return 0;
}
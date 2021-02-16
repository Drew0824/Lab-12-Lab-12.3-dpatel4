#include <iostream>
using namespace std;

int main() {
  double numHours,numHours2, average, average2;
	int numStudents;
	double total = 0;
  double total2 = 0;

	cout << "This program will find the average number of hours"
		<< " that students spent programming and studying biology over a weekend" << endl << endl;
	cout << "How many students are there?" << endl;
	cin >> numStudents;

	for (int student = 1; student <= numStudents; student++)
	{
		cout << endl << "Please enter the number of hours programming by student "
			<< student << " over the weekend." << endl;
		cin >> numHours;

		total = total + numHours;


    cout << endl << "Please enter the number of hours studying biology by student "
			<< student << " over the weekend." << endl;
		cin >> numHours2;


    total2 = total2 + numHours2;



	}

	average = total / numStudents;
  average2 = total2 / numStudents; 

	cout << endl;
	cout << "The average number of hours spent programming by "
		<< "the students was " << average << endl << endl << endl;

  cout << "The average number of hours  spent studying biology by "
		<< "the students was " << average2 << endl << endl << endl;





}
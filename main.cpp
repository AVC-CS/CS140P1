#include "students.hpp"

void printStudent(Student);
int main()
{
	int id;
	string name;
	double score;
	Student student;
	Student s1;
	cout << "Enter your ID : ";
	cin >> id;
	cout << "Enter your name: ";
	cin >> name;
	student.setSid(id);
	student.setSname(name);
	for (int i = 0; i < Nscores; i++)
	{
		cout << "Enter your score" << i << "  ";
		cin >> score;
		student.setScores(i, score);
	}

	printStudent(student);
}

void printStudent(Student s)
{
	cout << "\nID\t Name\t\t Scores \t\t Sum \t Average \t" << endl;
	cout
		<< s.getSID() << "\t";
	cout << s.getSname() << "\t\t";
	for (int i = 0; i < Nscores; i++)
	{
		cout << s.getScores(i) << "\t";
	}
	cout << s.getSum() << "\t";
	cout << s.getAvg() << "\t";
	cout << endl;
}
#include"main.h"

class Student 
{
public:
	string name;
	string surname;
	int age;
	float avg_mark;

	void clear()
	{
		name = "no name";
		surname = "no surname";
		age = 0;
		avg_mark = 0;
	}
};

int main()
{
	Student st;

	cout << st.surname << endl;
	cout << st.name << endl;
	cout << st.age << endl;
	cout << st.avg_mark << endl;



	return 0;
}
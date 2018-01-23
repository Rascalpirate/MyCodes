#include <std_lib_facilities.h>

//#include <iostream> //因为编译器的库不标准，所以仅包含<iostream>时，使用string不会报错
//#include <string> // 这个头文件一定要加，否则cin和cout会报错的，而且标准的编译器中，就是需要包含这个头文件才能用string的
//using namespace std;

int main()
{
	cout << "Please enter your  name(followed by enter):\n";
	string your_name;
	cin >> your_name;
	cout << "Please enter your gender(followed by enter):\n";
	string your_gender;
	cin >> your_gender;

	//cin >> your_name >> your_gender;

	cout << "Please enter your   age(followed by enter):\n";
	int your_age;
	cin >> your_age;

	cout << "Hello," << your_name << "(" << your_gender << ", age " << your_age << ")" << "!" << endl;

	cout << "Hello, world!\n";

	int number_of_words = 0;
	string previous = " ";
	string current;
	while (cin >> current)
	{
		number_of_words++;
		if (previous == current)
			cout << "word number" << number_of_words << "repeated word: " << current << endl;
		previous = current;
	}

	// 这个地方是有问题的，如果上面你的cin用"ctrl+Z" + enter结束的，那么这里会将多余的输入留给后面的cin
	// 注意一下这里的输入问题

	const double cm_per_inch = 2.54;
	double length;
	char unit;
	char unit2;
	cout << "please enter a length followed by a unit (c or i):\n";
	cin >> length >> unit;
	//while (cin >> length >> unit >> unit2)
	//{
	//	cout << __LINE__ << endl;
	//}
	cout << length << " aa  " << unit << endl;
	cout << "aa" << endl;

	system("pause");
	return 0;

}
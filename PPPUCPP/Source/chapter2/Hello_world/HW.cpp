#include <std_lib_facilities.h>

//#include <iostream> //��Ϊ�������Ŀⲻ��׼�����Խ�����<iostream>ʱ��ʹ��string���ᱨ��
//#include <string> // ���ͷ�ļ�һ��Ҫ�ӣ�����cin��cout�ᱨ��ģ����ұ�׼�ı������У�������Ҫ�������ͷ�ļ�������string��
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

	// ����ط���������ģ�����������cin��"ctrl+Z" + enter�����ģ���ô����Ὣ������������������cin
	// ע��һ���������������

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
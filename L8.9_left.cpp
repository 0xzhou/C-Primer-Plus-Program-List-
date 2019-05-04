// left.cpp --string function with a default argument
#include<iostream>
const int ArSize = 80;
char * left(const char * str, int n = 1);
// you must add defaults from right to left
int main()
{
	using namespace std;
	char sample[ArSize];
	cout << "Enter a string:\n";
	cin.get(sample, ArSize); // 读取字符串
	char * ps = left(sample, 4);
	cout << ps << endl;
	delete[] ps;
	ps = left(sample);
	cout << ps << endl;
	delete[] ps;
	return 0;
}
// This function returns a pointer to a new string
// consisting of the first n characters in the str string.
char * left(const char * str, int n)
{
	if (n < 0)
		n = 0;
	char * p = new char[n + 1]; // "+1" for the '\0'
	int i;
	for (i = 0; i < n&&str[i]; i++)
		p[i] = str[i];
	while (i <= n)
		p[i++] = '\0';
	return p;
}

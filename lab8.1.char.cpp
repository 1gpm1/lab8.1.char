#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* str)
{
	int k = 0;
	while (*str != '\0') {
		if (*str == *(str + 1) && *str == *(str + 2) && *str == *(str + 3)) {
			k++;
		}
		str++;
	}
	return k;
}
void Change(char* str)
{
	while (*str != '\0') {
		if (*str == *(str + 1) && *str == *(str + 2) && *str == *(str + 3)) {
			strncpy(str, "**", 2);
			memmove(str + 2, str + 4, strlen(str + 4) + 1);
		}
		str++;
	}
}
int main()
{
	char str[101];

	cout << "Enter string:" << endl;
	cin.getline(str, 100);

	cout << "There is " << Count(str) << " four simular char in line" << endl;

	Change(str);

	cout << str << endl;

	return 0;
}

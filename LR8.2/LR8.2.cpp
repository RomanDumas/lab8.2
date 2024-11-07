#include <iostream>
#include <string>

using namespace std;
int Count(string& str) {
	int k = 0;
	size_t pos = 0;
	if (str[0] = 'b')
		k++;
	while ((pos = str.find(' ', pos)) != -1) {
		if (str[pos + 1] == 'b')
			k++;
		pos++;
	}
	return k;
}
int main() {

	string str;

	cout << "Enter text " << endl;
	getline(cin, str);

	cout << "amount of words beginign 'b': \n" << Count(str);
	return 0;
}
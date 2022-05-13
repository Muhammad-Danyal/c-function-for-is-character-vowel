#include<iostream>
using namespace std;
bool isvowel(char);

int main() {
	char x;
	cout << "Enter any character\n";
	cin >> x;
	if (isvowel(x))
		cout << x  << " is a vowel\n";
	else
		cout << x  << "is NOT a vowel\n";
	return 0;
} 

bool isvowel(char x) {
	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
		return true;	
	else 
		return false;
	
}
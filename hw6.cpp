#include <iostream>

using namespace std;

void isVowel(char c);

int main()
{
    isVowel('a');
    isVowel('b');
    return 0;
}

void isVowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') cout << "Vowel" << endl;
    else cout << "Not a vowel" << endl;
}
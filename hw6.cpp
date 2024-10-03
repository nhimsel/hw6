#include <iostream>

using namespace std;

void isVowel(char c);
int addition(int i, int n);

int main()
{
    cout << addition(2,3);
    return 0;
}

void isVowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') cout << "Vowel" << endl;
    else cout << "Not a vowel" << endl;
}

int addition(int i, int n)
{
    return (i+n);
}
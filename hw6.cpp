#include <iostream>

using namespace std;

void isVowel(char c);
int addition(int i, int n);
void isUppercase(string s);
string stringConcat(string s, string z);

int main()
{
    
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

void isUppercase(string s)
{
    int lwr = 0;
    for (int i=0; i<s.length(); i++)
    {
        if (s[i]>='a'&&s[i]<='z') lwr++;
    }
    if (lwr>0) cout << "Not Uppercase";
    else cout << "Uppercase";
}

string stringConcat(string s, string z)
{
    return (s+z);
}
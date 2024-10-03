#include <iostream>

using namespace std;

void isVowel(char c);
int addition(int i, int n);
void isUppercase(string s);
string stringConcat(string s, string z);
int larger(int i1, int i2);
int vowelNum(string s);
bool isPrime(int i);
void printASCII(char c);
int digitSum(int i);

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

int larger(int i1, int i2)
{
    if (i1>i2) return i1;
    else return i2;
}

int vowelNum(string s)
{
    int n=0;
    for (int i=0; i<s.length(); i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') n++;
    }
    return n;
}

bool isPrime(int i)
{
    for (int n=2; n<i; n++)
    {
        if(i%n==0) return false;
    }
    return true;
}

void printASCII(char c)
{
    cout << (int)c;
}

int digitSum(int i)
{
    int n=0;
    while (i!=0)
    {
        n+=i%10;
        i/=10;
    }
    return n;
}
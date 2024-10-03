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
string reverse(string s);
bool isPalindrome(string s);
int sumEven(int n);
string longestWord(string s);
int numWords(string s);
bool isPerfect(int i);
char returnRepeating(string s);

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

string reverse(string s)
{
    string r = "";
    for (int i = s.length()-1; i>=0; i--)
    {
        r+=s[i];
    }
    return r;
}

bool isPalindrome(string s)
{

    string r = "";
    for (int i = 0; i<s.length(); i++)
    {
        if ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
        {
            if (s[i]>='a'&&s[i]<='z') r+=s[i];
            else r+=(s[i]+32);
        }
    }
    if (r==reverse(r)) return true;
    else return false;

}

int sumEven(int n)
{
    int tmp=0;
    if(n%2==1) n--;
    while (n>0)
    {
        tmp+=n;
        n-=2;   
    }
    return tmp;
}

string longestWord(string s)
{
    int i = 0;
    int ls = 0;
    int l = 0;
    for (int x = 0; x<s.length(); x++)
    {
        if (s[x]==' ')
        {
            if (x-ls>l)
            {
                l=x-ls;
                i=x-l+1;
            }
            ls=x;
        }
        else if (x==s.length()-1)
        {
            if (x-ls>l)
            {
                l=x-ls;
                i=x-l+1;
            }
        }
    }
    return s.substr(i,l);
}

int numWords(string s)
{
    int n=0;
    for (int i=0; i<s.length(); i++)
    {
        if (s[i]==' ') n++;
        else if (i==s.length()-1 && s[i]!=' ') n++;
    }
    return n;
}

bool isPerfect(int i)
{
    int t=0;
    for (int n=1; n<i; n++)
    {
        if (i%n==0) t+=n;
    }
    if (t==i) return true;
    return false;
}

char returnRepeating(string s)
{
    char c = s[0];
    for (int i=1; i<s.length(); i++)
    {
        if (c==s[i]) return c;
        c = s[i];
    }
    return ' ';
}
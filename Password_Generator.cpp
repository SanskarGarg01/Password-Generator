#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    string pass;
    string data="abcdefghijklmnopqrstuvwxyz"
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                "0123456789"
                "~!@#$%^&*()_?";
    for(int i=0;i<12;i++)
    {
        pass=pass+data[rand()%76];
    }
    cout<<pass;
}

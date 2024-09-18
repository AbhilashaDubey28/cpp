#include<iostream>
using namespace std;
void cybrom(int c)
{
    try
    {
    if (c==1)
    {
        throw 1;
    }
    else if (c==-1)
    {
        throw 2.5;
    }
    else if (c==0)
    {
        throw 'c';
    }
    cout<<"welcome";
}
catch(int c)
{
    cout<<"caught integer\n";
}
catch(double c)
{
    cout<<"caught double\n";
}
catch(char c)
{
    cout<<"caught char\n";
}

}
int main()
{ /// ex.single try with multiple catch
 cybrom(1);
 cybrom(0);
 cybrom(-1);
 cybrom(30);

}
//special - catch(...)

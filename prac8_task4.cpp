#include<iostream>
using namespace std;
int main()
{
int a[]={10,20,30};
int *p;
int **q;
p=a;
q=&p;
cout<<"before=>"<<**q<<endl;
**q=90;
cout<<"after==>"<<**q<<endl;
return 0;
}

//Програмата извежда дали 'х' се съдържа в редицата от цели числа
#include <iostream>
using namespace std;
int main ()
{
    int n;
    while(n<=1 || n>=11) {cout<<"n = "; cin>>n;}

    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    int x;
    cout<<"x = "; cin>>x;

    bool ima=false;

    int j;
    for(j=0; j<n; j++)
    {
        if(a[j]==x){ima=true;}
    }

    if(ima==true){cout<<"Yes";}
    else{cout<<"No";}

    return 0;
}

/*  #include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007
int main()
{
   ll t;
   cin >> t;
   while (t--)
   {
        ll n;
       cin >> n;
       cout << round(n / 2) << endl;
   }
}
#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int
#define lld long double

// function prototype
double RoundNumber(double floatNumber);

int main()
{
   ll t;
   cin >> t;
   while (t--)
   {

       double floatNumber = 0;

       cin >> floatNumber;

       // cout<<endl<<floatNumber<<" rounded to the nearest "
       //	"whole number is: "<< RoundNumber(floatNumber)<<endl;
       cout << RoundNumber(floatNumber / 2) << endl;

       return 0;
   }
}

double RoundNumber(double floatNumber)
{

   double intNumber = 0;

   double fraction = modf(floatNumber, &intNumber);

   if (fraction >= .50)
   {
       ++intNumber;
   }
   return intNumber;
}*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007
#include <cmath>
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        double n;
        cin >> n;
        double number = 0;
        double fraction = modf(n / 2, &number);
        if (fraction >= .50)
        {
            ++number;
        }

        cout << int(number) << endl;
    }
}

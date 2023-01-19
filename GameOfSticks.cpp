#include <bits/stdc++.h>
using namespace std;
// int main()
//{
/* int n, m;
 cin >> n >> m;
 int no_of_points = (n * m);
 if (n == 1 && no_of_points % 2 == 0 || n == 1 && no_of_points % 2 != 0 || m == 1 && no_of_points % 2 == 0 || m == 1 && no_of_points % 2 != 0)
 {
     cout << "Akshat";
 }
 if (n != 1 && m != 1 && no_of_points % 2 == 0)
 {
     cout << "Malvika";
 }
 else if (n != 1 && m != 1 && no_of_points % 2 != 0)
 {
     cout << "Akshat";
 }*/

/* int n, m, t = 0;
 cin >> n >> m;
 while (n && m)
 {
     n--;
     m--;
     t++;
 }
 if (t % 2)
     cout << "Akshat";
 else
     cout << "Malvika";
 return 0;*/
void solve()
{
    long long N, M;
    cin >> N >> M;
    if (N == 1 || M == 1)
        cout << "Akshat" << endl;
    else
    {
        if ((min(N, M) % 2 == 1))
            cout << "Akshat" << endl;
        else
            cout << "Malvika" << endl;
    }
}
int main()
{
    //  long long  T;
    //  cin>>T;
    //  while(T-->0)
    //  {
    solve();
    

    return 0;
}

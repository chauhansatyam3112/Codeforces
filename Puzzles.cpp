#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    int max_element = 0;
    int min_element = arr[0];
    int count = 1;
    int count1 = 0;
    int curr_diff = 0;
    int curr_diff1 = 0;
    for (int i = 0; i < m; i++)
    {
        if (arr[i + 1] > max_element)
        {
            max_element = arr[i + 1];
        }
        else if (arr[i + 1] <= min_element)
        {
            min_element = arr[i + 1];
        }
        curr_diff = max_element - min_element;
        count++;
        if (count == n)
        {
            break;
        }
    }

    /*for (int i = count; i < m; i++)
    {
        if (arr[i + 1] > max_element)
        {
            max_element = arr[i + 1];
        }
        else if (arr[i + 1] <= min_element)
        {
            min_element = arr[i + 1];
        }
        curr_diff1 = max_element - min_element;
        count1++;
        if (count1 == n)
        {
            break;
        }
    }*/
    if (curr_diff > curr_diff1)
    {
        cout << curr_diff1;
    }
    else
    {
        cout << curr_diff;
    }
}
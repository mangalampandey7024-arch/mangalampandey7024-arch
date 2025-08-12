#include <bits/stdc++.h>
using namespace std;

int order(int num)
{
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int num)
{
    int order_n = order(num);
    int num_temp = num, sum = 0;

    while (num_temp > 0)
    {
        int curr = num_temp % 10;
        sum += pow(curr, order_n);
        num_temp /= 10;
    }
    if (sum == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Driver code
int main()
{

    cout << "Armstrong numbers between 1 to 1000 : ";
    for (int num = 1; num <= 1000; ++num)
    {

        if (isArmstrong(num))
        {
            cout << num << " ";
        }
    }
    return 0;
}

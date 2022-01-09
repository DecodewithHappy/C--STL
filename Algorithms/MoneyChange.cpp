#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a <= b;
}

int main()
{

    // Coin change problem
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    // we need to check values which is close to the money
    int n = sizeof(coins) / sizeof(coins[0]);
    int money = 168;
    // auto lb = lower_bound(coins, coins+n, money);// it will find (>= money).
    // int LB = lb - coins;

    while (money > 0)
    {
        int lb = lower_bound(coins, coins + n, money, compare) - coins - 1;

        int m = coins[lb];
        cout << m << " ";
        money -= m;
    }

    //cout << lb << " value " << coins[lb];

    return 0;
}
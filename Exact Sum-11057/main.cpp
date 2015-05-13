#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int testCase, money;
    int prices[10001];
    int difference = 99999999, a = 0, b = 0;

    while (scanf("%d",&testCase) != EOF) {
        //cin>>testCase;
        for (int i = 0; i < testCase; i++) {
            cin >> prices[i];
        }
        cin>>money;

        for (int i = 0; i < testCase; i++) {
            for (int j = i + 1; j < testCase; j++) {
                if (prices[i] + prices[j] == money) {
                    if (abs(prices[i] - prices[j]) < difference) {
                        difference = (prices[i] > prices[j]) ? prices[i] - prices[j] : prices[j] - prices[i];
                        a = prices[i];
                        b = prices[j];
                    }
                }
            }
        }
        if (a > b) {
            cout << "Peter should buy books whose prices are " << b << " and " << a << ".\n" << endl;
        } else {
            cout << "Peter should buy books whose prices are " << a << " and " << b << ".\n" << endl;
        }
        difference = 999999;
    }

    return 0;
}

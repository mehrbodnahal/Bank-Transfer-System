#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float total_cash = 1000;
    float transfer;
    float rem;

    while (true)
    {
        cout << "Total cash = $" << total_cash << endl;
        cout << "Enter number you wish to transfer: $";
        cin >> transfer;

        if (transfer > total_cash)
        {
            cout << "You cannot transfer more than the total cash available." << endl;
            continue;
        }

        cout << "Are you sure? ";
        string yes;
        cin >> yes;

        if (yes == "yes")
        {
            rem = total_cash - transfer;
            total_cash = rem;

            cout << "Cash remaining: $" << total_cash << endl;
            cout << "----------------" << endl;
        }

        else if (yes == "no")
        {
            system("clear");
            continue;
        }
        else
        {
            cout << "error";
            return 0;
        }
    }
    return 0;
    getchar();
}
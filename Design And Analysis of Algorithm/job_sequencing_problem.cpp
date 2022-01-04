#include <iostream>
#include <algorithm>
using namespace std;

struct Job
{
    int id;
    int dead;
    int profit;
    int penalty;
};

bool compare_profit(Job a, Job b)
{
    return (a.profit > b.profit);
}
bool compare_panelty(Job a, Job b)
{
    return (a.penalty > b.penalty);
}
void printJobScheduling(Job arr[], int n)
{
    sort(arr, arr + n, compare_profit);
    int result[n];
    int slot[n];
    int max_profit = 0;
    int min_penalty = 0;
    for (int i = 0; i < n; i++)
        slot[i] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = min(n, arr[i].dead) - 1; j >= 0; j--)
        {
            if (slot[j] == 0)
            {
                result[j] = i;
                max_profit += arr[i].profit;
                slot[j] = -1;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
        if (slot[i])
            cout << arr[result[i]].id << " ";
    cout << "\n" << "The Maximum profit is :" << max_profit;
}
void printJobScheduling_by_min_panelty(Job arr[], int n)
{
    sort(arr, arr + n, compare_panelty);
    int result[n];
    int slot[n];
    int min_penalty = 0;
    for (int i = 0; i < n; i++)
        slot[i] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = min(n, arr[i].dead) - 1; j >= 0; j--)
        {
            if (slot[j] == 0)
            {
                result[j] = i;
                slot[j] = -1;
                break;
            }
            else
            {
                min_penalty += arr[i].penalty;
                break;
            }
            
        }
    }
    

    for (int i = 0; i < n; i++)
        if (slot[i])
            cout << arr[result[i]].id << " ";
    cout << "\n"
         << "The Minimum penalty is :" << min_penalty;
}
int main()
{
    Job arr[] = {{1, 2, 100,5}, {2, 1, 19,4}, {3, 2, 27,3}, {4, 1, 25,5}, {5, 3, 15,7}};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Following is maximum profit sequence of jobs \n";
    printJobScheduling_by_min_panelty(arr, n);
    return 0;
}

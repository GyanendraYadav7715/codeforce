#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;

    int totalTime = 240;
    int timeLeft = totalTime - k;
    int problemsSolved = 0;
    int timeSpentOnProblems = 0;

    for (int i = 1; i <= n; i++)
    {
        int timeForCurrentProblem = 5 * i;

        // Check if we have enough time left to solve this problem
        if (timeSpentOnProblems + timeForCurrentProblem <= timeLeft)
        {
            timeSpentOnProblems += timeForCurrentProblem;
            problemsSolved++;
        }
        else
        {
            // Not enough time for any more problems
            break;
        }
    }

    cout << problemsSolved << endl;

    return 0;
}
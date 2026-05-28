#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class solution
{
public:
    int minSubArrayLen(int target, vector<int> nums)
    {
        int n = nums.size();
        int i = 0;
        int sum = 0;
        int minLen = INT_MAX;

        for (int j = 0; j < n; j++)
        {
            sum += nums[j];

            while (sum >= target)
            {
                minLen = min(minLen, j - i + 1);
                sum -= nums[i];
                i++;
            }
        }
        return (minLen == INT_MAX) ? 0 : minLen;
    }
};

int main()
{
    int n, target;

    cout << "enter number of element : ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " number of element ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << " enter target sum for subArray : ";
    cin >> target;

    solution sol;
    int result = sol.minSubArrayLen(target, nums);

    cout << "the output is : " << result;
}
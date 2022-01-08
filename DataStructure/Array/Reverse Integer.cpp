/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Input: x = 123
Output: 321
Input: x = -123
Output: -321
*/

#include <iostream>
using namespace std;

class Solution{
    public:
    long long int reverse(int n){
        long long int answer = 0;
        while(n != 0){
            answer = (n % 10) + (answer * 10);
            n /= 10;
        }
        return answer;
    }
};

int main()
{
    int n = 1534236469;
    Solution s;
    cout << s.reverse(n);
    return 0;
}
#include "iostream"
#include "string"

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int i = 0;
        int j = x/2 + 1;
        while (i <= j){
            long long mid = (i + j)/2;
            long long result = mid * mid;
            if (result == x){
                return mid;
            }
            else if (result < x)
                i = mid + 1;
            else
                j = mid-1;
        }
        return j;
    }
};

int stringToInteger(string input) {
    return stoi(input);
}

int main() {
    string line;
    while (getline(cin, line)) {
        int x = stringToInteger(line);

        int ret = Solution().mySqrt(x);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}

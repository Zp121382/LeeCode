#include "iostream"

using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";

        string previous = countAndSay(n - 1), result = "";
        int count = 1;

        for (int i = 0; i < previous.length(); ++i)
        {
            if (previous[i] == previous[i+1])
            {
                count++;
            }
            else{
                result += to_string(count) + previous[i];
                count = 1;
            }
        }
        return result;
    }
};

int stringToInteger(string input) {
    return stoi(input);
}

int main() {
    string line;
    while (getline(cin, line)) {
        int n = stringToInteger(line);

        string ret = Solution().countAndSay(n);
        string out = (ret);
        cout << out << endl;
    }
    return 0;
}

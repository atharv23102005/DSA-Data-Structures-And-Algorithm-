class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;

        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        for (string word : words) {
            int r = getRow(word[0], row1, row2, row3);
            bool valid = true;

            for (char c : word) {
                if (getRow(c, row1, row2, row3) != r) {
                    valid = false;
                    break;
                }
            }

            if (valid)
                result.push_back(word);
        }
        return result;
    }

private:
    int getRow(char c, string& r1, string& r2, string& r3) {
        c = tolower(c);
        if (r1.find(c) != string::npos) return 1;
        if (r2.find(c) != string::npos) return 2;
        return 3;
    }
};

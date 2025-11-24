class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "D") {
                st.push_back(st.back() * 2);
            }
            else if (operations[i] == "C") {
                st.pop_back();
            }
            else if (operations[i] == "+") {
                st.push_back(st.back() + st[st.size() - 2]);
            }
            else {
                st.push_back(stoi(operations[i]));
            }
        }

        return accumulate(st.begin(), st.end(), 0);
    }
};

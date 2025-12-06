class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> st;
       for(int element : arr){
         if(st.count(element * 2) > 0 ||
               (element % 2 == 0 && st.count(element / 2) > 0))
        return true;
         st.insert(element);
       }
      return false;
    }
};

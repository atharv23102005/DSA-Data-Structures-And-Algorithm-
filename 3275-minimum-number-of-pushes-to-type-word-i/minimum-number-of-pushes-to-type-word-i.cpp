class Solution {
public:
    int minimumPushes(string word) {
       // int result = 0 ;
        vector<int> mp(26, 0);
      //  unordered_map<int , int > mp;
      for(char &ch : word){
        mp[ch-'a']++;

      }
       // int assign_key=2;
      //  for(char &ch : word){
      //      if(assign_key >9){
      //          assign_key = 2;
       //     }
      //      mp[assign_key]++;
      //      result += mp[assign_key];
      //      assign_key++;
     //   }
    //    return result ;
    sort(begin(mp), end(mp), greater<int>());
    int result = 0 ;
    for(int i = 0;i <26;i++){
        int freq = mp[i];
        int press= i/8 +1 ;
       result += freq * press;
    }
     return result ;
    }  
   
};
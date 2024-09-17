class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int> mp;
        string st ="";
        for(int i=0; i<s1.size(); i++){
            if(s1[i]!=' '){
                st = st + s1[i];
            }
            else{
                mp[st]++;
                st = "";
            }
        }
        mp[st]++;
        st = "";
        for(int i=0; i<s2.size(); i++){
            if(s2[i]!=' '){
                st = st + s2[i];
            }
            else{
                mp[st]++;
                st = "";
            }
        }
        mp[st]++;
        vector<string> v;
        for(auto j:mp){
            if(j.second<2){
                v.push_back(j.first);
            }
        }
        return v;
    }
};

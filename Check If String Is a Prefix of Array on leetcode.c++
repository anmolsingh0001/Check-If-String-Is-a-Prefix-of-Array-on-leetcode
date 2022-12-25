class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string test;
        for(int i=0; i<words.size(); i++){
            test+=words[i];
            if(s==test){
                return true;
            }
        }
        return false;
        
    }
};
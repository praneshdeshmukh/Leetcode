class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        unordered_set<char> uniqueChars;
        for(char ch:s){
            if (isalpha(ch)) {
                uniqueChars.insert(tolower(ch));
            }
        }
        return uniqueChars.size() == 26;
    }

};
                

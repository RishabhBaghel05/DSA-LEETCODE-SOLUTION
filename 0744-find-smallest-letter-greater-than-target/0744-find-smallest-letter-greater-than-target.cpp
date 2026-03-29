class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        for(int i=0;i<letters.size();i++)
         if (letters[i]>target)
         return letters[i];
         else
         {
             cout<<letters[0]<<endl;
         }
         return letters[0];
    }
};
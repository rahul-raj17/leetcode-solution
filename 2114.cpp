class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
      vector<int> a;
      string str;
      for(int i=0; i<sentences.size(); i++) {
          str = sentences[i];
          int count = 0;
          for(int j=0; j<str.length(); j++) {
              if(str[j] == ' ') {
                  count++;
              }
          }
          a.push_back(count);
          sort(a.begin(),a.end());
      }
      return a[a.size()-1] + 1;
    }
};


// 2nd brutforce approach
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        // vector<int> a;
        int maximum = 0;
        // string str="";
        for(int i=0; i<sentences.size(); i++) {
            string str = sentences[i];
            int temp = 0;
            // cout<<str;
            for(int j=0; j<str.length(); j++) {
                if(str[j] == ' '){

                    temp++;
                }
                
            }
            // a.push_back(temp);
            // sort(a.begin(),a.end());

            maximum = max(maximum, temp);
  
        }
        // return a[a.size()-1]+1;
        return maximum + 1;
    }
};
//  Check if Word Equals Summation of Two Words
bool isSumEqual(string firstWord, string secondWord, string targetWord) {
       string f = "0", s = "0", t = "0";
        
        for(int i = 0 ; i < firstWord.length(); i++)
            f += to_string(firstWord[i] - 'a');
        
        for(int i = 0 ; i < secondWord.length(); i++)
            s += to_string(secondWord[i] - 'a');
        
        for(int i = 0 ; i < targetWord.length(); i++)
            t += to_string(targetWord[i] - 'a');
        
        cout << f << " " << s << " " << t << endl;
        int fn = stoi(f);
        int sn = stoi(s);
        int tn = stoi(t);
        return (fn + sn) == tn;
    }
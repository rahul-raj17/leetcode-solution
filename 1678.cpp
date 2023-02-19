//  Goal Parser Interpretation
 string interpret(string command) {

        string s="";
        for(int i=0; i<command.length(); ) {
            if(command[i] == 'G') {
                s = s + "G";
                i++;
            }
            else if(command[i] == '(' && command[i+1] == ')') {
                s = s + "o";
                i = i + 2;
            }
            else if(command[i] == '(' && command[i+1] == 'a' && command[i+2] == 'l' && command[i+3] == ')') {
                s = s + "al";
                i = i + 4;
            }
        }
        return s;
    }
class Solution {
public:
    string interpret(string command) {
        
            string g="";
            for(int i=0; i<command.length(); i++){
                    if(command[i]=='(' and command[i+1]==')'){
                            g=g+'o';
                    }
                    else if(command[i]==')' || command[i]=='('){
                            continue;
                    }
                    else
                    {
                            g=g+command[i];
                    }
                    
            }
            return g;
    }
};
bool higherPrec(char c1, char c2) {
    if(c1=='^' && c2=='^') return false;
    else if(c1=='^') return true;
    else if((c1=='/' || c1=='*') && (c2=='/' || c2=='*')) return false;
    else if(c1=='/' || c1=='*') return true;
    
    return false;
    
}

string infixToPostfix(string s) {
    string res="";
    stack<char> st;
    
    for(char c:s) {
        if(c>='a' && c<='z') res+=c;
        else {
            if(c=='(') st.push('(');
            else if(c==')') {
                while(st.top()!='(') {res+=st.top(); st.pop();}
                st.pop();
            } else {
                if(st.empty()) st.push(c);
                else {
                    if(st.top()=='('|| higherPrec(c, st.top())) st.push(c);
                    else if(!higherPrec(c, st.top())) {
                        while(!st.empty() && !higherPrec(c, st.top())) {
                            res+=st.top();
                            st.pop();
                        }
                        st.push(c);
                    }
                }
            }
        }
    }
    
    while(!st.empty()) {res+=st.top(); st.pop();}
    
    return res;
}

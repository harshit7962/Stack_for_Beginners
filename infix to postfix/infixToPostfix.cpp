//To check if precedence of two operators
bool higherprec(char c1, char c2) {
    if(c2=='(') return true;
    else if(c1=='^') return true;
    else if(c2=='^') return false;
    else if((c1=='/'||c1=='*') && (c2=='/'||c2=='*')) return false;
    else if(c1=='/'|| c1=='*') return true;
    return false;
}

string infixToPostfix(string s) {
    stack<char> st;
    
    string res ="";
    
    for(char c:s){
        if((c>='a'&&c<='z') || (c>='A' && c<='Z')) res+=c;
        else if(c=='(') {st.push(c);}
        else if(c==')') {
            while(st.top()!='(') {
                res+=st.top();
                st.pop();
            }
            st.pop();
        } else {
            if(st.empty()) st.push(c);
            else {
                while(!st.empty() && !higherprec(c, st.top())) {
                    res+=st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
    }
    
    while(!st.empty()) {res+=st.top();st.pop();};
    
    return res;
}

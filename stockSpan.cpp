//This is the classical stock span problem...
//The problem aims at returning an array corresponding to number of consecutive days before ith day the stock was below the current value...
vector<int> stockSpan(int arr[], int n) {
    stack<int> s;
    s.push(0);
    vector<int> res(n);
    res[0]=1;
    for(int i=1;i<n;i++) {
        while(!s.empty() && arr[i]>=arr[s.top()]) {
            s.pop();
        }
        
        res[i] = s.empty()?i+1:i-s.top();
        s.push(i);
    }
    
    return res;
}

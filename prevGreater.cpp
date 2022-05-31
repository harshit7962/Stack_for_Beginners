//Here we need to print the prev greater element of each element in the array, if it is not there we return -1
vector<int> prevGreater(int arr[], int n) {
    stack<int> s;
    vector<int> res(n, -1);
    s.push(arr[0]);
    
    for(int i=1;i<n;i++){
        while(!s.empty() && s.top()<arr[i]) {
            s.pop();
        }
        if(!s.empty())
            res[i] = (s.top());
        
        s.push(arr[i]);
    }
    
    return res;
}

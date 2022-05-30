//Implement a stack in cpp using array or vector...
struct mystack {
    vector<int> v;
    void push(int x) {
        v.push_back(x);
    }
    
    int pop() {
        int res = v.back();
        v.pop_back();
        return res;
    }
    
    int top() {
        return v.back();
    }
    
    int size() {
        return v.size();
    }
    
    bool isEmpty() {
        return v.size()==0;
    }
};

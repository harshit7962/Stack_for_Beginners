//Implementation of Two stacks using only a single array allocation...
//The idea here is to use both end of the array...
//First end to implement stack1 and Second end to implement stack2 and efficiently use the size...
struct twoStack {
    int *arr;
    int top1;
    int top2;
    int cap;
    
    twoStack(int c) {
        cap = c;
        arr = new int[cap];
        top1=-1;
        top2=cap;
    }
    
    void push1(int x) {
        if(top1==top2-1) {
            cout << "Buffer Overflow";
            return;
        }
        arr[top1] = x;
        top1++;
    }
    
    void push2(int x) {
        if(top1==top2-1){
            cout << "Buffer Overflow;
            return;
        }
        arr[top2] = x;
        top2--;
        
    }
    
    int pop1() {
        if(top1==-1) {
            cout << "Buffer Underflow";
            return INT_MIN;
        }
        int x = arr[top1];
        top1--;
        return x;
    }
    
    int pop2() {
        if(top2==cap) {
            cout << "Buffer Underflow";
            return INT_MIN;
        }
        int x = arr[top2];
        top2++;
        return x;
    }
    
    int top1() {
        if(top1==-1) {
            cout << "Buffer Underflow";
            return INT_MIN;
        }
        return arr[top1];
    }
    
    int top2() {
        if(top2==cap) {
            cout << "Buffer Underflow";
            return INT_MIN;
        }
        return arr[top2];
    }
    
    bool isEmpty1() {
        return top1==-1;
    }
    
    bool isEmpty2() {
        return top2==cap;
    }
    
    int size1() {
        return top1+1;
    }
    
    int size2() {
        return top2-cap;
    }
};

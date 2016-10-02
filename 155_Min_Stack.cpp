class MinStack {
    long min;
    stack<long> mystack;
public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int x) {
        if(0==mystack.size()){
            min=x;
            mystack.push(0L);
        }else{
            mystack.push(x-min);
            if(min>x){
                min=x;
            }
        }
    }

    void pop() {
        if(0==mystack.size()) return;
        long diff = mystack.top();
        if(diff<0){
            min=(int)(min-diff);
        }
        mystack.pop();
    }

    int top() {
        if(0==mystack.size()) return 0;
        long diff = mystack.top();
        if(diff>0){
            return (int)(min+diff);
        }else{
            return min;
        }
    }

    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */

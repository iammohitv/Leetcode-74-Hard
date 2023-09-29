class StockSpanner {
public:
    StockSpanner() {

    }
    stack<int> mv;
    stack<int> index;
    int next(int price) {
        
        if(mv.empty()){
            mv.push(price);
            index.push(1);
            return 1;
        }
        else{
            int count =index.top()+1;
            while(mv.top()<=price){
                mv.pop();
                index.pop();
                if(mv.empty()){
                    mv.push(price);
                    index.push(count);
                    return count;
                }
            }
            int ans = count - index.top();
            mv.push(price);
            index.push(count);
            return ans;

        }

        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int s2 = sizeOfStack%2?sizeOfStack/2+1:sizeOfStack/2;
        if(s.size()==s2){
            s.pop();
            return;
        }
        int x = s.top();
        s.pop();
        deleteMid(s,sizeOfStack);
        s.push(x);
    };
};
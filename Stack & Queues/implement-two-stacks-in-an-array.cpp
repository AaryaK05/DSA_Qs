//GFG
class twoStacks {
    int* arr;
    int size;
    int top1,top2;
    
  public:

    twoStacks() {
        size=200;
        arr=new int[size];
        top1=size/2+1;
        top2=size/2;
        
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        // code here
        if(top1>0){
            top1--;
            arr[top1]=x;
        }
        else{
            // cout<<"Overflow";
            return;
        }
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        // code here
        if(top2<size){
            top2++;
            arr[top2]=x;
        }
        else{
            // cout<<"overflow";
            return;
        }
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        // code here
        if(top1<=size/2){
            int a=arr[top1];
            top1++;
            return a;
        }
        else{
            return -1;
        }
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
        // code here
        if(top2>=size/2+1){
            int a=arr[top2];
            top2--;
            return a;
        }
        else{
            return -1;
        }
    }
};

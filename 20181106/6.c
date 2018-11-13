#include<stdio.h>
int main()
public static enum Action {
        No, LToM, MToL, MToR, RToM
}
public static int hanoiProblem2(int N,String left,String mid,String right){
    if(N<1) return 0;
    Stack<Integer> fStack=new Stack<Integer>();
    Stack<Integer> mStack=new Stack<Integer>();
    Stack<Integer> tStack=new Stack<Integer>();
    fStack.push(Integer.MAX_VALUE);
    mStack.push(Integer.MAX_VALUE);
    tStack.push(Integer.MAX_VALUE);

    for(int i=N;i>=1;i--){
        fStack.push(i);
    }

    Action[] record={Action.No};
    int step=0;
    while(tStack.size()!=N+1){
        step+=process2(record,Action.MToL,Action.LToM,fStack,mStack,left,mid);
        step+=process2(record,Action.LToM,Action.MToL,mStack,fStack,mid,left);
        step+=process2(record,Action.RToM,Action.MToR,mStack,tStack,mid,right);
        step+=process2(record,Action.MToR,Action.RToM,tStack,mStack,right,mid);
    }

    return step;
}

public static int process2(Action[] record,Action preNoAct,Action curAct,Stack<Integer> fStack,
        Stack<Integer> tStack,String from,String to){
    if(record[0]==preNoAct || fStack.peek()>=tStack.peek()){
        return 0;
    }
    tStack.push(fStack.pop());
    System.out.println("move "+tStack.peek()+" from "+from+" to "+to);
    record[0]=curAct;
    return 1;
}

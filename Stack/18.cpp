//Stack with getmin() in O(1)

/*
push(x) :

    ms.push(x);
    if(as.top()>=ms.top())
        as.push(x);
    
pop() :

    if(ms.top()==as.top())
        as.pop();
    ms.pop();

*/
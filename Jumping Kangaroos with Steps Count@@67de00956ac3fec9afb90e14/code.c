int kangaroo(int x1, int v1, int x2, int v2){
    int jumps = 0;
    if(v1==v2){
        if(x1==x2){
        return 0;}
        else{
            return -1;
        }
    }
    else if(((x2-x1)%(v1-v2)==0)&&((x2-x1)/(v1-v2))){
        jumps = (x2-x1)/(v1-v2);
        return jumps;
    }
    return -1;
}
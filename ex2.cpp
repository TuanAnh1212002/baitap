int* getPointerToArray(int n){
    int *op=new int[n];
    for(int i=0;i<n;++i){
        cin>>op[i];
    }
    return op;
}

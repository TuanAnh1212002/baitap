void printImage(int** img, int height, int width){
    for(int i=0;i<width;++i){
        for(int j=0; j<height;++j){
            cout<<setw(4)<<img[i][j];
        }
        cout<<endl;
    }
}

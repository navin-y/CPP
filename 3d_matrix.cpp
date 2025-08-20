#include<iostream>
#include<vector>
using namespace std; 

class Matrix3D{
private:
    int depth, row, col;
    vector<vector<vector<int>>> mat;

public:
    // default value is 0
    Matrix3D(int d, int r, int c) : depth(d), row(r), col(c),
        mat(d, vector<vector<int>>(r, vector<int>(c, 0))) {}
        
    void setVal(int d, int r, int c, int val){
        if(d<depth && r<row && c<col)
            mat[d][r][c]=val;
    }
    
    int getVal(int d, int r, int c){
        if(d<depth && r<row && c<col)
            return mat[d][r][c];
        else
            return -1;
    }
    
    void display(){
        cout<<"Current 3D matrix:\n";
        for(int i=0;i<depth;i++){
            cout<<"Layer "<<i<<": "<<endl;
            for(int j=0;j<row;j++){
                for(int k=0;k<col;k++)
                    cout<<mat[i][j][k]<<" ";
                cout<<endl;
            }
        }
    }
};

int main(){
    int d,r,c,val;
    cout<<"Enter the depth, row, col: ";
    cin>>d>>r>>c;
    Matrix3D m1(d,r,c);
    m1.setVal(1,3,4,3);
    m1.setVal(2,3,4,5);
    m1.display();
    
}
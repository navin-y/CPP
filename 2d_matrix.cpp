#include<iostream>
#include<vector>
using namespace std;

class Matrix2D{
private:
    int row,col;
    vector<vector<int>> mat;
    
public:
    // default value is 0
    Matrix2D(int r, int c) : row(r), col(c), mat(r, vector<int>(c, 0)){}
    
    void set(int r, int c, int val){
        if(r<row && c<col)
            mat[r][c]=val;
    }
    
    int get(int r, int c){
        if(r<row && c<col)
            return mat[r][c];
    }
    
    void display(){
        cout<<"Current 2D matrix:\n";
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        }
    }
};

int main(){
    int d,r,c;
    cout<<"Enter the row and col: ";
    cin>>r>>c;
    Matrix2D m1(r,c);
    cout<<"Enter the matrix elements:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>d;
            m1.set(i, j, d);
        }
    }
    m1.display();
}
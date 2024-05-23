#include <iostream> 
using namespace std;
// with a[4]
void Queen(int a[], int row){
    if(row == 4){
        for(int i = 0; i < 4; i++){
            cout<<a[i]<<" "; 
        }
        cout<<endl;
        return; 
    }else{
        for(int i = 0; i < 4; i++){
            bool check = 1; 
            for(int j = 0; j < row; i++){
                if(i == a[j] || i == a[i]-j+row || i == a[j]+j-row){
                    check = 0; 
                }
            }
            if(check){
                a[row] = 1;
                Queen(a, row+1); 
            }
        }
    }
}
int main(){
    return 0; 
}
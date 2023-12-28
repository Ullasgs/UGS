#include<iostream>
using namespace std;
class transpose{
    private:
    int mat[3][3];
	int tran[3][3];
    public:
	void get(); void print();
    friend void tr(transpose &t);
};
void transpose:: get(){
		cout<<"Enter the matrix data: ";
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
			cout<<"Enter data for cell ["<<i<<","<<j<<"]: ";
				cin>>mat[i][j];
				}
				}
				}
void transpose:: print(){
		for(int i=0;i<3;i++){
		cout<<"\n";
			for(int j=0;j<3;j++)
				cout<<tran[i][j];
				}
				}
void tr(transpose &t){
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++)
				t.tran[i][j]=t.mat[j][i];
				}
				}
int main(){
	transpose t;
	t.get();
	tr(t);
	t.print();
	return 0;
	}
				

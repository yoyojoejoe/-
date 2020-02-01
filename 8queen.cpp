#include<bits/stdc++.h>

using namespace std;

bool ans[8][8];
bool mx[8], my[8], md1[15], md2[15];

void print_ans(){
	for(int i=0; i<8;i++){
		for(int j=0; j<8; j++){
			if(ans[i][j]==true){
				cout<<'q'<<' ';
			}
			else{
				cout<<'*'<<' ';
			}
		}
		cout<<endl<<endl;
	}
	return;
}
void backtrack(int x, int y, int c){
	if(y==8&&x!=8){
		x++;
		y=0;
	}
	if(x==8){
		if(c!=8){
			return;
		}
		else{
			print_ans();
			cout<<endl;
			return;
		}

	}
	int d1 = (x+y) % 15;
	int d2 = (x-y+15) % 15;
	if(!mx[x] && !my[y] && !md1[d1] && !md2[d2]){
		mx[x] = true;
		my[y] = true;
		md1[d1] = true;
		md2[d2] = true;
		ans[x][y]=true;
		backtrack(x, y+1, c+1);
		mx[x] = false;
		my[y] = false;
		md1[d1] = false;
		md2[d2] = false;
	}
	ans[x][y] = false;
	backtrack(x,y+1,c); 
	
	
}
int main(){
	memset(mx, false, sizeof(mx));
	memset(my, false, sizeof(my));
	memset(md1, false, sizeof(md1));
	memset(md2, false, sizeof(md2));
	backtrack(0,0,0);
	return 0;
}



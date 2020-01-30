#include<bits/stdc++.h>

using namespace std;
char solution[5];
bool used[5];
char s[5] = {'a','b','c','d','e'};

void backtrack(int n){
    if(n==5){
        for(int i=0; i<5; i++){
            cout<<solution[i]<<' ';
        }
        cout<<endl;
        return;
    }
    for(int i=0; i<5; i++){
        if(!used[i]){
            used[i] = true;
            solution[n] = s[i];
            backtrack(n+1);
            used[i] = false;
        }

    }

}
int main(){
    memset(used,false,sizeof(used));
    backtrack(0);
}

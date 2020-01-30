#include<bits/stdc++.h>

using namespace std;
int solution[5];
bool used[5];

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
            solution[n] = i;
            backtrack(n+1);
            used[i] = false;
        }

    }

}
int main(){
    memset(used,false,sizeof(used));
    backtrack(0);
}

#include<iostream>
using namespace std;

const int MAX_NODE_CNT = 2000;

void check(int n,  int edges[][MAX_NODE_CNT]){
    int count = 0 ;

    for(int i = 0; i < n; i++){
        int sum = 0;

        for(int j = 0; j < n; j++){
            sum += edges[i][j];
          // cout << edges[i][j]; //check line
    }
        if(i <n )
        cout << sum << ",";
        else{
            cout << sum << ";";
        }
        if(sum %2 != 0)
            count +=1;
    if(count >=4)
        cout << 1;
        else
            cout << 0;
}

}
    

int main(){
    int n = 0;
    int edges[][MAX_NODE_CNT] = {0};
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        
            cin >> edges[i][j];
            cout << edges[i][j];
            check(n, edges);
        }
    }

        return 0 ;

        }




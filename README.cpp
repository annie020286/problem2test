
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int S = 0, s = 0, co = 0, cu =0, I =0, n = 0;
    int num[100] = {0};
    int iEnd = 0 , iBeg= 0;
    int reserveCost = {0};
    int unavaCost = {0};
    int unaDay = 0;

    cin >> S >> s >> co >> cu >> I >> n;
    iBeg = I;
    
    for(int i = 0; i < n; i++){
        cin >>num[i];}

    for(int i = 0; i < n; i++){
        iEnd = iBeg - num[i];

        if(iBeg - num[i] > s ){
            reserveCost += co * iEnd;
            iBeg = iEnd;
        }
        else{
            if (iEnd == s || iEnd > 0){
                reserveCost += co * iEnd;
                iBeg = S;
            }
            else{
            unavaCost += abs(iEnd) *cu;
            iBeg = S;
            unaDay = unaDay +1;
            }
        }
    }
        cout << unaDay << "," << reserveCost + unavaCost ;

        return 0;
    }
        

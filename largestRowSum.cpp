#include<iostream>
#include<vector>
using namespace std;


int largestTRowSum(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    int rowIndex=-1;

    for(int row=0; row<3; row++){
        int sum=0;
        for (int col=0;col<3;col++){
            sum=sum+arr[row][col];
        }

        if(sum>maxi){
            maxi= sum;
            rowIndex= row;
        }
    }

    cout << "maxi is "<< maxi<< endl;
    return rowIndex;
}

int main(){

    int arr[3][3];
    
    for(int row=0; row<3 ;row++){
        for(int col=0 ; col<3; col++){
            cin>>arr[row][col];
        }
    }
    cout<< largestTRowSum(arr,3,3)<<endl;


    return 0;
}
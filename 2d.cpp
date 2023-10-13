#include<iostream>
using namespace std;
int main(){

    int arr[3][4];
    cout<<"enter the elements in array";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    //printing
    cout<<"printing elements";
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"enter the searched element";
    cin>>target;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]== target){
                cout<<"element found";
            }
        }
}
cout<<"printing the sum of row elements";
for(int i=0;i<3;i++){
    int sum=0;
        for(int j=0;j<4;j++){
           sum+=arr[i][j];
        }
        cout<<sum<<" ";
}

        
    return 0;
}

 #include<bits/stdc++.h>
using namespace std;
void display(int a[]){

    //    int size = sizeof(a)/sizeof(a[0]);
    //    cout<<size<<endl;
    //    It is not possible so we always have to give its size with array
    
    for(int i = 0 ; i < 5; i++){
        cout<<a[i]<<" ";
    }
     cout<<endl;
}
    void change(int b[]){
        b[0] = 56;
}    

int main(){
    int arr[]={1,2,3,4,5};
    display(arr);
    change(arr);
    display(arr);
}
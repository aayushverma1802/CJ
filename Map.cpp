#include<bits\stdc++.h>
using namespace std;
class heap{
    public :
    int arr[100];
    int size=0;
    void insert(int val){
        size+=1;
        int index=size;
        arr[index]=val;
        while(index>1){
            int index=size;
            arr[index]=size;
        }
        
    }
};

int main(){



}
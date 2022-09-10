#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--){
	    int arr1[3];
		int arr2[3];
		
	    for(int i=0;i<3;i++){
	        cin>>arr1[i];
	    }
	    
		for(int i=0;i<3;i++){
	        cin>>arr2[i];
	    }

	    int x=0,y=0;
	    for(int i=0;i<3;i++){

	        if(arr1[i]>arr2[i]){
	            x++;
	        }
			 else{
	            y++;
	        }
	    }
	    if(x>y)
	        cout<<"A"<<endl;
	    else
	        cout<<"B"<<endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int T;
    cin>>T;
	int H,X,y1,y2,K;
	for(int i=0;i<T;i++){
	    cin>>H>>X>>y1>>y2>>K;
	    int min_hit_gun=H/X;
	    int min_hit_lazer;
	    
	    if(K*y1>=H){
	        if((H/y1)*y1>=H){
	            min_hit_lazer=H/y1;
	        }
	        else{
	            min_hit_lazer=(H/y1)+1;
	        }
	    }
	    else{
	        if(((H-(y1*K))/y2)*y2>=(H-(y1*K))){
	            min_hit_lazer=(K+(H-(y1*K))/y2);
	        }
	        else{
	           min_hit_lazer=(K+(H-(y1*K))/y2)+1;
	        }
	        
	    }
	    
	    if(min_hit_lazer>min_hit_gun){
	        cout<<min_hit_gun<<endl;
	    }
	    else{
	        cout<<min_hit_lazer<<endl;
	    }
	    
	}
	

}

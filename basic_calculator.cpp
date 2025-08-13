#include<bits/stdc++.h>
using namespace std;
int main(){
    //defining variables
    string op;
    int n ,num;
    vector<int>numv;   
    vector<string>opv; //input/output
    cout <<"enter no of input"<<endl;
    cin>>n;
    for (int  i =0;i<n;i++){
        cout <<"enter number"<<endl;
        cin>>num; 
        numv.push_back(num);   
        
    }
    for (int  i =0;i<n-1;i++){
          
        cout <<"enter operation "<<endl;
        cin>>op;
        opv.push_back(op); 
    }
    double curr=numv[0];
    for(int j=0;j<opv.size();j++){
       
            if (opv[j]=="+"){
                curr=curr+numv[j+1];
            }
            else if(opv[j]=="-"){
               curr=curr-numv[j+1];
            }
            else if(opv[j]=="/"){
                curr=curr/numv[j+1];
            }
            else if(opv[j]=="*"){
                curr=curr*numv[j+1];
            }
            else{cout<<"invalid operation";}

        
    }
    cout<<"Your answer is "<<curr;
    
    



    return 0;
}





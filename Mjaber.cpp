#include <iostream>
#include <vector>

using namespace std;

// remove duplicate numbers from a vector
int main() {
    // Write C++ code here
   
    vector<int> myvec= {0,0,1,1,1,2,2,3,3,4};
    cout << myvec.size()<<endl;
    for (int i=0; i < myvec.size(); i++){
       
        cout<< myvec[i] <<"   ";
       
    }
    vector<int> :: iterator r;
    r=myvec.begin();
    for (int i =0; i<myvec.size(); i++){
       int j=i+1;
       if (myvec[i]==myvec[j]){
       myvec.erase(r);
    }
    else r++;
    }
    // cout<<endl << myvec.size() <<endl;
   
    for (int i=0; i < myvec.size(); i++){
       
        cout<< myvec[i] <<"   ";
       
    }
  //  std::cout << endl<<"Hello world!";

    return 0;
}

//
//  main.cpp
//  test
//
//  Created by Sau Rav on 09/10/2022.
//

#include <iostream>
using namespace std;
int main() {
    int val;
    cout<<"Enter the number:";
    cin>>val;
    for(int i=1;i<=10;i++)
    {
        cout<<val<<"x"<<i<<"="<<val*i<<endl;
    }
    return 0;
}



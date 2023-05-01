#include<bits/stdc++.h>
using namespace std;

void printing(vector<int>v){

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){

    int n;
    cin >> n;

    vector<int>integer;
    vector<int>store;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        integer.push_back(x);
    }

    for(int i = 0; i < integer.size(); i++){
        store.push_back(integer[i]);
    }

    vector<vector<int>>factor;

    for (int i = 0; i < n; i++){

        int s = 2;
        int e = integer[i];

        vector<int>temp;

        while(s <= e){

            if((integer[i]%s == 0) && (integer[i] != 0)){
                temp.push_back(s);
                integer[i] = integer[i]/s;
            }
            if(integer[i]%s != 0 || integer[i] == 0){
                s++;
            }
        }
        temp.push_back(1);
        factor.push_back(temp);
    }

    for(int i = 0; i < n; i++){

        cout << "Factor of " << store[i] << " are ";
        printing(factor[i]);
        cout << endl;
    }

    return 0;

}
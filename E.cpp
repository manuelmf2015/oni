#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int N, K, x, m;
    vector<int> v;

    cin >> N;
    cout << N << endl;
    for(int j = 0; j < N; j++){
        v.clear();
        cin >> K;
        for(int i = 0; i < K; i++){
            cin >> x;
            v.push_back(x);
        }


        sort(v.begin(), v.end());
        
    
        m = v[1] - v[0];
        for(int i = 1; i < K-1; i++){
            if(v[i+1]-v[i] < m){
                m = v[i+1]-v[i];
            }
        }
        cout << m << endl; 
    }
}

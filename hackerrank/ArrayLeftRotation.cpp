#include <vector>
#include <iostream>



using namespace std;

vector<int> array_left_rotation(vector<int> a, int n, int k) {
 vector<int> out(n);
   
  for(int i=0; i<n; i++)
      *(out.begin()+(i-k+n)%n)=*(a.begin()+i);
    return out;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}
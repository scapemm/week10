#include <bits/stdc++.h>
using namespace std;
double avg(int vec[], int n){
    double sum = 0;
    for(int i=0; i<n; ++i) sum+=vec[i];
    return sum/n;
}
int mn(int vec[], int n){
    int small = vec[0];
    for(int i=1; i<n; ++i){
        if(small>vec[i]) small=vec[i];
    }
    return small;
}
bool striclyEqual(const int list1[], const int list2[], int n){
    if(n<=0) return 0;
    for(int i=0; i<n; ++i) if(list1[i]!=list2[i]) return 0;
    return 1;
}
int indexOfLargestElement(double vec[], int n){
    if(n<=0) return -1;
    int index=0;
    int large = vec[0];
    for(int i=1; i<n; ++i){
        if(large<=vec[i]){
            large = vec[i];
            index = i;
        }
    }
    return index;
}
void reverseArray(int arr[], int start , int end){
    int newar[end+1];
    int cnt=0;
    for(int i=end; i!=-1; --i){
        int newar[cnt]=arr[i];
        cnt++;
    }
    for(int i=0; i<n; ++i){
        arr[i]=newar[i];
        cout << arr[i] << " ";
    }
    
}
int main() {
    /* task 1
    int n;
    cin >> n;
    int sum = 0;
    int arr[n];
    for(int i=0; i<n; ++i{
        cin >> arr[i];
        sum+=arr[i];
    }
    cout << "sum=" << sum << "\n";
    
    task 2
    int n;cin >> n;
    int vec[n];
    for(int i=0; i<n; ++i) {
       cin >> vec[i];
        
    }
    cout << avg(vec,n); 
    // task 3
    int n;cin >> n;
    int vec[n];
    for(int i=0; i<n; ++i) {
       cin >> vec[i];
    }
    cout << "min=" << mn(vec,n); 
    // task 3
    cout << indexOfLargestElement(vec,n);
    int n;cin >> n;
    int vec[n];
    int vec1[n];
    for(int i=0; i<n; ++i) {
       cin >> vec[i];
    }
    for(int i=0; i<n; ++i) {
       cin >> vec1[i];
    }
    bool nm = striclyEqual(vec,vec1,n);
    if(nm) cout << "Two arrays are identical\n";
    else cout << "Arrays are different\n";
    // task 7
    int n;
    cin >> n;
    char arr[n];
    for(int i =0; i<n; ++i) cin >> arr[i];
    int lower=0,upper=0,digit=0,special = 0;
    for(int i=0; i<n; ++i){
        if('a'<=arr[i] && arr[i]<='z') lower++;
        if('A'<=arr[i] && arr[i]<='Z') upper++;
        if('0'<=arr[i] && arr[i]<='9') digit++;
    }
    cout << "uppercase:" << upper << "\n";
    cout << "lowercase:" << lower << "\n";
    cout << "digit:" << digit << "\n";
    cout << "special:" << n-upper-digit-lower << "\n"; 
    // problem 7
    int n;cin >> n;
    int vec[n];
    for(int i=0; i<n; ++i){
        cin >> vec[i];
    }
    
    for(int i=0; i<n; ++i){
        for(int j=1; j<n; ++j){
            if(vec[j]<vec[j-1]){
                swap(vec[j],vec[j-1]);
            }
        }
    }
    for(int i=0; i<n; ++i){
        cout << vec[i] <<' ';
    } 
    
    // problem 8
    srand(time(0));
    int dice[] = {0,0,0,0,0,0};
    for(int i=0; i<10000; ++i){
        int n = rand()%6+1;
        dice[n-1]++;
    }
    int sum =0;
    for(int i=0; i<6; ++i){
        sum+=dice[i];
        cout << dice[i] << "\n";
    }
    cout << sum << "\n"; */
    
    string s;
    
    
    
    
    
    
    
    
    
    
    return 0;
}


#include <iostream>
using namespace std;

// Function prototype
void getLineAndIgnore();


// } Driver Code Ends
//User function Template for C++

//Back-end complete function Template for C++

// Function to take input of string using getline
void getLineAndIgnore(){
    
    string a, d;
    int b;
   getline(cin,a);
    // Your code here
    cin>>b;
    cin.ignore();
    getline(cin,d);
   
    cout << a << endl;
    
    cout << b << endl;
        
    cout << d << endl;
}

//{ Driver Code Starts.

// Driver Code
int main()
{
    // Number of testcase input
    int t;
    cin >> t;
    cin.ignore(); //Ignoring the newline so it isn't consumed by getline. Read about it!!
    while(t--){
        getLineAndIgnore();   
    }
   
    return 0;
} 
// #include <iostream>

// int main(){

//     std::cout<<"hello world";
//     std::string gekk;

// }//this is my first program
// //test

// #include <iostream>

// using namespace std;
// int a;
// int b;
// int sum;
// void s();

// int main(){

//     cout<<"Enter your first number"<<endl;
//     cin>>a;
//     cout<<"Enter your second number"<<endl;
//     cin>>b;

//     s();
// }

// void s(){
//  sum = a + b;
//     cout<<sum<<endl;
// }

// #include <iostream>
// using namespace std;

// int main() {

//     int arr[5] = {1,2,3,4,5};
//     int sum = 0;  // move outside loop

//     for(int i = 0 ; i < 5 ; i++){
//         sum += arr[i];
//     }

//     cout << "Sum = " << sum << endl;

//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    
    int sum = 0;
    for(int i = 0 ;i < 5 ;i++ ){

        sum += arr[i];



    } 
    double avg = sum /2 ;
    cout<<avg;
}


#include <iostream>
using namespace std;

// Declaring triangle function
string triFunction (float s1, float s2, float s3);

// variable string for ss/sk/se
string ss = "ss", sk = "sk", se ="se";

int main() {
    float s1,s2,s3;
    //define a variable to call the function [triFunction]
    string ret;

    cout<<"Insert left side"<<endl;
    cin>>s1;
    cout<<"Inset right side"<<endl;
    cin>>s2;
    cout<<"Insert bottom side"<<endl;
    cin>>s3;

    //calling function [triFunction]
    ret = triFunction (s1, s2, s3);


    //Processing + Showing results
    if (ret == ss){
        cout<<"Equilateral Triangle\n";
    }else if (ret == sk ){
        cout<<"Isosceles Triangle\n";
    }else if (ret == se){
        cout<<"Scalene Triangle\n";
    }

    return 0;    
    
}

//Triangle fumction
string triFunction(float s1, float s2, float s3){
    string x;

    if (s1 == s2 && s2 == s3)
    {x = ss;
        }else if (s1 == s2 && s1 != s3)
            {x = sk;
                }else{x = se;}
    
    return x;
}

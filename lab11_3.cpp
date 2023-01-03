#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include <iomanip>
using namespace std;

int main() {
    int count=0;
    float sum = 0 ,M,p,n;
    ifstream source;
    source.open("score.txt");
    string x;
    while(getline(source,x)){
        p += pow(atof(x.c_str()),2);
        sum += atof(x.c_str());
        count++;
    }
    M =sum/count;
    n =sqrt(((p/count)-pow(M,2)));


    

    cout << "Number of data = "<<count<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<M<<endl;
    cout << "Standard deviation = "<<n<<endl;
}


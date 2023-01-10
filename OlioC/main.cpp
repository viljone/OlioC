#include <iostream>

/*
using namespace std;

int main()
{
    int luku;
    cout << "Hello World!" << endl;
    cin >> luku;
    cout << "joku luku" << luku << endl;
    printf("hello world!");

    return 0;
}
*/


void tarkista(int num);
using namespace std;
int num = 4;

int main(){
    tarkista(num);
    return 0;
}


void tarkista(int num){
    if(num > 0){
        cout << "positiivinen";
    }
    else if(num < 0){
        cout << "negatiivinen";
    }
    else{
        cout << "nolla";
    }
}

#include<iostream>

using namespace std;

int main(){
    
    cout << "Dear Professor Redekopp," << endl;
    cout << "\tWow! Look at those flowers BLOOMing. Before we make the O(n) walk to Parkside, we wanted to FILTER through your availability:" << endl;
    cout << "\t\tTime: 9am" << endl;
    cout << "\t\tLocation: Parkside (wait outside for us!)" << endl;
    cout << endl;

    int res = -1;
    
    while(res != 1){
        cout << "Please answer (1) for yes or (2) for no" << endl;
        cin >> res;
        if (cin.fail()){
            cout << "why did you type a non-Int? Now you'll never get the next CS joke" << endl;
            string buffer;
            cin.clear(cin.rdstate() & ~ios::failbit);

            getline(cin, buffer);
            // std::cin.clear(std::istream::failbit);
            cout << "What is Recursion?" << endl;
            //todo show to redekopp during breakfast
        }
        if (res == 1) {
            continue;
        }
        if (res == 2) {
            cout << "why not :(" << endl;
            cout << "let's try again" << endl;
        }
        else {
            cout << "haha we see you trying to break our code..." << endl;
            cout << "\tbut we are being disciplined and using what we know" << endl;
            cout << "\tTRY. CHECK. USE!" << endl;
        }
        
    }


    cout << "We're excited to see you!" << endl;
    cout << "Can't wait to TREEt you to a STACK of Waffles or maybe QUEUE up for some omelettes" << endl;

    // else {
    //     cout << ":(( this->destroySelf()" << endl;
    //     return -1;
    // }
    cout << "========================================" << endl;
    return 0;
}
#include <iostream>
#include <fstream>
#include <conio.h>
#include <regex>
#include <string>
#include <vector>


using namespace std;


int main ()
{
  

    cout << "Message to Convert:";
    string f;
    getline(cin, f);
    transform(f.begin(), f.end(), f.begin(), ::tolower);
   for (int x = 0; x<f.size(); x++){
       
       if((char)f[x] == ' '){
           cout << ":blue_square: ";
       }else{
        cout << ":regional_indicator_"<<f[x]<<": ";

       }


   }

    
    while (1){
        if(kbhit()) break;
    }

    return 0;
}


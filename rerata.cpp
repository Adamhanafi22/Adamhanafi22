#include <iostream>
using namespace std;
 
int main()
{ // Begin
  // Numeric bil
    int bil;
    // character status
    string status;
    //Display "Masukkan bilangan"
    cout << "Masukkan bilangan= ";
    cin >> bil;
    if (bil == 0)
    status = "nol";
    //else if (bil %2 == 0)
    else if (bil % 2 == 0)
    //status genap
    status = "genap";
    //else
    else
    // status = "ganjil"
    status = "ganjil";
    //display "bialangannya = " + status 
    cout << " bilangannya = " << status;



}
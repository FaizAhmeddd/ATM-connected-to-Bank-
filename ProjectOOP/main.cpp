#include<iostream>
#include <cstdlib>
#include<fstream>
#include <exception>

#include"global_Varaible.h"
#include"ACCOUNT.h"
#include"functions.h"
#include"structures.h"
#include"Card.h"
#include"Bank.h"
//#include"ACCOUNT.h"

/// Setting->Compiler->have g++ follow the c++11 IS0 C++ language standard should be
/// checked on.



using namespace std;


int main()
{
    system("color F0");
    ofstream AccountFile;
    AccountFile.open("accountFile1.txt",ios::out| ios::binary );
    ACCOUNT c[3];
    c[0].set_values("Hassan", "Street 1 G14/4", "03440990561", "1620412344567", "Habib Bank","PK Hbb 0123123213", "232",3000,"0456 6056","1233");
    c[1].set_values("zain", "Street 2 G13/3", "03449123324", "1620404374505", "Habib Bank","PK Hbb 2323452334", "232",2000,"0456 6236","4545");
        c[2].set_values("Faizan", "Street 3 G10", "03449453853", "1620453488395", "Habib Bank","PK Hbb 2312332423", "232",5000,"None","None");
    AccountFile.tellp();
    AccountFile.write((char *)(c),3*sizeof(ACCOUNT));
    AccountFile.close();
    try
    {
        refresh_file();
    }
    catch(exception e )
    {
        cout<<e.what();
    }
    TopMENU();
    return 0;
}






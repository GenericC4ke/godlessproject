#include <iostream>
#include <fstream>
#include <string>
#include <thread>
using namespace std;

class Passers {
    private:
        string pass;
    public:
        Passers(string p) : pass(p){}
    void outinfo(){cout << pass << endl;}
    void saveInfo(const string& filename)
        {ofstream saveFile(filename);
        if (saveFile.is_open())
            {saveFile << pass << endl;
            saveFile.close();
            cout << filename << endl;}
        else
            {cout << "no";
            EXIT_SUCCESS;}};
    void openInfo(const string& filename)
        {ifstream infoFile(filename);
        if (infoFile.is_open())
            {getline(infoFile, pass);
            infoFile.close();
            cout << "Loaded!!!" << endl;}
        else 
            {cout << "my bad g 😔🔫";
            EXIT_FAILURE;}};};

int main ()
        {string logname;
        string logpass;
        cout << "hi ewlcome to it shrep school legitimate consite please log the ins\n  log: ";
        cin >> logname;
        cout << "\n  in: ";
        cin >> logpass;
        Passers spot1(logpass);
        Passers newspot("");
        thread saveThread(&Passers::saveInfo, &spot1, "passinfo.txt");
        saveThread.join();
        thread loadThread(&Passers::openInfo, &newspot, "passdata.txt");
        loadThread.join();
        newspot.outinfo();
        while (1)
            {int agonizing;
            cout << "hi ewlcome to it shrep school legitimate consite choose your next move\n  1. leaderboards\n  2. homework\n  3. store\n  4. schedule\n  5.profile\nenter: ";
            cin >> agonizing;
            if (agonizing==1){cout << "current leaderboard:\n  1. Service currently unavailable. Try again later.\n  2. Service currently unavailable. Try again later.\n  3. Service currently unavailable. Try again later.";};
            else if (agonizing==2){cout << "homewoke:\n  Latest HW: do\n  Status: under review";};
            else if (agonizing==3){cout << "what is a store bruh got dang buddy thought you thought fr 🤦🤦‍♀️🤦‍♀️😂😂😂"; EXIT_FAILURE;};
            else if (agonizing==4){cout << "current schedule:\n  Mon: --\n  Tue: --\n  Wed: --\n  Thu: --\n  Fri: 4:30PM\n  Sat: 4:00PM\n  Sun: --";};
            else if (agonizing==5)
                {cout << "y o u:\n  1. edit password\n  2. log in and out";
                int chpr;
                cin >> chpr;
                if (chpr == 1)
                    {ifstream tosho("parkspotsinfo.txt");
                    cout << "current passwrod is " << tosho << ", make smth better\nenter: ";
                    string newyork;
                    cin << newyork;
                    Passers spot1(newyork);
                    Passers newspot("");
                    thread saveThread(&Passers::saveInfo, &spot1, "passinfo.txt");
                    saveThread.join();
                    thread loadThread(&Passers::openInfo, &newspot, "passdata.txt");
                    loadThread.join();
                    newspot.outinfo();
                    cout << "o k";};};
                else
                    EXIT_SUCCESS;};
            else
                EXIT_SUCCESS;};
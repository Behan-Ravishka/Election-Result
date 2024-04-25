#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    //get variables
    int vote;
    float c1=0,c2=0,c3=0,c4=0,c5=0,i,val_vote=0,rej_vote=0;
    float cp1=0,cp2=0,cp3=0,cp4=0,cp5=0;
    //calculate valid votes
    val_vote=c1+c2+c3+c4+c5;
    //use for loop
    for ( i=1 ; i<=5 ; i++)
    {
        cout << " " << i << ". Enter your vote : ";
        cin >> vote;
    //use if cond. inside the for loop
    if (vote>=1 && vote<=5)
    {
        val_vote+=1;
        //use switch inside the if cod.
        switch (vote)
        {
        case 1:
            c1=c1+1;
            break;
        case 2:
            c2=c2+1;
            break;
        case 3:
            c3=c3+1;
            break;
        case 4:
            c4=c4+1;
            break;
        case 5:
            c5=c5+1;
            break;
        default :
            rej_vote+=1;
        }
    }
    else
    {
        //calulate rejected votes
        rej_vote+=1;
    }

    }
    //seperate output screens
    cout << "\n----Press any key to see the Election Result..!----" << endl;
    getch ();
    //calculate percentages of votes
    cout.precision(4);
    cp1=(c1*100)/val_vote;
    cp2=(c2*100)/val_vote;
    cp3=(c3*100)/val_vote;
    cp4=(c4*100)/val_vote;
    cp5=(c5*100)/val_vote;
    //beautify
    system("cls");
    system ("color 60");
    //make output 
    cout << "\n-------------------------------------------" << endl;
    cout << "\tBest Project Year -2024" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "candidate" << "\tvote" << "\t\tpercentage" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "candidate 1" << "\t " << c1 << "\t\t  " << cp1 << "%" << endl;
    cout << "candidate 2" << "\t " << c2 << "\t\t  " << cp2 << "%" << endl;
    cout << "candidate 3" << "\t " << c3 << "\t\t  " << cp3 << "%" << endl;
    cout << "candidate 4" << "\t " << c4 << "\t\t  " << cp4 << "%" << endl;
    cout << "candidate 5" << "\t " << c5 << "\t\t  " << cp5 << "%" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "\tvalid votes   : " << val_vote << endl;
    cout << "\trejected vote : " << rej_vote << endl;
    cout << "-------------------------------------------" << endl;


    return 0;
}

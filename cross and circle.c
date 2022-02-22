#include <iostream>

using namespace std;

int main()
{
    int tab[4][4];
    int i=0;
    int y=0;
    int z=1;
    int a=0;

    cout << "Wybierz gdzie chcesz postawic x wpisujac dana liczbe" << endl << endl;

    for(i=0;i<9;i++)
    {
         if(y==3)
        {
            y=0;
        }
        tab[i][y]=i+1;
        y++;

    }

    i=0;
    y=0;

    for(i=0;i<9;i++)
    {
        if(y==3)
        {
            y=0;
        }

        cout << tab[i][y] << " ";

        if(y==2)
        {
            cout << endl;
        }

        y++;
    }

    char tabc[4][4];
    i=0;
    y=0;
    cout << endl;

    tabc[0][0]='*';
    tabc[0][1]='*';
    tabc[0][2]='*';
    tabc[1][0]='*';
    tabc[1][1]='*';
    tabc[1][2]='*';
    tabc[2][0]='*';
    tabc[2][1]='*';
    tabc[2][2]='*';

    cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
    cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
    cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;


    cin >> a;


    if(a>9)
    {
        cout << "Podano zla wartosc" << endl;
        return 0;
    }

    if(0>a)
    {
        cout << "Podano zla wartosc" << endl;
        return 0;
    }


    switch (a)
    {
        case 1:
        tabc[0][0]='x';
        break;

        case 2:
        tabc[0][1]='x';
        break;

        case 3:
        tabc[0][2]='x';
        break;

        case 4:
        tabc[1][0]='x';
        break;

        case 5:
        tabc[1][1]='x';
        break;

        case 6:
        tabc[1][2]='x';
        break;

        case 7:
        tabc[2][0]='x';
        break;

        case 8:
        tabc[2][1]='x';
        break;

        case 9:
        tabc[2][2]='x';
        break;
    }

    if(tabc[1][1]=='*'){tabc[1][1]='o';}
    if(tabc[1][1]=='x'){tabc[2][2]='o';}



    cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
    cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
    cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;

    int b=0;
    cin >> b;

    switch (b)
    {
        case 1:
        tabc[0][0]='x';
        break;

        case 2:
        tabc[0][1]='x';
        break;

        case 3:
        tabc[0][2]='x';
        break;

        case 4:
        tabc[1][0]='x';
        break;

        case 5:
        tabc[1][1]='x';
        break;

        case 6:
        tabc[1][2]='x';
        break;

        case 7:
        tabc[2][0]='x';
        break;

        case 8:
        tabc[2][1]='x';
        break;

        case 9:
        tabc[2][2]='x';
        break;
    }

//ROGI

    if(tabc[0][0]=='x' & tabc[0][1]=='x'){tabc[0][2]='o';}
    if(tabc[0][0]=='x' & tabc[1][0]=='x'){tabc[2][0]='o';}

    if(tabc[2][0]=='x' & tabc[1][0]=='x'){tabc[0][0]='o';}
    if(tabc[2][0]=='x' & tabc[2][1]=='x'){tabc[2][2]='o';}

    if(tabc[2][2]=='x' & tabc[2][1]=='x'){tabc[2][0]='o';}
    if(tabc[2][2]=='x' & tabc[1][2]=='x'){tabc[0][2]='o';}

    if(tabc[0][2]=='x' & tabc[0][1]=='x'){tabc[0][0]='o';}
    if(tabc[0][2]=='x' & tabc[1][2]=='x'){tabc[2][2]='o';}

//CENTRUM

    if(tabc[1][1]=='x' & tabc[0][1]=='x'){tabc[2][1]='o';}
    if(tabc[1][1]=='x' & tabc[0][0]=='x'){tabc[1][2]='o';}
    if(tabc[1][1]=='x' & tabc[1][0]=='x'){tabc[1][2]='o';}
    if(tabc[1][1]=='x' & tabc[2][0]=='x'){tabc[0][2]='o';}
    if(tabc[1][1]=='x' & tabc[2][1]=='x'){tabc[0][1]='o';}
    if(tabc[1][1]=='x' & tabc[1][2]=='x'){tabc[1][0]='o';}
    if(tabc[1][1]=='x' & tabc[0][2]=='x'){tabc[2][0]='o';}

    cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
    cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
    cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;

    int c=0;
    cin >> c;

    switch (c)
    {
        case 1:
        tabc[0][0]='x';
        break;

        case 2:
        tabc[0][1]='x';
        break;

        case 3:
        tabc[0][2]='x';
        break;

        case 4:
        tabc[1][0]='x';
        break;

        case 5:
        tabc[1][1]='x';
        break;

        case 6:
        tabc[1][2]='x';
        break;

        case 7:
        tabc[2][0]='x';
        break;

        case 8:
        tabc[2][1]='x';
        break;

        case 9:
        tabc[2][2]='x';
        break;
    }

    if(tabc[0][0]=='x' & tabc[2][0]=='x'){tabc[1][0]='o';}
    if(tabc[0][0]=='x' & tabc[0][2]=='x'){tabc[0][1]='o';}
    if(tabc[2][2]=='x' & tabc[2][0]=='x'){tabc[2][1]='o';}
    if(tabc[2][2]=='x' & tabc[0][2]=='x'){tabc[1][2]='o';}

    cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
    cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
    cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;

    int d=0;
    cin >> d;

    switch (d)
    {
        case 1:
        tabc[0][0]='x';
        break;

        case 2:
        tabc[0][1]='x';
        break;

        case 3:
        tabc[0][2]='x';
        break;

        case 4:
        tabc[1][0]='x';
        break;

        case 5:
        tabc[1][1]='x';
        break;

        case 6:
        tabc[1][2]='x';
        break;

        case 7:
        tabc[2][0]='x';
        break;

        case 8:
        tabc[2][1]='x';
        break;

        case 9:
        tabc[2][2]='x';
        break;
    }




    cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
    cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
    cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;







    return 0;
}
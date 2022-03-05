#include <iostream>

using namespace std;

int main()
{
    int tryb=0;
    cout << "Wybierz tryb gry:" << endl << "Multiplayer  (Wpisz '1')" << endl << "Singleplayer (Wpisz '2')" << endl;
    cin >> tryb;

    if(tryb<3 & 0<tryb)
    {
        system("CLS");
    }

    else
    {
        cout << endl << "Podano zla wartosc" << endl;
        return 0;
    }

    if(tryb==1)
    {
        system("CLS");
        cout << "Tryb multiplayer" << endl;

    int tab[4][4];
    int i=0;
    int y=0;
    int z=1;
    int a=0;
    int runda=0;

    cout << "Wybierz gdzie chcesz postawic x wpisujac liczbe" << endl << endl;
    cout << "Gracz 1 = x Gracz 2 = o" << endl << endl;

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

    //MOVE ONE
    cin >> a;

    if(a<10 & 0<a)
    {
        runda++;
    }

    else
    {
        cout << endl << "Podano zla wartosc" << endl;
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

    cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
    cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
    cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;


    cin >> a;

    if(a<10 & 0<a)
    {
        runda++;
    }

    else
    {
        cout << endl << "Podano zla wartosc" << endl;
        return 0;
    }



    switch (a)
    {
        case 1:
        tabc[0][0]='o';
        break;

        case 2:
        tabc[0][1]='o';
        break;

        case 3:
        tabc[0][2]='o';
        break;

        case 4:
        tabc[1][0]='o';
        break;

        case 5:
        tabc[1][1]='o';
        break;

        case 6:
        tabc[1][2]='o';
        break;

        case 7:
        tabc[2][0]='o';
        break;

        case 8:
        tabc[2][1]='o';
        break;

        case 9:
        tabc[2][2]='o';
        break;
    }

    cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
    cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
    cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;


    //MOVE TWO
    cin >> a;

    if(a<10 & 0<a)
    {
        runda++;
    }

    else
    {
        cout << endl << "Podano zla wartosc" << endl;
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

    cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
    cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
    cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;


    cin >> a;

    if(a<10 & 0<a)
    {
        runda++;
    }

    else
    {
        cout << endl << "Podano zla wartosc" << endl;
        return 0;
    }



    switch (a)
    {
        case 1:
        tabc[0][0]='o';
        break;

        case 2:
        tabc[0][1]='o';
        break;

        case 3:
        tabc[0][2]='o';
        break;

        case 4:
        tabc[1][0]='o';
        break;

        case 5:
        tabc[1][1]='o';
        break;

        case 6:
        tabc[1][2]='o';
        break;

        case 7:
        tabc[2][0]='o';
        break;

        case 8:
        tabc[2][1]='o';
        break;

        case 9:
        tabc[2][2]='o';
        break;
    }

    cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
    cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
    cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;


    //MOVE THREE
    cin >> a;

    if(a<10 & 0<a)
    {
        runda++;
    }

    else
    {
        cout << endl << "Podano zla wartosc" << endl;
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

    cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
    cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
    cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;

    //LEFT TO RIGHT WIN
    if(tabc[0][0]=='x' & tabc[0][1]=='x' & tabc[0][2]=='x'){a=22;}
    if(tabc[1][0]=='x' & tabc[1][1]=='x' & tabc[1][2]=='x'){a=22;}
    if(tabc[2][0]=='x' & tabc[2][1]=='x' & tabc[2][2]=='x'){a=22;}

    //UP TO DOWN WIN
    if(tabc[0][0]=='x' & tabc[1][0]=='x' & tabc[2][0]=='x'){a=22;}
    if(tabc[0][1]=='x' & tabc[1][1]=='x' & tabc[2][1]=='x'){a=22;}
    if(tabc[0][2]=='x' & tabc[1][2]=='x' & tabc[2][2]=='x'){a=22;}

    //DIAGONAL WIN
    if(tabc[0][0]=='x' & tabc[1][1]=='x' & tabc[2][2]=='x'){a=22;}
    if(tabc[2][0]=='x' & tabc[1][1]=='x' & tabc[0][2]=='x'){a=22;}


    if(a==22)
    {
        cout << "Gracz 1 wygrywa"<< endl;
        return 0;
    }

    cin >> a;

    if(a<10 & 0<a)
    {
        runda++;
    }

    else
    {
        cout << endl << "Podano zla wartosc" << endl;
        return 0;
    }



    switch (a)
    {
        case 1:
        tabc[0][0]='o';
        break;

        case 2:
        tabc[0][1]='o';
        break;

        case 3:
        tabc[0][2]='o';
        break;

        case 4:
        tabc[1][0]='o';
        break;

        case 5:
        tabc[1][1]='o';
        break;

        case 6:
        tabc[1][2]='o';
        break;

        case 7:
        tabc[2][0]='o';
        break;

        case 8:
        tabc[2][1]='o';
        break;

        case 9:
        tabc[2][2]='o';
        break;
    }

    cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
    cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
    cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;

    //LEFT TO RIGHT WIN
    if(tabc[0][0]=='o' & tabc[0][1]=='o' & tabc[0][2]=='o'){a=11;}
    if(tabc[1][0]=='o' & tabc[1][1]=='o' & tabc[1][2]=='o'){a=11;}
    if(tabc[2][0]=='o' & tabc[2][1]=='o' & tabc[2][2]=='o'){a=11;}

    //UP TO DOWN WIN
    if(tabc[0][0]=='o' & tabc[1][0]=='o' & tabc[2][0]=='o'){a=11;}
    if(tabc[0][1]=='o' & tabc[1][1]=='o' & tabc[2][1]=='o'){a=11;}
    if(tabc[0][2]=='o' & tabc[1][2]=='o' & tabc[2][2]=='o'){a=11;}

    //DIAGONAL WIN
    if(tabc[0][0]=='o' & tabc[1][1]=='o' & tabc[2][2]=='o'){a=11;}
    if(tabc[2][0]=='o' & tabc[1][1]=='o' & tabc[0][2]=='o'){a=11;}


    if(a==11)
    {
        cout << "Gracz 2 wygrywa"<< endl;
        return 0;
    }


    //MOVE FOUR
    cin >> a;

    if(a<10 & 0<a)
    {
        runda++;
    }

    else
    {
        cout << endl << "Podano zla wartosc" << endl;
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

    cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
    cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
    cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;

    //LEFT TO RIGHT WIN
    if(tabc[0][0]=='x' & tabc[0][1]=='x' & tabc[0][2]=='x'){a=22;}
    if(tabc[1][0]=='x' & tabc[1][1]=='x' & tabc[1][2]=='x'){a=22;}
    if(tabc[2][0]=='x' & tabc[2][1]=='x' & tabc[2][2]=='x'){a=22;}

    //UP TO DOWN WIN
    if(tabc[0][0]=='x' & tabc[1][0]=='x' & tabc[2][0]=='x'){a=22;}
    if(tabc[0][1]=='x' & tabc[1][1]=='x' & tabc[2][1]=='x'){a=22;}
    if(tabc[0][2]=='x' & tabc[1][2]=='x' & tabc[2][2]=='x'){a=22;}

    //DIAGONAL WIN
    if(tabc[0][0]=='x' & tabc[1][1]=='x' & tabc[2][2]=='x'){a=22;}
    if(tabc[2][0]=='x' & tabc[1][1]=='x' & tabc[0][2]=='x'){a=22;}


    if(a==22)
    {
        cout << "Gracz 1 wygrywa"<< endl;
        return 0;
    }

    cin >> a;

    if(a<10 & 0<a)
    {
        runda++;
    }

    else
    {
        cout << endl << "Podano zla wartosc" << endl;
        return 0;
    }



    switch (a)
    {
        case 1:
        tabc[0][0]='o';
        break;

        case 2:
        tabc[0][1]='o';
        break;

        case 3:
        tabc[0][2]='o';
        break;

        case 4:
        tabc[1][0]='o';
        break;

        case 5:
        tabc[1][1]='o';
        break;

        case 6:
        tabc[1][2]='o';
        break;

        case 7:
        tabc[2][0]='o';
        break;

        case 8:
        tabc[2][1]='o';
        break;

        case 9:
        tabc[2][2]='o';
        break;
    }

    cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
    cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
    cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;

    //LEFT TO RIGHT WIN
    if(tabc[0][0]=='o' & tabc[0][1]=='o' & tabc[0][2]=='o'){a=11;}
    if(tabc[1][0]=='o' & tabc[1][1]=='o' & tabc[1][2]=='o'){a=11;}
    if(tabc[2][0]=='o' & tabc[2][1]=='o' & tabc[2][2]=='o'){a=11;}

    //UP TO DOWN WIN
    if(tabc[0][0]=='o' & tabc[1][0]=='o' & tabc[2][0]=='o'){a=11;}
    if(tabc[0][1]=='o' & tabc[1][1]=='o' & tabc[2][1]=='o'){a=11;}
    if(tabc[0][2]=='o' & tabc[1][2]=='o' & tabc[2][2]=='o'){a=11;}

    //DIAGONAL WIN
    if(tabc[0][0]=='o' & tabc[1][1]=='o' & tabc[2][2]=='o'){a=11;}
    if(tabc[2][0]=='o' & tabc[1][1]=='o' & tabc[0][2]=='o'){a=11;}


    if(a==11)
    {
        cout << "Gracz 2 wygrywa"<< endl;
        return 0;
    }




    //LAST MOVE
    cin >> a;

    if(a<10 & 0<a)
    {
        runda++;
    }

    else
    {
        cout << endl << "Podano zla wartosc" << endl;
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

    cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
    cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
    cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;

    //LEFT TO RIGHT WIN
    if(tabc[0][0]=='x' & tabc[0][1]=='x' & tabc[0][2]=='x'){a=22;}
    if(tabc[1][0]=='x' & tabc[1][1]=='x' & tabc[1][2]=='x'){a=22;}
    if(tabc[2][0]=='x' & tabc[2][1]=='x' & tabc[2][2]=='x'){a=22;}

    //UP TO DOWN WIN
    if(tabc[0][0]=='x' & tabc[1][0]=='x' & tabc[2][0]=='x'){a=22;}
    if(tabc[0][1]=='x' & tabc[1][1]=='x' & tabc[2][1]=='x'){a=22;}
    if(tabc[0][2]=='x' & tabc[1][2]=='x' & tabc[2][2]=='x'){a=22;}

    //DIAGONAL WIN
    if(tabc[0][0]=='x' & tabc[1][1]=='x' & tabc[2][2]=='x'){a=22;}
    if(tabc[2][0]=='x' & tabc[1][1]=='x' & tabc[0][2]=='x'){a=22;}


    if(a==22)
    {
        cout << "Gracz 1 wygrywa"<< endl;
        return 0;
    }

    if(runda==9)
    {
        cout << "REMIS"<< endl;
        return 0;
    }


     }















    if(tryb==2)
    {
        system("CLS");
        cout << "Tryb singleplayer" << endl;

    int tab[4][4];
    int i=0;
    int y=0;
    int z=1;
    int a=0;
    int runda=0;

    cout << "Wybierz gdzie chcesz postawic x wpisujac liczbe" << endl << endl;

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

//MOVE ONE
    cin >> a;

    if(a<10 & 0<a)
    {
        runda++;
    }

    else
    {
        cout << endl << "Podano zla wartosc" << endl;
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
//MOVE TWO
    cin >> b;

    if(b<10 & 0<b)
    {
        runda++;
    }

    else
    {
        cout << endl << "Podano zla wartosc" << endl;
        return 0;
    }
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
//MOVE THREE

    cin >> c;

    if(c<10 & 0<c)
    {
        runda++;
    }

    else
    {
        cout << endl << "Podano zla wartosc" << endl;
        return 0;
    }

    z=0;

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

    //LEFT TO RIGHT WIN
    if(tabc[0][0]=='o' & tabc[0][1]=='o' & tabc[0][2]=='o'){a=11;}
    if(tabc[1][0]=='o' & tabc[1][1]=='o' & tabc[1][2]=='o'){a=11;}
    if(tabc[2][0]=='o' & tabc[2][1]=='o' & tabc[2][2]=='o'){a=11;}

    //UP TO DOWN WIN
    if(tabc[0][0]=='o' & tabc[1][0]=='o' & tabc[2][0]=='o'){a=11;}
    if(tabc[0][1]=='o' & tabc[1][1]=='o' & tabc[2][1]=='o'){a=11;}
    if(tabc[0][2]=='o' & tabc[1][2]=='o' & tabc[2][2]=='o'){a=11;}

    //DIAGONAL WIN
    if(tabc[0][0]=='o' & tabc[1][1]=='o' & tabc[2][2]=='o'){a=11;}
    if(tabc[2][0]=='o' & tabc[1][1]=='o' & tabc[0][2]=='o'){a=11;}


    if(a==11)
    {
        cout << "Przegrales"<< endl;
        cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
        cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
        cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;
        return 0;
    }

    //LEFT TO RIGHT WIN
    if(tabc[0][0]=='x' & tabc[0][1]=='x' & tabc[0][2]=='x'){a=22;}
    if(tabc[1][0]=='x' & tabc[1][1]=='x' & tabc[1][2]=='x'){a=22;}
    if(tabc[2][0]=='x' & tabc[2][1]=='x' & tabc[2][2]=='x'){a=22;}

    //UP TO DOWN WIN
    if(tabc[0][0]=='x' & tabc[1][0]=='x' & tabc[2][0]=='x'){a=22;}
    if(tabc[0][1]=='x' & tabc[1][1]=='x' & tabc[2][1]=='x'){a=22;}
    if(tabc[0][2]=='x' & tabc[1][2]=='x' & tabc[2][2]=='x'){a=22;}

    //DIAGONAL WIN
    if(tabc[0][0]=='x' & tabc[1][1]=='x' & tabc[2][2]=='x'){a=22;}
    if(tabc[2][0]=='x' & tabc[1][1]=='x' & tabc[0][2]=='x'){a=22;}


    if(a==22)
    {
        cout << "Wygrales"<< endl;
        cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
        cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
        cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;
        return 0;
    }

    //LEFT TO RIGHT
    if(tabc[0][0]=='o' & tabc[0][1]=='o' & tabc[0][2]=='*' & z==0){tabc[0][2]='o';z++;}
    if(tabc[1][0]=='o' & tabc[1][1]=='o' & tabc[1][2]=='*' & z==0){tabc[1][2]='o';z++;}
    if(tabc[2][0]=='o' & tabc[2][1]=='o' & tabc[2][2]=='*' & z==0){tabc[2][2]='o';z++;}

    //RIGHT TO LEFT
    if(tabc[0][2]=='o' & tabc[0][1]=='o' & tabc[0][0]=='*' & z==0){tabc[0][0]='o';z++;}
    if(tabc[1][2]=='o' & tabc[1][1]=='o' & tabc[1][0]=='*' & z==0){tabc[1][0]='o';z++;}
    if(tabc[2][2]=='o' & tabc[2][1]=='o' & tabc[2][0]=='*' & z==0){tabc[2][0]='o';z++;}

    //UP TO DOWN
    if(tabc[0][0]=='o' & tabc[1][0]=='o' & tabc[2][0]=='*' & z==0){tabc[2][0]='o';z++;}
    if(tabc[0][1]=='o' & tabc[1][1]=='o' & tabc[2][1]=='*' & z==0){tabc[2][1]='o';z++;}
    if(tabc[0][2]=='o' & tabc[1][2]=='o' & tabc[2][2]=='*' & z==0){tabc[2][0]='o';z++;}

    //DOWN TO UP
    if(tabc[2][0]=='o' & tabc[1][0]=='o' & tabc[0][0]=='*' & z==0){tabc[0][0]='o';z++;}
    if(tabc[2][1]=='o' & tabc[1][1]=='o' & tabc[0][1]=='*' & z==0){tabc[0][1]='o';z++;}
    if(tabc[2][2]=='o' & tabc[1][2]=='o' & tabc[0][2]=='*' & z==0){tabc[0][2]='o';z++;}


    //DIAGONAL
    if(tabc[2][2]=='o' & tabc[1][1]=='o' & tabc[0][0]=='*' & z==0){tabc[0][0]='o';z++;}
    if(tabc[2][0]=='o' & tabc[1][1]=='o' & tabc[0][2]=='*' & z==0){tabc[0][2]='o';z++;}
    if(tabc[0][0]=='o' & tabc[1][1]=='o' & tabc[2][2]=='*' & z==0){tabc[2][2]='o';z++;}
    if(tabc[0][2]=='o' & tabc[1][1]=='o' & tabc[2][0]=='*' & z==0){tabc[2][0]='o';z++;}

    if(tabc[0][0]=='x' & tabc[2][0]=='x' & z==0){tabc[1][0]='o';z++;}
    if(tabc[0][0]=='x' & tabc[0][2]=='x' & z==0){tabc[0][1]='o';z++;}
    if(tabc[2][2]=='x' & tabc[2][0]=='x' & z==0){tabc[2][1]='o';z++;}
    if(tabc[2][2]=='x' & tabc[0][2]=='x' & z==0){tabc[1][2]='o';z++;}

    if(tabc[1][1]=='x' & tabc[0][1]=='x' & z==0){tabc[2][1]='o';z++;}
    if(tabc[1][1]=='x' & tabc[1][0]=='x' & z==0){tabc[1][2]='o';z++;}
    if(tabc[1][1]=='x' & tabc[2][1]=='x' & z==0){tabc[0][1]='o';z++;}
    if(tabc[1][1]=='x' & tabc[1][2]=='x' & z==0){tabc[1][0]='o';z++;}

    cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
    cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
    cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;

    int d=0;

//MOVE FOUR

    cin >> d;

    if(d<10 & 0<d)
    {
        runda++;
    }

    else
    {
        cout << endl << "Podano zla wartosc" << endl;
        return 0;
    }

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

    //LEFT TO RIGHT WIN
    if(tabc[0][0]=='o' & tabc[0][1]=='o' & tabc[0][2]=='o'){a=11;}
    if(tabc[1][0]=='o' & tabc[1][1]=='o' & tabc[1][2]=='o'){a=11;}
    if(tabc[2][0]=='o' & tabc[2][1]=='o' & tabc[2][2]=='o'){a=11;}

    //UP TO DOWN WIN
    if(tabc[0][0]=='o' & tabc[1][0]=='o' & tabc[2][0]=='o'){a=11;}
    if(tabc[0][1]=='o' & tabc[1][1]=='o' & tabc[2][1]=='o'){a=11;}
    if(tabc[0][2]=='o' & tabc[1][2]=='o' & tabc[2][2]=='o'){a=11;}

    //DIAGONAL WIN
    if(tabc[0][0]=='o' & tabc[1][1]=='o' & tabc[2][2]=='o'){a=11;}
    if(tabc[2][0]=='o' & tabc[1][1]=='o' & tabc[0][2]=='o'){a=11;}


    if(a==11)
    {
        cout << "Przegrales"<< endl;
        cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
        cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
        cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;
        return 0;
    }

    //LEFT TO RIGHT WIN
    if(tabc[0][0]=='x' & tabc[0][1]=='x' & tabc[0][2]=='x'){a=22;}
    if(tabc[1][0]=='x' & tabc[1][1]=='x' & tabc[1][2]=='x'){a=22;}
    if(tabc[2][0]=='x' & tabc[2][1]=='x' & tabc[2][2]=='x'){a=22;}

    //UP TO DOWN WIN
    if(tabc[0][0]=='x' & tabc[1][0]=='x' & tabc[2][0]=='x'){a=22;}
    if(tabc[0][1]=='x' & tabc[1][1]=='x' & tabc[2][1]=='x'){a=22;}
    if(tabc[0][2]=='x' & tabc[1][2]=='x' & tabc[2][2]=='x'){a=22;}

    //DIAGONAL WIN
    if(tabc[0][0]=='x' & tabc[1][1]=='x' & tabc[2][2]=='x'){a=22;}
    if(tabc[2][0]=='x' & tabc[1][1]=='x' & tabc[0][2]=='x'){a=22;}


    if(a==22)
    {
        cout << "Wygrales"<< endl;
        cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
        cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
        cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;
        return 0;
    }

    if(tabc[1][1]=='x' & tabc[0][1]=='x' & tabc[2][1]=='*'){tabc[2][1]='o';}
    if(tabc[1][1]=='x' & tabc[1][0]=='x' & tabc[1][2]=='*'){tabc[1][2]='o';}
    if(tabc[1][1]=='x' & tabc[2][1]=='x' & tabc[0][1]=='*'){tabc[0][1]='o';}
    if(tabc[1][1]=='x' & tabc[1][2]=='x' & tabc[1][0]=='*'){tabc[1][0]='o';}


    cout << tabc[0][0] << " " << tabc[0][1] << " " << tabc[0][2] << endl;
    cout << tabc[1][0] << " " << tabc[1][1] << " " << tabc[1][2] << endl;
    cout << tabc[2][0] << " " << tabc[2][1] << " " << tabc[2][2] << endl << endl;



    }



    return 0;
}
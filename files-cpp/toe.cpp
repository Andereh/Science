#include <iostream>
#include <math.h>

using namespace std;

char cells[9];
char player_key = 'X';
short int counter = 0;

void chose_starter();
void print_table();
void init_table();
bool play_and_check(int);
char check_winner();

int main()
{
    int cell;
    char winner;

    srand(time(NULL));

    init_table();
    chose_starter();


    do
    {
    system("clear");

    player_key = player_key == 'X' ? 
        'O' : 'X';

    printf("Turno de las: %c\n", player_key);

    print_table();
    printf("Juega una celda: ");
    cin >> cell;

    while (!play_and_check(cell)) cin >> cell;


    winner = check_winner();    
    counter++;
    if (counter >= 9) 
    {
        winner = 'N';
        break;
    }
    
    } while (winner == 'N');

    if (winner == 'N')
    {
        printf("Que lamentable es ver a dos mancos jugar juntos");
    }

    system("clear");
    printf("Ja! Siempre supe que el equipo de las \"%c\" iba a ganar\n", player_key);
    printf("Hasta le aposte 10$\n\n");
    print_table();


    return 0;
}

void chose_starter()
{
    int chose = floor(rand());
    chose %= 2;

    player_key = chose == 1 ?
        'X' : 'O';
}

void print_table() {
    for (int i = 1; i <= 9; i++)
    {
        if (i%3 != 0) printf(" %c |", cells[i-1]);
        else printf(" %c", cells[i-1]);

        if (i%3 == 0 && i < 8) cout << "\n-----------\n";
    }
    cout << "\n";
}

void init_table()
{
    for (int i = 9; i >= 1; i--) cells[(i-9)*-1] = '0' + i;
}

bool play_and_check(int cell)
{
    cell = (cell-9)*-1;
    if (cell < 0 || cell > 8)
    {
        printf("Las celdas van del 1 al 9. intenta otra: ");
        return 0;
    }


    if (( cells[cell] != 'X' ) && ( cells[cell] != 'O' ))
    {
        cells[cell] = player_key;
        return 1;
    } else
    {
        printf("Celda ocupada, intenta otra: ");
        return 0;
    }
}

char check_winner()
{
    char keys[] = {'X', 'O'};

    for (char k : keys)
    {
        if (
                (cells[0] == k && cells[1] == k && cells[2] == k) ||
                (cells[3] == k && cells[4] == k && cells[5] == k) ||
                (cells[6] == k && cells[7] == k && cells[8] == k) ||

                (cells[0] == k && cells[3] == k && cells[6] == k) ||
                (cells[1] == k && cells[4] == k && cells[7] == k) ||
                (cells[2] == k && cells[5] == k && cells[8] == k) ||


                (cells[0] == k && cells[4] == k && cells[8] == k) ||
                (cells[2] == k && cells[4] == k && cells[6] == k)
           )
        {
            return k;
        } 
    }
    return 'N';
}

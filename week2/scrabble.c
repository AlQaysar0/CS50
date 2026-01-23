#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int scorepoints[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                     1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int calculate_score(string W)
{
    int Score = 0;

    for (int i = 0; i < strlen(W); i++)
    {
        if (isupper(W[i]))
        {
            Score += scorepoints[W[i] - 'A'];
        }
        else if (islower(W[i]))
        {
            Score += scorepoints[W[i] - 'a'];
        }
    }

    return Score;
}

int main()
{

    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    int score1 = calculate_score(word1);
    int score2 = calculate_score(word2);

    if (score1 > score2)
    {
        printf("player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("player 2 wins!\n");
    }
    else
    {
        printf("tie\n!");
    }

    return 0;
}

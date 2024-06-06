#include <iostream>
#include "TuringMachine.h"
using namespace std;
void initializeMachine(char tape[], int &head, const string &currentState, int tapeSize)
{
    int i = 0;
    while (tape[i] == '_' && i < tapeSize && currentState == "start")
    {

        i++;
    }
    head = i;
};
bool matchRule(const string &currentState, const char &currentSymbol, string rules[][5],
               int numRules, string &newState, char &newSymbol, string &move)
{

    for (int irule = 0; irule < numRules; irule++)
    {
        if (currentState == rules[irule][0] && currentSymbol == rules[irule][1][0])
        {
            newState = rules[irule][2];
            newSymbol = rules[irule][3][0];
            move = rules[irule][4];
            return true;
        }
    }
    return false;
};
void applyRule(char tape[], int &head, const string &newState, string &currentState,
               const char &newSymbol, const string &move, int tapeSize)
{

    tape[head] = newSymbol;
    currentState = newState;
    if (move[0] == 'L')
    {
        if (head - 1 >= 0)
        {
            head--;
        }
    }

    else if (move[0] == 'R')
    {
        if (head + 1 < tapeSize)
            head++;
    }
};
bool checkFinalState(const string &currentState)
{
    if (currentState == "reject" || currentState == "accept")
    {
        return true;
    }
    else
    {
        return false;
    }
};
void printOutput(const char tape[], const string &currentState, int tapeSize)
{

    cout << "Final tape: ";
    for (int i = 0; i < tapeSize; i++)
    {
        cout << tape[i];
    }
    cout << endl;

    cout << "Machine ended in state: " << currentState << endl;
};
void simulateTuringMachine(char tape[], string rules[][5], int numRules, int tapeSize)
{
    int head = 0;
    string currentstate = "start";
    char symbolN, symbolO;
    symbolO = tape[head];
    string move, newstate;
    initializeMachine(tape, head, currentstate, tapeSize);

    while (!checkFinalState(currentstate))
    {
        symbolO = tape[head];
        if (
            matchRule(currentstate, symbolO, rules, numRules, newstate, symbolN, move))
        {
            applyRule(tape, head, newstate, currentstate, symbolN, move, tapeSize);
        }
        else
        {
            currentstate = "reject";
        }
    }

    printOutput(tape, currentstate, tapeSize);
};

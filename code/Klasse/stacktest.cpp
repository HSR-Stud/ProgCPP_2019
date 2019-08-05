// Datei: stacktest.cpp 
// implementiert ein Testprogramm für Stackoperationen
// R. Bonderer, 26.03.2019

#include <iostream>
#include "Stack.h"
using namespace std;

int main(void)
{
  Stack s;
  // bei der folgenden Zeile wird der Copy Ctor aufgerufen
  // wenn nicht selbst deklariert, wird das System einen zur Verfügung stellen
  // wenn der Copy Ctor privat deklariert wird, verhindert der Compiler die folgende Zeile

  // Stack s2 = s;
  
  char ch = 0;
  int nr;
  do
  {
    cout << "\n\nOperation (Quit, pUsh, pOp, peeK, isEmpty) ";
    cin >> ch;
    switch(ch)
    {
    case 'Q':   // quit
    case 'q':
        break;
    case 'U':   // push
    case 'u':
      cout << "\nElement to push: ";
      cin >> nr;
      s.push(nr);
      if (s.wasError())
        cout << "\nError: Stack full.";
      break;
    case 'O':   // pop
    case 'o':
      nr = s.pop();
      if (s.wasError())
        cout << "\nError: Stack is empty (nothing to pop).";
      else
        cout << "\nPopped element " << nr;
      break;
    case 'K':   // peek
    case 'k':
      nr = s.peek();
      if (s.wasError())
        cout << "\nError: Stack is empty (nothing to peek).";
      else
        cout << "\nPeeked element " << nr;
      break;
    case 'E':   // isEmpty
    case 'e':
      if (s.isEmpty())
        cout << "\nStack is empty.";
      else
        cout << "\nStack contains elements.";
      break;
    default:
      cout << "\nInvalid operation.";
      break;
    }
  }  while (ch != 'Q' && ch != 'q');
  return 0;
}

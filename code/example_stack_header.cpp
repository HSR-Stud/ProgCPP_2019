// Datei: Stack.h 
// Schnittstellendefinition für Stack
// R. Bonderer, 26.03.2019

#ifndef STACK_H_
#define STACK_H_

class Stack
{
  public:
    Stack();
    // Default Ctor, initialisiert den Stack
  
    void push(int e);
    // legt ein Element auf den Stack, falls der Stack noch nicht voll ist
    // wasError() gibt Auskunft, ob push() erfolgreich war
  
    int pop();
    // nimmt ein Element vom Stack, falls der Stack nicht leer ist
    // wasError() gibt Auskunft, ob pop() erfolgreich war

    int peek() const;
    // liest das oberste Element vom Stack, falls der Stack nicht leer ist
    // wasError() gibt Auskunft, ob peek() erfolgreich war
  
    bool isEmpty() const;
    // return: true: Stack ist leer
    //         false: sonst
  
    bool isFull() const;
    // return: true: Stack ist voll
    //         false: sonst
  
    bool wasError() const;
    // return: true: Operation war fehlerhaft
    //         false: sonst

  private:
    Stack(const Stack& s);  // verhindert das Kopieren von Stack-Objekten
    enum {maxElems = 10};   // Anzahl Stackelemente
    int elem[maxElems];     // Array fuer Speicherung des Stacks
    int top;                // Arrayindex des naechsten freien Elements
    mutable bool error;     // true: Fehler passiert; false: sonst
    // mutable: auch const-Methoden können dieses Attribut setzen
};

#endif // STACK_H_

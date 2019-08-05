int x = 24;
int& r1 = x; // Definition der Referenz r1
x = 55; // x == 55, r1 == 55 (dasselbe Objekt)
r1 = 7; // x == 7, r1 == 7 (dasselbe Objekt)
r1++; // x == 8, r1 == 8 (dasselbe Objekt)
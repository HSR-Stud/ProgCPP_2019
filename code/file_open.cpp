// Default-Modi
ifstream readfrom("Eingabe.txt");
ofstream writeTo("Ausgabe.txt");

// F�r Eingabe �ffnen
ifstream readFrom("Eingabe.txt", ios_base::in);

// Bin�re Eingabe
ifstream readFrom("Eingabe.txt", ios_base::in 
                               | ios_base::bin);

// Bin�re Ausgabe und Datei leeren 
// falls sie existiert
ofstream writeTo("Ausgabe.txt", ios_base::out 
                              | ios_base::bin 
                              | ios_base::trunc);
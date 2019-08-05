int* pInt = new int; 
	// Speicher fuer int alloziert
char* pCh1 = new char; 
	// Speicher fuer char alloziert
char* pCh2 = new char; 
	// Speicher fuer char alloziert
*pInt = 23;
std::cin >> *pCh1;
pCh2 = pCh1;
// pCh2 zeigt nun auch auf die gleiche Speicherstelle wie pCh1. Damit geht aber der Zugriff auf die Speicherstelle verloren, auf die pCh2 gezeigt hat (memory leak!)
delete pInt; // Speicher wieder freigeben
delete pCh1;
delete pCh2; // ergibt Fehler, bereits ueber pCh1 freigegeben
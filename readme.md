# Klausur 2016

Lösung für die C++ Klausur von 2016

Erledigt zum Lernen

## Aufgabe 1
###1 Similarity Search
Implementieren Sie eine Funktion zur Suche von ¨ahnlichen Zeichenketten.  

int similaritySearch(
	string text ,
	string pattern ,
	int maxNumberOfMismatches ,
	int startPosition) {
	// IHRE LOESUNG
}
Diese Funktion sucht nach der Zeichenkette *pattern* im *text*. Die Suche beginnt an der position
*startPosition*. Wird die Zeichenkette gefunden, so wird die **Position** im *text* zurckgegeben.
Der Parameter maxNumberOfMismatches gibt an, wie viele Zeichen verschieden sein d¨urfen um
trotzdem noch ein Match zu erreichen.  
Sollte kein Match existieren, so liefert die Methode -1 zurück.

####Beispiel:
**Text:** GDFGHJDFFGJJGHJTYREYWERWETYDSGF
**Pattern:** FFKJJ
**maxNumberOfMismatches:** 1

**Pos:** 012345678
**Text:** GDFGHJDFFGJJGHJTYREYWERWETYDSGF
**Pattern:** FFKJJ
**maxNumberOfMismatches:** 1
Das Pattern wird an Stelle **7** im Text gefunden. Das G und das K stimmen zwar nicht ¨uberein, da
jedoch 1 Mismatch vorkommen darf ist das ok.


## Aufgabe 2 
### GUI Programmierung
Erstellen Sie mit der QT Bibliothek ein Programm mit dem folgenden Gui:
![Primary Check](https://raw.githubusercontent.com/Misch2k/Klausur2016/master/Readme/Gui.bmp)

Wird der Button Start gedrückt, so wird geprüft ob die eingegebene Zahl eine Primzahl ist oder nicht.
Das Resultat wird mit Hilfe eines Dialoges angezeigt.
![Result](https://raw.githubusercontent.com/Misch2k/Klausur2016/master/Readme/result.bmp)

Ist der eingegebene Wert keine Zahl, so wird ebenfalls mit Hilfe eines Dialoges ein Fehler angezeigt.
![Error](https://raw.githubusercontent.com/Misch2k/Klausur2016/master/Readme/error.bmp)


## Aufgabe 3 
### Planeten

Gegeben ist die folgende Klasse für Planeten:
class Planet {
private:
	string name ; // Name de s Pl a n e t e n
	int x , y , z ; // Ko o r d i n a t e n im Raum
public:
	// g e t t e r und s e t t e r Methoden
} ;

Schreiben Sie eine Klasse **PlanetUtil** welche die folgende Methode enth¨alt:

class PlanetUtil {
public:
	static string findNextPlanet(Planet planet , list<Planet> planets);
};

Diese Methode gibt den Namen des Planeten (aus der list planets) zurück, welcher dem Planeten
planet am nächsten ist. Die list planets enthält immer mindestens 1 Planet.
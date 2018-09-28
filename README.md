# C-SoSe18-Teil-2
Teil 2/MP | C++ | SoSe 2018

### Screenshot
![Screenshot](https://i.imgur.com/4Qk1qfZ.png)

### Funktionalität
Aufgrund von Zeitmangel habe ich das Spiel nicht komplett so umsetzen können, wie ich es mir gewünscht hätte. Beispielsweise hatte ich keine Zeit mehr dazu, die beiden Dateien **buttons.cpp** und **buttons.h** zu implementieren, die ein Hauptmenü vor Spielbeginn darstellen sollten.

Ansonsten erfüllt das Spiel über wichtige Grundfunktionen. Der Score steigt, wenn der Spieler den Objekten per Pfeiltasten (links und rechts) erfolgreich ausweicht und diese sodann aus dem Programm vollständig gelöscht werden. 
Wenn der Spieler mit einem Objekt kollidiert, verliert er Lebenspunkte (LP). Hierbei kann es passieren, dass das Programm allerdings abstürzt. Ich habe versucht, das Problem zu umgehen (siehe Datei **enemy.cpp**), indem ich die Funktion umgestellt bzw. *return;* eingefügt habe. Allerdings konnte ich das Problem leider nicht vollständig lösen.



**Effizienz, direkte Hardware-Kontrolle und Flexibilität bei der Speicherverwaltung**

* **Pointer** spiegeln direkt die Funktionsweise der **CPU** und **RAM** wider,  
  bei der **Daten** über Speicheradressen angesprochen werden. 
* Pointer (Zeiger) sind **Variablen**, die die **Adresse** einer anderen Variable speichern. 
* **Leistungsstarke Methode**, um direkt auf Speicher zuzugreifen und Daten zu manipulieren.

* Vermeidung von **Datenkopien** (Effizienz)
* Veränderung von Variablen in **Funktionen** (call bxy reference)
* **Dynamische Speicherverwaltung**:  Pointer erlauben es, Speicher erst 
  während der Laufzeit flexibel anzufordern und wieder freizugeben.
* **Direkter Hardware-Zugriff**: In Embedded Systems Programmierung
  besitzen Mikrocontroller Register an festen Speicheradressen.  
  Über Pointer kann man direkt in diese Hardware-Register schreiben, um z. B. eine LED anzusteuern.
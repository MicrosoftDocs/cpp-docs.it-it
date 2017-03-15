---
title: "Errore del compilatore di risorse RW2002 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RW2002"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RW2002"
ms.assetid: b1d1a49b-b50b-4b0b-9f09-c7762e2dbe8f
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore di risorse RW2002
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Errore di analisi.  
  
### Possibili cause  
  
1.  **Specificare il tipo di tasto di scelta rapida \(ASCII o VIRTKEY\).**  
  
     Nel campo `type` dell'istruzione **ACCELERATORS** deve essere specificato il valore ASCII o VIRTKEY.  
  
2.  **Previsto BEGIN nella tabella dei tasti di scelta rapida.**  
  
     La parola chiave **BEGIN** deve seguire immediatamente la parola chiave **ACCELERATORS**.  
  
3.  **Previsto BEGIN dopo DIALOG.**  
  
     La parola chiave **BEGIN** deve seguire immediatamente la parola chiave **DIALOG**.  
  
4.  **Previsto BEGIN dopo MENU.**  
  
     La parola chiave **BEGIN** deve seguire immediatamente la parola chiave **MENU**.  
  
5.  **Previsto BEGIN dopo RCData.**  
  
     La parola chiave **BEGIN** deve seguire immediatamente la parola chiave **RCDATA**.  
  
6.  **Previsto BEGIN nella tabella delle stringhe.**  
  
     La parola chiave **BEGIN** deve seguire immediatamente la parola chiave **STRINGTABLE**.  
  
7.  **Impossibile riutilizzare le costanti di stringa.**  
  
     Lo stesso valore è utilizzato due volte all'interno di un'istruzione **STRINGTABLE**.  Verificare che non si stia creando una sovrapposizione di valori decimali e valori esadecimali.  È necessario che tutti gli ID inclusi in **STRINGTABLE** siano univoci.  Per ottenere i migliori risultati, utilizzare costanti contigue a partire da un multiplo di 16.  
  
8.  **Carattere di controllo non incluso nell'intervallo \[^A \- ^Z\].**  
  
     Un carattere di controllo nell'istruzione **ACCELERATORS** non è valido.  Il carattere che segue l'accento circonflesso \(**^**\) deve essere compreso tra A e Z incluse.  
  
9. **Menu vuoti non consentiti.**  
  
     È presente una parola chiave **END** senza che sia definita una voce di menu nell'istruzione **MENU**.  I menu vuoti non vengono accettati dal compilatore di risorse.  Verificare che all'interno dell'istruzione **MENU** non vi siano virgolette aperte.  
  
10. **Previsto END dopo DIALOG.**  
  
     Alla fine di un'istruzione **DIALOG** deve comparire la parola chiave **END**.  Verificare che non siano state lasciate aperte virgolette nell'istruzione precedente.  
  
11. **Previsto END dopo MENU.**  
  
     Alla fine di un'istruzione **MENU** deve comparire la parola chiave **END**.  Verificare che non vi siano virgolette aperte o coppie non corrispondenti di istruzioni **BEGIN** ed **END**.  
  
12. **Prevista virgola nella tabella dei tasti di scelta rapida.**  
  
     Il compilatore di risorse richiede una virgola tra i campi `event` e *idvalue* nell'istruzione **ACCELERATORS**.  
  
13. **Previsto nome di classe di controlli.**  
  
     Il campo `class` di un'istruzione **CONTROL** all'interno dell'istruzione **DIALOG** deve essere di uno dei seguenti tipi: BUTTON, COMBOBOX, EDIT, LISTBOX, SCROLLBAR, STATIC o definito dall'utente.  Verificare che il nome della classe sia stato digitato correttamente.  
  
14. **Previsto nome di tipo di carattere.**  
  
     Il campo *typeface* dell'opzione FONT di un'istruzione **DIALOG** deve essere una stringa di caratteri ASCII racchiusa tra virgolette doppie.  Tale campo specifica il nome di un tipo di carattere.  
  
15. **Previsto valore di ID per menuitem.**  
  
     Nell'istruzione **MENU** deve essere presente un campo *menuID* nel quale viene specificato il nome o il numero identificativo della risorsa di menu.  
  
16. **Prevista stringa menu.**  
  
     In ogni istruzione **MENUITEM** e **POPUP** deve essere presente un campo *text* costituito da una stringa racchiusa tra virgolette doppie che consente di specificare il nome di voce di menu o di menu di scelta rapida.  In un'istruzione **MENUITEM SEPARATOR** non sono richieste stringhe tra virgolette.  
  
17. **Previsto valore di comando numerico.**  
  
     Ai fini del compilatore di risorse era previsto un campo *idvalue* numerico all'interno dell'istruzione **ACCELERATORS**.  Verificare che per specificare il valore sia stata utilizzata una costante `#define` correttamente digitata.  
  
18. **Prevista costante numerica nella tabella delle stringhe.**  
  
     Una costante numerica, definita in un'istruzione `#define`, deve seguire immediatamente la parola chiave **BEGIN** in un'istruzione **STRINGTABLE**.  
  
19. **Prevista una dimensione in punti numerica.**  
  
     Il campo *pointsize* dell'opzione FONT di un'istruzione **DIALOG** deve essere un Integer di dimensione in punti.  
  
20. **Prevista una costante di finestra di dialogo numerica.**  
  
     In un'istruzione **DIALOG** sono richiesti valori integer per i campi *x, y, width* e *height*.  Verificare che tali valori siano inclusi dopo la parola chiave **DIALOG** e che non siano negativi.  
  
21. **Prevista stringa in STRINGTABLE.**  
  
     È prevista una stringa dopo ogni valore *stringid* in un'istruzione **STRINGTABLE**.  
  
22. **Prevista stringa o comando di tasti di scelta rapida costante.**  
  
     Il compilatore di risorse non è in grado di determinare il tipo di tasto impostato come tasto di scelta rapida.  Il campo `event` all'interno dell'istruzione **ACCELERATORS** potrebbe non essere valido.  
  
23. **Previsto numero per ID.**  
  
     Era previsto un numero per il campo `id` di un'istruzione di controllo all'interno dell'istruzione **DIALOG**.  Verificare che sia stato definito un numero o un'istruzione `#define` per l'ID controllo.  
  
24. **Prevista stringa tra virgolette in una classe di finestre di dialogo.**  
  
     Il campo `class` dell'opzione CLASS di un'istruzione **DIALOG** deve essere un Integer oppure una stringa racchiusa tra virgolette doppie.  
  
25. **Prevista stringa tra virgolette in un titolo di finestra di dialogo.**  
  
     Il campo `captiontext` dell'opzione CAPTION di un'istruzione **DIALOG** deve essere una stringa di caratteri ASCII racchiusa tra virgolette doppie.  
  
26. **Impossibile trovare il file: nomefile.**  
  
     Il file specificato nella riga di comando del compilatore di risorse non è stato trovato.  Controllare che il file non sia stato spostato in un'altra directory e che il nome del file o il percorso siano stati digitati correttamente.  La ricerca dei file viene eseguita utilizzando la variabile di ambiente **INCLUDE** o, qualora disponibile, l'impostazione Visual Workbench.  
  
27. **I nomi di carattere devono essere numeri ordinali.**  
  
     Il campo *pointsize* all'interno dell'istruzione FONT deve corrispondere a un Integer, non a una stringa.  
  
28. **Tasto di scelta rapida non valido.**  
  
     Un campo `event` all'interno di un'istruzione **ACCELERATORS** non è stato riconosciuto o è di lunghezza superiore a due caratteri.  
  
29. **Specificare il tipo di tasto di scelta rapida \(ASCII o VIRTKEY\).**  
  
     Nel campo `type` dell'istruzione **ACCELERATORS** deve essere specificato il valore ASCII o VIRTKEY.  
  
30. **Carattere di controllo non valido.**  
  
     Un carattere di controllo nell'istruzione **ACCELERATORS** non è valido.  Un carattere di controllo valido consiste in una sola lettera preceduta da un accento circonflesso \(^\).  
  
31. **Tipo di controllo non valido.**  
  
     Le istruzioni di controllo ammesse all'interno di un'istruzione **DIALOG** sono: CHECKBOX, COMBOBOX, CONTROL, CTEXT, DEFPUSHBUTTON, EDITTEXT, GROUPBOX, ICON, LISTBOX, LTEXT, PUSHBUTTON, RADIOBUTTON, RTEXT, SCROLLBAR.  Verificare che i nomi di queste istruzioni siano stati digitati correttamente.  
  
32. **Tipo non valido.**  
  
     Il tipo di risorsa non compare tra quelli definiti nel file WINDOWS.h.  
  
33. **Prevista stringa di testo o numero ordinale nel controllo.**  
  
     Il campo *text* di un'istruzione **CONTROL** all'interno dell'istruzione **DIALOG** deve essere una stringa di testo o un riferimento ordinale al tipo di controllo.  Se si utilizza un numero ordinale, verificare che sia stata definita un'istruzione `#define` per il controllo.  
  
34. **Parentesi non corrispondenti.**  
  
     Verificare che tutte le parentesi aperte nell'istruzione **DIALOG** siano state chiuse.  
  
35. **Valore non previsto in RCData.**  
  
     I valori *raw\-data* nell'istruzione **RCDATA** devono essere Integer o stringhe separati da una virgola.  Assicurarsi di non lasciare virgole o virgolette intorno alle stringhe.  
  
36. **Sottotipo di menu sconosciuto.**  
  
     Nel campo *item\-definition* dell'istruzione **MENU** possono essere presenti solo istruzioni **MENUITEM** e **POPUP**.
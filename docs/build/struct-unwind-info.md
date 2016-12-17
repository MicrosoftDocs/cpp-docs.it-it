---
title: "struct UNWIND_INFO | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: f0aee906-a1b9-44cc-a8ad-463637bd5411
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# struct UNWIND_INFO
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La struttura UNWIND\_INFO viene utilizzata per registrare gli effetti di una funzione sul puntatore dello stack e sulla posizione nello stack in cui vengono salvati i registri non volatili:  
  
|||  
|-|-|  
|UBYTE: 3|Versione|  
|UBYTE: 5|Flag|  
|UBYTE|Dimensione del prologo|  
|UBYTE|Numero dei codici di rimozione|  
|UBYTE: 4|Frame Register|  
|UBYTE: 4|Offset \(scalato\) di Frame Register|  
|USHORT \* n|Matrice dei codici di rimozione|  
|variabile|Può avere uno dei formati, \(1\) o \(2\), indicati più avanti|  
  
 \(1\) Gestore di eccezioni  
  
|||  
|-|-|  
|ULONG|Indirizzo del gestore eccezioni|  
|variabile|Dati del gestore specifico del linguaggio \(facoltativi\)|  
  
 \(2\) Concatenato rimuovere le informazioni  
  
|||  
|-|-|  
|ULONG|Indirizzo iniziale della funzione|  
|ULONG|Indirizzo finale della funzione|  
|ULONG|Indirizzo di UNWIND\_INFO|  
  
 La struttura UNWIND\_INFO deve essere allineata in memoria a livello di DWORD.  Di seguito è riportato il significato di ciascun campo:  
  
 **Versione**  
 Numero di versione dei dati di rimozione, attualmente 1.  
  
 **Flag**  
 Sono definiti attualmente tre flag:  
  
 UNW\_FLAG\_EHANDLER la funzione ha un gestore eccezioni che deve essere chiamato quando cerca le funzioni che devono esaminare le eccezioni.  
  
 UNW\_FLAG\_UHANDLER la funzione ha un gestore di terminazione che deve essere chiamato quando si rimuove un'eccezione.  
  
 UNW\_FLAG\_CHAININFO che si rimuove la struttura di informazioni non è quello primario per la routine.  Nella voce UNWIND\_INFO concatenata è presente il contenuto di una precedente voce RUNTIME\_FUNCTION.  Per informazioni sulle strutture UNWIND\_INFO concatenate, vedere più avanti.  Se questo flag è impostato, è necessario che i flag UNW\_FLAG\_EHANDLER e UNW\_FLAG\_UHANDLER non siano impostati.  Inoltre, i campi Frame Register e dell'allocazione fissa dello stack devono contenere gli stessi valori della struttura UNWIND\_INFO principale.  
  
 **Dimensione del prologo**  
 Lunghezza del prologo della funzione, in byte.  
  
 **Numero dei codici di rimozione**  
 Numero di slot nella matrice dei codici di rimozione.  Alcuni codici di rimozione, ad esempio UWOP\_SAVE\_NONVOL, richiedono più di uno slot nella matrice.  
  
 **Frame Register**  
 Se è diverso da zero, significa che la funzione utilizza un puntatore ai frame e in questo campo è indicato il numero del registro non volatile utilizzato come puntatore ai frame, in base alla stessa codifica utilizzata per il campo OpInfo dei nodi UNWIND\_CODE.  
  
 **Offset \(scalato\) di Frame Register**  
 Se il campo Frame Register è diverso da zero, indica l'offset scalato rispetto alla posizione di RSP che deve essere applicato all'istruzione FP reg quando viene eseguita.  Il valore effettivo di FP reg è impostato su RSP \+ 16 \* questo numero, consentendo offset da 0 a 240.  Questo permette agli stack frame dinamici di puntare all'istruzione FP reg nella parte centrale dell'allocazione dello stack locale, in modo da facilitare la densità di codice tramite l'utilizzo di istruzioni più brevi \(più istruzioni possono utilizzare il formato di offset con segno a 8 bit\).  
  
 **Matrice dei codici di rimozione**  
 Matrice di elementi che descrive gli effetti del prologo su RSP e i registri non volatili.  Per il significato dei singoli elementi, vedere la sezione relativa alla struttura UNWIND\_CODE.  Per facilitare l'allineamento, questa matrice avrà sempre un numero pari di voci, con l'ultima voce eventualmente inutilizzata. In questo caso, la lunghezza della matrice sarà maggiore di 1 rispetto al valore indicato dal campo relativo al numero dei codici di rimozione.  
  
 **Indirizzo del gestore eccezioni**  
 Puntatore relativo dell'immagine al gestore della terminazione o al gestore eccezioni specifico del linguaggio della funzione \(se il flag UNW\_FLAG\_CHAININFO non è impostato e uno dei flag UNW\_FLAG\_EHANDLER o UNW\_FLAG\_UHANDLER è impostato\).  
  
 **Dati del gestore specifico del linguaggio**  
 Dati del gestore eccezioni specifico del linguaggio della funzione.  Il formato di questi dati non è definito e viene determinato direttamente dallo specifico gestore eccezioni in uso.  
  
 **UNWIND\_INFO concatenata**  
 Se il flag UNW\_FLAG\_CHAININFO è impostato, la struttura UNWIND\_INFO termina con tre UWORD,  che rappresentano le informazioni RUNTIME\_FUNCTION relative alla funzione della struttura UNWIND\_INFO concatenata.  
  
## Vedere anche  
 [Dati di rimozione per la gestione delle eccezioni, supporto del debugger](../build/unwind-data-for-exception-handling-debugger-support.md)
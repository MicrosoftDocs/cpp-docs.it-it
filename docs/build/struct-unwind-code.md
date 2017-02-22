---
title: "struct UNWIND_CODE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 104955d8-7e33-4c5a-b0c6-3254648f0af3
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# struct UNWIND_CODE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La matrice dei codici di rimozione viene utilizzata per registrare la sequenza di operazioni nel prologo che hanno effetto su RSP e i registri non volatili.  Di seguito è riportato il formato di ciascun elemento di codice:  
  
|||  
|-|-|  
|UBYTE|Offset nel prologo|  
|UBYTE: 4|Codice operativo di rimozione|  
|UBYTE: 4|OpInfo|  
  
 La matrice viene disposta in ordine decrescente in base all'offset nel prologo.  
  
 **Offset nel prologo**  
 Offset dall'inizio del prologo alla fine dell'istruzione che esegue questa operazione più 1, ossia offset rispetto all'inizio dell'istruzione successiva.  
  
 **Codice operativo di rimozione**  
 Nota: alcuni codici operativi richiedono un offset senza segno a un valore nello stack frame locale.  Questo offset viene calcolato dall'inizio \(indirizzo più piccolo\) dell'allocazione fissa dello stack.  Se il campo Frame Register in UNWIND\_INFO è zero, questo offset viene calcolato a partire da RSP.  In caso contrario, l'offset viene calcolato rispetto alla posizione di RSP al momento dell'esecuzione dell'istruzione FP reg.  Questo offset è uguale alla differenza tra l'istruzione FP reg e l'istruzione FP reg offset \(16 moltiplicato per l'offset scalato di Frame Register in UNWIND\_INFO\).  Se si utilizza un'istruzione FP reg, qualsiasi codice di rimozione che accetta un offset deve essere utilizzato soltanto dopo l'esecuzione di FP reg nel prologo.  
  
 Per tutti i codici operativi, ad eccezione di UWOP\_SAVE\_XMM128 e UWOP\_SAVE\_XMM128\_FAR, l'offset sarà sempre un multiplo di 8, poiché tutti i valori rilevanti dello stack sono memorizzati su limiti di 8 byte \(anche lo stack utilizza sempre un allineamento a 16 byte\).  Per i codici operativi che accettano un offset di tipo short \(minore di 512 K\), l'ultimo nodo USHORT di questo codice contiene l'offset diviso per 8.  Per i codici operativi che accettano un offset di tipo long \(512 K \<\= offset \< 4 GB\), gli ultimi due nodi USHORT di questo codice contengono l'offset \(in formato little\-endian\).  
  
 Per i codici operativi UWOP\_SAVE\_XMM128 e UWOP\_SAVE\_XMM128\_FAR, l'offset sarà sempre un multiplo di 16, poiché tutte le operazioni XMM a 128 bit devono essere eseguite nella memoria con allineamento a 16 byte.  Di conseguenza, per UWOP\_SAVE\_XMM128 verrà utilizzato un fattore di scala pari a 16, consentendo offset minori di 1 M.  
  
 Di seguito sono indicati i possibili codici operativi di rimozione:  
  
 UWOP\_PUSH\_NONVOL \(0\)1 nodo  
  
 Consente di inserire un registro Integer non volatile, decrementando RSP di 8.  Nel campo OpInfo è indicato il numero del registro.  Tenere presente che, a causa dei vincoli negli epiloghi, i codici di rimozione UWOP\_PUSH\_NONVOL devono essere specificati all'inizio nel prologo e, in modo corrispondente, alla fine nella matrice dei codici di rimozione.  Questo ordinamento relativo viene applicato a tutti gli altri codici di rimozione, ad eccezione di UWOP\_PUSH\_MACHFRAME.  
  
 UWOP\_ALLOC\_LARGE \(1\)2 o 3 nodi  
  
 Consente di allocare un'area di grandi dimensioni nello stack.  Esistono due possibilità.  Se il valore del campo OpInfo è 0, la dimensione dell'allocazione divisa per 8 viene registrata nello slot successivo, consentendo un'allocazione fino a 512 K – 8.  Se, invece, è 1, la dimensione non scalata dell'allocazione viene registrata nei due slot successivi in formato little\-endian, consentendo allocazioni fino a 4 GB – 8.  
  
 UWOP\_ALLOC\_SMALL \(2\)1 nodo  
  
 Consente di allocare un'area di piccole dimensioni nello stack.  La dimensione dell'allocazione corrisponde al valore del campo OpInfo \* 8 \+ 8, consentendo allocazioni da 8 a 128 byte.  
  
 Il codice di rimozione relativo a un'allocazione dello stack deve sempre utilizzare la codifica più breve possibile:  
  
|||  
|-|-|  
|**Dimensione allocazione**|**Codice di rimozione**|  
|Da 8 a 128 byte|UWOP\_ALLOC\_SMALL|  
|Da 136 a 512 K \- 8 byte|UWOP\_ALLOC\_LARGE, OpInfo \= 0|  
|Da 512 K a 4 G – 8 byte|UWOP\_ALLOC\_LARGE, OpInfo \= 1|  
  
 UWOP\_SET\_FPREG \(3\)1 nodo  
  
 Consente di definire il registro del puntatore ai frame impostando il registro su un offset rispetto al valore corrente di RSP.  L'offset è uguale all'offset \(scalato\) del campo Frame Register in UNWIND\_INFO \* 16, consentendo offset da 0 a 240.  L'utilizzo di un offset permette di definire un puntatore ai frame che punti alla parte centrale dell'allocazione fissa dello stack, in modo da facilitare la densità di codice consentendo a più accessi di utilizzare istruzioni di tipo short.  Il campo OpInfo è riservato e non deve essere utilizzato.  
  
 UWOP\_SAVE\_NONVOL \(4\)2 nodi  
  
 Consente di salvare un registro integer non volatile nello stack utilizzando un'istruzione MOV anziché un'istruzione PUSH.  Questa operazione viene utilizzata principalmente per lo shrink\-wrapping, in cui un registro non volatile viene salvato nello stack in una posizione precedentemente allocata.  Nel campo OpInfo è indicato il numero del registro.  L'offset dello stack, scalato per 8, viene registrato nello slot successivo del codice operativo di rimozione, come descritto sopra.  
  
 UWOP\_SAVE\_NONVOL\_FAR \(5\)3 nodi  
  
 Consente di salvare un registro integer non volatile nello stack con un offset di tipo long, utilizzando un'istruzione MOV anziché un'istruzione PUSH.  Questa operazione viene utilizzata principalmente per lo shrink\-wrapping, in cui un registro non volatile viene salvato nello stack in una posizione precedentemente allocata.  Nel campo OpInfo è indicato il numero del registro.  L'offset dello stack, non scalato, viene registrato nei due slot successivi del codice operativo di rimozione, come descritto sopra.  
  
 UWOP\_SAVE\_XMM128 \(8\)2 nodi  
  
 Consente di salvare tutti i 128 bit di un registro XMM non volatile nello stack.  Nel campo OpInfo è indicato il numero del registro.  L'offset dello stack, scalato per 16, viene registrato nello slot successivo.  
  
 UWOP\_SAVE\_XMM128\_FAR \(9\)3 nodi  
  
 Consente di salvare tutti i 128 bit di un registro XMM non volatile nello stack con un offset di tipo long.  Nel campo OpInfo è indicato il numero del registro.  L'offset dello stack, non scalato, viene registrato nei due slot successivi.  
  
 UWOP\_PUSH\_MACHFRAME \(10\)1 nodo  
  
 Consente di inserire un machine frame.  Questa operazione viene utilizzata per registrare gli effetti di un'eccezione o un interrupt hardware.  Esistono due possibilità.  Se il valore del campo OpInfo è 0, nello stack sono stati inseriti i seguenti valori:  
  
|||  
|-|-|  
|RSP\+32|SS|  
|RSP\+24|RSP precedente|  
|RSP\+16|EFLAGS|  
|RSP\+8|CS|  
|RSP|RIP|  
  
 Se il valore del campo OpInfo è 1, nello stack sono stati invece inseriti i seguenti valori:  
  
|||  
|-|-|  
|RSP\+40|SS|  
|RSP\+32|RSP precedente|  
|RSP\+24|EFLAGS|  
|RSP\+16|CS|  
|RSP\+8|RIP|  
|RSP|Codice di errore|  
  
 Questo codice di rimozione sarà sempre presente in un prologo fittizio, che non verrà mai effettivamente eseguito ma che deve essere presente prima del punto di ingresso reale di una routine di interrupt, e ha solo il compito di fornire un punto per la simulazione dell'inserimento di un machine frame.  UWOP\_PUSH\_MACHFRAME registra tale simulazione, che indica l'esecuzione delle seguenti operazioni:  
  
 Estrazione dell'indirizzo di ritorno RIP dall'inizio dello stack in *Temp*  
  
 Inserimento di SS  
  
 Inserimento del valore precedente di RSP  
  
 Inserimento di EFLAGS  
  
 Inserimento di CS  
  
 Inserimento di *Temp*  
  
 Inserimento del codice di errore \(se OpInfo è uguale a 1\)  
  
 L'operazione UWOP\_PUSH\_MACHFRAME simulata decrementa RSP di 40 \(OpInfo \= 0\) o 48 \(OpInfo \= 1\).  
  
 **OpInfo**  
 Il significato di questi 4 bit dipende dal codice operativo.  Per codificare un registro \(integer\) di tipo generale, viene utilizzato il seguente mapping:  
  
|||  
|-|-|  
|0|RAX|  
|1|RCX|  
|2|RDX|  
|3|RBX|  
|4|RSP|  
|5|RBP|  
|6|RSI|  
|7|RDI|  
|Da 8 a 15|R8 to R15|  
  
## Vedere anche  
 [Dati di rimozione per la gestione delle eccezioni, supporto del debugger](../build/unwind-data-for-exception-handling-debugger-support.md)
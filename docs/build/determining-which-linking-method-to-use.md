---
title: "Scelta del metodo di collegamento da utilizzare | Microsoft Docs"
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
helpviewer_keywords: 
  - "collegamento esplicito [C++]"
  - "collegamento implicito [C++]"
ms.assetid: 6b6d3fec-4711-4a30-af5b-354b965ecaec
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Scelta del metodo di collegamento da utilizzare
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esistono due tipi di collegamento: implicito ed esplicito.  
  
## Collegamento implicito  
 Il [collegamento implicito](../build/linking-implicitly.md) avviene quando nel codice di un'applicazione viene chiamata una funzione di una DLL esportata.  Quando il codice sorgente per l'eseguibile chiamante viene compilato o assemblato, la chiamata alla funzione della DLL genera un riferimento esterno alle funzioni nel codice dell'oggetto.  Per risolvere questo riferimento esterno, l'applicazione deve collegarsi alla libreria di importazione \(file lib\) fornita dal creatore della DLL.  
  
 La libreria di importazione contiene solo il codice per caricare la DLL e implementare le chiamate alle funzioni nella DLL.  La presenza di una funzione esterna in una libreria di importazione segnala al linker che il codice per tale funzione si trova in una DLL.  Per risolvere i riferimenti esterni alle DLL è sufficiente che il linker aggiunga le informazioni nel file eseguibile per comunicare al sistema in quale posizione trovare il codice DLL all'avvio del processo.  
  
 Quando il sistema avvia un programma che contiene riferimenti collegati in modo dinamico, utilizza le informazioni nel file eseguibile del programma per individuare le DLL richieste.  Se non è in grado di trovarle, il sistema termina il processo e visualizza una finestra di dialogo di errore.  In caso contrario, il sistema associa i moduli DLL allo spazio degli indirizzi del processo.  
  
 Se una delle DLL contiene una funzione di punto di ingresso, per il codice di inizializzazione e terminazione, il sistema operativo chiama la funzione.  Uno dei parametri passati alla funzione di punto di ingresso specifica un codice indicante che la DLL si sta connettendo al processo.  Se la funzione di punto di ingresso non restituisce il valore TRUE, il sistema termina il processo e segnala un errore.  
  
 Il sistema modifica infine il codice eseguibile del processo per fornire indirizzi di avvio per le funzioni DLL.  
  
 Come il restante codice di programma, il codice DLL è associato allo spazio degli indirizzi del processo all'avvio del processo e viene caricato in memoria solo quando richiesto.  Di conseguenza, gli attributi **PRELOAD** e **LOADONCALL** utilizzati dai file def per controllare il caricamento nelle versioni precedenti di Windows ora non hanno più alcun significato.  
  
## Collegamento esplicito  
 La maggior parte delle applicazioni utilizza il collegamento implicito perché è il metodo di collegamento più semplice.  In alcuni casi è tuttavia necessario il [collegamento esplicito](../build/linking-explicitly.md).  Di seguito vengono indicati alcuni motivi comuni per l'utilizzo del collegamento esplicito.  
  
-   L'applicazione non conosce il nome di una DLL che dovrà essere caricata in fase di esecuzione.  È possibile che l'applicazione debba ottenere il nome della DLL e le funzioni esportate da un file di configurazione.  
  
-   Un processo che utilizza il collegamento implicito viene terminato dal sistema operativo se la DLL non viene trovata all'avvio del processo.  In questo caso, se utilizza il collegamento esplicito, il processo non viene terminato e può tentare la correzione dell'errore.  Il processo può, ad esempio, notificare l'errore all'utente e richiedere che venga specificato un percorso diverso per la DLL.  
  
-   Un processo che utilizza il collegamento implicito viene terminato anche nel caso in cui una delle DLL alle quali è collegato abbia una funzione `DllMain` che non viene eseguita correttamente.  In questo caso, se il processo utilizza il collegamento esplicito, non viene terminato.  
  
-   L'avvio di un'applicazione collegata in modo implicito a diverse DLL può richiedere molto tempo perché tutte le DLL vengono caricate al caricamento dell'applicazione.  Per migliorare le prestazioni all'avvio, un'applicazione può collegarsi in modo implicito alle DLL immediatamente necessarie dopo il caricamento ed effettuare il collegamento esplicito alle altre DLL quando richiesto.  
  
-   Grazie al collegamento esplicito, non occorre collegare l'applicazione a una libreria di importazione.  Se la DLL viene modificata provocando un cambiamento dei numeri ordinali di esportazione, le applicazioni che utilizzano il collegamento esplicito non devono ripetere il collegamento, supponendo che chiamino **GetProcAddress** con un nome di funzione e non con un valore ordinale, a differenza delle applicazioni con collegamento implicito che devono ricollegarsi alla nuova libreria di importazione.  
  
 Di seguito vengono indicati due rischi relativi al collegamento esplicito che è opportuno valutare.  
  
-   Se la DLL ha una funzione di punto di ingresso `DllMain`, il sistema operativo chiama la funzione nel contesto del thread che ha chiamato **LoadLibrary**.  La funzione di punto di ingresso non è chiamata se la DLL è già connessa al processo a causa di una chiamata precedente a **LoadLibrary** senza chiamata corrispondente alla funzione **FreeLibrary**.  Il collegamento esplicito può creare problemi se la DLL utilizza una funzione `DllMain` per inizializzare ciascun thread di un processo, poiché i thread esistenti quando viene chiamata **LoadLibrary** o `AfxLoadLibrary` non verranno inizializzati.  
  
-   Se una DLL dichiara i dati statici come **\_\_declspec\(thread\)**, può provocare un errore di protezione se collegata in modo esplicito.  Dopo il caricamento della DLL con **LoadLibrary**, si ha un errore di protezione ogni volta che nel codice si fa riferimento a questi dati. I dati statici includono sia gli elementi statici globali che quelli locali. Quando si crea una DLL, si consiglia quindi di non utilizzare l'archiviazione locale di thread o di segnalare agli utenti della DLL i potenziali problemi legati al caricamento dinamico.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Collegamento implicito](../build/linking-implicitly.md)  
  
-   [Collegamento esplicito](../build/linking-explicitly.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Percorso di ricerca utilizzato da Windows per l'individuazione di una DLL](../build/search-path-used-by-windows-to-locate-a-dll.md)  
  
-   [LoadLibrary e AfxLoadLibrary](../build/loadlibrary-and-afxloadlibrary.md)  
  
-   [GetProcAddress](../build/getprocaddress.md)  
  
-   [FreeLibrary e AfxFreeLibrary](../build/freelibrary-and-afxfreelibrary.md)  
  
-   [\<caps:sentence id\="tgt47" sentenceid\="8081a197f9413cac12a30b57c2612af5" class\="tgtSentence"\>Using thread local storage in a dynamic\-link library \(Windows SDK\)\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/ms686997)  
  
## Vedere anche  
 [Collegamento di un eseguibile a una DLL](../build/linking-an-executable-to-a-dll.md)
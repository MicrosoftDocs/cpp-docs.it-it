---
title: "Funzionamento della libreria di runtime | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_DllMainCRTStartup"
  - "CRT_INIT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CRT_INIT (macro)"
  - "_DllMainCRTStartup (metodo)"
  - "DllMain (funzione)"
  - "DLL [C++], funzione dei punti di ingresso"
  - "DLL [C++], comportamento delle librerie di runtime"
  - "DLL [C++], sequenza di avvio"
  - "connessione del processo [C++]"
  - "disconnessione del processo [C++]"
  - "fase di esecuzione [C++], sequenza di avvio di DLL"
ms.assetid: e06f24ab-6ca5-44ef-9857-aed0c6f049f2
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Funzionamento della libreria di runtime
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nel codice della libreria di runtime C\/C\+\+ viene eseguita la sequenza di avvio della DLL evitando di dover effettuare il collegamento con un modulo separato, come richiesto in Windows 3.x.  Nel codice della libreria di runtime C\/C\+\+ è inclusa la funzione di punto di ingresso della DLL denominata **\_DllMainCRTStartup**.  La funzione **\_DllMainCRTStartup** esegue molte operazioni, inclusa la chiamata a **\_CRT\_INIT** che inizializza la libreria di runtime C\/C\+\+ e richiama i costruttori C\+\+ sulle variabili non locali statiche.  Senza questa funzione, la libreria di runtime rimane non inizializzata.  **\_CRT\_INIT** è disponibile per una CRT collegata in modo statico o per un collegamento alla DLL Msvcr90.dll da una DLL dell'utente.  
  
 Sebbene sia possibile specificare un'altra funzione di punto di ingresso mediante l'opzione del linker \/ENTRY:, questa operazione non è consigliabile poiché la funzione di punto di ingresso dovrebbe duplicare ogni operazione eseguita da **\_DllMainCRTStartup**.  Quando si compilano le DLL in Visual C\+\+, **\_DllMainCRTStartup** viene automaticamente collegata e non occorre specificare una funzione di punto di ingresso mediante l'opzione del linker \/ENTRY:.  
  
 Oltre a inizializzare la libreria di runtime C, **\_DllMainCRTStartup** chiama una funzione denominata `DllMain`.  A seconda del tipo di DLL che si compila, Visual C\+\+ fornisce `DllMain` ed effettua il collegamento affinché **\_DllMainCRTStartup** abbia sempre qualche elemento da chiamare.  In tal modo, se non occorre inizializzare la DLL, non è necessario eseguire particolari operazioni durante la compilazione della DLL.  Se è necessario inizializzarla, la posizione in cui aggiungere il codice varia in base al tipo di DLL che si crea.  Per ulteriori informazioni, vedere [Inizializzazione di una DLL](../build/initializing-a-dll.md).  
  
 Nel codice della libreria di runtime C\/C\+\+ vengono chiamati i costruttori e i distruttori sulle variabili statiche non locali.  Ad esempio, nel seguente codice sorgente della DLL, `Equus` e `Sugar` sono due oggetti statici e non locali della classe `CHorse`, definita in Horses.h.  Nel codice sorgente non esiste alcuna funzione che contiene chiamate a una funzione costruttore per `CHorse` o alla funzione distruttore poiché questi oggetti vengono definiti all'esterno di qualsiasi funzione.  Pertanto, le chiamate a questi costruttori e distruttori devono essere effettuate nel codice della libreria di runtime.  Questa funzione viene eseguita anche nel codice della libreria di runtime delle applicazioni.  
  
```  
#include "horses.h"  
  
CHorse  Equus( ARABIAN, MALE );  
CHorse  Sugar( THOROUGHBRED, FEMALE );  
  
BOOL    WINAPI   DllMain (HANDLE hInst,   
                            ULONG ul_reason_for_call,  
                            LPVOID lpReserved)  
...  
```  
  
 Ogni volta che un nuovo processo tenta di utilizzare la DLL, il sistema operativo crea una copia distinta dei dati della DLL: questa operazione viene detta connessione del processo.  Nel codice della libreria di runtime per la DLL vengono chiamati i costruttori per tutti gli oggetti globali, se presenti, quindi la funzione `DllMain` con la connessione del processo selezionata.  La situazione opposta è la disconnessione del processo: nel codice della libreria di runtime viene chiamata `DllMain` con la disconnessione del processo selezionata, quindi un elenco di funzioni di terminazione, incluse le funzioni `atexit`, i distruttori per gli oggetti globali e quelli per gli oggetti statici.  Tenere presente che l'ordine degli eventi nella connessione del processo è invertito rispetto a quello della disconnessione del processo.  
  
 Il codice della libreria di runtime viene anche chiamato durante la connessione e la disconnessione dei thread, ma non effettua alcuna inizializzazione o terminazione autonomamente.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Inizializzare una DLL](../build/initializing-a-dll.md)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)
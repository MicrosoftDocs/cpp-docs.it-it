---
title: "Stato dei moduli di una DLL regolare collegata a MFC in modo dinamico | Microsoft Docs"
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
  - "DLL [C++], stati dei moduli"
  - "DLL MFC [C++], DLL regolari"
  - "stati dei moduli [C++]"
  - "stati dei moduli [C++], DLL regolari collegate in modo dinamico"
  - "DLL regolari [C++], collegamento dinamico a MFC"
ms.assetid: b4493e79-d25e-4b7f-a565-60de5b32c723
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Stato dei moduli di una DLL regolare collegata a MFC in modo dinamico
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La possibilità di collegare in modo dinamico una DLL regolare a una DLL MFC consente di ottenere alcune configurazioni molto complesse.  Una DLL regolare e l'eseguibile che la utilizza possono, ad esempio, essere entrambi collegati in modo dinamico alla DLL MFC e a qualsiasi DLL di estensione.  
  
 Questa configurazione crea un problema relativo ai dati globali di MFC, ad esempio il puntatore all'oggetto `CWinApp` corrente e le mappe degli handle.  
  
 Nelle versioni di MFC precedenti alla 4.0 questi dati globali risiedevano nella DLL MFC stessa ed erano condivisi da tutti i moduli del processo.  Poiché ciascun processo che utilizza una DDL Win32 ottiene la propria copia dei dati della DLL, questo schema consentiva di tenere traccia facilmente dei dati a livello di singolo processo.  Inoltre, poiché il modello AFXDLL presupponeva l'esistenza di un unico oggetto `CWinApp` e di un unico set di mappe di handle nel processo, questi elementi potevano essere controllati nella DLL MFC stessa.  
  
 Tuttavia, grazie alla possibilità di collegare in modo dinamico una DLL regolare a una DLL MFC, è ora possibile disporre di due o più oggetti `CWinApp` in un processo e anche di due o più insiemi di mappe di handle.  Di seguito viene spiegato come MFC tiene traccia degli elementi da utilizzare.  
  
 Il problema viene risolto assegnando a ciascun modulo, applicazione o DLL regolare, la propria copia delle informazioni di stato globali.  In tal modo, una chiamata a **AfxGetApp** nella DLL regolare restituisce un puntatore all'oggetto `CWinApp` nella DLL, non a quello nell'eseguibile.  Questa copia dei dati globali di MFC per modulo è detta stato del modulo e viene descritta nella [Nota tecnica 58 di MFC](../mfc/tn058-mfc-module-state-implementation.md).  
  
 Poiché la routine comune della finestra di MFC passa automaticamente allo stato del modulo corretto, non occorre preoccuparsene negli eventuali gestori di messaggi implementati nella DLL regolare.  Quando l'eseguibile effettua una chiamata nella DLL regolare, è necessario impostare in modo esplicito lo stato del modulo corrente su quello relativo alla DLL.  A tal fine, utilizzare la macro **AFX\_MANAGE\_STATE** in ogni funzione esportata dalla DLL,  aggiungendo la seguente riga di codice all'inizio delle funzioni esportate dalla DLL:  
  
```  
AFX_MANAGE_STATE(AfxGetStaticModuleState( ))  
```  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)  
  
-   [DLL regolari collegate a MFC in modo dinamico](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [DLL di estensione](../build/extension-dlls-overview.md)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)
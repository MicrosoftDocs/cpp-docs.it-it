---
title: "CFixedStringT: Example of a Custom String Manager | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFixedStringT class, using a custom string manager"
ms.assetid: 1cf11fd7-51b8-4b94-87af-02bc25f47dd6
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# CFixedStringT: Example of a Custom String Manager
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La libreria ATL implementa un esempio di un gestore personalizzato della stringa utilizzata dalla classe [CFixedStringT](../atl-mfc-shared/reference/cfixedstringt-class.md), denominato **CFixedStringMgr**.  `CFixedStringT` è derivato da [CStringT](../atl-mfc-shared/reference/cstringt-class.md) e implementa una stringa che assegna i dati di tipo carattere come parte dell'oggetto `CFixedStringT` stesso se la stringa è inferiore alla lunghezza specificata dal parametro di modello **t\_nChars**`CFixedStringT`.  Con questo approccio, la stringa non necessita dell'heap affatto, a meno che la lunghezza della stringa si sviluppi oltre la dimensione del buffer fissa.  Poiché `CFixedStringT` non utilizza sempre un heap di allocare i dati in formato stringa, non può utilizzare **CAtlStringMgr** come relativo gestore della stringa.  Utilizza un amministratore alla stringa personalizzata \(**CFixedStringMgr**\), che implementa l'interfaccia [IAtlStringMgr](../atl-mfc-shared/reference/iatlstringmgr-class.md).  Questa interfaccia viene discussa in [Implementazione di un gestore personalizzato di stringa \(metodo avanzato\)](../atl-mfc-shared/implementation-of-a-custom-string-manager-advanced-method.md).  
  
 Il costruttore per **CFixedStringMgr** accetta tre parametri:  
  
-   Puntatore di**pData:** Alla struttura fissa `CStringData` da utilizzare.  
  
-   **nChars:** il numero massimo di caratteri che la struttura `CStringData` possibile utilizzare.  
  
-   Puntatore di**pMgr:** All'interfaccia `IAtlStringMgr` "di un amministratore di backup della stringa."  
  
 Il costruttore archivia i valori `pData` e **pMgr** nei rispettivi variabili membro \(`m_pData` e **m\_pMgr**\).  Quindi imposta la lunghezza del buffer su zero, la lunghezza disponibile uguale alla dimensione massima del buffer fissa e il conteggio dei riferimenti – 1.  Il valore di conteggio dei riferimenti indica che il buffer è bloccato e utilizzare questa istanza **CFixedStringMgr** come amministratore della stringa.  
  
 Contrassegnare il buffer come bloccato impedisce ad altre istanze `CStringT` di utilizzare un riferimento condiviso al buffer.  Se ad altre istanze `CStringT` sono consentite per condividere il buffer sarà possibile per il buffer contenuto da `CFixedStringT` vengono eliminati mentre altre stringhe sono ancora utilizzando il buffer.  
  
 **CFixedStringMgr** è un'implementazione completa dell'interfaccia `IAtlStringMgr`.  L'implementazione di ciascun metodo è illustrata separatamente.  
  
## Implementazione di CFixedStringMgr::Allocate  
 L'implementazione **CFixedStringMgr::Allocate** dei controlli in primo luogo viene verificato se la dimensione richiesta della stringa è minore o uguale alla dimensione del buffer fisso \(memorizzato nel membro `m_pData` \).  Se il buffer fissa è elevata, **CFixedStringMgr** blocca il buffer fissa con una lunghezza pari a zero.  Se la lunghezza della stringa non si compila oltre la dimensione del buffer fissa, `CStringT` non dovrà riallocare il buffer.  
  
 Se la dimensione richiesta della stringa è maggiore del buffer fissa **CFixedStringMgr** inoltra la richiesta a di backup ricevute l'amministratore.  L'amministratore di backup della stringa è previsto per allocare il buffer dall'heap.  Tuttavia, prima di restituire questo buffer **CFixedStringMgr** blocca il buffer e sostituisce il puntatore di gestione delle stringhe di buffer con un puntatore all'oggetto **CFixedStringMgr**.  Questo assicura che i tentativi di ridistribuire o liberare il buffer da `CStringT` chiamare in **CFixedStringMgr**.  
  
## Implementazione di CFixedStringMgr::ReAllocate  
 L'implementazione **CFixedStringMgr::ReAllocate** è molto simile all'implementazione **Allocate**.  
  
 Se il buffer che viene ridistribuito è il buffer fisso e le dimensioni del buffer richieste sono minori del buffer fissa, nessuna allocazione viene eseguita.  Tuttavia, se il buffer che viene ridistribuito non è il buffer fissa, deve essere un buffer allocato con l'amministratore di backup.  In questo caso l'amministratore di backup viene utilizzato per ridistribuire il buffer.  
  
 Se il buffer che viene ridistribuito è il buffer fisso e le nuove dimensioni del buffer sono troppo grandi per l'ingresso nel buffer fissa, **CFixedStringMgr** alloca un nuovo buffer mediante l'amministratore di backup.  Il contenuto del buffer fissa viene copiato nel buffer.  
  
## Implementazione di CFixedStringMgr::Free  
 l'implementazione **CFixedStringMgr::Free** segue lo stesso modello **Allocate** e `ReAllocate`.  Se il buffer che viene liberato è il buffer fisso, il metodo lo imposta su un buffer bloccato di lunghezza zero.  Se il buffer che viene liberato è stato allocato con l'amministratore di backup, **CFixedStringMgr** utilizza l'amministratore di backup per liberarlo.  
  
## Implementazione di CFixedStringMgr::Clone  
 L'implementazione **CFixedStringMgr::Clone** restituisce sempre un puntatore all'amministratore di backup anziché **CFixedStringMgr** stessa.  Ciò accade perché ogni istanza **CFixedStringMgr** può essere associato solo a una singola istanza `CStringT`.  Tutte le altre istanze `CStringT` che tentano di duplicare l'amministratore deve ottenere l'amministratore di backup.  Questo perché i supporti di gestione del backup condivisi.  
  
## Implementazione di CFixedStringMgr::GetNilString  
 L'implementazione **CFixedStringMgr::GetNilString** restituisce il buffer fissa.  A causa della corrispondenza tra due utenti **CFixedStringMgr** e `CStringT`, una determinata istanza `CStringT` non utilizza sempre un buffer per volta.  Di conseguenza, una stringa di zero e di un buffer di stringa effettiva non sono mai necessari contemporaneamente.  
  
 Ogni volta che il buffer fisso non viene utilizzato, **CFixedStringMgr** garantisce che venga inizializzato con un di lunghezza zero.  Ciò consente di utilizzare come stringa di zero.  Come funzionano aggiungendo, il membro `nAllocLength` del buffer fissa è sempre impostato a grandezza naturale del buffer fissa.  Ciò significa che `CStringT` può della stringa senza chiamare [IAtlStringMgr::Reallocate](../Topic/IAtlStringMgr::Reallocate.md), nonché per la stringa di zero.  
  
## Requisiti  
 **Header:** cstringt.h  
  
## Vedere anche  
 [Memory Management with CStringT](../atl-mfc-shared/memory-management-with-cstringt.md)
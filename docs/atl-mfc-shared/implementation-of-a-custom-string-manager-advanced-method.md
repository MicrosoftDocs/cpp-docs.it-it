---
title: "Implementation of a Custom String Manager (Advanced Method) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IAtlStringMgr class, utilizzo"
ms.assetid: 64ab7da9-47c1-4c4a-9cd7-4cc37e7f3f57
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Implementation of a Custom String Manager (Advanced Method)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In situazioni specializzate, è possibile implementare un amministratore alla stringa personalizzata che non viene semplicemente di modifica che l'heap viene utilizzata per allocare memoria.  In questa situazione, è necessario implementare l'interfaccia [IAtlStringMgr](../atl-mfc-shared/reference/iatlstringmgr-class.md) l'amministratore alla stringa personalizzata.  
  
 A tale scopo, è importante a innanzitutto necessario comprendere come utilizzare [CStringT](../atl-mfc-shared/reference/cstringt-class.md) che collegano per mantenere i dati in formato stringa.  Ogni istanza `CStringT` contiene un puntatore a una struttura [CStringData](../atl-mfc-shared/reference/cstringdata-class.md).  Questa struttura di lunghezza variabile contiene informazioni importanti sulla stringa \(come lunghezza nonché i dati di tipo carattere della stringa.  Ogni amministratore alla stringa personalizzata è responsabile di allocare e la liberazione di queste strutture su richiesta `CStringT`.  
  
 La struttura `CStringData` include quattro campi:  
  
-   [pStringMgr](../Topic/CStringData::pStringMgr.md) punti di questo campo all'interfaccia `IAtlStringMgr` utilizzata per gestire questi dati in formato stringa.  Quando le necessità `CStringT` riallocare o liberare il buffer di stringa chiama la ridistribuzione o liberano i metodi di questa interfaccia, passando la struttura `CStringData` come parametro.  Nell'allocare una struttura `CStringData` nel gestore della stringa, è necessario impostare questo campo per indicare il gestore personalizzato della stringa.  
  
-   [nDataLength](../Topic/CStringData::nDataLength.md) questo campo contiene la lunghezza logica corrente della stringa memorizzata nel buffer esclusione di terminazione null.  `CStringT` aggiorna il campo alla lunghezza della stringa.  Nell'allocare una struttura `CStringData`, l'amministratore della stringa deve impostare il campo su zero.  In ridistribuire una struttura `CStringData`, l'amministratore alla stringa personalizzata deve lasciare il campo invariato.  
  
-   [nAllocLength](../Topic/CStringData::nAllocLength.md) questo campo contiene il numero massimo di caratteri \(a esclusione di terminazione null\) che possono essere memorizzati nel buffer di stringa non ridistribuirlo.  Ogni volta che le necessità `CStringT` di aumentare la logica lunghezza della stringa, controllerà innanzitutto questo campo per garantire è sufficiente spazio nel buffer.  Se il controllo non riesce, chiamate `CStringT` nel gestore personalizzato della stringa da riallocare il buffer.  Quando allocare o ridistribuire una struttura `CStringData`, è necessario impostare questo campo almeno il numero di caratteri necessari nel parametro **nChars** a [IAtlStringMgr::Allocate](../Topic/IAtlStringMgr::Allocate.md) o a [IAtlStringMgr::Reallocate](../Topic/IAtlStringMgr::Reallocate.md).  Se c'è più spazio nel buffer di quanto richiesto, è possibile impostare questo valore in modo da riflettere la quantità di spazio disponibile.  Ciò consente alle `CStringT` la stringa per riempire l'intero spazio allocato prima che sia necessario chiamare nuovamente in gestione delle stringhe per ridistribuire il buffer.  
  
-   [nRefs](../Topic/CStringData::nRefs.md) questo campo contiene il conteggio dei riferimenti corrente del buffer di stringa.  Se il valore è uno, pertanto una singola istanza `CStringT` utilizza il buffer.  Inoltre, all'istanza è consentita le operazioni di lettura e modifica il contenuto del buffer.  Se il valore è maggiore di uno, più istanze `CStringT` possono utilizzare il buffer.  Poiché il buffer di caratteri viene condiviso, le istanze `CStringT` possono leggere solo il contenuto del buffer.  Per modificare il contenuto, `CStringT` innanzitutto necessario fare una copia del buffer.  Se il valore è negativo, solo un'istanza `CStringT` utilizza il buffer.  In questo caso, il buffer è considerato bloccato.  Quando un'istanza `CStringT` viene utilizzato un buffer non bloccato altre istanze `CStringT` possono condividere il buffer.  Invece, queste istanze crea una copia del buffer prima di modificare il contenuto.  Inoltre, l'istanza `CStringT` utilizzando il buffer bloccati non tenta di condividere il buffer di qualsiasi altra istanza `CStringT` assegnata.  In questo caso, l'istanza `CStringT` copia altra stringa nel buffer bloccati.  
  
     Nell'allocare una struttura `CStringData`, è necessario impostare questo campo per riflettere il tipo di condividere quello consentito per il buffer.  Per la maggior parte delle implementazioni, impostare questo valore su uno.  In questo modo il normale copia\-su\- scrive condividere il comportamento.  Tuttavia, se l'amministratore della stringa non supporta la condivisione il buffer di stringa, impostare il campo su uno stato bloccato.  In questo modo `CStringT` per utilizzare solo questo buffer per l'istanza `CStringT` che lo ha allocato.  
  
## Vedere anche  
 [Memory Management with CStringT](../atl-mfc-shared/memory-management-with-cstringt.md)
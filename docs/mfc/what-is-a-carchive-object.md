---
title: "Definizione di oggetto CArchive | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CArchive"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "oggetti archivio [C++]"
  - "archivi [C++], per la serializzazione"
  - "inserimento nel buffer, oggetti serializzabili"
  - "buffer, oggetti serializzabili"
  - "CArchive (classe), informazioni sulla classe CArchive"
ms.assetid: 843f1825-288d-4d89-a1fa-70e1f92d9b8b
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Definizione di oggetto CArchive
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un oggetto di `CArchive` fornisce un meccanismo indipendente dai tipi di buffer per la scrittura o gli oggetti serializzabili leggere o da `CFile` oggetto.  In genere l'oggetto di `CFile` rappresenta un file su disco; tuttavia, esso può anche essere un file di memoria \(oggetto di`CSharedFile` \), talvolta che rappresentano gli Appunti.  
  
 Un oggetto specificato di `CArchive` archivia \(scritture, serializza\) i dati o dati carichi \(letto, deserializza\), ma non entrambi.  La durata di un oggetto di `CArchive` è limitata a una sessione tra gli oggetti di scrittura in un file o gli oggetti di lettura da un file.  Di conseguenza, due oggetti creati successivamente di `CArchive` sono necessari per serializzare i dati in un file e quindi deserializzarlo indietro dal file.  
  
 Quando un archivio archivia gli oggetti in un file, l'archivio viene aggiunto il nome di `CRuntimeClass` agli oggetti.  Quindi, quando un altro archivio carica gli oggetti da un file alla memoria, `CObject`agli oggetti derivati in modo dinamico sono ricostruiti basati su `CRuntimeClass` degli oggetti.  Un oggetto specificato è possibile fare riferimento più volte quando viene scritto nel file dall'archivio archiviando.  L'archivio di caricamento, tuttavia, ricostruirà solo quando l'oggetto.  Informazioni dettagliate su come archivio associa le informazioni di `CRuntimeClass` a oggetti e ricostruisce gli oggetti, mentre più riferimenti possibili, vengono descritti in [Nota tecnica 2](../mfc/tn002-persistent-object-data-format.md).  
  
 Mentre vengono serializzati in un archivio, l'archivio accumula i dati finché il relativo buffer non sia completo.  Nell'archivio scrive il relativo buffer all'oggetto di `CFile` puntato dall'oggetto di `CArchive`.  Analogamente, poiché leggono i dati da un archivio, i dati vengono letti dal file al buffer e quindi dal buffer all'oggetto stesso.  Questo buffer ridurre il numero di volte in cui un disco rigido è indicato fisicamente, pertanto il miglioramento delle prestazioni dell'applicazione.  
  
## Vedere anche  
 [Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)
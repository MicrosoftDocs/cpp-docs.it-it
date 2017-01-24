---
title: "Gestione della memoria: allocazione di frame | Microsoft Docs"
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
  - "rilevamento di perdite di memoria"
  - "allocazione di frame"
  - "variabili di frame"
  - "variabili di frame, rilevamento automatico di"
  - "allocazione di heap, e allocazione di frame"
  - "allocazione di memoria, frame"
  - "perdite di memoria, allocazione di oggetti nel frame"
  - "perdite di memoria, rilevamento"
  - "perdite di memoria, allocazione di frame"
  - "memoria, rilevamento di perdite"
  - "memoria, recupero"
  - "memoria, rilascio"
  - "ambito, variabili di frame"
  - "stack frame"
  - "variabili, variabili di frame"
ms.assetid: 945a211a-6f4f-4679-bb6a-b0f2a0d4a6c1
caps.latest.revision: 13
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione della memoria: allocazione di frame
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'allocazione sul frame prende il nome "dallo stack frame" installato ogni volta che una funzione chiamata.  Lo stack frame è un'area della memoria che temporaneamente utilizza argomenti alla funzione oltre a tutte le variabili che si trovano variabile locale definita la funzione.  Le variabili della pagina spesso sono chiamate variabili "auto" perché il compilatore alloca automaticamente lo spazio per essi.  
  
 Esistono due caratteristiche principali delle allocazioni del frame.  Innanzitutto, quando si definisce una variabile locale, sufficiente spazio viene allocato nello stack frame per utilizzare l'intera variabile, anche se è una matrice di grandi dimensioni o struttura dati.  In secondo luogo, le variabili di frame automaticamente vengono eliminati quando escono scope:  
  
 [!code-cpp[NVC_MFC_Utilities#10](../mfc/codesnippet/CPP/memory-management-frame-allocation_1.cpp)]  
  
 Per le variabili di funzione locale, la transizione di ambito si verifica quando la funzione termina, ma l'ambito di una variabile di frame può essere più piccola di una funzione se le parentesi graffe annidate sono utilizzate.  Questa l'eliminazione automatica delle variabili di frame è molto importante.  Nel caso dei tipi primitivi semplice \(ad esempio `int` o **byte**\), matrici, o strutture di dati, l'eliminazione automatica recupera semplicemente la memoria utilizzata dalla variabile.  Poiché la variabile è disconnesso di ambito, non può essere eseguito in ogni caso.  Nel caso di oggetti C\+\+, tuttavia, il processo di eliminazione automatica è un certopiù complesso.  
  
 Quando un oggetto viene definito come variabile di frame, il costruttore viene richiamato automaticamente nel punto in cui la definizione viene rilevata.  Quando l'oggetto dall'ambito, il relativo distruttore automaticamente viene richiamato prima che la memoria per l'oggetto venga recuperata.  Questi creazione e distruzione automatiche possono essere molto procedure, ma è necessario tenere presenti le chiamate automatiche, in particolare nel distruttore.  
  
 Il vantaggio principale di allocare oggetti sul frame che viene automaticamente eliminate.  Quando si allocano gli oggetti sul frame, non è necessario preoccuparsi degli oggetti dimenticati che possono causare perdite di memoria. \(Per informazioni dettagliate sulle perdite di memoria, vedere l'articolo [Rilevamento di perdite di memoria in MFC](http://msdn.microsoft.com/it-it/29ee8909-96e9-4246-9332-d3a8aa8d4658)\). Uno svantaggio dell'allocazione del frame è che le variabili di frame non possono essere utilizzate all'esterno del relativo ambito.  Un altro fattore nella pagina l'allocazione di frame sull'allocazione heap è quello delle grandi strutture e oggetti, è spesso consigliabile utilizzare l'heap anziché lo stack per l'archiviazione poiché lo spazio dello stack è spesso limitato.  
  
## Vedere anche  
 [Gestione della memoria](../mfc/memory-management.md)
---
title: "Gestione della memoria: allocazione di heap | Microsoft Docs"
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
  - "delete (operatore), uso con debug MFC"
  - "rilevamento di perdite di memoria"
  - "allocazione di heap"
  - "allocazione di heap, descrizione"
  - "allocazione di memoria, memoria heap"
  - "perdite di memoria, rilevamento"
  - "memoria, rilevamento di perdite"
  - "new (operatore), uso con debug MFC"
ms.assetid: a5d949c6-1b79-476e-9c66-513a558203d9
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione della memoria: allocazione di heap
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'heap è riservata per le necessità di allocazione della memoria del programma.  È un'area oltre al codice programma e allo stack.  I programmi C Tipici utilizzano funzioni `malloc` e **free** per allocare e liberare la memoria heap.  La versione di debug di MFC fornisce versioni modifica degli operatori incorporati **nuova** e **eliminazione** C\+\+ per l'allocazione e il rilascio degli oggetti in memoria heap.  
  
 Quando si utilizza **nuova** e **eliminazione** anziché `malloc` e di **free**, è possibile sfruttare i miglioramenti di debug di gestione della memoria della libreria di classi, che possono risultare utili nel rilevamento di perdite di memoria.  Quando si compila il programma con la versione finale di MFC, le versioni standard degli operatori di **eliminazione** e di **nuova** forniscono un modo efficace per allocare e liberare la memoria \(la versione finale di MFC non fornisce le versioni modificate di questi operatori\).  
  
 Si noti che la dimensione totale degli oggetti allocati nell'heap è limitata solo dalla memoria virtuale disponibile del sistema.  
  
## Vedere anche  
 [Gestione della memoria](../mfc/memory-management.md)
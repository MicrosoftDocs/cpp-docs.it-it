---
title: "Sviluppo di una funzione di supporto personalizzata | Microsoft Docs"
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
  - "funzioni di supporto"
ms.assetid: a845429d-68b1-4e14-aa88-f3f5343bd490
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Sviluppo di una funzione di supporto personalizzata
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È consigliabile fornire una routine personalizzata per l'esecuzione di elaborazioni specifiche, basate sui nomi delle DLL o delle importazioni.  A tal scopo sono disponibili due metodi: la codifica di una routine personalizzata, eventualmente basata sul codice fornito, oppure l'associazione della versione fornita con gli hook di notifica descritti sopra.  
  
 Codifica di una routine personalizzata  
 Questa soluzione è relativamente semplice, dal momento che è possibile utilizzare il codice fornito come modello per la nuova routine.  Naturalmente, la routine deve rispettare le convenzioni di chiamata e, se ritorna ai thunk generati dal linker, deve restituire un puntatore a funzione corretto.  Una volta nel codice, è possibile eseguire qualsiasi operazione per l'esecuzione della chiamata o l'uscita da essa.  
  
 Utilizzo dell'hook di notifica di avvio elaborazione  
 Probabilmente è più semplice fornire un nuovo puntatore a una funzione hook di notifica fornita dall'utente a cui vengono restituiti gli stessi valori del supporto predefinito al momento della notifica dliStartProcessing.  A questo punto, la funzione hook può essere considerata la nuova funzione di supporto, dal momento che la restituzione di un risultato al supporto predefinito eviterà a quest'ultimo ulteriori attività di elaborazione.  
  
## Vedere anche  
 [Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)
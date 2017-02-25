---
title: "Controllo delle sovrascritture di memoria | Microsoft Docs"
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
helpviewer_keywords: 
  - "memoria, sovrascrittura"
ms.assetid: da7c5d77-a267-415f-a8ab-ee5ce5bfc286
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Controllo delle sovrascritture di memoria
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Se si verifica una violazione di accesso in corrispondenza di una chiamata a una funzione di manipolazione dell'heap, è possibile che il programma abbia danneggiato l'heap.  In questo caso, può essere visualizzata una stringa del seguente tipo:  
  
```  
Access Violation in _searchseg  
```  
  
 La funzione [\_heapchk](../../c-runtime-library/reference/heapchk.md) è disponibile sia nelle build di debug che nelle build di rilascio \(solo per Windows NT\) e consente di verificare l'integrità dell'heap della libreria di runtime.  È possibile utilizzare `_heapchk` con modalità estremamente simili a quelle adottate per la funzione `AfxCheckMemory` allo scopo di isolare una sovrascrittura di heap, ad esempio:  
  
```  
if(_heapchk()!=_HEAPOK)  
   DebugBreak();  
```  
  
 Se questa funzione non viene eseguita correttamente, è necessario isolare il punto in cui l'heap è stato danneggiato.  
  
## Vedere anche  
 [Correzione dei problemi della build di rilascio](../../build/reference/fixing-release-build-problems.md)
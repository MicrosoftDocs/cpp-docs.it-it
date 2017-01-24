---
title: "Constanti heap | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_HEAPBADPTR"
  - "_HEAPEMPTY"
  - "_HEAPBADBEGIN"
  - "_HEAPOK"
  - "_HEAPBADNODE"
  - "_HEAPEND"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_HEAPBADBEGIN (costanti)"
  - "_HEAPBADNODE (costanti)"
  - "_HEAPBADPTR (costanti)"
  - "_HEAPEMPTY (costanti)"
  - "_HEAPEND (costanti)"
  - "_HEAPOK (costanti)"
  - "heap (costanti)"
  - "HEAPBADBEGIN (costanti)"
  - "HEAPBADNODE (costanti)"
  - "HEAPBADPTR (costanti)"
  - "HEAPEMPTY (costanti)"
  - "HEAPEND (costanti)"
  - "HEAPOK (costanti)"
ms.assetid: 3f751bb9-2dc4-486f-b5f5-9061c96d3754
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Constanti heap
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
#include <malloc.h>  
  
```  
  
## Note  
 Queste costanti forniscono il valore di ritorno che indica lo stato dell'heap.  
  
|Costante|Significato|  
|--------------|-----------------|  
|`_HEAPBADBEGIN`|Le informazioni di intestazione iniziali non sono state trovate o non erano valide.|  
|`_HEAPBADNODE`|È stato trovato un nodo cattivo, o l'heap è danneggiata.|  
|`_HEAPBADPTR`|Il campo **\_pentry** della struttura **\_HEAPINFO** non contiene il puntatore valido all'heap \(solo routine `_heapwalk`\).|  
|`_HEAPEMPTY`|L'heap non è stata inizializzato.|  
|`_HEAPEND`|Fine dell'heap raggiunta correttamente \(solo routine `_heapwalk`\).|  
|`_HEAPOK`|L'heap è coerente \(solo routine `_heapset` e `_heapchk`\).  Nessun errore fino ad ora; la struttura **\_HEAPINFO** contiene informazioni sulla voce seguente \(solo routine `_heapwalk`\).|  
  
## Vedere anche  
 [\_heapchk](../c-runtime-library/reference/heapchk.md)   
 [\_heapset](../c-runtime-library/heapset.md)   
 [\_heapwalk](../c-runtime-library/reference/heapwalk.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)
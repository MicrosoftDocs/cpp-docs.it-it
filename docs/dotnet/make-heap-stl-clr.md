---
title: "make_heap (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::make_heap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "make_heap (funzione) [STL/CLR]"
ms.assetid: bc1bed28-7a26-4540-901d-5584cd117ea1
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# make_heap (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Converte gli elementi da un intervallo specificato nell'heap in cui il primo elemento è il più grande e per il quale una chiave di ordinamento può essere specificata con un predicato binario.  
  
## Sintassi  
  
```  
template<class _RanIt> inline  
    void make_heap(_RanIt _First, _RanIt _Last);  
template<class _RanIt, class _Pr> inline  
    void make_heap(_RanIt _First, _RanIt _Last, _Pr _Pred);  
```  
  
## Note  
 Questa funzione si comporta come se fosse la funzione `make_heap`STL.  Per ulteriori informazioni, vedere [make\_heap](../Topic/make_heap.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
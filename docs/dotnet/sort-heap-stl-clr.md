---
title: "sort_heap (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::sort_heap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sort_heap (funzione) [STL/CLR]"
ms.assetid: a8fa6b76-90cd-413b-9c5b-f65b93d4bbed
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# sort_heap (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Converte un heap in intervallo ordinato.  
  
## Sintassi  
  
```  
template<class _RanIt> inline  
    void sort_heap(_RanIt _First, _RanIt _Last);  
template<class _RanIt, class _Pr> inline  
    void sort_heap(_RanIt _First, _RanIt _Last, _Pr _Pred);  
```  
  
## Note  
 Questa funzione si comporta come se fosse la funzione `sort_heap`STL.  Per ulteriori informazioni, vedere [sort\_heap](../Topic/sort_heap.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
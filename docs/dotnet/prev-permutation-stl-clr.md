---
title: "prev_permutation (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::prev_permutation"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "prev_permutation (funzione) [STL/CLR]"
ms.assetid: 5294dbe5-1b5f-4369-a764-067dff86d1e8
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# prev_permutation (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Riordina gli elementi in un intervallo in modo che l'ordine originale sia sostituita dalla maggior permutazione lessicografico seguente se esiste, dove la percezione del successivo può essere specificato con un predicato binario.  
  
## Sintassi  
  
```  
template<class _BidIt> inline  
    bool prev_permutation(_BidIt _First, _BidIt _Last);  
template<class _BidIt, class _Pr> inline  
    bool prev_permutation(_BidIt _First, _BidIt _Last, _Pr _Pred);  
```  
  
## Note  
 Questa funzione si comporta come se fosse la funzione `prev_permutation`STL.  Per ulteriori informazioni, vedere [prev\_permutation](../Topic/prev_permutation.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
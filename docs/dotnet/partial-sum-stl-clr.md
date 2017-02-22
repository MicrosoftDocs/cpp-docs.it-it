---
title: "partial_sum (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::partial_sum"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "partial_sum (funzione) [STL/CLR]"
ms.assetid: 845badae-8519-4ac8-9ea7-2b921bac7c51
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# partial_sum (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Calcola una serie di somme in un intervallo di input dal primo elemento dall'elemento Th di `i` e archiviare il risultato di ciascuna somma di elementi Th di `i`di un intervallo di destinazione o calcola il risultato di una routine generalizzata in cui l'operazione sum viene sostituita da un'altra operazione binaria specificata.  
  
## Sintassi  
  
```  
template<class _InIt, class _OutIt> inline  
    _OutIt partial_sum(_InIt _First, _InIt _Last, _OutIt _Dest);  
template<class _InIt, class _OutIt, class _Fn2> inline  
    _OutIt partial_sum(_InIt _First, _InIt _Last,  
        _OutIt _Dest, _Fn2 _Func);  
```  
  
## Note  
 Questa funzione si comporta lo stesso della funzione numerica `partial_sum`STL.  Per ulteriori informazioni, vedere [partial\_sum](../Topic/partial_sum.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/numeric\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [numeric](../dotnet/numeric-stl-clr.md)
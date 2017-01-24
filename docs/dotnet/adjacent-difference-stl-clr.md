---
title: "adjacent_difference (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::adjacent_difference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "adjacent_difference (funzione)"
ms.assetid: 2b462e2e-b8f2-4b2e-9b87-5f688d8da9f4
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# adjacent_difference (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Calcola le differenze successive tra ogni elemento e il predecessore in un intervallo di input e restituisce i risultati in un intervallo di destinazione o calcola il risultato di una routine generalizzata in cui l'operazione di differenza è sostituita da un altra operazione binaria specificata.  
  
## Sintassi  
  
```  
template<class _InIt, class _OutIt> inline  
    _OutIt adjacent_difference(_InIt _First, _InIt _Last,  
        _OutIt _Dest);  
template<class _InIt, class _OutIt, class _Fn2> inline  
    _OutIt adjacent_difference(_InIt _First, _InIt _Last,  
        _OutIt _Dest, _Fn2 _Func);  
```  
  
## Note  
 Questa funzione si comporta come analogamente alla funzione STL numerica `adjacent_difference`.  Per ulteriori informazioni, vedere [adjacent\_difference](../Topic/adjacent_difference.md).  
  
## Requisiti  
 **Intestazione:** \<cliext\/numeric\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [numeric](../dotnet/numeric-stl-clr.md)
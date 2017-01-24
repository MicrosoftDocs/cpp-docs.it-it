---
title: "accumulate (STL/CLR) | Microsoft Docs"
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
  - "cliext::accumulate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "accumulate (funzione) [STL/CLR]"
ms.assetid: b80e1ef1-1858-4c1d-817b-c42ad1f17a2f
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# accumulate (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Calcola la somma di tutti gli elementi in un intervallo specificato con il valore iniziale calcolando di somme parziali successive o calcola il risultato dei risultati parziali successivi analogamente ottenuti da l un'operazione binaria specificata diversa dalla somma.  
  
## Sintassi  
  
```  
template<class _InIt, class _Ty> inline  
    _Ty accumulate(_InIt _First, _InIt _Last, _Ty _Val);  
template<class _InIt, class _Ty, class _Fn2> inline  
    _Ty accumulate(_InIt _First, _InIt _Last, _Ty _Val, _Fn2 _Func);  
```  
  
## Note  
 Questa funzione si comporta lo stesso della funzione numerica `accumulate`STL.  Per ulteriori informazioni, vedere [accumulate](../Topic/accumulate.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/numeric\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [numeric](../dotnet/numeric-stl-clr.md)
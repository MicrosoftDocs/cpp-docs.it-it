---
title: "find (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::find"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "find (funzione) [STL/CLR]"
ms.assetid: 88391e24-1239-4087-b1c2-96efba0337c1
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# find (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Individuare la posizione della prima occorrenza di un elemento in un intervallo con un valore specificato.  
  
## Sintassi  
  
```  
template<class _InIt, class _Ty> inline  
    _InIt find(_InIt _First, _InIt _Last, const _Ty% _Val);  
```  
  
## Note  
 Questa funzione si comporta come se fosse la funzione `find`STL.  Per ulteriori informazioni, vedere [find](../Topic/find%20\(STL\).md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
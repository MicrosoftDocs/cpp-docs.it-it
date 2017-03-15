---
title: "fill_n (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::fill_n"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "fill_n (funzione)"
ms.assetid: bb9f2f71-ba1d-44ec-8b47-6ece149dd6b8
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# fill_n (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Assegna un nuovo valore a un numero specificato di elementi in un intervallo a partire da un determinato elemento.  
  
## Sintassi  
  
```  
template<class _OutIt, class _Diff, class _Ty> inline  
    void fill_n(_OutIt _First, _Diff _Count, const _Ty% _Val);  
```  
  
## Note  
 Questa funzione si comporta come se fosse la funzione `fill_n`STL.  Per ulteriori informazioni, vedere [fill\_n](../Topic/fill_n.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
---
title: "unique (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::unique"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unique (funzione) [STL/CLR]"
ms.assetid: 833cc314-b452-4659-bbb4-575c2bb63855
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# unique (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Elimina elementi duplicati che sono adiacenti all'altro in un intervallo specificato.  
  
## Sintassi  
  
```  
template<class _FwdIt> inline  
    _FwdIt unique(_FwdIt _First, _FwdIt _Last);  
template<class _FwdIt, class _Pr> inline  
    _FwdIt unique(_FwdIt _First, _FwdIt _Last, _Pr _Pred);  
```  
  
## Note  
 Questa funzione si comporta come se fosse la funzione `unique`STL.  Per ulteriori informazioni, vedere [univoco](../Topic/unique%20\(%3Calgorithm%3E\).md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
---
title: "reverse_copy (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::reverse_copy"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "reverse_copy (funzione) [STL/CLR]"
ms.assetid: 694e577a-0fa8-44f7-adde-6dd9f45adefd
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# reverse_copy (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inverte l'ordine degli elementi all'interno di un intervallo di origine che li copia in un intervallo di destinazione.  
  
## Sintassi  
  
```  
template<class _BidIt, class _OutIt> inline  
    _OutIt reverse_copy(_BidIt _First, _BidIt _Last, _OutIt _Dest);  
```  
  
## Note  
 Questa funzione si comporta come se fosse la funzione `reverse_copy`STL.  Per ulteriori informazioni, vedere [reverse\_copy](../Topic/reverse_copy.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
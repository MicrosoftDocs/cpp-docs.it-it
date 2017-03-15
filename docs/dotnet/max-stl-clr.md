---
title: "max (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::max"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "max (funzione) [STL/CLR]"
ms.assetid: bf51aedc-b7a0-4b6c-a76e-fdbc4af042fa
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# max (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Confronta due oggetti e restituisce il maggiore dei due, dove il criterio di ordinamento può essere specificato da un predicato binario.  
  
## Sintassi  
  
```  
template<class _Ty> inline  
    const _Ty max(const _Ty% _Left, const _Ty% _Right);  
template<class _Ty, class _Pr> inline  
    const _Ty max(const _Ty% _Left, const _Ty% _Right, _Pr _Pred);  
```  
  
## Note  
 Questa funzione si comporta come se fosse la funzione `max`STL.  Per ulteriori informazioni, vedere [max](../Topic/max.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
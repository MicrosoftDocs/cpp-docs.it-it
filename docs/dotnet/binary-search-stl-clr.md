---
title: "binary_search (STL/CLR) | Microsoft Docs"
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
  - "cliext::binary_search"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "binary_search (funzione) [STL/CLR]"
ms.assetid: 520869cc-7cd3-4c81-b439-05f042474416
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# binary_search (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se è presente un elemento in un intervallo ordinato equivalente a un valore specificato o equivalente ad esso in un senso specificato da un predicato binario.  
  
## Sintassi  
  
```  
template<class _FwdIt, class _Ty> inline  
    bool binary_search(_FwdIt _First, _FwdIt _Last, const _Ty% _Val);  
template<class _FwdIt, class _Ty, class _Pr> inline  
    bool binary_search(_FwdIt _First, _FwdIt _Last,  
        const _Ty% _Val, _Pr _Pred);  
```  
  
## Note  
 Questa funzione si comporta come se fosse la funzione `binary_search`STL.  Per ulteriori informazioni, vedere [binary\_search](../Topic/binary_search.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
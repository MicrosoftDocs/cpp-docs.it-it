---
title: "fill (STL/CLR) | Microsoft Docs"
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
  - "cliext::fill"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "fill (funzione)"
ms.assetid: eb67241c-9bb3-497e-bec6-639900c60758
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# fill (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Assegna lo stesso nuovo valore a ogni elemento in un intervallo specificato.  
  
## Sintassi  
  
```  
template<class _FwdIt, class _Ty> inline  
    void fill(_FwdIt _First, _FwdIt _Last, const _Ty% _Val);  
```  
  
## Note  
 Questa funzione si comporta come se fosse la funzione `fill`STL.  Per ulteriori informazioni, vedere [riempimento](../Topic/fill.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
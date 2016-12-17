---
title: "iter_swap (STL/CLR) | Microsoft Docs"
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
  - "cliext::iter_swap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "iter_swap (funzione) [STL/CLR]"
ms.assetid: 9809c9f5-2ca6-4e9e-97c1-d7973d3134f8
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# iter_swap (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Metadati e due valori sono segnalati da una coppia degli iteratori specificati.  
  
## Sintassi  
  
```  
template<class _FwdIt1, class _FwdIt2> inline  
    void iter_swap(_FwdIt1 _Left, _FwdIt2 _Right);  
```  
  
## Note  
 Questa funzione si comporta come se fosse la funzione `iter_swap`STL.  Per ulteriori informazioni, vedere [iter\_swap](../Topic/iter_swap.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
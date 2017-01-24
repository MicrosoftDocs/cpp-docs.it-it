---
title: "nth_element (STL/CLR) | Microsoft Docs"
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
  - "cliext::nth_element"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "nth_element (funzione) [STL/CLR]"
ms.assetid: 19fc1695-62a9-4f85-9920-d153c1c6481f
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# nth_element (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il partizionamento di un intervallo di elementi, avviene correttamente collocando l'elemento `n`\-esimo della sequenza nell'intervallo in modo che tutti gli elementi antistanti siano minori o uguali ad esso e tutti gli elementi che lo seguono nella sequenza siano maggiori o uguali ad esso.  
  
## Sintassi  
  
```  
template<class _RanIt> inline  
    void nth_element(_RanIt _First, _RanIt _Nth, _RanIt _Last);  
template<class _RanIt, class _Pr> inline  
    void nth_element(_RanIt _First, _RanIt _Nth, _RanIt _Last,  
        _Pr _Pred);  
```  
  
## Note  
 Questa funzione si comporta analogamente alla funzione STL `nth_element`.  Per ulteriori informazioni, vedere [nth\_element](../Topic/nth_element.md).  
  
## Requisiti  
 **Intestazione:** \<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
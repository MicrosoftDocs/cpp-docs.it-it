---
title: "find_first_of (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::find_first_of"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "find_first_of (funzione) [STL/CLR]"
ms.assetid: d559bad4-fc12-4201-af49-db0e7eec48e8
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# find_first_of (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ricerca della prima occorrenza di uno dei diversi valori all'interno di un intervallo di destinazione o della prima occorrenza di una qualsiasi di diversi elementi che sono equivalenti in un certo senso specificato da un predicato binario a un set specificato di elementi.  
  
## Sintassi  
  
```  
template<class _FwdIt1, class _FwdIt2> inline  
    _FwdIt1 find_first_of(_FwdIt1 _First1, _FwdIt1 _Last1,  
        _FwdIt2 _First2, _FwdIt2 _Last2);  
template<class _FwdIt1, class _FwdIt2, class _Pr> inline  
    _FwdIt1 find_first_of(_FwdIt1 _First1, _FwdIt1 _Last1,  
        _FwdIt2 _First2, _FwdIt2 _Last2, _Pr _Pred);  
```  
  
## Note  
 Questa funzione si comporta come se fosse la funzione `find_first_of`STL.  Per ulteriori informazioni, vedere [find\_first\_of](../Topic/find_first_of.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
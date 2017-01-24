---
title: "mismatch (STL/CLR) | Microsoft Docs"
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
  - "cliext::mismatch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mismatch (funzione) [STL/CLR]"
ms.assetid: 77876875-44bb-4476-afd9-390da4eaac16
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# mismatch (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Confronta un elemento di due intervalli all'elemento per uguaglianza o l'equivalente in un certo senso specificato da un predicato binario e individuare la prima posizione in cui una differenza si verifica.  
  
## Sintassi  
  
```  
template<class _InIt1, class _InIt2> inline  
    _PAIR_TYPE(_InIt1)  
        mismatch(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2);  
template<class _InIt1, class _InIt2, class _Pr> inline  
    _PAIR_TYPE(_InIt1)  
        mismatch(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2,  
            _Pr _Pred);  
```  
  
## Note  
 Questa funzione si comporta come se fosse la funzione `mismatch`STL.  Per ulteriori informazioni, vedere [mismatch](../Topic/mismatch.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
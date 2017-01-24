---
title: "upper_bound (STL/CLR) | Microsoft Docs"
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
  - "cliext::upper_bound"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "upper_bound (funzione) [STL/CLR]"
ms.assetid: a377a77b-8005-496e-85ae-b431a9b2f0b9
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# upper_bound (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Trova la posizione del primo elemento in un intervallo ordinato con un valore maggiore di o uguale a un valore specificato, in cui il criterio di ordinamento può essere specificato da un predicato binario.  
  
## Sintassi  
  
```  
template<class _FwdIt, class _Ty> inline  
    _FwdIt upper_bound(_FwdIt _First, _FwdIt _Last, const _Ty% _Val);  
template<class _FwdIt, class _Ty, class _Pr> inline  
    _FwdIt upper_bound(_FwdIt _First, _FwdIt _Last,  
        const _Ty% _Val, _Pr _Pred);  
```  
  
## Note  
 Questa funzione si comporta come se fosse la funzione `upper_bound`STL.  Per ulteriori informazioni, vedere [upper\_bound](../Topic/upper_bound.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
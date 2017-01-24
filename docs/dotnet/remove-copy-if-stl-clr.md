---
title: "remove_copy_if (STL/CLR) | Microsoft Docs"
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
  - "cliext::remove_copy_if"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "remove_copy_if (funzione) [STL/CLR]"
ms.assetid: 5307f5fe-b6bb-4968-8da1-fea84ab96655
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# remove_copy_if (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Copiare gli elementi da un intervallo di origine a un intervallo di destinazione, ma la presenza di un predicato non vengono copiati, senza pregiudicare l'ordine degli elementi rimanenti e restituire la fine del nuovo intervallo di destinazione.  
  
## Sintassi  
  
```  
template<class _InIt, class _OutIt, class _Pr> inline  
    _OutIt remove_copy_if(_InIt _First, _InIt _Last, _OutIt _Dest,  
        _Pr _Pred);  
```  
  
## Note  
 Questa funzione si comporta come se fosse la funzione `remove_copy_if`STL.  Per ulteriori informazioni, vedere [remove\_copy\_if](../Topic/remove_copy_if.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
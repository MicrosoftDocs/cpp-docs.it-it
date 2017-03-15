---
title: "rotate (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::rotate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rotate (funzione) [STL/CLR]"
ms.assetid: 61dc89a9-a928-4eb3-89d6-2f5927df0f13
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# rotate (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Scambia gli elementi in due intervalli adiacenti.  
  
## Sintassi  
  
```  
template<class _FwdIt> inline  
    void rotate(_FwdIt _First, _FwdIt _Mid, _FwdIt _Last);  
```  
  
## Note  
 Questa funzione si comporta come se fosse la funzione `rotate`STL.  Per ulteriori informazioni, vedere [rotate](../Topic/rotate.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
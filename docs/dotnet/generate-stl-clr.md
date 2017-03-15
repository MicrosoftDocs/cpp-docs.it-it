---
title: "generate (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::generate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "generate (funzione) [STL/CLR]"
ms.assetid: 970f209f-31db-47c4-a0bb-4c3e579adb52
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# generate (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Assegna i valori generati da un oggetto funzione a ogni elemento in un intervallo.  
  
## Sintassi  
  
```  
template<class _FwdIt, class _Fn0> inline  
    void generate(_FwdIt _First, _FwdIt _Last, _Fn0 _Func);  
```  
  
## Note  
 Questa funzione si comporta come se fosse la funzione `generate`STL.  Per ulteriori informazioni, vedere [generare](../Topic/generate.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
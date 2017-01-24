---
title: "remove (STL/CLR) | Microsoft Docs"
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
  - "cliext::remove"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "remove (funzione) [STL/CLR]"
ms.assetid: 85a11883-3e25-49aa-b4a0-b2cffd6dc110
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# remove (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rimuove un valore specificato da un intervallo specificato senza pregiudicare l'ordine degli elementi rimanenti e restituire la fine del nuovo intervallo esente dal valore specificato.  
  
## Sintassi  
  
```  
template<class _FwdIt, class _Ty> inline  
    _FwdIt remove(_FwdIt _First, _FwdIt _Last, const _Ty% _Val);  
```  
  
## Note  
 Questa funzione si comporta come se fosse la funzione `remove`STL.  Per ulteriori informazioni, vedere [rimozione](../Topic/remove.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [algorithm](../dotnet/algorithm-stl-clr.md)
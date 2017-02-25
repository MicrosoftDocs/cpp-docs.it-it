---
title: "Matrici nelle espressioni | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "matrici [C++], nelle espressioni"
  - "espressioni [C++], matrici"
ms.assetid: 6e5a795b-d6bd-4e39-b313-6a20d47c4d4b
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Matrici nelle espressioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando un identificatore di un tipo di matrice appare in un'espressione diversa da `sizeof`, indirizzo di \(**&**\) o come inizializzazione di un riferimento, viene convertito in un puntatore al primo elemento della matrice.  Ad esempio:  
  
```  
char szError1[] = "Error: Disk drive not ready.";  
char *psz = szError1;  
```  
  
 Il puntatore `psz` fa riferimento al primo elemento della matrice `szError1`.  Tenere presente che, a differenza dei puntatori, le matrici non sono l\-value modificabili.  Pertanto, la seguente assegnazione non è valida:  
  
```  
szError1 = psz;  
```  
  
## Vedere anche  
 [Matrici](../cpp/arrays-cpp.md)
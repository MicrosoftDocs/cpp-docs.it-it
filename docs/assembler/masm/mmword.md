---
title: "MMWORD | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MMWORD"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MMWORD directive"
ms.assetid: b4c5a104-9078-4fb4-afc3-d1e63abe562a
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# MMWORD
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato per gli operandi multimediali a 64 bit con MMX e le istruzioni di SSE \(XMM\).  
  
## Sintassi  
  
```  
MMWORD  
```  
  
## Note  
 `MMWORD` è un tipo.  Prima di MMWORD che è stato aggiunto a MASM, la funzionalità equivalente può essere effettuata con:  
  
```  
mov mm0, qword ptr [ebx]  
```  
  
 Mentre lavoro di entrambe le istruzioni su operandi a 64 bit, `QWORD` è il tipo per gli Unsigned Integer a 64 bit e  `MMWORD` è il tipo per un valore di contenuti multimediali a 64 bit.  
  
 `MMWORD` viene utilizzato per rappresentare lo stesso tipo come  [\_\_m64](../../cpp/m64.md).  
  
## Esempio  
  
```  
movq     mm0, mmword ptr [ebx]  
```
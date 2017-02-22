---
title: "COMM | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "COMM"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COMM directive"
ms.assetid: a23548c4-ad04-41fa-91da-945f228de742
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# COMM
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea una variabile comune con gli attributi specificati in `definition`.  
  
## Sintassi  
  
```  
  
COMM definition [[, definition]] ...  
```  
  
## Note  
 ciascuno `definition` presenta il formato seguente:  
  
 \[\[langtype\] \[\] \[**BY** &#124; **FAR**\]\] etichetta**:**`type`\[\[**:**conteggio\]\]  
  
 *etichetta* è il nome della variabile.  `type` può trattarsi di qualsiasi identificatore del tipo \([BYTE](../../assembler/masm/byte-masm.md),  [WORD](../../assembler/masm/word.md), e così via\) o un intero che specifica il numero di byte.  *conteggio* specifica il numero di oggetti dati \(uno è l'impostazione predefinita\).  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)
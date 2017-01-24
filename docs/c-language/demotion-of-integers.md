---
title: "Abbassamento di livello di valori Integer | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "abbassamento di livello di integer"
ms.assetid: 51fb3654-60b0-4de7-80eb-bd910086c18a
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Abbassamento di livello di valori Integer
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**ANSI 3.2.1.2** Il risultato della conversione di un intero in un intero con segno più breve o il risultato della conversione di un intero senza segno in un intero con segno di uguale lunghezza, se il valore non può essere rappresentato  
  
 Quando si esegue il cast di un **Long** Integer a un tipo **short** oppure di un tipo **short** a un tipo `char`, i byte meno significativi vengono mantenuti.  
  
 Ad esempio, questa riga  
  
```  
short x = (short)0x12345678L;  
```  
  
 assegna il valore 0x5678 a `x` e questa riga  
  
```  
char y = (char)0x1234;  
```  
  
 assegna il valore 0x34 a `y`.  
  
 Quando le variabili con segno vengono convertite in variabili senza segno e viceversa, gli schemi di bit rimangono invariati.  Ad esempio, se si esegue il cast di –2 \(0xFE\) a un valore senza segno, viene restituito 254 \(anche 0xFE\).  
  
## Vedere anche  
 [Integer](../c-language/integers.md)
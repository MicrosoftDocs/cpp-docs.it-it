---
title: Abbassamento di livello degli interi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- demoting integers
ms.assetid: 51fb3654-60b0-4de7-80eb-bd910086c18a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4d380fd36cc71b6d188bbbfe8e51ce3185405611
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="demotion-of-integers"></a>Abbassamento di livello degli interi
**ANSI 3.2.1.2** Il risultato della conversione di un intero in un intero con segno più breve o il risultato della conversione di un intero senza segno in un intero con segno di uguale lunghezza, se il valore non può essere rappresentato  
  
 Quando si esegue il cast di un intero **long** a un tipo **short** oppure di un tipo **short** a un tipo `char`, i byte meno significativi vengono mantenuti.  
  
 Ad esempio, questa riga  
  
```  
short x = (short)0x12345678L;  
```  
  
 assegna il valore 0x5678 a `x` e questa riga  
  
```  
char y = (char)0x1234;  
```  
  
 assegna il valore 0x34 a `y`.  
  
 Quando le variabili con segno vengono convertite in variabili senza segno e viceversa, gli schemi di bit rimangono invariati. Ad esempio, se si esegue il cast di -2 (0xFE) a un valore senza segno, viene restituito 254 (anche 0xFE).  
  
## <a name="see-also"></a>Vedere anche  
 [Valori Integer](../c-language/integers.md)
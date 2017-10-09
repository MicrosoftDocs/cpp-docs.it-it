---
title: Cast di Integer a valori a virgola mobile | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- integers, casting to floating-point values
ms.assetid: 81fd5b7d-15eb-4c11-a8c8-e1621ff54fd3
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: 0c91c9533baec350ba66ae1ab4db472c0ea8bcdf
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="casting-integers-to-floating-point-values"></a>Cast di Integer a valori a virgola mobile
**ANSI 3.2.1.3** Direzione del troncamento quando un numero integrale viene convertito in un numero a virgola mobile non in grado di rappresentare esattamente il valore originale  
  
 Quando viene eseguito il cast di un numero intero in un valore a virgola mobile non in grado di rappresentare esattamente tale valore, il valore viene arrotondato per eccessi o per difetto al valore appropriato più vicino.  
  
 Se ad esempio si esegue il cast di un valore di tipo **unsigned long** (a 32 bit di precisione) in un tipo **float**, la cui mantissa è a 23 bit di precisione, il numero viene arrotondato al multiplo più vicino di 256. I valori **long** da 4.294.966.913 a 4.294.967.167 vengono tutti arrotondati al valore **float** 4.294.967.040.  
  
## <a name="see-also"></a>Vedere anche  
 [Matematica a virgola mobile](../c-language/floating-point-math.md)

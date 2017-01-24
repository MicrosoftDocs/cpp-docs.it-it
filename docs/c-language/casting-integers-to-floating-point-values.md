---
title: "Cast da valori Integer a valori a virgola mobile | Microsoft Docs"
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
  - "Integer, cast a valori a virgola mobile"
ms.assetid: 81fd5b7d-15eb-4c11-a8c8-e1621ff54fd3
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Cast da valori Integer a valori a virgola mobile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**ANSI 3.2.1.3** La direzione del troncamento quando un numero intero viene convertito in un numero a virgola mobile non in grado di rappresentare esattamente il valore originale  
  
 Quando viene eseguito il cast di un numero intero in un valore a virgola mobile non in grado di rappresentare esattamente tale valore, il valore viene arrotondato per eccessi o per difetto al valore appropriato più vicino.  
  
 Ad esempio, se si esegue il cast di un valore di tipo **unsigned long** \(a 32 bit di precisione\) in un tipo **float**, la cui mantissa è a 23 bit di precisione, il numero viene arrotondato al multiplo più vicino di 256.  I valori **long** da 4.294.966.913 a 4.294.967.167 vengono tutti arrotondati al valore **float** 4.294.967.040.  
  
## Vedere anche  
 [Matematica a virgola mobile](../c-language/floating-point-math.md)
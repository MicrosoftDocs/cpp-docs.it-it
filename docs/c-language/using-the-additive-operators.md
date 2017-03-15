---
title: "Utilizzo degli operatori di addizione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operatori di addizione"
  - "operatori [C++], addizione"
ms.assetid: 7d54841e-436d-4ae8-9865-1ac1829e6f22
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Utilizzo degli operatori di addizione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Negli esempi seguenti in cui vengono illustrati gli operatori di addizione e sottrazione, utilizzare le seguenti dichiarazioni:  
  
```  
int i = 4, j;  
float x[10];  
float *px;  
```  
  
 Tali istruzioni sono equivalenti:  
  
```  
px = &x[4 + i];  
px = &x[4] + i;    
```  
  
 Il valore di `i` viene moltiplicato per la lunghezza di un valore **float** e aggiunto a `&x[4]`.  Il valore del puntatore risultante è l'indirizzo di `x[8]`.  
  
```  
j = &x[i] - &x[i-2];  
```  
  
 In questo esempio, l'indirizzo del terzo elemento `x` \(fornito da `x[i–2]`\) viene sottratto dall'indirizzo del quinto elemento `x` \(fornito da `x[i]`\).  La differenza viene suddivisa per la lunghezza di un valore **float**; il risultato è il valore intero 2.  
  
## Vedere anche  
 [Operatori di addizione C](../c-language/c-additive-operators.md)
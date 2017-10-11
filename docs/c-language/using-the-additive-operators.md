---
title: Uso degli operatori di addizione | Microsoft Docs
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
- operators [C++], addition
- additive operators
ms.assetid: 7d54841e-436d-4ae8-9865-1ac1829e6f22
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: 9f2bdbc6a22754587dce3cb2a4c9b2baf12a1a1f
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="using-the-additive-operators"></a>Utilizzo degli operatori di addizione
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
  
 Il valore di `i` viene moltiplicato per la lunghezza di un **float** e aggiunto a `&x[4]`. Il valore del puntatore risultante è l'indirizzo di `x[8]`.  
  
```  
j = &x[i] - &x[i-2];  
```  
  
 In questo esempio, l'indirizzo del terzo elemento `x` (fornito da `x[i-2]`) viene sottratto dall'indirizzo del quinto elemento `x` (fornito da `x[i]`). La differenza viene divisa per la lunghezza di un **float**. Il risultato è il valore intero 2.  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori di addizione C](../c-language/c-additive-operators.md)

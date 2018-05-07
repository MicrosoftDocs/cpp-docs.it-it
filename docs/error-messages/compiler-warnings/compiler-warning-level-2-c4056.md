---
title: Compilatore (livello 2) Avviso C4056 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4056
dev_langs:
- C++
helpviewer_keywords:
- C4056
ms.assetid: a3c3a9b8-ec30-452d-96cb-3694adcce789
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6bf5a5855d0b4291105826679e2ae81ed6d69e5f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-2-c4056"></a>Compilatore (livello 2) Avviso C4056
overflow di aritmetica a virgola mobile costante  
  
 Operazioni aritmetiche su costanti a virgola mobile e genera un risultato che supera il valore massimo consentito.  
  
 Questo avviso può essere causato da ottimizzazioni del compilatore eseguite durante operazioni aritmetiche su costanti. È possibile ignorare questo avviso se scompare quando si disattiva l'ottimizzazione ([/Od](../../build/reference/od-disable-debug.md)).  
  
 L'esempio seguente genera l'errore C4056:  
  
```  
// C4056.cpp  
// compile with: /W2 /LD  
#pragma warning (default : 4056)  
float fp_val = 1.0e300 * 1.0e300;   // C4056  
```
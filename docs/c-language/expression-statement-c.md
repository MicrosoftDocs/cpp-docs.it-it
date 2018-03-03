---
title: Istruzione di espressione (C) | Microsoft Docs
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
- statements, expression
- expression statements
ms.assetid: 1085982b-dc16-4c1e-9ddd-0cd85c8fe2e3
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 75bad42ddff5f20d14d627e3f036659f030bb3f5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="expression-statement-c"></a>Istruzione di espressione (C)
Quando un'istruzione di espressione viene eseguita, l'espressione viene valutata in base alle regole descritte in [Espressioni e assegnazioni](../c-language/expressions-and-assignments.md).  
  
## <a name="syntax"></a>Sintassi  
 *expression-statement*:  
 *expression* opt**;**  
  
 Tutti gli effetti collaterali derivanti dalla valutazione delle espressioni vengono completati prima che venga eseguita l'istruzione successiva. Un'istruzione di espressione vuota viene definita un'istruzione null. Per altre informazioni, vedere [Istruzione Null](../c-language/null-statement-c.md).  
  
 In questi esempi vengono illustrate le istruzioni di espressione.  
  
```  
x = ( y + 3 );            /* x is assigned the value of y + 3  */  
x++;                      /* x is incremented                  */  
x = y = 0;                /* Both x and y are initialized to 0 */  
proc( arg1, arg2 );       /* Function call returning void      */  
y = z = ( f( x ) + 3 );   /* A function-call expression        */  
```  
  
 Nell'ultima istruzione l'espressione di chiamata di funzione, ovvero il valore dell'espressione, che include qualsiasi valore restituito dalla funzione, viene incrementato di 3 e viene quindi assegnato a entrambe le variabili `y` e `z`.  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzioni](../c-language/statements-c.md)
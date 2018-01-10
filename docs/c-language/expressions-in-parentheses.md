---
title: Espressioni tra parentesi | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- parentheses
- expression evaluation, evaluation order
- expressions [C++], evaluating
- parentheses, expressions
ms.assetid: b8636147-6982-408c-9e64-29e40678ee43
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c09209a323a06f883a54e7ecaec17c55a3bc6205
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="expressions-in-parentheses"></a>Espressioni tra parentesi
È possibile includere qualsiasi operando tra parentesi senza modificare il tipo o il valore dell'espressione inclusa. Ad esempio, nell'espressione:  
  
```  
( 10 + 5 ) / 5  
```  
  
 le parentesi che racchiudono `10 + 5` indicano che il valore `10 + 5` viene valutato per primo e diventa l'operando sinistro dell'operatore di divisione (**/**). Il risultato di `( 10 + 5 ) / 5` è 3. Senza le parentesi, `10 + 5 / 5` restituirebbe 11.  
  
 Sebbene le parentesi influiscano sulla modalità con cui vengono raggruppati gli operandi in un'espressione, non è possibile garantire un particolare ordine di valutazione in tutti i casi. Ad esempio, né le parentesi né il raggruppamento da sinistra a destra dell'espressione seguente garantisce che il valore `i` sarà in una delle sottoespressioni:  
  
```  
( i++ +1 ) * ( 2 + i )  
```  
  
 Il compilatore è libero di valutare i due lati della moltiplicazione in qualsiasi ordine. Se il valore iniziale `i` è zero, l'intera espressione potrebbe essere valutata come una di queste due istruzioni:  
  
```  
( 0 + 1 + 1 ) * ( 2 + 1 )   
( 0 + 1 + 1 ) * ( 2 + 0 )  
```  
  
 Le eccezioni derivanti dagli effetti collaterali vengono trattate in [Effetti collaterali](../c-language/side-effects.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni primarie C](../c-language/c-primary-expressions.md)
---
title: Operatori di incremento e decremento in forma prefissa | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- increment operators, types of
- decrement operators, syntax
- decrement operators
ms.assetid: 9a441bb9-d94a-4b6a-9db2-0d0d76bc480d
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: f5a6c98d53c73a6913c9ed8e63b2a1fce43b97d9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="prefix-increment-and-decrement-operators"></a>Operatori di incremento e decremento in forma prefissa
Gli operatori unari (`++` e **--**) vengono chiamati operatori di decremento o incremento di "prefisso", quando gli stessi operatori di decremento o incremento si trovano prima dell'operando. Decremento e incremento suffisso hanno maggiore precedenza, rispetto ad incremento e decremento prefisso. L'operando deve essere un valore integrale, a virgola mobile o un tipo di puntatore e deve essere un'espressione L-value modificabile, vale a dire un'espressione priva dell'attributo **const**. Il risultato è un l-value.  
  
 Quando l'operatore si trova prima del suo operando, l'operando viene incrementato o decrementato e il suo nuovo valore corrisponde al risultato dell'espressione.  
  
 Un operando di tipo integrale o mobile viene incrementato o decrementato dell'intero 1. Il tipo del risultato è uguale al tipo di operando. Un operando di tipo puntatore viene incrementato o decrementato alle dimensioni dell'oggetto che indirizza. Un puntatore incrementato punta all'oggetto successivo; mentre un puntatore decrementato punta all'oggetto precedente.  
  
## <a name="example"></a>Esempio  
 In questo esempio viene illustrato l'operatore di decremento prefisso unario:  
  
```  
if( line[--i] != '\n' )  
    return;  
```  
  
 In questo esempio, la variabile `i` viene decrementata prima di essere utilizzata come indice in `line`.  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori unari C](../c-language/c-unary-operators.md)
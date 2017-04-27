---
title: Operatori di incremento e decremento in forma suffissa C | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- increment operators, syntax
- scalar operators
- types [C], scalar
ms.assetid: 56ba218d-65f9-405f-8684-caccc0ca33aa
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Human Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: a67e01fe0555a628c8b2178cc580bcaa8f84cd83
ms.lasthandoff: 04/01/2017

---
# <a name="c-postfix-increment-and-decrement-operators"></a>Operatori di incremento e decremento in forma suffissa C
Gli operandi degli operatori di incremento e di decremento in forma suffissa sono tipi scalari che sono l-value modificabili.  
  
## <a name="syntax"></a>Sintassi  
 *postfix-expression*:  
 *postfix-expression*  **++**  
  
 *postfix-expression*  **--**  
  
 Il risultato dell'operazione di incremento o di decremento in forma suffissa è il valore dell'operando. Una volta ottenuto il risultato, il valore dell'operando viene incrementato (o decrementato). Il codice seguente illustra l'operatore di incremento in forma suffissa.  
  
```  
if( var++ > 0 )  
    *p++ = *q++;  
```  
  
 In questo esempio la variabile `var` viene confrontata con 0, quindi viene incrementata. Se prima di essere incrementato `var` era positivo, viene eseguita l'istruzione successiva. Innanzitutto, il valore dell'oggetto a cui puntava `q` viene assegnato all'oggetto a cui puntava `p`. Quindi, `q` e `p` vengono incrementati.  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori di incremento e decremento in forma suffissa: ++ e --](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)

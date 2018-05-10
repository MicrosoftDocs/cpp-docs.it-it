---
title: Operatori di incremento e decremento in forma suffissa C | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- increment operators, syntax
- scalar operators
- types [C], scalar
ms.assetid: 56ba218d-65f9-405f-8684-caccc0ca33aa
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8f96c48a69f692c8646de5dec8ad8e6431fb63c5
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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
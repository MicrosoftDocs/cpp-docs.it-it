---
description: 'Altre informazioni su: operatori di incremento e decremento suffisso C'
title: Operatori di incremento e decremento in forma suffissa C
ms.date: 11/04/2016
helpviewer_keywords:
- increment operators, syntax
- scalar operators
- types [C], scalar
ms.assetid: 56ba218d-65f9-405f-8684-caccc0ca33aa
ms.openlocfilehash: e5e230f1e1e51a1f48b29436705f4f645be9ed44
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97300216"
---
# <a name="c-postfix-increment-and-decrement-operators"></a>Operatori di incremento e decremento in forma suffissa C

Gli operandi degli operatori di incremento e di decremento in forma suffissa sono tipi scalari che sono l-value modificabili.

## <a name="syntax"></a>Sintassi

*suffisso-espressione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*  **++**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*  **--**

Il risultato dell'operazione di incremento o di decremento in forma suffissa è il valore dell'operando. Una volta ottenuto il risultato, il valore dell'operando viene incrementato (o decrementato). Il codice seguente illustra l'operatore di incremento in forma suffissa.

```
if( var++ > 0 )
    *p++ = *q++;
```

In questo esempio la variabile `var` viene confrontata con 0, quindi viene incrementata. Se prima di essere incrementato `var` era positivo, viene eseguita l'istruzione successiva. Innanzitutto, il valore dell'oggetto a cui puntava `q` viene assegnato all'oggetto a cui puntava `p`. Quindi, `q` e `p` vengono incrementati.

## <a name="see-also"></a>Vedi anche

[Operatori di incremento e decremento suffisso: + + e--](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)

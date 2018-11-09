---
title: Utilizzo degli operatori di addizione
ms.date: 11/04/2016
helpviewer_keywords:
- operators [C++], addition
- additive operators
ms.assetid: 7d54841e-436d-4ae8-9865-1ac1829e6f22
ms.openlocfilehash: 78dc559a83626057603027e30742435b1128e31c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50557690"
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
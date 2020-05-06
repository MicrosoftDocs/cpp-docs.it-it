---
title: Utilizzo degli operatori di addizione
ms.date: 11/04/2016
helpviewer_keywords:
- operators [C++], addition
- additive operators
ms.assetid: 7d54841e-436d-4ae8-9865-1ac1829e6f22
ms.openlocfilehash: 0e2d802a77c56b8f458b614b29e86e2e1d30a55e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62344876"
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

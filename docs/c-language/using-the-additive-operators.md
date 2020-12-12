---
description: 'Altre informazioni su: uso degli operatori additivi'
title: Utilizzo degli operatori di addizione
ms.date: 11/04/2016
helpviewer_keywords:
- operators [C++], addition
- additive operators
ms.assetid: 7d54841e-436d-4ae8-9865-1ac1829e6f22
ms.openlocfilehash: d56a1b2e2696ae88598306271ed02c417ef63b0c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318364"
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

Il valore di `i` viene moltiplicato per la lunghezza di un oggetto **`float`** e viene aggiunto a `&x[4]` . Il valore del puntatore risultante è l'indirizzo di `x[8]`.

```
j = &x[i] - &x[i-2];
```

In questo esempio, l'indirizzo del terzo elemento `x` (fornito da `x[i-2]`) viene sottratto dall'indirizzo del quinto elemento `x` (fornito da `x[i]`). La differenza è divisa per la lunghezza di un oggetto **`float`** . il risultato è il valore intero 2.

## <a name="see-also"></a>Vedi anche

[Operatori di addizione C](../c-language/c-additive-operators.md)

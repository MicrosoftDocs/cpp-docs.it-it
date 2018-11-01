---
title: Errore matematico M6201
ms.date: 11/04/2016
f1_keywords:
- M6201
helpviewer_keywords:
- M6201
ms.assetid: 4041c331-d9aa-4dd4-b565-7dbe0218538c
ms.openlocfilehash: 6d3f107de7e45653374036ecafaa864cb3eff5b0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50622105"
---
# <a name="math-error-m6201"></a>Errore matematico M6201

'function': errore di dominio

Un argomento della funzione specificata non è all'esterno del dominio di valori di input validi per tale funzione.

## <a name="example"></a>Esempio

```
result = sqrt(-1.0)   // C statement
result = SQRT(-1.0)   !  FORTRAN statement
```

Questo errore viene chiamato il `_matherr` funzione con il nome della funzione, argomenti e il tipo di errore. È possibile riscrivere il `_matherr` funzioni per personalizzare la gestione di alcuni errori di run-time matematica a virgola mobile.
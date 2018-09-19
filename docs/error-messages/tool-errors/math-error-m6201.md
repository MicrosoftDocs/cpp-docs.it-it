---
title: Errore matematico M6201 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- M6201
dev_langs:
- C++
helpviewer_keywords:
- M6201
ms.assetid: 4041c331-d9aa-4dd4-b565-7dbe0218538c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 87d2c09d6448bcf7fb0557fa3a174c60205a34ea
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46099395"
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
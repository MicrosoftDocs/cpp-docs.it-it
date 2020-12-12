---
description: 'Altre informazioni su: errore matematico matematico M6201'
title: Errore matematico M6201
ms.date: 11/04/2016
f1_keywords:
- M6201
helpviewer_keywords:
- M6201
ms.assetid: 4041c331-d9aa-4dd4-b565-7dbe0218538c
ms.openlocfilehash: 03588b7eed580b95cb263f6e4d71f5a793f4d392
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97244316"
---
# <a name="math-error-m6201"></a>Errore matematico M6201

' Function ': errore _DOMAIN

Un argomento della funzione specificata non è compreso nel dominio dei valori di input validi per tale funzione.

## <a name="example"></a>Esempio

```
result = sqrt(-1.0)   // C statement
result = SQRT(-1.0)   !  FORTRAN statement
```

Questo errore chiama la `_matherr` funzione con il nome della funzione, i relativi argomenti e il tipo di errore. È possibile riscrivere la `_matherr` funzione per personalizzare la gestione di determinati errori matematici a virgola mobile in fase di esecuzione.

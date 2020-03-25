---
title: Errore matematico M6201
ms.date: 11/04/2016
f1_keywords:
- M6201
helpviewer_keywords:
- M6201
ms.assetid: 4041c331-d9aa-4dd4-b565-7dbe0218538c
ms.openlocfilehash: 0b1cd0d3fcd86a2174b19da41176dd97f547a295
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80193706"
---
# <a name="math-error-m6201"></a>Errore matematico M6201

' Function ': errore _DOMAIN

Un argomento della funzione specificata non è compreso nel dominio dei valori di input validi per tale funzione.

## <a name="example"></a>Esempio

```
result = sqrt(-1.0)   // C statement
result = SQRT(-1.0)   !  FORTRAN statement
```

Questo errore chiama la funzione `_matherr` con il nome della funzione, i relativi argomenti e il tipo di errore. È possibile riscrivere la funzione `_matherr` per personalizzare la gestione di determinati errori matematici a virgola mobile in fase di esecuzione.

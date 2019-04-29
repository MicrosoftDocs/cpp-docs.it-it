---
title: Errore matematico M6111
ms.date: 11/04/2016
f1_keywords:
- M6111
helpviewer_keywords:
- M6111
ms.assetid: c0fc13f8-33c8-4e3f-a440-126cc623441b
ms.openlocfilehash: 44f406881d64d13e23ca2c0911ee278c864a2c11
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62393408"
---
# <a name="math-error-m6111"></a>Errore matematico M6111

underflow di stack

Un'operazione a virgola mobile ha comportato un underflow di stack nel coprocessore 8087/287/387 o nell'emulatore.

Questo errore è spesso causato da una chiamata a un `long double` funzione che restituisce un valore. Ad esempio, di seguito genera questo errore quando compilato ed eseguito:

```
long double ld() {};
main ()
{
  ld();
}
```

Il programma termina con il codice di uscita 139.
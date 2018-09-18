---
title: Errore matematico M6111 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- M6111
dev_langs:
- C++
helpviewer_keywords:
- M6111
ms.assetid: c0fc13f8-33c8-4e3f-a440-126cc623441b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 95a55ec6b7cdf0b6e4c15bd283dde77c610698fa
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46074825"
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
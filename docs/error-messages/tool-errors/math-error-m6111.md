---
title: Errore matematico M6111
ms.date: 11/04/2016
f1_keywords:
- M6111
helpviewer_keywords:
- M6111
ms.assetid: c0fc13f8-33c8-4e3f-a440-126cc623441b
ms.openlocfilehash: 986c0e53edcddfc47eb9ba970f3c32385e0a57d9
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225189"
---
# <a name="math-error-m6111"></a>Errore matematico M6111

underflow dello stack

Un'operazione a virgola mobile ha generato un underflow dello stack sul coprocessore 8087/287/387 o sull'emulatore.

Questo errore è spesso causato da una chiamata a una **`long double`** funzione che non restituisce un valore. Ad esempio, il codice seguente genera questo errore durante la compilazione e l'esecuzione:

```
long double ld() {};
main ()
{
  ld();
}
```

Il programma termina con il codice di uscita 139.

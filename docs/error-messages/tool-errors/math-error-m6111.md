---
title: Errore matematico M6111
ms.date: 11/04/2016
f1_keywords:
- M6111
helpviewer_keywords:
- M6111
ms.assetid: c0fc13f8-33c8-4e3f-a440-126cc623441b
ms.openlocfilehash: e8abedf6a326a826d0c8ac513b15037c8bf89bce
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80173691"
---
# <a name="math-error-m6111"></a>Errore matematico M6111

underflow dello stack

Un'operazione a virgola mobile ha generato un underflow dello stack sul coprocessore 8087/287/387 o sull'emulatore.

Questo errore è spesso causato da una chiamata a una funzione `long double` che non restituisce un valore. Ad esempio, il codice seguente genera questo errore durante la compilazione e l'esecuzione:

```
long double ld() {};
main ()
{
  ld();
}
```

Il programma termina con il codice di uscita 139.

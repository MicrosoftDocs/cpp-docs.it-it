---
title: Errore del compilatore C2299
ms.date: 11/04/2016
f1_keywords:
- C2299
helpviewer_keywords:
- C2299
ms.assetid: d001c2bc-f6fd-47aa-8e42-0eb824d6441d
ms.openlocfilehash: 4776ddede31dbcebe56a5919fd111f4df7248215
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50590008"
---
# <a name="compiler-error-c2299"></a>Errore del compilatore C2299

'function': modifica del comportamento: una specializzazione esplicita non può essere un costruttore di copia o operatore di assegnazione di copia

Questo errore può anche essere generato in seguito a operazioni di conformità del compilatore eseguite per Visual C++ 2005: le versioni precedenti di Visual C++ consentivano specializzazioni esplicite per un costruttore di copia o un operatore di assegnazione di copia.

Per risolvere C2299, non dovrà inserire il costruttore di copia o operatore di assegnazione di una funzione di modello, ma piuttosto una funzione non basata su modello che accetta un tipo di classe. Qualsiasi codice chiami il costruttore di copia o operatore di assegnazione specificando esplicitamente gli argomenti di modello che deve rimuovere gli argomenti di modello.

L'esempio seguente genera l'errore C2299:

```
// C2299.cpp
// compile with: /c
class C {
   template <class T>
   C (T t);

   template <> C (const C&);   // C2299
   C (const C&);   // OK
};
```
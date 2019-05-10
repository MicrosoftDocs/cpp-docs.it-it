---
title: Errore del compilatore C2299
ms.date: 11/04/2016
f1_keywords:
- C2299
helpviewer_keywords:
- C2299
ms.assetid: d001c2bc-f6fd-47aa-8e42-0eb824d6441d
ms.openlocfilehash: 39659baebf7dc1859a69021f60ed452964ae61af
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65447954"
---
# <a name="compiler-error-c2299"></a>Errore del compilatore C2299

'function': modifica del comportamento: una specializzazione esplicita non può essere un costruttore di copia o operatore di assegnazione di copia

Questo errore può anche essere generato in seguito a operazioni di conformità del compilatore eseguite per Visual Studio 2005: le versioni precedenti di oggetto visivo C++ consentito specializzazioni esplicite per un costruttore di copia o un operatore di assegnazione di copia.

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
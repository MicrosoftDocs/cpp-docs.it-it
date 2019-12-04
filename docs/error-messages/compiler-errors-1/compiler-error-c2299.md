---
title: Errore del compilatore C2299
ms.date: 11/04/2016
f1_keywords:
- C2299
helpviewer_keywords:
- C2299
ms.assetid: d001c2bc-f6fd-47aa-8e42-0eb824d6441d
ms.openlocfilehash: 009a441ec610053176e79126d9f2663f29b26bc6
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74759048"
---
# <a name="compiler-error-c2299"></a>Errore del compilatore C2299

' Function ': modifica del comportamento: una specializzazione esplicita non può essere un costruttore di copia o un operatore di assegnazione di copia

Questo errore può anche essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio 2005: le versioni precedenti di Visual C++ consentivano specializzazioni esplicite per un costruttore di copia o un operatore di assegnazione di copia.

Per risolvere C2299, non rendere il costruttore di copia o l'operatore di assegnazione una funzione di modello, ma piuttosto una funzione non modello che accetta un tipo di classe. Qualsiasi codice che chiama il costruttore di copia o l'operatore di assegnazione specificando in modo esplicito gli argomenti del modello deve rimuovere gli argomenti del modello.

L'esempio seguente genera l'C2299:

```cpp
// C2299.cpp
// compile with: /c
class C {
   template <class T>
   C (T t);

   template <> C (const C&);   // C2299
   C (const C&);   // OK
};
```

---
title: Errore del compilatore C2299 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2299
dev_langs:
- C++
helpviewer_keywords:
- C2299
ms.assetid: d001c2bc-f6fd-47aa-8e42-0eb824d6441d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b4977f4a5ac81cf4c04d3b143f6f7e670a9d9279
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46049618"
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
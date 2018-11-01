---
title: Errore del compilatore C3195
ms.date: 11/04/2016
f1_keywords:
- C3195
helpviewer_keywords:
- C3195
ms.assetid: 97e4f681-812b-49e8-ba57-24b7817e3cd8
ms.openlocfilehash: 4a54a9c629a1abaa4f1c5d15d06448e82cf25561
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50538853"
---
# <a name="compiler-error-c3195"></a>Errore del compilatore C3195

'operator': è riservata e non può essere utilizzata come membro di una classe di riferimento o un tipo di valore. Gli operatori CLR o WinRT devono essere definiti usando la parola chiave 'operator'

Il compilatore ha rilevato una definizione dell'operatore che usa la sintassi di Estensioni gestite per C++. È necessario utilizzare la sintassi di C++ per gli operatori.

L'esempio seguente genera l'errore C3195 e mostra come risolverlo:

```
// C3195.cpp
// compile with: /clr /LD
#using <mscorlib.dll>
value struct V {
   static V op_Addition(V v, int i);   // C3195
   static V operator +(V v, char c);   // OK for new C++ syntax
};
```
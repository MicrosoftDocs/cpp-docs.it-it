---
title: Errore del compilatore C3071
ms.date: 11/04/2016
f1_keywords:
- C3071
helpviewer_keywords:
- C3071
ms.assetid: 69879e66-a60e-4058-9bbd-d5c5e2d8ee37
ms.openlocfilehash: 6960dbf62fd30b822f0d7c7a3c46a29a4115913f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50428353"
---
# <a name="compiler-error-c3071"></a>Errore del compilatore C3071

operatore 'operator' applicabile solo a un'istanza di una classe di riferimento o un tipo di valore

Un operatore CLR non può essere usato in un tipo nativo. L'operatore può essere usato in una classe di riferimento o in un una struct di riferimento (un tipo di valore), ma non in un tipo nativo, ad esempio int, o in un alias per un tipo nativo, ad esempio System::Int32. Questi tipi non possono essere boxed nel codice C++ in modo da fare riferimento alla variabile nativa e quindi l'operatore non può essere usato.

Per altre informazioni, vedere [operatore di riferimento di rilevamento](../../windows/tracking-reference-operator-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3071.

```
// C3071.cpp
// compile with: /clr
class N {};
ref struct R {};

int main() {
   N n;
   %n;   // C3071

   R r;
   R ^ r2 = %r;   // OK
}
```
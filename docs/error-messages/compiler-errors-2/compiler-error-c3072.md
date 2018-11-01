---
title: Errore del compilatore C3072
ms.date: 11/04/2016
f1_keywords:
- C3072
helpviewer_keywords:
- C3072
ms.assetid: cdd5cb6b-c478-4698-adfa-c40188d34a18
ms.openlocfilehash: 34b5cff9191814b2a16a42d9e234bab09f29c117
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50490025"
---
# <a name="compiler-error-c3072"></a>Errore del compilatore C3072

operatore 'operator' non può essere applicato a un'istanza di una classe di riferimento

usare l'operatore unario '`operator` ' per convertire un'istanza di una classe di riferimento a un tipo di handle

Un tipo CLR richiede gli operatori CLR, non gli operatori nativi (o standard).  Per altre informazioni, vedere [operatore di riferimento di rilevamento](../../windows/tracking-reference-operator-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3072.

```
// C3072.cpp
// compile with: /clr
ref class R {};

int main() {
   R r1;
   R^ r2 = &r1;   // C3072
   R^ r3 = %r1;   // OK
}
```
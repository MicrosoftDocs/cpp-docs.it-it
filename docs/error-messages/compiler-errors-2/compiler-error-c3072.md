---
title: Errore del compilatore C3072
ms.date: 11/04/2016
f1_keywords:
- C3072
helpviewer_keywords:
- C3072
ms.assetid: cdd5cb6b-c478-4698-adfa-c40188d34a18
ms.openlocfilehash: a8fe0802a7529551fce1c0b7242c867db52d8842
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74756760"
---
# <a name="compiler-error-c3072"></a>Errore del compilatore C3072

non è possibile applicare l'operatore ' operator ' a un'istanza di una classe di riferimento

usare l'operatore '`operator`' unario per convertire un'istanza di una classe di riferimento in un tipo di handle

Un tipo CLR richiede operatori CLR, non operatori nativi (o standard).  Per altre informazioni, vedere [operatore di riferimento di rilevamento](../../extensions/tracking-reference-operator-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3072.

```cpp
// C3072.cpp
// compile with: /clr
ref class R {};

int main() {
   R r1;
   R^ r2 = &r1;   // C3072
   R^ r3 = %r1;   // OK
}
```

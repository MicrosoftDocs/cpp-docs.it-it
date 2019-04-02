---
title: Errore del compilatore C3072
ms.date: 11/04/2016
f1_keywords:
- C3072
helpviewer_keywords:
- C3072
ms.assetid: cdd5cb6b-c478-4698-adfa-c40188d34a18
ms.openlocfilehash: 2b76fa91d739e9cc89251aaf56aa9b196e62a68d
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58777129"
---
# <a name="compiler-error-c3072"></a>Errore del compilatore C3072

operatore 'operator' non può essere applicato a un'istanza di una classe di riferimento

usare l'operatore unario '`operator` ' per convertire un'istanza di una classe di riferimento a un tipo di handle

Un tipo CLR richiede gli operatori CLR, non gli operatori nativi (o standard).  Per altre informazioni, vedere [operatore di riferimento di rilevamento](../../extensions/tracking-reference-operator-cpp-component-extensions.md).

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
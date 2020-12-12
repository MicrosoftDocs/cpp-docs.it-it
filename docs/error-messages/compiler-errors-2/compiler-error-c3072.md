---
description: 'Altre informazioni su: errore del compilatore C3072'
title: Errore del compilatore C3072
ms.date: 11/04/2016
f1_keywords:
- C3072
helpviewer_keywords:
- C3072
ms.assetid: cdd5cb6b-c478-4698-adfa-c40188d34a18
ms.openlocfilehash: 02876a6983a47ce76f6e089bafde68af41034131
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97320279"
---
# <a name="compiler-error-c3072"></a>Errore del compilatore C3072

> non è possibile applicare l'operatore '*operator-Name*' a un'istanza di una classe di riferimento

usare l'operatore unario *nome-operatore* per convertire un'istanza di una classe di riferimento in un tipo di handle

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

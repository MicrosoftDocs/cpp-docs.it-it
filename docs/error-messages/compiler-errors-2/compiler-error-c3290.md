---
title: Errore del compilatore C3290
ms.date: 11/04/2016
f1_keywords:
- C3290
helpviewer_keywords:
- C3290
ms.assetid: 0baf684b-1143-4953-ac99-a2fa267d8017
ms.openlocfilehash: a7a73c13c28923761674294d8d6e601b95ffad96
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74760153"
---
# <a name="compiler-error-c3290"></a>Errore del compilatore C3290

'type': una proprietà trivial non può avere un tipo riferimento

Una proprietà è stata dichiarata in modo non corretto. Quando si dichiara una proprietà trivial, il compilatore crea una variabile che verrà aggiornata dalla proprietà e non è possibile avere una variabile di riferimento di rilevamento in una classe.

Per ulteriori informazioni, vedere [operatore di riferimento](../../extensions/tracking-reference-operator-cpp-component-extensions.md) di [Proprietà](../../extensions/property-cpp-component-extensions.md) e rilevamento.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3290.

```cpp
// C3290.cpp
// compile with: /clr /c
ref struct R {};

ref struct X {
   R^ mr;

   property R % y;   // C3290
   property R ^ x;   // OK

   // OK
   property R% prop {
      R% get() {
         return *mr;
      }

      void set(R%) {}
   }
};

int main() {
   X x;
   R% xp = x.prop;
}
```

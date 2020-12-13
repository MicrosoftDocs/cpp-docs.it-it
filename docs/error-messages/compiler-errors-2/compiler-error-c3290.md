---
description: 'Altre informazioni su: errore del compilatore C3290'
title: Errore del compilatore C3290
ms.date: 11/04/2016
f1_keywords:
- C3290
helpviewer_keywords:
- C3290
ms.assetid: 0baf684b-1143-4953-ac99-a2fa267d8017
ms.openlocfilehash: 68c0e79c233f7fbd416f6bdbe42cc555c04731fa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337419"
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

---
title: Errore del compilatore C3290
ms.date: 11/04/2016
f1_keywords:
- C3290
helpviewer_keywords:
- C3290
ms.assetid: 0baf684b-1143-4953-ac99-a2fa267d8017
ms.openlocfilehash: f2a346354d8da7d78c5517b01b4438bfb8af50ad
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62222707"
---
# <a name="compiler-error-c3290"></a>Errore del compilatore C3290

'type': una proprietà trivial non può avere un tipo riferimento

Una proprietà è stata dichiarata in modo non corretto. Quando si dichiara una proprietà trivial, il compilatore crea una variabile che verrà aggiornata dalla proprietà e non è possibile avere una variabile di riferimento di rilevamento in una classe.

Visualizzare [proprietà](../../extensions/property-cpp-component-extensions.md) e [operatore di riferimento di rilevamento](../../extensions/tracking-reference-operator-cpp-component-extensions.md) per altre informazioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3290.

```
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
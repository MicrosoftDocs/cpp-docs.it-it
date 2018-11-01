---
title: Errore del compilatore C3290
ms.date: 11/04/2016
f1_keywords:
- C3290
helpviewer_keywords:
- C3290
ms.assetid: 0baf684b-1143-4953-ac99-a2fa267d8017
ms.openlocfilehash: d82d3272563f7a5af5de399a2f7fff621500e612
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50490480"
---
# <a name="compiler-error-c3290"></a>Errore del compilatore C3290

'type': una proprietà trivial non può avere un tipo riferimento

Una proprietà è stata dichiarata in modo non corretto. Quando si dichiara una proprietà trivial, il compilatore crea una variabile che verrà aggiornata dalla proprietà e non è possibile avere una variabile di riferimento di rilevamento in una classe.

Visualizzare [proprietà](../../windows/property-cpp-component-extensions.md) e [operatore di riferimento di rilevamento](../../windows/tracking-reference-operator-cpp-component-extensions.md) per altre informazioni.

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
---
title: Errore del compilatore C2662
ms.date: 11/04/2016
f1_keywords:
- C2662
helpviewer_keywords:
- C2662
ms.assetid: e172c2a4-f29e-4034-8232-e7dc6f83689f
ms.openlocfilehash: 5e2dd6b01db5f7d3026f14c5032ab4623eb6fb58
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220288"
---
# <a name="compiler-error-c2662"></a>Errore del compilatore C2662

' Function ': Impossibile convertire il puntatore ' This ' da' tipo1' a' tipo2'

Il compilatore non è riuscito a convertire il **`this`** puntatore da `type1` a `type2` .

Questo errore può essere causato dalla chiamata di una funzione non **`const`** membro su un **`const`** oggetto.  Di seguito vengono riportate alcune soluzioni possibili:

- Rimuovere **`const`** dalla dichiarazione dell'oggetto.

- Aggiungere **`const`** la funzione membro.

L'esempio seguente genera l'C2662:

```cpp
// C2662.cpp
class C {
public:
   void func1();
   void func2() const{}
} const c;

int main() {
   c.func1();   // C2662
   c.func2();   // OK
}
```

Quando si esegue la compilazione con **/CLR**, non è possibile chiamare una funzione in un **`const`** **`volatile`** tipo gestito qualificato o. Non è possibile dichiarare una funzione membro const di una classe gestita, pertanto non è possibile chiamare metodi su oggetti const gestiti.

```cpp
// C2662_b.cpp
// compile with: /c /clr
ref struct M {
   property M^ Type {
      M^ get() { return this; }
   }

   void operator=(const M %m) {
      M ^ prop = m.Type;   // C2662
   }
};

ref struct N {
   property N^ Type {
      N^ get() { return this; }
   }

   void operator=(N % n) {
      N ^ prop = n.Type;   // OK
   }
};
```

L'esempio seguente genera l'C2662:

```cpp
// C2662_c.cpp
// compile with: /c
// C2662 expected
typedef int ISXVD;
typedef unsigned char BYTE;

class LXBASE {
protected:
    BYTE *m_rgb;
};

class LXISXVD:LXBASE {
public:
   // Delete the following line to resolve.
   ISXVD *PMin() { return (ISXVD *)m_rgb; }

   ISXVD *PMin2() const { return (ISXVD *)m_rgb; };   // OK
};

void F(const LXISXVD *plxisxvd, int iDim) {
   ISXVD isxvd;
   // Delete the following line to resolve.
   isxvd = plxisxvd->PMin()[iDim];

   isxvd = plxisxvd->PMin2()[iDim];
}
```

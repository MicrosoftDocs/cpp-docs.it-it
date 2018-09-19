---
title: Errore del compilatore C2662 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2662
dev_langs:
- C++
helpviewer_keywords:
- C2662
ms.assetid: e172c2a4-f29e-4034-8232-e7dc6f83689f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e794f50dd6a23101e004618468b432c8969e54b5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46042065"
---
# <a name="compiler-error-c2662"></a>Errore del compilatore C2662

'function': Impossibile convertire il puntatore 'this' da 'type1' a 'type2'

Il compilatore non è stato possibile convertire le `this` puntatore da `type1` a `type2`.

Questo errore può dipendere da richiamare non -`const` funzione membro su un `const` oggetto.  Possibili risoluzioni:

- Rimuovere il `const` dalla dichiarazione dell'oggetto.

- Aggiungere `const` alla funzione membro.

L'esempio seguente genera l'errore C2662:

```
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

Durante la compilazione con **/clr**, è possibile chiamare una funzione in un `const` o `volatile` qualificato tipo gestito. È possibile dichiarare una funzione membro const di una classe gestita, in modo che non è possibile chiamare metodi su oggetti gestiti const.

```
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

L'esempio seguente genera l'errore C2662:

```
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
---
title: novtable
ms.date: 11/04/2016
f1_keywords:
- novtable_cpp
helpviewer_keywords:
- novtable __declspec keyword
- __declspec keyword [C++], novtable
ms.assetid: cfef09c5-8c1e-4b14-8a72-7d726ded4484
ms.openlocfilehash: ccf544608bcba83af17702767562ef93d775b5a9
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227257"
---
# <a name="novtable"></a>novtable

**Specifico di Microsoft**

Si tratta di un **`__declspec`** attributo esteso.

Questo formato di **`__declspec`** può essere applicato a qualsiasi dichiarazione di classe, ma deve essere applicato solo alle classi di interfaccia pure, ovvero alle classi che non verranno mai create autonomamente. **`__declspec`** Arresta il compilatore dalla generazione del codice per inizializzare vfptr nei costruttori e nel distruttore della classe. In molti casi, in tal modo vengono rimossi gli unici riferimenti a vtable associati alla classe e, pertanto, il linker la rimuoverà. L'utilizzo di questa forma di può comportare **`__declspec`** una riduzione significativa della dimensione del codice.

Se si tenta di creare un'istanza di una classe contrassegnata con **`novtable`** e quindi di accedere a un membro della classe, si riceverà una violazione di accesso (AV).

## <a name="example"></a>Esempio

```cpp
// novtable.cpp
#include <stdio.h>

struct __declspec(novtable) X {
   virtual void mf();
};

struct Y : public X {
   void mf() {
      printf_s("In Y\n");
   }
};

int main() {
   // X *pX = new X();
   // pX->mf();   // Causes a runtime access violation.

   Y *pY = new Y();
   pY->mf();
}
```

```Output
In Y
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[`__declspec`](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)

---
title: novtable
ms.date: 11/04/2016
f1_keywords:
- novtable_cpp
helpviewer_keywords:
- novtable __declspec keyword
- __declspec keyword [C++], novtable
ms.assetid: cfef09c5-8c1e-4b14-8a72-7d726ded4484
ms.openlocfilehash: d101e73f2f8d476c50b1b80b8daa7994151d43af
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80177833"
---
# <a name="novtable"></a>novtable

**Sezione specifica Microsoft**

Si tratta di un **__declspec** attributo esteso.

Questo tipo di **__declspec** può essere applicato a qualsiasi dichiarazione di classe, ma deve essere applicato solo alle classi di interfaccia pure, ovvero alle classi che non verranno mai create autonomamente. Il **__declspec** impedisce al compilatore di generare codice per inizializzare vfptr nei costruttori e nel distruttore della classe. In molti casi, in tal modo vengono rimossi gli unici riferimenti a vtable associati alla classe e, pertanto, il linker la rimuoverà. L'utilizzo di questa forma di **__declspec** può comportare una riduzione significativa della dimensione del codice.

Se si tenta di creare un'istanza di una classe contrassegnata con **novtable** e quindi di accedere a un membro della classe, si riceverà una violazione di accesso (AV).

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

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)

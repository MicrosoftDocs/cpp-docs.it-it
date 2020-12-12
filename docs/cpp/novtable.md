---
description: 'Altre informazioni su: novtable'
title: novtable
ms.date: 11/04/2016
f1_keywords:
- novtable_cpp
helpviewer_keywords:
- novtable __declspec keyword
- __declspec keyword [C++], novtable
ms.assetid: cfef09c5-8c1e-4b14-8a72-7d726ded4484
ms.openlocfilehash: 2c818d07603e294f760b768861ce7e7a3e02894b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97146198"
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

## <a name="see-also"></a>Vedi anche

[`__declspec`](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)

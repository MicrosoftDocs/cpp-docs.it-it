---
title: Avviso del compilatore (livello 3) C4373
ms.date: 11/04/2016
f1_keywords:
- C4373
helpviewer_keywords:
- C4373
ms.assetid: 670c0ba3-b7d6-4aed-b207-1cb84da3bcde
ms.openlocfilehash: 031b32a03d93a51f6fa00041a5b0bdf99e6eacf1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50456056"
---
# <a name="compiler-warning-level-3-c4373"></a>Avviso del compilatore (livello 3) C4373

> «*funzione*': degli funzione virtuale esegue l'override*funzione_base*', le versioni precedenti del compilatore non hanno eseguito l'override quando i parametri si differenziavano solo per i qualificatori const/volatile

## <a name="remarks"></a>Note

L'applicazione contiene un metodo in una classe derivata che esegue l'override di un metodo virtuale in una classe base ed i parametri nel metodo di overriding differiscono per un solo qualificatore [const](../../cpp/const-cpp.md) o [volatile](../../cpp/volatile-cpp.md) rispetto ai parametri del metodo virtuale. Questo significa che il compilatore deve associare un riferimento della funzione al metodo nella base o classe derivata.

Versioni del compilatore prima di Visual Studio 2008 associano la funzione al metodo nella classe di base, quindi inviare un messaggio di avviso. Le versioni successive del compilatore ignorano il `const` oppure `volatile` qualificatore, associano la funzione al metodo nella classe derivata, generano quindi l'avviso **C4373**. Questo secondo comportamento è conforme allo standard C++.

## <a name="example"></a>Esempio

L'esempio di codice seguente genera l'avviso C4373. Per risolvere questo problema, è possibile creare l'override di usare la stessa elementi CV-Qualifier come la funzione membro di base, o se non si desidera creare una sostituzione, è possibile assegnare la funzione nella classe derivata un nome diverso.

```cpp
// c4373.cpp
// compile with: /c /W3
#include <stdio.h>
struct Base
{
    virtual void f(int i) {
        printf("base\n");
    }
};

struct Derived : Base
{
    void f(const int i) {  // C4373
        printf("derived\n");
    }
};

void main()
{
    Derived d;
    Base* p = &d;
    p->f(1);
}
```

```Output
derived
```
---
title: Avviso del compilatore (livello 3) C4373
ms.date: 11/04/2016
f1_keywords:
- C4373
helpviewer_keywords:
- C4373
ms.assetid: 670c0ba3-b7d6-4aed-b207-1cb84da3bcde
ms.openlocfilehash: b3ab8a0c5d826aa44eee3fea53908091ef0c6803
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225319"
---
# <a name="compiler-warning-level-3-c4373"></a>Avviso del compilatore (livello 3) C4373

> '*Function*': la funzione virtuale esegue l'override di '*base_function*', le versioni precedenti del compilatore non hanno eseguito l'override se i parametri si differenziavano solo per i qualificatori const/volatile

## <a name="remarks"></a>Osservazioni

L'applicazione contiene un metodo in una classe derivata che esegue l'override di un metodo virtuale in una classe base ed i parametri nel metodo di overriding differiscono per un solo qualificatore [const](../../cpp/const-cpp.md) o [volatile](../../cpp/volatile-cpp.md) rispetto ai parametri del metodo virtuale. Questo significa che il compilatore deve associare un riferimento della funzione al metodo nella base o classe derivata.

Le versioni del compilatore precedenti a Visual Studio 2008 associano la funzione al metodo nella classe di base, quindi inviano un messaggio di avviso. Le versioni successive del compilatore ignorano **`const`** il **`volatile`** qualificatore o, associano la funzione al metodo nella classe derivata, quindi inviano un avviso **C4373**. Questo secondo comportamento è conforme allo standard C++.

## <a name="example"></a>Esempio

L'esempio di codice seguente genera l'avviso C4373. Per risolvere questo problema, è possibile fare in modo che l'override usi gli stessi qualificatori CV della funzione membro di base o, se non si intende creare una sostituzione, è possibile assegnare alla funzione nella classe derivata un nome diverso.

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

int main()
{
    Derived d;
    Base* p = &d;
    p->f(1);
}
```

```Output
derived
```

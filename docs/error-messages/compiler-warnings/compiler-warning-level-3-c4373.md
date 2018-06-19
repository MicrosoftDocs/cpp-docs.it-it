---
title: Compilatore (livello 3) avviso C4373 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4373
dev_langs:
- C++
helpviewer_keywords:
- C4373
ms.assetid: 670c0ba3-b7d6-4aed-b207-1cb84da3bcde
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fda965fe80fc26731cde7be5a71540e6454a7360
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33290179"
---
# <a name="compiler-warning-level-3-c4373"></a>Avviso del compilatore (livello 3) C4373

> '*funzione*': degli funzione virtuale esegue l'override*funzione_base*', le versioni precedenti del compilatore non ha eseguito l'override quando i parametri si differenziavano solo per i qualificatori const/volatile

## <a name="remarks"></a>Note

L'applicazione contiene un metodo in una classe derivata che esegue l'override di un metodo virtuale in una classe base ed i parametri nel metodo di overriding differiscono per un solo qualificatore [const](../../cpp/const-cpp.md) o [volatile](../../cpp/volatile-cpp.md) rispetto ai parametri del metodo virtuale. Questo significa che il compilatore deve associare un riferimento della funzione al metodo nella base o classe derivata.

Versioni del compilatore prima di Visual Studio 2008 associano la funzione al metodo nella classe base, quindi inviare un messaggio di avviso. Le versioni successive del compilatore ignorano il `const` oppure `volatile` qualificatore, associano la funzione al metodo nella classe derivata, quindi l'avviso **C4373**. Questo secondo comportamento è conforme allo standard C++.

## <a name="example"></a>Esempio

L'esempio di codice seguente genera l'avviso C4373. Per risolvere questo problema, è possibile effettuare la sostituzione utilizzare i qualificatori CV stesso come la funzione membro di base o se non si desidera creare una sostituzione, è possibile fornire la funzione nella classe derivata un nome diverso.

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
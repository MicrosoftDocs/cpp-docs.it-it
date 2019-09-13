---
title: Avviso del compilatore (livello 1) C4305
ms.date: 01/17/2018
f1_keywords:
- C4305
helpviewer_keywords:
- C4305
ms.openlocfilehash: dc718e5f7ebe9478ed1bf2a7323db940935cb1d6
ms.sourcegitcommit: effb516760c0f956c6308eeded48851accc96b92
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70926112"
---
# <a name="compiler-warning-level-1-c4305"></a>Avviso del compilatore (livello 1) C4305

> '*context*': troncamento da'*tipo1*' a'*tipo2*'

## <a name="remarks"></a>Note

Questo avviso viene generato quando un valore viene convertito in un tipo più piccolo in un'inizializzazione o come argomento del costruttore, causando una perdita di informazioni.

## <a name="example"></a>Esempio

Questo esempio mostra due modi in cui è possibile visualizzare questo avviso:

```cpp
// C4305.cpp
// Compile by using: cl /EHsc /W4 C4305.cpp

struct item
{
    item(float) {}
};

int main()
{
    float f = 2.71828;          // C4305 'initializing'
    item i(3.14159);            // C4305 'argument'
    return static_cast<int>(f);
}
```

Per risolvere il problema, inizializzare utilizzando un valore del tipo corretto oppure utilizzare un cast esplicito al tipo corretto. Usare, ad esempio, un valore letterale **float** , ad esempio 2.71828 f anziché un valore **Double** (il tipo predefinito per i valori letterali a virgola mobile) per inizializzare una variabile **float** oppure passare a un costruttore che accetta un argomento **float** .

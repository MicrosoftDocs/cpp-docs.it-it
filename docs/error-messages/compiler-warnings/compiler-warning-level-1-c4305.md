---
title: Avviso del compilatore (livello 1) C4305
ms.date: 01/17/2018
f1_keywords:
- C4305
helpviewer_keywords:
- C4305
ms.openlocfilehash: 567442bc48487e4f7d1f905f871d15f913646e87
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233288"
---
# <a name="compiler-warning-level-1-c4305"></a>Avviso del compilatore (livello 1) C4305

> '*context*': troncamento da'*tipo1*' a'*tipo2*'

## <a name="remarks"></a>Osservazioni

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

Per risolvere il problema, inizializzare utilizzando un valore del tipo corretto oppure utilizzare un cast esplicito al tipo corretto. Usare, ad esempio, un **`float`** valore letterale come 2.71828 f anziché **`double`** (il tipo predefinito per i valori letterali a virgola mobile) per inizializzare una **`float`** variabile o passare a un costruttore che accetta un **`float`** argomento.

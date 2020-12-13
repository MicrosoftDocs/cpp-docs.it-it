---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4305'
title: Avviso del compilatore (livello 1) C4305
ms.date: 01/17/2018
f1_keywords:
- C4305
helpviewer_keywords:
- C4305
ms.openlocfilehash: a6cee5be3b5929c0fbf487a8c40d37e269e6a994
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340086"
---
# <a name="compiler-warning-level-1-c4305"></a>Avviso del compilatore (livello 1) C4305

> '*context*': troncamento da'*tipo1*' a'*tipo2*'

## <a name="remarks"></a>Commenti

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

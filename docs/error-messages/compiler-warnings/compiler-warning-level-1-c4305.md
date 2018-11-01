---
title: Avviso del compilatore (livello 1) C4305
ms.date: 1/17/2018
f1_keywords:
- C4305
helpviewer_keywords:
- C4305
ms.openlocfilehash: 3f9116b0e7bdd9ee13c42b48f44da4b090f41ccd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50649124"
---
# <a name="compiler-warning-level-1-c4305"></a>Avviso del compilatore (livello 1) C4305

> «*contesto*': troncamento da '*type1*'a'*type2*»

## <a name="remarks"></a>Note

Questo avviso viene generato quando un valore viene convertito in un tipo più piccolo in un'inizializzazione o come argomento del costruttore, causando una perdita di informazioni.

## <a name="example"></a>Esempio

Questo esempio illustra due modi, si potrebbe essere visualizzato questo avviso:

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

Per risolvere questo problema, inizializzare usando un valore del tipo corretto o usare un cast esplicito al tipo corretto. Ad esempio, usare una **float** letterale, ad esempio 2.71828f invece di un **double** (tipo predefinito per i valori letterali a virgola mobile) per inizializzare un **float** variabile, o per passare a un costruttore che accetta un **float** argomento.

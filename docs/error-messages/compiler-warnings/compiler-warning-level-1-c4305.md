---
title: Compilatore avviso (livello 1) C4305 | Microsoft Docs
ms.custom: ''
ms.date: 1/17/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4305
dev_langs:
- C++
helpviewer_keywords:
- C4305
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 88ae0fb38b7e6af14525906e90486a68ce22ee56
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46086824"
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

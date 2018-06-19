---
title: Compilatore avviso (livello 1) C4305 | Documenti Microsoft
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
ms.openlocfilehash: 7694c511f57b6907227d62f969b61218f836cb14
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33277823"
---
# <a name="compiler-warning-level-1-c4305"></a>Avviso del compilatore (livello 1) C4305

> '*contesto*': troncamento da '*type1*'a'*type2*'  

## <a name="remarks"></a>Note

Questo avviso viene generato quando un valore viene convertito in un tipo più piccolo in un'inizializzazione o come un argomento del costruttore, pertanto una perdita di informazioni.

## <a name="example"></a>Esempio

Questo esempio viene illustrato che appare questo messaggio di avviso in due modi:

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

Per risolvere questo problema, inizializzare usando un valore del tipo corretto oppure utilizzare un cast esplicito al tipo corretto. Ad esempio, utilizzare un **float** letterale, ad esempio 2.71828f anziché un **doppie** (tipo predefinito per i valori letterali a virgola mobile) per inizializzare un **float** variabile, o per passare a un costruttore che accetta un **float** argomento.

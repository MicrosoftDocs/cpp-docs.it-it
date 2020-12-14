---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4627'
title: Avviso del compilatore (livello 1) C4627
ms.date: 09/09/2018
f1_keywords:
- C4627
helpviewer_keywords:
- C4627
ms.assetid: 8840f3e6-b496-423a-8635-eb55d5f854a2
ms.openlocfilehash: fc4c6c3931775b090dfd4c7c2fd5fd97441d40d3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97281444"
---
# <a name="compiler-warning-level-1-c4627"></a>Avviso del compilatore (livello 1) C4627

> '*HEADER_FILE*': ignorato durante la ricerca dell'utilizzo di intestazioni precompilate

Se per il file di origine corrente è impostata l'opzione [/Yu \( Usa il file di intestazione precompilata](../../build/reference/yu-use-precompiled-header-file.md) , il compilatore ignora tutti gli elementi del file prima che venga inclusa l'intestazione precompilata. Se *HEADER_FILE* viene incluso prima del file di intestazione precompilata, viene generato un avviso **C4627** in Visual Studio 2015 e versioni precedenti, se l'intestazione precompilata non include anche *HEADER_FILE*.

## <a name="example"></a>Esempio

In questo esempio viene illustrato come può verificarsi l'errore e viene illustrato come risolverlo:

```cpp
// c4627.cpp
#include <iostream>       // C4627 - iostream not included by pch.h
#include "pch.h"          // precompiled header file that does not include iostream
// #include <iostream>    // To fix, move the iostream header include here from above
int main()
{
    std::cout << "std::cout is defined!\n";
}
```

## <a name="see-also"></a>Vedi anche

[Creazione di file di intestazione precompilata](../../build/creating-precompiled-header-files.md)

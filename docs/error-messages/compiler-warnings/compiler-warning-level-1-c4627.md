---
title: Compilatore avviso (livello 1) C4627 | Microsoft Docs
ms.custom: ''
ms.date: 09/09/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4627
dev_langs:
- C++
helpviewer_keywords:
- C4627
ms.assetid: 8840f3e6-b496-423a-8635-eb55d5f854a2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fef8d0ab55205d2377fc52049c40a1c50151b93e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46024177"
---
# <a name="compiler-warning-level-1-c4627"></a>Avviso del compilatore (livello 1) C4627

> «*header_file*': ignorato durante la ricerca utilizzo di intestazione precompilata

Se il file di origine corrente ha il [/Yu \(utilizzare file di intestazione precompilato)](../../build/reference/yu-use-precompiled-header-file.md) opzione set, il compilatore ignora tutti gli elementi nel file prima che l'intestazione precompilata è incluso. Avviso **C4627** se viene generato in Visual Studio 2015 e versioni precedenti *header_file* prima il file di intestazione precompilata, e se l'intestazione precompilata non include inoltre *header_file*.

## <a name="example"></a>Esempio

Questo esempio viene illustrato come può verificarsi l'errore e Mostra come risolverlo:

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

## <a name="see-also"></a>Vedere anche

[Creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md)

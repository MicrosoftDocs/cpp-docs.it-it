---
title: Istruzione return in chiusura del programma (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- data types [C++], function return types
- function return types [C++], return statement
- return keyword [C++], syntax
ms.assetid: 66d002ab-5625-4b68-8446-71e1b8fcdbd8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cfcf65258767178c0f74f63ca6e938e1d940e3be
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46061136"
---
# <a name="return-statement-in-program-termination-c"></a>Istruzione return in chiusura del programma (C++)

Emissione di un **restituire** istruzione dal `main` è funzionalmente equivalente alla chiamata di `exit` (funzione). Si consideri l'esempio seguente:

```cpp
// return_statement.cpp
#include <stdlib.h>
int main()
{
    exit( 3 );
    return 3;
}
```

Il `exit` e **restituire** le istruzioni nell'esempio precedente sono funzionalmente identiche. Tuttavia, il linguaggio C++ richiede che le funzioni che hanno tipi restituiranno diversi da **void** restituiscono un valore. Il **restituire** istruzione consente di restituire un valore da `main`.

## <a name="see-also"></a>Vedere anche

[Chiusura del programma](../cpp/program-termination.md)
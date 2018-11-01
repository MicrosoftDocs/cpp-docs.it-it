---
title: Istruzione return in chiusura del programma (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- data types [C++], function return types
- function return types [C++], return statement
- return keyword [C++], syntax
ms.assetid: 66d002ab-5625-4b68-8446-71e1b8fcdbd8
ms.openlocfilehash: 9c7b6130ee1a0b49ab75a70d84764d3a1f8c5ef0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50613044"
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
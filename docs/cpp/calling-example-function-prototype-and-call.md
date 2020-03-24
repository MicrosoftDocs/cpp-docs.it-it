---
title: Esempio di chiamata - Prototipo e chiamata di funzione
ms.date: 11/04/2016
helpviewer_keywords:
- calling conventions, examples [C++]
- examples [C++], calling conventions
ms.assetid: e4275d1f-df2e-4bfc-a162-eb43ec69554a
ms.openlocfilehash: c41d7679be8b7faa3c8df1368d14815a1b840284
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80190170"
---
# <a name="calling-example-function-prototype-and-call"></a>Esempio di chiamata - Prototipo e chiamata di funzione

**Sezione specifica Microsoft**

Nell'esempio seguente vengono illustrati i risultati dell'effettuare una chiamata di funzione utilizzando varie convenzioni di chiamata.

Questo esempio è basato sulla seguente struttura di funzione. Sostituire `calltype` con la convenzione di chiamata appropriata.

```cpp
void    calltype MyFunc( char c, short s, int i, double f );
.
.
.
void    MyFunc( char c, short s, int i, double f )
    {
    .
    .
    .
    }
.
.
.
MyFunc ('x', 12, 8192, 2.7183);
```

Per ulteriori informazioni, vedere [results of calling example](../cpp/results-of-calling-example.md).

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Convenzioni di chiamata](../cpp/calling-conventions.md)

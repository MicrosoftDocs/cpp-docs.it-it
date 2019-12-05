---
title: Esempio di chiamata - Prototipo e chiamata di funzione
ms.date: 11/04/2016
helpviewer_keywords:
- calling conventions, examples [C++]
- examples [C++], calling conventions
ms.assetid: e4275d1f-df2e-4bfc-a162-eb43ec69554a
ms.openlocfilehash: cbe9ee16db502c9e27dcbd74da4ef6a85f00960f
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857632"
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
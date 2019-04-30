---
title: 'Esempio di chiamata: Chiamata e prototipo di funzione'
ms.date: 11/04/2016
helpviewer_keywords:
- calling conventions, examples [C++]
- examples [C++], calling conventions
ms.assetid: e4275d1f-df2e-4bfc-a162-eb43ec69554a
ms.openlocfilehash: f89f4f1917810baa585dd1661428e0809b93cca0
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64345116"
---
# <a name="calling-example-function-prototype-and-call"></a>Esempio di chiamata: Chiamata e prototipo di funzione

## <a name="microsoft-specific"></a>Sezione specifica Microsoft

Nell'esempio seguente vengono illustrati i risultati dell'effettuare una chiamata di funzione utilizzando varie convenzioni di chiamata.

Questo esempio è basato sulla seguente struttura di funzione. Sostituire `calltype` con la convenzione di chiamata appropriata.

```
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

Per altre informazioni, vedere [risultati della chiamata di esempio](../cpp/results-of-calling-example.md).

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Convenzioni di chiamata](../cpp/calling-conventions.md)
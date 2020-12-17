---
description: Per ulteriori informazioni su come specificare informazioni aggiuntive sul codice, utilizzare _Analysis_assume_.
title: Usare _Analysis_assume_ per gli hint di analisi del codice
ms.date: 12/16/2020
ms.topic: conceptual
f1_keywords:
- _Analysis_assume_
helpviewer_keywords:
- _Analysis_assume_
ms.openlocfilehash: f4244a896d4334cb6c5e857e63b39be0cd53b08b
ms.sourcegitcommit: 387ce22a3b0137f99cbb856a772b5a910c9eba99
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/17/2020
ms.locfileid: "97645124"
---
# <a name="how-to-specify-additional-code-information-by-using-_analysis_assume_"></a>Come specificare informazioni aggiuntive sul codice usando `_Analysis_assume_`

È possibile fornire suggerimenti allo strumento di analisi del codice per il codice C/C++ che consente il processo di analisi e la riduzione degli avvisi. Per fornire informazioni aggiuntive, usare la macro di funzione seguente:

`_Analysis_assume( expr )`

*`expr`* -qualsiasi espressione che si presuppone restituisca true.

Lo strumento di analisi del codice presuppone che la condizione rappresentata dall'espressione *`expr`* sia true nel punto in cui la funzione viene visualizzata. E rimane true fino a quando non *`expr`* viene modificato, ad esempio, per assegnazione a una variabile.

> [!NOTE]
> `_Analysis_assume_` non influisca sull'ottimizzazione del codice. Al di fuori dello strumento di analisi del codice, `_Analysis_assume_` viene definito come un no-op.

## <a name="example"></a>Esempio

Il codice seguente usa `_Analysis_assume_` per correggere l'avviso di analisi del codice [C6388](../code-quality/c6388.md):

```cpp
#include <windows.h>
#include <codeanalysis\sourceannotations.h>

using namespace vc_attributes;

//requires pc to be null
void f([Pre(Null=Yes)] char* pc);

// calls free and sets ch to null
void FreeAndNull(char** ch);

void test()
{
    char pc = (char)malloc(5);
    FreeAndNull(&pc);
    _Analysis_assume_(pc == NULL);
    f(pc);
}
```

## <a name="see-also"></a>Vedere anche

- [__assume](../intrinsics/assume.md)

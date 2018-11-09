---
title: Conversioni di chiamata di funzione
ms.date: 11/04/2016
helpviewer_keywords:
- function calls, converting
- function calls, argument type conversions
- functions [C], argument conversions
ms.assetid: 04ea0f81-509a-4913-8b12-0937a81babcf
ms.openlocfilehash: 9fdc9ef467980a079198ca06360766d84a85923f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50441145"
---
# <a name="function-call-conversions"></a>Conversioni di chiamata di funzione

Il tipo di conversione eseguita sugli argomenti in una chiamata di funzione dipende dalla presenza di prototipo di funzione (dichiarazione con prototipo) con i tipi di argomento dichiarati per la funzione chiamata.

Se un prototipo di funzione è presente e include tipi di argomento dichiarati, il compilatore esegue il controllo dei tipi (vedere [Funzioni](../c-language/functions-c.md)).

Se non è presente alcun prototipo di funzione presente, sugli argomenti nella chiamata di funzione vengono eseguite solo le conversioni aritmetiche consuete. Queste conversioni vengono eseguite in modo indipendente su ciascun argomento nella chiamata. Ciò significa che un valore **float** viene convertito in un valore **double**, un valore `char` o **short** viene convertito in un valore `int` mentre un valore `unsigned char` o **unsigned short** viene convertito in un valore `unsigned int`.

## <a name="see-also"></a>Vedere anche

[Conversioni di tipi](../c-language/type-conversions-c.md)
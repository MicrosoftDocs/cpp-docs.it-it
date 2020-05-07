---
title: Conversioni di chiamata di funzione
ms.date: 11/04/2016
helpviewer_keywords:
- function calls, converting
- function calls, argument type conversions
- functions [C], argument conversions
ms.assetid: 04ea0f81-509a-4913-8b12-0937a81babcf
ms.openlocfilehash: d9f205bbbbac353b57743f8e1211b20fa3d32f05
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62233222"
---
# <a name="function-call-conversions"></a>Conversioni di chiamata di funzione

Il tipo di conversione eseguita sugli argomenti in una chiamata di funzione dipende dalla presenza di prototipo di funzione (dichiarazione con prototipo) con i tipi di argomento dichiarati per la funzione chiamata.

Se un prototipo di funzione è presente e include tipi di argomento dichiarati, il compilatore esegue il controllo dei tipi (vedere [Funzioni](../c-language/functions-c.md)).

Se non è presente alcun prototipo di funzione presente, sugli argomenti nella chiamata di funzione vengono eseguite solo le conversioni aritmetiche consuete. Queste conversioni vengono eseguite in modo indipendente su ciascun argomento nella chiamata. Ciò significa che un valore **float** viene convertito in un valore **double**, un valore `char` o **short** viene convertito in un valore `int` mentre un valore `unsigned char` o **unsigned short** viene convertito in un valore `unsigned int`.

## <a name="see-also"></a>Vedere anche

[Conversione di tipi](../c-language/type-conversions-c.md)

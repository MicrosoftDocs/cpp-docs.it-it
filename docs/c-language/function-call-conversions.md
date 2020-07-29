---
title: Conversioni di chiamata di funzione
ms.date: 11/04/2016
helpviewer_keywords:
- function calls, converting
- function calls, argument type conversions
- functions [C], argument conversions
ms.assetid: 04ea0f81-509a-4913-8b12-0937a81babcf
ms.openlocfilehash: e4e84c9d4e1f25a56c0bcabcec99e5e75fcaa321
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229675"
---
# <a name="function-call-conversions"></a>Conversioni di chiamata di funzione

Il tipo di conversione eseguita sugli argomenti in una chiamata di funzione dipende dalla presenza di prototipo di funzione (dichiarazione con prototipo) con i tipi di argomento dichiarati per la funzione chiamata.

Se un prototipo di funzione è presente e include tipi di argomento dichiarati, il compilatore esegue il controllo dei tipi (vedere [Funzioni](../c-language/functions-c.md)).

Se non è presente alcun prototipo di funzione presente, sugli argomenti nella chiamata di funzione vengono eseguite solo le conversioni aritmetiche consuete. Queste conversioni vengono eseguite in modo indipendente su ciascun argomento nella chiamata. Ciò significa che un **`float`** valore viene convertito in un oggetto **`double`** , **`char`** un **`short`** valore o viene convertito in un oggetto **`int`** e un oggetto **`unsigned char`** o **`unsigned short`** viene convertito in un oggetto **`unsigned int`** .

## <a name="see-also"></a>Vedere anche

[Conversioni di tipi](../c-language/type-conversions-c.md)

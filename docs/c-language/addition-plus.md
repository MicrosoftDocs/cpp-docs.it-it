---
title: Addizione (+)
ms.date: 11/04/2016
helpviewer_keywords:
- pointers, adding integers
ms.assetid: b9014fee-825d-46ef-91db-5d46807081fc
ms.openlocfilehash: 8938042b373e062e99951faa752d78632d9201bd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50499775"
---
# <a name="addition-"></a>Addizione (+)

L'operatore di addizione (**+**) determina l'addizione dei due operandi. Entrambi gli operandi possono essere sia tipi integrali che a virgola mobile, oppure un operando può essere un puntatore e l'altro un Integer.

Quando un Integer viene aggiunto a un puntatore, l'Integer (*i*) viene convertito moltiplicandolo per la dimensione del valore a cui fa riferimento il puntatore. Dopo la conversione, il valore intero rappresenta le posizioni di memoria *i*, dove ogni posizione ha la lunghezza specificata dal tipo di puntatore. Quando l'Integer convertito viene aggiunto al valore del puntatore, il risultato è un nuovo valore del puntatore che rappresenta i percorsi dell'indirizzo *i* rispetto all'indirizzo originale. Il nuovo valore del puntatore fa riferimento a un valore dello stesso tipo del valore del puntatore originale e pertanto equivale all'indicizzazione di matrice (vedere [Matrici unidimensionali](../c-language/one-dimensional-arrays.md) e [Matrici multidimensionali](../c-language/multidimensional-arrays-c.md)). Se il puntatore della somma punta al di fuori della matrice, tranne che alla prima posizione oltre la parte superiore, il risultato sarà indefinito. Per altre informazioni, vedere [Puntatore aritmetico](../c-language/pointer-arithmetic.md).

## <a name="see-also"></a>Vedere anche

[Operatori di addizione C](../c-language/c-additive-operators.md)
---
title: Sottrazione (-)
ms.date: 11/04/2016
helpviewer_keywords:
- operators [C], subtraction
- subtraction operator, syntax
ms.assetid: 9cacba7d-20b3-4372-8a63-ba5d8ee64177
ms.openlocfilehash: 369096025a67c67775584928d1ee3264a5a10d94
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50480054"
---
# <a name="subtraction--"></a>Sottrazione (-)

L’operatore di sottrazione (**-**) sottrae il secondo operando dal primo. Entrambi gli operandi possono essere sia tipi integrali che a virgola mobile, oppure un operando può essere un puntatore e l'altro un Integer.

Quando vengono sottratti due puntatori, la differenza viene convertita in un valore integrale con segno, dividendo la differenza per la dimensione di un valore del tipo a cui sono indirizzati i puntatori. La dimensione del valore integrale viene definita dal tipo **ptrdiff_t** nel file di inclusione standard STDDEF.H. Il risultato rappresenta il numero di posizioni di memoria di tale tipo presenti tra i due indirizzi. Solo nel caso di due elementi della stessa matrice, si può essere certi che il risultato sia significativo, come illustrato in [Puntatore aritmetico](../c-language/pointer-arithmetic.md).

Quando un valore intero viene sottratto da un valore puntatore, l'operatore di sottrazione converte il valore intero (*i*), moltiplicandolo per la dimensione del valore a cui è indirizzato il puntatore. Dopo la conversione, il valore intero rappresenta le posizioni di memoria *i*, dove ogni posizione ha la lunghezza specificata dal tipo di puntatore. Quando il valore intero convertito viene sottratto dal valore puntatore, il risultato corrisponde ai percorsi dell'indirizzo di memoria *i* precedenti all'indirizzo originale. Il nuovo puntatore punta a un valore del tipo a cui è indirizzato il valore di puntatore originale.

## <a name="see-also"></a>Vedere anche

[Operatori di addizione C](../c-language/c-additive-operators.md)
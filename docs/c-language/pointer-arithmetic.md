---
title: Puntatore aritmetico
ms.date: 11/04/2016
helpviewer_keywords:
- pointer arithmetic
- arithmetic pointer
ms.assetid: eb924a29-59d3-48a5-9d62-9424790730eb
ms.openlocfilehash: c1b3e31561bedece6a6180fbeb13473153a46ab6
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64343131"
---
# <a name="pointer-arithmetic"></a>Puntatore aritmetico

Le operazioni additive che includono un puntatore e un intero forniscono risultati significativi solo se l'operando del puntatore indirizza un membro della matrice e il valore intero produce un offset all'interno dei limiti della stessa matrice. Quando il valore intero viene convertito in un offset di indirizzo, il compilatore presuppone che solo posizioni di memoria della stessa dimensione si trovino tra l'indirizzo originale e l'indirizzo più l'offset.

Questa ipotesi è valida per membri della matrice. Per definizione, una matrice è una serie di valori dello stesso tipo; i relativi elementi si trovano in posizioni di memoria contigui. Tuttavia, non viene garantito che l'archiviazione per qualsiasi tipo eccetto gli elementi della matrice sia soddisfatta dallo stesso tipo di identificatori. Ovvero spazi vuoti possono apparire tra le posizioni di memoria, persino posizioni dello stesso tipo. Di conseguenza, i risultati dell'aggiunta o della sottrazione da indirizzi di qualsiasi valore eccetto elementi di matrice sono non definiti.

Analogamente, quando due valori di puntatore vengono sottratti, la conversione suppone che solo valori dello stesso tipo, senza spazi vuoti, rientrino tra gli indirizzi forniti dagli operandi.

## <a name="see-also"></a>Vedere anche

[Operatori di addizione C](../c-language/c-additive-operators.md)

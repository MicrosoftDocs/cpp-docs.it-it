---
title: Espressioni costanti C++
ms.date: 11/04/2016
helpviewer_keywords:
- constant expressions, syntax
- constant expressions
- expressions [C++], constant
ms.assetid: b07245a5-4c21-4589-b503-e6ffd631996f
ms.openlocfilehash: 97059066adadc3a7897cbd2c4c747e2a673e7201
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62154672"
---
# <a name="c-constant-expressions"></a>Espressioni costanti C++

Oggetto *costante* valore corrisponde a uno che non cambiano. C++ fornisce due parole chiave per permettere di indicare che un oggetto non deve essere modificato e per applicare tale intento.

Il linguaggio C++ richiede espressioni costanti (espressioni che restituiscono una costante) per le dichiarazioni di:

- Limiti di matrice

- Selettori in istruzioni case

- Specifica di lunghezza del campo di bit

- Inizializzatori di enumerazione

Gli unici operandi che sono validi nelle espressioni costanti sono:

- Valori letterali

- Costanti di enumerazione

- Valori dichiarati come const che vengono inizializzati con espressioni costanti

- **sizeof** espressioni

Le costanti non integrali devono essere convertite (in modo esplicito o implicito) in tipi integrali affinché siano valide in un'espressione costante. Pertanto, il codice seguente è valido:

```cpp
const double Size = 11.0;
char chArray[(int)Size];
```

Le conversioni esplicite in tipi integrali sono valide nelle espressioni costanti; tutti gli altri tipi e i tipi derivati non sono validi tranne quando usati come operandi per il **sizeof** operatore.

L'operatore virgola e gli operatori di assegnazione non possono essere utilizzati nelle espressioni costanti.

## <a name="see-also"></a>Vedere anche

[Tipi di espressioni](../cpp/types-of-expressions.md)
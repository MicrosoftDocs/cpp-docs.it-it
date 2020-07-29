---
title: Espressioni costanti C++
ms.date: 11/04/2016
helpviewer_keywords:
- constant expressions, syntax
- constant expressions
- expressions [C++], constant
ms.assetid: b07245a5-4c21-4589-b503-e6ffd631996f
ms.openlocfilehash: 32d14650450d8047a5bc0e6cf7bb06788c9b3d81
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221757"
---
# <a name="c-constant-expressions"></a>Espressioni costanti C++

Un valore *costante* è un valore che non cambia. C++ fornisce due parole chiave per permettere di indicare che un oggetto non deve essere modificato e per applicare tale intento.

Il linguaggio C++ richiede espressioni costanti (espressioni che restituiscono una costante) per le dichiarazioni di:

- Limiti di matrice

- Selettori in istruzioni case

- Specifica di lunghezza del campo di bit

- Inizializzatori di enumerazione

Gli unici operandi che sono validi nelle espressioni costanti sono:

- Valori letterali

- Costanti di enumerazione

- Valori dichiarati come const che vengono inizializzati con espressioni costanti

- **`sizeof`** espressioni

Le costanti non integrali devono essere convertite (in modo esplicito o implicito) in tipi integrali affinché siano valide in un'espressione costante. Pertanto, il codice seguente è valido:

```cpp
const double Size = 11.0;
char chArray[(int)Size];
```

Le conversioni esplicite in tipi integrali sono valide nelle espressioni costanti; tutti gli altri tipi e i tipi derivati non sono validi tranne quando vengono utilizzati come operandi per l' **`sizeof`** operatore.

L'operatore virgola e gli operatori di assegnazione non possono essere utilizzati nelle espressioni costanti.

## <a name="see-also"></a>Vedere anche

[Tipi di espressioni](../cpp/types-of-expressions.md)

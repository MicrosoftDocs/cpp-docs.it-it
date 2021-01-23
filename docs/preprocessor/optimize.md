---
description: 'Altre informazioni su: ottimizza pragma'
title: ottimizzare pragma
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.optimize
- optimize_CPP
helpviewer_keywords:
- pragma, optimize
- optimize pragma
no-loc:
- pragma
ms.openlocfilehash: d9044788d0eea394867622d0f7aea1e365ad3399
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713454"
---
# <a name="optimize-no-locpragma"></a>`optimize` pragma

Specifica le ottimizzazioni in base alla funzione.

## <a name="syntax"></a>Sintassi

> **`#pragma optimize( "`** [ *ottimizzazione-elenco* ] **`",`** { **`on`** | **`off`** } **`)`**

## <a name="remarks"></a>Osservazioni

Deve trovarsi **`optimize`** pragma all'esterno di una funzione. Viene applicato alla prima funzione definita dopo che è stato pragma rilevato. Gli **`on`** **`off`** argomenti e attivano o disattivano le opzioni specificate nell' *elenco di ottimizzazione* .

L' *elenco di ottimizzazione* può essere costituito da zero o più parametri indicati nella tabella seguente.

### <a name="parameters-of-the-optimize-pragma"></a>Parametri di Pragma optimize

| Parametro/i | Tipo di ottimizzazione |
|--------------------|--------------------------|
| **`g`** | Abilita le ottimizzazioni globali. |
| **`s`** o **`t`** | Specificare sequenze brevi o veloci di codice macchina. |
| **`y`** | Generare i puntatori ai frame nello stack del programma. |

Questi parametri sono le stesse lettere utilizzate con le [`/O`](../build/reference/o-options-optimize-code.md) Opzioni del compilatore. Ad esempio, il codice seguente pragma equivale all' **`/Os`** opzione del compilatore:

```cpp
#pragma optimize( "s", on )
```

L'utilizzo **`optimize`** pragma di con la stringa vuota ( **`""`** ) è un formato speciale della direttiva:

Quando si usa il **`off`** parametro, vengono attivate tutte le ottimizzazioni,,, **`g`** **`s`** **`t`** e **`y`** , disattivate.

Quando si usa il **`on`** parametro, vengono reimpostate le ottimizzazioni per quelle specificate usando l'opzione del [`/O`](../build/reference/o-options-optimize-code.md) compilatore.

```cpp
#pragma optimize( "", off )
/* unoptimized code section */
#pragma optimize( "", on )
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)

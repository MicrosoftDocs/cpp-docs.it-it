---
title: Classe money_base
ms.date: 11/04/2016
f1_keywords:
- xlocmon/std::money_base
helpviewer_keywords:
- money_base class
ms.assetid: 1a303c15-9272-4f26-ae16-dcf43a0fd38a
ms.openlocfilehash: c614832b0cbb1cc23e42ecb3a939ccf1334a5cea
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72689316"
---
# <a name="money_base-class"></a>Classe money_base

La classe descrive un'enumerazione e una struttura comuni a tutte le specializzazioni del modello di classe [moneypunct](../standard-library/moneypunct-class.md).

## <a name="syntax"></a>Sintassi

```cpp
struct pattern
{
   char field[_PATTERN_FIELD_SIZE];
};
```

## <a name="remarks"></a>Note

L'enumerazione `part` descrive i valori possibili negli elementi del campo di matrice nel modello della struttura. I valori di `part` sono:

- `none` per trovare la corrispondenza con zero o più spazi oppure non generare alcun elemento.

- `sign` per trovare la corrispondenza o generare un segno positivo o negativo.

- `space` per trovare la corrispondenza con zero o più spazi o per generare uno spazio.

- `symbol` la corrispondenza o la generazione di un simbolo di valuta.

- `value` la corrispondenza o la generazione di un valore monetario.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

---
description: 'Altre informazioni su: money_base Class'
title: Classe money_base
ms.date: 11/04/2016
f1_keywords:
- xlocmon/std::money_base
helpviewer_keywords:
- money_base class
ms.assetid: 1a303c15-9272-4f26-ae16-dcf43a0fd38a
ms.openlocfilehash: 295984cfed4d6fdd47c772e29765c1484f52d32a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97230471"
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

## <a name="remarks"></a>Osservazioni

L'enumerazione `part` descrive i valori possibili negli elementi del campo di matrice nel modello della struttura. I valori di `part` sono:

- `none` per trovare la corrispondenza con zero o più spazi oppure non generare alcun elemento.

- `sign` per trovare una corrispondenza o generare un segno positivo o negativo.

- `space` per trovare la corrispondenza con zero o più spazi o generare uno spazio.

- `symbol` per trovare una corrispondenza o generare un simbolo di valuta.

- `value` per trovare una corrispondenza o generare un valore monetario.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

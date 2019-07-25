---
title: Classe money_base
ms.date: 11/04/2016
f1_keywords:
- xlocmon/std::money_base
helpviewer_keywords:
- money_base class
ms.assetid: 1a303c15-9272-4f26-ae16-dcf43a0fd38a
ms.openlocfilehash: 5b19635cf4d2cce58ec50226c463a075cfac5b0f
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68455571"
---
# <a name="moneybase-class"></a>Classe money_base

Questa classe descrive un'enumerazione e una struttura comuni a tutte le specializzazioni della classe modello [moneypunct](../standard-library/moneypunct-class.md).

## <a name="syntax"></a>Sintassi

```cpp
struct pattern
{
   char field[_PATTERN_FIELD_SIZE];
};
```

## <a name="remarks"></a>Note

L'enumerazione `part` descrive i valori possibili negli elementi del campo di matrice nel modello della struttura. I valori di `part` sono:

- `none`per trovare la corrispondenza con zero o più spazi oppure non generare alcun elemento.

- `sign`per trovare una corrispondenza o generare un segno positivo o negativo.

- `space`per trovare la corrispondenza con zero o più spazi o generare uno spazio.

- `symbol`per trovare una corrispondenza o generare un simbolo di valuta.

- `value`per trovare una corrispondenza o generare un valore monetario.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

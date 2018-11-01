---
title: Classe money_base
ms.date: 11/04/2016
f1_keywords:
- xlocmon/std::money_base
helpviewer_keywords:
- money_base class
ms.assetid: 1a303c15-9272-4f26-ae16-dcf43a0fd38a
ms.openlocfilehash: b0c77b523dbe31bc5b07ae3d736441880fe04546
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50610446"
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

L'enumerazione `part` descrive i possibili valori negli elementi del campo matrice nel modello di struttura. I valori di `part` sono:

- `none` in base a zero o più spazi o generare nulla.

- `sign` in base a o generare un segno positivo o negativo.

- `space` in base a zero o più spazi o generare uno spazio.

- `symbol` in base a o generare un simbolo di valuta.

- `value` in base a o generare un valore monetario.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>

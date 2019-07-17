---
title: Enumerazioni &lt;limits&gt;
ms.date: 11/04/2016
f1_keywords:
- limits/std::float_denorm_style
- limits/std::float_round_style
ms.assetid: c86680a2-ba97-4ed9-8c20-a448857d7dc5
ms.openlocfilehash: 567e0538f59c40d57f85d652a8919be6e034cf0b
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68245362"
---
# <a name="ltlimitsgt-enums"></a>Enumerazioni &lt;limits&gt;

## <a name="float_denorm_style"></a> float_denorm_style

L'enumerazione descrive i vari metodi che un'implementazione può scegliere per la rappresentazione di un valore a virgola mobile denormalizzato, ovvero troppo piccolo per essere rappresentato come valore normalizzato.

```cpp
enum float_denorm_style {
    denorm_indeterminate = -1,
    denorm_absent = 0,
    denorm_present = 1    };
```

### <a name="return-value"></a>Valore restituito

L'enumerazione restituisce:

- `denorm_indeterminate` Se la presenza o assenza di form denormalizzato non può essere determinato al momento della conversione.

- `denorm_absent` Se non sono presenti form denormalizzati.

- `denorm_present` Se sono presenti form denormalizzati.

### <a name="example"></a>Esempio

Vedere [numeric_limits::has_denorm](../standard-library/numeric-limits-class.md#has_denorm) per un esempio in cui è possibile accedere ai valori di questa enumerazione.

## <a name="float_round_style"></a> float_round_style

L'enumerazione descrive i vari metodi che un'implementazione può scegliere per l'arrotondamento di un valore a virgola mobile in un valore intero.

```cpp
enum float_round_style {
    round_indeterminate = -1,
    round_toward_zero = 0,
    round_to_nearest = 1,
    round_toward_infinity = 2,
    round_toward_neg_infinity = 3    };
```

### <a name="return-value"></a>Valore restituito

L'enumerazione restituisce:

- `round_indeterminate` Se non è possibile determinare il metodo di arrotondamento.

- `round_toward_zero` Se l'arrotondamento verso lo zero.

- `round_to_nearest` Se l'arrotondamento al numero intero più vicino.

- `round_toward_infinity` Se l'arrotondamento si allontana da zero.

- `round_toward_neg_infinity` Se l'arrotondamento al numero intero negativo.

### <a name="example"></a>Esempio

Vedere [numeric_limits::round_style](../standard-library/numeric-limits-class.md#round_style) per un esempio in cui è possibile accedere ai valori di questa enumerazione.

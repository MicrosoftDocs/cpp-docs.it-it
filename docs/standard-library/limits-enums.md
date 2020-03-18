---
title: Enumerazioni &lt;limits&gt;
ms.date: 11/04/2016
f1_keywords:
- limits/std::float_denorm_style
- limits/std::float_round_style
ms.assetid: c86680a2-ba97-4ed9-8c20-a448857d7dc5
ms.openlocfilehash: 567e0538f59c40d57f85d652a8919be6e034cf0b
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79420071"
---
# <a name="ltlimitsgt-enums"></a>Enumerazioni &lt;limits&gt;

## <a name="float_denorm_style"></a>float_denorm_style

L'enumerazione descrive i vari metodi che un'implementazione può scegliere per la rappresentazione di un valore a virgola mobile denormalizzato, ovvero troppo piccolo per essere rappresentato come valore normalizzato.

```cpp
enum float_denorm_style {
    denorm_indeterminate = -1,
    denorm_absent = 0,
    denorm_present = 1    };
```

### <a name="return-value"></a>Valore restituito

L'enumerazione restituisce:

- `denorm_indeterminate` se non è possibile determinare la presenza o l'assenza di form denormalizzati in fase di conversione.

- `denorm_absent` se i moduli denormalizzati sono assenti.

- `denorm_present` se sono presenti form denormalizzati.

### <a name="example"></a>Esempio

Vedere [numeric_limits::has_denorm](../standard-library/numeric-limits-class.md#has_denorm) per un esempio in cui è possibile accedere ai valori di questa enumerazione.

## <a name="float_round_style"></a>float_round_style

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

- `round_indeterminate` se non è possibile determinare il metodo di arrotondamento.

- `round_toward_zero` se il ciclo viene arrotondato verso lo zero.

- `round_to_nearest` se l'arrotondamento al numero intero più vicino.

- `round_toward_infinity` se il round away è zero.

- `round_toward_neg_infinity` se l'arrotondamento a un numero intero negativo.

### <a name="example"></a>Esempio

Vedere [numeric_limits::round_style](../standard-library/numeric-limits-class.md#round_style) per un esempio in cui è possibile accedere ai valori di questa enumerazione.

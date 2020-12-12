---
description: 'Altre informazioni su: &lt; &gt; enumerazioni limits'
title: Enumerazioni &lt;limits&gt;
ms.date: 11/04/2016
f1_keywords:
- limits/std::float_denorm_style
- limits/std::float_round_style
ms.assetid: c86680a2-ba97-4ed9-8c20-a448857d7dc5
ms.openlocfilehash: 115122a4901298018df8809be56a7fc69249d700
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97312865"
---
# <a name="ltlimitsgt-enums"></a>Enumerazioni &lt;limits&gt;

## <a name="float_denorm_style"></a><a name="float_denorm_style"></a> float_denorm_style

L'enumerazione descrive i vari metodi che un'implementazione può scegliere per la rappresentazione di un valore a virgola mobile denormalizzato, ovvero troppo piccolo per essere rappresentato come valore normalizzato.

```cpp
enum float_denorm_style {
    denorm_indeterminate = -1,
    denorm_absent = 0,
    denorm_present = 1    };
```

### <a name="return-value"></a>Valore restituito

L'enumerazione restituisce:

- `denorm_indeterminate` Se non è possibile determinare la presenza o l'assenza di form denormalizzati in fase di conversione.

- `denorm_absent` Se i form denormalizzati sono assenti.

- `denorm_present` Se sono presenti form denormalizzati.

### <a name="example"></a>Esempio

Vedere [numeric_limits::has_denorm](../standard-library/numeric-limits-class.md#has_denorm) per un esempio in cui è possibile accedere ai valori di questa enumerazione.

## <a name="float_round_style"></a><a name="float_round_style"></a> float_round_style

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

- `round_toward_zero` Se il ciclo viene arrotondato verso lo zero.

- `round_to_nearest` Se arrotondato al valore integer più vicino.

- `round_toward_infinity` Se il round away è zero.

- `round_toward_neg_infinity` Se viene arrotondato a un numero intero negativo.

### <a name="example"></a>Esempio

Vedere [numeric_limits::round_style](../standard-library/numeric-limits-class.md#round_style) per un esempio in cui è possibile accedere ai valori di questa enumerazione.

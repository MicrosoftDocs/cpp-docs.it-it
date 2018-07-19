---
title: Enumerazioni &lt;limits&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- limits/std::float_denorm_style
- limits/std::float_round_style
ms.assetid: c86680a2-ba97-4ed9-8c20-a448857d7dc5
ms.openlocfilehash: 5795d146714c6eb00902518347138a98574679a8
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38960648"
---
# <a name="ltlimitsgt-enums"></a>Enumerazioni &lt;limits&gt;

|||
|-|-|
|[float_denorm_style](#float_denorm_style)|[float_round_style](#float_round_style)|

## <a name="float_denorm_style"></a>  Enumerazione float_denorm_style

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

## <a name="float_round_style"></a>  Enumerazione float_round_style

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

## <a name="see-also"></a>Vedere anche

[\<limits>](../standard-library/limits.md)<br/>

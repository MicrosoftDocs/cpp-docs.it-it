---
title: Enumerazione chars_format
ms.date: 07/22/2020
f1_keywords:
- charconv/std::chars_format
helpviewer_keywords:
- std::chars_format
ms.openlocfilehash: 4c1d495c943be02b66d52d1986a783b29a8009c5
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230182"
---
# <a name="chars_format-enum"></a>Enumerazione chars_format

Utilizzato con la [\<charconv>](charconv.md) libreria per specificare il formato a virgola mobile per le conversioni numeriche primitive.

## <a name="syntax"></a>Sintassi

```cpp
enum class chars_format {
    scientific = unspecified,
    fixed = unspecified,
    hex = unspecified,
    general = fixed | scientific
};
```

### <a name="members"></a>Membri

|Elemento|Descrizione|
|-|-|
| `scientific` | Fa `from_chars()` in modo che sia previsto e analizzi un esponente. È simile all' `'e'` `printf()` identificatore di formato, che formatta per la notazione scientifica, ad esempio`"1.729e+01"` |
| `fixed` | `from_chars()`Non prevede né analizza un esponente. È simile all' `'f'` `printf()` identificatore di formato, che formatta per la virgola mobile, ad esempio `"17.29"` .|
| `hex` | Fa in `from_chars()` modo che preveda il numero in formato esadecimale, sebbene senza una "0x". |
| `general` | Fa `from_chars()` in modo che accetti (ma non richiede) un esponente. Per `to_chars()` , è analogo all' `g` identificatore di formato printf (), che passa tra la notazione scientifica o la correzione. Prende in considerazione il risultato dell'esponente, in modo che possa generare un output ragionevolmente compattato. Ad esempio: `1e-5` restituisce `"1e-05"` , ma `1e-4` restituisce `"0.001"` . `1e5`restituisce `100000` , mentre `1e6` restituisce `1e+06` . `1e0`produce `1` .|

## <a name="remarks"></a>Osservazioni

Per le funzioni di [from_chars](charconv-functions.md#from_chars) , questa enumerazione descrive il tipo di input previsto.
Per le funzioni di [to_chars](charconv-functions.md#to_chars) , viene descritto il tipo di output da emettere.

## <a name="see-also"></a>Vedere anche

[\<charconv>](../standard-library/charconv.md)  
[identificatori di formato printf ()](..\c-runtime-library\format-specification-syntax-printf-and-wprintf-functions.md)

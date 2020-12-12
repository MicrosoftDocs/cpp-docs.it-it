---
description: 'Altre informazioni su: chars_format enum'
title: Enum chars_format
ms.date: 08/03/2020
f1_keywords:
- charconv/std::chars_format
helpviewer_keywords:
- std::chars_format
ms.openlocfilehash: af458f96e3e9dbe4db9d1adab1c529403cefcaa6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325181"
---
# <a name="chars_format-enum"></a>Enum chars_format

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

### <a name="members"></a>Members

|Elemento|Descrizione|
|-|-|
| `scientific` | Fa `from_chars()` in modo che sia previsto e analizzi un esponente. È simile all' `printf()` identificatore di formato `'e'` , che formatta per la notazione scientifica, ad esempio `"1.729e+01"` . |
| `fixed` | `from_chars()`Non prevede né analizza un esponente. È simile all' `printf()` identificatore di formato `'f'` , che formatta per la virgola mobile, ad esempio `"17.29"` .|
| `hex` | Fa in `from_chars()` modo che preveda il numero in formato esadecimale, ma senza un carattere di primo livello `0x` . |
| `general` | Fa `from_chars()` in modo che accetti (ma non richiede) un esponente. Per `to_chars()` , è come l' `printf()` identificatore di formato `'g'` , che passa tra la notazione scientifica o la correzione. Prende in considerazione il risultato dell'esponente, in modo che possa generare un output ragionevolmente compattato. Ad esempio: `1e-5` restituisce `"1e-05"` , ma `1e-4` restituisce `"0.001"` . `1e5` restituisce `100000` , mentre `1e6` restituisce `1e+06` . `1e0` produce `1` .|

## <a name="remarks"></a>Commenti

Per le funzioni di [from_chars](charconv-functions.md#from_chars) , questa enumerazione descrive il tipo di input previsto.
Per le funzioni di [to_chars](charconv-functions.md#to_chars) , viene descritto il tipo di output da emettere.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<charconv>

**Spazio dei nomi:** std

/STD: è necessario c++ 17 o versione successiva.

## <a name="see-also"></a>Vedi anche

[\<charconv>](../standard-library/charconv.md)  
[identificatori di formato printf ()](..\c-runtime-library\format-specification-syntax-printf-and-wprintf-functions.md)

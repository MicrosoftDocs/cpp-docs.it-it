---
title: Struct to_chars_result
ms.date: 07/22/2020
f1_keywords:
- charconv/std::to_chars_result
helpviewer_keywords:
- to_chars_result class
- to_chars_result structure
ms.openlocfilehash: 4e46d1cc9d0b6a02d731ad25c2e85c99300d7234
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91509654"
---
# <a name="to_chars_result-struct"></a>Struct to_chars_result

## <a name="syntax"></a>Sintassi

```cpp
struct to_chars_result {
    char* ptr;
    errc ec;
};
```

## <a name="members"></a>Members

|Membro|Descrizione|
|--|--|
|`ptr`| Se `ec` è uguale a `errc{}` , la conversione ha avuto esito positivo e `ptr` è il puntatore One-Past-the-end dei caratteri scritti. In caso contrario, `ptr` ha il valore del `to_chars()` parametro `last` e il contenuto dell'intervallo \[ First, Last) non è specificato.|
|`ec` | Codice di errore di conversione. Per i codici di errore specifici, vedere [`errc`](system-error-enums.md#errc) .|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<charconv>

**Spazio dei nomi:** std

**Opzione del compilatore:** /std: c++ 17 o versione successiva è obbligatorio

## <a name="see-also"></a>Vedere anche

[to_chars](charconv-functions.md#to_chars)

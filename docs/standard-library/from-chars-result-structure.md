---
title: struct from_chars_result
ms.date: 7/23/2020
f1_keywords:
- std::from_chars_result
helpviewer_keywords:
- from_chars_result class
- from_chars_result structure
ms.openlocfilehash: 5a5dcfe6e5b59644e6ebf55d68ce43975e7d3c9d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215764"
---
# <a name="from_chars_result-struct"></a>struct from_chars_result

## <a name="syntax"></a>Sintassi

```cpp
struct from_chars_result {
    const char* ptr;
    errc ec;
};
```

|Membro|Descrizione|
|--|--|
|`ptr`| Se `ec` è uguale a `errc{}` , la conversione ha avuto esito positivo e `ptr` punta al primo carattere che non fa parte del numero riconosciuto. |
|`ec` | Codice di errore di conversione. Per i codici di errore specifici, vedere [`errc`](system-error-enums.md#errc) .|

### <a name="remarks"></a>Osservazioni

Un esempio: l'analisi `"1729cats"` come un numero intero decimale avrà esito positivo e punterà `ptr` a `'c'` che è la prima non cifra ed è anche un passato al termine di `"1729"` .

Se nessun carattere corrisponde a un criterio numerico, `from_chars_result.ptr` punta a `first` e `from_chars_result.ec` è `errc::invalid_argument` .

Se solo alcuni caratteri corrispondono a un criterio di numero, `from_chars_result.ptr` punta al primo carattere che non corrisponde al modello o ha il valore del `last` parametro se tutti i caratteri corrispondono.

Se il valore analizzato non è adatto all'intervallo per il tipo di conversione eseguita, `from_chars_result.ec` è `errc::result_out_of_range` .

## <a name="requirements"></a>Requisiti

**Intestazione:**\<charconv>

**Spazio dei nomi:** std

**Opzione del compilatore:** /std: c++ 17 o versione successiva è obbligatorio

## <a name="see-also"></a>Vedere anche

[from_chars](charconv-functions.md#from_chars)

---
description: 'Altre informazioni su: to_chars_result struct'
title: Struct to_chars_result
ms.date: 07/22/2020
f1_keywords:
- charconv/std::to_chars_result
helpviewer_keywords:
- to_chars_result class
- to_chars_result structure
ms.openlocfilehash: fb043ba928f086549aea326419ec3a2d673723ba
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97167188"
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

## <a name="see-also"></a>Vedi anche

[to_chars](charconv-functions.md#to_chars)

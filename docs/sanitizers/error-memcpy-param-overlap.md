---
title: 'Errore: memcpy-param-sovrapposizione'
description: Esempi di origine e schermate di debug live per gli errori di sovrapposizione dei parametri memcpy.
ms.date: 03/02/2021
f1_keywords:
- memcpy-param-overlap
helpviewer_keywords:
- memcpy-param-overlap error
- AddressSanitizer error memcpy-param-overlap
ms.openlocfilehash: 1df0310ab2abb326cf895a72afbdffa7c239d9da
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470519"
---
# <a name="error-memcpy-param-overlap"></a>Errore: `memcpy-param-overlap`

> Errore di sanificazione Indirizzo: memcpy-param-sovrapposizione

La funzione CRT [`memcpy`](../c-runtime-library/reference/memcpy-wmemcpy.md) **non supporta** la sovrapposizione della memoria. CRT fornisce un'alternativa a `memcpy` che supporta la sovrapposizione della memoria: [`memmove`](../c-runtime-library/reference/memmove-wmemmove.md) .

Un errore comune consiste nel considerare `memmove` come semanticamente equivalente a `memcpy` .

## <a name="example"></a>Esempio

```cpp
// example1.cpp
// memcpy-param-overlap error
#include <string.h>

__declspec(noinline) void bad_function() {
    char buffer[] = "hello";

    memcpy(buffer, buffer + 1, 5); // BOOM!
}

int main(int argc, char **argv) {
    bad_function();
    return 0;
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### <a name="resulting-error"></a>Errore risultante

:::image type="content" source="media/memcpy-param-overlap-example-1.png" alt-text="Screenshot del debugger che Visualizza l'errore memcpy-param-sovrapposizioni nell'esempio 1.":::

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)

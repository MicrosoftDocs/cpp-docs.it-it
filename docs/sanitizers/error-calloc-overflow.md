---
title: 'Errore: calloc-overflow'
description: Esempi di origine e schermate di debug live per errori di overflow calloc.
ms.date: 03/02/2021
f1_keywords:
- calloc-overflow
helpviewer_keywords:
- calloc-overflow error
- AddressSanitizer error calloc-overflow
ms.openlocfilehash: 63af733061d255924f0b0fbd5f54e4d77359c436
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470418"
---
# <a name="error-calloc-overflow"></a>Errore: `calloc-overflow`

> Errore di sanificazione Indirizzo: calloc-overflow

La funzione CRT [`calloc`](../c-runtime-library/reference/calloc.md) Crea una matrice in memoria con gli elementi inizializzati su 0. Gli argomenti possono creare un errore interno che conduce a un puntatore NULL come valore restituito.

## <a name="example"></a>Esempio

```cpp
// example1.cpp
// calloc-overflow error
#include <stdio.h>
#include <stdlib.h>

int number = -1;
int element_size = 1000;

int main() {

    void *p = calloc(number, element_size);      // Boom!

    printf("calloc returned: %zu\n", (size_t)p);

    return 0;
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### <a name="resulting-error"></a>Errore risultante

:::image type="content" source="media/calloc-overflow-example-1.png" alt-text="Screenshot del debugger che Visualizza l'errore di overflow calloc nell'esempio 1.":::

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)

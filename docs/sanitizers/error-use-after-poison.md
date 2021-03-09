---
title: 'Errore: use-after-Poison'
description: Esempi di origine e schermate di debug in tempo reale da usare dopo errori non elaborabili.
ms.date: 03/02/2021
f1_keywords:
- use-after-poison
helpviewer_keywords:
- use-after-poison error
- AddressSanitizer error use-after-poison
ms.openlocfilehash: 0175b79df493dc60c19d78f045ba1829dc0b6b27
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470492"
---
# <a name="error-use-after-poison"></a>Errore: `use-after-poison`

> Errore di sanificazione Indirizzo: uso della memoria non elaborabile

Uno sviluppatore può la memoria non elaborabile manualmente per personalizzare il debug.

## <a name="example"></a>Esempio

```cpp
// example1.cpp
// use-after-poison error
#include <stdlib.h>

extern "C" void __asan_poison_memory_region(void *, size_t);

int main(int argc, char **argv) {
    char *x = new char[16];
    x[10] = 0;
    __asan_poison_memory_region(x, 16);

    int res = x[argc * 10];              // Boom!
 
    delete [] x;
    return res;
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### <a name="resulting-error"></a>Errore risultante

:::image type="content" source="media/use-after-poison-example-1.png" alt-text="Screenshot del debugger che Visualizza l'errore use-after-Poison nell'esempio 1.":::

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)

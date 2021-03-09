---
title: 'Errore: Alloc-Dealloc-non corrispondente'
description: Esempi di origine e schermate di debug live per gli errori di allocazione-Dealloc-mancata corrispondenza.
ms.date: 03/02/2021
f1_keywords:
- alloc-dealloc-mismatch
helpviewer_keywords:
- alloc-dealloc-mismatch error
- AddressSanitizer error alloc-dealloc-mismatch
ms.openlocfilehash: 150809d28631d5d194363e3cb5525163bf7a5e88
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470546"
---
# <a name="error-alloc-dealloc-mismatch"></a>Errore: `alloc-dealloc-mismatch`

> Errore igienizzatore Indirizzo: mancata corrispondenza tra API di allocazione e deallocazione

La `alloc` / `dealloc` funzionalità di mancata corrispondenza in AddressSanitizer è disattivata per impostazione predefinita per Windows. Per abilitarla, eseguire `set ASAN_OPTIONS=alloc_dealloc_mismatch=1` prima di eseguire il programma. Questa variabile di ambiente viene controllata in fase di esecuzione per segnalare gli errori in `malloc` / `delete` , `new` / `free` e `new` / `delete[]` .

## <a name="example"></a>Esempio

```cpp
// example1.cpp
// alloc-dealloc-mismatch error
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    if (argc != 2) return -1;

    switch (atoi(argv[1])) {

    case 1:
        delete[](new int[10]);
        break;
    case 2:
        delete (new int[10]);      // Boom!
        break;
    default:
        printf("arguments: 1: no error 2: runtime error\n");
        return -1;
    }

    return 0;
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example1.cpp /fsanitize=address /Zi
set ASAN_OPTIONS=alloc_dealloc_mismatch=1
devenv /debugexe example1.exe 2
```

### <a name="resulting-error"></a>Errore risultante

:::image type="content" source="media/alloc-dealloc-mismatch-example-1.png" alt-text="Screenshot del debugger che Visualizza l'errore Alloc-Dealloc-mancata corrispondenza nell'esempio 1.":::

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)

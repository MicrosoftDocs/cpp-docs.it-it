---
title: 'Errore: doppio libero'
description: Esempi di origine e schermate di debug in tempo reale per errori double free.
ms.date: 03/02/2021
f1_keywords:
- double-free
helpviewer_keywords:
- double-free error
- AddressSanitizer error double-free
ms.openlocfilehash: 6fb508e581a8c19474311d0406622e6353208433
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470540"
---
# <a name="error-double-free"></a>Errore: `double-free`

> Errore igienizzatore Indirizzo: deallocazione della memoria liberata

In C, è possibile chiamare `free` erroneamente. In C++ è possibile chiamare `delete` più di una volta. In questi esempi vengono illustrati gli errori con `delete` , `free` e `HeapCreate` .

## <a name="example-c---double-operator-delete"></a>Esempio C++-Double `operator delete`

```cpp
// example1.cpp
// double-free error
int main() {

    int *x = new int[42];
    delete [] x;

    // ... some complex body of code

    delete [] x;
    return 0;
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### <a name="resulting-error---double-operator-delete"></a>Errore risultante-Double `operator delete`

:::image type="content" source="media/double-free-example-1.png" alt-text="Screenshot del debugger che Visualizza l'errore double-free nell'esempio 1.":::

## <a name="example-c---double-free"></a>Esempio ' c'-Double `free`

```cpp
// example2.cpp
// double-free error
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {

    char* x = (char*)malloc(10 * sizeof(char));
    memset(x, 0, 10);
    int res = x[argc];
    free(x);

    // ... some complex body of code

    free(x + argc - 1);  // Boom!
    return res;
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example2.cpp /fsanitize=address /Zi
devenv /debugexe example2.exe
```

### <a name="resulting-error---double-free"></a>Errore risultante-Double `free`

:::image type="content" source="media/double-free-example-2.png" alt-text="Screenshot del debugger che Visualizza l'errore doppio libero nell'esempio 2.":::

## <a name="example---windows-heapcreate-double-heapfree"></a>Esempio-Double di Windows `HeapCreate``HeapFree`

```cpp
// example3.cpp
// double-free error
#include <Windows.h>
#include <stdio.h>

int main() {
    void* newHeap = HeapCreate(0, 0, 0);
    void* newAlloc = HeapAlloc(newHeap, 0, 100);

    HeapFree(newHeap, 0, newAlloc);
    HeapFree(newHeap, 0, newAlloc);
    printf("failure\n");
    return 1;
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example3.cpp /fsanitize=address /Zi
devenv /debugexe example3.exe
```

### <a name="resulting-error---windows-heapcreate-double-heapfree"></a>Errore risultante-Double di Windows `HeapCreate``HeapFree`

:::image type="content" source="media/double-free-example-3.png" alt-text="Screenshot del debugger che Visualizza l'errore double-free nell'esempio 3.":::

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)

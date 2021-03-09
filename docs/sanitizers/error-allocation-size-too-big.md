---
title: 'Errore: allocazione-dimensioni-troppo grande'
description: Esempi di origine e schermate di debug in tempo reale per errori di allocazione-dimensioni troppo grandi.
ms.date: 03/02/2021
f1_keywords:
- allocation-size-too-big
helpviewer_keywords:
- allocation-size-too-big error
- AddressSanitizer error allocation-size-too-big
ms.openlocfilehash: 3320064f52a4d41ca556b9525760997f52e1385b
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470453"
---
# <a name="error-allocation-size-too-big"></a>Errore: `allocation-size-too-big`

> Errore igienizzatore Indirizzo: allocazione-dimensioni-troppo grande

Questo esempio mostra l'errore rilevato quando un'allocazione è troppo grande per l'heap. Esempio originato dal [compilatore LLVM-RT test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## <a name="example"></a>Esempio

```cpp
// example1.cpp
// allocation-size-too-big error
#include <stdio.h>
#include <malloc.h>
#include <memory.h>

int x = 1000;
int y = 1000;

__declspec(noinline) void bad_function() {

  char* buffer = (char*)malloc(x * y * x * y); //Boom!

  memcpy(buffer, buffer + 8, 8); 
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

:::image type="content" source="media/allocation-size-too-big-example-1.png" alt-text="Screenshot del debugger che visualizza la dimensione dell'allocazione-errore troppo grande nell'esempio 1.":::

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)

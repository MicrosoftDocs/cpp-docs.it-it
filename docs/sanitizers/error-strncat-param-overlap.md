---
title: 'Errore: strncat-param-sovrapposizione'
description: Esempi di origine e schermate di debug live per gli errori di sovrapposizione dei parametri strcat.
ms.date: 03/02/2021
f1_keywords:
- strncat-param-overlap
helpviewer_keywords:
- strncat-param-overlap error
- AddressSanitizer error strcat-param-overlap
ms.openlocfilehash: 9ae5b6f602d61f26e1c5d3d9eded35d3f587c53e
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470386"
---
# <a name="error-strncat-param-overlap"></a>Errore: `strncat-param-overlap`

> Errore di sanificazione Indirizzo: strncat-param-sovrapposizione

Il codice che sposta la memoria nel buffer sovrapposto può causare errori difficili da diagnosticare.

## <a name="example"></a>Esempio

Questo esempio Mostra come AddressSanitizer può intercettare gli errori causati da parametri sovrapposti alle funzioni CRT.

(Basato su [LLVM-Project/Compiler-RT/test/Asan/testCases/strncat-overlap. cpp](https://github.com/llvm/llvm-project/blob/62ec4ac90738a5f2d209ed28c822223e58aaaeb7/compiler-rt/test/asan/TestCases/strncat-overlap.cpp)).

```cpp
// example1.cpp
// strncat-param-overlap error
#include <string.h>

void bad_function() {
    char buffer[] = "hello\0XXX";
    strncat(buffer, buffer + 1, 3); // BOOM
    return;
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

:::image type="content" source="media/strcat-param-overlap-example-1.png" alt-text="Screenshot del debugger che Visualizza l'errore strncat-param-sovrapposizioni nell'esempio 1.":::

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)

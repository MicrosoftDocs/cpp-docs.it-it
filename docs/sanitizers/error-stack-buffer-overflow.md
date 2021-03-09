---
title: 'Errore: overflow del buffer di stack'
description: Esempi di origine e schermate di debug live per gli errori di overflow del buffer dello stack.
ms.date: 03/02/2021
f1_keywords:
- stack-buffer-overflow
helpviewer_keywords:
- stack-buffer-overflow error
- AddressSanitizer error stack-buffer-overflow
ms.openlocfilehash: 52b4dcf2caad04703b9fa407f0546e94528849c4
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470504"
---
# <a name="error-stack-buffer-overflow"></a>Errore: `stack-buffer-overflow`

> Errore di igienizzazione dell'indirizzo: overflow del buffer dello stack

Un overflow del buffer dello stack può verificarsi in molti modi in C o C++. Sono disponibili diversi esempi per questa categoria di errori che è possibile rilevare con una semplice ricompilazione.

## <a name="example---stack-buffer-overflow"></a>Esempio-overflow del buffer dello stack

```cpp
// example1.cpp
// stack-buffer-overflow error
#include <string.h>

int main(int argc, char **argv) {
    char x[10];
    memset(x, 0, 10);
    int res = x[argc * 10];  // Boom! Classic stack buffer overflow

    return res;
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### <a name="resulting-error"></a>Errore risultante

:::image type="content" source="media/stack-buffer-overflow-example-1.png" alt-text="Screenshot del debugger che Visualizza l'errore di overflow dello stack nel buffer nell'esempio 1.":::

## <a name="example---stack-buffer-math"></a>Esempio-Math buffer dello stack

```cpp
// example2.cpp
// stack-buffer-overflow error
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char **argv) {
    assert(argc >= 2);
    int idx = atoi(argv[1]);
    char AAA[10], BBB[10], CCC[10];
    memset(AAA, 0, sizeof(AAA));
    memset(BBB, 0, sizeof(BBB));
    memset(CCC, 0, sizeof(CCC));
    int res = 0;
    char *p = AAA + idx;
    printf("AAA: %p\ny: %p\nz: %p\np: %p\n", AAA, BBB, CCC, p);

    return *(short*)(p) + BBB[argc % 2] + CCC[argc % 2];  // Boom! ... when argument is 9
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example2.cpp /fsanitize=address /Zi
devenv /debugexe example2.exe 9
```

### <a name="resulting-error---stack-buffer-math"></a>Errore risultante-Math buffer dello stack

:::image type="content" source="media/stack-buffer-overflow-example-2.png" alt-text="Screenshot del debugger che Visualizza l'errore di overflow dello stack nel buffer nell'esempio 2.":::

## <a name="example---improper-down-cast-on-stack"></a>Esempio: non è corretto eseguire il cast nello stack

```cpp
// example3.cpp
// stack-buffer-overflow error
class Parent {
public:
    int field;
};

class Child : public Parent {
public:
    int extra_field;
};

int main(void) {

    Parent p;
    Child *c = (Child*)&p;  // Boom !
    c->extra_field = 42;

    return 0;
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example3.cpp /fsanitize=address /Zi
devenv /debugexe example3.exe
```

### <a name="resulting-error---improper-down-cast-on-stack"></a>Errore risultante-non corretto cast nello stack

:::image type="content" source="media/stack-buffer-overflow-example-3.png" alt-text="Screenshot del debugger che Visualizza l'errore di overflow dello stack nel buffer nell'esempio 3.":::

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)

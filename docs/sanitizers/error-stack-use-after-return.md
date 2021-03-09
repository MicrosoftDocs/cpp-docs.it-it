---
title: 'Errore: stack-use-after-return'
description: Esempi di origine e schermate di debug live per l'uso dello stack dopo la restituzione degli errori.
ms.date: 03/02/2021
f1_keywords:
- stack-use-after-return
helpviewer_keywords:
- stack-use-after-return error
- AddressSanitizer error stack-use-after-return
ms.openlocfilehash: 37d950b0c3b4da880524c0c5825d86d6feec9654
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470495"
---
# <a name="error-stack-use-after-return"></a>Errore: `stack-use-after-return`

> Errore igienizzatore Indirizzo: uso della memoria dello stack dopo la restituzione

Questo controllo richiede la generazione di codice attivata da un'opzione del compilatore aggiuntiva, [`/fsanitize-address-use-after-return`](../build/reference/fsanitize.md) , e impostando la variabile di ambiente `ASAN_OPTIONS=detect_stack_use_after_return=1` .

Questo controllo può rallentare l'applicazione in modo sostanziale. Si consideri il [Riepilogo Clang](https://github.com/google/sanitizers/wiki/AddressSanitizerUseAfterReturn) dell'algoritmo che supporta l'utilizzo dopo la restituzione e i costi di prestazioni maggiori.

> [!IMPORTANT]
> Se si crea un file oggetto utilizzando l'opzione del compilatore aggiuntivo **`/fsanitize-address-use-after-return`** , il codice generato dal compilatore esegue una decisione in fase di esecuzione su come allocare un stack frame. Se la variabile di ambiente `ASAN_OPTIONS` non è impostata su `detect_stack_use_after_return` , il codice è ancora più lento rispetto all'uso [`/fsanitize=address`](../build/reference/fsanitize.md) di. È più lento perché è ancora presente un sovraccarico aggiuntivo da alcuni stack frame che allocano spazio per le parti di un frame usando `alloca()` . È consigliabile eliminare questi file oggetto al termine dell'elaborazione degli errori use-after-return.

## <a name="example---simple-c"></a>Esempio: semplice C

```cpp
// example1.cpp
// stack-use-after-return error
char* x;

void foo() {
    char stack_buffer[42];
    x = &stack_buffer[13];
}

int main() {

    foo();
    *x = 42; // Boom!

    return 0;
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example1.cpp /fsanitize=address /fsanitize-address-use-after-return /Zi
set ASAN_OPTIONS=detect_stack_use_after_return=1
devenv /debugexe example1.exe
```

### <a name="resulting-error---simple-c"></a>Errore risultante-semplice C

:::image type="content" source="media/stack-use-after-return-example-1.png" alt-text="Screenshot del debugger che Visualizza l'errore stack-use-after-return nell'esempio 1.":::

## <a name="example---c-and-templates"></a>Esempio-C++ e modelli

```cpp
// example2.cpp
// stack-use-after-return error
#include <stdlib.h>

enum ReadOrWrite { Read = 0, Write = 1 };

struct S32 {
    char x[32];
};

template<class T>
T* LeakStack() {
    T t[100];
    static volatile T* x;
    x = &t[0];
    return (T*)x;
}

template<class T>
void StackUseAfterReturn(int Idx, ReadOrWrite w) {
    static T sink;
    T* t = LeakStack<T>();
    if (w)
        t[100 + Idx] = T();
    else
        sink = t[100 + Idx];
}

int main(int argc, char* argv[]) {

    if (argc != 2) return 1;
    int kind = atoi(argv[1]);

    switch (kind) {
    case 1: StackUseAfterReturn<char>(0, Read); break;
    case 2: StackUseAfterReturn<S32>(0, Write); break;
    }
    return 0;
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example2.cpp /fsanitize=address /fsanitize-address-use-after-return /Zi
set ASAN_OPTIONS=detect_stack_use_after_return=1
devenv /debugexe example2.exe 1
```

### <a name="resulting-error---c-and-templates"></a>Errore risultante-C++ e modelli

:::image type="content" source="media/stack-use-after-return-example-2.png" alt-text="Screenshot del debugger che Visualizza l'errore stack-use-after-return nell'esempio 2.":::

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)

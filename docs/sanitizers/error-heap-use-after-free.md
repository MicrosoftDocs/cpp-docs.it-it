---
title: 'Errore: heap-use-after-free'
description: Esempi di origine e schermate di debug live per l'uso dell'heap dopo gli errori disponibili.
ms.date: 03/02/2021
f1_keywords:
- heap-use-after-free
helpviewer_keywords:
- heap-use-after-free error
- AddressSanitizer error heap-use-after-free
ms.openlocfilehash: 86e64537d40a86b1867e9ba16781f10b6ea9b417
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470410"
---
# <a name="error-heap-use-after-free"></a>Errore: `heap-use-after-free`

> Errore di sanificazione Indirizzo: uso della memoria deallocata

Vengono illustrati tre esempi in cui l'archiviazione nell'heap può essere allocata tramite `malloc` , `realloc` (C) e `new` (C++), insieme a un uso errato di `volatile` .

## <a name="example---malloc"></a>Ad esempio: `malloc`

```cpp
// example1.cpp
// heap-use-after-free error
#include <stdlib.h>

int main() {
  char *x = (char*)malloc(10 * sizeof(char));
  free(x);

  // ...

  return x[5];   // Boom!
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### <a name="resulting-error"></a>Errore risultante

:::image type="content" source="media/heap-use-after-free-example-1.png" alt-text="Screenshot del debugger che Visualizza l'errore heap-use-after-free nell'esempio 1.":::

## <a name="example---operator-new"></a>Ad esempio: `operator new`

```cpp
// example2.cpp
// heap-use-after-free error
#include <windows.h>

int main() {
  char *buffer = new char[42];
  delete [] buffer;

  // ...

  buffer[0] = 42;  // Boom!
  return 0;
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example2.cpp /fsanitize=address /Zi
devenv /debugexe example2.exe
```

### <a name="resulting-error---operator-new"></a>Errore risultante-operatore New

:::image type="content" source="media/heap-use-after-free-example-2.png" alt-text="Screenshot del debugger che Visualizza l'errore heap-use-after-free nell'esempio 2.":::

## <a name="example---realloc"></a>Ad esempio: `realloc`

```cpp
// example3.cpp
// heap-use-after-free error
#include <malloc.h>

int main() {
  char *buffer = (char*)realloc(0, 42);
  free(buffer);

  // ...

  buffer[0] = 42;  // Boom!
  return 0;
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example3.cpp /fsanitize=address /Zi
devenv /debugexe example3.exe
```

### <a name="resulting-error---realloc"></a>Errore risultante-realloc

:::image type="content" source="media/heap-use-after-free-example-3.png" alt-text="Screenshot del debugger che Visualizza l'errore heap-use-after-free nell'esempio 3.":::

## <a name="example---volatile"></a>Esempio-volatile

```cpp
// example4.cpp
// heap-use-after-free error
#include <stdlib.h>

int main() {

  volatile char *x = (char*)malloc(sizeof(char));
  free((void*)x);

      //...

  *x = 42;        // Boom!
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example4.cpp /fsanitize=address /Zi
devenv /debugexe example4.exe
```

### <a name="resulting-error---volatile"></a>Errore risultante-volatile

:::image type="content" source="media/heap-use-after-free-example-4.png" alt-text="Screenshot del debugger che Visualizza l'errore nell'esempio 4.":::

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)

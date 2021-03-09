---
title: 'Errore: allineamento allocazione non valido'
description: Esempi di origine e schermate di debug live per errori di _aligned_malloc non validi.
ms.date: 03/02/2021
f1_keywords:
- invalid-allocation-alignment
helpviewer_keywords:
- invalid-allocation-alignment error
- AddressSanitizer error invalid-allocation-alignment
ms.openlocfilehash: 99318b068c2908bbe9eee63bef80c5f3f5e37e75
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470398"
---
# <a name="error-invalid-allocation-alignment"></a>Errore: `invalid-allocation-alignment`

> Errore di sanificazione Indirizzo: allocazione-allocazione non valida

[`_aligned_malloc`](../c-runtime-library/reference/aligned-malloc.md)Per esprimere l'allineamento, la funzione richiede una potenza di 2. Viene simulato il calcolo "esterno" di un fattore di allineamento utilizzando una variabile globale non ottimizzata.

## <a name="example"></a>Esempio

```cpp
// example1.cpp
// invalid-allocation-alignment error
#include <Windows.h>

int ExternalAlign = 5;

int main(){

    // this externally calculated alignment of 5 isn't valid.

    void* ptr = _aligned_malloc(8,ExternalAlign); 
    return (ptr == nullptr && errno == EINVAL) ? 0 : -1;
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### <a name="resulting-error"></a>Errore risultante

:::image type="content" source="media/invalid-allocation-alignment-example-1.png" alt-text="Screenshot del debugger che visualizza un errore di allineamento dell'allocazione non valido nell'esempio 1.":::

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)

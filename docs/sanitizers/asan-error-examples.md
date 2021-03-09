---
title: Esempi di errore AddressSanitizer
description: Descrizione di primo livello degli errori ed esempi di AddressSanitizer in Microsoft C/C++.
ms.date: 03/01/2021
helpviewer_keywords:
- ASan error examples
- AddressSanitizer error examples
- Address Sanitizer error examples
- Error examples for AddressSanitizer
ms.openlocfilehash: 6f8036139c48b03fb8300f799fbdf05e5006aa4a
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470612"
---
# <a name="addresssanitizer-error-examples"></a>Esempi di errore AddressSanitizer

In questa sezione viene elencati un subset degli errori supportati da AddressSanitizer in Microsoft C/C++ (MSVC). Questo elenco non è un elenco completo di errori. Ha lo scopo di illustrare diversi tipi di errori che verranno visualizzati in AddressSanitizer. In ogni articolo è stato incluso il codice di esempio con le istruzioni e le schermate di compilazione del debugger in azione. Consentono di imparare a usare le funzionalità di AddressSanitizer supportate da MSVC nel codice. Tutte le schermate sono state generate tramite **`devenv.exe /debugexe example.exe`** . Alcuni di questi esempi sono basati sul codice di esempio nel [gruppo di test del compilatore LLVM-RT](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## <a name="build-the-error-examples"></a>Compilazione degli esempi di errore

Ogni esempio di errore fornisce il codice sorgente e le istruzioni di compilazione per una compilazione da riga di comando. Per compilare ciascun esempio, aprire un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori. Creare una cartella per il progetto di esempio, quindi impostarla come directory corrente. Copiare quindi il codice di esempio in un file di origine con il nome appropriato, ad esempio *`example1.cpp`* . Seguire le istruzioni di compilazione per generare ed eseguire il codice instrumentato nel debugger.

## <a name="errors-with-examples"></a>Errori con esempi

- [Errore `alloc-dealloc-mismatch`](./error-alloc-dealloc-mismatch.md)

- [Errore `allocation-size-too-big`](./error-allocation-size-too-big.md)

- [Errore `calloc-overflow`](./error-calloc-overflow.md)

- [Errore `double-free`](./error-double-free.md)

- [Errore `dynamic-stack-buffer-overflow`](./error-dynamic-stack-buffer-overflow.md)

- [Errore `global-overflow`](./error-global-buffer-overflow.md)

- [Errore `heap-buffer-overflow`](./error-heap-buffer-overflow.md)

- [Errore `heap-use-after-free`](./error-heap-use-after-free.md)

- [Errore `invalid-allocation-alignment`](./error-invalid-allocation-alignment.md)

- [Errore `memcpy-param-overlap`](./error-memcpy-param-overlap.md)

- [Errore `new-delete-type-mismatch`](./error-new-delete-type-mismatch.md)

- [Errore `stack-buffer-overflow`](./error-stack-buffer-overflow.md)

- [Errore `stack-buffer-underflow`](./error-stack-buffer-underflow.md)

- [Errore `stack-use-after-return`](./error-stack-use-after-return.md)

- [Errore `stack-use-after-scope`](./error-stack-use-after-scope.md)

- [Errore `strncat-param-overlap`](./error-strncat-param-overlap.md)

- [Errore `use-after-poison`](./error-use-after-poison.md)

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)

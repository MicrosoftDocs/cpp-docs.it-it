---
title: Problemi noti di AddressSanitizer
description: Descrizione tecnica di AddressSanitizer per i problemi noti di Microsoft C/C++.
ms.date: 03/02/2021
helpviewer_keywords:
- AddressSanitizer known issues
ms.openlocfilehash: 7db8b06a96eababbd6a48e337cff7155f248fb34
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470465"
---
# <a name="addresssanitizer-known-issues"></a>Problemi noti di AddressSanitizer

> [!NOTE]
> Inviare [commenti e suggerimenti sulle informazioni](https://aka.ms/vsfeedback/browsecpp) che si desidera visualizzare nelle versioni future e segnalare i [bug](https://aka.ms/feedback/report?space=62) in caso di problemi.

## <a name="incompatible-options-and-functionality"></a><a name="incompatible-options"></a> Opzioni e funzionalità incompatibili

Queste opzioni e funzionalità non sono compatibili con [`/fsanitize=address`](../build/reference/fsanitize.md) e devono essere disabilitate o evitate.

- Le [`/RTC`](../build/reference/rtc-run-time-error-checks.md) Opzioni non sono compatibili con AddressSanitizer e devono essere disabilitate.
- Il [collegamento incrementale](../build/reference/incremental-link-incrementally.md) non è supportato e deve essere disabilitato.
- La funzionalità [modifica e continuazione](/visualstudio/debugger/edit-and-continue-visual-cpp) non è supportata e deve essere disabilitata.
- Le [coroutine](https://devblogs.microsoft.com/cppblog/category/coroutine/) non sono compatibili con AddressSanitizer e le funzioni ripristinabili sono esenti dalla strumentazione.
- [OpenMP](../build/reference/openmp-enable-openmp-2-0-support.md) non è supportato e deve essere disabilitato.
- Il [linguaggio C++ gestito](../build/reference/clr-common-language-runtime-compilation.md) non è supportato e deve essere disabilitato.
- [C++ amp](../parallel/amp/cpp-amp-overview.md) non è supportato e deve essere disabilitato.
- I file [elenco casi speciali](https://clang.llvm.org/docs/SanitizerSpecialCaseList.html) non sono supportati.

## <a name="standard-library-support"></a>Supporto della libreria standard

La libreria standard MSVC (STL) non è abilitata per comprendere il AddressSanitizer. Le eccezioni AddressSanitizer generate nel codice STL identificano i bug reali. Tuttavia, non sono altrettanto precisi.

In questo esempio viene illustrata la mancanza di precisione:

```cpp
// Compile with: cl /fsanitize=address /Zi
#include <vector>

int main() {   
    // Create a vector of size 10, but with a capacity of 20.    
    std::vector<int> v(10);
    v.reserve(20);

    // Currently, MSVC ASan does NOT raise an exception here.
    // While this is an out-of-bounds write to 'v', MSVC ASan
    // ensures the write is within the heap allocation size (20).
    v[10] = 1;

    // MSVC ASan DOES raise an exception here, as this write
    // is out of bounds from the heap allocation.
    v[20] = 1;
}
```

## <a name="windows-versions"></a>Versioni di Windows

Poiché esistono dipendenze con versioni specifiche di Windows, il supporto si concentra su Windows 10. MSVC AddressSanitizer è stato testato su 10.0.14393 (RS1) e 10.0.21323 (versione preliminare Insider Build). [Segnalare un bug](https://aka.ms/feedback/report?space=62) se si verificano problemi.

## <a name="memory-usage"></a>Utilizzo memoria

Il runtime di AddressSanitizer non rilascia la memoria al sistema operativo durante l'esecuzione. Dal punto di vista del sistema operativo, potrebbe sembrare che si verifichi una perdita di memoria. Questa decisione di progettazione è intenzionale, quindi non allocare tutta la memoria necessaria.

## <a name="addresssanitizer-runtime-dll-locations"></a>Percorsi DLL di runtime AddressSanitizer

I *`clang_rt.asan*.dll`* file di runtime vengono installati accanto ai compilatori in *`%VSINSTALLDIR%\VC\Tools\MSVC\<version>\bin\<host-arch>\<target-arch>\`* . Queste posizioni si trovano nel percorso nelle sessioni di debug e nei prompt dei comandi per gli sviluppatori di Visual Studio. Questi file non vengono mai inseriti in *`C:\Windows\System32`* o *`C:\Windows\SysWOW64`* .

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)

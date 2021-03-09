---
title: Runtime AddressSanitizer
description: Descrizione tecnica del runtime di AddressSanitizer per Microsoft C/C++.
ms.date: 03/02/2021
helpviewer_keywords:
- AddressSanitizer runtime
- Address Sanitizer runtime
- clang_rt.asan
- Clang runtime
- ASan runtime
ms.openlocfilehash: 6ab27365ba6841dd5314f1eac65abd71b7d4170d
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470458"
---
# <a name="addresssanitizer-runtime"></a>Runtime AddressSanitizer

La libreria di runtime AddressSanitizer intercetta le funzioni e le operazioni di allocazione della memoria comuni per consentire l'ispezione degli accessi alla memoria. Sono disponibili diverse librerie di runtime che supportano i diversi tipi di file eseguibili che possono essere generati dal compilatore. Il compilatore e il linker collegano automaticamente le librerie di runtime appropriate, purché venga passata l' [`/fsanitize=address`](../build/reference/fsanitize.md) opzione in fase di compilazione. È possibile eseguire l'override del comportamento predefinito utilizzando l' **`/NODEFAULTLIB`** opzione in fase di collegamento. Per ulteriori informazioni, vedere la sezione sul [collegamento](./asan-building.md#linker) in [AddressSanitizer Language, Build e Debug Reference](./asan-building.md).

Di seguito è riportato un inventario delle librerie di runtime per il collegamento al runtime di AddressSanitizer, dove *`{arch}`* è *`i386`* o *`x86_64`* .

> [!NOTE]
> Queste librerie mantengono le convenzioni Clang per i nomi di architettura. Le convenzioni MSVC sono in genere x86 e x64 anziché i386 e x86_64. Si riferiscono alle stesse architetture.

| Opzione CRT | DLL o EXE | DEBUG? | Librerie binarie di runtime AddressSanitizer |
|--|--|--|--|
| MT | EXE | NO | *`clang_rt.asan-{arch}`*, *`clang_rt.asan_cxx-{arch}`* |
| MT | DLL | NO | *`clang_rt.asan_dll_thunk-{arch}`* |
| MD | O | NO | *`clang_rt.asan_dynamic-{arch}`*, *`clang_rt.asan_dynamic_runtime_thunk-{arch}`* |
| MT | EXE | YES | *`clang_rt.asan_dbg-{arch}`*, *`clang_rt.asan_dbg_cxx-{arch}`* |
| MT | DLL | YES | *`clang_rt.asan_dbg_dll_thunk-{arch}`* |
| MD | O | YES | *`clang_rt.asan_dbg_dynamic-{arch}`*, *`clang_rt.asan_dbg_dynamic_runtime_thunk-{arch}`* |

Quando si esegue la compilazione con `cl /fsanitize=address` , il compilatore genera istruzioni per gestire e controllare i [byte Shadow](./asan-shadow-bytes.md). Il programma usa questa strumentazione per controllare gli accessi alla memoria nello stack, nell'heap o nell'ambito globale. Il compilatore produce anche metadati che descrivono le variabili stack e globali. Questi metadati consentono al runtime di generare la diagnostica degli errori precisa, ovvero nomi di funzioni, righe e colonne nel codice sorgente. Combinate, i controlli del compilatore e le librerie di runtime possono diagnosticare con precisione molti tipi di [bug di sicurezza della memoria](./asan-error-examples.md) se vengono rilevati in fase di esecuzione.

## <a name="function-interception"></a>Intercettazione di funzioni

AddressSanitizer consente di ottenere l'intercettazione di funzioni tramite molte tecniche di applicazione di patch a caldo. Queste tecniche sono [descritte in modo ottimale all'interno del codice sorgente](https://github.com/llvm/llvm-project/blob/1a2eaebc09c6a200f93b8beb37130c8b8aab3934/compiler-rt/lib/interception/interception_win.cpp#L11).

Le librerie di runtime intercettano molte funzioni comuni di gestione della memoria e di manipolazione della memoria. Per un elenco, vedere [AddressSanitizer list of intercettod Functions](#intercepted_functions). Gli intercettori di allocazione gestiscono i metadati e i byte shadow correlati a ogni chiamata di allocazione. Ogni volta che viene chiamata una funzione CRT, ad esempio `malloc` o `delete` , gli intercettori impostano valori specifici nell'area memoria shadow AddressSanitizer per indicare se tali percorsi heap sono attualmente accessibili e quali sono i limiti dell'allocazione. Questi byte Shadow consentono ai controlli generati dal compilatore dei [byte Shadow](./asan-shadow-bytes.md) di determinare se un carico o un archivio è valido.

L'intercettazione non è garantita. Se un prologo di funzione è troppo breve per la `jmp` scrittura di un oggetto, l'intercettazione può non riuscire. Se si verifica un errore di intercettazione, il programma genera un'eccezione `debugbreak` e si arresta. Se si collega un debugger, la causa del problema di intercettazione viene cancellata. In caso di problemi, [segnalare un bug](https://aka.ms/feedback/report?space=62).

> [!NOTE]
> Facoltativamente, gli utenti possono tentare di continuare oltre un'intercettazione non riuscita impostando la variabile `ASAN_WIN_CONTINUE_ON_INTERCEPTION_FAILURE` di ambiente su un valore qualsiasi. La continuazione di un errore di intercettazione può causare la mancata segnalazione di bug per tale funzione.

## <a name="custom-allocators-and-the-addresssanitizer-runtime"></a>Allocatori personalizzati e Runtime AddressSanitizer

Il runtime di AddressSanitizer fornisce gli intercettori per le interfacce dell'allocatore comuni,, `malloc` / `free` `new` / `delete` , `HeapAlloc` / `HeapFree` (tramite `RtlAllocateHeap` / `RtlFreeHeap` ). Molti programmi usano gli allocatori personalizzati per un motivo o per un altro, ad esempio qualsiasi programma che usa `dlmalloc` o una soluzione usando l' `std::allocator` interfaccia e `VirtualAlloc()` . Il compilatore non è in grado di aggiungere automaticamente le chiamate di gestione della memoria shadow a un allocatore personalizzato. È responsabilità dell'utente utilizzare l' [interfaccia di avvelenamento manuale fornita](#poisoning). Questa API consente a questi allocatori di funzionare correttamente con le convenzioni del runtime AddressSanitizer e dei [byte Shadow](./asan-shadow-bytes.md) esistenti.

## <a name="manual-addresssanitizer-poisoning-interface"></a><a name="poisoning"></a> Interfaccia di avvelenamento AddressSanitizer manuale

L'interfaccia per l'illuminazione è semplice, ma impone restrizioni di allineamento per l'utente. Gli utenti possono importare questi prototipi importando [`sanitizer/asan_interface.h`](https://github.com/llvm/llvm-project/blob/main/compiler-rt/include/sanitizer/asan_interface.h) . Ecco i prototipi di funzione di interfaccia:

```cpp
void __asan_poison_memory_region(void const volatile *addr, size_t size);
void __asan_unpoison_memory_region(void const volatile *addr, size_t size);
```

Per praticità, il [file di intestazione dell'interfaccia AddressSanitizer](https://github.com/llvm/llvm-project/blob/main/compiler-rt/include/sanitizer/asan_interface.h) fornisce le macro wrapper. Queste macro controllano se la funzionalità AddressSanitizer è abilitata durante la compilazione. Consentono al codice sorgente di omettere le chiamate di funzione non elaborabili quando non sono necessarie. Queste macro dovrebbero essere preferite rispetto alla chiamata diretta delle funzioni sopra indicate:

```cpp
#define ASAN_POISON_MEMORY_REGION(addr, size)
#define ASAN_UNPOISON_MEMORY_REGION(addr, size)
```

## <a name="alignment-requirements-for-addresssanitizer-poisoning"></a>Requisiti di allineamento per l'avvelenamento AddressSanitizer

Eventuali avvelenamenti manuali di byte shadow devono considerare i requisiti di allineamento. Se necessario, l'utente deve aggiungere la spaziatura interna, in modo che i byte dell'ombreggiatura terminino su un limite di byte nella memoria shadow. Ogni bit nella memoria shadow AddressSanitizer codifica lo stato di un singolo byte nella memoria dell'applicazione. Questa codifica indica che la dimensione totale di ogni allocazione, inclusa la spaziatura interna, deve essere allineata a un limite di 8 byte. Se il requisito di allineamento non è soddisfatto, può causare una segnalazione di bug non corretta. Il reporting errato potrebbe essere manifesto come report mancanti (falsi negativi) o report su errori (falsi positivi).

Per un'illustrazione del requisito di allineamento e dei potenziali problemi, vedere gli [esempi di allineamento di Asan](https://github.com/mcgov/asan_alignment_example)specificati. Uno è un programma di piccole dimensioni che mostra cosa può andare male con l'avvelenamento della memoria shadow manuale. Il secondo è un'implementazione di esempio dell'avvelenamento manuale usando l' `std::allocator` interfaccia.

## <a name="run-time-options"></a>Opzioni di run-time

Microsoft C/C++ (MSVC) usa un runtime basato sul [Runtime AddressSanitizer Clang dal repository LLVM-Project](https://github.com/llvm/llvm-project). Per questo motivo, la maggior parte delle opzioni di runtime è condivisa tra le due versioni. [Un elenco completo delle opzioni di runtime del Clang pubblico è disponibile qui](https://github.com/google/sanitizers/wiki/SanitizerCommonFlags). Si documentano alcune differenze nelle sezioni che seguono. Se si individuano opzioni che non funzionano come previsto, [segnalare un bug](https://aka.ms/feedback/report?space=62).

### <a name="unsupported-addresssanitizer-options"></a>Opzioni di AddressSanitizer non supportate

- detect_container_overflow
- unmap_shadow_on_exit

> [!NOTE]
> L'opzione di runtime AddressSanitizer `halt_on_error` non funziona nel modo previsto. In entrambe le librerie di runtime Clang e MSVC, molti tipi di errore sono considerati **non continui**, inclusi la maggior parte degli errori di danneggiamento della memoria.

Per ulteriori informazioni, vedere la sezione [differenze con Clang 12,0](./asan.md#differences) .

### <a name="msvc-specific-addresssanitizer-runtime-options"></a>Opzioni di runtime di AddressSanitizer specifiche di MSVC

- `windows_hook_legacy_allocators` Booleano, impostato su `true` per abilitare l'intercettazione degli [`GlobalAlloc`](/windows/win32/api/winbase/nf-winbase-globalalloc) [`LocalAlloc`](/windows/win32/api/winbase/nf-winbase-localalloc) allocatori e.

> [!NOTE]
> L'opzione `windows_hook_legacy_allocators` non era disponibile nel runtime LLVM-Project pubblico quando è stato scritto questo articolo. L'opzione può essere inviata nuovamente al progetto pubblico. Tuttavia, dipende dalla revisione del codice e dall'accettazione della community.
>
> L'opzione `windows_hook_rtl_allocators` , in precedenza una funzionalità di consenso esplicito mentre AddressSanitizer era sperimentale, è ora abilitata per impostazione predefinita.

## <a name="addresssanitizer-list-of-intercepted-functions-windows"></a><a name="intercepted_functions"></a> Elenco AddressSanitizer di funzioni intercettate (Windows)

Il runtime AddressSanitizer esegue il patch a caldo di molte funzioni per abilitare i controlli di sicurezza della memoria in fase di esecuzione. Di seguito è riportato un elenco non esaustivo delle funzioni monitorate dal runtime di AddressSanitizer.

### <a name="default-interceptors"></a>Intercettori predefiniti

- [`__C_specific_handler` (solo x64)](/windows/win32/devnotes/--c-specific-handler2)
- [`_aligned_free`](../c-runtime-library/reference/aligned-free.md)
- [`_aligned_malloc`](../c-runtime-library/reference/aligned-malloc.md)
- [`_aligned_msize`](../c-runtime-library/reference/aligned-msize.md)
- [`_aligned_realloc`](../c-runtime-library/reference/aligned-realloc.md)
- [`_calloc_base`](../c-runtime-library/reference/calloc.md)
- [`_calloc_crt`](../c-runtime-library/reference/calloc.md)
- [`_calloc_dbg` (solo runtime di debug)](../c-runtime-library/reference/calloc-dbg.md)
- [`_except_handler3` (solo x86)](../c-runtime-library/except-handler3.md)
- [ `_except_handler4` (solo x86)](../c-runtime-library/internal-crt-globals-and-functions.md) (non documentato)
- [`_expand`](../c-runtime-library/reference/expand.md)
- `_expand_base` privi
- [`_expand_dbg` (solo runtime di debug)](../c-runtime-library/reference/expand-dbg.md)
- [`_free_base`](../c-runtime-library/internal-crt-globals-and-functions.md) privi
- [`_free_dbg` (solo runtime di debug)](../c-runtime-library/reference/free-dbg.md)
- [`_malloc_base`](../c-runtime-library/internal-crt-globals-and-functions.md) privi
- `_malloc_crt` privi
- [`_malloc_dbg` (solo runtime di debug)](../c-runtime-library/reference/malloc-dbg.md)
- [`_msize`](../c-runtime-library/reference/msize.md)
- `_msize_base` privi
- [`_msize_dbg` (solo runtime di debug)](../c-runtime-library/reference/msize-dbg.md)
- [`_realloc_base`](../c-runtime-library/internal-crt-globals-and-functions.md) privi
- `_realloc_crt` privi
- [`_realloc_dbg` (solo runtime di debug)](../c-runtime-library/reference/realloc-dbg.md)
- [`_recalloc`](../c-runtime-library/reference/recalloc.md)
- `_recalloc_base` privi
- `_recalloc_crt` privi
- [`_recalloc_dbg` (solo runtime di debug)](../c-runtime-library/reference/recalloc-dbg.md)
- [`_strdup`](../c-runtime-library/reference/strdup-wcsdup-mbsdup.md)
- [`atoi`](../c-runtime-library/reference/atoi-atoi-l-wtoi-wtoi-l.md)
- [`atol`](../c-runtime-library/reference/atoi-atoi-l-wtoi-wtoi-l.md)
- [`calloc`](../c-runtime-library/reference/calloc.md)
- [`CreateThread`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread)
- [`free`](../c-runtime-library/reference/free.md)
- [`frexp`](../c-runtime-library/reference/frexp.md)
- [`longjmp`](../c-runtime-library/reference/longjmp.md)
- [`malloc`](../c-runtime-library/reference/malloc.md)
- [`memchr`](../c-runtime-library/reference/memchr-wmemchr.md)
- [`memcmp`](../c-runtime-library/reference/memcmp-wmemcmp.md)
- [`memcpy`](../c-runtime-library/reference/memcpy-wmemcpy.md)
- [`memmove`](../c-runtime-library/reference/memmove-wmemmove.md)
- [`memset`](../c-runtime-library/reference/memset-wmemset.md)
- [`RaiseException`](/windows/win32/api/errhandlingapi/nf-errhandlingapi-raiseexception)
- [`realloc`](../c-runtime-library/reference/realloc.md)
- [`RtlAllocateHeap`](/windows-hardware/drivers/ddi/ntifs/nf-ntifs-rtlallocateheap)
- [`RtlCreateHeap`](/windows-hardware/drivers/ddi/ntifs/nf-ntifs-rtlcreateheap)
- [`RtlDestroyHeap`](/windows-hardware/drivers/ddi/ntifs/nf-ntifs-rtlcreateheap)
- [`RtlFreeHeap`](/windows-hardware/drivers/ddi/ntifs/nf-ntifs-rtlfreeheap)
- [`RtlRaiseException`](/windows/win32/api/rtlsupportapi/nf-rtlsupportapi-rtlraiseexception)
- `RtlReAllocateHeap` privi
- `RtlSizeHeap` privi
- [`SetUnhandledExceptionFilter`](/windows/win32/api/errhandlingapi/nf-errhandlingapi-setunhandledexceptionfilter)
- [`strcat`](../c-runtime-library/reference/strcat-wcscat-mbscat.md)
- [`strchr`](../c-runtime-library/reference/strchr-wcschr-mbschr-mbschr-l.md)
- [`strcmp`](../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)
- [`strcpy`](../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)
- [`strcspn`](../c-runtime-library/reference/strcspn-wcscspn-mbscspn-mbscspn-l.md)
- [`strdup`](../c-runtime-library/reference/strdup-wcsdup.md)
- [`strlen`](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)
- [`strncat`](../c-runtime-library/reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)
- [`strncmp`](../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)
- [`strncpy`](../c-runtime-library/reference/strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)
- [`strnlen`](../c-runtime-library/reference/strnlen-strnlen-s.md)
- [`strpbrk`](../c-runtime-library/reference/strpbrk-wcspbrk-mbspbrk-mbspbrk-l.md)
- [`strspn`](../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)
- [`strstr`](../c-runtime-library/reference/strstr-wcsstr-mbsstr-mbsstr-l.md)
- [`strtok`](../c-runtime-library/reference/strtok-strtok-l-wcstok-wcstok-l-mbstok-mbstok-l.md)
- [`strtol`](../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)
- [`wcslen`](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)
- [`wcsnlen`](../c-runtime-library/reference/strnlen-strnlen-s.md)

### <a name="optional-interceptors"></a>Intercettori facoltativi

Gli intercettori elencati di seguito vengono installati solo quando è abilitata un'opzione di runtime AddressSanitizer. Impostare `windows_hook_legacy_allocators` su `true` per abilitare l'intercettazione dell'allocatore legacy.
`set ASAN_OPTIONS=windows_hook_legacy_allocators=true`

- [`GlobalAlloc`](/windows/win32/api/winbase/nf-winbase-globalalloc)
- [`GlobalFree`](/windows/win32/api/winbase/nf-winbase-GlobalFree)
- [`GlobalHandle`](/windows/win32/api/winbase/nf-winbase-GlobalHandle)
- [`GlobalLock`](/windows/win32/api/winbase/nf-winbase-GlobalLock)
- [`GlobalReAlloc`](/windows/win32/api/winbase/nf-winbase-GlobalReAlloc)
- [`GlobalSize`](/windows/win32/api/winbase/nf-winbase-GlobalSize)
- [`GlobalUnlock`](/windows/win32/api/winbase/nf-winbase-GlobalUnlock)
- [`LocalAlloc`](/windows/win32/api/winbase/nf-winbase-LocalAlloc)
- [`LocalFree`](/windows/win32/api/winbase/nf-winbase-LocalFree)
- [`LocalHandle`](/windows/win32/api/winbase/nf-winbase-LocalHandle)
- [`LocalLock`](/windows/win32/api/winbase/nf-winbase-LocalLock)
- [`LocalReAlloc`](/windows/win32/api/winbase/nf-winbase-LocalReAlloc)
- [`LocalSize`](/windows/win32/api/winbase/nf-winbase-LocalSize)
- [`LocalUnlock`](/windows/win32/api/winbase/nf-winbase-LocalUnlock)

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)

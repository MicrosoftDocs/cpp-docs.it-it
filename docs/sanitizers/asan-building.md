---
title: Informazioni di riferimento sul linguaggio, la compilazione e il debug di AddressSanitizer
description: Descrizione tecnica della compilazione per AddressSanitizer
ms.date: 03/02/2021
f1_keywords:
- __SANITIZE_ADDRESS__
- ASAN_VCASAN_DEBUGGING
helpviewer_keywords:
- ASan reference
- AddressSanitizer reference
- Address Sanitizer reference
ms.openlocfilehash: f2f173da6d39b460098afe123a7537e36cbdf6a7
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470474"
---
# <a name="addresssanitizer-language-build-and-debugging-reference"></a>Informazioni di riferimento sul linguaggio, la compilazione e il debug di AddressSanitizer

Le sezioni di questo articolo descrivono le specifiche del linguaggio AddressSanitizer, le opzioni del compilatore e le opzioni del linker. Vengono inoltre descritte le opzioni che controllano l'integrazione del debugger di Visual Studio specifica del AddressSanitizer.

Per ulteriori informazioni sul runtime AddressSanitizer, sulle funzioni intercettate e su come associare allocatori personalizzati, vedere il [riferimento al runtime](./asan-runtime.md). Per ulteriori informazioni sul salvataggio dei dump di arresto anomalo del sistema da errori AddressSanitizer, vedere il [riferimento al dump di arresto anomalo](./asan-offline-crash-dumps.md).

## <a name="language-specification"></a>Specifica del linguaggio

### `__SANITIZE_ADDRESS__`

La `__SANITIZE_ADDRESS__` macro del preprocessore viene definita come `1` quando [`/fsanitize=address`](../build/reference/fsanitize.md) è impostato. Questa macro è utile per consentire agli utenti avanzati di specificare in modo condizionale il codice sorgente per la presenza del runtime di AddressSanitizer.

```cpp
#include <cstdio>

int main() {
    #ifdef __SANITIZE_ADDRESS__
        printf("Address sanitizer enabled");
    #else
        printf("Address sanitizer not enabled");
    #endif
    return 1;
}
```

### `__declspec(no_sanitize_address)`

L' [`__declspec(no_sanitize_address)`](../cpp/no-sanitize-address.md) identificatore può essere usato per disabilitare selettivamente il sanificatore su funzioni, variabili locali o variabili globali. Ciò `__declspec` influiscono sul comportamento _del compilatore_ , non sul comportamento in _fase di esecuzione_ .

```cpp
__declspec(no_sanitize_address)
void test1() {
    int x[100];
    x[100] = 5; // ASan exception not caught
}

void test2() {
    __declspec(no_sanitize_address) int x[100];
    x[100] = 5; // ASan exception not caught
}

__declspec(no_sanitize_address) int g[100];
void test3() {
    g[100] = 5; // ASan exception not caught
}
```

## <a name="compiler"></a>Compilatore

### <a name="fsanitizeaddress-compiler-option"></a>`/fsanitize=address` (opzione del compilatore)

L' [`/fsanitize=address`](../build/reference/fsanitize.md) opzione del compilatore instrumenta i riferimenti di memoria nel codice per rilevare gli errori di sicurezza della memoria in fase di esecuzione. Gli hook di strumentazione caricano, archivia, ambiti, alloca e funzioni CRT. Può rilevare bug nascosti, ad esempio out-of-Bounds, use-after-free, use-after-scope e così via. Per un elenco non esaustivo di errori rilevati in fase di esecuzione, vedere [esempi di errore AddressSanitizer](./asan-error-examples.md).

**`/fsanitize=address`** è compatibile con tutti i livelli di ottimizzazione C++ o C esistenti, ad esempio,,,, **`/Od`** **`/O1`** e l' **`/O2`** **`/O2 /GL`** ottimizzazione PGO. Il codice prodotto con questa opzione funziona con CRT statici e dinamici, ad esempio,,, **`/MD`** **`/MDd`** **`/MT`** e **`/MTd`** . Questa opzione del compilatore può essere usata per creare un oggetto. EXE o. DLL destinata a x86 o x64. Le informazioni di debug sono necessarie per la formattazione ottimale degli stack di chiamate.

Per esempi di codice che illustra diversi tipi di rilevamento degli errori, vedere [esempi di errore AddressSanitizer](asan-error-examples.md).

### <a name="fsanitize-address-use-after-return-compiler-option-experimental"></a>`/fsanitize-address-use-after-return` opzione del compilatore (sperimentale)

Per impostazione predefinita, il compilatore MSVC (a differenza di Clang) non genera codice per allocare frame nell'heap per rilevare gli errori use-after-return. Per intercettare questi errori usando AddressSanitizer, è necessario:

1. Compilare utilizzando l' [`/fsanitize-address-use-after-return`](../build/reference/fsanitize.md) opzione.
2. Prima di eseguire il programma, eseguire `set ASAN_OPTIONS=detect_stack_use_after_return=1` per impostare l'opzione di controllo del runtime.

L' **`/fsanitize-address-use-after-return`** opzione fa in modo che il compilatore generi codice per usare una doppia stack frame nell'heap quando le variabili locali sono considerate "Address Taken". Questo codice è *molto più lento* rispetto all'uso **`/fsanitize=address`** da solo. Per ulteriori informazioni e un esempio, vedere [errore: `stack-use-after-return` ](error-stack-use-after-return.md).

Il doppio stack frame nell'heap rimane dopo il ritorno dalla funzione che lo ha creato. Si consideri un esempio in cui l'indirizzo di un oggetto locale, allocato a uno slot nell'heap, viene utilizzato dopo la restituzione. I byte Shadow associati al frame dell'heap fittizio contengono il valore 0xF9. Questo 0xF9 indica un errore di utilizzo stack-after-return quando il runtime segnala l'errore.

Gli stack frame vengono allocati nell'heap e rimangono dopo che le funzioni restituiscono. Il runtime USA Garbage Collection per liberare in modo asincrono questi oggetti frame di chiamata Fake, dopo un determinato intervallo di tempo. Gli indirizzi delle variabili locali vengono trasferiti ai frame permanenti nell'heap. Si tratta del modo in cui il sistema è in grado di rilevare quando vengono usate variabili locali dopo la restituzione della funzione di definizione. Per ulteriori informazioni, vedere l' [algoritmo per l'utilizzo dello stack dopo la restituzione](https://github.com/google/sanitizers/wiki/AddressSanitizerUseAfterReturn) come documentato da Google.

## <a name="linker"></a><a name="linker"></a> Linker

### <a name="inferasanlibsno-linker-option"></a>`/INFERASANLIBS[:NO]` opzione del linker

L' **`/fsanitize=address`** opzione del compilatore contrassegna gli oggetti per specificare la libreria AddressSanitizer da collegare nell'eseguibile. Le librerie hanno nomi che iniziano con *`clang_rt.asan*`* . L' [`/INFERASANLIBS`](../build/reference/inferasanlibs.md) opzione del linker (abilitata per impostazione predefinita) collega automaticamente queste librerie ai percorsi predefiniti. Di seguito sono riportate le librerie scelte e collegate automaticamente:

| Opzione CRT | DLL o EXE | DEBUG? | Librerie di runtime AddressSanitizer |
|--|--|--|--|
| MT | EXE | NO | *`clang_rt.asan-{arch}`*, *`clang_rt.asan_cxx-{arch}`* |
| MT | DLL | NO | *`clang_rt.asan_dll_thunk-{arch}`* |
| MD | O | NO | *`clang_rt.asan_dynamic-{arch}`*, *`clang_rt.asan_dynamic_runtime_thunk-{arch}`* |
| MT | EXE | YES | *`clang_rt.asan_dbg-{arch}`*, *`clang_rt.asan_dbg_cxx-{arch}`* |
| MT | DLL | YES | *`clang_rt.asan_dbg_dll_thunk-{arch}`* |
| MD | O | YES | *`clang_rt.asan_dbg_dynamic-{arch}`*, *`clang_rt.asan_dbg_dynamic_runtime_thunk-{arch}`* |

L'opzione del linker [`/INFERASANLIBS:NO`](../build/reference/inferasanlibs.md) impedisce al linker di collegare un *`clang_rt.asan*`* file di libreria dal percorso predefinito. Se si usa questa opzione, aggiungere il percorso di libreria negli script di compilazione. In caso contrario, il linker segnala un errore di simbolo esterno non risolto.

## <a name="visual-studio-integration"></a>integrazione con Visual Studio

### <a name="fno-sanitize-address-vcasan-lib-compiler-option"></a>`/fno-sanitize-address-vcasan-lib` (opzione del compilatore)

L' **`/fsanitize=address`** opzione consente di eseguire il collegamento in librerie aggiuntive per migliorare l'esperienza di debug di Visual Studio quando viene generata un'eccezione AddressSanitizer. Queste librerie sono denominate **VCAsan**. Le librerie consentono a Visual Studio di visualizzare gli errori di AddressSanitizer nel codice sorgente. Consentono inoltre all'eseguibile di generare dump di arresto anomalo del sistema quando viene creata una segnalazione errori AddressSanitizer. Per altre informazioni, vedere la [libreria di funzionalità estese di Visual Studio AddressSanitizer](./asan-debugger-integration.md).

La libreria scelta dipende dalle opzioni del compilatore e viene collegata automaticamente.

| Opzione Runtime | Versione di VCAsan |
|--------------|----------------|
| **`/MT`**        | *`libvcasan.lib`*  |
| **`/MD`**        | *`vcasan.lib`*     |
| **`/MTd`**       | *`libvcasand.lib`* |
| **`/MDd`**       | *`vcasand.lib`*    |

Tuttavia, se si esegue la compilazione usando **`/Zl`** (omettere il nome della libreria predefinita), è necessario specificare manualmente la libreria. In caso contrario, si otterrà un errore di collegamento al simbolo esterno non risolto. Di seguito sono riportati alcuni esempi tipici:

```Output
error LNK2001: unresolved external symbol __you_must_link_with_VCAsan_lib
error LNK2001: unresolved external symbol ___you_must_link_with_VCAsan_lib
```

Il debug migliorato può essere disabilitato in fase di compilazione utilizzando l' [`/fno-sanitize-address-vcasan-lib`](../build/reference/fsanitize.md) opzione.

### <a name="asan_vcasan_debugging-environment-variable"></a>La variabile di ambiente `ASAN_VCASAN_DEBUGGING`

L' **`/fsanitize=address`** opzione del compilatore produce un file binario che espone i bug di sicurezza della memoria in fase di esecuzione. Quando il file binario viene avviato dalla riga di comando e il runtime segnala un errore, stampa i dettagli dell'errore. Quindi esce dal processo. La `ASAN_VCASAN_DEBUGGING` variabile di ambiente può essere impostata in modo da avviare l'IDE di Visual Studio immediatamente quando il runtime segnala un errore. Questa opzione del compilatore consente di visualizzare l'errore, sovrapposto al codice sorgente, alla riga e alla colonna esatte che hanno causato l'errore.

Per abilitare questo comportamento, eseguire il comando `set ASAN_VCASAN_DEBUGGING=1` prima di eseguire l'applicazione. È possibile disabilitare l'esperienza di debug avanzata eseguendo `set ASAN_VCASAN_DEBUGGING=0` .

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)

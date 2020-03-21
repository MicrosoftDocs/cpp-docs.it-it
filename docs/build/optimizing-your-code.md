---
title: Ottimizzazione del codice
ms.date: 05/06/2019
helpviewer_keywords:
- performance, optimizing code
- optimization
- cl.exe compiler, performance
- optimization, C++ code
- code, optimizing
- performance, compiler
ms.openlocfilehash: 00356cf50ca8e50c80e8a1142adf654816490c9b
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80078501"
---
# <a name="optimizing-your-code"></a>Ottimizzazione del codice

Ottimizzando un eseguibile, è possibile ottenere un equilibrio tra la velocità di esecuzione rapida e le dimensioni del codice ridotto. In questo argomento vengono illustrati alcuni dei meccanismi forniti da Visual Studio per semplificare l'ottimizzazione del codice.

## <a name="language-features"></a>Funzionalità del linguaggio

Negli argomenti seguenti vengono descritte alcune delle funzionalità di ottimizzazione del linguaggio CC++ /.

[Pragma e parole chiave di ottimizzazione](optimization-pragmas-and-keywords.md) \
Elenco di parole chiave e pragma che è possibile usare nel codice per migliorare le prestazioni.

[Opzioni del compilatore elencate per categoria](reference/compiler-options-listed-by-category.md) \
Elenco di opzioni del compilatore **/o** che influiscono in modo specifico sulla velocità di esecuzione o sulle dimensioni del codice.

[Dichiaratore di riferimento rvalue: & &](../cpp/rvalue-reference-declarator-amp-amp.md) \
I riferimenti rvalue supportano l'implementazione della *semantica di spostamento*. Se per implementare le librerie di modelli vengono utilizzate semantiche di spostamento, le prestazioni delle applicazioni che utilizzano tali modelli possono migliorare significativamente.

### <a name="the-optimize-pragma"></a>Pragma optimize

Se una sezione ottimizzata del codice causa errori o rallentamenti, è possibile usare il pragma [optimize](../preprocessor/optimize.md) per disattivare l'ottimizzazione per tale sezione.

Racchiudere il codice tra due pragma, come illustrato di seguito:

```cpp
#pragma optimize("", off)
// some code here
#pragma optimize("", on)
```

## <a name="programming-practices"></a>Procedure di programmazione

Quando si compila il codice con l'ottimizzazione, è possibile che vengano visualizzati messaggi di avviso aggiuntivi. Questo comportamento è previsto perché alcuni avvisi si riferiscono solo al codice ottimizzato. Se si prestano attenzione a questi avvisi, è possibile evitare molti problemi di ottimizzazione.

Paradossalmente, l'ottimizzazione di un programma per la velocità potrebbe causare un rallentamento dell'esecuzione del codice. Questo perché alcune ottimizzazioni per aumentare la dimensione del codice. Ad esempio, le funzioni di incorporamento eliminano l'overhead delle chiamate di funzione. Tuttavia, l'incorporamento di un numero eccessivo di codice potrebbe rendere il programma così grande da aumentare il numero di errori di pagina di memoria virtuale. Pertanto, la velocità ottenuta dall'eliminazione delle chiamate di funzione potrebbe andare persa per lo scambio di memoria.

Negli argomenti seguenti vengono illustrate le buone procedure di programmazione.

[Suggerimenti per il miglioramento del codice critico per il tempo](tips-for-improving-time-critical-code.md) \
Migliori tecniche di codifica possono produrre prestazioni migliori. Questo argomento suggerisce tecniche di codifica che consentono di assicurarsi che le parti cruciali del codice vengano eseguite in modo soddisfacente.

[Procedure consigliate](optimization-best-practices.md) per l'ottimizzazione \
Fornisce linee guida generali su come ottimizzare l'applicazione.

## <a name="debugging-optimized-code"></a>Debug del codice ottimizzato

Poiché l'ottimizzazione potrebbe modificare il codice creato dal compilatore, è consigliabile eseguire il debug dell'applicazione e misurare le prestazioni e quindi ottimizzare il codice.

Negli argomenti seguenti vengono fornite informazioni su come eseguire il debug delle build di rilascio.

- [Debug in Visual Studio](/visualstudio/debugger/debugging-in-visual-studio)

- [Procedura: Eseguire il debug di codice ottimizzato](/visualstudio/debugger/how-to-debug-optimized-code)

- [Causa della possibile perdita di precisione dei numeri a virgola mobile](why-floating-point-numbers-may-lose-precision.md)

Negli argomenti seguenti vengono fornite informazioni su come ottimizzare la compilazione, il caricamento e l'esecuzione del codice.

- [Incremento dell'efficienza delle operazioni del compilatore](improving-compiler-throughput.md)

- [Mancata generazione di codice in seguito all'uso di nomi di funzione senza ()](using-function-name-without-parens-produces-no-code.md)

- [Ottimizzazione dell'assembly Inline](../assembler/inline/optimizing-inline-assembly.md)

- [Impostazione dell'ottimizzazione del compilatore per un progetto ATL](../atl/reference/specifying-compiler-optimization-for-an-atl-project.md)

- [Quali tecniche di ottimizzazione è consigliabile utilizzare per migliorare le prestazioni dell'applicazione client durante il caricamento?](../build/dll-frequently-asked-questions.md#mfc_optimization)

## <a name="in-this-section"></a>Contenuto della sezione

[Pragma e parole chiave di ottimizzazione](optimization-pragmas-and-keywords.md) \
[Miglioramento della velocità effettiva del compilatore](improving-compiler-throughput.md) \
[Perché i numeri a virgola mobile potrebbero perdere precisione](why-floating-point-numbers-may-lose-precision.md) \
[Rappresentazione a virgola mobile IEEE](ieee-floating-point-representation.md) \
[Suggerimenti per il miglioramento del codice critico per il tempo](tips-for-improving-time-critical-code.md) \
Se si [Usa il nome della funzione senza () non viene generato alcun codice](using-function-name-without-parens-produces-no-code.md) \
[Procedure consigliate](optimization-best-practices.md) per l'ottimizzazione \
[Ottimizzazioni](profile-guided-optimizations.md) PGO \
[Variabili di ambiente per le ottimizzazioni pgo](environment-variables-for-profile-guided-optimizations.md) \
 \ [PgoAutoSweep](pgoautosweep.md)
 \ [pgomgr](pgomgr.md)
 \ [pgosweep](pgosweep.md)
[Procedura: Unire più profili PGO in un unico profilo](how-to-merge-multiple-pgo-profiles-into-a-single-profile.md)

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](reference/c-cpp-building-reference.md)

---
title: Ottimizzazione del codice
ms.date: 12/10/2018
helpviewer_keywords:
- performance, optimizing code
- optimization
- cl.exe compiler, performance
- optimization, C++ code
- code, optimizing
- performance, compiler
ms.openlocfilehash: ae60070959c683a6365992e7b6cc510fd4111b36
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57828100"
---
# <a name="optimizing-your-code"></a>Ottimizzazione del codice

Ottimizzazione di un file eseguibile, è possibile ottenere un equilibrio tra velocità di esecuzione e dimensione del codice. In questo argomento vengono illustrati alcuni dei meccanismi disponibili in Visual C++ che consentono di ottimizzare il codice.

## <a name="language-features"></a>Funzionalità del linguaggio

Gli argomenti seguenti descrivono alcune delle funzionalità di ottimizzazione del linguaggio C/C++.

[Pragma e parole chiave di ottimizzazione](optimization-pragmas-and-keywords.md)<br/>
Elenco di parole chiave e pragma che è possibile usare nel codice per migliorare le prestazioni.

[Opzioni del compilatore elencate per categoria](reference/compiler-options-listed-by-category.md)<br/>
Un elenco delle **/O** opzioni del compilatore che interessano in particolare le dimensioni di velocità o codice di esecuzione.

[Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md)<br/>
I riferimenti rvalue supportano l'implementazione di *semantica di spostamento*. Se la semantica viene utilizzata per implementare le librerie di modelli, le prestazioni delle applicazioni che usano i modelli di spostamento può migliorare significativamente.

### <a name="the-optimize-pragma"></a>Il pragma optimize

Se una sezione di codice ottimizzata provoca un rallentamento o errori, è possibile usare la [ottimizzare](../preprocessor/optimize.md) pragma per disattivare l'ottimizzazione per quella sezione.

Racchiudere il codice tra due direttive pragma, come illustrato di seguito:

```cpp
#pragma optimize("", off)
// some code here
#pragma optimize("", on)
```

## <a name="programming-practices"></a>Procedure consigliate di programmazione

È possibile notare altri messaggi di avviso quando si compila il codice con l'ottimizzazione. Questo comportamento è previsto perché alcuni avvisi riguardano solo il codice ottimizzato. Se consigliabile prestare attenzione questi avvisi, è possibile evitare numerosi problemi di ottimizzazione.

Ottimizzazione di un programma per la velocità di Paradossalmente, potrebbe causare codice rallenterà l'esecuzione. Questo avviene perché alcune ottimizzazioni per la velocità di aumento delle dimensioni del codice. Ad esempio, le funzioni inline Elimina il sovraccarico delle chiamate di funzione. Tuttavia, l'incorporamento troppa codice potrebbe rendere il programma talmente elevato che il numero di pagina di memoria virtuale aumento degli errori. Pertanto, la maggiore velocità ottenuta da eliminando le chiamate di funzione vadano perse per lo swapping di memoria.

Gli argomenti seguenti descrivono le procedure di programmazione.

[Suggerimenti per il miglioramento del codice critico](tips-for-improving-time-critical-code.md)<br/>
Codifica migliorata tecniche consentono di ottenere prestazioni migliori. Questo argomento verranno suggerite le tecniche che consentono di assicurarsi che le parti del codice critico eseguano in modo soddisfacente di codifica.

[Procedure consigliate di ottimizzazione](optimization-best-practices.md)<br/>
Vengono fornite indicazioni generali sul modo migliore per ottimizzare l'applicazione.

## <a name="debugging-optimized-code"></a>Debug di codice ottimizzato

Poiché l'ottimizzazione potrebbe modificare il codice creato dal compilatore, è consigliabile che il debug dell'applicazione e valutarne le prestazioni e quindi ottimizzare il codice.

Gli argomenti seguenti forniscono informazioni su come eseguire il debug a release compila.

- [Debug in Visual Studio](/visualstudio/debugger/debugging-in-visual-studio)

- [Procedura: Eseguire il debug di codice ottimizzato](/visualstudio/debugger/how-to-debug-optimized-code)

- [Causa della possibile perdita di precisione dei numeri a virgola mobile](why-floating-point-numbers-may-lose-precision.md)


Gli argomenti seguenti forniscono informazioni su come ottimizzare la compilazione, il caricamento e l'esecuzione del codice.

- [Incremento dell'efficienza delle operazioni del compilatore](improving-compiler-throughput.md)

- [Mancata generazione di codice in seguito all'uso di nomi di funzione senza ()](using-function-name-without-parens-produces-no-code.md)

- [Ottimizzazione dell'assembly Inline](../assembler/inline/optimizing-inline-assembly.md)

- [Impostazione dell'ottimizzazione del compilatore per un progetto ATL](../atl/reference/specifying-compiler-optimization-for-an-atl-project.md)

- [Quali tecniche di ottimizzazione è necessario usare per migliorare le prestazioni dell'applicazione client durante il caricamento?](../build/dll-frequently-asked-questions.md#mfc_optimization)


## <a name="in-this-section"></a>Contenuto della sezione

[Pragma e parole chiave di ottimizzazione](optimization-pragmas-and-keywords.md)<br/>
[Incremento dell'efficienza delle operazioni del compilatore](improving-compiler-throughput.md)<br/>
[Causa della possibile perdita di precisione dei numeri a virgola mobile](why-floating-point-numbers-may-lose-precision.md)<br/>
[Formato a virgola mobile IEEE](ieee-floating-point-representation.md)<br/>
[Suggerimenti per il miglioramento del codice critico](tips-for-improving-time-critical-code.md)<br/>
[Mancata generazione di codice in seguito all'uso di nomi di funzione senza ()](using-function-name-without-parens-produces-no-code.md)<br/>
[Procedure consigliate di ottimizzazione](optimization-best-practices.md)<br/>
[Ottimizzazioni PGO](profile-guided-optimizations.md)<br/>
[Variabili d'ambiente per le ottimizzazioni GPO](environment-variables-for-profile-guided-optimizations.md)<br/>
[PgoAutoSweep](pgoautosweep.md)<br/>
[pgomgr](pgomgr.md)<br/>
[pgosweep](pgosweep.md)<br/>
[Procedura: Unire più profili PGO in un unico profilo](how-to-merge-multiple-pgo-profiles-into-a-single-profile.md)<br/>
[Componente aggiuntivo PGO di Visual Studio 2013 nell'hub di prestazioni e diagnostica](profile-guided-optimization-in-the-performance-and-diagnostics-hub.md)<br/>

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](reference/c-cpp-building-reference.md)

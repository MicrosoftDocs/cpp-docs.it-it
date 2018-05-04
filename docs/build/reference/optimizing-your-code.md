---
title: Ottimizzazione del codice | Documenti Microsoft
ms.custom: ''
ms.date: 12/28/2017
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- performance, optimizing code
- optimization
- cl.exe compiler, performance
- optimization, C++ code
- code, optimizing
- performance, compiler
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a8b18ba4ce00eb751d8f30debbab3e87b9cce53e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="optimizing-your-code"></a>Ottimizzazione del codice

Attraverso l'ottimizzazione di un file eseguibile, è possibile raggiungere un equilibrio tra velocità di esecuzione e dimensione del codice. In questo argomento vengono illustrati alcuni dei meccanismi disponibili in Visual C++ che consentono di ottimizzare il codice.

## <a name="language-features"></a>Funzionalità del linguaggio

Gli argomenti seguenti vengono descritte alcune delle funzionalità di ottimizzazione nel linguaggio C/C++.

[Pragma e parole chiave di ottimizzazione](../../build/reference/optimization-pragmas-and-keywords.md)  
Un elenco di parole chiave e pragma che è possibile utilizzare il codice per migliorare le prestazioni.

[Opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md)  
Un elenco di **/O** opzioni del compilatore correlato all'esecuzione velocità o codice alle dimensioni.

[Dichiaratore di riferimento rvalue: &&](../../cpp/rvalue-reference-declarator-amp-amp.md)  
I riferimenti rvalue supportano l'implementazione di *la semantica di spostamento*. Se può migliorare significativamente spostamento semantica viene utilizzata per implementare le librerie di modelli, le prestazioni delle applicazioni che utilizzano tali modelli.

### <a name="the-optimize-pragma"></a>Il pragma optimize

Se una sezione di codice ottimizzata causa errori o un rallentamento, è possibile utilizzare il [ottimizzare](../../preprocessor/optimize.md) pragma per disattivare l'ottimizzazione di tale sezione.

Racchiudere il codice tra due pragma, come illustrato di seguito:

```cpp
#pragma optimize("", off)
// some code here
#pragma optimize("", on)
```

## <a name="programming-practices"></a>Tecniche di programmazione

È possibile notare altri messaggi di avviso quando si compila il codice con l'ottimizzazione. Questo comportamento è previsto perché alcuni avvisi riguardano solo il codice ottimizzato. Se è consigliabile prestare attenzione questi avvisi, è possibile evitare molti problemi di ottimizzazione.

L'ottimizzazione di un programma per la velocità di Paradossalmente, potrebbe causare l'esecuzione più lenta di codice. Questo avviene perché alcune ottimizzazioni per la velocità di aumentare le dimensioni del codice. Ad esempio, le funzioni inline Elimina il sovraccarico delle chiamate di funzione. Tuttavia, l'incorporamento eccessivo potrebbe rendere il programma talmente grande che il numero di pagina di memoria virtuale errori aumenta. Pertanto, la velocità ottenuta eliminando le chiamate di funzione vadano persa per effettuare lo swapping di memoria.

Gli argomenti seguenti descrivono le procedure di programmazione.

[Suggerimenti per il miglioramento del codice critico](../../build/reference/tips-for-improving-time-critical-code.md)  
Tecniche di codifica meglio possono garantire prestazioni migliori. Questo argomento verranno suggerite le tecniche che consentono di assicurarsi che le parti del codice critico eseguano in modo soddisfacente di codifica.

[Procedure consigliate di ottimizzazione](../../build/reference/optimization-best-practices.md)  
Fornisce linee guida generali sul modo migliore per ottimizzare l'applicazione.

## <a name="debugging-optimized-code"></a>Debug di codice ottimizzato

Poiché l'ottimizzazione potrebbe modificare il codice creato dal compilatore, è consigliabile eseguire il debug dell'applicazione e misurare le prestazioni e quindi ottimizzare il codice.

Gli argomenti seguenti forniscono informazioni di base su come eseguire il debug.

- [Debug in Visual Studio](/visualstudio/debugger/debugging-in-visual-studio)

- [Problemi comuni durante la creazione di una build di rilascio](../../build/reference/common-problems-when-creating-a-release-build.md)

Gli argomenti seguenti forniscono informazioni più avanzate su come eseguire il debug.

- [Procedura: Eseguire il debug di codice ottimizzato](/visualstudio/debugger/how-to-debug-optimized-code)

- [Causa della possibile perdita di precisione dei numeri a virgola mobile](../../build/reference/why-floating-point-numbers-may-lose-precision.md)

Gli argomenti seguenti forniscono informazioni su come ottimizzare la compilazione, il caricamento e dell'esecuzione del codice.

- [Incremento dell'efficienza delle operazioni del compilatore](../../build/reference/improving-compiler-throughput.md)

- [Mancata generazione di codice in seguito all'uso di nomi di funzione senza ()](../../build/reference/using-function-name-without-parens-produces-no-code.md)

- [Ottimizzazione dell'assembly Inline](../../assembler/inline/optimizing-inline-assembly.md)

- [Impostazione dell'ottimizzazione del compilatore per un progetto ATL](../../atl/reference/specifying-compiler-optimization-for-an-atl-project.md)

- [Quali tecniche di ottimizzazione è preferibile utilizzare per migliorare le prestazioni dell'applicazione client durante il caricamento?](../../build/dll-frequently-asked-questions.md#mfc_optimization)

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](../../build/reference/c-cpp-building-reference.md)  

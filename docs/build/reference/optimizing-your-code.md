---
title: Ottimizzazione del codice | Microsoft Docs
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
ms.openlocfilehash: 180586f55ea57100286c3c598ac62eb83107d7c9
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45714376"
---
# <a name="optimizing-your-code"></a>Ottimizzazione del codice

Ottimizzazione di un file eseguibile, è possibile ottenere un equilibrio tra velocità di esecuzione e dimensione del codice. In questo argomento vengono illustrati alcuni dei meccanismi disponibili in Visual C++ che consentono di ottimizzare il codice.

## <a name="language-features"></a>Funzionalità del linguaggio

Gli argomenti seguenti descrivono alcune delle funzionalità di ottimizzazione del linguaggio C/C++.

[Ottimizzazione pragma e parole chiave](../../build/reference/optimization-pragmas-and-keywords.md) un elenco di parole chiave e pragma che è possibile usare nel codice per migliorare le prestazioni.

[Opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md) un elenco delle **/O** opzioni del compilatore che interessano in particolare le dimensioni di velocità o codice di esecuzione.

[Dichiaratore di riferimento rvalue: & &](../../cpp/rvalue-reference-declarator-amp-amp.md) riferimenti Rvalue supportano l'implementazione della *semantica di spostamento*. Se la semantica viene utilizzata per implementare le librerie di modelli, le prestazioni delle applicazioni che usano i modelli di spostamento può migliorare significativamente.

### <a name="the-optimize-pragma"></a>Il pragma optimize

Se una sezione di codice ottimizzata provoca un rallentamento o errori, è possibile usare la [ottimizzare](../../preprocessor/optimize.md) pragma per disattivare l'ottimizzazione per quella sezione.

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

[Suggerimenti per migliorare il codice critico](../../build/reference/tips-for-improving-time-critical-code.md) meglio le tecniche di codifica possono garantire prestazioni migliori. Questo argomento verranno suggerite le tecniche che consentono di assicurarsi che le parti del codice critico eseguano in modo soddisfacente di codifica.

[Le procedure consigliate di ottimizzazione](../../build/reference/optimization-best-practices.md) fornite linee guida generali sul modo migliore per ottimizzare l'applicazione.

## <a name="debugging-optimized-code"></a>Debug di codice ottimizzato

Poiché l'ottimizzazione potrebbe modificare il codice creato dal compilatore, è consigliabile che il debug dell'applicazione e valutarne le prestazioni e quindi ottimizzare il codice.

Gli argomenti seguenti forniscono informazioni di base su come eseguire il debug.

- [Debug in Visual Studio](/visualstudio/debugger/debugging-in-visual-studio)

- [Problemi comuni durante la creazione di una build di rilascio](../../build/reference/common-problems-when-creating-a-release-build.md)

Gli argomenti seguenti forniscono informazioni più avanzate su come eseguire il debug.

- [Procedura: Eseguire il debug di codice ottimizzato](/visualstudio/debugger/how-to-debug-optimized-code)

- [Causa della possibile perdita di precisione dei numeri a virgola mobile](../../build/reference/why-floating-point-numbers-may-lose-precision.md)

Gli argomenti seguenti forniscono informazioni su come ottimizzare la compilazione, il caricamento e l'esecuzione del codice.

- [Incremento dell'efficienza delle operazioni del compilatore](../../build/reference/improving-compiler-throughput.md)

- [Mancata generazione di codice in seguito all'uso di nomi di funzione senza ()](../../build/reference/using-function-name-without-parens-produces-no-code.md)

- [Ottimizzazione dell'assembly Inline](../../assembler/inline/optimizing-inline-assembly.md)

- [Impostazione dell'ottimizzazione del compilatore per un progetto ATL](../../atl/reference/specifying-compiler-optimization-for-an-atl-project.md)

- [Quali tecniche di ottimizzazione è necessario usare per migliorare le prestazioni dell'applicazione client durante il caricamento?](../../build/dll-frequently-asked-questions.md#mfc_optimization)

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](../../build/reference/c-cpp-building-reference.md)

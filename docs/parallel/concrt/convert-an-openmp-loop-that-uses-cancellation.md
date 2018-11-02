---
title: "Procedura: Convertire un ciclo OpenMP che usa l'annullamento per l'utilizzo del runtime di concorrenza"
ms.date: 11/04/2016
helpviewer_keywords:
- converting from OpenMP to the Concurrency Runtime, cancellation
- cancellation, converting from OpenMP to the Concurrency Runtime
ms.assetid: 4b0b3c33-bfa9-4e96-ae08-aef245a39cbb
ms.openlocfilehash: f3a53113952a12b6b25839deb20548c56a9b7e1c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50569572"
---
# <a name="how-to-convert-an-openmp-loop-that-uses-cancellation-to-use-the-concurrency-runtime"></a>Procedura: Convertire un ciclo OpenMP che usa l'annullamento per l'utilizzo del runtime di concorrenza

Alcuni cicli paralleli non richiedono che tutte le iterazioni da eseguire. Ad esempio, un algoritmo che cerca un valore possibile terminare dopo il valore viene trovato. OpenMP non fornisce un meccanismo per interrompere un ciclo parallelo. Tuttavia, è possibile utilizzare un valore booleano o flag, per consentire un'iterazione del ciclo per indicare che la soluzione è stata trovata. Il Runtime di concorrenza fornisce funzionalità che consente a un'attività da annullare altre attività che non è ancora stata avviata.

In questo esempio viene illustrato come convertire una OpenMP [parallele](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[per](../../parallel/openmp/reference/for-openmp.md) ciclo che non richiede per tutte le iterazioni da eseguire per utilizzare il meccanismo di annullamento di Runtime di concorrenza.

## <a name="example"></a>Esempio

Questo esempio Usa OpenMP sia il Runtime di concorrenza per implementare una versione parallela del [std:: any_of](../../standard-library/algorithm-functions.md#any_of) algoritmo. La versione di OpenMP di questo esempio viene usato un flag per il coordinamento tra tutte le iterazioni del ciclo parallelo che è stata soddisfatta la condizione. La versione che usa il Runtime di concorrenza Usa la [Concurrency](reference/structured-task-group-class.md#cancel) metodo che deve interrompere l'operazione globale quando viene soddisfatta la condizione.

[!code-cpp[concrt-openmp#2](../../parallel/concrt/codesnippet/cpp/convert-an-openmp-loop-that-uses-cancellation_1.cpp)]

Questo esempio produce il seguente output:

```Output
Using OpenMP...
9114046 is in the array.
Using the Concurrency Runtime...
9114046 is in the array.
```

Nella versione di OpenMP che usa, eseguire tutte le iterazioni del ciclo, anche quando il flag è impostato. Inoltre, se un'attività dispongono di qualsiasi attività figlio, il flag avrebbe anche a essere disponibile per le attività figlio per comunicare l'annullamento. Nel Runtime di concorrenza, quando un gruppo di attività viene annullato, la fase di esecuzione Annulla l'intero albero di lavoro, incluse le attività figlio. Il [Concurrency:: parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algoritmo vengono utilizzate attività per eseguire operazioni. Pertanto, quando un'iterazione del ciclo Annulla l'attività radice, l'intero albero di calcolo viene anche annullata. Quando un albero di lavoro viene annullato, il runtime non Avvia nuova attività. Tuttavia, il runtime consente attività che è già iniziato a fine. Pertanto, nel caso del `parallel_for_each` algoritmo, iterazioni del ciclo active possono pulire le risorse.

In entrambe le versioni di questo esempio, se la matrice contiene più di una copia del valore per la ricerca, più iterazioni del ciclo possono impostare contemporaneamente il risultato e annullamento dell'operazione globale. È possibile usare una primitiva di sincronizzazione, ad esempio una sezione critica, se il problema richiede che solo un'attività esegue un'operazione quando viene soddisfatta una condizione.

È anche possibile usare per annullare le attività che usano la libreria PPL di gestione delle eccezioni. Per altre informazioni sull'annullamento, vedere [annullamento nella libreria PPL](cancellation-in-the-ppl.md).

Per altre informazioni sulle `parallel_for_each` e altri algoritmi paralleli, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `concrt-omp-parallel-any-of.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc /openmp concrt-omp-parallelo-any-of. cpp**

## <a name="see-also"></a>Vedere anche

[Migrazione da OpenMP al runtime di concorrenza](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)<br/>
[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)<br/>
[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)


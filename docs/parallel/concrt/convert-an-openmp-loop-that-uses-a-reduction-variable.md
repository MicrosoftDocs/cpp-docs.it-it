---
title: "Procedura: Convertire un ciclo OpenMP che usa una variabile di riduzione per l'utilizzo del runtime di concorrenza"
ms.date: 11/04/2016
helpviewer_keywords:
- converting from OpenMP to the Concurrency Runtime, reduction variables
- reduction variables, converting from OpenMP to the Concurrency Runtime
ms.assetid: 96623f36-5e57-4d3f-8c13-669e6cd535b1
ms.openlocfilehash: 06418bc1a331a5c77653087434a5cc621f92e7d7
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91498549"
---
# <a name="how-to-convert-an-openmp-loop-that-uses-a-reduction-variable-to-use-the-concurrency-runtime"></a>Procedura: Convertire un ciclo OpenMP che usa una variabile di riduzione per l'utilizzo del runtime di concorrenza

In questo esempio viene illustrato come convertire un ciclo OpenMP [Parallel](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[for](../openmp/reference/openmp-directives.md#for-openmp) che utilizza la clausola [reduction](../openmp/reference/openmp-clauses.md#reduction) per utilizzare la runtime di concorrenza.

La `reduction` clausola OpenMP consente di specificare una o più variabili thread-private che sono soggette a un'operazione di riduzione alla fine dell'area parallela. OpenMP definisce un set di operatori di riduzione. Ogni variabile di riduzione deve essere scalare, ad esempio,, **`int`** **`long`** e **`float`** . OpenMP definisce inoltre diverse restrizioni relative alla modalità di utilizzo delle variabili di riduzione in un'area parallela.

La libreria PPL (Parallel Patterns Library) fornisce la classe [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) , che fornisce un'archiviazione locale di thread riutilizzabile che consente di eseguire calcoli con granularità fine e quindi di unire tali calcoli in un risultato finale. La `combinable` classe è un modello che agisce su tipi scalari e complessi. Per usare la `combinable` classe, eseguire calcoli secondari nel corpo di un costrutto parallelo e quindi chiamare il metodo [Concurrency:: combinable:: combine](reference/combinable-class.md#combine) o [Concurrency:: combinable:: combine_each](reference/combinable-class.md#combine_each) per produrre il risultato finale. I `combine` `combine_each` metodi e accettano una *funzione di combinazione* che specifica come combinare ogni coppia di elementi. La `combinable` classe non è pertanto limitata a un set fisso di operatori di riduzione.

## <a name="example"></a>Esempio

Questo esempio USA OpenMP e il runtime di concorrenza per calcolare la somma dei primi 35 numeri di Fibonacci.

[!code-cpp[concrt-openmp#7](../../parallel/concrt/codesnippet/cpp/convert-an-openmp-loop-that-uses-a-reduction-variable_1.cpp)]

Questo esempio produce il seguente output:

```Output
Using OpenMP...
The sum of the first 35 Fibonacci numbers is 14930351.
Using the Concurrency Runtime...
The sum of the first 35 Fibonacci numbers is 14930351.
```

Per ulteriori informazioni sulla `combinable` classe, vedere [contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md).

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `concrt-omp-fibonacci-reduction.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **cl.exe/EHsc/OpenMP concrt-omp-fibonacci-reduction. cpp**

## <a name="see-also"></a>Vedere anche

[Migrazione da OpenMP al runtime di concorrenza](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)<br/>
[Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)

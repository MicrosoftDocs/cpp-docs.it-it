---
description: 'Altre informazioni su: procedura: usare combinable per combinare set'
title: "Procedura: Usare l'oggetto combinable per combinare set"
ms.date: 11/04/2016
helpviewer_keywords:
- combinable class, example
- combining sets with combinable [Concurrency Runtime]
ms.assetid: 66ffe8e3-6bbb-4e9f-b790-b612922a68a7
ms.openlocfilehash: da51bf8a2e7dd21432b9dcce73c6ead83ce23e35
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97172466"
---
# <a name="how-to-use-combinable-to-combine-sets"></a>Procedura: Usare l'oggetto combinable per combinare set

In questo argomento viene illustrato come utilizzare la classe [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) per calcolare il set di numeri primi.

## <a name="example"></a>Esempio

Nell'esempio seguente viene calcolato il set di numeri primi due volte. Ogni calcolo archivia il risultato in un oggetto [std:: bitst](../../standard-library/bitset-class.md) . Nell'esempio viene innanzitutto calcolato il set in modo seriale, quindi viene calcolato il set in parallelo. L'esempio inoltre visualizza nella console il tempo necessario per eseguire entrambi i calcoli.

In questo esempio vengono utilizzati l'algoritmo [Concurrency::p arallel_for](reference/concurrency-namespace-functions.md#parallel_for) e un `combinable` oggetto per generare set di thread locali. USA quindi il metodo [Concurrency:: combinable:: combine_each](reference/combinable-class.md#combine_each) per combinare i set locali del thread nel set finale.

[!code-cpp[concrt-parallel-combine-primes#1](../../parallel/concrt/codesnippet/cpp/how-to-use-combinable-to-combine-sets_1.cpp)]

L'output di esempio seguente è relativo a un computer con quattro processori.

```Output
serial time: 312 ms

parallel time: 78 ms
```

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `parallel-combine-primes.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **cl.exe/EHsc parallel-Combine-primes. cpp**

## <a name="see-also"></a>Vedi anche

[Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)<br/>
[Classe combinable](../../parallel/concrt/reference/combinable-class.md)<br/>
[Metodo combinable::combine_each](reference/combinable-class.md#combine_each)

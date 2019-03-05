---
title: 'Procedura: Usare la classe combinable per combinare set'
ms.date: 11/04/2016
helpviewer_keywords:
- combinable class, example
- combining sets with combinable [Concurrency Runtime]
ms.assetid: 66ffe8e3-6bbb-4e9f-b790-b612922a68a7
ms.openlocfilehash: bf8a5bee65ea0ba1718c1d4d436b6af3e0b95961
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57296098"
---
# <a name="how-to-use-combinable-to-combine-sets"></a>Procedura: Usare la classe combinable per combinare set

Questo argomento viene illustrato come usare il [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) classe per calcolare il set di numeri primi.

## <a name="example"></a>Esempio

Nell'esempio seguente calcola il set di numeri primi due volte. Ogni calcolo archivia il risultato in un [std:: bitset](../../standard-library/bitset-class.md) oggetto. Nell'esempio calcola prima di tutto il set in modo seriale, quindi calcola il set in parallelo. L'esempio inoltre visualizza nella console il tempo necessario per eseguire entrambi i calcoli.

Questo esempio Usa la [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmo e un `combinable` oggetto per generare il set di thread-local. Quindi, utilizza il [concurrency::combinable::combine_each](reference/combinable-class.md#combine_each) metodo per combinare i set di thread locali nel set finale.

[!code-cpp[concrt-parallel-combine-primes#1](../../parallel/concrt/codesnippet/cpp/how-to-use-combinable-to-combine-sets_1.cpp)]

L'output di esempio seguente è relativo a un computer con quattro processori.

```Output
serial time: 312 ms

parallel time: 78 ms
```

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-combine-primes.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc parallel-combine-primes. cpp**

## <a name="see-also"></a>Vedere anche

[Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)<br/>
[Classe combinable](../../parallel/concrt/reference/combinable-class.md)<br/>
[Metodo combinable:: combine_each](reference/combinable-class.md#combine_each)

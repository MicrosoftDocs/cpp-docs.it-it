---
title: C++ AMP (C++ Accelerated Massive Parallelism)
ms.date: 11/04/2016
helpviewer_keywords:
- C++ AMP (see C++ Accelerated Massive Parallelism)
- C++ Accelerated Massive Parallelism, getting started
ms.assetid: e27824cb-3167-409b-8c3f-a0e476d8f349
ms.openlocfilehash: c9ef7ab816ec0d17b9dc0b569a6f3a43af83cc68
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80167693"
---
# <a name="c-amp-c-accelerated-massive-parallelism"></a>C++ AMP (C++ Accelerated Massive Parallelism)

C++AMP (C++ Accelerated Massive Parallelism) accelera l'esecuzione del C++ codice sfruttando l'hardware parallelo dei dati, comunemente presente come unità di elaborazione grafica (GPU) in una scheda grafica discreta. Il C++ modello di programmazione amp include il supporto per matrici multidimensionali, indicizzazione, trasferimento di memoria e affiancamento. Include inoltre una libreria di funzioni matematiche. È possibile utilizzare C++ le estensioni del linguaggio amp per controllare il modo in cui i dati vengono spostati dalla CPU alla GPU e viceversa.

## <a name="related-topics"></a>Argomenti correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[Panoramica di C++ AMP](../../parallel/amp/cpp-amp-overview.md)|Descrive le funzionalità principali di C++ amp e della libreria matematica.|
|[Uso di espressioni lambda, oggetti funzione e funzioni con restrizioni](../../parallel/amp/using-lambdas-function-objects-and-restricted-functions.md)|Viene descritto come utilizzare le espressioni lambda, gli oggetti funzione e le funzioni limitate nelle chiamate al metodo [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) .|
|[Uso di sezioni](../../parallel/amp/using-tiles.md)|Viene descritto come usare i riquadri per accelerare il C++ codice amp.|
|[Uso degli oggetti accelerator e accelerator_view](../../parallel/amp/using-accelerator-and-accelerator-view-objects.md)|Viene descritto come utilizzare gli acceleratori per personalizzare l'esecuzione del codice nella GPU.|
|[Uso di C++ AMP in app UWP](../../parallel/amp/using-cpp-amp-in-windows-store-apps.md)|Viene descritto come usare C++ le app AMP in piattaforma UWP (Universal Windows Platform) (UWP) che usano i tipi di Windows Runtime.|
|[Grafica (C++ AMP)](../../parallel/amp/graphics-cpp-amp.md)|Viene descritto come utilizzare la C++ libreria grafica amp.|
|[Procedura dettagliata: moltiplicazione di matrici](../../parallel/amp/walkthrough-matrix-multiplication.md)|Viene illustrata la moltiplicazione di matrici mediante C++ codice amp e affiancamento.|
|[Procedura dettagliata: debug di un'applicazione C++ AMP](../../parallel/amp/walkthrough-debugging-a-cpp-amp-application.md)|Viene illustrato come creare ed eseguire il debug di un'applicazione che usa la riduzione parallela per sommare un'ampia gamma di numeri interi.|

## <a name="reference"></a>Riferimento

[Riferimento (C++ AMP)](../../parallel/amp/reference/reference-cpp-amp.md)<br/>
[Parola chiave tile_static](../../cpp/tile-static-keyword.md)<br/>
[restrict (C++ AMP)](../../cpp/restrict-cpp-amp.md)

## <a name="other-resources"></a>Risorse aggiuntive

[Blog sulla programmazione parallela nel codice nativo](https://go.microsoft.com/fwlink/p/?linkid=238472)<br/>
[C++Progetti di esempio AMP per il download](https://go.microsoft.com/fwlink/p/?linkid=248508)<br/>
[Analisi del C++ codice amp con il Visualizzatore di concorrenza](https://blogs.msdn.microsoft.com/nativeconcurrency/2012/03/09/analyzing-c-amp-code-with-the-concurrency-visualizer/)

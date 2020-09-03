---
title: C++ AMP (C++ Accelerated Massive Parallelism)
ms.date: 11/04/2016
helpviewer_keywords:
- C++ AMP (see C++ Accelerated Massive Parallelism)
- C++ Accelerated Massive Parallelism, getting started
ms.assetid: e27824cb-3167-409b-8c3f-a0e476d8f349
ms.openlocfilehash: 243c476b6536278eb09b26b24becb65276d6e48a
ms.sourcegitcommit: 093f49b8b69daf86661adc125b1d2d7b1f0e0650
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2020
ms.locfileid: "89427634"
---
# <a name="c-amp-c-accelerated-massive-parallelism"></a>C++ AMP (C++ Accelerated Massive Parallelism)

C++ AMP (C++ Accelerated Massive Parallelism) accelera l'esecuzione del codice C++ sfruttando l'hardware parallelo dei dati, comunemente presente come unità di elaborazione grafica (GPU) in una scheda grafica discreta. Il modello di programmazione C++ AMP include il supporto per matrici multidimensionali, indicizzazione, trasferimento di memoria e affiancamento. Include inoltre una libreria di funzioni matematiche. È possibile utilizzare le estensioni del linguaggio C++ AMP per controllare il modo in cui i dati vengono spostati dalla CPU alla GPU e viceversa.

## <a name="related-topics"></a>Argomenti correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[Panoramica di C++ AMP](../../parallel/amp/cpp-amp-overview.md)|Vengono descritte le funzionalità principali di C++ AMP e la libreria matematica.|
|[Utilizzo di espressioni lambda, oggetti funzione e funzioni con restrizioni](../../parallel/amp/using-lambdas-function-objects-and-restricted-functions.md)|Viene descritto come utilizzare le espressioni lambda, gli oggetti funzione e le funzioni limitate nelle chiamate al metodo [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) .|
|[Uso di riquadri](../../parallel/amp/using-tiles.md)|Viene descritto come utilizzare i riquadri per accelerare il codice C++ AMP.|
|[Uso di oggetti Accelerator e accelerator_view](../../parallel/amp/using-accelerator-and-accelerator-view-objects.md)|Viene descritto come utilizzare gli acceleratori per personalizzare l'esecuzione del codice nella GPU.|
|[Uso di C++ AMP nelle app UWP](../../parallel/amp/using-cpp-amp-in-windows-store-apps.md)|Viene descritto come usare C++ AMP nelle app piattaforma UWP (Universal Windows Platform) (UWP) che usano tipi di Windows Runtime.|
|[Grafica (C++ AMP)](../../parallel/amp/graphics-cpp-amp.md)|Viene descritto come utilizzare la libreria grafica di C++ AMP.|
|[Procedura dettagliata: moltiplicazione di matrici](../../parallel/amp/walkthrough-matrix-multiplication.md)|Viene illustrata la moltiplicazione di matrici utilizzando codice e affiancamento C++ AMP.|
|[Procedura dettagliata: debug di un'applicazione C++ AMP](../../parallel/amp/walkthrough-debugging-a-cpp-amp-application.md)|Viene illustrato come creare ed eseguire il debug di un'applicazione che usa la riduzione parallela per sommare un'ampia gamma di numeri interi.|

## <a name="reference"></a>Informazioni di riferimento

[Riferimento (C++ AMP)](../../parallel/amp/reference/reference-cpp-amp.md)<br/>
[Parola chiave tile_static](../../cpp/tile-static-keyword.md)<br/>
[restrict (C++ AMP)](../../cpp/restrict-cpp-amp.md)

## <a name="other-resources"></a>Risorse aggiuntive

[Blog sulla programmazione parallela nel codice nativo](/archive/blogs/nativeconcurrency/)<br/>
[C++ AMP progetti di esempio per il download](/archive/blogs/nativeconcurrency/c-amp-sample-projects-for-download)<br/>
[Analisi del codice di C++ AMP con il Visualizzatore di concorrenza](/archive/blogs/nativeconcurrency/analyzing-c-amp-code-with-the-concurrency-visualizer)

---
title: C++ AMP (C++ Accelerated Massive Parallelism) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-amp
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- C++ AMP (see C++ Accelerated Massive Parallelism)
- C++ Accelerated Massive Parallelism, getting started
ms.assetid: e27824cb-3167-409b-8c3f-a0e476d8f349
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 340a21a3bbcb1853d66de01bddf9425fed0c8183
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43689844"
---
# <a name="c-amp-c-accelerated-massive-parallelism"></a>C++ AMP (C++ Accelerated Massive Parallelism)
C++ AMP (C++ Accelerated Massive Parallelism) accelera l'esecuzione del codice C++ sfruttando il parallelismo dell'hardware che è in genere presente come un'unità di elaborazione grafica (GPU) in una scheda grafica discreta. Il modello di programmazione C++ AMP include il supporto per le matrici multidimensionali, indicizzazione, trasferimento di memoria e l'affiancamento. Include inoltre una libreria di funzioni matematiche. È possibile usare le estensioni del linguaggio C++ AMP per controllare come i dati vengono spostati dalla CPU alla GPU e il backup.  
  
## <a name="related-topics"></a>Argomenti correlati  
  
|Titolo|Descrizione|  
|-----------|-----------------|  
|[Panoramica di C++ AMP](../../parallel/amp/cpp-amp-overview.md)|Descrive le funzionalità principali di C++ AMP e della libreria matematica.|  
|[Uso di espressioni lambda, oggetti funzione e funzioni con restrizioni](../../parallel/amp/using-lambdas-function-objects-and-restricted-functions.md)|Viene descritto come utilizzare le espressioni lambda, oggetti funzione e funzioni con restrizioni nelle chiamate per il [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) (metodo).|  
|[Uso di sezioni](../../parallel/amp/using-tiles.md)|Viene descritto come utilizzare i riquadri per accelerare il codice C++ AMP.|  
|[Uso degli oggetti accelerator e accelerator_view](../../parallel/amp/using-accelerator-and-accelerator-view-objects.md)|Viene descritto come utilizzare gli acceleratori per personalizzare l'esecuzione del codice sulla GPU.|  
|[Uso di C++ AMP in app UWP](../../parallel/amp/using-cpp-amp-in-windows-store-apps.md)|Viene descritto come utilizzare C++ AMP nelle App Universal Windows Platform (UWP) che utilizzano i tipi Windows Runtime.|  
|[Grafica (C++ AMP)](../../parallel/amp/graphics-cpp-amp.md)|Viene descritto come usare la libreria grafica di C++ AMP.|  
|[Procedura dettagliata: moltiplicazione di matrici](../../parallel/amp/walkthrough-matrix-multiplication.md)|Viene illustrata la moltiplicazione di matrici utilizzando codice C++ AMP e l'affiancamento.|  
|[Procedura dettagliata: debug di un'applicazione C++ AMP](../../parallel/amp/walkthrough-debugging-a-cpp-amp-application.md)|Viene illustrato come creare ed eseguire il debug di un'applicazione che utilizza la riduzione parallela per riassumere una grande matrice di numeri interi.|  
  
## <a name="reference"></a>Riferimenti  

[Riferimento (C++ AMP)](../../parallel/amp/reference/reference-cpp-amp.md)    
[parola chiave tile_static](../../cpp/tile-static-keyword.md)    
[restrict (C++ AMP)](../../cpp/restrict-cpp-amp.md)  
  
## <a name="other-resources"></a>Altre risorse  
 
[Programmazione parallela nel Blog del codice nativo](http://go.microsoft.com/fwlink/p/?linkid=238472)  
[Progetti di esempio di C++ AMP per il download](http://go.microsoft.com/fwlink/p/?linkid=248508)  
[Analisi del codice AMP C++ con il Visualizzatore di concorrenza](https://blogs.msdn.microsoft.com/nativeconcurrency/2012/03/09/analyzing-c-amp-code-with-the-concurrency-visualizer/)
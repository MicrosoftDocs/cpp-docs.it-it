---
title: Riferimento (C++ AMP)
ms.date: 11/04/2016
f1_keywords:
- amp/Concurrency::Reference (C++ AMP)
helpviewer_keywords:
- C++ Accelerated Massive Parallelism, reference
ms.assetid: 372a8aed-8a53-48c9-996f-9c3cf09c9fa8
ms.openlocfilehash: 5e6905adee6e6cad0c0c49488352f4a039aa27eb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50630059"
---
# <a name="reference-c-amp"></a>Riferimento (C++ AMP)

In questa sezione contiene informazioni di riferimento per il runtime C++ Accelerated Massive Parallelism (C++ AMP).

> [!NOTE]
>  Lo standard del linguaggio C++ si riserva l'uso di identificatori che iniziano con un carattere di sottolineatura (`_`) per le implementazioni come le librerie. Non usare nomi che iniziano con un carattere di sottolineatura nel codice. Il comportamento degli elementi di codice i cui nomi seguono questa convenzione non è garantito ed è soggetto a modifiche nelle future versioni. Per questi motivi, tali elementi di codice vengono omessi da questa documentazione.

## <a name="in-this-section"></a>In questa sezione

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)<br/>
Fornisce classi e le funzioni che consentono l'accelerazione del codice C++ su hardware parallelo.

[Spazio dei nomi Concurrency::direct3d](concurrency-direct3d-namespace.md)<br/>
Sono disponibili funzioni che supportano l'interoperabilità D3D. Consente l'utilizzo delle risorse D3D per il calcolo in codice AMP e l'uso delle risorse create in AMP nel codice D3D, senza creare copie intermedie ridondanti. È possibile utilizzare C++ AMP per accelerare gradualmente le sezioni di calcolo a elevato utilizzo delle applicazioni DirectX e usare le API D3D sui dati prodotti dai calcoli AMP.

[Spazio dei nomi Concurrency::fast_math](concurrency-fast-math-namespace.md)<br/>
Le funzioni di `fast_math` dello spazio dei nomi non sono conformi a C99. Vengono fornite solo le versioni e precisione singola di ogni funzione. Queste funzioni usano le funzioni intrinseche di DirectX, che sono più veloci rispetto alle funzioni corrispondenti nel `precise_math` dello spazio dei nomi e non richiedono il supporto a precisione doppia estesa sull'acceleratore, ma sono meno accurate. Sono disponibili due versioni di ogni funzione per la compatibilità a livello di origine con il codice C99; entrambe le versioni accettano e restituiscono valori a precisione singola.

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)<br/>
Fornisce tipi e funzioni che sono progettate per la programmazione grafica.

[Spazio dei nomi Concurrency::precise_math](concurrency-precise-math-namespace.md)<br/>
Le funzioni di `precise_math` dello spazio dei nomi sono conformi a C99. Le versioni sia a precisione singola e precisione doppia di ogni funzione sono incluse. Queste funzioni, incluse le funzioni a precisione singola, ovvero richiedono il supporto a precisione doppia estesa sull'acceleratore.

## <a name="related-sections"></a>Sezioni correlate

[C++ AMP (C++ Accelerated Massive Parallelism)](../../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)<br/>
C++ AMP accelera l'esecuzione del codice C++ sfruttando il parallelismo dell'hardware che è in genere presente come un'unità di elaborazione grafica (GPU) in una scheda grafica discreta.


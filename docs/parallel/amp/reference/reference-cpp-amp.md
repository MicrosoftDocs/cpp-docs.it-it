---
description: 'Altre informazioni su: riferimento (C++ AMP)'
title: Riferimento (C++ AMP)
ms.date: 11/04/2016
f1_keywords:
- amp/Concurrency::Reference (C++ AMP)
helpviewer_keywords:
- C++ Accelerated Massive Parallelism, reference
ms.assetid: 372a8aed-8a53-48c9-996f-9c3cf09c9fa8
ms.openlocfilehash: 043522d7524078c3c7fec956021fdd7a86347169
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327630"
---
# <a name="reference-c-amp"></a>Riferimento (C++ AMP)

Questa sezione contiene informazioni di riferimento per il runtime di C++ Accelerated Massive Parallelism (C++ AMP).

> [!NOTE]
> Lo standard del linguaggio C++ si riserva l'uso di identificatori che iniziano con un carattere di sottolineatura (`_`) per le implementazioni come le librerie. Non usare nomi che iniziano con un carattere di sottolineatura nel codice. Il comportamento degli elementi di codice i cui nomi seguono questa convenzione non è garantito ed è soggetto a modifiche nelle future versioni. Per questi motivi, tali elementi di codice vengono omessi da questa documentazione.

## <a name="in-this-section"></a>Contenuto della sezione

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)<br/>
Fornisce classi e funzioni che consentono l'accelerazione del codice C++ su hardware parallelo dei dati.

[Spazio dei nomi Concurrency::direct3d](concurrency-direct3d-namespace.md)<br/>
Fornisce funzioni che supportano l'interoperabilità D3D. Consente un uso uniforme delle risorse D3D per il calcolo in codice AMP e l'uso di risorse create in AMP nel codice D3D, senza creare copie intermedie ridondanti. È possibile usare C++ AMP per accelerare gradualmente le sezioni a elevato utilizzo di calcolo delle applicazioni DirectX e usare l'API D3D sui dati prodotti da calcoli AMP.

[Spazio dei nomi Concurrency::fast_math](concurrency-fast-math-namespace.md)<br/>
Le funzioni nello `fast_math` spazio dei nomi non sono conformi a C99. Vengono fornite solo le versioni con precisione singola di ogni funzione. Queste funzioni usano le funzioni intrinseche DirectX, che sono più veloci delle funzioni corrispondenti nello `precise_math` spazio dei nomi e non richiedono il supporto esteso a precisione doppia sul tasto di scelta rapida, ma sono meno accurate. Esistono due versioni di ciascuna funzione per la compatibilità a livello di origine con il codice C99. entrambe le versioni accettano e restituiscono valori a precisione singola.

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)<br/>
Fornisce tipi e funzioni progettati per la programmazione grafica.

[Concorrenza::p recise_math spazio dei nomi](concurrency-precise-math-namespace.md)<br/>
Le funzioni nello `precise_math` spazio dei nomi sono conformi a C99. Sono incluse entrambe le versioni con precisione singola e precisione doppia di ogni funzione. Queste funzioni, incluse le funzioni a precisione singola, richiedono un supporto esteso a precisione doppia sul tasto di scelta rapida.

## <a name="related-sections"></a>Sezioni correlate

[C++ AMP (C++ Accelerated Massive Parallelism)](../../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)<br/>
C++ AMP accelera l'esecuzione del codice C++ sfruttando l'hardware parallelo ai dati presente in genere come unità di elaborazione grafica (GPU) in una scheda grafica discreta.

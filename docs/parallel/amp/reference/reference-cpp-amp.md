---
title: Riferimento (C++ AMP)
ms.date: 11/04/2016
f1_keywords:
- amp/Concurrency::Reference (C++ AMP)
helpviewer_keywords:
- C++ Accelerated Massive Parallelism, reference
ms.assetid: 372a8aed-8a53-48c9-996f-9c3cf09c9fa8
ms.openlocfilehash: ff7c2b0894a2fa3de7674a72bc93dd3f781398b9
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77126409"
---
# <a name="reference-c-amp"></a>Riferimento (C++ AMP)

Questa sezione contiene informazioni di riferimento per C++ il runtime amp (C++ Accelerated Massive Parallelism).

> [!NOTE]
> Lo standard del linguaggio C++ si riserva l'uso di identificatori che iniziano con un carattere di sottolineatura (`_`) per le implementazioni come le librerie. Non usare nomi che iniziano con un carattere di sottolineatura nel codice. Il comportamento degli elementi di codice i cui nomi seguono questa convenzione non è garantito ed è soggetto a modifiche nelle future versioni. Per questi motivi, tali elementi di codice vengono omessi da questa documentazione.

## <a name="in-this-section"></a>Contenuto della sezione

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)<br/>
Fornisce classi e funzioni che consentono l'accelerazione del C++ codice sull'hardware parallelo dei dati.

[Spazio dei nomi Concurrency::direct3d](concurrency-direct3d-namespace.md)<br/>
Fornisce funzioni che supportano l'interoperabilità D3D. Consente un uso uniforme delle risorse D3D per il calcolo in codice AMP e l'uso di risorse create in AMP nel codice D3D, senza creare copie intermedie ridondanti. È possibile usare C++ amp per accelerare gradualmente le sezioni a elevato utilizzo di calcolo delle applicazioni DirectX e usare l'API D3D sui dati prodotti da calcoli amp.

[Spazio dei nomi Concurrency::fast_math](concurrency-fast-math-namespace.md)<br/>
Le funzioni nello spazio dei nomi `fast_math` non sono conformi a C99. Vengono fornite solo le versioni con precisione singola di ogni funzione. Queste funzioni usano le funzioni intrinseche DirectX, che sono più veloci delle funzioni corrispondenti nello spazio dei nomi `precise_math` e non richiedono il supporto esteso a precisione doppia sul tasto di scelta rapida, ma sono meno accurate. Esistono due versioni di ciascuna funzione per la compatibilità a livello di origine con il codice C99. entrambe le versioni accettano e restituiscono valori a precisione singola.

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)<br/>
Fornisce tipi e funzioni progettati per la programmazione grafica.

[Spazio dei nomi Concurrency::precise_math](concurrency-precise-math-namespace.md)<br/>
Le funzioni nello spazio dei nomi `precise_math` sono conformi a C99. Sono incluse entrambe le versioni con precisione singola e precisione doppia di ogni funzione. Queste funzioni, incluse le funzioni a precisione singola, richiedono un supporto esteso a precisione doppia sul tasto di scelta rapida.

## <a name="related-sections"></a>Sezioni correlate

[C++ AMP (C++ Accelerated Massive Parallelism)](../../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)<br/>
C++AMP accelera l'esecuzione del C++ codice sfruttando l'hardware parallelo ai dati comunemente presente come unità di elaborazione grafica (GPU) in una scheda grafica discreta.

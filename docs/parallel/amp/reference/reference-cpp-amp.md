---
title: Riferimento (C++ AMP) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: amp/Concurrency::Reference (C++ AMP)
dev_langs: C++
helpviewer_keywords: C++ Accelerated Massive Parallelism, reference
ms.assetid: 372a8aed-8a53-48c9-996f-9c3cf09c9fa8
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ae039aec64d761a82ccf71ee12965c0deb9c7aed
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="reference-c-amp"></a>Riferimento (C++ AMP)
In questa sezione contiene informazioni di riferimento per il runtime C++ Accelerated Massive Parallelism (C++ AMP).  
  
> [!NOTE]
>  Lo standard del linguaggio C++ si riserva l'uso di identificatori che iniziano con un carattere di sottolineatura (`_`) per le implementazioni come le librerie. Non usare nomi che iniziano con un carattere di sottolineatura nel codice. Il comportamento degli elementi di codice i cui nomi seguono questa convenzione non è garantito ed è soggetto a modifiche nelle future versioni. Per questi motivi, tali elementi di codice vengono omessi da questa documentazione.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)  
 Fornisce classi e funzioni che consentono l'accelerazione di codice C++ su hardware parallelo di dati.  
  
 [Spazio dei nomi Concurrency::direct3d](concurrency-direct3d-namespace.md)  
 Sono disponibili funzioni che supportano l'interoperabilità D3D. Consente l'utilizzo delle risorse di D3D per il calcolo in codice AMP e l'utilizzo di risorse creati in AMP in codice D3D, senza creare le copie ridondanti intermedi. È possibile utilizzare C++ AMP per velocizzare in modo incrementale le sezioni con uso intensivo delle applicazioni DirectX e usare l'API di D3D su dati ottenuti da calcoli AMP.  
  
 [Spazio dei nomi Concurrency::fast_math](concurrency-fast-math-namespace.md)  
 Le funzioni di `fast_math` dello spazio dei nomi non sono compatibili con C99. Sono disponibili solo con precisione singola versioni di ogni funzione. Queste funzioni usano le funzioni intrinseche di DirectX, che sono più veloci rispetto alle funzioni corrispondenti nel `precise_math` dello spazio dei nomi e non richiedono il supporto esteso e con precisione doppia nel tasto di scelta rapida, ma sono meno accurati. Sono disponibili due versioni di ogni funzione per la compatibilità a livello di origine con codice C99. entrambe le versioni accettano e restituiscono valori a precisione singola.  
  
 [Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)  
 Fornisce tipi e funzioni che sono progettate per la programmazione grafica.  
  
 [Spazio dei nomi Concurrency::precise_math](concurrency-precise-math-namespace.md)  
 Le funzioni di `precise_math` dello spazio dei nomi sono conformi C99. Versioni sia a precisione singola e precisione doppia di ogni funzione sono incluse. Queste funzioni, ad esempio le funzioni e con precisione singola, richiedono il supporto esteso e con precisione doppia nel tasto di scelta rapida.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [C++ AMP (C++ Accelerated Massive Parallelism)](../../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)  
 C++ AMP accelera l'esecuzione del codice C++ che possono sfruttare l'hardware di dati in parallelo in genere presente come un'unità di elaborazione grafica (GPU) su una scheda grafica discreta.






---
title: "Riferimento (C++ AMP) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp/Concurrency::Reference (C++ AMP)"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C++ Accelerated Massive Parallelism, riferimento"
ms.assetid: 372a8aed-8a53-48c9-996f-9c3cf09c9fa8
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Riferimento (C++ AMP)
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

In questa sezione sono incluse informazioni di riferimento per il runtime C\+\+ Accelerated Massive Parallelism \(C\+\+ AMP\).  
  
> [!NOTE]
>  Lo standard del linguaggio C\+\+ riserva l'utilizzo di identificatori che iniziano con un carattere di sottolineatura \(`_`\) per le implementazioni come le librerie.  Non utilizzare nomi che iniziano con un carattere di sottolineatura nel tuo codice.  Il comportamento degli elementi di codice i cui nomi seguono questa convenzione non è garantito ed è soggetto a modifica nelle versioni successive.  Per questi motivi, tali elementi di codice vengono omessi da questa documentazione.  
  
## In questa sezione  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)  
 Fornisce le classi e le funzioni che consentono di accelerare il codice C\+\+ su hardware parallelo.  
  
 [Spazio dei nomi Concurrency::direct3d](../../../parallel/amp/reference/concurrency-direct3d-namespace.md)  
 Fornisce funzioni che supportano l'interoperabilità D3D.  Abilita il solo utilizzo delle risorse D3D per il calcolo in codice AMP e l'utilizzo delle risorse create in AMP nel codice D3D, senza creare copie intermedie ridondanti.  È possibile utilizzare C\+\+ AMP per accelerare gradualmente le sezioni impegnative in termini di calcolo delle applicazioni DirectX e le API D3D sui dati prodotti derivanti dai calcoli AMP.  
  
 [Spazio dei nomi Concurrency::fast\_math](../../../parallel/amp/reference/concurrency-fast-math-namespace.md)  
 Le funzioni nello spazio dei nomi `fast_math` non sono conformi a C99.  Solo le versioni e precisione singola di ogni funzione vengono fornite.  Queste funzioni utilizzano le funzioni intrinseche di DirectX, che sono più veloci delle funzioni corrispondenti nello spazio dei nomi `precise_math` e non richiedono il supporto a precisione doppia estesa sull'acceleratore, ma sono meno accurate.  Esistono due versioni di ciascuna funzione per la compatibilità a livello di origine con il codice C99; entrambe le versioni accettano e restituiscono valori a precisione singola.  
  
 [Spazio dei nomi Concurrency::graphics](../../../parallel/amp/reference/concurrency-graphics-namespace.md)  
 Fornisce tipi e le funzioni progettati per la programmazione grafica.  
  
 [Spazio dei nomi Concurrency::precise\_math](../../../parallel/amp/reference/concurrency-precise-math-namespace.md)  
 Le funzioni nello spazio dei nomi `precise_math` sono conformi a C99.  Sono incluse sia le versioni a precisione singola sia a precisione doppia di ogni funzione.  Queste funzioni, incluse le funzioni a singola precisione, richiedono il supporto a precisione doppia estesa sull'acceleratore.  
  
## Sezioni correlate  
 [C\+\+ AMP \(C\+\+ Accelerated Massive Parallelism\)](../../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)  
 C\+\+ AMP accelera l'esecuzione del codice C\+\+ sfruttando il parallelismo dell'hardware che è in genere presente come una unità di elaborazione grafica \(GPU\) in una scheda grafica discreta.
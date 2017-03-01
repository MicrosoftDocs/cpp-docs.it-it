---
title: Riferimento (C++ AMP) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- amp/Concurrency::Reference (C++ AMP)
dev_langs:
- C++
helpviewer_keywords:
- C++ Accelerated Massive Parallelism, reference
ms.assetid: 372a8aed-8a53-48c9-996f-9c3cf09c9fa8
caps.latest.revision: 11
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 22ba62ab8b3b4f9d14953dbab3edd8228ea85193
ms.openlocfilehash: cc654cedd8639377ab7011c91454f1508c730247
ms.lasthandoff: 02/24/2017

---
# <a name="reference-c-amp"></a>Riferimento (C++ AMP)
In questa sezione contiene informazioni di riferimento per il runtime di C++ Accelerated Massive Parallelism (C++ AMP).  
  
> [!NOTE]
>  Lo standard del linguaggio C++ si riserva l'uso di identificatori che iniziano con un carattere di sottolineatura (`_`) per le implementazioni come le librerie. Non usare nomi che iniziano con un carattere di sottolineatura nel codice. Il comportamento degli elementi di codice i cui nomi seguono questa convenzione non è garantito ed è soggetto a modifiche nelle future versioni. Per questi motivi, tali elementi di codice vengono omessi da questa documentazione.  
  
## <a name="in-this-section"></a>Contenuto della sezione  
 [Concorrenza Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)  
 Fornisce classi e funzioni che consentono l'accelerazione del codice C++ in hardware parallelo di dati.  
  
 [Namespace Concurrency:: Direct3D](concurrency-direct3d-namespace.md)  
 Sono disponibili funzioni che supportano l'interoperabilità D3D. Consente l'utilizzo diretto di D3D risorse per il calcolo nel codice AMP e l'utilizzo di risorse create in AMP D3D codice, senza creare copie ridondanti intermedi. È possibile utilizzare C++ AMP per accelerare in modo incrementale le sezioni con uso intensivo delle applicazioni DirectX e utilizzare l'API D3D su dati ottenuti da calcoli AMP.  
  
 [Namespace Concurrency:: fast_math](concurrency-fast-math-namespace.md)  
 Funzioni di `fast_math` dello spazio dei nomi non sono compatibili con C99. Sono disponibili solo a precisione singola versioni di ogni funzione. Queste funzioni usano le funzioni intrinseche di DirectX, che sono più veloci rispetto alle funzioni corrispondenti nel `precise_math` dello spazio dei nomi e non richiedono il supporto esteso e precisione doppia sull'acceleratore, ma sono meno accurate. Esistono due versioni di ogni funzione per la compatibilità a livello di origine con codice C99. entrambe le versioni accettano e restituiscono valori a precisione singola.  
  
 [Concurrency:: Graphics Namespace](concurrency-graphics-namespace.md)  
 Fornisce tipi e funzioni che sono progettate per la programmazione grafica.  
  
 [Namespace Concurrency:: precise_math](concurrency-precise-math-namespace.md)  
 Funzioni di `precise_math` dello spazio dei nomi sono conformi C99. Sono incluse sia a precisione singola e precisione doppia versioni di ogni funzione. Queste funzioni, ad esempio le funzioni e precisione singola, richiedono il supporto esteso e precisione doppia sull'acceleratore.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [C++ AMP (C++ Accelerated Massive Parallelism)](../../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)  
 C++ AMP accelera l'esecuzione del codice C++ di sfruttare l'hardware di dati in parallelo in genere presente come un'unità di elaborazione grafica (GPU) su una scheda grafica.







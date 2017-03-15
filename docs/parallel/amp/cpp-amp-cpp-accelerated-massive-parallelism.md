---
title: "C++ AMP (C++ Accelerated Massive Parallelism) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C++ Accelerated Massive Parallelism, introduzione"
  - "C++ AMP (vedere C++ Accelerated Massive Parallelism)"
ms.assetid: e27824cb-3167-409b-8c3f-a0e476d8f349
caps.latest.revision: 22
caps.handback.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# C++ AMP (C++ Accelerated Massive Parallelism)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

C\+\+ AMP \(C\+\+ Accelerated Massive Parallelism\) accelera l'esecuzione del codice C\+\+ sfruttando il parallelismo dell'hardware che è in genere presente come una unità di elaborazione grafica \(GPU\) in una scheda grafica discreta.  Il modello di programmazione C\+\+ AMP supporta matrici multidimensionali, indicizzazione, trasferimento di memoria, e tiling.  Include inoltre una libreria di funzioni matematiche.  È possibile utilizzare le estensioni del linguaggio C\+\+ AMP per controllare come i dati vengono spostati dalla CPU alla GPU e viceversa.  
  
## Argomenti correlati  
  
|Titolo|Descrizione|  
|------------|-----------------|  
|[Cenni preliminari su C\+\+ AMP](../../parallel/amp/cpp-amp-overview.md)|Vengono descritte le funzionalità principali di C\+\+ AMP e della libreria matematica.|  
|[Utilizzo di espressioni lambda, oggetti funzione e funzioni con restrizioni](../../parallel/amp/using-lambdas-function-objects-and-restricted-functions.md)|Viene descritto come utilizzare espressioni lambda, oggetti funzione, e funzioni soggette a restrizioni nelle chiamate al metodo [parallel\_for\_each](../Topic/parallel_for_each%20Function%20\(C++%20AMP\).md).|  
|[Utilizzo di sezioni](../../parallel/amp/using-tiles.md)|Viene descritto come utilizzare i riquadri per accelerare il codice C\+\+ AMP.|  
|[Utilizzo degli oggetti accelerator e accelerator\_view](../../parallel/amp/using-accelerator-and-accelerator-view-objects.md)|Viene descritto come utilizzare gli acceleratori per personalizzare l'esecuzione del codice su GPU.|  
|[Utilizzo di C\+\+ AMP nelle applicazioni Windows Store](../../parallel/amp/using-cpp-amp-in-windows-store-apps.md)|Viene descritto come utilizzare un C\+\+ AMP nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] che utilizzano i tipi di Windows Runtime.|  
|[Grafica \(C\+\+ AMP\)](../../parallel/amp/graphics-cpp-amp.md)|Viene descritto come utilizzare la libreria grafica di C\+\+ AMP.|  
|[Procedura dettagliata: moltiplicazione di matrici](../../parallel/amp/walkthrough-matrix-multiplication.md)|Viene illustrata la moltiplicazione di matrici utilizzando codice C\+\+ AMP e l'affiancamento.|  
|[Procedura dettagliata: Debug di un'applicazione C\+\+ AMP](../../parallel/amp/walkthrough-debugging-a-cpp-amp-application.md)|Viene illustrato come creare ed eseguire il debug di un'applicazione che utilizza la riduzione parallela per riassumere una grande matrice di Integer.|  
  
## Riferimento  
 [Riferimento \(C\+\+ AMP\)](../../parallel/amp/reference/reference-cpp-amp.md)  
  
 [Parola chiave tile\_static](../../cpp/tile-static-keyword.md)  
  
 [restrict \(C\+\+ AMP\)](../../cpp/restrict-cpp-amp.md)  
  
## Altre risorse  
 [Programmazione parallela nel blog del codice nativo](http://go.microsoft.com/fwlink/p/?LinkId=238472)  
  
 [Progetti di esempio di C\+\+ AMP per il download](http://go.microsoft.com/fwlink/p/?LinkId=248508)  
  
 [Analisi del codice C\+\+ AMP mediante il Visualizzatore di concorrenza](http://go.microsoft.com/fwlink/?LinkID=253987&clcid=0x409)
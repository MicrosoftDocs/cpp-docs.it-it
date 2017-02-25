---
title: "Ottimizzazione del codice | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compilatore cl.exe, prestazioni"
  - "codice, ottimizzazione"
  - "ottimizzazione"
  - "ottimizzazione, codice C++"
  - "prestazioni, compilatore"
  - "prestazioni, ottimizzazione di codice"
ms.assetid: 4f33e6c7-9870-43b3-9c2f-d7e44f764971
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# Ottimizzazione del codice
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottimizzando un file eseguibile, è possibile raggiungere un equilibrio tra velocità di esecuzione e dimensione del codice.  In questo argomento vengono illustrati alcuni dei meccanismi disponibili in Visual C\+\+ per l'ottimizzazione del codice.  
  
## Funzionalità del linguaggio  
 Negli argomenti seguenti vengono descritte alcune delle funzionalità di ottimizzazione nel linguaggio C\/C\+\+.  
  
 [Pragma e parole chiave di ottimizzazione](../../build/reference/optimization-pragmas-and-keywords.md)  
 Elenco di parole chiave e pragma che è possibile utilizzare nel codice per migliorare le prestazioni.  
  
 [Opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md)  
 Elenco delle opzioni del compilatore **\/O** che influiscono in particolare sulla velocità di esecuzione o sulla dimensione del codice.  
  
 [Dichiaratore di riferimento rvalue: &&](../../cpp/rvalue-reference-declarator-amp-amp.md)  
 I riferimenti a Rvalue supportano l'implementazione della *semantica di spostamento*.  Se la semantica di spostamento viene utilizzata per implementare le librerie di modelli, le prestazioni delle applicazioni che utilizzano tali modelli possono migliorare significativamente.  
  
### Pragma optimize  
 Se una sezione ottimizzata del codice causa errori o un rallentamento, è possibile utilizzare il pragma [optimize](../../preprocessor/optimize.md) per disattivare l'ottimizzazione di tale sezione.  
  
 Racchiudere il codice tra due pragma, come illustrato di seguito.  
  
```  
#pragma optimize("", off)  
// some code here   
#pragma optimize("", on)  
```  
  
## Tecniche di programmazione  
 È possibile che durante la compilazione di codice ottimizzato vengano visualizzati alcuni messaggi di avviso supplementari.  Questo comportamento è normale perché alcuni avvisi riguardano solo il codice ottimizzato.  Questi avvisi sono utili per evitare molti problemi di ottimizzazione.  
  
 Paradossalmente, l'ottimizzazione di un programma allo scopo di aumentarne la velocità può causare una maggior lentezza nell'esecuzione del codice.  Ciò è dovuto al fatto che alcune ottimizzazioni finalizzate a una maggiore velocità causano un aumento delle dimensioni del codice.  Le funzioni inline, ad esempio, consentono di eliminare il sovraccarico di chiamate di funzione.  Se utilizzate in modo eccessivo, tuttavia, tali funzioni possono causare un aumento delle dimensioni del programma tale da comportare un aumento degli errori di pagina relativi alla memoria virtuale.  La maggiore velocità ottenuta mediante l'eliminazione delle chiamate di funzione può quindi essere annullata dal ritardo causato dallo swapping della memoria.  
  
 Negli argomenti seguenti vengono illustrate le procedure di programmazione ottimali.  
  
 [Suggerimenti per il miglioramento del codice critico](../../build/reference/tips-for-improving-time-critical-code.md)  
 L'utilizzo di tecniche di codificazione migliori può garantire prestazioni migliori.  In questo argomento vengono suggerite tecniche di scrittura del codice utili per assicurarsi che le parti di codice da eseguire rapidamente producano i risultati desiderati.  
  
 [Suggerimenti per l'ottimizzazione](../../build/reference/optimization-best-practices.md)  
 Fornisce linee guida generali sul modo migliore per ottimizzare l'applicazione.  
  
## Debug di codice ottimizzato  
 Poiché l'ottimizzazione potrebbe modificare il codice creato dal compilatore, si consiglia di eseguire il debug dell'applicazione e di valutarne le prestazioni, quindi di ottimizzare il codice.  
  
 Negli argomenti seguenti vengono fornite informazioni di base sul debug.  
  
-   [Debug in Visual Studio](../Topic/Debugging%20in%20Visual%20Studio.md)  
  
-   [Problemi comuni durante la creazione di una build di rilascio](../../build/reference/common-problems-when-creating-a-release-build.md)  
  
 Negli argomenti seguenti vengono fornite informazioni più avanzate sul debug.  
  
-   [Procedura: eseguire il debug di codice ottimizzato](../Topic/How%20to:%20Debug%20Optimized%20Code.md)  
  
-   [Causa della possibile perdita di precisione dei numeri a virgola mobile](../../build/reference/why-floating-point-numbers-may-lose-precision.md)  
  
 Negli argomenti seguenti vengono fornite informazioni sull'ottimizzazione della compilazione, del caricamento e dell'esecuzione del codice.  
  
-   [Incremento dell'efficienza delle operazioni del compilatore](../../build/reference/improving-compiler-throughput.md)  
  
-   [Mancata generazione di codice in seguito all'utilizzo di nomi di funzione senza \(\)](../../build/reference/using-function-name-without-parens-produces-no-code.md)  
  
-   [Ottimizzazione di assembly inline](../../assembler/inline/optimizing-inline-assembly.md)  
  
-   [Impostazione dell'ottimizzazione del compilatore per un progetto ATL](../../atl/reference/specifying-compiler-optimization-for-an-atl-project.md)  
  
-   [Quali tecniche di ottimizzazione è necessario utilizzare per migliorare le prestazioni dell'applicazione client durante il caricamento?](../../build/what-optimization-techniques-should-i-use.md)  
  
-   [!INCLUDE[crabout](../../build/reference/includes/crabout_md.md)] per ridurre i tempi di caricamento dei metodi DLL, vedere l'articolo "Ottimizzazione delle Prestazioni nei Tempi di Caricamento delle DLL" nella colonna "Under the Hood" di "MSDN Magazine" sul sito Web di [MSDN Library](http://go.microsoft.com/fwlink/?linkid=556).  
  
-   [!INCLUDE[crabout](../../build/reference/includes/crabout_md.md)] per ridurre il paging nelle applicazioni, vedere gli articoli "Miglioramento delle Prestazioni di Runtime con lo Strumento Smooth Working Set" e "Miglioramento delle Prestazioni di Runtime con lo Strumento Smooth Working Set \- Parte 2" nella colonna "Bugslayer" di "MSDN Magazine" sul sito Web di [MSDN Library](http://go.microsoft.com/fwlink/?linkid=556).  
  
## Vedere anche  
 [Riferimenti alla compilazione in C\/C\+\+](../../build/reference/c-cpp-building-reference.md)
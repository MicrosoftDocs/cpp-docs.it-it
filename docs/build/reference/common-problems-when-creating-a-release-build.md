---
title: "Problemi comuni durante la creazione di una build di rilascio | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "compilazioni di debug, differenza dalle build di rilascio"
  - "allocatore di memoria debug"
  - "debug [MFC], build di rilascio"
  - "heap (problemi di layout)"
  - "memoria [C++], sovrascrittura"
  - "MFC [C++], build di rilascio"
  - "ottimizzazione [C++], compilatore"
  - "puntatori, errati"
  - "progetti [C++], configurazione di debug"
  - "build di rilascio, compilazione di applicazioni"
  - "build di rilascio, risoluzione dei problemi"
  - "errati (puntatori)"
  - "risoluzione dei problemi di build di rilascio"
  - "risoluzione dei problemi in Visual C++"
  - "generazione di codice non prevista"
ms.assetid: 73cbc1f9-3e33-472d-9880-39a8e9977b95
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Problemi comuni durante la creazione di una build di rilascio
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Durante lo sviluppo, il progetto viene di solito compilato e testato mediante una build di debug.  Se si compila quindi l'applicazione per una build di rilascio, è possibile che si verifichi una violazione di accesso.  
  
 Nell'elenco che segue sono esposte le principali differenze tra le build di debug e le build di rilascio \(non di debug\).  Esistono anche altre differenze, ma quelle che seguono sono le differenze principali che possono comportare il blocco di un'applicazione eseguita in una build di rilascio quando viene eseguita in una build di debug.  
  
-   [Layout dell'heap](#_core_heap_layout)  
  
-   [Compilazione](#_core_compilation)  
  
-   [Supporto per i puntatori](#_core_pointer_support)  
  
-   [Ottimizzazioni](#_core_optimizations)  
  
 Per informazioni sul rilevamento degli errori della build di rilascio nelle build di debug, vedere l'opzione di compilazione [\/GZ \(Attiva controllo errori in fase di esecuzione dello stack frame\)](../../build/reference/gz-enable-stack-frame-run-time-error-checking.md).  
  
##  <a name="_core_heap_layout"></a> Layout dell'heap  
 Il layout dell'heap è il responsabile di circa il 90% dei problemi che si verificano quando un'applicazione funziona come build di debug, ma non come build di rilascio.  
  
 Quando si compila il progetto per eseguire il debug, si utilizza l'allocatore di memoria di debug.  Questo significa che attorno a tutte le allocazioni di memoria vengono disposti byte di protezione.  Questi byte di protezione rilevano eventuali sovrascritture di memoria.  Dal momento che il layout dell'heap della versione di rilascio è diverso rispetto a quello della versione di debug, è possibile che una sovrascrittura di memoria non crei alcun problema in una build di debug, ma abbia conseguenze molto gravi in una build di rilascio.  
  
 Per ulteriori informazioni, vedere [Controllo delle sovrascritture di memoria](../../build/reference/checking-for-memory-overwrites.md) e [Utilizzo della build di debug per il controllo della sovrascrittura di memoria](../../build/reference/using-the-debug-build-to-check-for-memory-overwrite.md).  
  
##  <a name="_core_compilation"></a> Compilazione  
 Numerose macro MFC e la maggior parte dell'implementazione MFC si comportano in modo diverso quando si compila la versione di rilascio.  In particolare, la macro ASSERT non fornisce codice in una build di rilascio e di conseguenza non viene eseguito alcun codice presente in tali macro.  Per ulteriori informazioni, vedere [Analisi delle istruzioni ASSERT](../../build/reference/using-verify-instead-of-assert.md).  
  
 Nelle build di rilascio, per aumentare la velocità, alcune funzioni vengono rese inline.  Nelle build di rilascio vengono in genere attivate le ottimizzazioni.  Viene inoltre utilizzato un diverso allocatore di memoria.  
  
##  <a name="_core_pointer_support"></a> Supporto per i puntatori  
 La mancanza di informazioni di debug rimuove il padding dall'applicazione.  In una build di rilascio ci sono quindi maggiori possibilità che puntatori errati rimandino a memoria non inizializzata anziché a informazioni di debug.  
  
##  <a name="_core_optimizations"></a> Ottimizzazioni  
 A seconda della natura di alcuni segmenti di codice, è possibile che il compilatore di ottimizzazione generi del codice imprevisto.  Si tratta di un problema estremamente remoto, ma in alcune occasioni si verifica.  Per informazioni su come risolvere il problema, vedere [Ottimizzazione del codice](../../build/reference/optimizing-your-code.md).  
  
## Vedere anche  
 [Build di rilascio](../../build/reference/release-builds.md)   
 [Correzione dei problemi della build di rilascio](../../build/reference/fixing-release-build-problems.md)
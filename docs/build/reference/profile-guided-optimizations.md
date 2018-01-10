---
title: Le ottimizzazioni PGO | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- profile-guided optimizations
- optimization, profile-guided [C++]
ms.assetid: 2225c307-d3ae-42c1-8345-a5a959d132dc
caps.latest.revision: "26"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f2d72ddda460a88830f7f7692f4c9707fa3101a7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="profile-guided-optimizations"></a>Ottimizzazioni guidate da profilo (PGO)
L'ottimizzazione PGO consente di ottimizzare un file di output, dove l'utilità di ottimizzazione usa i dati delle esecuzioni dei test del file EXE o DLL. I dati rappresentano le probabili prestazioni del programma in un ambiente di produzione.  
  
 Le ottimizzazioni PGO sono disponibili solo per le destinazioni native x86 o [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)]. Le ottimizzazioni PGO non sono disponibili per i file di output che verranno eseguiti in Common Language Runtime. Anche se si genera un assembly con codice misto nativo e gestito (compilazione con **/clr**), non è possibile utilizzare l'ottimizzazione PGO solo al codice nativo. Se si tenta di compilare un progetto con queste opzioni impostate nell'IDE, si verificherà un errore di compilazione.  
  
> [!NOTE]
>  Le informazioni raccolte durante le esecuzioni dei test di profilatura sostituiranno le ottimizzazioni che verrebbero altrimenti applicate se si specifica **/Ob**, **/Os**, o **/Ot**. Per ulteriori informazioni, vedere [/Ob (espansione funzioni Inline)](../../build/reference/ob-inline-function-expansion.md) e [/Os, /Ot (Ottimizza per dimensione codice, Ottimizza per velocità codice)](../../build/reference/os-ot-favor-small-code-favor-fast-code.md).  
  
 È possibile usare l'ottimizzazione PGO automatizzata per il plug-in per Visual C++ nell'hub Prestazioni e diagnostica per semplificare il processo di ottimizzazione in Visual Studio oppure è possibile eseguire manualmente la procedura di ottimizzazione in Visual Studio o nella riga di comando. È consigliabile il plug-in perché è più facile da usare. Per informazioni su come ottenere il plug-in e usarlo per ottimizzare l'app, vedere [plug-in di Guided Optimization profilo](../../build/reference/profile-guided-optimization-in-the-performance-and-diagnostics-hub.md).  
  
 Sia il plug-in di ottimizzazione PGO che l'ottimizzazione PGO manuale prevedono questi passaggi per ottimizzare l'app:  
  
-   Compilare uno o più file di codice sorgente con [/GL](../../build/reference/gl-whole-program-optimization.md).  
  
     Ogni modulo compilato con /GL può essere esaminato durante le esecuzioni dei test dell'ottimizzazione PGO per acquisire il comportamento in fase di esecuzione. Non è necessario compilare con /GL ogni modulo in una compilazione di tipo ottimizzazione PGO. Tuttavia, solo i moduli compilati con /GL verranno instrumentati e saranno poi disponibili per le ottimizzazioni PGO.  
  
-   Effettuare un collegamento tramite [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) e [/GENPROFILE](../../build/reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md).  
  
     Con /LTCG e /GENPROFILE crea un file pgd vuoto. I dati delle esecuzioni dei test, una volta aggiunti al file pgd, possono essere usati come input per il successivo passaggio di collegamento (creazione dell'immagine ottimizzata). Quando si specifica /GENPROFILE, è possibile aggiungere facoltativamente: PGD =`filename` per specificare un nome non predefinito o un percorso per il file pgd.  
  
-   Profilare l'applicazione.  
  
     Ogni volta che una sessione EXE profilata termina o una DLL profilata viene scaricata, un *appname*! #. pgc file viene creato. Un file pgc contiene informazioni su una particolare esecuzione dei test dell'applicazione. # è un numero a partire da 1 e viene incrementato in base al numero degli altri *appname*! #. pgc presenti nella directory. È possibile eliminare un file pgc se l'esecuzione dei test non rappresenta uno scenario che si vuole ottimizzare.  
  
     Durante l'esecuzione dei test, è possibile forzare la chiusura del file pgc attualmente aperto e la creazione di un nuovo file pgc con il [pgosweep](../../build/reference/pgosweep.md) utilità (ad esempio, quando la fine di uno scenario di test non coincide con la chiusura dell'applicazione).  
  
     È possibile usare l'opzione `PogoSafeMode` quando si profila l'applicazione. Questa opzione consente di specificare se profilare l'applicazione in modalità sicura o in modalità veloce. Per ulteriori informazioni su queste modalità, vedere [PogoSafeMode](../../build/reference/pogosafemode.md).  
  
-   Collegamento con /LTCG e /USEPROFILE.  
  
     Con /LTCG e /USEPROFILE crea l'immagine ottimizzata. Questo passaggio accetta come input il file pgd. Quando si specifica /USEPROFILE, è possibile aggiungere facoltativamente: PGD =`filename` per specificare un nome non predefinito o un percorso per il file pgd. Per ulteriori informazioni, vedere [/LTCG](../../build/reference/ltcg-link-time-code-generation.md).  
  
 È anche possibile creare il file di output ottimizzato e in seguito determinare che un'ulteriore profilatura potrebbe essere utile per creare un'immagine più ottimizzata. Se l'immagine instrumentata e il file pgd sono disponibili, è possibile effettuare altre esecuzioni dei test e ricompilare l'immagine ottimizzata con il file pgd più recente.  
  
 Di seguito è riportato un elenco delle ottimizzazioni PGO:  
  
-   **L'incorporamento** , ad esempio, se è presente una funzione che chiama spesso la funzione B e la funzione B è relativamente piccola, ottimizzazioni PGO incorporeranno la funzione B nella funzione A.  
  
-   **Virtual Call Speculation** -se una chiamata virtuale o un'altra chiamata tramite un puntatore a funzione, è spesso indirizzata a una determinata funzione, un'ottimizzazione PGO può inserire una chiamata diretta eseguita in modo condizionale alla funzione di destinazione, e la chiamata diretta può essere resa inline.  
  
-   **Register Allocation** - ottimizzazione con i dati di profilo consente una migliore allocazione dei registri.  
  
-   **Basic Block Optimization** -l'ottimizzazione dei blocchi consente più di frequente i blocchi di base che è temporaneamente in esecuzione in un determinato intervallo possono essere inseriti nello stesso set di pagine (località). In questo modo si riduce il numero di pagine usate, riducendo così anche il sovraccarico della memoria.  
  
-   **Size/Speed Optimization** -funzioni in cui è richiesto un tempo prolungato possono essere ottimizzate per la velocità.  
  
-   **Function Layout** : basato sul grafico di chiamata e analizzare il comportamento di chiamante/chiamato, le funzioni che tendono a essere nello stesso percorso di esecuzione vengono inserite nella stessa sezione.  
  
-   **Conditional Branch Optimization** : con i probe dei valori, PGO ottimizzazioni possono determinare se un valore specifico in un'istruzione switch venga usato più spesso degli altri valori.  Quindi è possibile effettuare il pull di questo valore dall'istruzione switch.  Lo stesso si può fare con le istruzioni if/else dove l'utilità di ottimizzazione può ordinare il blocco if o else in modo da inserire per primo quello che è più spesso true.  
  
-   **Dead Code Separation** -il codice non viene chiamato durante la profilatura viene spostato in una sezione speciale che viene aggiunto alla fine del set di sezioni. e che rimane così al di fuori delle pagine usate di frequente.  
  
-   **EH Code Separation** -il codice EH, eseguito in via eccezionale, spesso può essere spostato in una sezione separata quando le ottimizzazioni PGO possono determinare che le eccezioni si verificano solo in condizioni eccezionali.  
  
-   **Memory Intrinsics** -l'espansione delle funzioni intrinseche può prendere decisioni migliori se è possibile determinare se un intrinseco viene chiamato frequentemente. Un intrinseco può inoltre essere ottimizzato in base alle dimensioni dei blocchi di spostamenti o di copie.  
  
 Per ulteriori informazioni su esecuzione dell'ottimizzazione manuale nell'IDE o sulla riga di comando, vedere [plug-in di Guided Optimization profilo](../../build/reference/profile-guided-optimization-in-the-performance-and-diagnostics-hub.md).  
  
## <a name="in-this-section"></a>In questa sezione  
 [Plug-in di ottimizzazione PGO](../../build/reference/profile-guided-optimization-in-the-performance-and-diagnostics-hub.md)  
  
 [Strumenti per l'ottimizzazione manuale PGO](../../build/reference/tools-for-manual-profile-guided-optimization.md)  
  
 [Procedura: Unire più profili PGO in un unico profilo](../../build/reference/how-to-merge-multiple-pgo-profiles-into-a-single-profile.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Strumenti per la compilazione in C/C++](../../build/reference/c-cpp-build-tools.md)
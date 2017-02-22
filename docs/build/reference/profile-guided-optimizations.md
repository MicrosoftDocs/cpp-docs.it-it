---
title: "Ottimizzazioni guidate da profilo (PGO) | Microsoft Docs"
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
  - "ottimizzazione, PGO [C++]"
  - "ottimizzazioni PGO"
ms.assetid: 2225c307-d3ae-42c1-8345-a5a959d132dc
caps.latest.revision: 26
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 24
---
# Ottimizzazioni guidate da profilo (PGO)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'ottimizzazione PGO consente di ottimizzare un file di output, dove l'utilità di ottimizzazione usa i dati delle esecuzioni dei test del file EXE o DLL.  I dati rappresentano le probabili prestazioni del programma in un ambiente di produzione.  
  
 Le ottimizzazioni PGO sono disponibili solo per le destinazioni native x86 o [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)].  Le ottimizzazioni PGO non sono disponibili per i file di output che verranno eseguiti in Common Language Runtime.  Anche se si produce un assembly con codice misto nativo e gestito \(eseguire la compilazione con **\/clr**\), non è possibile usare l'ottimizzazione PGO solo nel codice nativo.  Se si tenta di compilare un progetto con queste opzioni impostate nell'IDE, si verificherà un errore di compilazione.  
  
> [!NOTE]
>  Le informazioni raccolte durante le esecuzioni dei test di profilatura sostituiranno le ottimizzazioni che verrebbero altrimenti applicate se si specifica **\/Ob**, **\/Os** o **\/Ot**.  Per altre informazioni, vedere [\/Ob \(Espansione funzioni inline\)](../../build/reference/ob-inline-function-expansion.md) e [\/Os, \/Ot \(Ottimizza per dimensione codice, Ottimizza per velocità codice\)](../../build/reference/os-ot-favor-small-code-favor-fast-code.md).  
  
 È possibile usare l'ottimizzazione PGO automatizzata per il plug\-in per Visual C\+\+ nell'hub Prestazioni e diagnostica per semplificare il processo di ottimizzazione in Visual Studio oppure è possibile eseguire manualmente la procedura di ottimizzazione in Visual Studio o nella riga di comando.  È consigliabile il plug\-in perché è più facile da usare.  Per informazioni su come ottenere il plug\-in e usarlo per ottimizzare l'app, vedere [Plug\-in di ottimizzazione PGO](../../build/reference/profile-guided-optimization-in-the-performance-and-diagnostics-hub.md).  
  
 Sia il plug\-in di ottimizzazione PGO che l'ottimizzazione PGO manuale prevedono questi passaggi per ottimizzare l'app:  
  
-   Compilare uno o più file del codice sorgente con [\/GL](../../build/reference/gl-whole-program-optimization.md).  
  
     Ogni modulo compilato con \/GL può essere esaminato durante le esecuzioni dei test dell'ottimizzazione PGO per acquisire il comportamento in fase di esecuzione.  Non è necessario compilare con \/GL ogni modulo in una compilazione di tipo ottimizzazione PGO.  Tuttavia, solo i moduli compilati con \/GL verranno instrumentati e saranno poi disponibili per le ottimizzazioni PGO.  
  
-   Creare il collegamento con [\/LTCG:PGINSTRUMENT](../../build/reference/ltcg-link-time-code-generation.md).  
  
     \/LTCG:PGINSTRUMENT crea un file pgd vuoto.  I dati delle esecuzioni dei test, una volta aggiunti al file pgd, possono essere usati come input per il successivo passaggio di collegamento \(creazione dell'immagine ottimizzata\).  Quando si specifica \/LTCG:PGINSTRUMENT, si può specificare [\/PGD](../../build/reference/pgd-specify-database-for-profile-guided-optimizations.md) con un nome o un percorso non predefinito per il file pgd.  
  
-   Profilare l'applicazione.  
  
     Ogni volta che una sessione EXE profilata termina o una DLL profilata viene scaricata, viene creato un file *nomapp*\!\#.pgc.  Un file pgc contiene informazioni su una particolare esecuzione dei test dell'applicazione.  \# è un numero che inizia con 1 e viene incrementato in base al numero degli altri file *nomeapp*\!\#.pgc presenti nella directory.  È possibile eliminare un file pgc se l'esecuzione dei test non rappresenta uno scenario che si vuole ottimizzare.  
  
     Durante un'esecuzione dei test, è possibile forzare la chiusura del file pgc attualmente aperto e la creazione di un nuovo file pgc con l'utilità [pgosweep](../../build/reference/pgosweep.md) \(ad esempio, quando la fine di uno scenario di test non coincide con l'arresto dell'applicazione\).  
  
     È possibile usare l'opzione `PogoSafeMode` quando si profila l'applicazione.  Questa opzione consente di specificare se profilare l'applicazione in modalità sicura o in modalità veloce.  Per altre informazioni su queste modalità, vedere [PogoSafeMode](../../build/reference/pogosafemode.md).  
  
-   Creare il collegamento con \/LTCG:PGOPTIMIZE.  
  
     \/LTCG:PGOPTIMIZE crea l'immagine ottimizzata.  Questo passaggio accetta come input il file pgd.  Per altre informazioni, vedere [\/LTCG:PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md).  
  
 È anche possibile creare il file di output ottimizzato e in seguito determinare che un'ulteriore profilatura potrebbe essere utile per creare un'immagine più ottimizzata.  Se l'immagine instrumentata e il file pgd sono disponibili, è possibile effettuare altre esecuzioni dei test e ricompilare l'immagine ottimizzata con il file pgd più recente.  
  
 Di seguito è riportato un elenco delle ottimizzazioni PGO:  
  
-   **Inlining**: ad esempio, se esiste una funzione A che chiama spesso la funzione B e la funzione B è relativamente piccola, le ottimizzazioni PGO incorporeranno la funzione B nella funzione A.  
  
-   **Virtual Call Speculation** : se una chiamata virtuale o un'altra chiamata tramite un puntatore a funzione, è spesso indirizzata a una determinata funzione, un'ottimizzazione PGO può inserire una chiamata diretta eseguita in modo condizionale alla funzione di destinazione e la chiamata diretta può essere incorporata.  
  
-   **Register Allocation**: l'ottimizzazione con i dati del profilo offre una migliore allocazione del Registro di sistema.  
  
-   **Basic Block Optimization**: l'ottimizzazione dei blocchi di base consente di inserire nello stesso set di pagine \(località\) i blocchi di base comunemente eseguiti, che vengono temporaneamente eseguiti in un determinato frame.  In questo modo si riduce il numero di pagine usate, riducendo così anche il sovraccarico della memoria.  
  
-   **Size\/Speed Optimization**: è possibile ottimizzare la velocità delle funzioni per cui il programma richiede del tempo.  
  
-   **Function Layout**: in base al grafico chiamate e al comportamento di chiamante\/chiamato profilato, le funzioni che tendono a essere nello stesso percorso di esecuzione vengono inserite nella stessa sezione.  
  
-   **Conditional Branch Optimization**: con i probe dei valori, le ottimizzazioni PGO possono determinare se un valore specifico in un'istruzione switch venga usato più spesso degli altri valori.  Quindi è possibile effettuare il pull di questo valore dall'istruzione switch.  Lo stesso si può fare con le istruzioni if\/else dove l'utilità di ottimizzazione può ordinare il blocco if o else in modo da inserire per primo quello che è più spesso true.  
  
-   **Dead Code Separation**: il codice non chiamato durante la profilatura viene spostato in una speciale sezione che viene aggiunta alla fine del set di sezioni  e che rimane così al di fuori delle pagine usate di frequente.  
  
-   **EH Code Separation**: il codice EH, eseguito in via eccezionale, spesso può essere spostato in una sezione separata dove le ottimizzazioni PGO possono determinare che le eccezioni si verificano solo in condizioni molto particolari.  
  
-   **Memory Intrinsics**: essendo possibile determinare se un intrinseco viene chiamato spesso, si possono prendere decisioni migliori sull'espansione dell'intrinseco.  Un intrinseco può inoltre essere ottimizzato in base alle dimensioni dei blocchi di spostamenti o di copie.  
  
 Per altre informazioni sull'esecuzione dell'ottimizzazione manuale nell'IDE o nella riga di comando, vedere [Procedura dettagliata: Uso delle ottimizzazioni PGO](http://msdn.microsoft.com/it-it/6e36421b-ec8c-4626-9c29-fa5ffb6f27f8).  
  
## Contenuto della sezione  
 [Plug\-in di ottimizzazione PGO](../../build/reference/profile-guided-optimization-in-the-performance-and-diagnostics-hub.md)  
  
 [Strumenti per l'ottimizzazione PGO \(Profile Guided Optimization, Ottimizzazione guidata da profilo\)](../../build/reference/tools-for-manual-profile-guided-optimization.md)  
  
 [Procedura: unire più profili PGO in un unico profilo](../../build/reference/how-to-merge-multiple-pgo-profiles-into-a-single-profile.md)  
  
## Vedere anche  
 [Strumenti per la compilazione in C\/C\+\+](../../build/reference/c-cpp-build-tools.md)
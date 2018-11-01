---
title: Ottimizzazioni guidate da profilo (PGO)
ms.date: 03/14/2018
helpviewer_keywords:
- profile-guided optimizations
- optimization, profile-guided [C++]
ms.assetid: 2225c307-d3ae-42c1-8345-a5a959d132dc
ms.openlocfilehash: eb23d91de210ddc9e12886924af3450ce67330d3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50632553"
---
# <a name="profile-guided-optimizations"></a>Ottimizzazioni guidate da profilo (PGO)

L'ottimizzazione PGO consente di ottimizzare un file di output, dove l'utilità di ottimizzazione usa i dati delle esecuzioni dei test del file EXE o DLL. I dati rappresentano le probabili prestazioni del programma in un ambiente di produzione.

Le ottimizzazioni PGO sono disponibili solo per le destinazioni native x86 o x64. Le ottimizzazioni PGO non sono disponibili per i file di output eseguite in common language runtime. Anche se si produce un assembly con codice nativo e gestito misto (usando il **/clr** opzione del compilatore), non è possibile usare ottimizzazione PGO solo il codice nativo. Se si prova a compilare un progetto con queste opzioni impostate nell'IDE, si verificherà un errore di compilazione.

> [!NOTE]
> Informazioni raccolte dalle esecuzioni dei test di profilatura sostituiscono le ottimizzazioni che verrebbero altrimenti effetto se si specifica **/Ob**, **/Os**, o **/Ot**. Per altre informazioni, vedere [/Ob (espansione funzioni Inline)](../../build/reference/ob-inline-function-expansion.md) e [/Os, /Ot (Ottimizza per dimensione codice, Ottimizza per velocità codice)](../../build/reference/os-ot-favor-small-code-favor-fast-code.md).

## <a name="steps-to-optimize-your-app"></a>Procedura per ottimizzare l'app

Per usare ottimizzazione PGO, seguire questa procedura per ottimizzare l'app:

- Compilare uno o più file di codice sorgente con [/GL](../../build/reference/gl-whole-program-optimization.md).

   Ogni modulo compilato con **/GL** può essere esaminato durante le esecuzioni di test di ottimizzazione PGO per acquisire il comportamento in fase di esecuzione. Non devono essere compilata con tutti i moduli in una build di ottimizzazione PGO **/GL**. Tuttavia, solo i moduli compilati con **/GL** sono instrumentate e saranno poi disponibili per le ottimizzazioni PGO.

- Un collegamento tramite [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) e [/GENPROFILE o /fastgenprofile](../../build/reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md).

   Utilizzo di entrambe **/LTCG** e **/GENPROFILE** oppure **/FASTGENPROFILE** crea un file PDG quando si esegue l'applicazione instrumentata. I dati delle esecuzioni dei test, una volta aggiunti al file pgd, possono essere usati come input per il successivo passaggio di collegamento (creazione dell'immagine ottimizzata). Quando si specificano **/GENPROFILE**, è possibile aggiungere facoltativamente un **PGD =**_filename_ argomento per specificare un nome non predefinito o un percorso per il file pgd. La combinazione delle **/LTCG** e **/GENPROFILE** oppure **/FASTGENPROFILE** opzioni del linker sostituisce deprecate **/LTCG: PGINSTRUMENT** opzione del linker.

- Profilare l'applicazione.

   Ogni volta che una sessione EXE profilata termina o una DLL profilata viene scaricata, un *NomeApp*! #. pgc file viene creato. Un file pgc contiene informazioni su una particolare esecuzione dei test dell'applicazione. # è un numero che inizia con 1 che viene incrementato in base al numero degli altri *NomeApp*! #. pgc presenti nella directory. È possibile eliminare un file pgc se l'esecuzione dei test non rappresenta uno scenario che si vuole ottimizzare.

   Durante l'esecuzione dei test, è possibile forzare la chiusura del file. pgc attualmente aperto e la creazione di un nuovo file. pgc con il [pgosweep](../../build/reference/pgosweep.md) utilità (ad esempio, quando la fine di uno scenario di test non coincide con l'arresto dell'applicazione).

   L'applicazione direttamente anche possibile richiamare una funzione di ottimizzazione PGO, [PgoAutoSweep](pgoautosweep.md), per acquisire i dati del profilo al momento della chiamata come file. pgc. Ciò consente di visualizzare un controllo più preciso di codice analizzato i dati acquisiti nei file. pgc. Per un esempio di come usare questa funzione, vedere la [PgoAutoSweep](pgoautosweep.md) documentazione.

   Quando si crea la build instrumentata, per impostazione predefinita, la raccolta dei dati viene eseguita in modalità non thread-safe, che è più veloce, ma potrebbe non essere perfettamente accurata. Tramite il **EXACT** argomento per **/GENPROFILE** oppure **/FASTGENPROFILE**, è possibile specificare la raccolta dei dati in modalità thread-safe, che è più precisa ma più lento. Questa opzione è inoltre disponibile se si imposta deprecate [PogoSafeMode](environment-variables-for-profile-guided-optimizations.md#pogosafemode) variabile di ambiente o deprecata **/POGOSAFEMODE** opzione del linker, quando si crea la build instrumentata.

- Un collegamento tramite **/LTCG** e **/USEPROFILE**.

   Usare entrambi i **/LTCG** e [/USEPROFILE](useprofile.md) opzioni del linker per creare l'immagine ottimizzata. Questo passaggio accetta come input il file pgd. Quando si specifica **/USEPROFILE**, è possibile aggiungere facoltativamente un **PGD =**_filename_ argomento per specificare un nome diverso o un percorso per il file pgd. È anche possibile specificare questo nome utilizzando deprecate **/PGD** l'opzione del linker. La combinazione delle **/LTCG** e **/USEPROFILE** sostituisce deprecate **/LTCG: PGOPTIMIZE** e **/LTCG: PGUPDATE** opzioni del linker.

È anche possibile creare il file di output ottimizzato e in seguito determinare che un'ulteriore profilatura potrebbe essere utile per creare un'immagine più ottimizzata. Se l'immagine instrumentata e il file pgd sono disponibili, è possibile effettuare altre esecuzioni dei test e ricompilare l'immagine ottimizzata con il file pgd più recente, usando le stesse **/LTCG** e **/USEPROFILE** opzioni del linker .

## <a name="optimizations-performed-by-pgo"></a>Ottimizzazioni eseguite dal PGO

Di seguito è riportato un elenco delle ottimizzazioni PGO:

- **L'incorporamento** : ad esempio, se è presente una funzione che chiama spesso la funzione B e la funzione B è relativamente piccola, le ottimizzazioni PGO incorporeranno la funzione B nella funzione r.

- **Virtual Call Speculation** -se una chiamata virtuale o un'altra chiamata tramite un puntatore a funzione, è spesso indirizzata a una determinata funzione, un'ottimizzazione PGO può inserire una chiamata diretta eseguita in modo condizionale alla funzione di destinazione, e la chiamata diretta può essere impostato come inline.

- **Allocazione dei registri** - ottimizzazione con i risultati di dati di profilo migliore allocazione dei registri.

- **Basic Block Optimization** -ottimizzazione dei blocchi di base consente a più di frequente i blocchi di base che vengono temporaneamente eseguiti in un determinato intervallo da inserire nello stesso set di pagine (località). In questo modo si riduce il numero di pagine usate, riducendo così anche il sovraccarico della memoria.

- **Size/Speed Optimization** -funzioni in cui il programma trascorre molto tempo possono essere ottimizzate per la velocità.

- **Function Layout** : base del grafico delle chiamate e profilare il comportamento di chiamante/chiamato, le funzioni che tendono a essere nello stesso percorso di esecuzione vengono inserite nella stessa sezione.

- **Conditional Branch Optimization** : con i probe dei valori, PGO ottimizzazioni possono rilevare se un determinato valore in un'istruzione switch viene utilizzato più spesso di altri valori.  Quindi è possibile effettuare il pull di questo valore dall'istruzione switch.  Lo stesso si può fare con le istruzioni if/else dove l'utilità di ottimizzazione può ordinare il blocco if o else in modo da inserire per primo quello che è più spesso true.

- **Dead Code Separation** -codice che non viene chiamato durante la profilatura viene spostato in una speciale sezione che viene aggiunto alla fine del set di sezioni. e che rimane così al di fuori delle pagine usate di frequente.

- **EH Code Separation** -il codice EH, eseguito in via, può essere spostato in una sezione separata quando le ottimizzazioni PGO possono determinare che le eccezioni si verificano solo in condizioni eccezionali.

- **Memory Intrinsics** -può essere effettuata in modo ottimale l'espansione delle funzioni intrinseche se è possibile determinare se un intrinseco viene chiamato frequentemente. Un intrinseco può inoltre essere ottimizzato in base alle dimensioni dei blocchi di spostamenti o di copie.

Se si usa Visual Studio 2013, è possibile usare automatizzata [plug-in di Guided Optimization profilo](../../build/reference/profile-guided-optimization-in-the-performance-and-diagnostics-hub.md) per Visual C++ nell'Hub prestazioni e diagnostica per semplificare e ottimizzare il processo di ottimizzazione all'interno di Visual Studio. Questo plug-in non disponibile nelle versioni più recenti di Visual Studio.

## <a name="next-steps"></a>Passaggi successivi

Per ulteriori informazioni su queste variabili di ambiente, funzioni e gli strumenti che è possibile utilizzare le ottimizzazioni PGO:

[Variabili d'ambiente per le ottimizzazioni GPO](../../build/reference/environment-variables-for-profile-guided-optimizations.md)<br/>
Queste variabili possono essere utilizzate per specificare il comportamento in fase di esecuzione degli scenari di test. Essi sono state deprecate a favore di nuove opzioni del linker; Leggere qui per facilitare la migrazione da variabili di ambiente per le opzioni del linker.

[PgoAutoSweep](pgoautosweep.md)<br/>
Una funzione è possibile aggiungere all'App per fornire un controllo con granularità fine. pgc file data capture.

[pgosweep](../../build/reference/pgosweep.md)<br/>
Un'utilità della riga di comando che scrive tutti i dati di profilo nel file. pgc, chiude il file. pgc e apre un nuovo file. pgc.

[pgomgr](../../build/reference/pgomgr.md)<br/>
Un'utilità della riga di comando che consente di aggiungere i dati del profilo da uno o più file. pgc per il file pgd.

[Procedura: Unire più profili PGO in un unico profilo](../../build/reference/how-to-merge-multiple-pgo-profiles-into-a-single-profile.md)<br/>
Esempi di **pgomgr** utilizzo.

## <a name="see-also"></a>Vedere anche

[Strumenti per la compilazione in C/C++](../../build/reference/c-cpp-build-tools.md)

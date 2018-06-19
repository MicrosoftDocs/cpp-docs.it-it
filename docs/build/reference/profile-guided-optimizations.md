---
title: Le ottimizzazioni PGO | Documenti Microsoft
ms.custom: ''
ms.date: 03/14/2018
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- profile-guided optimizations
- optimization, profile-guided [C++]
ms.assetid: 2225c307-d3ae-42c1-8345-a5a959d132dc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c7d6de281097232b1b8abc10a103af9c186e3550
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32379406"
---
# <a name="profile-guided-optimizations"></a>Ottimizzazioni guidate da profilo (PGO)

L'ottimizzazione PGO consente di ottimizzare un file di output, dove l'utilità di ottimizzazione usa i dati delle esecuzioni dei test del file EXE o DLL. I dati rappresentano le probabili prestazioni del programma in un ambiente di produzione.

Le ottimizzazioni PGO sono disponibili solo per le destinazioni native x86 o x64. Le ottimizzazioni PGO non sono disponibili per i file di output che eseguire in common language runtime. Anche se si produce un assembly con codice nativo e gestito misto (usando il **/clr** opzione del compilatore), è possibile utilizzare Ottimizzazione PGO su solo nel codice nativo. Se si tenta di compilare un progetto con queste opzioni impostate nell'IDE, si verificherà un errore di compilazione.

> [!NOTE]
> Le informazioni raccolte durante le esecuzioni dei test di profilatura sostituiscono le ottimizzazioni che verrebbero altrimenti applicate se si specifica **/Ob**, **/Os**, o **/Ot**. Per ulteriori informazioni, vedere [/Ob (espansione funzioni Inline)](../../build/reference/ob-inline-function-expansion.md) e [/Os, /Ot (Ottimizza per dimensione codice, Ottimizza per velocità codice)](../../build/reference/os-ot-favor-small-code-favor-fast-code.md).

## <a name="steps-to-optimize-your-app"></a>Passaggi per ottimizzare l'app

Per usare ottimizzazione PGO, seguire questi passaggi per ottimizzare l'app:

- Compilare uno o più file di codice sorgente con [/GL](../../build/reference/gl-whole-program-optimization.md).

   Ogni modulo compilato con **/GL** può essere esaminato durante le esecuzioni dei test ottimizzazione PGO per acquisire il comportamento in fase di esecuzione. Ogni modulo in una build di ottimizzazione PGO non deve essere compilata con **/GL**. Tuttavia, solo i moduli compilati con **/GL** sono instrumentate e saranno poi disponibili per le ottimizzazioni PGO.

- Collegare usando [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) e [/GENPROFILE o /fastgenprofile](../../build/reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md).

   Utilizzo di entrambe **/LTCG** e **/GENPROFILE** oppure **/FASTGENPROFILE** crea un file PDG quando si esegue l'applicazione instrumentata. I dati delle esecuzioni dei test, una volta aggiunti al file pgd, possono essere usati come input per il successivo passaggio di collegamento (creazione dell'immagine ottimizzata). Quando si specifica **/GENPROFILE**, è possibile aggiungere facoltativamente un **PGD =**_filename_ argomento per specificare un nome non predefinito o un percorso per il file pgd. La combinazione di **/LTCG** e **/GENPROFILE** oppure **/FASTGENPROFILE** opzioni del linker sostituisce deprecate **/LTCG: PGINSTRUMENT** opzione del linker.

- Profilare l'applicazione.

   Ogni volta che una sessione EXE profilata termina o una DLL profilata viene scaricata, un *appname*! #. pgc file viene creato. Un file pgc contiene informazioni su una particolare esecuzione dei test dell'applicazione. # è un numero a partire da 1 e viene incrementato in base al numero degli altri *appname*! #. pgc presenti nella directory. È possibile eliminare un file pgc se l'esecuzione dei test non rappresenta uno scenario che si vuole ottimizzare.

   Durante l'esecuzione dei test, è possibile forzare la chiusura del file pgc attualmente aperto e la creazione di un nuovo file pgc con il [pgosweep](../../build/reference/pgosweep.md) utilità (ad esempio, quando la fine di uno scenario di test non coincide con la chiusura dell'applicazione).

   L'applicazione può inoltre direttamente richiamare una funzione PGO, [PgoAutoSweep](pgoautosweep.md), per acquisire i dati di profilo al momento della chiamata di un file pgc. Ciò può fornire un controllo più preciso del codice per i dati acquisiti nei file. pgc. Per un esempio di come utilizzare questa funzione, vedere la [PgoAutoSweep](pgoautosweep.md) documentazione.

   Quando si crea la compilazione instrumentata, per impostazione predefinita, la raccolta dei dati viene eseguita in modalità non thread-safe, che è più veloce, ma potrebbe non essere perfettamente accurata. Tramite il **EXACT** argomento **/GENPROFILE** oppure **/FASTGENPROFILE**, è possibile specificare la raccolta dei dati in modalità thread-safe, vale a dire più accurate ma più lenta. Questa opzione è disponibile se si imposta deprecate [PogoSafeMode](environment-variables-for-profile-guided-optimizations.md#pogosafemode) variabile di ambiente o deprecata **/POGOSAFEMODE** opzione del linker, quando si crea la compilazione instrumentata.

- Collegare usando **/LTCG** e **/USEPROFILE**.

   Utilizzare sia la **/LTCG** e [/USEPROFILE](useprofile.md) opzioni del linker per creare l'immagine ottimizzata. Questo passaggio accetta come input il file pgd. Quando si specifica **/USEPROFILE**, è possibile aggiungere facoltativamente un **PGD =**_filename_ argomento per specificare un nome non predefinito o un percorso per il file pgd. È anche possibile specificare questo nome utilizzando deprecate **/PGD** opzione del linker. La combinazione di **/LTCG** e **/USEPROFILE** sostituisce deprecate **/LTCG: PGOPTIMIZE** e **/LTCG: PGUPDATE** opzioni del linker.

È anche possibile creare il file di output ottimizzato e in seguito determinare che un'ulteriore profilatura potrebbe essere utile per creare un'immagine più ottimizzata. Se l'immagine instrumentata e il file pgd sono disponibili, è possibile effettuare altre esecuzioni dei test e ricompilare l'immagine ottimizzata con il file pgd più recente, usando le stesse **/LTCG** e **/USEPROFILE** opzioni del linker .

## <a name="optimizations-performed-by-pgo"></a>Ottimizzazioni eseguite dal PGO

Di seguito è riportato un elenco delle ottimizzazioni PGO:

- **L'incorporamento** , ad esempio, se è presente una funzione che chiama spesso la funzione B, la funzione B è relativamente limitata, quindi le ottimizzazioni PGO incorporeranno la funzione B nella funzione A.

- **Virtual Call Speculation** -se una chiamata virtuale o un'altra chiamata tramite un puntatore a funzione, è spesso indirizzata a una determinata funzione, un'ottimizzazione PGO può inserire una chiamata diretta eseguita in modo condizionale alla funzione di destinazione, e la chiamata diretta può essere resa inline.

- **Register Allocation** - ottimizzazione con i risultati di dati di profilo migliore allocazione dei registri.

- **Basic Block Optimization** -ottimizzazione dei blocchi di base consente blocchi di base comunemente eseguiti che vengono temporaneamente eseguiti in un determinato intervallo da inserire nello stesso set di pagine (località). In questo modo si riduce il numero di pagine usate, riducendo così anche il sovraccarico della memoria.

- **Size/Speed Optimization** -funzioni in cui il programma richiede molto tempo possono essere ottimizzate per la velocità.

- **Function Layout** - base del grafico chiamate e analizzare il comportamento di chiamante/chiamato, le funzioni che tendono a essere nello stesso percorso di esecuzione vengono inserite nella stessa sezione.

- **Conditional Branch Optimization** : con i probe dei valori, PGO ottimizzazioni possono determinare se un valore specifico in un'istruzione switch venga usato più spesso degli altri valori.  Quindi è possibile effettuare il pull di questo valore dall'istruzione switch.  Lo stesso si può fare con le istruzioni if/else dove l'utilità di ottimizzazione può ordinare il blocco if o else in modo da inserire per primo quello che è più spesso true.

- **Dead Code Separation** -il codice non viene chiamato durante la profilatura viene spostato in una sezione speciale che viene aggiunto alla fine del set di sezioni. e che rimane così al di fuori delle pagine usate di frequente.

- **EH Code Separation** -il codice EH, eseguito in via, può essere spostato in una sezione separata quando le ottimizzazioni PGO possono determinare che le eccezioni si verificano solo in condizioni eccezionali.

- **Memory Intrinsics** -l'espansione delle funzioni intrinseche può essere effettuata in modo ottimale se è possibile determinare se un intrinseco viene chiamato frequentemente. Un intrinseco può inoltre essere ottimizzato in base alle dimensioni dei blocchi di spostamenti o di copie.

Se si utilizza Visual Studio 2013, è possibile utilizzare automatizzata [profilo Guided Optimization plug-in del](../../build/reference/profile-guided-optimization-in-the-performance-and-diagnostics-hub.md) per Visual C++ nell'Hub prestazioni e diagnostica per semplificare il processo di ottimizzazione all'interno di Visual Studio. Questo plug-in è disponibile nelle versioni più recenti di Visual Studio.

## <a name="next-steps"></a>Passaggi successivi

Per ulteriori informazioni su queste variabili di ambiente, funzioni e strumenti che è possibile usare nelle ottimizzazioni PGO:

[Variabili d'ambiente per le ottimizzazioni GPO](../../build/reference/environment-variables-for-profile-guided-optimizations.md)<br/>
Queste variabili possono essere utilizzate per specificare il comportamento in fase di esecuzione degli scenari di test. Sono state deprecate a favore di nuove opzioni del linker; leggere questo per aiutare nel passaggio dalle variabili di ambiente per le opzioni del linker.

[PgoAutoSweep](pgoautosweep.md)<br/>
Una funzione è possibile aggiungere alla app per fornire il controllo di acquisizione dati file pgc con granularità fine.

[pgosweep](../../build/reference/pgosweep.md)<br/>
Un'utilità della riga di comando che consente di scrivere tutti i dati di profilo per il file. pgc, chiude il file. pgc e apre un nuovo file pgc.

[pgomgr](../../build/reference/pgomgr.md)<br/>
Utilità della riga di comando che consente di aggiungere dati di profilo da uno o più file. pgc al file pgd.

[Procedura: unione più profili PGO in un unico profilo](../../build/reference/how-to-merge-multiple-pgo-profiles-into-a-single-profile.md) esempi **pgomgr** utilizzo.

## <a name="see-also"></a>Vedere anche

[Strumenti per la compilazione in C/C++](../../build/reference/c-cpp-build-tools.md)

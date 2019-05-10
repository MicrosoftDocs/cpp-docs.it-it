---
title: Ottimizzazioni PGO
ms.date: 04/23/2019
helpviewer_keywords:
- profile-guided optimizations
- optimization, profile-guided [C++]
ms.assetid: 2225c307-d3ae-42c1-8345-a5a959d132dc
ms.openlocfilehash: 46619e77861b6a3a78d74ce6c6d9173a3a5f270f
ms.sourcegitcommit: 283cb64fd7958a6b7fbf0cd8534de99ac8d408eb
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2019
ms.locfileid: "64857321"
---
# <a name="profile-guided-optimizations"></a>Ottimizzazioni PGO

Ottimizzazione PGO (PGO) consente di ottimizzare un file intero eseguibile, in cui query optimizer utilizza i dati del file con estensione dll o .exe esecuzioni dei test. I dati rappresentano le probabili prestazioni del programma in un ambiente di produzione.

Le ottimizzazioni PGO sono disponibili solo per le destinazioni native x86 o x64. Le ottimizzazioni PGO non sono disponibili per i file eseguibili eseguiti in common language runtime. Anche se si produce un assembly con codice nativo e gestito misto (usando il **/clr** opzione del compilatore), non è possibile usare ottimizzazione PGO solo il codice nativo. Se si prova a compilare un progetto con queste opzioni impostate nell'IDE, si verificherà un errore di compilazione.

> [!NOTE]
> Informazioni raccolte dalle esecuzioni dei test di profilatura sostituiscono le ottimizzazioni che verrebbero altrimenti effetto se si specifica **/Ob**, **/Os**, o **/Ot**. Per altre informazioni, vedere [/Ob (espansione funzioni Inline)](reference/ob-inline-function-expansion.md) e [/Os, /Ot (Ottimizza per dimensione codice, Ottimizza per velocità codice)](reference/os-ot-favor-small-code-favor-fast-code.md).

## <a name="steps-to-optimize-your-app"></a>Procedura per ottimizzare l'app

Per usare ottimizzazione PGO, seguire questa procedura per ottimizzare l'app:

- Compilare uno o più file di codice sorgente con [/GL](reference/gl-whole-program-optimization.md).

   Ogni modulo compilato con **/GL** può essere esaminato durante le esecuzioni di test di ottimizzazione PGO per acquisire il comportamento in fase di esecuzione. Non devono essere compilata con tutti i moduli in una build di ottimizzazione PGO **/GL**. Tuttavia, solo i moduli compilati con **/GL** sono instrumentate e saranno poi disponibili per le ottimizzazioni PGO.

- Un collegamento tramite [/LTCG](reference/ltcg-link-time-code-generation.md) e [/GENPROFILE o /fastgenprofile](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md).

   Usando entrambe **/LTCG** e **/GENPROFILE** oppure **/FASTGENPROFILE** crea un `.pgd` quando si esegue l'applicazione instrumentata del file. Dopo aver aggiungono i dati di esecuzione dei test per il `.pgd` file, può essere utilizzato come input per il successivo passaggio di collegamento (creazione dell'immagine ottimizzata). Quando si specificano **/GENPROFILE**, è possibile aggiungere facoltativamente un **PGD =**_filename_ argomento per specificare un nome non predefinito o un percorso per il `.pgd` file. La combinazione delle **/LTCG** e **/GENPROFILE** oppure **/FASTGENPROFILE** opzioni del linker sostituisce deprecate **/LTCG: PGINSTRUMENT** opzione del linker.

- Profilare l'applicazione.

   Ogni volta che una sessione EXE profilata termina o una DLL profilata viene scaricata, un `appname!N.pgc` file viene creato. Oggetto `.pgc` file contiene informazioni sull'esecuzione dei test determinata applicazione. *NomeApp* è il nome dell'app, e *N* è un numero che inizia con 1 e viene incrementato in base al numero di altri `appname!N.pgc` file nella directory. È possibile eliminare un `.pgc` file se l'esecuzione dei test non rappresenta uno scenario che si desidera ottimizzare.

   Durante l'esecuzione dei test, è possibile forzare la chiusura di attualmente aperti `.pgc` file e la creazione di una nuova `.pgc` file con il [pgosweep](pgosweep.md) utilità (ad esempio, quando la fine di uno scenario di test non coincide con applicazione arresto del sistema).

   L'applicazione direttamente anche possibile richiamare una funzione di ottimizzazione PGO, [PgoAutoSweep](pgoautosweep.md), per acquisire i dati del profilo al momento della chiamata come un `.pgc` file. Può fornire il codice analizzato i dati acquisiti in un controllo più preciso il `.pgc` file. Per un esempio di come usare questa funzione, vedere la [PgoAutoSweep](pgoautosweep.md) documentazione.

   Quando si crea la build instrumentata, per impostazione predefinita, la raccolta dei dati viene eseguita in modalità non thread-safe, che è più veloce ma imprecise. Usando il **EXACT** argomento per **/GENPROFILE** oppure **/FASTGENPROFILE**, è possibile specificare la raccolta dei dati in modalità thread-safe, che è più precisa, ma più lento. Questa opzione è inoltre disponibile se si imposta deprecate [PogoSafeMode](environment-variables-for-profile-guided-optimizations.md#pogosafemode) variabile di ambiente o deprecata **/POGOSAFEMODE** opzione del linker, quando si crea la build instrumentata.

- Un collegamento tramite **/LTCG** e **/USEPROFILE**.

   Usare entrambi i **/LTCG** e [/USEPROFILE](reference/useprofile.md) opzioni del linker per creare l'immagine ottimizzata. Questo passaggio accetta come input il `.pgd` file. Quando si specifica **/USEPROFILE**, è possibile aggiungere facoltativamente un **PGD =**_filename_ argomento per specificare un nome diverso o un percorso per il `.pgd` file. È anche possibile specificare questo nome utilizzando deprecate **/PGD** l'opzione del linker. La combinazione delle **/LTCG** e **/USEPROFILE** sostituisce deprecate **/LTCG: PGOPTIMIZE** e **/LTCG: PGUPDATE** opzioni del linker.

È anche possibile creare il file eseguibile ottimizzato e successivamente determinare ulteriore profilatura potrebbe essere utile per creare un'immagine più ottimizzata. Se l'immagine instrumentata e il relativo `.pgd` sono disponibili file, è possibile effettuare altre esecuzioni dei test e ricompilare l'immagine ottimizzata con la versione più recente `.pgd` file, usando le stesse **/LTCG** e **/USEPROFILE** opzioni del linker.

## <a name="optimizations-performed-by-pgo"></a>Ottimizzazioni eseguite dal PGO

Le ottimizzazioni PGO includono questi controlli e miglioramenti:

- **L'incorporamento** : ad esempio, se una funzione chiama spesso la funzione B e B è relativamente piccolo, quindi PGO ottimizzazioni inline funzione B nella funzione r.

- **Virtual Call Speculation** -se una chiamata virtuale o un'altra chiamata tramite un puntatore a funzione, è spesso indirizzata a una determinata funzione, un'ottimizzazione PGO può inserire una chiamata diretta eseguita in modo condizionale alla funzione di destinazione frequentemente, e la chiamata diretta può essere impostato come inline.

- **Allocazione dei registri** -ottimizzazione basata sui risultati dei dati di profilo offre una migliore allocazione dei registri.

- **Basic Block Optimization** -ottimizzazione dei blocchi di base consente a più di frequente i blocchi di base che vengono temporaneamente eseguiti in un determinato intervallo da inserire nello stesso set di pagine (località). Riduce al minimo il numero di pagine utilizzate, riducendo al minimo il sovraccarico di memoria.

- **Size/Speed Optimization** -funzioni in cui il programma impiega più tempo di esecuzione possono essere ottimizzate per la velocità.

- **Function Layout** : base del grafico delle chiamate e profilare il comportamento di chiamante/chiamato, le funzioni che tendono a essere nello stesso percorso di esecuzione vengono inserite nella stessa sezione.

- **Conditional Branch Optimization** : con i probe dei valori, PGO ottimizzazioni possono rilevare se un determinato valore in un'istruzione switch viene utilizzato più spesso di altri valori.  Quindi è possibile effettuare il pull di questo valore dall'istruzione switch.  Lo stesso può essere eseguito con `if`... `else` istruzioni in cui query optimizer è possibile ordinare il `if`... `else` in modo che sia il `if` o `else` blocco viene posizionato in primo luogo, a seconda di quale blocco è più spesso true.

- **Dead Code Separation** -codice che non viene chiamato durante la profilatura viene spostato in una speciale sezione che viene aggiunto alla fine del set di sezioni. Conserva in modo efficace in questa sezione le pagine di utilizzo frequente.

- **EH Code Separation** -codice EH, Exception HANDLING perché viene eseguito solo in casi eccezionali, spesso può essere spostata in una sezione distinta. Viene spostato quando le ottimizzazioni PGO possono determinare che le eccezioni si verificano solo in condizioni eccezionali.

- **Memory Intrinsics** - indica se per espandere un intrinseco o non dipende dal fatto che viene chiamato frequentemente. Un intrinseco può inoltre essere ottimizzato in base alle dimensioni dei blocchi di spostamenti o di copie.

## <a name="next-steps"></a>Passaggi successivi

Per ulteriori informazioni su queste variabili di ambiente, funzioni e gli strumenti che è possibile utilizzare le ottimizzazioni PGO:

[Variabili di ambiente per le ottimizzazioni PGO](environment-variables-for-profile-guided-optimizations.md)<br/>
Queste variabili sono state usate per specificare il comportamento in fase di esecuzione degli scenari di test. Ora deprecati e sostituiti da nuove opzioni del linker. Questo documento illustra come spostare dalle variabili di ambiente per le opzioni del linker.

[PgoAutoSweep](pgoautosweep.md)<br/>
Una funzione è possibile aggiungere all'App per fornire con granularità fine `.pgc` controllo di acquisizione dei dati di file.

[pgosweep](pgosweep.md)<br/>
Un'utilità della riga di comando che consente di scrivere tutti i dati di profilo per il `.pgc` file, chiude il `.pgc` del file e apre una nuova `.pgc` file.

[pgomgr](pgomgr.md)<br/>
Un'utilità della riga di comando che consente di aggiungere i dati del profilo da uno o più `.pgc` file per il `.pgd` file.

[Procedura: Unire più profili PGO in un unico profilo](how-to-merge-multiple-pgo-profiles-into-a-single-profile.md)<br/>
Esempi di **pgomgr** utilizzo.

## <a name="see-also"></a>Vedere anche

[Strumenti di compilazione aggiuntivi MSVC](reference/c-cpp-build-tools.md)

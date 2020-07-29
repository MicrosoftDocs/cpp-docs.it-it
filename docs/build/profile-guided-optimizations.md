---
title: Ottimizzazioni PGO (Profile Guided Optmization)
ms.date: 04/23/2019
helpviewer_keywords:
- profile-guided optimizations
- optimization, profile-guided [C++]
ms.assetid: 2225c307-d3ae-42c1-8345-a5a959d132dc
ms.openlocfilehash: efa4c35810f6272b89ff11cd1c890a7f535cfc1c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232729"
---
# <a name="profile-guided-optimizations"></a>Ottimizzazioni PGO (Profile Guided Optmization)

L'ottimizzazione PGO (PGO) consente di ottimizzare un intero file eseguibile, in cui Query Optimizer usa i dati delle esecuzioni dei test del file con estensione exe o dll. I dati rappresentano le prestazioni probabili del programma in un ambiente di produzione.

Le ottimizzazioni PGO sono disponibili solo per le destinazioni native x86 o x64. Le ottimizzazioni PGO non sono disponibili per i file eseguibili eseguiti nel Common Language Runtime. Anche se si produce un assembly con codice nativo e gestito misto (usando l'opzione del compilatore **/CLR** ), non è possibile usare l'ottimizzazione PGO solo sul codice nativo. Se si tenta di compilare un progetto con queste opzioni impostate nell'IDE, viene restituito un errore di compilazione.

> [!NOTE]
> Le informazioni raccolte dalle esecuzioni dei test di profilatura eseguono l'override delle ottimizzazioni che altrimenti sarebbero attive se si specifica **/ob**, **/OS**o **/OT**. Per altre informazioni, vedere [/OB (espansione funzione inline)](reference/ob-inline-function-expansion.md) e [/OS,/OT (Ottimizza per dimensione codice, ottimizza per velocità codice)](reference/os-ot-favor-small-code-favor-fast-code.md).

## <a name="steps-to-optimize-your-app"></a>Passaggi per ottimizzare l'app

Per usare l'ottimizzazione PGO, seguire questa procedura per ottimizzare l'app:

- Compilare uno o più file di codice sorgente con [/GL](reference/gl-whole-program-optimization.md).

   Ogni modulo compilato con **/GL** può essere esaminato durante le esecuzioni dei test di ottimizzazione PGO per acquisire il comportamento in fase di esecuzione. Ogni modulo in una compilazione di ottimizzazione PGO non deve essere compilato con **/GL**. Tuttavia, solo i moduli compilati con **/GL** sono instrumentati e successivamente disponibili per le ottimizzazioni PGO.

- Collegamento con [/LTCG](reference/ltcg-link-time-code-generation.md) e [/GENPROFILE o/FASTGENPROFILE](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md).

   L'uso di **/LTCG** e **/GENPROFILE** o **/FASTGENPROFILE** crea un `.pgd` file quando viene eseguita l'app instrumentata. Dopo l'aggiunta dei dati di esecuzione dei test al `.pgd` file, è possibile usarli come input per il passaggio successivo del collegamento (creazione dell'immagine ottimizzata). Quando si specifica **/GENPROFILE**, è possibile aggiungere facoltativamente un argomento **PGD =**_filename_ per specificare un nome o un percorso non predefinito per il `.pgd` file. La combinazione di opzioni del linker **/LTCG** e **/GENPROFILE** o **/FASTGENPROFILE** sostituisce l'opzione del linker **/LTCG: PGINSTRUMENT** deprecata.

- Profilare l'applicazione.

   Ogni volta che una sessione EXE profilata termina o viene scaricata una DLL profilata, `appname!N.pgc` viene creato un file. Un `.pgc` file contiene informazioni su una particolare esecuzione di test dell'applicazione. *appname* è il nome dell'app e *N* è un numero che inizia con 1 che viene incrementato in base al numero di altri `appname!N.pgc` file nella directory. È possibile eliminare un `.pgc` file se l'esecuzione dei test non rappresenta uno scenario che si desidera ottimizzare.

   Durante un'esecuzione dei test, è possibile forzare la chiusura del `.pgc` file attualmente aperto e la creazione di un nuovo `.pgc` file con l'utilità [pgosweep](pgosweep.md) , ad esempio quando la fine di uno scenario di test non coincide con l'arresto dell'applicazione.

   L'applicazione può anche richiamare direttamente una funzione PGO, [PgoAutoSweep](pgoautosweep.md), per acquisire i dati del profilo al momento della chiamata come `.pgc` file. Può fornire un controllo più preciso sul codice coperto dai dati acquisiti nei `.pgc` file. Per un esempio di come usare questa funzione, vedere la documentazione di [PgoAutoSweep](pgoautosweep.md) .

   Quando si crea la compilazione instrumentata, per impostazione predefinita la raccolta dei dati viene eseguita in modalità non thread-safe, che è più veloce, ma potrebbe essere imprecisa. Utilizzando l'argomento **esatto** di **/GENPROFILE** o **/FASTGENPROFILE**, è possibile specificare la raccolta dati in modalità thread-safe, che è più precisa, ma più lenta. Questa opzione è disponibile anche se si imposta la variabile di ambiente [PogoSafeMode](environment-variables-for-profile-guided-optimizations.md#pogosafemode) deprecata o l'opzione del linker **/POGOSAFEMODE** deprecata quando si crea la compilazione instrumentata.

- Collegamento con **/LTCG** e **/USEPROFILE**.

   Usare entrambe le opzioni del linker **/LTCG** e [/USEPROFILE](reference/useprofile.md) per creare l'immagine ottimizzata. Questo passaggio accetta come input il `.pgd` file. Quando si specifica **/USEPROFILE**, è possibile aggiungere facoltativamente un argomento **PGD =**_filename_ per specificare un nome o un percorso non predefinito per il `.pgd` file. È anche possibile specificare questo nome usando l'opzione del linker **/PGD** deprecata. La combinazione di **/LTCG** e **/USEPROFILE** sostituisce le opzioni del linker **/LTCG: PGOPTIMIZE** e **/LTCG: PGUPDATE** deprecate.

È anche possibile creare il file eseguibile ottimizzato e in un secondo momento determinare che la profilatura aggiuntiva sarà utile per creare un'immagine più ottimizzata. Se l'immagine instrumentata e il relativo `.pgd` file sono disponibili, è possibile eseguire esecuzioni di test aggiuntive e ricompilare l'immagine ottimizzata con il file più recente `.pgd` , usando le stesse opzioni del linker **/LTCG** e **/USEPROFILE** .

> [!NOTE]
> Entrambi `.pgc` `.pgd` i file e sono tipi di file binari. Se archiviato in un sistema di controllo del codice sorgente, evitare eventuali trasformazioni automatiche che possono essere apportate ai file di testo.

## <a name="optimizations-performed-by-pgo"></a>Ottimizzazioni eseguite da PGO

Le ottimizzazioni PGO includono i controlli e i miglioramenti seguenti:

- **Incorporamento. ad** esempio, se una funzione chiama spesso la funzione b e la funzione b è relativamente piccola, le ottimizzazioni PGO funzioneranno nella funzione a.

- **Speculazione di chiamata virtuale** : se una chiamata virtuale o un'altra chiamata attraverso un puntatore a funzione è spesso destinata a una determinata funzione, un'ottimizzazione PGO può inserire una chiamata diretta eseguita in modo condizionale alla funzione di destinazione frequente e la chiamata diretta può essere impostata come inline.

- Registra l'ottimizzazione dell' **allocazione** basata sui dati del profilo comporta una migliore allocazione del registro.

- **Ottimizzazione** dei blocchi di base: l'ottimizzazione dei blocchi di base consente i blocchi di base comunemente eseguiti che vengono eseguiti temporaneamente all'interno di un determinato frame per essere inseriti nello stesso set di pagine (località). Riduce al minimo il numero di pagine utilizzate, riducendo al minimo il sovraccarico della memoria.

- **Ottimizzazione delle dimensioni e della velocità** : le funzioni in cui il programma dedica la maggior parte del tempo di esecuzione possono essere ottimizzate per la velocità.

- **Layout della funzione** : in base al grafico delle chiamate e al comportamento del chiamante/chiamato profilato, le funzioni che tendono a trovarsi lungo lo stesso percorso di esecuzione vengono inserite nella stessa sezione.

- **Ottimizzazione del ramo condizionale** : con i probe del valore, le ottimizzazioni PGO possono determinare se un determinato valore in un'istruzione switch viene usato più spesso di altri valori.  Quindi è possibile effettuare il pull di questo valore dall'istruzione switch.  Lo stesso vale per le **`if`** istruzioni... in **`else`** cui Query Optimizer è in grado di ordinare **`if`** ... in **`else`** modo che il **`if`** **`else`** blocco o venga inserito per primo, a seconda del blocco che è più spesso vero.

- **Separazione del codice inattivo** : il codice che non viene chiamato durante la profilatura viene spostato in una sezione speciale aggiunta alla fine del set di sezioni. Questa sezione viene effettivamente mantenuta dalle pagine utilizzate spesso.

- La **separazione del codice eh** : poiché il codice eh viene eseguito solo eccezionalmente, può spesso essere spostato in una sezione separata. Viene spostata quando le ottimizzazioni PGO possono determinare che le eccezioni si verificano solo in condizioni eccezionali.

- **Funzioni intrinseche di memoria** : se espandere un intrinseco o meno, dipende dal fatto che venga chiamato di frequente. Un intrinseco può inoltre essere ottimizzato in base alle dimensioni dei blocchi di spostamenti o di copie.

## <a name="next-steps"></a>Passaggi successivi

Altre informazioni su queste variabili di ambiente, funzioni e strumenti che è possibile usare nelle ottimizzazioni PGO:

[Variabili d'ambiente per le ottimizzazioni GPO](environment-variables-for-profile-guided-optimizations.md)<br/>
Queste variabili sono state usate per specificare il comportamento in fase di esecuzione degli scenari di test. Sono ora deprecate e sostituite dalle nuove opzioni del linker. Questo documento illustra come passare dalle variabili di ambiente alle opzioni del linker.

[PgoAutoSweep](pgoautosweep.md)<br/>
Funzione che è possibile aggiungere all'app per fornire un controllo granulare per l' `.pgc` acquisizione di dati di file.

[pgosweep](pgosweep.md)<br/>
Utilità della riga di comando che scrive tutti i dati del profilo nel `.pgc` file, chiude il `.pgc` file e apre un nuovo `.pgc` file.

[pgomgr](pgomgr.md)<br/>
Utilità da riga di comando che aggiunge dati di profilo da uno o più `.pgc` file al `.pgd` file.

[Procedura: Unire più profili PGO in un unico profilo](how-to-merge-multiple-pgo-profiles-into-a-single-profile.md)<br/>
Esempi di utilizzo di **pgomgr** .

## <a name="see-also"></a>Vedere anche

[Strumenti di compilazione aggiuntivi MSVC](reference/c-cpp-build-tools.md)

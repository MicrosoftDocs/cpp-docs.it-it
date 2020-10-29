---
title: Progetti CMake in Visual Studio
description: Come creare e compilare progetti C++ con CMake in Visual Studio.
ms.date: 01/08/2020
helpviewer_keywords:
- CMake in Visual C++
ms.assetid: 444d50df-215e-4d31-933a-b41841f186f8
ms.openlocfilehash: 693179c6da368fa84a5ccb0ffaf2b1b1596972b8
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92922332"
---
# <a name="cmake-projects-in-visual-studio"></a>Progetti CMake in Visual Studio

CMake è uno strumento open source multipiattaforma per la definizione di processi di compilazione che funzionano su più piattaforme. Questo articolo presuppone che l'utente abbia familiarità con CMake. Per altre informazioni su questo strumento, vedere come [compilare, testare e creare pacchetti software con CMake](https://cmake.org/).

> [!NOTE]
> CMake è diventato sempre più integrato con Visual Studio nelle ultime versioni. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo selettore della **versione** . Si trova nella parte superiore del sommario in questa pagina.

::: moniker range="msvc-160"

Il componente **strumenti di C++ CMake per Windows** utilizza la funzionalità [Apri cartella](open-folder-projects-cpp.md) per utilizzare i file di progetto CMake (ad esempio *CMakeLists.txt* ) direttamente ai fini di IntelliSense e di esplorazione. Sono supportati i generatori Ninja e Visual Studio. Se si usa un generatore di Visual Studio, viene generato un file di progetto temporaneo che viene passato a msbuild.exe. Il progetto, tuttavia, non viene mai caricato per IntelliSense o per scopi di esplorazione. È anche possibile importare una cache CMake esistente.

## <a name="installation"></a>Installazione

**Gli strumenti CMake c++ per Windows** vengono installati come parte dello sviluppo **desktop con** i carichi di lavoro di sviluppo per C++ e **Linux con c++** . Per altre informazioni, vedere [progetti CMake multipiattaforma](../linux/cmake-linux-project.md).

![Screenshot dell'opzione per lo sviluppo di applicazioni desktop con C Plus Plus selezionata e l'opzione c Plus Plus C make Tools for Windows denominata out.](media/cmake-install-2019.png)

Per altre informazioni, vedere [Installare il carico di lavoro Linux C++ in Visual Studio](../linux/download-install-and-setup-the-linux-development-workload.md).

## <a name="ide-integration"></a>Integrazione nell'IDE

Quando si sceglie **file > aprire > cartella** per aprire una cartella che contiene un file *CMakeLists.txt* , si verifica quanto segue:

- Visual Studio aggiunge gli elementi **CMake** al menu **progetto** , con i comandi per la visualizzazione e la modifica degli script CMake.

- **Esplora soluzioni** visualizza la struttura delle cartelle e i file.

- Visual Studio esegue cmake.exe e genera il file di cache CMake ( *CMakeCache.txt* ) per la configurazione predefinita (debug x64). La riga di comando CMake viene visualizzata nella **Finestra di output** , insieme all'uscita aggiuntiva da CMake.

- In background, Visual Studio inizia a indicizzare i file sorgente per abilitare IntelliSense, le informazioni di navigazione, il refactoring e così via. Mentre si lavora, Visual Studio esegue il monitoraggio delle modifiche nell'editor e anche sul disco per mantenere l'indice sincronizzato con le sorgenti.

È possibile aprire le cartelle che contengono un numero qualsiasi di progetti di CMake. Visual Studio rileva e configura tutti i file di *CMakeLists.txt* radice nell'area di lavoro. Le operazioni di CMake (configure, Build, debug), C++ IntelliSense e browsing sono disponibili per tutti i progetti CMake nell'area di lavoro.

![Progetto CMake con più radici](media/cmake-multiple-roots.png)

È anche possibile visualizzare i progetti organizzati in modo logico in base alle destinazioni. Scegliere **Visualizzazione destinazioni CMake** dall'elenco a discesa sulla barra degli strumenti di **Esplora soluzioni** :

![Pulsante Visualizzazione destinazioni CMake](media/cmake-targets-view.png)

Fare clic sul pulsante **Mostra tutti i file** nella parte superiore di **Esplora soluzioni** per visualizzare l'output generato da CMake in *out/Build/ \<config>* Folders.

Visual Studio usa un file di configurazione denominato **CMakeSettings.json** . Questo file consente di definire e archiviare più configurazioni di compilazione e di spostarsi agevolmente tra di essi nell'IDE. Una *configurazione* è un costrutto di Visual Studio che incapsula le impostazioni specifiche di un determinato tipo di compilazione. Le impostazioni vengono usate per configurare le opzioni della riga di comando predefinite che Visual Studio passa a cmake.exe. È anche possibile specificare qui altre opzioni di CMake e definire le eventuali variabili aggiuntive desiderate. Tutte le opzioni vengono scritte nella cache CMake come variabili interne o esterne. In Visual Studio 2019, l' **Editor delle impostazioni CMake** offre un modo pratico per modificare le impostazioni. Per altre informazioni, vedere [Customize CMake settings](customize-cmake-settings.md) (Personalizzare le impostazioni di CMake).

Una delle impostazioni `intelliSenseMode` non viene passata a CMake, ma viene usata solo da Visual Studio.

Usare il file di **CMakeLists.txt** in ogni cartella del progetto esattamente come in qualsiasi progetto CMake. È possibile specificare i file di origine, trovare le librerie, impostare le opzioni del compilatore e del linker e specificare altre informazioni relative al sistema di compilazione.

Per passare argomenti a un eseguibile in fase di debug, è possibile usare un altro file denominato **launch.vs.json** . In alcuni scenari, Visual Studio genera automaticamente questi file. È possibile modificarli manualmente o persino creare il file manualmente.

> [!NOTE]
> Per altri tipi di progetti di cartelle aperte, vengono usati due file JSON aggiuntivi: **CppProperties.json** e **tasks.vs.json** . Nessuno dei due è rilevante per i progetti CMake.

## <a name="open-an-existing-cache"></a>Aprire una cache esistente

Quando si apre un file di cache CMake esistente ( *CMakeCache.txt* ), Visual Studio non tenta di gestire la cache e la struttura di compilazione. Gli strumenti personalizzati o Preferiti hanno il controllo completo sulla configurazione del progetto da CMake. Per aprire una cache esistente in Visual Studio, scegliere **File > apri > CMake** . Quindi, passare a un file di *CMakeCache.txt* esistente.

È possibile aggiungere una cache CMake esistente a un progetto aperto. Questa operazione viene eseguita nello stesso modo in cui si aggiunge una nuova configurazione. Per altre informazioni, vedere il post di Blog sull' [apertura di una cache esistente in Visual Studio](https://devblogs.microsoft.com/cppblog/open-existing-cmake-caches-in-visual-studio/).

## <a name="building-cmake-projects"></a>Compilazione di progetti CMake

Per compilare un progetto di CMake, sono disponibili le opzioni seguenti:

1. Nella barra degli strumenti generale trovare l'elenco a discesa **configurazioni** . Per impostazione predefinita, è probabile che venga visualizzato "x64-debug". Selezionare la configurazione preferita e premere **F5** oppure fare clic sul pulsante **Esegui** (triangolo verde) sulla barra degli strumenti. Il progetto viene compilato automaticamente prima di tutto, come una soluzione Visual Studio.

1. Fare clic con il pulsante destro del mouse su *CMakeLists.txt* e scegliere **Compila** dal menu di scelta rapida. Se nella struttura delle cartelle sono presenti più destinazioni, è possibile scegliere di compilare tutte o solo una destinazione specifica.

1. Dal menu principale, selezionare **compila > compila tutto** ( **F7** o **CTRL + MAIUSC + B** ). Assicurarsi che sia già selezionata una destinazione di CMake nell'elenco a discesa **Elemento di avvio** nella barra degli strumenti **Generale** .

![Comando di menu Compila CMake](media/cmake-build-menu.png "Menu dei comandi di compilazione CMake")

Come prevedibile, i risultati della compilazione sono visualizzati nella **Finestra di output** e nell' **Elenco errori** .

![Errori di compilazione CMake](media/cmake-build-errors.png "Errori di compilazione CMake")

In una cartella con più destinazioni di compilazione è possibile specificare la destinazione CMake da compilare: scegliere l'elemento di **compilazione** dal menu **CMake** o il menu di scelta rapida *CMakeLists.txt* per specificare la destinazione. Se si **preme CTRL + MAIUSC + B** in un progetto CMake, viene compilato il documento attivo corrente.

## <a name="debugging-cmake-projects"></a>Debug dei progetti CMake

Per eseguire il debug di un progetto CMake, scegliere la configurazione preferita e premere **F5** oppure premere il pulsante **Esegui** sulla barra degli strumenti. Se il pulsante **Esegui** indica "Seleziona elemento di avvio", selezionare la freccia a discesa. Scegliere la destinazione che si desidera eseguire. (In un progetto CMake, l'opzione "documento corrente" è valida solo per i file con estensione .cpp.)

![Pulsante Esegui CMake](media/cmake-run-button.png "Pulsante Esegui CMake")

I comandi **Esegui** o **F5** compilano innanzitutto il progetto se sono state apportate modifiche rispetto alla compilazione precedente. Le modifiche apportate a *CMakeSettings.jssu* provocano la rigenerazione della cache CMake.

È possibile personalizzare una sessione di debug CMake impostando le proprietà nella **launch.vs.jssu** file. Per altre informazioni, vedere [Configure CMake debugging sessions](configure-cmake-debugging-sessions.md) (Configurare le sessioni di debug di CMake).

## <a name="just-my-code-for-cmake-projects"></a>Just My Code per i progetti CMake

Quando si compila per Windows usando il compilatore MSVC, i progetti CMake dispongono del supporto per il debug del Just My Code. Per modificare l'impostazione di Just My Code, passare a **strumenti**  >  **Opzioni**  >  **debug**  >  **generale** .

## <a name="vcpkg-integration"></a>Integrazione vcpkg

Se è stato installato [vcpkg](vcpkg.md), i progetti CMake aperti in Visual Studio integrano automaticamente il file di vcpkg. Questo significa che non è necessaria alcuna configurazione aggiuntiva per usare vcpkg con i progetti CMake. Questo supporto funziona sia per le installazioni vcpkg locali sia per le installazioni vcpkg nei sistemi remoti di destinazione. Questo comportamento viene disabilitato automaticamente quando si specifica un altro sistema di gestione dei problemi nella configurazione delle impostazioni CMake.

## <a name="customize-configuration-feedback"></a>Personalizzare il feedback sulla configurazione

Per impostazione predefinita, la maggior parte dei messaggi di configurazione viene eliminata a meno che non si verifichi un errore. È possibile visualizzare tutti i messaggi abilitando questa funzionalità in **strumenti**  >  **Opzioni**  >  **CMake** .

   ![Configurazione delle opzioni di diagnostica CMake](media/vs2019-cmake-configure-options.png "Opzioni di diagnostica CMake")

## <a name="editing-cmakeliststxt-files"></a>Modifica dei file CMakeLists.txt

Per modificare un file di *CMakeLists.txt* , fare clic con il pulsante destro del mouse sul file in **Esplora soluzioni** e scegliere **Apri** . Se si apportano modifiche al file, viene visualizzata una barra di stato gialla che informa che IntelliSense verrà aggiornato. Offre la possibilità di annullare l'operazione di aggiornamento. Per informazioni su *CMakeLists.txt* , vedere la [documentazione di CMake](https://cmake.org/documentation/).

   ![ Modifica file diCMakeLists.txt](media/cmake-cmakelists.png "Modifica file di CMakeLists.txt")

Non appena si salva il file, viene eseguito nuovamente e automaticamente il passaggio di configurazione che visualizza le informazioni nella finestra **Output** . Gli errori e gli avvisi vengono visualizzati nella finestra **Elenco errori** o **Output** . Fare doppio clic su un errore nel **Elenco errori** per passare alla riga che causa l'errore nel *CMakeLists.txt* .

   ![ Errori diCMakeLists.txt file](media/cmake-cmakelists-error.png "Errori di CMakeLists.txt file")

## <a name="cmake-configure-step"></a>Fase di configurazione di CMake

Quando si apportano modifiche significative all' *CMakeSettings.js* o ai file *CMakeLists.txt* , Visual Studio riesegue automaticamente il passaggio di configurazione CMake. Se il passaggio di configurazione viene completato senza errori, le informazioni raccolte sono disponibili in IntelliSense per C++ e servizi di linguaggio. Viene usato anche nelle operazioni di compilazione e debug.

## <a name="troubleshooting-cmake-cache-errors"></a>Risoluzione degli errori di cache CMake

Se sono necessarie altre informazioni sullo stato della cache CMake per diagnosticare un problema, aprire il menu principale del **progetto** o il menu di scelta rapida *CMakeLists.txt* in **Esplora soluzioni** per eseguire uno di questi comandi:

- **Visualizza cache** apre il file di *CMakeCache.txt* dalla cartella radice di compilazione nell'editor. Tutte le modifiche apportate qui per *CMakeCache.txt* vengono cancellate se si pulisce la cache. Per apportare modifiche che vengono mantenute dopo la pulizia della cache, vedere [personalizzare le impostazioni CMake](customize-cmake-settings.md).

- **Apri cartella cache** apre una finestra di Explorer corrispondente alla cartella radice di compilazione.

- **Pulisci cache** elimina la cartella radice di compilazione in modo che la fase successiva di configurazione di CMake inizi da una cache pulita.

- **Genera cache** forza l'esecuzione del passaggio di generazione anche se Visual Studio considera l'ambiente aggiornato.

La generazione automatica della cache può essere disabilitata nella finestra di dialogo **strumenti > opzioni > cmake > generale** .

## <a name="run-cmake-from-the-command-line"></a>Eseguire CMake dalla riga di comando

Se CMake è stato installato dal programma di installazione di Visual Studio, è possibile eseguirlo dalla riga di comando seguendo questa procedura:

1. Eseguire il file vsdevcmd.bat appropriato (x86 o x64). Per ulteriori informazioni, vedere [compilazione dalla riga di comando](building-on-the-command-line.md).

1. Passare alla cartella di output.

1. Eseguire CMake per compilare/configurare l'app.

::: moniker-end

::: moniker range="msvc-150"

Visual Studio 2017 offre un supporto avanzato per CMake, inclusi i [progetti CMake multipiattaforma](../linux/cmake-linux-project.md). Il componente **Visual C++ Tools per CMake** usa la funzionalità **Apri cartella** per consentire all'IDE di utilizzare i file di progetto CMake, ad esempio *CMakeLists.txt* , direttamente ai fini di IntelliSense e di esplorazione. Sono supportati i generatori Ninja e Visual Studio. Se si usa un generatore di Visual Studio, viene generato un file di progetto temporaneo che viene passato a msbuild.exe. Il progetto, tuttavia, non viene mai caricato per IntelliSense o per scopi di esplorazione. È anche possibile importare una cache CMake esistente.

## <a name="installation"></a>Installazione

**Visual C++ Tools per CMake** viene installato come parte dello sviluppo di applicazioni **desktop con** i carichi di lavoro di sviluppo per C++ e **Linux con c++** .

![Screenshot della scheda singoli componenti con l'opzione di Visual C Plus Plus Tools for C denominata.](media/cmake-install.png)

Per altre informazioni, vedere [Installare il carico di lavoro Linux C++ in Visual Studio](../linux/download-install-and-setup-the-linux-development-workload.md).

## <a name="ide-integration"></a>Integrazione con l'IDE

Quando si sceglie **file > aprire > cartella** per aprire una cartella che contiene un file *CMakeLists.txt* , si verifica quanto segue:

- Visual Studio aggiunge una voce di menu **CMake** al menu principale, con comandi per la visualizzazione e la modifica di script di CMake.

- **Esplora soluzioni** visualizza la struttura delle cartelle e i file.

- Visual Studio esegue CMake.exe e genera facoltativamente la cache CMake per la *configurazione* predefinita, ovvero Debug x86. La riga di comando CMake viene visualizzata nella **Finestra di output** , insieme all'uscita aggiuntiva da CMake.

- In background, Visual Studio inizia a indicizzare i file sorgente per abilitare IntelliSense, le informazioni di navigazione, il refactoring e così via. Mentre si lavora, Visual Studio esegue il monitoraggio delle modifiche nell'editor e anche sul disco per mantenere l'indice sincronizzato con le sorgenti.

È possibile aprire le cartelle che contengono un numero qualsiasi di progetti di CMake. Visual Studio rileva e configura tutti i file di *CMakeLists.txt* radice nell'area di lavoro. Le operazioni di CMake (configure, Build, debug), C++ IntelliSense e browsing sono disponibili per tutti i progetti CMake nell'area di lavoro.

![Progetto CMake con più radici](media/cmake-multiple-roots.png)

È anche possibile visualizzare i progetti organizzati in modo logico in base alle destinazioni. Scegliere **Visualizzazione destinazioni CMake** dall'elenco a discesa sulla barra degli strumenti di **Esplora soluzioni** :

![Pulsante Visualizzazione destinazioni CMake](media/cmake-targets-view.png)

Visual Studio usa un file denominato *CMakeSettings.json* per archiviare le variabili di ambiente o le opzioni della riga di comando per Cmake.exe. *CMakeSettings.js* Abilita anche la definizione e l'archiviazione di più configurazioni di compilazione CMake. È possibile passare da una posizione all'altra nell'IDE.

In caso contrario, usare il *CMakeLists.txt* come in qualsiasi progetto CMake per specificare i file di origine, trovare le librerie, impostare le opzioni del compilatore e del linker e specificare altre informazioni relative al sistema di compilazione.

Se è necessario passare argomenti a un eseguibile in fase di debug, è possibile usare un altro file denominato **launch.vs.json** . In alcuni scenari, Visual Studio genera automaticamente questi file. È possibile modificarli manualmente o persino creare il file manualmente.

> [!NOTE]
> Per altri tipi di progetti di cartelle aperte, vengono usati due file JSON aggiuntivi: **CppProperties.json** e **tasks.vs.json** . Nessuno dei due è rilevante per i progetti CMake.

## <a name="import-an-existing-cache"></a>Importare una cache esistente

Quando si importa un file di *CMakeCache.txt* esistente, Visual Studio estrae automaticamente le variabili personalizzate e crea unCMakeSettings.jspre-popolato *su file in* base a tali file. La cache originale non viene modificata in alcun modo. Può comunque essere usato dalla riga di comando o con qualsiasi strumento o IDE usato per generarlo. Il nuovo  *CMakeSettings.jsnel* file viene inserito insieme alla *CMakeLists.txt* radice del progetto. Visual Studio genera una nuova cache basata sul file di impostazione. È possibile eseguire l'override della generazione automatica della cache nella finestra di dialogo **strumenti > opzioni > cmake > generale** .

Non tutti gli elementi della cache vengono importati.  Proprietà quali il generatore e la posizione dei compilatori vengono sostituite con proprietà predefinite che funzionano bene con l'IDE.

### <a name="to-import-an-existing-cache"></a>Per importare una cache esistente

1. Dal menu principale scegliere **File > apri > CMake** :

   ![Apri CMake](media/cmake-file-open.png "File, apertura, CMake")

   Questo comando Visualizza la procedura guidata **Importa CMake dalla cache** .

2. Passare al file *CMakeCache.txt* che si desidera importare, quindi fare clic su **OK** . Viene visualizzata la procedura guidata **Importa progetto CMake dalla cache** :

   ![Importare una cache CMake](media/cmake-import-wizard.png "Aprire la procedura guidata di importazione della cache di CMake")

   Al termine della procedura guidata, è possibile visualizzare il nuovo file di *CMakeCache.txt* in **Esplora soluzioni** accanto al file radice *CMakeLists.txt* nel progetto.

## <a name="building-cmake-projects"></a>Compilazione di progetti CMake

Per compilare un progetto di CMake, sono disponibili le opzioni seguenti:

1. Nella barra degli strumenti generale trovare l'elenco a discesa **configurazioni** . Per impostazione predefinita, è probabile che venga visualizzato "Linux-debug" o "x64-debug". Selezionare la configurazione preferita e premere **F5** oppure fare clic sul pulsante **Esegui** (triangolo verde) sulla barra degli strumenti. Il progetto viene compilato automaticamente prima di tutto, come una soluzione Visual Studio.

1. Fare clic con il pulsante destro del mouse sul *CMakeLists.txt* e scegliere **Compila** dal menu di scelta rapida. Se nella struttura delle cartelle sono presenti più destinazioni, è possibile scegliere di compilare tutte o solo una destinazione specifica.

1. Dal menu principale, selezionare **compila > Compila soluzione** ( **F7** o **CTRL + MAIUSC + B** ). Assicurarsi che sia già selezionata una destinazione di CMake nell'elenco a discesa **Elemento di avvio** nella barra degli strumenti **Generale** .

![Comando di menu Compila CMake](media/cmake-build-menu.png "Menu dei comandi di compilazione CMake")

È possibile personalizzare le configurazioni di compilazione, le variabili di ambiente, gli argomenti della riga di comando e altre impostazioni nel *CMakeSettings.jssu* file. Consente di apportare modifiche senza modificare il file di *CMakeLists.txt* . Per altre informazioni, vedere [Customize CMake settings](customize-cmake-settings.md) (Personalizzare le impostazioni di CMake).

Come prevedibile, i risultati della compilazione sono visualizzati nella **Finestra di output** e nell' **Elenco errori** .

![Errori di compilazione CMake](media/cmake-build-errors.png "Errori di compilazione CMake")

In una cartella con più destinazioni di compilazione è possibile specificare la destinazione CMake da compilare: scegliere l'elemento di **compilazione** dal menu **CMake** o il menu di scelta rapida *CMakeLists.txt* per specificare la destinazione. Se si **preme CTRL + MAIUSC + B** in un progetto CMake, viene compilato il documento attivo corrente.

## <a name="debugging-cmake-projects"></a>Debug dei progetti CMake

Per eseguire il debug di un progetto CMake, scegliere la configurazione preferita e premere **F5** . In alternativa, premere il pulsante **Esegui** sulla barra degli strumenti. Se il pulsante **Esegui** visualizza "Seleziona elemento di avvio", selezionare la freccia a discesa e scegliere la destinazione che si desidera eseguire. (In un progetto CMake, l'opzione "documento corrente" è valida solo per i file con estensione .cpp.)

![Pulsante Esegui CMake](media/cmake-run-button.png "Pulsante Esegui CMake")

I comandi **Esegui** o **F5** compilano innanzitutto il progetto se sono state apportate modifiche rispetto alla compilazione precedente.

È possibile personalizzare una sessione di debug CMake impostando le proprietà nella **launch.vs.jssu** file. Per altre informazioni, vedere [Configure CMake debugging sessions](configure-cmake-debugging-sessions.md) (Configurare le sessioni di debug di CMake).

## <a name="editing-cmakeliststxt-files"></a>Modifica dei file CMakeLists.txt

Per modificare un file di *CMakeLists.txt* , fare clic con il pulsante destro del mouse sul file in **Esplora soluzioni** e scegliere **Apri** . Se si apportano modifiche al file, viene visualizzata una barra di stato gialla che informa che IntelliSense verrà aggiornato. Offre la possibilità di annullare l'operazione di aggiornamento. Per informazioni su *CMakeLists.txt* , vedere la [documentazione di CMake](https://cmake.org/documentation/).

   ![ Modifica file diCMakeLists.txt](media/cmake-cmakelists.png "Modifica file di CMakeLists.txt")

Non appena si salva il file, viene eseguito nuovamente e automaticamente il passaggio di configurazione che visualizza le informazioni nella finestra **Output** . Gli errori e gli avvisi vengono visualizzati nella finestra **Elenco errori** o **Output** . Fare doppio clic su un errore nel **Elenco errori** per passare alla riga che causa l'errore nel *CMakeLists.txt* .

   ![ Errori diCMakeLists.txt file](media/cmake-cmakelists-error.png "Errori di CMakeLists.txt file")

## <a name="cmake-configure-step"></a>Fase di configurazione di CMake

Quando vengono apportate modifiche significative all'  *CMakeSettings.jssu* o ai file *CMakeLists.txt* , Visual Studio riesegue automaticamente il passaggio di configurazione CMake. Se il passaggio di configurazione viene completato senza errori, le informazioni raccolte sono disponibili in IntelliSense per C++ e servizi di linguaggio. Viene usato anche nelle operazioni di compilazione e debug.

Più progetti CMake possono usare lo stesso nome di configurazione di CMake (ad esempio, x86-debug). Tutti gli elementi sono configurati e compilati (nella propria cartella radice di compilazione) quando viene selezionata la configurazione. È possibile eseguire il debug delle destinazioni da tutti i progetti CMake che partecipano alla configurazione CMake.

   ![Voce di menu solo compilazione CMake](media/cmake-build-only.png "Voce di menu solo compilazione CMake")

È possibile limitare le compilazioni e le sessioni di debug a un subset dei progetti nell'area di lavoro. Creare una nuova configurazione con un nome univoco nella  *CMakeSettings.jssu* file. Applicare quindi la configurazione solo a questi progetti. Quando tale configurazione è selezionata, IntelliSense e i comandi di compilazione e debug si applicano solo ai progetti specificati.

## <a name="troubleshooting-cmake-cache-errors"></a>Risoluzione degli errori di cache CMake

Per altre informazioni sullo stato della cache CMake per diagnosticare un problema, aprire il menu principale **CMake** o il menu contestuale *CMakeLists.txt* in **Esplora soluzioni** per eseguire uno di questi comandi:

- **Visualizza cache** apre il file di  *CMakeCache.txt* dalla cartella radice di compilazione nell'editor. Tutte le modifiche apportate qui per  *CMakeCache.txt* vengono cancellate se si pulisce la cache. Per apportare modifiche che vengono mantenute dopo la pulizia della cache, vedere [personalizzare le impostazioni CMake](customize-cmake-settings.md).

- **Apri cartella cache** apre una finestra di Explorer corrispondente alla cartella radice di compilazione.

- **Pulisci cache** elimina la cartella radice di compilazione in modo che la fase successiva di configurazione di CMake inizi da una cache pulita.

- **Genera cache** forza l'esecuzione del passaggio di generazione anche se Visual Studio considera l'ambiente aggiornato.

La generazione automatica della cache può essere disabilitata nella finestra di dialogo **strumenti > opzioni > cmake > generale** .

## <a name="single-file-compilation"></a>Compilazione di file singoli

Per compilare un singolo file in un progetto CMake, fare clic con il pulsante destro del mouse sul file in **Esplora soluzioni** . Scegliere **Compila** dal menu a comparsa. È anche possibile compilare il file attualmente aperto nell'editor usando il menu **CMake** principale:

![Compilazione di un file singolo di CMake](media/cmake-single-file-compile.png)

## <a name="run-cmake-from-the-command-line"></a>Eseguire CMake dalla riga di comando

Se CMake è stato installato dal programma di installazione di Visual Studio, è possibile eseguirlo dalla riga di comando seguendo questa procedura:

1. Eseguire il file vsdevcmd.bat appropriato (x86 o x64). Per ulteriori informazioni, vedere [compilazione dalla riga di comando](building-on-the-command-line.md) .

1. Passare alla cartella di output.

1. Eseguire CMake per compilare/configurare l'app.

::: moniker-end

::: moniker range="msvc-140"

In Visual Studio 2015, gli utenti di Visual Studio potevano usare un [generatore CMake](https://cmake.org/cmake/help/latest/manual/cmake-generators.7.html) per generare file di progetto MSBuild, che l'IDE usava successivamente per IntelliSense, navigazione e compilazione.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Esercitazione: creare progetti C++ multipiattaforma in Visual Studio](get-started-linux-cmake.md)\
[Configurare un progetto CMake per Linux](../linux/cmake-linux-project.md)\
[Connettersi al computer Linux remoto](../linux/connect-to-your-remote-linux-computer.md)\
[Personalizzare le impostazioni di compilazione CMake](customize-cmake-settings.md)\
[CMakeSettings.jsper riferimento allo schema](cmakesettings-reference.md)\
[Configurare sessioni di debug CMake](configure-cmake-debugging-sessions.md)\
[Distribuire, eseguire ed eseguire il debug del progetto Linux](../linux/deploy-run-and-debug-your-linux-project.md)\
[Informazioni di riferimento sulle configurazioni predefinite CMake](cmake-predefined-configuration-reference.md)

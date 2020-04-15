---
title: Progetti CMake in Visual Studio
description: Come creare e compilare progetti in C, utilizzando CMake in Visual Studio.
ms.date: 01/08/2020
helpviewer_keywords:
- CMake in Visual C++
ms.assetid: 444d50df-215e-4d31-933a-b41841f186f8
ms.openlocfilehash: 49ba53eaa8ac075ab6d3b2a66f33160c5c3ec410
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329166"
---
# <a name="cmake-projects-in-visual-studio"></a>Progetti CMake in Visual Studio

CMake è uno strumento open source multipiattaforma per la definizione di processi di compilazione che funzionano su più piattaforme. In questo articolo si presuppone che l'utente abbia familiarità con CMake. Per altre informazioni su questo strumento, vedere come [compilare, testare e creare pacchetti software con CMake](https://cmake.org/).

> [!NOTE]
> CMake è diventato sempre più integrato con Visual Studio nelle ultime versioni. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo Selettore **versione.** Si trova nella parte superiore del sommario in questa pagina.

::: moniker range="vs-2019"

Per utilizzare direttamente i file di [Open Folder](open-folder-projects-cpp.md) progetto *CMake (ad esempio CMakeLists.txt)* per l'utilizzo dei file di progetto CMake (ad esempio CMakeLists.txt ), gli **strumenti di Creazione cè** vengono utilizzati direttamente ai fini dell'esplorazione e dell'esplorazione di IntelliSense. Sono supportati i generatori Ninja e Visual Studio. Se si utilizza un generatore di Visual Studio, viene generato un file di progetto temporaneo che viene passato a msbuild.exe. Tuttavia, il progetto non viene mai caricato per IntelliSense o scopi di esplorazione. È inoltre possibile importare una cache CMake esistente.

## <a name="installation"></a>Installazione

Gli **strumenti di CMake per Windows** sono installati come parte dello sviluppo di desktop con i carichi di lavoro di **C** e **Linux.** Per ulteriori informazioni, consultate [Progetti CMake multipiattaforma.](../linux/cmake-linux-project.md)

![Componente CMake nel carico di lavoro Desktop C++](media/cmake-install-2019.png)

Per altre informazioni, vedere [Installare il carico di lavoro Linux C++ in Visual Studio](../linux/download-install-and-setup-the-linux-development-workload.md).

## <a name="ide-integration"></a>Integrazione nell'IDE

Quando si sceglie **File > Apri > cartella** per aprire una cartella contenente un file *CMakeLists.txt,* si verificano le seguenti situazioni:

- Visual Studio aggiunge elementi **CMake** al menu **Progetto,** con comandi per la visualizzazione e la modifica di script CMake.

- **Esplora soluzioni** visualizza la struttura delle cartelle e i file.

- Visual Studio esegue cmake.exe e genera il file di cache CMake (*CMakeCache.txt*) per la configurazione predefinita (x64 Debug). La riga di comando CMake viene visualizzata nella **Finestra di output**, insieme all'uscita aggiuntiva da CMake.

- In background, Visual Studio inizia a indicizzare i file sorgente per abilitare IntelliSense, le informazioni di navigazione, il refactoring e così via. Mentre si lavora, Visual Studio esegue il monitoraggio delle modifiche nell'editor e anche sul disco per mantenere l'indice sincronizzato con le sorgenti.

È possibile aprire le cartelle che contengono un numero qualsiasi di progetti di CMake. Visual Studio rileva e configura tutti i file *CMakeLists.txt* "radice" nell'area di lavoro. Le operazioni di CMake (configure, build, debug), IntelliSense e l'esplorazione sono disponibili per tutti i progetti CMake nell'area di lavoro.

![Progetto CMake con più radici](media/cmake-multiple-roots.png)

È anche possibile visualizzare i progetti organizzati in modo logico in base alle destinazioni. Scegliere **Visualizzazione destinazioni CMake** dall'elenco a discesa sulla barra degli strumenti di **Esplora soluzioni**:

![Pulsante Visualizzazione destinazioni CMake](media/cmake-targets-view.png)

Fare clic sul pulsante **Mostra tutti i file** nella parte superiore di Esplora **soluzioni** per visualizzare tutto l'output generato da CMake nelle cartelle *out/build/config\<>.*

Visual Studio utilizza un file di configurazione denominato **CMakeSettings.json**. Questo file consente di definire e archiviare più configurazioni di compilazione e di passare comodamente da una all'altra nell'IDE. Una *configurazione* è un costrutto di Visual Studio che incapsula le impostazioni specifiche di un determinato tipo di compilazione. Le impostazioni vengono utilizzate per configurare le opzioni predefinite della riga di comando che Visual Studio passa a cmake.exe. È inoltre possibile specificare ulteriori opzioni CMake qui e definire eventuali variabili aggiuntive che ti piace. Tutte le opzioni vengono scritte nella cache di CMake come variabili interne o esterne. In Visual Studio 2019, **l'editor delle impostazioni di CMake** offre un modo pratico per modificare le impostazioni. Per altre informazioni, vedere [Customize CMake settings](customize-cmake-settings.md) (Personalizzare le impostazioni di CMake).

Un'impostazione, `intelliSenseMode` non viene passata a CMake, ma viene utilizzata solo da Visual Studio.One setting, is no passed to CMake, but is used only by Visual Studio.

Utilizzare il file **CMakeLists.txt** in ogni cartella del progetto come in qualsiasi progetto CMake. È possibile specificare i file di origine, trovare librerie, impostare le opzioni del compilatore e del linker e specificare altre informazioni relative al sistema di compilazione.

Per passare argomenti a un eseguibile in fase di debug, è possibile utilizzare un altro file denominato **launch.vs.json**. In alcuni scenari, Visual Studio genera automaticamente questi file. È possibile modificarli manualmente o anche creare il file manualmente.

> [!NOTE]
> Per altri tipi di progetti Open Folder, vengono utilizzati due file JSON aggiuntivi: **CppProperties.json** e **tasks.vs.json**. Nessuno dei due è rilevante per i progetti CMake.

## <a name="open-an-existing-cache"></a>Aprire una cache esistente

Quando si apre un file di cache CMake esistente (*CMakeCache.txt*), Visual Studio non tenta di gestire la cache e compilare la struttura ad albero automaticamente. Gli strumenti personalizzati o preferiti hanno il controllo completo su come CMake configura il progetto. Per aprire una cache esistente in Visual Studio, scegliere **Apri > file > CMake**. Passare quindi a un file *CMakeCache.txt* esistente.

È possibile aggiungere una cache CMake esistente a un progetto aperto. Viene eseguita la stessa operazione per aggiungere una nuova configurazione. Per ulteriori informazioni, vedere il post di blog [sull'apertura di](https://devblogs.microsoft.com/cppblog/open-existing-cmake-caches-in-visual-studio/)una cache esistente in Visual Studio .

## <a name="building-cmake-projects"></a>Compilazione di progetti CMake

Per compilare un progetto di CMake, sono disponibili le opzioni seguenti:

1. Nella barra degli strumenti Generale, individuare l'elenco a discesa **Configurazioni.** Probabilmente mostra "x64-Debug" per impostazione predefinita. Selezionare la configurazione preferita e premere **F5**oppure fare clic sul pulsante **Esegui** (triangolo verde) sulla barra degli strumenti. Il progetto viene compilato automaticamente prima di tutto, come una soluzione Visual Studio.

1. Fare clic con il pulsante destro del mouse su *CMakeLists.txt* e selezionare **Compila** dal menu di scelta rapida. Se nella struttura delle cartelle sono presenti più destinazioni, è possibile scegliere di compilare tutte o solo una destinazione specifica.

1. Dal menu principale, selezionare **Compila > Compila tutto** (**F7** o **Ctrl .** Assicurarsi che sia già selezionata una destinazione di CMake nell'elenco a discesa **Elemento di avvio** nella barra degli strumenti **Generale**.

![Comando di menu Compilazione CMake](media/cmake-build-menu.png "Menu dei comandi di compilazione CMake")

Come prevedibile, i risultati della compilazione sono visualizzati nella **Finestra di output** e nell'**Elenco errori**.

![Errori di compilazione di CMake](media/cmake-build-errors.png "Errori di compilazione di CMake")

In una cartella con più destinazioni di compilazione, è possibile specificare la destinazione CMake da compilare: scegliere la voce **Build** dal menu **CMake** o il menu di scelta rapida *CMakeLists.txt* per specificare la destinazione. Se si immette **Ctrl , Maiusc e B** in un progetto CMake, viene compilato il documento attivo corrente.

## <a name="debugging-cmake-projects"></a>Debug dei progetti CMake

Per eseguire il debug di un progetto CMake, scegliere la configurazione preferita e premere **F5**oppure premere il pulsante **Esegui** nella barra degli strumenti. Se sul pulsante **Esegui** è indicato "Seleziona elemento di avvio", selezionare la freccia a discesa. Scegliere la destinazione che si desidera eseguire. (In un progetto CMake, l'opzione "documento corrente" è valida solo per i file con estensione .cpp.)

![Tasto CMake esegui](media/cmake-run-button.png "Tasto CMake esegui")

I comandi **Esegui** o **F5** compilano innanzitutto il progetto se sono state apportate modifiche rispetto alla compilazione precedente. Le modifiche apportate a *CMakeSettings.json* causano la rigenerazione della cache CMake.

È possibile personalizzare una sessione di debug di CMake impostando le proprietà nel file **launch.vs.json.** Per altre informazioni, vedere [Configure CMake debugging sessions](configure-cmake-debugging-sessions.md) (Configurare le sessioni di debug di CMake).

## <a name="just-my-code-for-cmake-projects"></a>Just My Code per progetti CMake

Quando si compila per Windows utilizzando il compilatore MSVC, i progetti CMake dispongono del supporto per il debug Just My Code. Per modificare l'impostazione Just My Code , passare a **Opzioni degli strumenti** > **Debug** > **Debugging** > **generale**.

## <a name="vcpkg-integration"></a>Integrazione Vcpkg

Se è stato installato [vcpkg](vcpkg.md), i progetti CMake aperti in Visual Studio integrano automaticamente il file toolchain vcpkg . Ciò significa che non è necessaria alcuna configurazione aggiuntiva per utilizzare vcpkg con i progetti CMake. Questo supporto funziona sia per le installazioni vcpkg locali che per le installazioni vcpkg su sistemi remoti di destinazione. Questo comportamento viene disabilitato automaticamente quando si specifica qualsiasi altra toolchain nella configurazione di CMake Settings.

## <a name="customize-configuration-feedback"></a>Personalizzare il feedback di configurazione

Per impostazione predefinita, la maggior parte dei messaggi di configurazione vengono soppressi a meno che non si sia verificato un errore. È possibile visualizzare tutti i messaggi attivando questa funzione in **Strumenti** > **Opzioni** > **CMake**.

   ![Configurazione delle opzioni di diagnostica di CMake](media/vs2019-cmake-configure-options.png "CEffettuare le opzioni di diagnostica")

## <a name="editing-cmakeliststxt-files"></a>Modifica dei file CMakeLists.txt

Per modificare un file *CMakeLists.txt,* fare clic con il pulsante destro del mouse sul file in **Esplora soluzioni** e scegliere **Apri**. Se si apportano modifiche al file, viene visualizzata una barra di stato gialla che informa che IntelliSense verrà aggiornato. Ti dà la possibilità di annullare l'operazione di aggiornamento. Per informazioni su *CMakeLists.txt*, vedere la documentazione di [CMake](https://cmake.org/documentation/).

   ![Modifica di file CMakeLists.txt](media/cmake-cmakelists.png "Modifica di file CMakeLists.txt")

Non appena si salva il file, viene eseguito nuovamente e automaticamente il passaggio di configurazione che visualizza le informazioni nella finestra **Output**. Gli errori e gli avvisi vengono visualizzati nella finestra **Elenco errori** o **Output**. Fare doppio clic su un errore **nell'Elenco errori** per passare alla riga che causa l'errore in *CMakeLists.txt*.

   ![Errori del file CMakeLists.txt](media/cmake-cmakelists-error.png "Errori del file CMakeLists.txt")

## <a name="cmake-configure-step"></a>Fase di configurazione di CMake

Quando si apportano modifiche significative ai file *CMakeSettings.json* o *CMakeLists.txt,* Visual Studio esegue automaticamente il passaggio di configurazione di CMake. Se il passaggio di configurazione termina senza errori, le informazioni raccolte sono disponibili in IntelliSense e nei servizi di linguaggio. Viene utilizzato anche nelle operazioni di compilazione e debug.

## <a name="troubleshooting-cmake-cache-errors"></a>Risoluzione degli errori di cache CMake

Per ulteriori informazioni sullo stato della cache di CMake per diagnosticare un problema, aprire il menu principale di **Project** o il menu di scelta rapida *di CMakeLists.txt* in **Esplora soluzioni** per eseguire uno di questi comandi:

- **Cache di visualizzazione** apre il file *CMakeCache.txt* dalla cartella radice di compilazione nell'editor. Tutte le modifiche apportate a *CMakeCache.txt* vengono eliminate se si pulisce la cache. Per rendere le modifiche che vengono mantenute dopo la pulizia della cache, vedere [Personalizzare le impostazioni di CMake.)](customize-cmake-settings.md)

- **Apri cartella cache** apre una finestra di Explorer corrispondente alla cartella radice di compilazione.

- **Pulisci cache** elimina la cartella radice di compilazione in modo che la fase successiva di configurazione di CMake inizi da una cache pulita.

- **Genera cache** forza l'esecuzione del passaggio di generazione anche se Visual Studio considera aggiornato l'ambiente.

La generazione automatica della cache può essere disabilitata nella finestra di dialogo **Strumenti > Opzioni > CMake > Generale.**

## <a name="run-cmake-from-the-command-line"></a>Eseguire CMake dalla riga di comando

Se CMake è stato installato dal programma di installazione di Visual Studio, è possibile eseguirlo dalla riga di comando seguendo questa procedura:

1. Eseguire il file vsdevcmd.bat appropriato (x86 o x64). Per ulteriori informazioni, vedere [Compilazione nella riga](building-on-the-command-line.md)di comando .

1. Passare alla cartella di output.

1. Eseguire CMake per compilare/configurare l'app.

::: moniker-end

::: moniker range="vs-2017"

Visual Studio 2017 dispone di un supporto avanzato per CMake, inclusi [i progetti CMake multipiattaforma.](../linux/cmake-linux-project.md) Il componente **Strumenti per CMake** di Visual Cè utilizza la funzionalità Apri **cartella** per consentire all'IDE di utilizzare direttamente i file di progetto CMake (ad esempio *CMakeLists.txt*) ai fini dell'esplorazione e dell'esplorazione di IntelliSense. Sono supportati i generatori Ninja e Visual Studio. Se si utilizza un generatore di Visual Studio, viene generato un file di progetto temporaneo che viene passato a msbuild.exe. Tuttavia, il progetto non viene mai caricato per IntelliSense o scopi di esplorazione. È inoltre possibile importare una cache CMake esistente.

## <a name="installation"></a>Installazione

L'installazione di Visual C, Tools **per CMake,** viene installata nell'ambito dello **sviluppo di desktop con** i carichi di lavoro di C e **Linux.**

![Componente CMake nel carico di lavoro Desktop C++](media/cmake-install.png)

Per altre informazioni, vedere [Installare il carico di lavoro Linux C++ in Visual Studio](../linux/download-install-and-setup-the-linux-development-workload.md).

## <a name="ide-integration"></a>Integrazione con l'IDE

Quando si sceglie **File > Apri > cartella** per aprire una cartella contenente un file *CMakeLists.txt,* si verificano le seguenti situazioni:

- Visual Studio aggiunge una voce di menu **CMake** al menu principale, con comandi per la visualizzazione e la modifica di script di CMake.

- **Esplora soluzioni** visualizza la struttura delle cartelle e i file.

- Visual Studio esegue CMake.exe e genera facoltativamente la cache CMake per la *configurazione* predefinita, ovvero Debug x86. La riga di comando CMake viene visualizzata nella **Finestra di output**, insieme all'uscita aggiuntiva da CMake.

- In background, Visual Studio inizia a indicizzare i file sorgente per abilitare IntelliSense, le informazioni di navigazione, il refactoring e così via. Mentre si lavora, Visual Studio esegue il monitoraggio delle modifiche nell'editor e anche sul disco per mantenere l'indice sincronizzato con le sorgenti.

È possibile aprire le cartelle che contengono un numero qualsiasi di progetti di CMake. Visual Studio rileva e configura tutti i file *CMakeLists.txt* "radice" nell'area di lavoro. Le operazioni di CMake (configure, build, debug), IntelliSense e l'esplorazione sono disponibili per tutti i progetti CMake nell'area di lavoro.

![Progetto CMake con più radici](media/cmake-multiple-roots.png)

È anche possibile visualizzare i progetti organizzati in modo logico in base alle destinazioni. Scegliere **Visualizzazione destinazioni CMake** dall'elenco a discesa sulla barra degli strumenti di **Esplora soluzioni**:

![Pulsante Visualizzazione destinazioni CMake](media/cmake-targets-view.png)

Visual Studio utilizza un file denominato *CMakeSettings.json* per archiviare le variabili di ambiente o le opzioni della riga di comando per Cmake.exe. *CMakeSettings.json* consente inoltre di definire e archiviare più configurazioni di compilazione CMake. È possibile passare comodamente tra di essi nell'IDE.

In caso contrario, utilizzare il *file CMakeLists.txt* come in qualsiasi progetto CMake per specificare i file di origine, trovare librerie, impostare le opzioni del compilatore e del linker e specificare altre informazioni relative al sistema di compilazione.

Se è necessario passare argomenti a un eseguibile in fase di debug, è possibile utilizzare un altro file denominato **launch.vs.json**. In alcuni scenari, Visual Studio genera automaticamente questi file. È possibile modificarli manualmente o anche creare il file manualmente.

> [!NOTE]
> Per altri tipi di progetti Open Folder, vengono utilizzati due file JSON aggiuntivi: **CppProperties.json** e **tasks.vs.json**. Nessuno dei due è rilevante per i progetti CMake.

## <a name="import-an-existing-cache"></a>Importare una cache esistente

Quando si importa un file *CMakeCache.txt* esistente, Visual Studio estrae automaticamente le variabili personalizzate e crea un file *CMakeSettings.json* prepopolato basato su di esse. La cache originale non viene modificata in alcun modo. Può comunque essere utilizzato dalla riga di comando o con qualsiasi strumento o IDE utilizzato per generarlo. Il nuovo file *CMakeSettings.json* viene inserito accanto alla radice *CMakeLists.txt*del progetto. Visual Studio genera una nuova cache basata sul file di impostazione. È possibile ignorare la generazione automatica della cache nella finestra di dialogo **Strumenti > Opzioni > CMake > Generale.**

Non tutti gli elementi della cache vengono importati.  Proprietà quali il generatore e la posizione dei compilatori vengono sostituite con proprietà predefinite che funzionano bene con l'IDE.

### <a name="to-import-an-existing-cache"></a>Per importare una cache esistente

1. Dal menu principale, scegliere **File > Apri > CMake**:

   ![Apri CMake](media/cmake-file-open.png "File, Apri, CMake")

   Questo comando visualizza l'Importazione guidata **CMake dalla cache.**

2. Passare al file *CMakeCache.txt* che si desidera importare e quindi fare clic su **OK**. Viene visualizzata la procedura guidata **Importa progetto CMake dalla cache**:

   ![Importare una cache CMake](media/cmake-import-wizard.png "Aprire la procedura guidata di importazione della cache di CMake")

   Al termine della procedura guidata, è possibile visualizzare il nuovo file *CMakeCache.txt* in **Esplora soluzioni** accanto al file *radice CMakeLists.txt* nel progetto.

## <a name="building-cmake-projects"></a>Compilazione di progetti CMake

Per compilare un progetto di CMake, sono disponibili le opzioni seguenti:

1. Nella barra degli strumenti Generale, individuare l'elenco a discesa **Configurazioni.** Probabilmente sta mostrando "Linux-Debug" o "x64-Debug" per impostazione predefinita. Selezionare la configurazione preferita e premere **F5**oppure fare clic sul pulsante **Esegui** (triangolo verde) sulla barra degli strumenti. Il progetto viene compilato automaticamente prima di tutto, come una soluzione Visual Studio.

1. Fare clic con il pulsante destro del mouse sul file *CMakeLists.txt* e scegliere **Compila** dal menu di scelta rapida. Se nella struttura delle cartelle sono presenti più destinazioni, è possibile scegliere di compilare tutte o solo una destinazione specifica.

1. Dal menu principale, selezionare **Compila > soluzione** (**F7** o **Ctrl .** Assicurarsi che sia già selezionata una destinazione di CMake nell'elenco a discesa **Elemento di avvio** nella barra degli strumenti **Generale**.

![Comando di menu Compilazione CMake](media/cmake-build-menu.png "Menu dei comandi di compilazione CMake")

È possibile personalizzare le configurazioni di compilazione, le variabili di ambiente, gli argomenti della riga di comando e altre impostazioni nel file *CMakeSettings.json.* Consente di apportare modifiche senza modificare il file *CMakeLists.txt.* Per altre informazioni, vedere [Customize CMake settings](customize-cmake-settings.md) (Personalizzare le impostazioni di CMake).

Come prevedibile, i risultati della compilazione sono visualizzati nella **Finestra di output** e nell'**Elenco errori**.

![Errori di compilazione di CMake](media/cmake-build-errors.png "Errori di compilazione di CMake")

In una cartella con più destinazioni di compilazione, è possibile specificare la destinazione CMake da compilare: scegliere la voce **Build** dal menu **CMake** o il menu di scelta rapida *CMakeLists.txt* per specificare la destinazione. Se si immette **Ctrl , Maiusc e B** in un progetto CMake, viene compilato il documento attivo corrente.

## <a name="debugging-cmake-projects"></a>Debug dei progetti CMake

Per eseguire il debug di un progetto CMake, scegliere la configurazione preferita e premere **F5**. In alternativa, premere il pulsante **Esegui** nella barra degli strumenti. Se il pulsante **Esegui** visualizza "Seleziona elemento di avvio", selezionare la freccia a discesa e scegliere la destinazione che si desidera eseguire. (In un progetto CMake, l'opzione "documento corrente" è valida solo per i file con estensione .cpp.)

![Tasto CMake esegui](media/cmake-run-button.png "Tasto CMake esegui")

I comandi **Esegui** o **F5** compilano innanzitutto il progetto se sono state apportate modifiche rispetto alla compilazione precedente.

È possibile personalizzare una sessione di debug di CMake impostando le proprietà nel file **launch.vs.json.** Per altre informazioni, vedere [Configure CMake debugging sessions](configure-cmake-debugging-sessions.md) (Configurare le sessioni di debug di CMake).

## <a name="editing-cmakeliststxt-files"></a>Modifica dei file CMakeLists.txt

Per modificare un file *CMakeLists.txt,* fare clic con il pulsante destro del mouse sul file in **Esplora soluzioni** e scegliere **Apri**. Se si apportano modifiche al file, viene visualizzata una barra di stato gialla che informa che IntelliSense verrà aggiornato. Ti dà la possibilità di annullare l'operazione di aggiornamento. Per informazioni su *CMakeLists.txt*, vedere la documentazione di [CMake](https://cmake.org/documentation/).

   ![Modifica di file CMakeLists.txt](media/cmake-cmakelists.png "Modifica di file CMakeLists.txt")

Non appena si salva il file, viene eseguito nuovamente e automaticamente il passaggio di configurazione che visualizza le informazioni nella finestra **Output**. Gli errori e gli avvisi vengono visualizzati nella finestra **Elenco errori** o **Output**. Fare doppio clic su un errore **nell'Elenco errori** per passare alla riga che causa l'errore in *CMakeLists.txt*.

   ![Errori del file CMakeLists.txt](media/cmake-cmakelists-error.png "Errori del file CMakeLists.txt")

## <a name="cmake-configure-step"></a>Fase di configurazione di CMake

Quando vengono apportate modifiche significative ai file *CMakeSettings.json* o *CMakeLists.txt,* Visual Studio esegue automaticamente il passaggio di configurazione di CMake. Se il passaggio di configurazione termina senza errori, le informazioni raccolte sono disponibili in IntelliSense e nei servizi di linguaggio. Viene utilizzato anche nelle operazioni di compilazione e debug.

Più progetti CMake possono utilizzare lo stesso nome di configurazione CMake (ad esempio, x86-Debug). Tutti vengono configurati e compilati (nella propria cartella radice di compilazione) quando tale configurazione è selezionata. È possibile eseguire il debug delle destinazioni da tutti i progetti CMake che partecipano alla configurazione CMake.

   ![Voce di menu Solo compilazione CMake](media/cmake-build-only.png "Voce di menu Solo compilazione CMake")

È possibile limitare le compilazioni e le sessioni di debug a un sottoinsieme dei progetti nell'area di lavoro. Creare una nuova configurazione con un nome univoco nel file *CMakeSettings.json.Create* a new configuration with a unique name in the CMakeSettings.json file. Quindi, applicare la configurazione solo a tali progetti. Quando tale configurazione è selezionata, IntelliSense e i comandi di compilazione e debug si applicano solo ai progetti specificati.

## <a name="troubleshooting-cmake-cache-errors"></a>Risoluzione degli errori di cache CMake

Per altre informazioni sullo stato della cache CMake per diagnosticare un problema, aprire il menu principale **CMake** o il menu contestuale *CMakeLists.txt* in **Esplora soluzioni** per eseguire uno di questi comandi:

- **Cache di visualizzazione** apre il file *CMakeCache.txt* dalla cartella radice di compilazione nell'editor. Tutte le modifiche apportate a *CMakeCache.txt* vengono eliminate se si pulisce la cache. Per rendere le modifiche che vengono mantenute dopo la pulizia della cache, vedere [Personalizzare le impostazioni di CMake.)](customize-cmake-settings.md)

- **Apri cartella cache** apre una finestra di Explorer corrispondente alla cartella radice di compilazione.

- **Pulisci cache** elimina la cartella radice di compilazione in modo che la fase successiva di configurazione di CMake inizi da una cache pulita.

- **Genera cache** forza l'esecuzione del passaggio di generazione anche se Visual Studio considera aggiornato l'ambiente.

La generazione automatica della cache può essere disabilitata nella finestra di dialogo **Strumenti > Opzioni > CMake > Generale.**

## <a name="single-file-compilation"></a>Compilazione di un singolo file

Per compilare un singolo file in un progetto CMake, fare clic con il pulsante destro del mouse sul file in **Esplora soluzioni**. Scegliere **Compila** dal menu a comparsa. È inoltre possibile compilare il file attualmente aperto nell'editor utilizzando il menu principale di **CMake:**

![Compilazione di un file singolo di CMake](media/cmake-single-file-compile.png)

## <a name="run-cmake-from-the-command-line"></a>Eseguire CMake dalla riga di comando

Se CMake è stato installato dal programma di installazione di Visual Studio, è possibile eseguirlo dalla riga di comando seguendo questa procedura:

1. Eseguire il file vsdevcmd.bat appropriato (x86 o x64). Per ulteriori informazioni, vedere [Compilazione dalla riga di comando](building-on-the-command-line.md) .

1. Passare alla cartella di output.

1. Eseguire CMake per compilare/configurare l'app.

::: moniker-end

::: moniker range="vs-2015"

In Visual Studio 2015, gli utenti di Visual Studio potevano usare un [generatore CMake](https://cmake.org/cmake/help/latest/manual/cmake-generators.7.html) per generare file di progetto MSBuild, che l'IDE usava successivamente per IntelliSense, navigazione e compilazione.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Esercitazione: Creare progetti multipiattaforma in Visual StudioTutorial: Create C's cross-platform projects in Visual Studio](get-started-linux-cmake.md)\
[Configurare un progetto Linux CMake](../linux/cmake-linux-project.md)\
[Connettersi al computer Linux remoto](../linux/connect-to-your-remote-linux-computer.md)\
[Personalizzare le impostazioni di compilazione di CMakeCustomize CMake build settings](customize-cmake-settings.md)\
[Riferimento allo schema CMakeSettings.json](cmakesettings-reference.md)\
[Configurare le sessioni di debug di CMakeConfigure CMake debugging sessions](configure-cmake-debugging-sessions.md)\
[Distribuire, eseguire ed eseguire il debug del progetto LinuxDeploy, run, and debug your Linux project](../linux/deploy-run-and-debug-your-linux-project.md)\
[Informazioni di riferimento sulle configurazioni predefinite CMake](cmake-predefined-configuration-reference.md)

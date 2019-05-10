---
title: Progetti CMake in Visual Studio
ms.date: 03/27/2019
helpviewer_keywords:
- CMake in Visual C++
ms.assetid: 444d50df-215e-4d31-933a-b41841f186f8
ms.openlocfilehash: ae686383d82453f291bbf81428748524160082f7
ms.sourcegitcommit: 18d3b1e9cdb4fc3a76f7a650c31994bdbd2bde64
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/29/2019
ms.locfileid: "64877177"
---
# <a name="cmake-projects-in-visual-studio"></a>Progetti CMake in Visual Studio

CMake è uno strumento open source multipiattaforma per la definizione di processi di compilazione che funzionano su più piattaforme. Questo articolo presuppone una certa familiarità con CMake. Per altre informazioni su questo strumento, vedere come [compilare, testare e creare pacchetti software con CMake](https://cmake.org/). 

> [!NOTE]
> CMake è diventano più integrato con Visual Studio alle versioni precedenti. Per visualizzare le informazioni corrette per la versione in che uso, assicurarsi che il selettore di versione in alto a sinistra della pagina sia impostato correttamente. 

::: moniker range="vs-2019"

Visual Studio 2019 introduce il **editor le impostazioni di CMake** e altri miglioramenti rispetto a Visual Studio 2017. Il componente **Strumenti Visual C++ per CMake** usa la funzionalità **Apri cartella** per consentire all'IDE di usare direttamente i file di progetto CMake, ad esempio CMakeLists.txt, per IntelliSense e l'esplorazione. Sono supportati i generatori Ninja e Visual Studio. Se si usa un generatore di Visual Studio, viene generato un file di progetto temporaneo, che viene passato a msbuild.exe, ma non viene mai caricato per IntelliSense o a scopo di navigazione. È anche possibile importare una cache di CMake esistente. 

## <a name="installation"></a>Installazione

**Strumenti Visual C++ per CMake** viene installato per impostazione predefinita come parte dei carichi di lavoro **Sviluppo di applicazioni desktop con C++** e **Sviluppo di applicazioni Linux con C++** . Visualizzare [progetti multipiattaforma CMake](../linux/cmake-linux-project.md) per altre informazioni.

![Componente CMake nel carico di lavoro Desktop C++](media/cmake-install.png)

Per altre informazioni, vedere [Installare il carico di lavoro Linux C++ in Visual Studio](../linux/download-install-and-setup-the-linux-development-workload.md).

## <a name="ide-integration"></a>Integrazione nell'IDE

Scegliendo **File | Apri | Cartella** per aprire una cartella contenente un file CMakeLists.txt, si verifica quanto segue:

- Visual Studio aggiunge **CMake** degli elementi per il **progetto** menu, con i comandi per la visualizzazione e modifica di script di CMake.

- **Esplora soluzioni** visualizza la struttura delle cartelle e i file.

- Visual Studio esegue CMake.exe e genera facoltativamente la cache CMake per la *configurazione* predefinita, ovvero Debug x86. La riga di comando CMake viene visualizzata nella **Finestra di output**, insieme all'uscita aggiuntiva da CMake.

- In background, Visual Studio inizia a indicizzare i file sorgente per abilitare IntelliSense, le informazioni di navigazione, il refactoring e così via. Mentre si lavora, Visual Studio esegue il monitoraggio delle modifiche nell'editor e anche sul disco per mantenere l'indice sincronizzato con le sorgenti.

È possibile aprire le cartelle che contengono un numero qualsiasi di progetti di CMake. Visual Studio rileva e configura tutti i file di CMakeLists.txt "radice" presenti nell'area di lavoro. Le operazioni di CMake (configurare, compilare, eseguire il debug) così come C++ IntelliSense e la navigazione sono disponibili per tutti i progetti CMake nell'area di lavoro.

![Progetto CMake con più radici](media/cmake-multiple-roots.png)

È anche possibile visualizzare i progetti organizzati in modo logico in base alle destinazioni. Scegliere **Visualizzazione destinazioni CMake** dall'elenco a discesa sulla barra degli strumenti di **Esplora soluzioni**:

![Pulsante Visualizzazione destinazioni CMake](media/cmake-targets-view.png)

Visual Studio Usa un file denominato **Cmakesettings** per archiviare le variabili di ambiente o le opzioni della riga di comando per Cmake.exe. **Cmakesettings** consente inoltre agli utenti è possibile definire e archiviare CMake più configurazioni della build e passare facilmente tra loro nell'IDE. In Visual Studio 2019, il **Editor di impostazioni di CMake** fornisce un modo pratico per modificare le impostazioni. Visualizzare [impostazioni di CMake personalizzare](customize-cmake-settings.md) per altre informazioni.

In caso contrario, usare il **cmakelists. txt** esattamente come si sarebbe in qualsiasi progetto CMake per specificare i file di origine, trovare le librerie, impostare le opzioni di compilatore e linker e specificare altro sistema di compilazione informazioni correlate.

Se è necessario passare argomenti a un file eseguibile in fase di debug, è possibile usare un altro file denominato **Launch**. In alcuni scenari Visual Studio genera automaticamente questi file che possono essere successivamente modificati. È anche possibile creare il file manualmente.

> [!NOTE]
> Per altri tipi di progetti Apri cartella, vengono utilizzati altri due file JSON: **Cppproperties** e **Tasks**. Nessuno dei due è rilevante per i progetti CMake.

## <a name="import-an-existing-cache"></a>Importare una cache esistente

Quando si importa un file CMakeCache.txt esistente, Visual Studio estrae automaticamente le variabili personalizzate e crea un file **CMakeSettings.json** prepopolato basato su tali variabili. La cache originale non viene modificata in alcun modo e può essere comunque usata dalla riga di comando o con qualsiasi strumento o IDE usato per generarla. Il nuovo **Cmakesettings** file viene posizionato insieme ad la radice del progetto file cmakelists. txt. Visual Studio genera una nuova cache basata sul file di impostazione. È possibile eseguire l'override della generazione automatica della cache nella finestra di dialogo **Strumenti | Opzioni | CMake | Generale**.

Non tutti gli elementi della cache vengono importati.  Proprietà quali il generatore e la posizione dei compilatori vengono sostituite con proprietà predefinite che funzionano bene con l'IDE.

### <a name="to-import-an-existing-cache"></a>Per importare una cache esistente

1. Dal menu principale scegliere **File | Apri | CMake**:

   ![Apri CMake](media/cmake-file-open.png "File, Apri, CMake")

   Verrà visualizzata la procedura guidata **Import CMake from Cache** (Importa CMake dalla Cache).

2. Passare al file CMakeCache.txt che si desidera importare, quindi fare clic su **OK**. Viene visualizzata la procedura guidata **Importa progetto CMake dalla cache**:

   ![Importare una cache di CMake](media/cmake-import-wizard.png "Aprire la procedura guidata di importazione della cache di CMake")

   Al termine della procedura guidata, è visibile il nuovo file CMakeCache.txt **Esplora soluzioni** accanto al file radice CMakeLists.txt del progetto.

## <a name="building-cmake-projects"></a>Compilazione di progetti CMake

Per compilare un progetto di CMake, sono disponibili le opzioni seguenti:

1. Sulla barra degli strumenti generali, trovare il **configurazioni** elenco a discesa e viene visualizzato probabilmente "Linux-Debug" o "x64-Debug" per impostazione predefinita. Selezionare la configurazione desiderata e premere **F5**, oppure fare clic sui **eseguire** pulsante (triangolo verde) sulla barra degli strumenti. Il progetto viene compilato automaticamente prima di tutto, come una soluzione Visual Studio.

1. Fare clic con il pulsante destro del mouse su CMakeLists.txt e scegliere **Build**  dal menu di scelta rapida. Se nella struttura delle cartelle sono presenti più destinazioni, è possibile scegliere di compilare tutte o solo una destinazione specifica.

1. Nel menu principale, selezionare **Genera | Genera soluzione** (**F7** o **Ctrl+Shift+B**). Assicurarsi che sia già selezionata una destinazione di CMake nell'elenco a discesa **Elemento di avvio** nella barra degli strumenti **Generale**.

![Comando del menu di compilazione CMake](media/cmake-build-menu.png "Comando del menu di compilazione CMake")

È possibile personalizzare le configurazioni della build, le variabili di ambiente, gli argomenti della riga di comando e altre impostazioni senza modificare il file cmakelists. txt tramite il **Editor di impostazioni di CMake**. Per altre informazioni, vedere [Customize CMake settings](customize-cmake-settings.md) (Personalizzare le impostazioni di CMake).

Come prevedibile, i risultati della compilazione sono visualizzati nella **Finestra di output** e nell'**Elenco errori**.

![Errori di compilazione CMake](media/cmake-build-errors.png "CMake, errori di compilazione")

In una cartella con più destinazioni di compilazione, è possibile scegliere l'elemento **Genera** nel menu **CMake** o nel menu di scelta rapida **CMakeLists.txt** per specificare quale destinazione di CMake compilare. Premendo **CTRL+MAIUSC+B** in un progetto di CMake verrà compilato il documento attivo corrente.

## <a name="debugging-cmake-projects"></a>Debug dei progetti CMake

Per eseguire il debug di un progetto di CMake, scegliere la configurazione desiderata e premere **F5**, oppure premere il pulsante **Esegui** nella barra degli strumenti. Se il pulsante **Esegui** visualizza "Seleziona elemento di avvio", selezionare la freccia a discesa e scegliere la destinazione che si desidera eseguire. (In un progetto CMake, l'opzione "documento corrente" è valida solo per i file con estensione .cpp.)

![Pulsante di esecuzione di CMake](media/cmake-run-button.png "Pulsante di esecuzione di CMake")

I comandi **Esegui** o **F5** compilano innanzitutto il progetto se sono state apportate modifiche rispetto alla compilazione precedente.

È possibile personalizzare un CMake sessione di debug impostando le proprietà nel **Launch** file. Per altre informazioni, vedere [Configure CMake debugging sessions](configure-cmake-debugging-sessions.md) (Configurare le sessioni di debug di CMake).

## <a name="vcpkg-integration"></a>Vcpkg Integration

Se è installato [vcpkg](vcpkg.md), progetti CMake aperti in Visual Studio si integrano automaticamente il file di toolchain di vcpkg. Ciò significa che è richiesta alcuna configurazione aggiuntiva per usare vcpkg con i progetti CMake. Questo supporto funziona sia per le installazioni locali vcpkg le installazioni di vcpkg nei computer remoti di destinazione. Questo comportamento viene disabilitato automaticamente quando si specifica qualsiasi altre toolchain nella configurazione di impostazioni di CMake.

## <a name="just-my-code-for-cmake-projects"></a>Just My Code per i progetti CMake

Quando si compila per Windows utilizzando il compilatore MSVC, i progetti CMake ora supportano solo il debug del codice nel compilatore e linker se l'opzione è abilitata in Visual Studio. Per modificare l'impostazione, passare a **degli strumenti** > **opzioni** > **debug** > **generale**.

## <a name="customize-configuration-feedback"></a>Personalizzare i commenti e suggerimenti di configurazione

Per impostazione predefinita, la maggior parte dei messaggi di configurazione vengono soppressi a meno che non si è verificato un errore. È possibile visualizzare tutti i messaggi abilitando questa funzionalità nella **degli strumenti** > **opzioni** > **CMake**.

   ![Configurazione delle opzioni di diagnostica di CMake](media/vs2019-cmake-configure-options.png "opzioni di diagnostica di CMake")

## <a name="editing-cmakeliststxt-files"></a>Modifica dei file CMakeLists.txt

Per modificare un file CMakeLists.txt, fare clic con il pulsante destro del mouse sul file in **Esplora soluzioni** e scegliere **Apri**. Se si apportano modifiche al file, viene visualizzata una barra di stato gialla che comunica che IntelliSense verrà aggiornata e offre la possibilità di annullare l'operazione di aggiornamento. Per informazioni su CMakeLists.txt, vedere la documentazione di [CMake](https://cmake.org/documentation/).

   ![Modifica del file CMakeLists.txt](media/cmake-cmakelists.png "CMakeLists.txt, modifica del file")

Non appena si salva il file, viene eseguito nuovamente e automaticamente il passaggio di configurazione che visualizza le informazioni nella finestra **Output**. Gli errori e gli avvisi vengono visualizzati nella finestra **Elenco errori** o **Output**. Fare doppio clic su un errore in **Elenco errori** per passare alla riga interessata in CMakeLists.txt.

   ![Errori del file CMakeLists.txt](media/cmake-cmakelists-error.png "CMakeLists.txt, errori del file")


## <a name="cmake-configure-step"></a>Fase di configurazione di CMake

Quando vengono apportate modifiche significative per la **Cmakesettings** o ai file cmakelists. txt, Visual Studio automaticamente consente di rieseguire il CMake il passaggio di configurazione. Se la fase di configurazione termina senza errori, le informazioni raccolte sono disponibili in C++ IntelliSense e nei servizi linguistici, nonché nelle operazioni di compilazione e debug.

Quando più progetti CMake usano lo stesso nome di configurazione CMake (ad esempio, x86-Debug), vengono tutti configurati e compilati (nella loro cartella radice di compilazione) quando viene selezionata tale configurazione. È possibile eseguire il debug delle destinazioni da tutti i progetti CMake che partecipano alla configurazione CMake.

   ![Voce di menu CMake Build Only (Solo generazione CMake)](media/cmake-build-only.png "CMake Build Only (Solo generazione CMake), voce di menu")

Per limitare le compilazioni e il debug di sessioni da un sottoinsieme di progetti nell'area di lavoro, creare una nuova configurazione con un nome univoco nel **Cmakesettings** file e li applicherà alla solo tali progetti. Quando si seleziona questa configurazione, i comandi IntelliSense e build e debug sono abilitati solo per i progetti specificati.

## <a name="troubleshooting-cmake-cache-errors"></a>Risoluzione degli errori di cache CMake

Per altre informazioni sullo stato della cache CMake per diagnosticare un problema, aprire il menu principale **CMake** o il menu contestuale **CMakeLists.txt** in **Esplora soluzioni** per eseguire uno di questi comandi:

- **Visualizza cache** apre il file CMakeCache.txt dalla cartella radice di compilazione nell'editor. (Tutte le modifiche apportate qui a CMakeCache.txt vengono cancellate se si pulisce la cache. Per apportare modifiche che rendono persistenti dopo che la cache viene eliminata, vedere [impostazioni di CMake personalizzare](customize-cmake-settings.md).)

- **Apri cartella cache** apre una finestra di Explorer corrispondente alla cartella radice di compilazione.

- **Pulisci cache** elimina la cartella radice di compilazione in modo che la fase successiva di configurazione di CMake inizi da una cache pulita.

- **Genera cache** forza l'esecuzione della fase di generazione anche se Visual Studio considera l'ambiente aggiornato.

È possibile disabilitare la generazione automatica della cache nella finestra di dialogo **Strumenti | Opzioni | CMake | Generale**.

## <a name="single-file-compilation"></a>Compilazione di un file singolo

Per compilare un singolo file in un progetto CMake, fare clic con il pulsante destro del mouse sul file in **Esplora soluzioni** e scegliere **Compila**. È anche possibile compilare il file aperto in quel momento nell'editor tramite il menu principale di CMake:

![Compilazione di un file singolo di CMake](media/cmake-single-file-compile.png)

## <a name="run-cmake-from-the-command-line"></a>Eseguire CMake dalla riga di comando

Se CMake è stato installato dal programma di installazione di Visual Studio, è possibile eseguirlo dalla riga di comando seguendo questa procedura:

1. Eseguire il file vsdevcmd.bat appropriato (x86 o x64). Per altre informazioni, vedere [Compilazione dalla riga di comando](building-on-the-command-line.md).

1. Passare alla cartella di output.

1. Eseguire CMake per compilare/configurare l'app.

::: moniker-end

::: moniker range="vs-2017"

Visual Studio 2017 offre un supporto dettagliato per CMake, inclusi [progetti CMake multipiattaforma](../linux/cmake-linux-project.md). Il componente **Strumenti Visual C++ per CMake** usa la funzionalità **Apri cartella** per consentire all'IDE di usare direttamente i file di progetto CMake, ad esempio CMakeLists.txt, per IntelliSense e l'esplorazione. Sono supportati i generatori Ninja e Visual Studio. Se si usa un generatore di Visual Studio, viene generato un file di progetto temporaneo, che viene passato a msbuild.exe, ma non viene mai caricato per IntelliSense o a scopo di navigazione. È anche possibile importare una cache di CMake esistente. 

## <a name="installation"></a>Installazione

**Strumenti Visual C++ per CMake** viene installato per impostazione predefinita come parte dei carichi di lavoro **Sviluppo di applicazioni desktop con C++** e **Sviluppo di applicazioni Linux con C++** .

![Componente CMake nel carico di lavoro Desktop C++](media/cmake-install.png)

Per altre informazioni, vedere [Installare il carico di lavoro Linux C++ in Visual Studio](../linux/download-install-and-setup-the-linux-development-workload.md).

## <a name="ide-integration"></a>Integrazione nell'IDE

Scegliendo **File | Apri | Cartella** per aprire una cartella contenente un file CMakeLists.txt, si verifica quanto segue:

- Visual Studio aggiunge una voce di menu **CMake** al menu principale, con comandi per la visualizzazione e la modifica di script di CMake.

- **Esplora soluzioni** visualizza la struttura delle cartelle e i file.

- Visual Studio esegue CMake.exe e genera facoltativamente la cache CMake per la *configurazione* predefinita, ovvero Debug x86. La riga di comando CMake viene visualizzata nella **Finestra di output**, insieme all'uscita aggiuntiva da CMake.

- In background, Visual Studio inizia a indicizzare i file sorgente per abilitare IntelliSense, le informazioni di navigazione, il refactoring e così via. Mentre si lavora, Visual Studio esegue il monitoraggio delle modifiche nell'editor e anche sul disco per mantenere l'indice sincronizzato con le sorgenti.

È possibile aprire le cartelle che contengono un numero qualsiasi di progetti di CMake. Visual Studio rileva e configura tutti i file di CMakeLists.txt "radice" presenti nell'area di lavoro. Le operazioni di CMake (configurare, compilare, eseguire il debug) così come C++ IntelliSense e la navigazione sono disponibili per tutti i progetti CMake nell'area di lavoro.

![Progetto CMake con più radici](media/cmake-multiple-roots.png)

È anche possibile visualizzare i progetti organizzati in modo logico in base alle destinazioni. Scegliere **Visualizzazione destinazioni CMake** dall'elenco a discesa sulla barra degli strumenti di **Esplora soluzioni**:

![Pulsante Visualizzazione destinazioni CMake](media/cmake-targets-view.png)

Visual Studio Usa un file denominato **Cmakesettings** per archiviare le variabili di ambiente o le opzioni della riga di comando per Cmake.exe. **Cmakesettings** consente inoltre agli utenti è possibile definire e archiviare CMake più configurazioni della build e passare facilmente tra loro nell'IDE. 

In caso contrario, usare il **cmakelists. txt** esattamente come si sarebbe in qualsiasi progetto CMake per specificare i file di origine, trovare le librerie, impostare le opzioni di compilatore e linker e specificare altro sistema di compilazione informazioni correlate.

Se è necessario passare argomenti a un file eseguibile in fase di debug, è possibile usare un altro file denominato **Launch**. In alcuni scenari Visual Studio genera automaticamente questi file che possono essere successivamente modificati. È anche possibile creare il file manualmente.

> [!NOTE]
> Per altri tipi di progetti Apri cartella, vengono utilizzati altri due file JSON: **Cppproperties** e **Tasks**. Nessuno dei due è rilevante per i progetti CMake.

## <a name="import-an-existing-cache"></a>Importare una cache esistente

Quando si importa un file CMakeCache.txt esistente, Visual Studio estrae automaticamente le variabili personalizzate e crea un file **CMakeSettings.json** prepopolato basato su tali variabili. La cache originale non viene modificata in alcun modo e può essere comunque usata dalla riga di comando o con qualsiasi strumento o IDE usato per generarla. Il nuovo **Cmakesettings** file viene posizionato insieme ad la radice del progetto file cmakelists. txt. Visual Studio genera una nuova cache basata sul file di impostazione. È possibile eseguire l'override della generazione automatica della cache nella finestra di dialogo **Strumenti | Opzioni | CMake | Generale**.

Non tutti gli elementi della cache vengono importati.  Proprietà quali il generatore e la posizione dei compilatori vengono sostituite con proprietà predefinite che funzionano bene con l'IDE.

### <a name="to-import-an-existing-cache"></a>Per importare una cache esistente

1. Dal menu principale scegliere **File | Apri | CMake**:

   ![Apri CMake](media/cmake-file-open.png "File, Apri, CMake")

   Verrà visualizzata la procedura guidata **Import CMake from Cache** (Importa CMake dalla Cache).

2. Passare al file CMakeCache.txt che si desidera importare, quindi fare clic su **OK**. Viene visualizzata la procedura guidata **Importa progetto CMake dalla cache**:

   ![Importare una cache di CMake](media/cmake-import-wizard.png "Aprire la procedura guidata di importazione della cache di CMake")

   Al termine della procedura guidata, è visibile il nuovo file CMakeCache.txt **Esplora soluzioni** accanto al file radice CMakeLists.txt del progetto.

## <a name="building-cmake-projects"></a>Compilazione di progetti CMake

Per compilare un progetto di CMake, sono disponibili le opzioni seguenti:

1. Sulla barra degli strumenti generali, trovare il **configurazioni** elenco a discesa e viene visualizzato probabilmente "Linux-Debug" o "x64-Debug" per impostazione predefinita. Selezionare la configurazione desiderata e premere **F5**, oppure fare clic sui **eseguire** pulsante (triangolo verde) sulla barra degli strumenti. Il progetto viene compilato automaticamente prima di tutto, come una soluzione Visual Studio.

1. Fare clic con il pulsante destro del mouse su CMakeLists.txt e scegliere **Build**  dal menu di scelta rapida. Se nella struttura delle cartelle sono presenti più destinazioni, è possibile scegliere di compilare tutte o solo una destinazione specifica.

1. Nel menu principale, selezionare **Genera | Genera soluzione** (**F7** o **Ctrl+Shift+B**). Assicurarsi che sia già selezionata una destinazione di CMake nell'elenco a discesa **Elemento di avvio** nella barra degli strumenti **Generale**.

![Comando del menu di compilazione CMake](media/cmake-build-menu.png "Comando del menu di compilazione CMake")

È possibile personalizzare le configurazioni della build, le variabili di ambiente, gli argomenti della riga di comando e altre impostazioni senza modificare il file cmakelists. txt tramite il **Cmakesettings** file. Per altre informazioni, vedere [Customize CMake settings](customize-cmake-settings.md) (Personalizzare le impostazioni di CMake).

Come prevedibile, i risultati della compilazione sono visualizzati nella **Finestra di output** e nell'**Elenco errori**.

![Errori di compilazione CMake](media/cmake-build-errors.png "CMake, errori di compilazione")

In una cartella con più destinazioni di compilazione, è possibile scegliere l'elemento **Genera** nel menu **CMake** o nel menu di scelta rapida **CMakeLists.txt** per specificare quale destinazione di CMake compilare. Premendo **CTRL+MAIUSC+B** in un progetto di CMake verrà compilato il documento attivo corrente.

## <a name="debugging-cmake-projects"></a>Debug dei progetti CMake

Per eseguire il debug di un progetto di CMake, scegliere la configurazione desiderata e premere **F5**, oppure premere il pulsante **Esegui** nella barra degli strumenti. Se il pulsante **Esegui** visualizza "Seleziona elemento di avvio", selezionare la freccia a discesa e scegliere la destinazione che si desidera eseguire. (In un progetto CMake, l'opzione "documento corrente" è valida solo per i file con estensione .cpp.)

![Pulsante di esecuzione di CMake](media/cmake-run-button.png "Pulsante di esecuzione di CMake")

I comandi **Esegui** o **F5** compilano innanzitutto il progetto se sono state apportate modifiche rispetto alla compilazione precedente.

È possibile personalizzare un CMake sessione di debug impostando le proprietà nel **Launch** file. Per altre informazioni, vedere [Configure CMake debugging sessions](configure-cmake-debugging-sessions.md) (Configurare le sessioni di debug di CMake).


## <a name="editing-cmakeliststxt-files"></a>Modifica dei file CMakeLists.txt

Per modificare un file CMakeLists.txt, fare clic con il pulsante destro del mouse sul file in **Esplora soluzioni** e scegliere **Apri**. Se si apportano modifiche al file, viene visualizzata una barra di stato gialla che comunica che IntelliSense verrà aggiornata e offre la possibilità di annullare l'operazione di aggiornamento. Per informazioni su CMakeLists.txt, vedere la documentazione di [CMake](https://cmake.org/documentation/).

   ![Modifica del file CMakeLists.txt](media/cmake-cmakelists.png "CMakeLists.txt, modifica del file")

Non appena si salva il file, viene eseguito nuovamente e automaticamente il passaggio di configurazione che visualizza le informazioni nella finestra **Output**. Gli errori e gli avvisi vengono visualizzati nella finestra **Elenco errori** o **Output**. Fare doppio clic su un errore in **Elenco errori** per passare alla riga interessata in CMakeLists.txt.

   ![Errori del file CMakeLists.txt](media/cmake-cmakelists-error.png "CMakeLists.txt, errori del file")


## <a name="cmake-configure-step"></a>Fase di configurazione di CMake

Quando vengono apportate modifiche significative per la **Cmakesettings** o ai file cmakelists. txt, Visual Studio automaticamente consente di rieseguire il CMake il passaggio di configurazione. Se la fase di configurazione termina senza errori, le informazioni raccolte sono disponibili in C++ IntelliSense e nei servizi linguistici, nonché nelle operazioni di compilazione e debug.

Quando più progetti CMake usano lo stesso nome di configurazione CMake (ad esempio, x86-Debug), vengono tutti configurati e compilati (nella loro cartella radice di compilazione) quando viene selezionata tale configurazione. È possibile eseguire il debug delle destinazioni da tutti i progetti CMake che partecipano alla configurazione CMake.

   ![Voce di menu CMake Build Only (Solo generazione CMake)](media/cmake-build-only.png "CMake Build Only (Solo generazione CMake), voce di menu")

Per limitare le compilazioni e il debug di sessioni da un sottoinsieme di progetti nell'area di lavoro, creare una nuova configurazione con un nome univoco nel **Cmakesettings** file e li applicherà alla solo tali progetti. Quando si seleziona questa configurazione, i comandi IntelliSense e build e debug sono abilitati solo per i progetti specificati.

## <a name="troubleshooting-cmake-cache-errors"></a>Risoluzione degli errori di cache CMake

Per altre informazioni sullo stato della cache CMake per diagnosticare un problema, aprire il menu principale **CMake** o il menu contestuale **CMakeLists.txt** in **Esplora soluzioni** per eseguire uno di questi comandi:

- **Visualizza cache** apre il file CMakeCache.txt dalla cartella radice di compilazione nell'editor. (Tutte le modifiche apportate qui a CMakeCache.txt vengono cancellate se si pulisce la cache. Per apportare modifiche che rendono persistenti dopo che la cache viene eliminata, vedere [impostazioni di CMake personalizzare](customize-cmake-settings.md).)

- **Apri cartella cache** apre una finestra di Explorer corrispondente alla cartella radice di compilazione.

- **Pulisci cache** elimina la cartella radice di compilazione in modo che la fase successiva di configurazione di CMake inizi da una cache pulita.

- **Genera cache** forza l'esecuzione della fase di generazione anche se Visual Studio considera l'ambiente aggiornato.

È possibile disabilitare la generazione automatica della cache nella finestra di dialogo **Strumenti | Opzioni | CMake | Generale**.

## <a name="single-file-compilation"></a>Compilazione di un file singolo

Per compilare un singolo file in un progetto CMake, fare clic con il pulsante destro del mouse sul file in **Esplora soluzioni** e scegliere **Compila**. È anche possibile compilare il file aperto in quel momento nell'editor tramite il menu principale di CMake:

![Compilazione di un file singolo di CMake](media/cmake-single-file-compile.png)

## <a name="run-cmake-from-the-command-line"></a>Eseguire CMake dalla riga di comando

Se CMake è stato installato dal programma di installazione di Visual Studio, è possibile eseguirlo dalla riga di comando seguendo questa procedura:

1. Eseguire il file vsdevcmd.bat appropriato (x86 o x64). Per altre informazioni, vedere [Compilazione dalla riga di comando](building-on-the-command-line.md).

1. Passare alla cartella di output.

1. Eseguire CMake per compilare/configurare l'app.

::: moniker-end

::: moniker range="vs-2015"

In Visual Studio 2015, gli utenti di Visual Studio potevano usare un [generatore CMake](https://cmake.org/cmake/help/latest/manual/cmake-generators.7.html) per generare file di progetto MSBuild, che l'IDE usava successivamente per IntelliSense, navigazione e compilazione.

::: moniker-end


## <a name="see-also"></a>Vedere anche

[Esercitazione: Creare progetti multipiattaforma C++ in Visual Studio](get-started-linux-cmake.md)<br/>
[Configurare un progetto CMake per Linux](../linux/cmake-linux-project.md)<br/>
[Connettersi al computer Linux remoto](../linux/connect-to-your-remote-linux-computer.md)<br/>
[Personalizzare le impostazioni di compilazione di CMake](customize-cmake-settings.md)<br/>
[Informazioni di riferimento su CMakeSettings.json](cmakesettings-reference.md)<br/>
[Configurare le sessioni di debug di CMake](configure-cmake-debugging-sessions.md)<br/>
[Distribuire, eseguire e sottoporre a debug il progetto Linux](../linux/deploy-run-and-debug-your-linux-project.md)<br/>
[Informazioni di riferimento sulle configurazioni predefinite CMake](cmake-predefined-configuration-reference.md)<br/>

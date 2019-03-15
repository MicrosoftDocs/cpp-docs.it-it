---
title: Progetti CMake in Visual Studio
ms.date: 03/05/2019
helpviewer_keywords:
- CMake in Visual C++
ms.assetid: 444d50df-215e-4d31-933a-b41841f186f8
ms.openlocfilehash: 67bf20248933b28e9c7c0d87c598c0449d6bed0b
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57827189"
---
# <a name="cmake-projects-in-visual-studio"></a>Progetti CMake in Visual Studio

CMake è uno strumento open source multipiattaforma per la definizione di processi di compilazione che funzionano su più piattaforme. Questo articolo presuppone una certa familiarità con CMake. Per altre informazioni su questo strumento, vedere come [compilare, testare e creare pacchetti software con CMake](https://cmake.org/).

In Visual Studio 2015, gli utenti di Visual Studio potevano usare un [generatore CMake](https://cmake.org/cmake/help/latest/manual/cmake-generators.7.html) per generare file di progetto MSBuild, che l'IDE usava successivamente per IntelliSense, navigazione e compilazione.

Visual Studio 2017 introduce il supporto avanzato per CMake, inclusi i [progetti CMake multipiattaforma](../linux/cmake-linux-project.md). Il componente **Strumenti Visual C++ per CMake** usa la funzionalità **Apri cartella** per consentire all'IDE di usare direttamente i file di progetto CMake, ad esempio CMakeLists.txt, per IntelliSense e l'esplorazione. Sono supportati i generatori Ninja e Visual Studio. Se si usa un generatore di Visual Studio, viene generato un file di progetto temporaneo, che viene passato a msbuild.exe, ma non viene mai caricato per IntelliSense o a scopo di navigazione. È possibile importare una cache CMake esistente. Visual Studio estrae automaticamente le variabili personalizzate e crea un file `CMakeSettings.json` prepopolato. 

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

Visual Studio usa un file denominato `CMakeSettings.json` per archiviare le variabili di ambiente o le opzioni della riga di comando per Cmake.exe. `CMakeSettings.json` consente anche di definire e archiviare più configurazioni della build CMake e di passare comodamente da una all'altra nell'IDE. 

Oppure è possibile usare `CMakeLists.txt` come si fa normalmente in qualsiasi progetto CMake per specificare i file di origine, trovare le librerie, impostare le opzioni del compilatore e del linker e specificare altre informazioni relative al sistema di compilazione.

Se è necessario passare argomenti a un file eseguibile in fase di debug, è possibile usare un altro file denominato `launch.vs.json`. In alcuni scenari Visual Studio genera automaticamente questi file che possono essere successivamente modificati. È anche possibile creare il file manualmente.

> [!NOTE]
> Per altri tipi di progetti Apri cartella vengono usati due file JSON aggiuntivi: `CppProperties.json` e `tasks.vs.json`. Nessuno dei due è rilevante per i progetti CMake.

## <a name="import-an-existing-cache"></a>Importare una cache esistente

Quando si importa un file CMakeCache.txt esistente, Visual Studio estrae automaticamente le variabili personalizzate e crea un file [ `CMakeSettings.json`](#cmake_settings) prepopolato basato su queste variabili. La cache originale non viene modificata in alcun modo e può essere comunque usata dalla riga di comando o con qualsiasi strumento o IDE usato per generarla. Il nuovo file `CMakeSettings.json` viene posizionato insieme al file CMakeLists.txt radice del progetto. Visual Studio genera una nuova cache basata sul file di impostazione. È possibile eseguire l'override della generazione automatica della cache nella finestra di dialogo **Strumenti | Opzioni | CMake | Generale**.

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

1. Selezionare la destinazione nell'elenco a discesa **Debug** e premere **F5**, oppure fare clic sul pulsante **Run** (triangolo verde). Il progetto viene compilato automaticamente prima di tutto, come una soluzione Visual Studio.

1. Fare clic con il pulsante destro del mouse su CMakeLists.txt e scegliere **Build**  dal menu di scelta rapida. Se nella struttura delle cartelle sono presenti più destinazioni, è possibile scegliere di compilare tutte o solo una destinazione specifica.

1. Nel menu principale, selezionare **Genera | Genera soluzione** (**F7** o **Ctrl+Shift+B**). Assicurarsi che sia già selezionata una destinazione di CMake nell'elenco a discesa **Elemento di avvio** nella barra degli strumenti **Generale**.

![Comando del menu di compilazione CMake](media/cmake-build-menu.png "Comando del menu di compilazione CMake")

È possibile personalizzare configurazioni della build, variabili di ambiente, argomenti della riga di comando e altre impostazioni senza modificare il file CMakeLists.txt usando il file `CMakeSettings.json`. Per altre informazioni, vedere [Customize CMake settings](customize-cmake-settings.md) (Personalizzare le impostazioni di CMake).

Come prevedibile, i risultati della compilazione sono visualizzati nella **Finestra di output** e nell'**Elenco errori**.

![Errori di compilazione CMake](media/cmake-build-errors.png "CMake, errori di compilazione")

In una cartella con più destinazioni di compilazione, è possibile scegliere l'elemento **Genera** nel menu **CMake** o nel menu di scelta rapida **CMakeLists.txt** per specificare quale destinazione di CMake compilare. Premendo **CTRL+MAIUSC+B** in un progetto di CMake verrà compilato il documento attivo corrente.

## <a name="debugging-cmake-projects"></a>Debug dei progetti CMake

Per eseguire il debug di un progetto di CMake, scegliere la configurazione desiderata e premere **F5**, oppure premere il pulsante **Esegui** nella barra degli strumenti. Se il pulsante **Esegui** visualizza "Seleziona elemento di avvio", selezionare la freccia a discesa e scegliere la destinazione che si desidera eseguire. (In un progetto CMake, l'opzione "documento corrente" è valida solo per i file con estensione .cpp.)

![Pulsante di esecuzione di CMake](media/cmake-run-button.png "Pulsante di esecuzione di CMake")

I comandi **Esegui** o **F5** compilano innanzitutto il progetto se sono state apportate modifiche rispetto alla compilazione precedente.

È possibile personalizzare una sessione di debug di CMake impostando le proprietà nel file `launch.vs.json`. Per altre informazioni, vedere [Configure CMake debugging sessions](configure-cmake-debugging-sessions.md) (Configurare le sessioni di debug di CMake).


## <a name="editing-cmakeliststxt-files"></a>Modifica dei file CMakeLists.txt

Per modificare un file CMakeLists.txt, fare clic con il pulsante destro del mouse sul file in **Esplora soluzioni** e scegliere **Apri**. Se si apportano modifiche al file, viene visualizzata una barra di stato gialla che comunica che IntelliSense verrà aggiornata e offre la possibilità di annullare l'operazione di aggiornamento. Per informazioni su CMakeLists.txt, vedere la documentazione di [CMake](https://cmake.org/documentation/).

   ![Modifica del file CMakeLists.txt](media/cmake-cmakelists.png "CMakeLists.txt, modifica del file")

Non appena si salva il file, viene eseguito nuovamente e automaticamente il passaggio di configurazione che visualizza le informazioni nella finestra **Output**. Gli errori e gli avvisi vengono visualizzati nella finestra **Elenco errori** o **Output**. Fare doppio clic su un errore in **Elenco errori** per passare alla riga interessata in CMakeLists.txt.

   ![Errori del file CMakeLists.txt](media/cmake-cmakelists-error.png "CMakeLists.txt, errori del file")


## <a name="cmake-configure-step"></a>Fase di configurazione di CMake

Quando vengono apportate modifiche significative ai file `CMakeSettings.json` o CMakeLists.txt, Visual Studio riesegue automaticamente il passaggio di configurazione di CMake. Se la fase di configurazione termina senza errori, le informazioni raccolte sono disponibili in C++ IntelliSense e nei servizi linguistici, nonché nelle operazioni di compilazione e debug.

Quando più progetti CMake usano lo stesso nome di configurazione CMake (ad esempio, x86-Debug), vengono tutti configurati e compilati (nella loro cartella radice di compilazione) quando viene selezionata tale configurazione. È possibile eseguire il debug delle destinazioni da tutti i progetti CMake che partecipano alla configurazione CMake.

   ![Voce di menu CMake Build Only (Solo generazione CMake)](media/cmake-build-only.png "CMake Build Only (Solo generazione CMake), voce di menu")

Per limitare le compilazioni e le sessioni di debug a un subset dei progetti presenti nell'area di lavoro, creare una nuova configurazione con un nome univoco nel file `CMakeSettings.json` e applicarla solo a questi progetti. Quando si seleziona questa configurazione, i comandi IntelliSense e build e debug sono abilitati solo per i progetti specificati.

## <a name="troubleshooting-cmake-cache-errors"></a>Risoluzione degli errori di cache CMake

Per altre informazioni sullo stato della cache CMake per diagnosticare un problema, aprire il menu principale **CMake** o il menu contestuale **CMakeLists.txt** in **Esplora soluzioni** per eseguire uno di questi comandi:

- **Visualizza cache** apre il file CMakeCache.txt dalla cartella radice di compilazione nell'editor. (Tutte le modifiche apportate qui a CMakeCache.txt vengono cancellate se si pulisce la cache. Per apportare modifiche che persistono dopo la pulizia della cache, vedere [Impostazioni e configurazioni personalizzate di CMake](#cmake_settings) più sopra in questo articolo.)

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
  
## <a name="see-also"></a>Vedere anche

[Esercitazione: Creare progetti multipiattaforma C++ in Visual Studio](get-started-linux-cmake.md)<br/>
[Configurare un progetto CMake per Linux](../linux/cmake-linux-project.md)<br/>
[Connettersi al computer Linux remoto](../linux/connect-to-your-remote-linux-computer.md)<br/>
[Personalizzare le impostazioni di compilazione di CMake](customize-cmake-settings.md)<br/>
[Informazioni di riferimento su CMakeSettings.json](cmakesettings-reference.md)<br/>
[Configurare le sessioni di debug di CMake](configure-cmake-debugging-sessions.md)<br/>
[Distribuire, eseguire e sottoporre a debug il progetto Linux](../linux/deploy-run-and-debug-your-linux-project.md)<br/>
[Informazioni di riferimento sulle configurazioni predefinite CMake](cmake-predefined-configuration-reference.md)<br/>

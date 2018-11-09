---
title: Progetti CMake in Visual C++
ms.date: 10/18/2018
helpviewer_keywords:
- CMake in Visual C++
ms.assetid: 444d50df-215e-4d31-933a-b41841f186f8
ms.openlocfilehash: 07c32e30aa36d6e59122340da0b1026e7025780d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50612498"
---
# <a name="cmake-projects-in-visual-c"></a>Progetti CMake in Visual C++

Questo articolo presuppone che si abbia familiarità con CMake, uno strumento open-source multipiattaforma per la definizione di processi di compilazione che funzionano su piattaforme multiple.

In Visual Studio 2015, gli utenti di Visual Studio potevano usare un [generatore CMake](https://cmake.org/cmake/help/v3.9/manual/cmake-generators.7.html) per generare file di progetto MSBuild, che l'IDE usava successivamente per IntelliSense, navigazione e compilazione.

A partire da Visual Studio 2017, il componente **Strumenti Visual C++ per CMake** usa la funzione **Apri cartella** per consentire all'IDE di impiegare i file di progetto CMake (come CMakeLists.txt) direttamente per IntelliSense e la navigazione. Se si usa un generatore di Visual Studio, viene generato un file di progetto temporaneo, che viene passato a msbuild.exe, ma non viene mai caricato per IntelliSense o a scopo di navigazione.

**Visual Studio 2017 versione 15.3**: offre il supporto sia per i generatori Ninja che per quelli Visual Studio.

**Visual Studio 2017 versione 15.4**: aggiunto il supporto per CMake in Linux. Per altre informazioni, vedere[Configurare un progetto CMake Linux](../linux/cmake-linux-project.md).

**Visual Studio 2017 versione 15.5**: aggiunto il supporto per l'importazione di una cache CMake esistente. Visual Studio estrae automaticamente le variabili personalizzate e crea un file CMakeSettings.json prepopolato.

**Visual Studio 2017 versione 15.7**: viene aggiunto il supporto per la disabilitazione della generazione automatica della cache, per la visualizzazione delle destinazioni in **Esplora soluzioni**e la compilazione di file singoli.

## <a name="installation"></a>Installazione

**Strumenti Visual C++ per CMake** viene installato per impostazione predefinita come parte del carico di lavoro **Sviluppo di applicazioni desktop con C++**.

![Componente CMake nel carico di lavoro Desktop C++](media/cmake-install.png)

## <a name="ide-integration"></a>Integrazione nell'IDE

Scegliendo **File | Apri | Cartella** per aprire una cartella contenente un file CMakeLists.txt, si verifica quanto segue:

- Visual Studio aggiunge una voce di menu **CMake** al menu principale, con comandi per la visualizzazione e la modifica di script di CMake.
- **Esplora soluzioni** visualizza la struttura delle cartelle e i file.
- Visual Studio esegue CMake.exe e genera la cache CMake per la *configurazione* predefinita, ovvero x86 Debug. La riga di comando CMake viene visualizzata nella **Finestra di output**, insieme all'uscita aggiuntiva da CMake.  **Visual Studio 2017 15.7 e versioni successive**: è possibile disabilitare la generazione automatica della cache nella finestra di dialogo **Strumenti | Opzioni | CMake | Generale**.
- In background, Visual Studio inizia a indicizzare i file sorgente per abilitare IntelliSense, le informazioni di navigazione, il refactoring e così via. Mentre si lavora, Visual Studio esegue il monitoraggio delle modifiche nell'editor e anche sul disco per mantenere l'indice sincronizzato con le sorgenti.

È possibile aprire le cartelle che contengono un numero qualsiasi di progetti di CMake. Visual Studio rileva e configura tutti i file di CMakeLists.txt "radice" presenti nell'area di lavoro. Le operazioni di CMake (configurare, compilare, eseguire il debug) così come C++ IntelliSense e la navigazione sono disponibili per tutti i progetti CMake nell'area di lavoro.

![Progetto CMake con più radici](media/cmake-multiple-roots.png)

**Visual Studio 2017 15.7 e versioni successive**: è anche possibile visualizzare i progetti organizzati in modo logico in base alle destinazioni. Scegliere **Visualizzazione destinazioni CMake** dall'elenco a discesa sulla barra degli strumenti di **Esplora soluzioni**:

![Pulsante Visualizzazione destinazioni CMake](media/cmake-targets-view.png)

## <a name="import-an-existing-cache"></a>Importare una cache esistente

Quando si importa un file CMakeCache.txt esistente, Visual Studio estrae automaticamente le variabili personalizzate e crea un file [CMakeSettings.json](#cmake_settings) prepopolato basato su tali variabili. La cache originale non viene modificata in alcun modo e può essere comunque usata dalla riga di comando o con qualsiasi strumento o IDE usato per generarla. Il nuovo file CMakeSettings.json viene posizionato accanto alla radice del progetto CMakeLists.txt. Visual Studio genera una nuova cache basata sul file di impostazione.

**Visual Studio 2017 15.7 e versioni successive**: è possibile eseguire l'override della generazione automatica della cache nella finestra di dialogo **Strumenti | Opzioni | CMake | Generale**.

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

Quando si seleziona un generatore di Visual Studio per la configurazione attiva, viene richiamato MSBuild.exe con gli argomenti `-m -v:minimal`. Per personalizzare la compilazione, all'interno del file CMakeSettings.json, è possibile specificare argomenti della riga di comando aggiuntivi da trasferire al sistema di compilazione tramite la proprietà `buildCommandArgs`:

```json
"buildCommandArgs": "-m:8 -v:minimal -p:PreferredToolArchitecture=x64"
```

Come prevedibile, i risultati della compilazione sono visualizzati nella **Finestra di output** e nell'**Elenco errori**.

![Errori di compilazione CMake](media/cmake-build-errors.png "CMake, errori di compilazione")

In una cartella con più destinazioni di compilazione, è possibile scegliere l'elemento **Genera** nel menu **CMake** o nel menu di scelta rapida **CMakeLists.txt** per specificare quale destinazione di CMake compilare. Premendo **CTRL+MAIUSC+B** in un progetto di CMake verrà compilato il documento attivo corrente.

## <a name="debug-the-project"></a>Eseguire il debug del progetto

Per eseguire il debug di un progetto di CMake, scegliere la configurazione desiderata e premere **F5**, oppure premere il pulsante **Esegui** nella barra degli strumenti. Se il pulsante **Esegui** visualizza "Seleziona elemento di avvio", selezionare la freccia a discesa e scegliere la destinazione che si desidera eseguire. (In un progetto CMake, l'opzione "documento corrente" è valida solo per i file con estensione .cpp.)

![Pulsante di esecuzione di CMake](media/cmake-run-button.png "Pulsante di esecuzione di CMake")

I comandi **Esegui** o **F5** compilano innanzitutto il progetto se sono state apportate modifiche rispetto alla compilazione precedente.

## <a name="configure-cmake-debugging-sessions"></a>Configurare le sessioni di debug di CMake

Tutte le destinazioni CMake eseguibili sono visualizzate nell'elenco a discesa **Elemento di avvio** nella barra degli strumenti **Generale**. Per avviare una sessione di debug, selezionarne una e avviare il debugger.

![Elenco a discesa elemento di avvio di CMake](media/cmake-startup-item-dropdown.png "Elemento di avvio di CMake, elenco a discesa")

È anche possibile avviare una sessione di debug dai menu di CMake.

Per personalizzare le impostazioni del debugger per qualsiasi destinazione CMake eseguibile nel progetto, fare clic con il pulsante destro del mouse sul file CMakeLists.txt specifico e selezionare **Impostazioni per debug e avvio**. Selezionando una destinazione CMake nel sottomenu, viene creato un file con nome launch.vs.json. Questo file viene prepopolato con informazioni sulla destinazione CMake selezionata e consente di specificare parametri aggiuntivi, come argomenti del programma o tipo di debugger. Per fare riferimento a qualsiasi chiave in un file CMakeSettings.json, anteporvi "CMake". in launch.vs.json. Nell'esempio seguente viene illustrato un file launch.vs.json semplice che estrae il valore della chiave "remoteCopySources" nel file CMakeSettings.json per la configurazione attualmente selezionata:

```json
{
  "version": "0.2.1",
  "defaults": {},
  "configurations": [
    {
      "type": "default",
      "project": "CMakeLists.txt",
      "projectTarget": "CMakeHelloWorld.exe (Debug\\CMakeHelloWorld.exe)",
      "name": "CMakeHelloWorld.exe (Debug\\CMakeHelloWorld.exe)",
      "args": ["${cmake.remoteCopySources}"]
    }
  ]
}
```

Non appena si salva il file launch.vs.json, viene creata una voce nell'elenco a discesa **Elemento di avvio** con il nuovo nome. Modificando il file launch.vs.json, è possibile creare tutte le configurazioni di debug che si desiderano per un qualsiasi numero di destinazioni CMake.

**Visual Studio 2017 versione 15.4**: Launch.vs.json supporta le variabili che vengono dichiarate in CMakeSettings.json (vedere sotto) e che sono applicabili alla configurazione selezionata. Inoltre include una chiave denominata "currentDir", che imposta la directory corrente dell'applicazione di avvio:

```json
{
  "type": "default",
  "project": "CMakeLists.txt",
  "projectTarget": "CMakeHelloWorld1.exe (C:\\Users\\satyan\\CMakeBuilds\\Test\\Debug\\CMakeHelloWorld1.exe)",
  "name": "CMakeHelloWorld1.exe (C:\\Users\\satyan\\CMakeBuilds\\Test\\Debug\\CMakeHelloWorld1.exe)",
  "currentDir": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}"
}
```

Quando si esegue l'app, il valore di `currentDir` è simile a

```cmd
C:\Users\satyan\7f14809a-2626-873e-952e-cdf038211175\
```

## <a name="editing-cmakeliststxt-files"></a>Modifica dei file CMakeLists.txt

Per modificare un file CMakeLists.txt, fare clic con il pulsante destro del mouse sul file in **Esplora soluzioni** e scegliere **Apri**. Se si apportano modifiche al file, viene visualizzata una barra di stato gialla che comunica che IntelliSense verrà aggiornata e offre la possibilità di annullare l'operazione di aggiornamento. Per informazioni su CMakeLists.txt, vedere la documentazione di [CMake](https://cmake.org/documentation/).

   ![Modifica del file CMakeLists.txt](media/cmake-cmakelists.png "CMakeLists.txt, modifica del file")

Non appena si salva il file, viene eseguito nuovamente e automaticamente il passaggio di configurazione che visualizza le informazioni nella finestra **Output**. Gli errori e gli avvisi vengono visualizzati nella finestra **Elenco errori** o **Output**. Fare doppio clic su un errore in **Elenco errori** per passare alla riga interessata in CMakeLists.txt.

   ![Errori del file CMakeLists.txt](media/cmake-cmakelists-error.png "CMakeLists.txt, errori del file")

## <a name="cmake_settings"></a> Impostazioni e configurazioni personalizzate di CMake

Per impostazione predefinita, Visual Studio offre sei configurazioni CMake ("x86-Debug", "x86-Release", "x64-Debug", "x64-Release", "Linux-Debug" e "Linux-Release"). Queste configurazioni definiscono il modo in cui CMake.exe viene richiamato per creare la cache di CMake per un dato progetto. Per modificare queste configurazioni o creare una nuova configurazione personalizzata, scegliere **CMake | Modifica impostazioni di CMake**, quindi scegliere il file CMakeLists.txt a cui applicare le impostazioni. Il comando **Modifica impostazioni di CMake** è disponibile anche nel menu di scelta rapida del file in **Esplora soluzioni**. Questo comando crea un file CMakeSettings.json nella cartella del progetto. Questo file viene usato per ricreare il file di cache CMake, ad esempio dopo un'operazione di **pulizia**.

   ![Comando di menu principale di CMake per modificare le impostazioni](media/cmake-change-settings.png)

JSON IntelliSense consente di modificare il file CMakeSettings.json:

   ![IntelliSense JSON CMake](media/cmake-json-intellisense.png "CMake JSON IntelliSense")

Nell'esempio seguente viene illustrata una configurazione campione, che è possibile usare come punto di partenza per creare la propria configurazione in CMakeSettings.json:

```json
    {
      "name": "x86-Debug",
      "generator": "Ninja",
      "configurationType": "Debug",
      "inheritEnvironments": [ "msvc_x86" ],
      "buildRoot": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}\\build\\${name}",
      "installRoot": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}\\install\\${name}",
      "cmakeCommandArgs": "",
      "buildCommandArgs": "-v",
      "ctestCommandArgs": ""
    },

```

1. **nome**: il nome della configurazione visualizzato nell'elenco a discesa della configurazione C++. Il valore di questa proprietà può essere usato anche come macro, `${name}`, per specificare altri valori di proprietà. Per un esempio, vedere la definizione **buildRoot** in CMakeSettings.json.

1. **generatore**: esegue il mapping allo switch **-G** e specifica il generatore da usare. Questa proprietà può essere usata anche come macro, `${generator}`, per specificare altri valori di proprietà. Visual Studio supporta attualmente i generatori CMake seguenti:

    - "Ninja"
    - "Visual Studio 14 2015"
    - "Visual Studio 14 2015 ARM"
    - "Visual Studio 14 2015 Win64"
    - "Visual Studio 15 2017"
    - "Visual Studio 15 2017 ARM"
    - "Visual Studio 15 2017 Win64"

Poiché Ninja è progettato per velocità di configurazione rapide anziché per flessibilità e funzionalità, è impostato come predefinito. Tuttavia, alcuni progetti CMake potrebbero non essere in grado di eseguire una compilazione corretta usando Ninja. In questo caso, è possibile istruire CMake a generare un progetto Visual Studio.

Per specificare un generatore Visual Studio, aprire CMakeSettings.json dal menu principale scegliendo **CMake | Modifica impostazioni di CMake**. Eliminare "Ninja" e digitare "V". Questa operazione attiva IntelliSense, che consente di scegliere il generatore desiderato.

1. **buildRoot**: esegue il mapping a **-DCMAKE_BINARY_DIR** esegue lo switch e specifica dove verrà creata la cache di CMake. Se la cartella non esiste, verrà creata.

1. **variabili**: contiene una coppia nome-valore di variabili CMake che verrà trasferita come **-D** *_nome_=_valore_* a CMake. Se le istruzioni per la compilazione del progetto CMake specificano l'aggiunta di qualsiasi variabile direttamente al file di cache di CMake, si consiglia di aggiungerle qui. L'esempio seguente illustra come specificare la coppia nome-valore:

```json
"variables": [
    {
      "name": "CMAKE_CXX_COMPILER",
      "value": "C:/Program Files (x86)/Microsoft Visual Studio/157/Enterprise/VC/Tools/MSVC/14.14.26428/bin/HostX86/x86/cl.exe"
    },
    {
      "name": "CMAKE_C_COMPILER",
      "value": "C:/Program Files (x86)/Microsoft Visual Studio/157/Enterprise/VC/Tools/MSVC/14.14.26428/bin/HostX86/x86/cl.exe"
    }
  ]
```

1. **cmakeCommandArgs**: specifica gli eventuali switch aggiuntivi che si desidera trasferire a CMake.exe.

2. **configurationType**: definisce il tipo di configurazione di compilazione per il generatore selezionato. I valori attualmente supportati sono "Debug", "MinSizeRel", "Release" e "RelWithDebInfo".

3. **ctestCommandArgs**: specifica le opzioni aggiuntive da passare a CTest durante l'esecuzione di test.

4. **buildCommandArgs**: specifica le opzioni aggiuntive da passare al sistema di compilazione sottostante. Ad esempio, il passaggio di -v quando si usa il generatore Ninja forza Ninja a restituire le righe di comando.

### <a name="environment-variables"></a>Variabili di ambiente

CMakeSettings.json supporta anche variabili di ambiente di consumo in una delle proprietà di cui sopra. La sintassi da usare è `${env.FOO}` per espandere la variabile dell'ambiente %FOO%.
È possibile accedere anche alle macro incorporate all'interno di questo file:

- `${workspaceRoot}` – indica il percorso completo della cartella dello spazio di lavoro
- `${workspaceHash}` – hash della posizione dell'area di lavoro; utile per creare un identificatore univoco per l'area di lavoro corrente (ad esempio, da usare nei percorsi delle cartelle)
- `${projectFile}` – percorso completo del file radice CMakeLists.txt
- `${projectDir}` – percorso completo della cartella del file radice CMakeLists.txt
- `${thisFile}` – percorso completo del file CMakeSettings.json
- `${name}` – nome della configurazione
- `${generator}` – nome del generatore CMake usato in questa configurazione

### <a name="ninja-command-line-arguments"></a>Argomenti della riga di comando Ninja

Se non vengono specificate destinazioni, compila la destinazione "predefinita" (vedere il manuale).

```cmd
C:\Program Files (x86)\Microsoft Visual Studio\Preview\Enterprise>ninja -?
ninja: invalid option -- `-?'
usage: ninja [options] [targets...]
```

|Opzione|Descrizione|
|--------------|------------|
| --versione  | versione ninja per la stampa ("1.7.1")|
|   -C DIR   | passa a DIR prima di eseguire qualunque altra operazione|
|   -f FILE  | specifica il file di compilazione di input (predefinito=build.ninja)|
|   -j N     | esegue le operazioni N in parallelo (predefinito=14, derivato dalle CPU disponibili)|
|   -k N     | prosegue fino all'errore delle operazioni N (predefinito=1)|
|   -l N     | non inizia nuove operazioni se la media del carico è superiore a N|
|   -n       | esecuzione (non esegue i comandi ma agisce come se fossero stati eseguiti correttamente)|
|   -v       | mostra tutte le righe di comando durante la compilazione|
|   -d MODE  | abilita il debug (usare le modalità da elenco -d a elenco)|
|   -t TOOL  | esegue uno strumento secondario (usare gli strumenti secondari da elenco -t a elenco). termina le opzioni di livello superiore; i flag ulteriori vengono passati allo strumento|
|   -w FLAG  | modifica gli avvisi (usare gli avvisi da elenco -w a elenco)|

### <a name="inherited-environments-visual-studio-2017-version-155"></a>Ambienti ereditati (Visual Studio 2017 versione 15.5)

CMakeSettings.json supporta gli ambienti ereditati. Questa funzionalità consente di (1) ereditare ambienti predefiniti e di (2) creare variabili di ambiente personalizzate che vengono passate a CMake.exe quando è in esecuzione.

```json
  "inheritEnvironments": [ "msvc_x64_x64" ]
```

L'esempio precedente equivale all'esecuzione del **Prompt dei comandi per gli sviluppatori per VS 2017** con gli argomenti **-arch=amd64 -host_arch=amd64**.

La tabella seguente mostra i valori predefiniti dei valori predefiniti:

|Nome contesto|Descrizione|
|-----------|-----------------|
|vsdev|Ambiente Visual Studio predefinito|
|msvc_x86|Compilazione per x86 usando strumenti x86|
|msvc_arm| Compilazione per ARM usando strumenti x86|
|msvc_arm64|Compilazione per ARM64 usando strumenti x86|
|msvc_x86_x64|Compilazione per AMD64 usando strumenti x86|
|msvc_x64_x64|Compilazione per AMD64 usando strumenti a 64 bit|
|msvc_arm_x64|Compilazione per ARM usando strumenti a 64 bit|
|msvc_arm64_x64|Compilazione per ARM64 usando strumenti a 64 bit|

### <a name="custom-environment-variables"></a>Variabili di ambiente personalizzate

In CMakeSettings.json, è possibile definire variabili di ambiente personalizzate globalmente o per configurazione nella proprietà **Ambienti**. L'esempio seguente definisce una variabile globale, **BuildDir**, ereditata sia nella configurazione x86-Debug che nella configurazione x64-Debug. Ogni configurazione usa la variabile per specificare il valore della proprietà **buildRoot** per quella configurazione. Si noti anche come ogni configurazione usa la proprietà **inheritEnvironments** per specificare una variabile che si applica solo a quella configurazione.

```json
{
  // The "environments" property is an array of key value pairs of the form
  // { "EnvVar1": "Value1", "EnvVar2": "Value2" }
  "environments": [
    {
      "BuildDir": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}\\build",
    }
  ],

  "configurations": [
    {
      "name": "x86-Debug",
      "generator": "Ninja",
      "configurationType": "Debug",
      // Inherit the defaults for using the MSVC x86 compiler.
      "inheritEnvironments": [ "msvc_x86" ],
      "buildRoot": "${env.BuildDir}\\${name}"    },
    {
      "name": "x64-Debug",
      "generator": "Ninja",
      "configurationType": "Debug",
      // Inherit the defaults for using the MSVC x64 compiler.
      "inheritEnvironments": [ "msvc_x64" ],
      "buildRoot": "${env.BuildDir}\\${name}"
    }
  ]
}
```

Nell'esempio seguente, la configurazione di Debug x86 definisce il proprio valore per la proprietà **BuildDir**, e questo valore sostituisce il valore impostato dalla proprietà globale **BuildDir** in modo che  **BuildRoot** esegua la valutazione a `D:\custom-builddir\x86-Debug`.

```json
{
  "environments": [
    {
      "BuildDir": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}",
    }
  ],

  "configurations": [
    {
      "name": "x86-Debug",

      // The syntax for this property is the same as the global one above.
      "environments": [
        {
          // Replace the global property entirely.
          "BuildDir": "D:\\custom-builddir",
        }
      ],

      "generator": "Ninja",
      "configurationType": "Debug",
      "inheritEnvironments": [ "msvc_x86" ],
      // Evaluates to "D:\custom-builddir\x86-Debug"
      "buildRoot": "${env.BuildDir}\\${name}"
    },
    {
      "name": "x64-Debug",

      "generator": "Ninja",
      "configurationType": "Debug",
      "inheritEnvironments": [ "msvc_x64" ],
      // Since this configuration doesn’t modify BuildDir, it inherits
      // from the one defined globally.
      "buildRoot": "${env.BuildDir}\\${name}"
    }
  ]
}
```

## <a name="cmake-configure-step"></a>Fase di configurazione di CMake

Quando vengono apportate modifiche significative ai file CMakeSettings.json o CMakeLists.txt, Visual Studio riesegue automaticamente la fase di configurazione di CMake. Se la fase di configurazione termina senza errori, le informazioni raccolte sono disponibili in C++ IntelliSense e nei servizi linguistici, nonché nelle operazioni di compilazione e debug.

Quando più progetti CMake usano lo stesso nome di configurazione CMake (ad esempio, x86-Debug), vengono tutti configurati e compilati (nella loro cartella radice di compilazione) quando viene selezionata tale configurazione. È possibile eseguire il debug delle destinazioni da tutti i progetti CMake che partecipano alla configurazione CMake.

   ![Voce di menu CMake Build Only (Solo generazione CMake)](media/cmake-build-only.png "CMake Build Only (Solo generazione CMake), voce di menu")

Per limitare le sessioni di compilazione e debug a un sottoinsieme dei progetti dell'area di lavoro, creare una nuova configurazione con un nome univoco nel file CMakeSettings.json e applicarla solo a tali progetti. Quando si seleziona questa configurazione, i comandi IntelliSense e build e debug sono abilitati solo per i progetti specificati.

## <a name="troubleshooting-cmake-cache-errors"></a>Risoluzione degli errori di cache CMake

Per altre informazioni sullo stato della cache CMake per diagnosticare un problema, aprire il menu principale **CMake** o il menu contestuale **CMakeLists.txt** in **Esplora soluzioni** per eseguire uno di questi comandi:

- **Visualizza cache** apre il file CMakeCache.txt dalla cartella radice di compilazione nell'editor. (Tutte le modifiche apportate qui a CMakeCache.txt vengono cancellate se si pulisce la cache. Per apportare modifiche che persistono dopo la pulizia della cache, vedere [Impostazioni e configurazioni personalizzate di CMake](#cmake_settings) più sopra in questo articolo.)

- **Apri cartella cache** apre una finestra di Explorer corrispondente alla cartella radice di compilazione.

- **Pulisci cache** elimina la cartella radice di compilazione in modo che la fase successiva di configurazione di CMake inizi da una cache pulita.

- **Genera cache** forza l'esecuzione della fase di generazione anche se Visual Studio considera l'ambiente aggiornato.

**Visual Studio 2017 15.7 e versioni successive**: è possibile disabilitare la generazione automatica della cache nella finestra di dialogo **Strumenti | Opzioni | CMake | Generale**.

## <a name="single-file-compilation"></a>Compilazione di un file singolo

**Visual Studio 2017 15.7 e versioni successive**: per compilare un file singolo in un progetto CMake, fare clic con il pulsante destro del mouse in **Esplora soluzioni** e scegliere **Compila**. È anche possibile compilare il file aperto in quel momento nell'editor tramite il menu principale di CMake:

![Compilazione di un file singolo di CMake](media/cmake-single-file-compile.png)

## <a name="run-cmake-from-the-command-line"></a>Eseguire CMake dalla riga di comando
Se CMake è stato installato dal programma di installazione di Visual Studio, è possibile eseguirlo dalla riga di comando seguendo questa procedura:

1. Eseguire il file vsdevcmd.bat appropriato (x86 o x64). Per altre informazioni, vedere [Compilazione dalla riga di comando](../build/building-on-the-command-line.md).
1. Passare alla cartella di output.
1. Eseguire CMake per compilare/configurare l'app.


---
title: CMake progetti in Visual C++ | Documenti Microsoft
ms.custom: ''
ms.date: 08/08/2017
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CMake in Visual C++
ms.assetid: 444d50df-215e-4d31-933a-b41841f186f8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f3a65ae6cc58f649fee5f47b33a146263a3b6c55
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cmake-projects-in-visual-c"></a>CMake progetti in Visual C++

Questo articolo si presuppone che si ha familiarità con CMake, uno strumento multipiattaforma, open source per la definizione di processi di compilazione che vengono eseguiti su più piattaforme.

Fino a poco tempo, gli utenti di Visual Studio può utilizzare CMake per generare file di progetto MSBuild, che l'IDE quindi usato per IntelliSense, esplorazione e la compilazione. A partire da Visual Studio 2017, il **strumenti di Visual C++ per CMake** componente utilizza il **Apri cartella** abilitare all'IDE di utilizzare i file di progetto CMake (ad esempio CMakeLists.txt) direttamente ai fini della funzionalità di IntelliSense ed esplorazione. Se si utilizza un generatore di Visual Studio, un file di progetto temporaneo viene generato e passato a msbuild.exe, ma non è mai caricato per IntelliSense o esplorazione. 

**Visual Studio 2017 versione 15.3**: sono supportate per i generatori di avanzato sia Visual Studio.

**Visual Studio 2017 versione 15.4**: viene aggiunto il supporto per CMake in Linux. Per altre informazioni, vedere[Configurare un progetto CMake Linux](../linux/cmake-linux-project.md).

**Visual Studio 2017 versione 15,5**: viene aggiunto il supporto per l'importazione di una cache di CMake esistente. Visual Studio automaticamente estrae le variabili personalizzate e crea un file CMakeSettings.json pre-popolato.


## <a name="installation"></a>Installazione

**Strumenti di Visual C++ per CMake** viene installato per impostazione predefinita come parte di **sviluppo di applicazioni Desktop con C++** carico di lavoro.

![Componente CMake nel carico di lavoro Desktop C++](media/cmake-install.png)
 
## <a name="ide-integration"></a>Integrazione nell'IDE

Quando si sceglie **File | Aprire | Cartella** per aprire una cartella che contiene un file CMakeLists.txt, si verifica quanto segue:

- Visual Studio aggiunge un **CMake** voce di menu al menu principale, con i comandi per la visualizzazione e modifica di script di CMake.
- **Esplora soluzioni** Visualizza la struttura di cartelle e file.
- Visual Studio esegue CMake.exe e genera la cache di CMake per il valore predefinito *configurazione*, ovvero x86 eseguire il Debug. Viene visualizzata la riga di comando di CMake nel **finestra di Output**, insieme all'output aggiuntivi da CMake.
- In background, Visual Studio avvia indicizzare i file di origine per abilitare IntelliSense, la ricerca di informazioni, refactoring e così via. Quando si utilizza, Visual Studio consente di monitorare le modifiche apportate nell'editor e anche sul disco per mantenere sincronizzati con le origini al relativo indice.
 
È possibile aprire le cartelle che contengono un numero qualsiasi di progetti di CMake. Visual Studio rileva e configura tutti i file di CMakeLists.txt "root" nell'area di lavoro. Le operazioni di CMake (configurare, compilare, eseguire il debug), nonché di IntelliSense per C++ e di esplorazione sono disponibili per tutti i progetti di CMake nell'area di lavoro.

![Progetto CMake con più nodi radice](media/cmake-multiple-roots.png) 

## <a name="import-an-existing-cache"></a>Importare una cache esistente

Quando si importa un file CMakeCache.txt esistente, Visual Studio automaticamente estrae le variabili personalizzate e crea un file CMakeSettings.json prepopolato basato su di essi. La cache originale non viene modificata in alcun modo e può essere ancora utilizzata dalla riga di comando o con qualsiasi strumento o l'IDE è stato utilizzato per generarlo. Il nuovo file CMakeSettings.json viene inserito insieme radice del progetto CMakeLists.txt. Visual Studio genera una nuova cache basato su file di impostazioni. Non tutti gli elementi nella cache viene importato.  Proprietà, ad esempio il generatore e il percorso dei compilatori vengono sostituite con le impostazioni predefinite che funzionano correttamente anche con l'IDE.

### <a name="to-import-an-existing-cache"></a>Per importare una cache esistente

1. Dal menu principale scegliere **File | Aprire | CMake**:

   ![Aprire CMake](media/cmake-file-open.png "File, Apri, CMake") 

   Verrà visualizzata la **CMake importazione dalla Cache** procedura guidata. 
   
2. Passare al file CMakeCache.txt che si desidera importare e quindi fare clic su **OK**. Il **importazione CMake progetto dalla Cache** guidata:

   ![Importare una cache di CMake](media/cmake-import-wizard.png "aprire importazione guidata della cache di CMake") 

   Al termine della procedura guidata, è possibile visualizzare il nuovo file CMakeCache.txt **Esplora** accanto al file CMakeLists.txt radice del progetto.


## <a name="building-cmake-projects"></a>Compilazione di progetti CMake

Per compilare un progetto di CMake, sono disponibili queste opzioni:

1. Selezionare la destinazione nel **Debug** elenco a discesa e premere **F5**, oppure fare clic su di **eseguire** pulsante (triangolo verde). Il progetto compila automaticamente in primo luogo, come una soluzione di Visual Studio.
1. Fare clic con il pulsante destro sul CMakeLists.txt e selezionare **compilare** dal menu di scelta rapida. Se si dispone di più destinazioni nella struttura di cartella, è possibile scegliere di compilare tutti o solo una destinazione specifica, o
1. Nel menu principale, selezionare **compilare | Compila soluzione** (**F7** o **Ctrl + MAIUSC + B**). Assicurarsi che una destinazione di CMake è già selezionata nel **elemento di avvio** elenco a discesa nella **generale** barra degli strumenti.

![CMake genera](media/cmake-build-menu.png "Cmake menu dei comandi di compilazione") 

Quando un generatore di Visual Studio è selezionato per la configurazione attiva, MSBuild.exe viene richiamato con `-m -v:minimal` argomenti. Per personalizzare la compilazione, all'interno del file CMakeSettings.json, è possibile specificare argomenti della riga di comando aggiuntivi da passare al sistema di compilazione tramite la `buildCommandArgs` proprietà:

```json
"buildCommandArgs": "-m:8 -v:minimal -p:PreferredToolArchitecture=x64"
```

Come prevedibile, vengono visualizzati i risultati di compilazione di **finestra di Output** e **elenco errori**.
 
![Errori di compilazione CMake](media/cmake-build-errors.png "CMake errori di compilazione")

In una cartella con più destinazioni di compilazione, è possibile scegliere il **compilare** voce nel **CMake** menu o **CMakeLists.txt** menu di scelta rapida per specificare quale destinazione CMake da compilare. Premendo **Ctrl + MAIUSC + B** in un CMake progetto verrà compilato il documento attivo corrente.

## <a name="debug-the-project"></a>Eseguire il debug del progetto

Per eseguire il debug di un progetto di CMake, scegliere la configurazione desiderata e premere **F5**, oppure premere la **eseguire** sulla barra degli strumenti. Se il **eseguire** pulsante Visualizza "Seleziona avvio elemento", selezionare la freccia a discesa e scegliere la destinazione che si desidera eseguire. (In un progetto di CMake, il documento"corrente" opzione è valida solo per i file con estensione cpp.) 

![Pulsante di esecuzione di CMake](media/cmake-run-button.png "pulsante di esecuzione di Cmake")


Il **eseguire** o **F5** comandi innanzitutto compilare il progetto se sono state apportate modifiche rispetto alla compilazione precedente.

## <a name="configure-cmake-debugging-sessions"></a>Configurare le sessioni di debug CMake

Tutte le destinazioni CMake eseguibile vengono visualizzate di **elemento di avvio** elenco a discesa nella **generale** barra degli strumenti. Per avviare una sessione di debug, selezionarlo e avviare il debugger.

![Elenco a discesa elemento di avvio CMake](media/cmake-startup-item-dropdown.png "a discesa di elementi di avvio CMake")


È anche possibile avviare una sessione di debug dal menu a CMake.

Per personalizzare le impostazioni del debugger per qualsiasi destinazione CMake eseguibile nel progetto, fare clic sul file CMakeLists.txt specifico e selezionare **Debug e impostazioni di avvio**. Quando si seleziona una destinazione di CMake nel sottomenu, viene creato un file denominato launch.vs.json. Questo file viene pre-popolato con informazioni sulla destinazione di CMake selezionato e consente di specificare parametri aggiuntivi, ad esempio argomenti del programma o tipo di debugger. Per fare riferimento a qualsiasi chiave in un file CMakeSettings.json, anteporvi "cmake". in launch.vs.json. Nell'esempio seguente viene illustrato un file di launch.vs.json semplice che estrae il valore della chiave "remoteCopySources" nel file CMakeSettings.json per la configurazione attualmente selezionata:

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

Non appena si salva il file launch.vs.json, in viene creata una voce di **elemento di avvio** elenco a discesa con il nuovo nome. Modificando il file launch.vs.json, è possibile creare come molte configurazioni di debug nel modo desiderato per un numero qualsiasi di destinazioni di CMake.

**Visual Studio 2017 versione 15.4**: Launch.vs.json supporta le variabili che vengono dichiarati in CMakeSettings.json (vedere sotto) e che sono applicabili alla configurazione selezionata. Include inoltre una chiave denominata "currentDir", che imposta la directory corrente dell'applicazione che avvia l'operazione:


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

Per modificare un file CMakeLists.txt, fare clic sul file in **Esplora** e scegliere **aprire**. Se si apportano modifiche al file, una barra di stato gialla viene visualizzato che IntelliSense verrà aggiornata e offre la possibilità di annullare l'operazione di aggiornamento. Per informazioni su CMakeLists.txt, vedere il [CMake documentazione](https://cmake.org/documentation/).

   ![Modifica dei file CMakeLists.txt](media/cmake-cmakelists.png "CMakeLists.txt modifica dei file")


Non appena si salva il file, il passaggio di configurazione viene eseguito di nuovo automaticamente e visualizza le informazioni nel **Output** finestra. Errori e avvisi vengono visualizzati di **elenco errori** o **Output** finestra. Fare doppio clic su un errore durante il **elenco errori** per passare alla riga interessata in CMakeLists.txt.

   ![Errori del file CMakeLists.txt](media/cmake-cmakelists-error.png "CMakeLists.txt errori del file")

## <a name="cmake_settings"></a> CMake impostazioni e le configurazioni personalizzate

Per impostazione predefinita, Visual Studio fornisce sei CMake configurazioni ("x86-Debug", "x86-rilascio", "x64-Debug", "x64-versione", "Linux-Debug" e "Versione di Linux"). Queste configurazioni definiscono come CMake.exe viene richiamata per creare la cache di CMake per un determinato progetto. Per modificare queste configurazioni, o creare una nuova configurazione personalizzata, scegliere **CMake | Modificare le impostazioni di CMake**e quindi scegliere il file CMakeLists.txt che le impostazioni si applicano. Il **modificare le impostazioni di CMake** comando è anche disponibile nel menu di scelta rapida del file in **Esplora**. Questo comando crea un file CMakeSettings.json nella cartella del progetto. Questo file viene utilizzato per ricreare il file di cache CMake, ad esempio dopo un **Pulisci** operazione. 

   ![Comando di menu principale di CMake per modificare le impostazioni](media/cmake-change-settings.png)


JSON IntelliSense consente di modificare il file CMakeSettings.json:

   ![IntelliSense JSON CMake](media/cmake-json-intellisense.png "CMake JSON IntelliSense")

Nell'esempio seguente viene illustrato un esempio di configurazione, è possibile utilizzare come punto di partenza per crearne di proprie in CMakeSettings.json:

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

1. **nome**: il nome visualizzato nell'elenco a discesa Configurazione C++. Valore di questa proprietà è utilizzabile anche come macro, `${name}`, per specificare altri valori di proprietà. Per un esempio, vedere il **buildRoot** definizione in CMakeSettings.json.
1. **Generatore di**: esegue il mapping al **- lettera G** passa e specifica il generatore di da utilizzare. Questa proprietà può essere utilizzata anche come macro, `${generator}`, che consentono di specificare altri valori di proprietà. Visual Studio supporta attualmente i generatori di CMake seguenti:


    - "Ninja"
    - "Visual Studio 2015 14"
    - "Visual Studio 2015 14 ARM"
    - "Visual Studio 14 2015 Win64"
    - "Visual Studio 15 2017"
    - "Visual Studio 15 2017 ARM"
    - "Visual Studio 15 2017 Win64"

Poiché avanzato è progettato per eseguire rapidamente le compilazioni velocità anziché flessibilità e la funzione, è impostato come predefinito. Tuttavia, alcuni progetti CMake alla potrebbero non essere corretta compilazione mediante avanzato. In questo caso, è possibile indicare CMake per generare invece di un progetto di Visual Studio.

Per specificare un generatore di Visual Studio, aprire il CMakeSettings.json dal menu principale scegliendo **CMake | Modificare le impostazioni di CMake**. Eliminare "Avanzato", digitare "V". Questa operazione attiva IntelliSense, che consente di scegliere il generatore che si desidera.

1. **buildRoot**: esegue il mapping a **-DCMAKE_BINARY_DIR** passa e specifica in cui verrà creata la cache di CMake. Se la cartella non esiste, viene creato.
1. **le variabili**: contiene una coppia nome-valore delle variabili di CMake che verranno passati come **-D**_nome_**=**_valore_ a CMake. Se le istruzioni di compilazione progetto CMake specificano l'aggiunta di eventuali variabili direttamente il file di cache CMake, è consigliabile aggiungerli qui invece.
1. **cmakeCommandArgs**: Specifica eventuali altre opzioni che si desidera passare a CMake.exe.
1. **configurationType**: definisce il tipo di configurazione di compilazione per il generatore di selezionato. I valori attualmente supportati sono "Debug", "MinSizeRel", "Versione" e "RelWithDebInfo".

### <a name="environment-variables"></a>Variabili di ambiente

CMakeSettings.json supporta inoltre dispendiosa in termini di variabili di ambiente in una qualsiasi delle proprietà menzionate sopra. La sintassi da utilizzare è `${env.FOO}` per espandere la variabile % FOO % di ambiente.
È inoltre possibile avere accesso alle macro incorporate all'interno del file:

- `${workspaceRoot}` : fornisce il percorso completo della cartella dell'area di lavoro
- `${workspaceHash}` – hash del percorso di area di lavoro. utile per la creazione di un identificatore univoco per l'area di lavoro corrente (ad esempio, per utilizzare i percorsi delle cartelle)
- `${projectFile}` : il percorso completo del file radice CMakeLists.txt
- `${projectDir}` : il percorso completo della cartella del file radice CMakeLists.txt
- `${thisFile}` : il percorso completo del file CMakeSettings.json
- `${name}` : il nome della configurazione
- `${generator}` : il nome del generatore di CMake utilizzato in questa configurazione

### <a name="ninja-command-line-arguments"></a>Argomenti della riga di comando avanzato

Se le destinazioni non sono specificate, compila la destinazione di 'default' (vedere il manuale).

```cmd
C:\Program Files (x86)\Microsoft Visual Studio\Preview\Enterprise>ninja -?
ninja: invalid option -- `-?'
usage: ninja [options] [targets...]
```

|Opzione|Descrizione|
|--------------|------------|
| -versione  | versione di stampa avanzato ("1.7.1")|
|   -C DIR   | modificare in DIR prima di eseguire qualsiasi altra operazione|
|   -f FILE  | specificare il file di input di compilazione (default=build.ninja)|
|   -j N     | eseguire processi N in parallelo (impostazione predefinita = 14, derivato da CPU disponibili)|
|   -k N     | proseguiamo fino a N processi non riescono (impostazione predefinita = 1)|
|   -l N     | non avviare nuovi processi se la media di carico è maggiore di N|
|   -n      | eseguire secca (non eseguire comandi ma fungere da cui ha avuto esito positivo)|
|   -v       | Mostra tutte le righe di comando durante la compilazione|
|   -d modalità  | abilitare il debug (utilizzare modalità elenco al -d)|
|   -t strumento  | eseguire un subtool (utilizzare strumenti secondari a elenco -t). Consente di terminare le opzioni di livello superiore; ulteriori flag vengono passati allo strumento| 
|   w - FLAG  | modificare gli avvisi (utilizzare -w elenco all'elenco degli avvisi)|

### <a name="inherited-environments-visual-studio-2017-version-155"></a>Ambienti ereditati (2017 Studio Visual versione 15,5)
CMakeSettings.json supporta ora gli ambienti ereditati. Questa funzionalità consente di (1) ereditare ambienti predefinito e (2) creare variabili di ambiente personalizzate che vengono passate al CMake.exe quando è in esecuzione.

```json
  "inheritEnvironments": [ "msvc_x64_x64" ]
```

L'esempio precedente è equivale all'esecuzione di **prompt dei comandi per sviluppatori per Visual Studio 2017** con il **-arch = amd64-host_arch = amd64** argomenti.

Nella tabella seguente mostra i valori predefiniti e i relativi equivalenti della riga di comando:

|Nome del contesto|Descrizione|
|-----------|-----------------|
|vsdev|Ambiente di Visual Studio predefinito|
|msvc_x86|Compilare per x86 x86 utilizzando gli strumenti|
|msvc_arm| Compilare per ARM, x86 utilizzando gli strumenti|
|msvc_arm64|Compila per ARM64 x86 utilizzando gli strumenti|
|msvc_x86_x64|Compila per AMD64 x86 utilizzando gli strumenti|
|msvc_x64_x64|Compila per AMD64 utilizzando strumenti a 64 bit|
|msvc_arm_x64|Compilare per ARM utilizzando strumenti a 64 bit|
|msvc_arm64_x64|Compila per ARM64 utilizzando strumenti a 64 bit|

### <a name="custom-environment-variables"></a>Variabili di ambiente personalizzate
In CMakeSettings.json, è possibile definire variabili di ambiente personalizzate a livello globale per ogni configurazione in o il **ambienti** proprietà. L'esempio seguente definisce una variabile globale, **BuildDir**, che viene ereditata in configurazioni di Debug x86 sia x64-Debug. Ogni configurazione utilizza la variabile per specificare il valore per il **buildRoot** proprietà per la configurazione. Si noti anche come ogni configurazione utilizza il **inheritEnvironments** proprietà per specificare una variabile che si applica solo a tale configurazione.

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

Nell'esempio seguente, la configurazione di Debug x86 definisce il proprio valore per il **BuildDir** , proprietà e questo valore sostituisce il valore di un'impostazione globale **BuildDir** proprietà in modo che  **BuildRoot** restituisce `D:\custom-builddir\x86-Debug`.

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

## <a name="cmake-configure-step"></a>Passaggio di configurazione CMake

Quando vengono apportate modifiche significative per la CMakeSettings.json o ai file CMakeLists.txt, Visual Studio automaticamente riesegue il CMake configurare passaggio. Se il passaggio di configurazione viene completata senza errori, le informazioni raccolte è disponibile in servizi di linguaggio e IntelliSense per C++ e anche nella compilazione e debug delle operazioni.

Quando più progetti CMake usano lo stesso nome di configurazione CMake (ad esempio,-Debug x86), tutti gli elementi configurati e compilati (nella cartella propri radice compilazione) quando è selezionata la configurazione. È possibile eseguire il debug le destinazioni da tutti i progetti di CMake che fanno parte di tale configurazione CMake.

   ![CMake compilare solo voce di menu](media/cmake-build-only.png "CMake compilare solo voce di menu")

Per limitare le compilazioni e il debug di sessioni per un subset dei progetti nell'area di lavoro, creare una nuova configurazione con un nome univoco nel file CMakeSettings.json e applicarlo a solo tali progetti. Quando tale configurazione viene selezionata, i comandi di IntelliSense e di compilazione e debug sono abilitati solo per i progetti specificati.

## <a name="troubleshooting-cmake-cache-errors"></a>Risoluzione degli errori di cache CMake

Se sono necessarie ulteriori informazioni sullo stato della cache CMake di diagnosticare un problema, aprire il **CMake** menu principale o **CMakeLists.txt** menu di scelta rapida in **Esplora**per eseguire uno di questi comandi:

- **Visualizzare Cache** apre il file CMakeCache.txt dalla cartella radice di compilazione nell'editor. (Tutte le modifiche apportate a CMakeCache.txt vengono cancellate se la pulizia della cache. Per apportare modifiche che persiste dopo la cache viene eseguita la pulizia, vedere [CMake impostazioni e le configurazioni personalizzate](#cmake_settings) più indietro in questo articolo.)
- **Aprire la cartella Cache** apre una finestra di Esplora nella cartella radice di compilazione.  
- **Eseguire la pulizia della Cache** Elimina la cartella radice di compilazione in modo che il successivo CMake configurare inizia passaggio da una cache pulita.
- **Generare una Cache** forza il passaggio genera venga eseguita anche se Visual Studio prende in considerazione l'ambiente aggiornato.

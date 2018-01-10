---
title: CMake progetti in Visual C++ | Documenti Microsoft
ms.custom: 
ms.date: 08/08/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: CMake in Visual C++
ms.assetid: 444d50df-215e-4d31-933a-b41841f186f8
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d38538ce929410782eee7a0a6540bb62a05b7669
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmake-projects-in-visual-c"></a>CMake progetti in Visual C++
Questo articolo si presuppone che si ha familiarità con CMake, uno strumento multipiattaforma, open source per la definizione di processi di compilazione che vengono eseguiti su più piattaforme.  

Fino a poco tempo, gli utenti di Visual Studio può utilizzare CMake per generare file di progetto MSBuild, che l'IDE quindi usato per IntelliSense, esplorazione e la compilazione. A partire da Visual Studio 2017, il **strumenti di Visual C++ per CMake** componente utilizza la funzionalità "Apri cartella" per abilitare l'IDE utilizzare il file di progetto CMake (ad esempio CMakeLists.txt) direttamente ai fini di IntelliSense ed esplorazione. Se si utilizza un generatore di Visual Studio, un file di progetto temporaneo viene generato e passato a msbuild.exe, ma non è mai caricato per IntelliSense o esplorazione. 

**Visual Studio 2017 versione 15.3**: sono supportate per i generatori di avanzato sia Visual Studio.

**Visual Studio 2017 versione 15.4**: viene aggiunto il supporto per CMake in Linux. Per altre informazioni, vedere[Configurare un progetto CMake Linux](../linux/cmake-linux-project.md).

## <a name="installing"></a>Installazione di
Strumenti di Visual C++ per CMake è installato per impostazione predefinita come parte dello sviluppo Desktop con carico di lavoro di C++.

![Componente CMake nel carico di lavoro Desktop C++](media/cmake-install.png)
 
## <a name="ide-integration"></a>Integrazione nell'IDE
Quando si sceglie **File | Aprire | Cartella** per aprire una cartella che contiene un file CMakeLists.txt, si verifica quanto segue:
- Visual Studio aggiunge un **CMake** voce di menu al menu principale, con i comandi per la visualizzazione e modifica di script di CMake. 
- **Esplora soluzioni** Visualizza la struttura di cartelle e file. 
- Visual Studio esegue CMake.exe e genera la cache di CMake per il valore predefinito *configurazione*, ovvero x86 eseguire il Debug. Viene visualizzata la riga di comando di CMake nel **finestra di Output**, insieme all'output aggiuntivi da CMake.
- In background, Visual Studio avvia indicizzare i file di origine per abilitare IntelliSense, la ricerca di informazioni, refactoring e così via. Quando si utilizza, Visual Studio consente di monitorare le modifiche apportate nell'editor e anche sul disco per mantenere sincronizzati con le origini al relativo indice. È possibile aprire le cartelle che contengono un numero qualsiasi di progetti di CMake. Visual Studio rileva e configura tutti i file di CMakeLists.txt "root" nell'area di lavoro. Le operazioni di CMake (configurare, compilare, eseguire il debug), nonché di IntelliSense per C++ e di esplorazione sono disponibili per tutti i progetti di CMake nell'area di lavoro.

![Progetto CMake con più nodi radice](media/cmake-multiple-roots.png) 

## <a name="building-cmake-projects"></a>Compilazione di progetti CMake
Per compilare un progetto di CMake, sono disponibili queste opzioni:
1. Selezionare la destinazione nell'elenco a discesa di Debug di premere **F5** o fare clic sul pulsante "Esegui". Il progetto verrà automaticamente compilazione prima di tutto, esattamente come con soluzioni di Visual Studio.
2.  Fare clic con il CMakeLists.txt destro e selezionare una compilazione dal menu di scelta rapida. Se si dispone di più destinazioni nella struttura di cartella, è possibile scegliere di compilare tutti o solo una destinazione specifica, o
  
3. Nel menu principale, selezionare **compilare | Compila soluzione** (**F7** o **Ctrl + MAIUSC + B**) (assicurarsi che una destinazione di CMake è già selezionata nel **elemento di avvio** elenco a discesa nella **Generale** barra degli strumenti).

![Comando di menu compilazione CMake](media/cmake-build-menu.png) 
 
Quando un generatore di Visual Studio è selezionato per la configurazione attiva, MSBuild.exe viene richiamato con `-m -v:minimal` argomenti. Per personalizzare la compilazione, all'interno del file CMakeSettings.json, è possibile specificare argomenti della riga di comando aggiuntivi da passare al sistema di compilazione tramite la `buildCommandArgs` proprietà:

```json
"buildCommandArgs": "-m:8 -v:minimal -p:PreferredToolArchitecture=x64"
```
Come prevedibile, vengono visualizzati i risultati di compilazione di **finestra di Output** e **elenco errori**.
 
![Errori di compilazione CMake](media/cmake-build-errors.png)

In una cartella con più destinazioni di compilazione, è possibile scegliere l'elemento di compilazione del menu CMake o il menu di scelta rapida CMakeLists.txt per specificare quale destinazione CMake da compilare. Premendo **Ctrl + MAIUSC + B** in un CMake progetto verrà compilato il documento attivo corrente. 

## <a name="debugging-the-project"></a>Debug del progetto
Per eseguire il debug di un progetto di CMake, scegliere la configurazione desiderata e premere **F5**, o fare clic sul pulsante Esegui sulla barra degli strumenti. Se il pulsante di esecuzione è "Seleziona avvio elemento", fare clic sulla freccia in giù e scegliere la destinazione che si desidera eseguire. (In un progetto di CMake, il documento"corrente" opzione è valida solo per i file con estensione cpp.) 

 ![Pulsante di esecuzione di CMake](media/cmake-run-button.png)

 Premendo **F5** verrà prima compilazione del progetto se sono state apportate modifiche rispetto alla compilazione precedente.

## <a name="configuring-cmake-debugging-sessions"></a>Configurazione di sessione di debug CMake
Tutte le destinazioni CMake eseguibile vengono visualizzate nell'elenco a discesa nella barra degli strumenti generale elemento di avvio. Per avviare una sessione di debug, selezionarlo e avviare il debugger.

 ![Elenco a discesa elemento di avvio CMake](media/cmake-startup-item-dropdown.png)

È anche possibile avviare una sessione di debug dal menu a CMake.

Per personalizzare le impostazioni del debugger per qualsiasi destinazione CMake eseguibile nel progetto, fare clic sul file CMakeLists.txt specifico e selezionare **Debug e impostazioni di avvio**, quando si seleziona una destinazione di CMake nel sottomenu, un file denominato Launch.VS.JSON viene creato. Questo file viene pre-popolato con informazioni sulla destinazione di CMake selezionato e consente di specificare parametri aggiuntivi, ad esempio argomenti del programma o tipo di debugger. Per fare riferimento a qualsiasi chiave in un file CMakeSettings.json, anteporvi "cmake". in launch.vs.json. Nell'esempio seguente viene illustrato un file di launch.vs.json semplice che estrae il valore della chiave "remoteCopySources" nel file CMakeSettings.json per la configurazione attualmente selezionata:

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
Non appena si salva il file launch.vs.json, viene creata una voce nell'elenco a discesa elemento di avvio con il nuovo nome. Modificando il file launch.vs.json, è possibile creare come molte configurazioni di debug nel modo desiderato per un numero qualsiasi di destinazioni di CMake.

**Visual Studio 2017 versione 15.4**: Launch.vs.json supporta le variabili dichiarate in CMakeSettings.json (vedere sotto). Include inoltre un concetto del "currentDir", che verrà impostata come la directory corrente dell'applicazione che avvia l'operazione:

```json
{
"type": "default",
"project": "CMakeLists.txt",
"projectTarget": "CMakeHelloWorld1.exe (C:\\Users\\satyan\\CMakeBuilds\\Test\\Debug\\CMakeHelloWorld1.exe)",
"name": "CMakeHelloWorld1.exe (C:\\Users\\satyan\\CMakeBuilds\\Test\\Debug\\CMakeHelloWorld1.exe)",
"currentDir": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}"
}
```
Quando si esegue l'app, il valore di `currentDir` è 

```cmd
C:\Users\satyan\7f14809a-2626-873e-952e-cdf038211175\
```
 

## <a name="editing-cmakeliststxt-files"></a>Modifica dei file CMakeLists.txt
Per modificare un file CMakeLists.txt, fare clic sul file in **Esplora** e scegliere **aprire**. Se si apportano modifiche al file, una barra di stato gialla viene visualizzato che IntelliSense verrà aggiornata e offre la possibilità di annullare l'operazione di aggiornamento. Per informazioni su CMakeLists.txt, vedere il [CMake documentazione](https://cmake.org/documentation/).

  ![Modifica dei file CMakeLists.txt](media/cmake-cmakelists.png)

Non appena si salva il file, il passaggio di configurazione verrà eseguito nuovamente automaticamente e visualizzare le informazioni nella finestra di Output. Errori e avvisi vengono visualizzati nell'elenco di errori o nella finestra di Output. Fare doppio clic su un errore nell'elenco errori per passare alla riga interessata in CMakeLists.txt.

  ![Errori del file CMakeLists.txt](media/cmake-cmakelists-error.png)
 
## <a name="cmake_settings"></a>CMake impostazioni e le configurazioni personalizzate
Per impostazione predefinita, Visual Studio fornisce sei CMake configurazioni ("x86-Debug", "x86-rilascio", "x64-Debug", "x64-versione", "Linux-Debug" e "Versione di Linux"). Queste configurazioni definiscono come CMake.exe viene richiamata per creare la cache di CMake per un determinato progetto. Per modificare queste configurazioni, o creare una nuova configurazione personalizzata, scegliere **CMake | Modificare l'impostazione di CMake**, quindi scegliere il file CMakeLists.txt che le impostazioni verranno applicate a. Le impostazioni di CMake modifica è disponibile anche nel menu di scelta rapida del file in **Esplora**. Questo comando crea un file CMakeSettings.json nella cartella del progetto. Questo file viene utilizzato per ricreare il file di cache CMake, ad esempio dopo un'operazione di "Pulizia". 

  ![Comando di menu principale di CMake per modificare le impostazioni](media/cmake-change-settings.png)
 
JSON IntelliSense consente di modificare il file CMakeSettings.json:

   ![IntelliSense JSON CMake](media/cmake-json-intellisense.png)

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
1.  nome: il nome che verrà visualizzato nell'elenco a discesa Configurazione C++. Valore di questa proprietà consente anche di una macro `${name}` per specificare altri valori di proprietà. Per un esempio, vedere la definizione di "buildRoot" nella CMakeSettings.json.
2.  Generatore: esegue il mapping all'opzione -G e specifica il generatore di da utilizzare. Questa proprietà può essere utilizzata anche come macro `${generator}` che consentono di specificare altri valori di proprietà. Visual Studio supporta attualmente i generatori di CMake seguenti:
    - "Avanzato"
    - "Visual Studio 2015 14"
    - "Visual Studio 2015 14 ARM"
    - "Visual Studio 2015 14 Win64"
    - "Visual Studio 15 2017"
    - "Visual Studio 15 2017 ARM"
    - "Visual Studio 15 2017 Win64"
    - 
Poiché avanzato è progettato per eseguire rapidamente le compilazioni velocità anziché flessibilità e la funzione, è impostato come predefinito. Tuttavia, alcuni progetti CMake alla potrebbero non essere corretta compilazione mediante avanzato. In questo caso, è possibile indicare CMake per generare invece di un progetto di Visual Studio. 

Per specificare un generatore di Visual Studio, aprire il CMakeSettings.json dal menu principale scegliendo **CMake | Modificare le impostazioni di CMake**. Eliminare "Avanzato", digitare "V". Questa operazione attiva IntelliSense, che consente di scegliere il generatore che si desidera.
3.  buildRoot: esegue il mapping a - commutatore DCMAKE_BINARY_DIR e specifica in cui verrà creata la cache di CMake. Se la cartella non esiste, verrà creato.
4.  le variabili: contiene una coppia di nome + valore delle variabili di CMake che verranno passati come - Dname = valore CMake. Se le istruzioni di compilazione progetto CMake specificano l'aggiunta di eventuali variabili direttamente al file di cache CMake, è consigliabile aggiungerli qui invece.
5.  cmakeCommandArgs: Specifica eventuali altre opzioni che si desidera passare a CMake.exe.
6.  configurationType: definisce il tipo di configurazione di compilazione per il generatore di selezionato. I valori attualmente supportati sono "Debug", "MinSizeRel", "Versione" e "RelWithDebInfo".

### <a name="environment-variables"></a>Variabili di ambiente
CMakeSettings.json supporta inoltre dispendiosa in termini di variabili di ambiente in una qualsiasi delle proprietà menzionate sopra. La sintassi da utilizzare è `${env.FOO}` per espandere la variabile % FOO % di ambiente.
È inoltre possibile avere accesso alle macro incorporate all'interno del file:
- `${workspaceRoot}`: fornisce il percorso completo della cartella dell'area di lavoro
- `${workspaceHash}`– hash del percorso di area di lavoro. utile per la creazione di un identificatore univoco per l'area di lavoro corrente (ad esempio, per utilizzare i percorsi delle cartelle)
- `${projectFile}`: il percorso completo del file radice CMakeLists.txt
- `${projectDir}`: il percorso completo della cartella del file radice CMakeLists.txt
- `${thisFile}`: il percorso completo del file CMakeSettings.json
- `${name}`: il nome della configurazione
- `${generator}`: il nome del generatore di CMake utilizzato in questa configurazione

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
|   -f FILE  | specificare il file di input di compilazione [default=build.ninja]| 
|   -j N     | eseguire processi N in parallelo [impostazione predefinita = 14, derivato dalla CPU disponibile]| 
|   -k N     | proseguiamo fino a N processi non riescono [impostazione predefinita = 1]| 
|   -l N     | non avviare nuovi processi se la media di carico è maggiore di N| 
|   -n      | eseguire secca (non eseguire comandi ma fungere da cui ha avuto esito positivo)| 
|   -v       | Mostra tutte le righe di comando durante la compilazione| 
|   -d modalità  | abilitare il debug (utilizzare modalità elenco al -d)| 
|   -t strumento  | eseguire un subtool (utilizzare strumenti secondari a elenco -t). Consente di terminare le opzioni di livello superiore; ulteriori flag vengono passati allo strumento| 
|   w - FLAG  | modificare gli avvisi (utilizzare -w elenco all'elenco degli avvisi)| 


### <a name="inherited-environments-visual-studio-2017-version-155"></a>Ambienti ereditati (2017 Studio Visual versione 15,5)

CmakeSettings.json supporta ora inherted ambienti. Questa funzionalità consente di creare una variabile personalizzata che:

```json
  "inheritEnvironments": [ "msvc_x64_x64" ]
```

Questo campo imposta le variabili che vengono passate automaticamente al CMake.exe quando è in esecuzione. L'esempio precedente è equivale all'esecuzione di "Developer Prompt dei comandi di Visual Studio 2017" con il `-arch=amd64 -host_arch=amd64` argomenti.

Nella tabella seguente mostra i valori supportati e i relativi equivalenti della riga di comando:

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


Quando vengono apportate modifiche significative per la CMakeSettings.json o ai file CMakeLists.txt, Visual Studio automaticamente riesegue il CMake configurare passaggio. Se il passaggio di configurazione viene completata senza errori, le informazioni raccolte verranno disponibile in servizi di IntelliSense per C++ e la lingua e anche nella compilazione e debug delle operazioni.

Quando più progetti CMake usano lo stesso nome di configurazione CMake (ad esempio,-Debug x86), tutti gli elementi configurati e compilati (nella cartella propri radice compilazione) quando è selezionata la configurazione. È possibile eseguire il debug le destinazioni da tutti i progetti di CMake che fanno parte di tale configurazione CMake.

   ![CMake compilare solo voce di menu](media/cmake-build-only.png)

Per limitare le compilazioni e il debug di sessioni per un subset dei progetti nell'area di lavoro, creare una nuova configurazione con un nome univoco nel file CMakeSettings.json e applicarlo a solo tali progetti. Quando tale configurazione è selezionata, IntelliSense, la compilazione, e il debug verrà abilitato solo per quelli specificati progetti.

## <a name="troubleshooting-cmake-cache-errors"></a>Risoluzione degli errori di cache CMake
Se sono necessarie ulteriori informazioni sullo stato della cache CMake di diagnosticare un problema, aprire il menu principale di CMake o il menu di scelta rapida CMakeLists.txt in **Esplora** per eseguire uno di questi comandi:
- **Visualizzare Cache** apre il file CMakeCache.txt dalla cartella radice di compilazione nell'editor. (Tutte le modifiche apportate a CMakeCache.txt vengono cancellate se la pulizia della cache. Per apportare modifiche che persiste dopo la cache viene eseguita la pulizia, vedere [CMake impostazioni e le configurazioni personalizzate](#cmake_settings) più indietro in questo articolo.)
- **Aprire la cartella Cache** apre una finestra di Esplora nella cartella radice di compilazione.  
- **Eseguire la pulizia della Cache** Elimina la cartella radice di compilazione in modo che il successivo CMake configurare inizia passaggio da una cache pulita.
- **Generare una Cache** forza il passaggio genera venga eseguita anche se Visual Studio prende in considerazione l'ambiente aggiornato.


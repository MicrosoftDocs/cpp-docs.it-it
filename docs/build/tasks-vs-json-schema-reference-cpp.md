---
title: riferimento allo schema Tasks. vs.C++JSON ()
ms.date: 08/20/2019
helpviewer_keywords:
- tasks.vs.json file [C++]
ms.assetid: abd1985e-3717-4338-9e80-869db5435175
ms.openlocfilehash: 1e533babafad554e8f7413d2bc1a88933a6eca42
ms.sourcegitcommit: ace42fa67e704d56d03c03745b0b17d2a5afeba4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2019
ms.locfileid: "69975921"
---
# <a name="tasksvsjson-schema-reference-c"></a>riferimento allo schema Tasks. vs.C++JSON ()

Per indicare a Visual Studio come compilare il codice sorgente in un progetto Apri cartella, aggiungere un file *Tasks. vs. JSON* . È possibile definire qualsiasi attività arbitraria e quindi richiamarla dal menu di scelta rapida **Esplora soluzioni** . I progetti CMake non usano questo file perché tutti i comandi di compilazione sono specificati in *CMakeLists. txt*. Per i sistemi di compilazione diversi da CMake, *Tasks. vs. JSON* è la posizione in cui è possibile specificare i comandi di compilazione e richiamare gli script di compilazione. Per informazioni generali sull'uso di *Tasks. vs. JSON*, vedere [personalizzare le attività di compilazione e debug per lo sviluppo "Apri cartella"](/visualstudio/ide/customize-build-and-debug-tasks-in-visual-studio).

Un'attività ha una `type` proprietà che può avere uno dei quattro valori seguenti `default`: `launch`, `remote`, o `msbuild`. La maggior parte delle `launch` attività deve usare, a meno che non sia necessaria una connessione remota.

## <a name="default-properties"></a>Proprietà predefinite

Le proprietà predefinite sono disponibili per tutti i tipi di attività:

||||
|-|-|-|
|**Proprietà**|**Tipo**|**Descrizione**|
|`taskLabel`|string| Obbligatorio. Specifica l'etichetta dell'attività utilizzata nell'interfaccia utente.|
|`appliesTo`|string| Obbligatorio. Specifica i file su cui è possibile eseguire il comando. È supportato l'uso di caratteri jolly, ad esempio: " *", "* . cpp", "/*. txt"|
|`contextType`|string| Valori consentiti: "Custom", "Build", "clean", "Rebuild". Determina la posizione in cui verrà visualizzata l'attività nel menu di scelta rapida. Il valore predefinito è "Custom".|
|`output`|string| Specifica un tag di output per l'attività.|
|`inheritEnvironments`|array| Specifica un set di variabili di ambiente ereditate da più origini. È possibile definire variabili nei file come *CMakeSettings. JSON* o *CppProperties. JSON* e renderli disponibili per il contesto dell'attività.|
|`passEnvVars`|boolean| Specifica se includere o meno le variabili di ambiente aggiuntive per il contesto dell'attività. Queste variabili sono diverse da quelle definite usando la `envVars` proprietà. Il valore predefinito è "true".|

## <a name="launch-properties"></a>Proprietà di avvio

Quando il tipo di attività `launch`è, sono disponibili le proprietà seguenti:

||||
|-|-|-|
|**Proprietà**|**Tipo**|**Descrizione**|
|`command`|string| Specifica il percorso completo del processo o dello script da avviare.|
|`args`|array| Specifica un elenco delimitato da virgole di argomenti passati al comando.|
|`launchOption`|string| Valori consentiti: "None", "ContinueOnError", "IgnoreError". Specifica come procedere con il comando quando si verificano errori.|
|`workingDirectory`|string| Specifica la directory in cui verrà eseguito il comando. Il valore predefinito è la directory di lavoro corrente del progetto.|
|`customLaunchCommand`|string| Specifica una personalizzazione dell'ambito globale da applicare prima di eseguire il comando. Utile per l'impostazione di variabili di ambiente come% PATH%.|
|`customLaunchCommandArgs`|string| Specifica gli argomenti per customLaunchCommand. (Richiede `customLaunchCommand`.)|
 `env`| Specifica un elenco di valori chiave-valore di variabili di ambiente personalizzate. Ad esempio, "myEnv": "myVal"|
|`commands`|array| Specifica un elenco di comandi da richiamare nell'ordine.|

### <a name="example"></a>Esempio

Le attività seguenti richiamano *make. exe* quando viene fornito un Makefile nella cartella e `Mingw64` l'ambiente è stato definito in *CppProperties. JSON*, come illustrato nel [riferimento allo schema CppProperties. JSON](cppproperties-schema-reference.md#user_defined_environments):

```json
 {
  "version": "0.2.1",
  "tasks": [
    {
      "taskLabel": "gcc make",
      "appliesTo": "*.cpp",
      "type": "launch",
      "contextType": "custom",
      "inheritEnvironments": [
        "Mingw64"
      ],
      "command": "make"
    },
    {
      "taskLabel": "gcc clean",
      "appliesTo": "*.cpp",
      "type": "launch",
      "contextType": "custom",
      "inheritEnvironments": [
        "Mingw64"
      ],
      "command": "make",
      "args": ["clean"]
    }
  ]
}
```

Queste attività possono essere richiamate dal menu di scelta rapida quando si fa clic con il pulsante destro del mouse su un file con *estensione cpp* in **Esplora soluzioni**.

## <a name="remote-properties"></a>Proprietà Remote

Le attività remote sono abilitate quando si installa lo sviluppo C++ di Linux con il carico di lavoro e si aggiunge una connessione a un computer remoto tramite la gestione connessione di Visual Studio. Un'attività remota esegue i comandi in un sistema remoto e può anche copiarvi file.

Quando il tipo di attività `remote`è, sono disponibili le proprietà seguenti:

||||
|-|-|-|
|**Proprietà**|**Tipo**|**Descrizione**|
|`remoteMachineName`|string|Nome del computer remoto. Deve corrispondere al nome di un computer nella **gestione connessione**.|
|`command`|string|Comando da inviare al computer remoto. Per impostazione predefinita, i comandi vengono eseguiti nella directory $HOME del sistema remoto.|
|`remoteWorkingDirectory`|string|Directory di lavoro corrente nel computer remoto.|
|`localCopyDirectory`|string|Directory locale da copiare nel computer remoto. Il valore predefinito è la directory di lavoro corrente.|
|`remoteCopyDirectory`|string|Directory nel computer remoto in cui `localCopyDirectory` viene copiato.|
|`remoteCopyMethod`|string| Metodo da usare per la copia. Valori consentiti: "None", "SFTP", "rsync". rsync è consigliato per i progetti di grandi dimensioni.|
|`remoteCopySourcesOutputVerbosity`|string| Valori consentiti: "Normal", "verbose", "Diagnostic".|
|`rsyncCommandArgs`|string|Il valore predefinito è "-t--delete".|
|`remoteCopyExclusionList`|array|Elenco delimitato da virgole di `localCopyDirectory` file in da escludere dalle operazioni di copia.|

### <a name="example"></a>Esempio

L'attività seguente verrà visualizzata nel menu di scelta rapida quando si fa clic con il pulsante destro del mouse su *Main. cpp* in **Esplora soluzioni**. Dipende da un computer remoto denominato `ubuntu` in **gestione connessione**. L'attività copia la cartella aperta corrente in Visual Studio nella `sample` directory nel computer remoto e quindi richiama g + + per compilare il programma.

```json
{
  "version": "0.2.1",
  "tasks": [
    {
      "taskLabel": "Build",
      "appliesTo": "main.cpp",
      "type": "remote",
      "contextType": "build",
      "command": "g++ main.cpp",
      "remoteMachineName": "ubuntu",
      "remoteCopyDirectory": "~/sample",
      "remoteCopyMethod": "sftp",
      "remoteWorkingDirectory": "~/sample/hello",
      "remoteCopySourcesOutputVerbosity": "Verbose"
    }
  ]
}
```

## <a name="msbuild-properties"></a>proprietà di MSBuild

Quando il tipo di attività `msbuild`è, sono disponibili le proprietà seguenti:

||||
|-|-|-|
|**Proprietà**|**Tipo**|**Descrizione**|
|`verbosity`|string| Specifica i valori verbosityAllowed dell'output di compilazione del progetto MSBuild: "Quiet", "minimal", "Normal", "detailed", "Diagnostic".|
|`toolsVersion`|string| Specifica la versione del set di strumenti per compilare il progetto, ad esempio "2,0", "3,5", "4,0", "Current". Il valore predefinito è "Current".|
|`globalProperties`|object|Specifica un elenco di valori chiave/proprietà globali da passare al progetto, ad esempio "Configuration": "release".|
|`properties`|object| Specifica un elenco di valori chiave-proprietà di proprietà aggiuntive del progetto.|
|`targets`|array| Specifica l'elenco di destinazioni da richiamare, in ordine, nel progetto. La destinazione predefinita del progetto viene utilizzata se non ne viene specificato alcuno.|

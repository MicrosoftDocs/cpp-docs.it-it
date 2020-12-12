---
description: 'Altre informazioni su: tasks.vs.jssu riferimento allo schema (C++)'
title: tasks.vs.jsper riferimento allo schema (C++)
ms.date: 08/20/2019
helpviewer_keywords:
- tasks.vs.json file [C++]
ms.assetid: abd1985e-3717-4338-9e80-869db5435175
ms.openlocfilehash: 1fd4cfb960afa1260c8ea85c0e7fe9274c77ac68
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97275321"
---
# <a name="tasksvsjson-schema-reference-c"></a>tasks.vs.jsper riferimento allo schema (C++)

Per indicare a Visual Studio come compilare il codice sorgente in un progetto di cartella aperta, aggiungere un *tasks.vs.jssu* file. È possibile definire qualsiasi attività arbitraria e quindi richiamarla dal menu di scelta rapida **Esplora soluzioni** . I progetti CMake non usano questo file perché tutti i comandi di compilazione sono specificati in *CMakeLists.txt*. Per i sistemi di compilazione diversi da CMake, *tasks.vs.jsin* è possibile specificare i comandi di compilazione e richiamare gli script di compilazione. Per informazioni generali sull'uso di *tasks.vs.jsin*, vedere [personalizzare le attività di compilazione e debug per lo sviluppo di "Apri cartella"](/visualstudio/ide/customize-build-and-debug-tasks-in-visual-studio).

Un'attività ha una `type` proprietà che può avere uno dei quattro valori seguenti: `default` , `launch` , `remote` o `msbuild` . La maggior parte delle attività deve usare `launch` , a meno che non sia necessaria una connessione remota.

## <a name="default-properties"></a>Proprietà predefinite

Le proprietà predefinite sono disponibili per tutti i tipi di attività:

|Proprietà|Type|Descrizione|
|-|-|-|
|`taskLabel`|string| (Obbligatorio). Specifica l'etichetta dell'attività utilizzata nell'interfaccia utente.|
|`appliesTo`|string| (Obbligatorio). Specifica i file su cui è possibile eseguire il comando. È supportato l'uso di caratteri jolly, ad esempio: "*", "*. cpp", "/*. txt"|
|`contextType`|string| Valori consentiti: "Custom", "Build", "clean", "Rebuild". Determina la posizione in cui verrà visualizzata l'attività nel menu di scelta rapida. Il valore predefinito è "Custom".|
|`output`|string| Specifica un tag di output per l'attività.|
|`inheritEnvironments`|array| Specifica un set di variabili di ambiente ereditate da più origini. È possibile definire variabili in file come *CMakeSettings.json* o *CppProperties.json* e renderle disponibili per il contesto dell'attività. **Visual Studio 16,4:**: specificare le variabili di ambiente per ogni singola attività usando la `env.VARIABLE_NAME` sintassi. Per annullare una variabile, impostarla su "null".|
|`passEnvVars`|boolean| Specifica se includere o meno le variabili di ambiente aggiuntive per il contesto dell'attività. Queste variabili sono diverse da quelle definite usando la `envVars` Proprietà. Il valore predefinito è "true".|

## <a name="launch-properties"></a>Proprietà di avvio

Quando il tipo di attività è `launch` , sono disponibili le proprietà seguenti:

|Proprietà|Type|Descrizione|
|-|-|-|
|`command`|string| Specifica il percorso completo del processo o dello script da avviare.|
|`args`|array| Specifica un elenco delimitato da virgole di argomenti passati al comando.|
|`launchOption`|string| Valori consentiti: "None", "ContinueOnError", "IgnoreError". Specifica come procedere con il comando quando si verificano errori.|
|`workingDirectory`|string| Specifica la directory in cui verrà eseguito il comando. Il valore predefinito è la directory di lavoro corrente del progetto.|
|`customLaunchCommand`|string| Specifica una personalizzazione dell'ambito globale da applicare prima di eseguire il comando. Utile per l'impostazione di variabili di ambiente come% PATH%.|
|`customLaunchCommandArgs`|string| Specifica gli argomenti per customLaunchCommand. (Richiede `customLaunchCommand` .)|
 `env`| Specifica un elenco di valori chiave-valore di variabili di ambiente personalizzate. Ad esempio, "myEnv": "myVal"|
|`commands`|array| Specifica un elenco di comandi da richiamare nell'ordine.|

### <a name="example"></a>Esempio

Le attività seguenti richiamano *make.exe* quando un makefile viene fornito nella cartella e l' `Mingw64` ambiente è stato definito in *CppProperties.jssu*, come illustrato in [CppProperties.jsdi riferimento allo schema](cppproperties-schema-reference.md#user_defined_environments):

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

Le attività remote sono abilitate quando si installa il carico di lavoro sviluppo di Linux con C++ e si aggiunge una connessione a un computer remoto tramite la gestione connessione di Visual Studio. Un'attività remota esegue i comandi in un sistema remoto e può anche copiarvi file.

Quando il tipo di attività è `remote` , sono disponibili le proprietà seguenti:

|Proprietà|Type|Descrizione|
|-|-|-|
|`remoteMachineName`|string|Nome del computer remoto. Deve corrispondere al nome di un computer nella **gestione connessione**.|
|`command`|string|Comando da inviare al computer remoto. Per impostazione predefinita, i comandi vengono eseguiti nella directory $HOME del sistema remoto.|
|`remoteWorkingDirectory`|string|Directory di lavoro corrente nel computer remoto.|
|`localCopyDirectory`|string|Directory locale da copiare nel computer remoto. Il valore predefinito è la directory di lavoro corrente.|
|`remoteCopyDirectory`|string|Directory nel computer remoto in cui `localCopyDirectory` viene copiato.|
|`remoteCopyMethod`|string| Metodo da usare per la copia. Valori consentiti: "None", "SFTP", "rsync". rsync è consigliato per i progetti di grandi dimensioni.|
|`remoteCopySourcesOutputVerbosity`|string| Valori consentiti: "Normal", "verbose", "Diagnostic".|
|`rsyncCommandArgs`|string|Il valore predefinito è "-t--delete".|
|`remoteCopyExclusionList`|array|Elenco delimitato da virgole di file in `localCopyDirectory` da escludere dalle operazioni di copia.|

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

Quando il tipo di attività è `msbuild` , sono disponibili le proprietà seguenti:

|Proprietà|Type|Descrizione|
|-|-|-|
|`verbosity`|string| Specifica i valori verbosityAllowed di output di compilazione del progetto MSBuild: "quiet", "minimal", "Normal", "detailed", "Diagnostic".|
|`toolsVersion`|string| Specifica la versione del set di strumenti per compilare il progetto, ad esempio "2,0", "3,5", "4,0", "Current". Il valore predefinito è "Current".|
|`globalProperties`|oggetto|Specifica un elenco di valori chiave/proprietà globali da passare al progetto, ad esempio "Configuration": "release".|
|`properties`|oggetto| Specifica un elenco di valori chiave-proprietà di proprietà aggiuntive del progetto.|
|`targets`|array| Specifica l'elenco di destinazioni da richiamare, in ordine, nel progetto. La destinazione predefinita del progetto viene utilizzata se non ne viene specificato alcuno.|

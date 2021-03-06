---
title: launch.vs.jsper riferimento allo schema (C++)
description: Descrive gli elementi dello schema per il `launch.vs.json` file
ms.date: 12/02/2020
helpviewer_keywords:
- launch.vs.json file [C++]
ms.openlocfilehash: 0338f3c8c6bf9eff73a0464ad6c9aac777afacc2
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98667471"
---
# <a name="launchvsjson-schema-reference-c"></a>launch.vs.jsper riferimento allo schema (C++)

Usare il *launch.vs.jssu* file per configurare i parametri di debug. Per creare il file. fare clic con il pulsante destro del mouse su un file eseguibile in **Esplora soluzioni** e scegliere **debug e avvia Impostazioni**. Scegliere l'opzione che corrisponde maggiormente al progetto e quindi usare le proprietà seguenti per modificare la configurazione in base alle esigenze. Per altre informazioni sul debug di progetti CMake, vedere [configurare sessioni di debug CMake](./configure-cmake-debugging-sessions.md).

## <a name="default-properties"></a>Proprietà predefinite

|Proprietà|Type|Descrizione|
|-|-|-|
|`args`|array|Specifica gli argomenti della riga di comando passati al programma avviato.|
|`buildConfigurations`|array| Coppia chiave-valore che specifica il nome della modalità di compilazione per l'applicazione delle configurazioni. Ad esempio, `Debug` o `Release` e le configurazioni da usare in base alla modalità di compilazione selezionata.
|`currentDir`|string|Specifica il percorso completo della directory della destinazione di compilazione. Questa funzione verrà rilevata automaticamente a meno che non sia impostato il parametro.|
|`cwd`|string|Percorso completo della directory nel sistema remoto in cui viene eseguito il programma. Il valore predefinito è `"${debugInfo.defaultWorkingDirectory}"`|
|`debugType`|string|Specifica la modalità di debug in base al tipo di codice (nativo, gestito o misto). Questa proprietà viene rilevata automaticamente a meno che non sia impostato il parametro. Valori consentiti: `"native"` ", `"managed"` , `"mixed"` .|
|`env`|array| Specifica un elenco di valori chiave-valore di variabili di ambiente personalizzate. Ad esempio: `env:{"myEnv":"myVal"}`.|
|`inheritEnvironments`|array|Specifica un set di variabili di ambiente ereditate da più origini. È possibile definire alcune variabili nei file *`CMakeSettings.json`* *`CppProperties.json`* , ad esempio o, e renderle disponibili per il contesto di debug.  **Visual Studio 16,4:** Specificare le variabili di ambiente per ogni singola destinazione utilizzando la `env.VARIABLE_NAME` sintassi. Per annullare una variabile, impostarla su `"null"` .|
|`name`|string|Specifica il nome della voce nell'elenco a discesa dell' **elemento di avvio** .|
|`noDebug`|boolean|Specifica se eseguire il debug del programma avviato. Il valore predefinito per questo parametro è **`false`** se non è specificato.|
|`portName`|string|Specifica il nome della porta durante la connessione a un processo in esecuzione.|
| `program`|string|Comando di debug da eseguire. Il valore predefinito è  `"${debugInfo.fullTargetPath}"` .|
|`project`|string|Specifica il percorso relativo del file di progetto. In genere, non è necessario modificare questo valore quando si esegue il debug di un progetto CMake. |
|`projectTarget`|string|Specifica la destinazione facoltativa richiamata durante la compilazione `project` . La destinazione deve corrispondere al nome nell'elenco a discesa **elemento di avvio** .|
|`stopOnEntry`|boolean|Consente di specificare se interrompere l'operazione subito dopo l'avvio del processo e la connessione del debugger. Il valore predefinito per questo parametro è **`false`** .|
|`remoteMachine`|string|Specifica il nome del computer remoto in cui viene avviato il programma.|
|`type`|string|Specifica se il progetto è un oggetto `dll` o il `exe` valore predefinito è. exe|

## <a name="c-linux-properties"></a>Proprietà di C++ per Linux

|Proprietà|Type|Descrizione|
|-|-|-|
|`program`|string|Percorso completo dell'eseguibile del programma nel computer remoto. Quando si usa CMake, la macro `${debugInfo.fullTargetPath}` può essere usata come valore di questo campo.|
|`processId`|numero intero|ID processo facoltativo a cui connettersi il debugger.|
|`sourceFileMap`|object|Mapping dei file di origine facoltativi passati al motore di debug. Formato: `{ "\<Compiler source location>": "\<Editor source location>" }` o `{ "\<Compiler source location>": { "editorPath": "\<Editor source location>", "useForBreakpoints": true } }` . Esempio: `{ "/home/user/foo": "C:\\foo" }` o `{ "/home/user/foo": { "editorPath": "c:\\foo", "useForBreakpoints": true } }`. Vedere [Opzioni mappa file di origine](#source_file_map_options).|
|`additionalProperties`|string|Uno degli sourceFileMapOptions. come illustrato più avanti.|
|`MIMode`|string|Indica il tipo di debugger della console abilitato per MI a cui si connetterà MIDebugEngine. I valori consentiti sono `"gdb"` : `"lldb"` .|
|`args`|array|Argomenti della riga di comando passati al programma.|
|`environment`|array|Variabili di ambiente da aggiungere all'ambiente per il programma. Esempio: `[ { "name": "squid", "value": "clam" } ]`.|
|`targetArchitecture`|string|Architettura dell'oggetto del debug. Questa funzione verrà rilevata automaticamente a meno che non sia impostato il parametro. I valori consentiti sono `x86` ,, `arm` `arm64` , `mips` , `x64` , `amd64` , `x86_64` .|
|`visualizerFile`|string|File con estensione natvis da utilizzare durante il debug del processo. Questa opzione non è compatibile con la stampa di GDB. Vedere `"showDisplayString"` se si usa questa impostazione.|
|`showDisplayString`|boolean|Quando si specifica un visualizerFile, in `showDisplayString` verrà abilitata la stringa di visualizzazione. L'attivazione di questa opzione può rallentare le prestazioni durante il debug.|
|`remoteMachineName`|string|Il computer Linux remoto che ospita gdb e il programma di cui eseguire il debug. Usare Gestione connessioni per aggiungere nuovi computer Linux. Quando si usa CMake, la macro `${debugInfo.remoteMachineName}` può essere usata come valore di questo campo.|
|`miDebuggerPath`|string|Percorso del debugger abilitato per MI, ad esempio gdb. Quando non viene specificato, il percorso di ricerca viene innanzitutto cercato per il debugger.|
|`miDebuggerServerAddress`|string|Indirizzo di rete del server debugger abilitato per la connessione a. Esempio: localhost: 1234.|
|`setupCommands`|array|Uno o più comandi GDB/LLDB da eseguire per configurare il debugger sottostante. Esempio: `"setupCommands": [ { "text": "-enable-pretty-printing", "description": "Enable GDB pretty printing", "ignoreFailures": true }]`. Vedere [avviare i comandi di installazione](#launch_setup_commands).|
|`customLaunchSetupCommands`|array|Se specificato, sostituisce i comandi predefiniti usati per avviare una destinazione con altri comandi. Ad esempio, può essere "-target-Connetti" per connettersi a un processo di destinazione. Un elenco di comandi vuoto sostituisce i comandi Launch con Nothing, che può essere utile se al debugger vengono fornite opzioni di avvio come opzioni della riga di comando. Esempio: `"customLaunchSetupCommands": [ { "text": "target-run", "description": "run target", "ignoreFailures": false }]`.|
|`launchCompleteCommand`|string|Il comando da eseguire dopo la configurazione completa del debugger determina l'esecuzione del processo di destinazione. I valori consentiti sono "Exec-Run", "Exec-continue", "None". Il valore predefinito è "Exec-Run".|
|`debugServerPath`|string|Percorso completo facoltativo del server di debug da avviare. Il valore predefinito è null.|
|`debugServerArgs`|string|Argomenti facoltativi del server di debug. Il valore predefinito è null.|
|`filterStderr`|boolean|Cercare il modello avviato dal server e il registro stderr per eseguire il debug dell'output. Il valore predefinito è **`false`** .|
|`coreDumpPath`|string|Percorso completo facoltativo di un file di dump di base per il programma specificato. Il valore predefinito è null.|
externalConsole|boolean|Se true, viene avviata una console per l'oggetto del debug. Se **`false`** , non viene avviata alcuna console. Il valore predefinito per questa impostazione è **`false`** . Questa opzione viene ignorata in alcuni casi per motivi tecnici.|
|`pipeTransport`|string|Quando è presente, indica al debugger di connettersi a un computer remoto usando un altro eseguibile come pipe che inoltra l'input/output standard tra Visual Studio e il debugger abilitato per MI, ad esempio gdb. Valori consentiti: una o più [Opzioni di trasporto della pipe](#pipe_transport_options).|

## <a name="c-windows-remote-debug-and-deploy-properties"></a><a name="remote_deploy_debug"></a> Proprietà di distribuzione e debug remoto di Windows C++

Usato durante il debug e la distribuzione di un'app in un computer remoto.

|Proprietà|Type|Descrizione|
|-|-|-|
|`cwd`|string|Directory di lavoro della destinazione nel computer remoto. Quando si usa CMake, la macro `${debugInfo.defaultWorkingDirectory}` può essere usata come valore di questo campo. Il valore predefinito è la directory del comando/programma di debug.|
|`deploy`|string|Specifica i file o le directory aggiuntive da distribuire. Ad esempio:<br> `"deploy": {"sourcePath":"<Full path to source file/directory on host machine>", "targetPath":"<Full destination path to file/directory on target machine>"}` |
|`deployDirectory`|string|Il percorso nel computer remoto in cui vengono distribuiti automaticamente gli output del progetto. Il valore predefinito è "`C:\Windows Default Deploy Directory\<name of app>`|
|`deployDebugRuntimeLibraries`|string|Specifica se distribuire le librerie di runtime di debug per la piattaforma attiva. Il valore predefinito `"true"` è se il ConfigurationType attivo è `"Debug"`|
|`deployRuntimeLibraries`|string|Specifica se distribuire le librerie di runtime per la piattaforma attiva. Il valore predefinito `"true"` è se il ConfigurationType attivo è `"MinSizeRel"` , `"RelWithDebInfo"` o `"Release"` .|
|`disableDeploy` | boolean | Specifica se i file devono essere distribuiti. |
|`remoteMachineName`|string|Specifica il nome del computer Windows ARM64 remoto in cui viene avviato il programma. Può essere il nome del server o l'indirizzo IP del computer remoto. |
|`authenticationType`|string|Specifica il tipo di connessione remota. I valori possibili sono `"windows"` e `"none"`. Il valore predefinito è `"windows"`. Deve corrispondere all'impostazione di autenticazione specificata nel debugger remoto in esecuzione nel computer remoto.|

## <a name="launch-setup-commands"></a><a name="launch_setup_commands"></a> Avviare i comandi di installazione

Utilizzato con la `setupCommands` proprietà:

|Proprietà|Type|Descrizione|
|-|-|-|
|`text`|string|Comando del debugger da eseguire.|
|`description`|string|Descrizione facoltativa del comando.|
|`ignoreFailures`|boolean|Se true, gli errori del comando devono essere ignorati. Il valore predefinito è **`false`** .|

## <a name="pipe-transport-options"></a><a name = "pipe_transport_options"></a> Opzioni di trasporto pipe

Utilizzato con la `pipeTransport` proprietà:

|Proprietà|Type|Descrizione|
|-|-|-|
|`pipeCwd`|string|Percorso completo della directory di lavoro per il programma pipe.|
|`pipeProgram`|string|Comando pipe completo da eseguire.|
|`pipeArgs`|array|Argomenti della riga di comando passati al programma pipe per configurare la connessione.|
|`debuggerPath`|string|Percorso completo del debugger nel computer di destinazione, ad esempio/usr/bin/gdb.|
|`pipeEnv`|object|Variabili di ambiente passate al programma pipe.|
|`quoteArgs`|boolean|Se i singoli argomenti contengono caratteri (ad esempio spazi o tabulazioni), devono essere racchiusi tra virgolette? Se **`false`** , il comando del debugger non verrà più racchiuso tra virgolette. Il valore predefinito è **`true`** .|

## <a name="source-file-map-options"></a><a name="source_file_map_options"></a> Opzioni mapping file di origine

Utilizzare con la `sourceFileMap` proprietà:

|Proprietà|Type|Descrizione|
|-|-|-|
|`editorPath`|string|Posizione del codice sorgente per l'editor da individuare.|
|`useForBreakpoints`|boolean|Quando si impostano punti di interruzione, è necessario utilizzare questo mapping di origine. Se **`false`** , per l'impostazione dei punti di interruzione vengono utilizzati solo il nome file e il numero di riga. Se, i punti di **`true`** interruzione verranno impostati con il percorso completo del file e il numero di riga solo quando viene utilizzato questo mapping di origine. In caso contrario, verranno utilizzati solo il nome file e il numero di riga durante l'impostazione di punti di interruzione Il valore predefinito è **`true`** .|

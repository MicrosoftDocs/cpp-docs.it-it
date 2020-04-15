---
title: Informazioni di riferimento sullo schema launch.vs.json
ms.date: 08/20/2019
helpviewer_keywords:
- launch.vs.json file [C++]
ms.openlocfilehash: ff4713642ab95a9bbc31f1a06236de459e53f9c3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323059"
---
# <a name="launchvsjson-schema-reference-c"></a>Informazioni di riferimento sullo schema launch.vs.json

Utilizzare il file *launch.vs.json* per configurare i parametri di debug. Per creare il file. Fare clic con il pulsante destro del mouse su un file eseguibile in **Esplora soluzioni** e scegliere **Impostazioni di debug e avvio**. Scegliere l'opzione che corrisponde maggiormente al progetto e quindi utilizzare le proprietà seguenti per modificare la configurazione in base alle esigenze. Per ulteriori informazioni sul debug di progetti CMake, vedere [Configure CMake debugging sessions](/cpp/build/configure-cmake-debugging-sessions).

## <a name="default-properties"></a>Proprietà predefinite

||||
|-|-|-|
|**Proprietà**|**Tipo**|**Descrizione**|
|`name`|string|Specifica il nome della voce nell'elenco a discesa Destinazione debug.|
|`type`|string|Specifica se il progetto è una dll o exe (impostazione predefinita è .exe)|
|`project`|string|Specifica il percorso relativo del file di progetto.|
|`projectTarget`|string|Specifica la destinazione facoltativa richiamata durante la compilazione `project`di . Deve `projectTarget` esistere già e corrispondere al nome nell'elenco a discesa **Destinazione debug.**|
|`debugType`|string|Specifica la modalità di debug in base al tipo di codice (nativo, gestito o misto). Questo verrà rilevato automaticamente a meno che questo parametro non sia impostato. Valori consentiti: "native", "managed", "mixed".|
|`inheritEnvironments`|array|Specifica un set di variabili di ambiente ereditate da più origini. È possibile definire alcune variabili in file come *CMakeSettings.json* o *CppProperties.json* e renderle disponibili per il contesto di debug.  **Visual Studio 16.4:** specificare le variabili di `env.VARIABLE_NAME` ambiente in base alla destinazione utilizzando la sintassi. Per annullare l'impostazione di una variabile, impostarla su "null".|
|`args`|array|Specifica gli argomenti della riga di comando passati al programma avviato.|
|`currentDir`|string|Specifica il percorso completo della directory della destinazione di compilazione. Questo verrà rilevato automaticamente a meno che questo parametro non sia impostato.|
|`noDebug`|boolean|Specifica se eseguire il debug del programma avviato. Il valore predefinito per `false` questo parametro è se non specificato.|
|`stopOnEntry`|boolean|Specifica se interrompere un'interruzione non appena viene avviato il processo e il debugger si connette. Il valore predefinito per `false`questo parametro è .|
|`remoteMachine`|string|Specifica il nome del computer remoto in cui viene avviato il programma.|
|`env`|array| Specifica un elenco chiave-valore di variabili di ambiente personalizzate. env: "myEnv":"myVal".|
|`portName`|string|Specifica il nome della porta quando ci si connette a un processo in esecuzione.|
|`buildConfigurations`|array| Coppia chiave-valore che specifica il nome della modalità di compilazione per applicare le configurazioni. Ad `Debug` esempio, `Release` o e le configurazioni da utilizzare in base alla modalità di compilazione selezionata.

## <a name="c-linux-properties"></a>Proprietà di C'è Linux

||||
|-|-|-|
|**Proprietà**|**Tipo**|**Descrizione**|
|`program`|string|Percorso completo per programmare l'eseguibile nel computer remoto. Quando si utilizza CMake, la macro `${debugInfo.fullTargetPath}` può essere utilizzata come valore di questo campo.|
|`processId`|integer|ID processo facoltativo a cui connettere il debugger.|
|`sourceFileMap`|object|Mapping di file di origine facoltativi passati al motore di debug. Formato: `{ "\<Compiler source location>": "\<Editor source location>" }` `{ "\<Compiler source location>": { "editorPath": "\<Editor source location>", "useForBreakpoints": true } }`o . Esempio: `{ "/home/user/foo": "C:\\foo" }` o `{ "/home/user/foo": { "editorPath": "c:\\foo", "useForBreakpoints": true } }`. Consultate [Opzioni mappa file di origine](#source_file_map_options).|
|`additionalProperties`|string|Uno dei sourceFileMapOptions. come illustrato più avanti.|
|`MIMode`|string|Indica il tipo di debugger della console abilitato per MI a cui si connetterà MIDebugEngine. I valori consentiti sono "gdb", "lldb".|
|`args`|array|Argomenti della riga di comando passati al programma.|
|`environment`|array|Variabili di ambiente da aggiungere all'ambiente per il programma. Ad esempio: [ : "nome": "squid", "value": "clam" - ].|
|`targetArchitecture`|string|Architettura dell'oggetto del debug. Questo verrà rilevato automaticamente a meno che questo parametro non sia impostato. I valori consentiti sono x86, braccio, braccio64, mips, x64, amd64, x86_64.|
|`visualizerFile`|string|.natvis da utilizzare durante il debug di questo processo. Questa opzione non è compatibile con la stampa graziosa GDB. Vedere "showDisplayString" se si utilizza questa impostazione.|
|`showDisplayString`|boolean|Quando viene specificato un visualizerFile, showDisplayString abiliterà la stringa di visualizzazione. L'attivazione di questa opzione può causare un miglioramento delle prestazioni durante il debug.|
|`remoteMachineName`|string|Il computer Linux remoto che ospita gdb e il programma di cui eseguire il debug. Usare Gestione connessioni per aggiungere nuovi computer Linux. Quando si utilizza CMake, la macro `${debugInfo.remoteMachineName}` può essere utilizzata come valore di questo campo.|
|`cwd`|string|La directory di lavoro della destinazione sul computer remoto. Quando si utilizza CMake, la macro `${debugInfo.defaultWorkingDirectory}` può essere utilizzata come valore di questo campo. Il valore predefinito è la radice dell'area di lavoro remota, a meno che non venga sottoposto a override nel file *CMakeLists.txt.*|
|`miDebuggerPath`|string|Percorso del debugger abilitato per MI (ad esempio gdb). Se non specificato, verrà innanzitutto la ricerca di PATH per il debugger.|
|`miDebuggerServerAddress`|string|Indirizzo di rete del server debugger abilitato all'interfaccia mire a cui connettersi. Esempio: localhost:1234.|
|`setupCommands`|array|Uno o più comandi GDB/LLDB da eseguire per configurare il debugger sottostante. Esempio: `"setupCommands": [ { "text": "-enable-pretty-printing", "description": "Enable GDB pretty printing", "ignoreFailures": true }]`. Consultate [Avviare i comandi di installazione.](#launch_setup_commands)|
|`customLaunchSetupCommands`|array|Se specificato, sostituisce i comandi predefiniti utilizzati per avviare una destinazione con altri comandi. Ad esempio, questo può essere "-target-attach" per connettersi a un processo di destinazione. Un elenco di comandi vuoto sostituisce i comandi di avvio con nulla, che può essere utile se il debugger viene fornito opzioni di avvio come opzioni della riga di comando. Esempio: `"customLaunchSetupCommands": [ { "text": "target-run", "description": "run target", "ignoreFailures": false }]`.|
|`launchCompleteCommand`|string|Comando da eseguire dopo che il debugger è stato completamente configurato, in modo da causare l'esecuzione del processo di destinazione. I valori consentiti sono "exec-run", "exec-continue", "None". Il valore predefinito è "exec-run".|
|`debugServerPath`|string|Percorso completo facoltativo del server di debug da avviare. Il valore predefinito è null.|
|`debugServerArgs`|string|Argomenti del server di debug facoltativi. Il valore predefinito è null.|
|`filterStderr`|boolean|Cercare nel flusso stderr il modello avviato dal server e registrare stderr per eseguire il debug dell'output. L'impostazione predefinita è `false`.|
|`coreDumpPath`|string|Percorso completo facoltativo di un file di dump principale per il programma specificato. Il valore predefinito è null.|
console esterna|boolean|Se true, viene avviata una console per l'oggetto del debug. Se `false`, non viene avviata alcuna console. L'impostazione predefinita è `false`. NOTA: questa opzione viene ignorata in alcuni casi per motivi tecnici.|
|`pipeTransport`|string|Se presente, ciò indica al debugger di connettersi a un computer remoto utilizzando un altro eseguibile come una pipe che invierà l'input/output standard tra Visual Studio e il debugger abilitato per MI (ad esempio gdb). Valori consentiti: una o più opzioni di [trasporto tubazioni](#pipe_transport_options).|

## <a name="launch-setup-commands"></a><a name="launch_setup_commands"></a>Avviare i comandi di configurazione

Utilizzato con `setupCommands` la proprietà:

||||
|-|-|-|
|`text`|string|Comando del debugger da eseguire.|
|`description`|string|Descrizione facoltativa per il comando.|
|`ignoreFailures`|boolean|Se true, gli errori del comando devono essere ignorati. L'impostazione predefinita è `false`.|

## <a name="pipe-transport-options"></a><a name = "pipe_transport_options"></a>Opzioni di trasporto delle tubazioni

Utilizzato con `pipeTransport` la proprietà:

||||
|-|-|-|
|`pipeCwd`|string|Percorso completo della directory di lavoro per il programma di tubazioni.|
|`pipeProgram`|string|Comando pipe completo da eseguire.|
|`pipeArgs`|array|Argomenti della riga di comando passati al programma pipe per configurare la connessione.|
|`debuggerPath`|string|Percorso completo del debugger nel computer di destinazione, ad esempio /usr/bin/gdb.|
|`pipeEnv`|object|Variabili di ambiente passate al programma pipe.|
|`quoteArgs`|boolean|Se singoli argomenti contengono caratteri (ad esempio spazi o tabulazioni), è necessario racchiuderne tra virgolette? Se `false`, il comando del debugger non verrà più citato automaticamente. Il valore predefinito è `true`.|

## <a name="source-file-map-options"></a><a name="source_file_map_options"></a>Opzioni mappa file di origine

Utilizzare con `sourceFileMap` la proprietà:

||||
|-|-|-|
|`editorPath`|string|Percorso del codice sorgente per l'editor da individuare.|
|`useForBreakpoints`|boolean|Quando si impostano i punti di interruzione, è necessario utilizzare questo mapping di origine. Se `false`, solo il nome del file e il numero di riga vengono utilizzati per l'impostazione dei punti di interruzione. Se `true`, i punti di interruzione verranno impostati con il percorso completo del file e del numero di riga solo quando viene utilizzato il mapping di origine. In caso contrario, durante l'impostazione dei punti di interruzione verranno utilizzati solo il nome del file e il numero di riga. Il valore predefinito è `true`.|

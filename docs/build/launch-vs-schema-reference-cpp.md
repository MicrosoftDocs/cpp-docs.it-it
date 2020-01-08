---
title: riferimento allo schema Launch. vs. JSONC++()
ms.date: 08/20/2019
helpviewer_keywords:
- launch.vs.json file [C++]
ms.openlocfilehash: 49b4f4e6c4359837e820684c29b0e102a08c3fd5
ms.sourcegitcommit: 6c1960089b92d007fc28c32af1e4bef0f85fdf0c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/31/2019
ms.locfileid: "75556643"
---
# <a name="launchvsjson-schema-reference-c"></a>riferimento allo schema Launch. vs. JSONC++()

Usare il file *Launch. vs. JSON* per configurare i parametri di debug. Per creare il file. fare clic con il pulsante destro del mouse su un file eseguibile in **Esplora soluzioni** e scegliere **debug e avvia Impostazioni**. Scegliere l'opzione che corrisponde maggiormente al progetto e quindi usare le proprietà seguenti per modificare la configurazione in base alle esigenze:

## <a name="default-properties"></a>Proprietà predefinite

||||
|-|-|-|
|**Property**|**Type**|**Descrizione**|
|`name`|string|Specifica il nome della voce nell'elenco a discesa della destinazione di debug.|
|`type`|string|Specifica se il progetto è un file dll o exe (il valore predefinito è exe)|
|`project`|string|Specifica il percorso relativo del file di progetto.|
|`projectTarget`|string|Specifica la destinazione facoltativa richiamata quando si compila `project`. Questo `projectTarget` deve esistere già e corrispondere al nome nell'elenco a discesa **destinazione di debug** .|
|`debugType`|string|Specifica la modalità di debug in base al tipo di codice (nativo, gestito o misto). Questa funzione verrà rilevata automaticamente a meno che non sia impostato il parametro. Valori consentiti: "native", "Managed", "mixed".|
|`inheritEnvironments`|Matrice di oggetti .|Specifica un set di variabili di ambiente ereditate da più origini. È possibile definire alcune variabili nei file come *CMakeSettings. JSON* o *CppProperties. JSON* e renderli disponibili per il contesto di debug.  **Visual Studio 16,4:** : specificare le variabili di ambiente per ogni singola destinazione usando la sintassi del `env.VARIABLE_NAME`. Per annullare una variabile, impostarla su "null".|
|`args`|Matrice di oggetti .|Specifica gli argomenti della riga di comando passati al programma avviato.|
|`currentDir`|string|Specifica il percorso completo della directory della destinazione di compilazione. Questa funzione verrà rilevata automaticamente a meno che non sia impostato il parametro.|
|`noDebug`|boolean|Specifica se eseguire il debug del programma avviato. Il valore predefinito per questo parametro è `false` se non è specificato.|
|`stopOnEntry`|boolean|Consente di specificare se interrompere l'operazione subito dopo l'avvio del processo e la connessione del debugger. Il valore predefinito per questo parametro è `false`.|
|`remoteMachine`|string|Specifica il nome del computer remoto in cui viene avviato il programma.|
|`env`|Matrice di oggetti .| Specifica un elenco di valori chiave-valore di variabili di ambiente personalizzate. ENV: {"myEnv": "myVal"}.|
|`portName`|string|Specifica il nome della porta durante la connessione a un processo in esecuzione.|
|`buildConfigurations`|Matrice di oggetti .| Coppia chiave-valore che specifica il nome della modalità di compilazione per l'applicazione delle configurazioni. Ad esempio, `Debug` o `Release` e le configurazioni da usare in base alla modalità di compilazione selezionata.

## <a name="c-linux-properties"></a>C++Proprietà di Linux

||||
|-|-|-|
|**Property**|**Type**|**Descrizione**|
|`program`|string|Percorso completo dell'eseguibile del programma nel computer remoto. Quando si usa CMake, è possibile usare la macro `${debugInfo.fullTargetPath}` come valore di questo campo.|
|`processId`|numero intero|ID processo facoltativo a cui connettersi il debugger.|
|`sourceFileMap`|Oggetto di|Mapping dei file di origine facoltativi passati al motore di debug. Formato: `{ "\<Compiler source location>": "\<Editor source location>" }` o `{ "\<Compiler source location>": { "editorPath": "\<Editor source location>", "useForBreakpoints": true } }`. Esempio: `{ "/home/user/foo": "C:\\foo" }` o `{ "/home/user/foo": { "editorPath": "c:\\foo", "useForBreakpoints": true } }`. Vedere [Opzioni mappa file di origine](#source_file_map_options).|
|`additionalProperties`|string|Uno degli sourceFileMapOptions. come illustrato più avanti.|
|`MIMode`|string|Indica il tipo di debugger della console abilitato per MI a cui si connetterà MIDebugEngine. I valori consentiti sono "GDB", "LLDB".|
|`args`|Matrice di oggetti .|Argomenti della riga di comando passati al programma.|
|`environment`|Matrice di oggetti .|Variabili di ambiente da aggiungere all'ambiente per il programma. Esempio: [{"Name": "squid", "value": "Clam"}].|
|`targetArchitecture`|string|Architettura dell'oggetto del debug. Questa funzione verrà rilevata automaticamente a meno che non sia impostato il parametro. I valori consentiti sono x86, ARM, ARM64, MIPS, x64, amd64, x86_64.|
|`visualizerFile`|string|file con estensione natvis da utilizzare durante il debug del processo. Questa opzione non è compatibile con la stampa di GDB. Se si usa questa impostazione, vedere "showDisplayString".|
|`showDisplayString`|boolean|Quando si specifica visualizerFile, showDisplayString Abilita la stringa di visualizzazione. L'attivazione di questa opzione può causare un rallentamento delle prestazioni durante il debug.|
|`remoteMachineName`|string|Il computer Linux remoto che ospita gdb e il programma di cui eseguire il debug. Usare Gestione connessioni per aggiungere nuovi computer Linux. Quando si usa CMake, è possibile usare la macro `${debugInfo.remoteMachineName}` come valore di questo campo.|
|`cwd`|string|Directory di lavoro della destinazione nel computer remoto. Quando si usa CMake, è possibile usare la macro `${debugInfo.defaultWorkingDirectory}` come valore di questo campo. Il valore predefinito è la radice dell'area di lavoro remota, a meno che non sia sottoposto a override nel file *CMakeLists. txt* .|
|`miDebuggerPath`|string|Percorso del debugger abilitato per MI, ad esempio gdb. Quando non viene specificato, il percorso di ricerca viene innanzitutto cercato per il debugger.|
|`miDebuggerServerAddress`|string|Indirizzo di rete del server debugger abilitato per la connessione a. Esempio: localhost: 1234.|
|`setupCommands`|Matrice di oggetti .|Uno o più comandi GDB/LLDB da eseguire per configurare il debugger sottostante. Esempio: `"setupCommands": [ { "text": "-enable-pretty-printing", "description": "Enable GDB pretty printing", "ignoreFailures": true }]`. Vedere [avviare i comandi di installazione](#launch_setup_commands).|
|`customLaunchSetupCommands`|Matrice di oggetti .|Se specificato, sostituisce i comandi predefiniti usati per avviare una destinazione con altri comandi. Ad esempio, può essere "-target-alleghi" per potersi allungare a un processo di destinazione. Un elenco di comandi vuoto sostituisce i comandi Launch con Nothing, che può essere utile se al debugger vengono fornite opzioni di avvio come opzioni della riga di comando. Esempio: `"customLaunchSetupCommands": [ { "text": "target-run", "description": "run target", "ignoreFailures": false }]`.|
|`launchCompleteCommand`|string|Il comando da eseguire dopo la configurazione completa del debugger determina l'esecuzione del processo di destinazione. I valori consentiti sono "Exec-Run", "Exec-continue", "None". Il valore predefinito è "Exec-Run".|
|`debugServerPath`|string|Percorso completo facoltativo del server di debug da avviare. Il valore predefinito è null.|
|`debugServerArgs`|string|Argomenti facoltativi del server di debug. Il valore predefinito è null.|
|`filterStderr`|boolean|Cercare il modello avviato dal server e il registro stderr per eseguire il debug dell'output. Il valore predefinito è `false`.|
|`coreDumpPath`|string|Percorso completo facoltativo di un file di dump di base per il programma specificato. Il valore predefinito è null.|
externalConsole|boolean|Se true, viene avviata una console per l'oggetto del debug. Se `false`, non viene avviata alcuna console. Il valore predefinito è `false`. Nota: questa opzione viene ignorata in alcuni casi per motivi tecnici.|
|`pipeTransport`|string|Quando è presente, indica al debugger di connettersi a un computer remoto usando un altro eseguibile come pipe che inoltra l'input/output standard tra Visual Studio e il debugger abilitato per MI, ad esempio gdb. Valori consentiti: una o più [Opzioni di trasporto della pipe](#pipe_transport_options).|


## <a name="launch_setup_commands"></a>Avviare i comandi di installazione

Utilizzato con la proprietà `setupCommands`:

||||
|-|-|-|
|`text`|string|Comando del debugger da eseguire.|
|`description`|string|Descrizione facoltativa del comando.|
|`ignoreFailures`|boolean|Se true, gli errori del comando devono essere ignorati. Il valore predefinito è `false`.|

## <a name = "pipe_transport_options"></a>Opzioni di trasporto pipe

Utilizzato con la proprietà `pipeTransport`:

||||
|-|-|-|
|`pipeCwd`|string|Percorso completo della directory di lavoro per il programma pipe.|
|`pipeProgram`|string|Comando pipe completo da eseguire.|
|`pipeArgs`|Matrice di oggetti .|Argomenti della riga di comando passati al programma pipe per configurare la connessione.|
|`debuggerPath`|string|Percorso completo del debugger nel computer di destinazione, ad esempio/usr/bin/gdb.|
|`pipeEnv`|Oggetto di|Variabili di ambiente passate al programma pipe.|
|`quoteArgs`|boolean|Se i singoli argomenti contengono caratteri (ad esempio spazi o tabulazioni), devono essere racchiusi tra virgolette? Se `false`, il comando del debugger non verrà più racchiuso tra virgolette. Il valore predefinito è `true`.|

## <a name="source_file_map_options"></a>Opzioni mapping file di origine

Utilizzare con la proprietà `sourceFileMap`:

||||
|-|-|-|
|`editorPath`|string|Posizione del codice sorgente per l'editor da individuare.|
|`useForBreakpoints`|boolean|Quando si impostano punti di interruzione, è necessario utilizzare questo mapping di origine. Se `false`, per l'impostazione dei punti di interruzione vengono utilizzati solo il nome file e il numero di riga. Se `true`, i punti di interruzione verranno impostati con il percorso completo del file e il numero di riga solo quando viene utilizzato il mapping di origine. In caso contrario, verranno utilizzati solo il nome file e il numero di riga durante l'impostazione di punti di interruzione Il valore predefinito è `true`.|

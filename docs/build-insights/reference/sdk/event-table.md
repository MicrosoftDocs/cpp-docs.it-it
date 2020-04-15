---
title: 'SDK di Build Insights: tabella degli eventi'
description: Informazioni di riferimento per gli eventi per l'SDK di Visual Studio per le informazioni dettagliate sulla compilazione in Visual Studio
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Events
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 932b78347e05d313e7962da2fdff8c3454dec963
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324128"
---
# <a name="c-build-insights-sdk-event-table"></a>SDK di Build Insights: tabella degli eventi

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

## <a name="compiler-events"></a>Eventi del compilatoreCompiler events

[Compilatore](#compiler)\
[COMMAND_LINE](#command-line)\
[ENVIRONMENT_VARIABLE](#environment-variable)\
[FILE_INPUT](#file-input)\
[OBJ_OUTPUT](#obj-output)\
[FRONT_END_PASS](#front-end-pass)\
[BACK_END_PASS](#back-end-pass)

## <a name="compiler-front-end-events"></a>Eventi front-end del compilatoreCompiler front-end events

[C1_DLL](#c1-dll)\
[FRONT_END_FILE](#front-end-file)\
[TEMPLATE_INSTANTIATION](#template-instantiation)\
[SYMBOL_NAME](#symbol-name)

## <a name="compiler-back-end-events"></a>Eventi back-end del compilatoreCompiler back-end events

[C2_DLL](#c2-dll)\
[WHOLE_PROGRAM_ANALYSIS](#whole-program-analysis)\
[TOP_DOWN](#top-down)\
[BOTTOM_UP](#bottom-up)\
[CODE_GENERATION](#code-generation)\
[Thread](#thread)\
[Funzione](#function)\
[FORCE_INLINEE](#force-inlinee)

## <a name="linker-events"></a>Eventi del linker

[Linker](#linker)\
[COMMAND_LINE](#command-line)\
[ENVIRONMENT_VARIABLE](#environment-variable)\
[FILE_INPUT](#file-input)\
[EXECUTABLE_IMAGE_OUTPUT](#executable-image-output)\
[EXP_OUTPUT](#exp-output)\
[IMP_LIB_OUTPUT](#imp-lib-output)\
[LIB_OUTPUT](#lib-output)\
[PASS1](#pass1)\
[PRE_LTCG_OPT_REF](#pre-ltcg-opt-ref)\
[LTCG (InviETG)](#ltcg)\
[OPT_REF](#opt-ref)\
[OPT_ICF](#opt-icf)\
[OPT_LBR](#opt-lbr)\
[Pass2](#pass2)

## <a name="event-table"></a>Tabella eventi

| Event | Proprietà | Descrizione |
|--|--|--|
| <a name="back-end-pass"></a>BACK_END_PASS | Type | Attività |
|  | Parents | [Compilatore](#compiler) |
|  | Children | [C2_DLL](#c2-dll) |
|  | Proprietà | - Percorso assoluto del file di origine di input- Absolute path to input source file<br/>- Percorso assoluto del file oggetto di output |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[CompilatorePassCompilerPass](cpp-event-data-types/compiler-pass.md)<br/>[BackEndPass](cpp-event-data-types/back-end-pass.md) |
|  | Descrizione | Si verifica all'inizio e all'arresto del passaggio back-end del compilatore. Questo passaggio è responsabile dell'ottimizzazione del codice sorgente C/C' analizzato e della conversione in codice macchina. |
| <a name="bottom-up"></a>BOTTOM_UP | Type | Attività |
|  | Parents | [WHOLE_PROGRAM_ANALYSIS](#whole-program-analysis) |
|  | Children | nessuno |
|  | Proprietà | nessuno |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[Basso Verso l'alto](cpp-event-data-types/bottom-up.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto dell'intero passaggio dal basso verso l'alto dell'analisi del programma. |
| <a name="c1-dll"></a>C1_DLL | Type | Attività |
|  | Parents | [FRONT_END_PASS](#front-end-pass) |
|  | Children | [FRONT_END_FILE](#front-end-file)<br/>[SYMBOL_NAME](#symbol-name)<br/>[TEMPLATE_INSTANTIATION](#template-instantiation) |
|  | Proprietà | nessuno |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[DLL](cpp-event-data-types/c1-dll.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto di una chiamata *c1.dll* o *c1xx.dll.* Queste DLL sono il front-end C e C. Vengono richiamati esclusivamente dal driver del compilatore (*cl.exe*). |
| <a name="c2-dll"></a>C2_DLL | Type | Attività |
|  | Parents | [BACK_END_PASS](#back-end-pass)<br/>[LTCG (InviETG)](#ltcg) |
|  | Children | [CODE_GENERATION](#code-generation)<br/>[WHOLE_PROGRAM_ANALYSIS](#whole-program-analysis) |
|  | Proprietà | nessuno |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[DLL C2](cpp-event-data-types/c2-dll.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto di una chiamata *c2.dll.* Questa DLL è il back-end del compilatore. Viene chiamato dal driver del compilatore (*cl.exe*). Viene inoltre richiamato dal linker (*link.exe*) quando viene utilizzata la generazione di codice in fase di collegamento. |
| <a name="code-generation"></a>CODE_GENERATION | Type | Attività |
|  | Parents | [C2_DLL](#c2-dll) |
|  | Children | [Funzione](#function)<br/>[Thread](#thread) |
|  | Proprietà | nessuno |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[CodeGeneration](cpp-event-data-types/code-generation.md) |
|  | Descrizione | Si verifica all'inizio e all'arresto della fase di generazione del codice del back-end. |
| <a name="command-line"></a>COMMAND_LINE | Type | Evento semplice |
|  | Parents | [Compilatore](#compiler)<br/>[Linker](#linker) |
|  | Children | nessuno |
|  | Proprietà | - La riga di comando utilizzata per richiamare *cl.exe* o *link.exe* |
|  | Acquisire classi | [Evento semplice](cpp-event-data-types/simple-event.md)<br/>[Commandline](cpp-event-data-types/command-line.md) |
|  | Descrizione | Si verifica quando il compilatore e il linker vengono completati la valutazione della riga di comando. La riga di comando valutata include tutti i parametri *cl.exe* e *link.exe* passati tramite un file di risposta. Include inoltre parametri per *cl.exe* e *link.exe* passati \_tramite\_variabili di \_\_ambiente quali CL, CL, LINK e LINK . |
| <a name="compiler"></a>Compilatore | Type | Attività |
|  | Parents | nessuno |
|  | Children | [BACK_END_PASS](#back-end-pass)<br/>[COMMAND_LINE](#command-line)<br/>[ENVIRONMENT_VARIABLE](#environment-variable)<br/>[FILE_INPUT](#file-input)<br/>[OBJ_OUTPUT](#obj-output)<br/>[FRONT_END_PASS](#front-end-pass) |
|  | Proprietà | - Versione del compilatore<br/>- Directory di lavoro<br/>- Percorso assoluto del *file cl.exe* richiamato |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[Chiamata](cpp-event-data-types/invocation.md)<br/>[Compilatore](cpp-event-data-types/compiler.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto di una chiamata *a cl.exe.* |
| <a name="environment-variable"></a>ENVIRONMENT_VARIABLE | Type | Evento semplice |
|  | Parents | [Compilatore](#compiler)<br/>[Linker](#linker) |
|  | Children | nessuno |
|  | Proprietà | - Il nome della variabile di ambiente<br/>- Il valore della variabile di ambiente. |
|  | Acquisire classi | [Evento semplice](cpp-event-data-types/simple-event.md)<br/>[EnvironmentVariable](cpp-event-data-types/environment-variable.md) |
|  | Descrizione | Si verifica una volta per ogni variabile di ambiente esistente al momento in cui viene richiamato *cl.exe* o *link.exe.* |
| <a name="executable-image-output"></a>EXECUTABLE_IMAGE_OUTPUT | Type | Evento semplice |
|  | Parents | [Linker](#linker) |
|  | Children | nessuno |
|  | Proprietà | - Il percorso assoluto di una DLL o di un file di output eseguibile. |
|  | Acquisire classi | [Evento semplice](cpp-event-data-types/simple-event.md)<br/>[FileOutput](cpp-event-data-types/file-output.md)<br/>[ExecutableImageOutput](cpp-event-data-types/executable-image-output.md) |
|  | Descrizione | Si verifica quando uno degli input del linker è una DLL o un file di immagine eseguibile. |
| <a name="exp-output"></a>EXP_OUTPUT | Type | Evento semplice |
|  | Parents | [Linker](#linker) |
|  | Children | nessuno |
|  | Proprietà | - Il percorso assoluto di un file di output *.exp.* |
|  | Acquisire classi | [Evento semplice](cpp-event-data-types/simple-event.md)<br/>[FileOutput](cpp-event-data-types/file-output.md)<br/>[ExpOutput (ExpOutput)](cpp-event-data-types/exp-output.md) |
|  | Descrizione | Si verifica quando uno degli output del linker è un file *exp.* |
| <a name="file-input"></a>FILE_INPUT | Type | Evento semplice |
|  | Parents | [Compilatore](#compiler)<br/>[Linker](#linker) |
|  | Children | nessuno |
|  | Proprietà | - Il percorso assoluto del file di input<br/>- Il tipo di file di input |
|  | Acquisire classi | [Evento semplice](cpp-event-data-types/simple-event.md)<br/>[FileInput](cpp-event-data-types/file-input.md) |
|  | Descrizione | Si verifica per annunciare un input *cl.exe* o *link.exe.* |
| <a name="force-inlinee"></a>FORCE_INLINEE | Type | Evento semplice |
|  | Parents | [Funzione](#function) |
|  | Children | nessuno |
|  | Proprietà | - Il nome della funzione forzata.<br/>- La dimensione della funzione forzata, rappresentata come conteggio di istruzioni intermedie. |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[ForzaInlinee](cpp-event-data-types/force-inlinee.md) |
|  | Descrizione | Si verifica quando una funzione viene forzata in un'altra funzione tramite l'utilizzo della parola `__forceinline` chiave . |
| <a name="front-end-file"></a>FRONT_END_FILE | Type | Attività |
|  | Parents | [C1_DLL](#c1-dll)<br/>[FRONT_END_FILE](#front-end-file) |
|  | Children | [FRONT_END_FILE](#front-end-file)<br/>[TEMPLATE_INSTANTIATION](#template-instantiation) |
|  | Proprietà | - Percorso assoluto del file. |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[File FrontEnd](cpp-event-data-types/front-end-file.md) |
|  | Descrizione | Si verifica quando il front-end del compilatore inizia e interrompe l'elaborazione di un file. Questo evento è ricorsivo. La ricorsione si verifica quando il front-end analizza i file inclusi. |
| <a name="front-end-pass"></a>FRONT_END_PASS | Type | Attività |
|  | Parents | [Compilatore](#compiler) |
|  | Children | [C1_DLL](#c1-dll) |
|  | Proprietà | - Percorso assoluto del file di origine di input- Absolute path to input source file<br/>- Percorso assoluto del file oggetto di output |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[CompilatorePassCompilerPass](cpp-event-data-types/compiler-pass.md)<br/>[FrontEndPass](cpp-event-data-types/front-end-pass.md) |
|  | Descrizione | Si verifica all'inizio e all'arresto del passaggio front-end del compilatore. Questo passaggio è responsabile dell'analisi del codice sorgente C/C, e della conversione in linguaggio intermedio. |
| <a name="function"></a>Funzione | Type | Attività |
|  | Parents | [CODE_GENERATION](#code-generation)<br/>[Thread](#thread)<br/>[TOP_DOWN](#top-down) |
|  | Children | [FORCE_INLINEE](#force-inlinee) |
|  | Proprietà | - Nome della funzione |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[Funzione](cpp-event-data-types/function.md) |
|  | Descrizione | Si verifica quando si avvia e termina la generazione del codice per una funzione. |
| <a name="imp-lib-output"></a>IMP_LIB_OUTPUT | Type | Evento semplice |
|  | Parents | [Linker](#linker) |
|  | Children | nessuno |
|  | Proprietà | - Il percorso assoluto di un file di output della libreria di importazione. |
|  | Acquisire classi | [Evento semplice](cpp-event-data-types/simple-event.md)<br/>[FileOutput](cpp-event-data-types/file-output.md)<br/>[ImpLibOutput](cpp-event-data-types/imp-lib-output.md) |
|  | Descrizione | Si verifica quando uno degli output del linker è una libreria di importazione. |
| <a name="lib-output"></a>LIB_OUTPUT | Type | Evento semplice |
|  | Parents | [Linker](#linker) |
|  | Children | nessuno |
|  | Proprietà | - Il percorso assoluto di un file di output della libreria statica. |
|  | Acquisire classi | [Evento semplice](cpp-event-data-types/simple-event.md)<br/>[FileOutput](cpp-event-data-types/file-output.md)<br/>[LibOutput (informazioni in base all'](cpp-event-data-types/lib-output.md) |
|  | Descrizione | Si verifica quando uno degli output del linker è una libreria statica. |
| <a name="linker"></a>Linker | Type | Attività |
|  | Parents | nessuno |
|  | Children | [COMMAND_LINE](#command-line)<br/>[ENVIRONMENT_VARIABLE](#environment-variable)<br/>[EXECUTABLE_IMAGE_OUTPUT](#executable-image-output)<br/>[EXP_OUTPUT](#exp-output)<br/>[FILE_INPUT](#file-input)<br/>[IMP_LIB_OUTPUT](#imp-lib-output)<br/>[LIB_OUTPUT](#lib-output)<br/>[PASS1](#pass1)<br/>[Pass2](#pass2) |
|  | Proprietà | - Versione del linker<br/>- Directory di lavoro<br/>- Percorso assoluto del *link.exe* richiamato |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[Chiamata](cpp-event-data-types/invocation.md)<br/>[Linker](cpp-event-data-types/linker.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto di una chiamata *a link.exe.* |
| <a name="ltcg"></a>LTCG (InviETG) | Type | Attività |
|  | Parents | [PASS1](#pass1) |
|  | Children | [C2_DLL](#c2-dll) |
|  | Proprietà | nessuno |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[LTCG (InviETG)](cpp-event-data-types/ltcg.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto della generazione del codice in fase di collegamento. |
| <a name="obj-output"></a>OBJ_OUTPUT | Type | Evento semplice |
|  | Parents | [Compilatore](#compiler) |
|  | Children | nessuno |
|  | Proprietà | - Il percorso assoluto del file di output *.obj* |
|  | Acquisire classi | [Evento semplice](cpp-event-data-types/simple-event.md)<br/>[FileOutput](cpp-event-data-types/file-output.md)<br/>[ObjOutput](cpp-event-data-types/obj-output.md) |
|  | Descrizione | Si verifica una volta per ogni output *obj* prodotto da *cl.exe*. |
| <a name="opt-icf"></a>OPT_ICF | Type | Attività |
|  | Parents | [PASS1](#pass1) |
|  | Children | nessuno |
|  | Proprietà | nessuno |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[OptICF](cpp-event-data-types/opt-icf.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto dell'identica ottimizzazione del linker di piegatura COMDAT (/OPT:ICF). |
| <a name="opt-lbr"></a>OPT_LBR | Type | Attività |
|  | Parents | [PASS1](#pass1) |
|  | Children | nessuno |
|  | Proprietà | nessuno |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[OptLBR](cpp-event-data-types/opt-lbr.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto dell'ottimizzazione del linker del ramo lungo (/OPT:LBR). |
| <a name="opt-ref"></a>OPT_REF | Type | Attività |
|  | Parents | [PASS1](#pass1) |
|  | Children | nessuno |
|  | Proprietà | nessuno |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[OptRef (opzione di riferimento)](cpp-event-data-types/opt-ref.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto delle funzioni senza riferimenti e dell'ottimizzazione del linker di eliminazione dei dati (/OPT:REF). |
| <a name="pass1"></a>PASS1 | Type | Attività |
|  | Parents | [Linker](#linker) |
|  | Children | [LTCG (InviETG)](#ltcg)<br/>[OPT_ICF](#opt-icf)<br/>[OPT_LBR](#opt-lbr)<br/>[OPT_REF](#opt-ref) |
|  | Proprietà | nessuno |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[Passaggio1](cpp-event-data-types/pass1.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto del passaggio 1 del linker. |
| <a name="pass2"></a>Pass2 | Type | Attività |
|  | Parents | [Linker](#linker) |
|  | Children | nessuno |
|  | Proprietà | nessuno |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[Passaggio2](cpp-event-data-types/pass2.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto del passaggio 2 del linker. |
| <a name="pre-ltcg-opt-ref"></a>PRE_LTCG_OPT_REF | Type | Attività |
|  | Parents | [PASS1](#pass1) |
|  | Children | nessuno |
|  | Proprietà | nessuno |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[PreLTCGOptRef (preLTCGOptRef)](cpp-event-data-types/pre-ltcg-opt-ref.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto del passaggio di ottimizzazione del linker che elimina i dati e le funzioni senza riferimenti (/OPT:REF). Questa operazione viene eseguita prima della generazione di codice in fase di collegamento. |
| <a name="symbol-name"></a>SYMBOL_NAME | Type | Evento semplice |
|  | Parents | [C1_DLL](#c1-dll) |
|  | Children | nessuno |
|  | Proprietà | - Un tasto di tipo<br/> - Il nome del tipo |
|  | Acquisire classi | [Evento semplice](cpp-event-data-types/simple-event.md)<br/>[NomeSimbolo](cpp-event-data-types/symbol-name.md) |
|  | Descrizione | Si verifica alla fine del passaggio front-end: una volta per ogni tipo coinvolto nelle istanze del modello. La chiave è un identificatore numerico per il tipo, mentre il nome è la rappresentazione testuale. Le chiavi di tipo sono univoche all'interno della traccia analizzata. Tuttavia, chiavi diverse provenienti da passaggi front-end del compilatore diverso possono puntare allo stesso tipo. Il confronto dei tipi tra passaggi front-end del compilatore diverso richiede l'utilizzo dei relativi nomi. SYMBOL_NAME eventi vengono generati alla fine di un passaggio front-end del compilatore, dopo che sono state eseguite tutte le istanze del modello. |
| <a name="template-instantiation"></a>TEMPLATE_INSTANTIATION | Type | Attività |
|  | Parents | [C1_DLL](#c1-dll)<br/>[FRONT_END_FILE](#front-end-file)<br/>[TEMPLATE_INSTANTIATION](#template-instantiation) |
|  | Children | [TEMPLATE_INSTANTIATION](#template-instantiation) |
|  | Proprietà | - La chiave per il tipo specializzato<br/>- La chiave per il tipo di modello primario- The key for the primary template's type<br/>- Il tipo di modello di cui è stata creata un'istanza- The kind of template that was instantiated |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[ModelloInstantiation (Creazione guidata)](cpp-event-data-types/template-instantiation.md) |
|  | Descrizione | Si verifica all'inizio e alla fine della creazione di un'istanza di modello. Viene creata un'istanza `vector`di un tipo di modello primario `std::vector<int>`(ad esempio ), generando un tipo specializzato , ad esempio . Viene fornita una chiave per entrambi i tipi. Utilizzare l'evento [SYMBOL_NAME](#symbol-name) per convertire una chiave nel nome del tipo. Le chiavi di tipo sono univoche all'interno della traccia analizzata. Tuttavia, chiavi diverse provenienti da passaggi front-end del compilatore diverso possono puntare allo stesso tipo. Il confronto dei tipi tra passaggi front-end del compilatore diverso richiede l'utilizzo di nomi di simboli. Questo evento è ricorsivo. La ricorsione si verifica in alcuni casi quando il front-end crea un'istanza di modelli annidati. |
| <a name="thread"></a>Thread | Type | Attività |
|  | Parents | [CODE_GENERATION](#code-generation)<br/>[TOP_DOWN](#top-down) |
|  | Children | [Funzione](#function) |
|  | Proprietà | nessuno |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[Thread](cpp-event-data-types/thread.md) |
|  | Descrizione | Si verifica all'inizio e alla fine dell'esecuzione di un thread back-end del compilatore. Un thread sospeso viene considerato terminato. Un filo che viene svegliato è considerato avviato. |
| <a name="top-down"></a>TOP_DOWN | Type | Attività |
|  | Parents | [WHOLE_PROGRAM_ANALYSIS](#whole-program-analysis) |
|  | Children | [Funzione](#function)<br/>[Thread](#thread) |
|  | Proprietà | nessuno |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[Dall'alto verso il basso](cpp-event-data-types/top-down.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto dell'intero passaggio dall'alto verso il basso dell'analisi del programma. |
| <a name="whole-program-analysis"></a>WHOLE_PROGRAM_ANALYSIS | Type | Attività |
|  | Parents | [C2_DLL](#c2-dll) |
|  | Children | [BOTTOM_UP](#bottom-up)<br/>[TOP_DOWN](#top-down) |
|  | Proprietà | nessuno |
|  | Acquisire classi | [Attività](cpp-event-data-types/activity.md)<br/>[Analisi dell'intero programma](cpp-event-data-types/whole-program-analysis.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto dell'intero programma di analisi della generazione del codice in fase di collegamento. |

::: moniker-end

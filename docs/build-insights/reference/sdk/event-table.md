---
title: 'C++ Build Insights SDK: tabella eventi'
description: Guida di riferimento agli eventi per Visual Studio C++ Build Insights SDK
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Events
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 2a6270e8e166bb38754314fcb308b86232dbb68b
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92922912"
---
# <a name="c-build-insights-sdk-event-table"></a>C++ Build Insights SDK: tabella eventi

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

## <a name="compiler-events"></a>Eventi del compilatore

[COMPILATORE](#compiler)\
[COMMAND_LINE](#command-line)\
[ENVIRONMENT_VARIABLE](#environment-variable)\
[FILE_INPUT](#file-input)\
[OBJ_OUTPUT](#obj-output)\
[FRONT_END_PASS](#front-end-pass)\
[BACK_END_PASS](#back-end-pass)

## <a name="compiler-front-end-events"></a>Eventi front-end del compilatore

[C1_DLL](#c1-dll)\
[FRONT_END_FILE](#front-end-file)\
[TEMPLATE_INSTANTIATION](#template-instantiation)\
[SYMBOL_NAME](#symbol-name)

## <a name="compiler-back-end-events"></a>Eventi back-end del compilatore

[C2_DLL](#c2-dll)\
[WHOLE_PROGRAM_ANALYSIS](#whole-program-analysis)\
[TOP_DOWN](#top-down)\
[BOTTOM_UP](#bottom-up)\
[CODE_GENERATION](#code-generation)\
[THREAD](#thread)\
[FUNZIONE](#function)\
[FORCE_INLINEE](#force-inlinee)

## <a name="linker-events"></a>Eventi del linker

[LINKER](#linker)\
[COMMAND_LINE](#command-line)\
[ENVIRONMENT_VARIABLE](#environment-variable)\
[FILE_INPUT](#file-input)\
[EXECUTABLE_IMAGE_OUTPUT](#executable-image-output)\
[EXP_OUTPUT](#exp-output)\
[IMP_LIB_OUTPUT](#imp-lib-output)\
[LIB_OUTPUT](#lib-output)\
[PASS1](#pass1)\
[PRE_LTCG_OPT_REF](#pre-ltcg-opt-ref)\
[LTCG](#ltcg)\
[OPT_REF](#opt-ref)\
[OPT_ICF](#opt-icf)\
[OPT_LBR](#opt-lbr)\
[PASS2](#pass2)

## <a name="event-table"></a>Tabella eventi

| Event | Proprietà | Descrizione |
|--|--|--|
| <a name="back-end-pass"></a> BACK_END_PASS | Type | Attività |
|  | Parents | [COMPILATORE](#compiler) |
|  | Children | [C2_DLL](#c2-dll) |
|  | Proprietà | -Percorso assoluto del file di origine di input<br/>-Percorso assoluto del file oggetto di output |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[CompilerPass](cpp-event-data-types/compiler-pass.md)<br/>[BackEndPass](cpp-event-data-types/back-end-pass.md) |
|  | Descrizione | Si verifica all'inizio e all'arresto del passaggio del back-end del compilatore. Questo passaggio è responsabile dell'ottimizzazione del codice sorgente C/C++ analizzato e della relativa conversione nel codice del computer. |
| <a name="bottom-up"></a> BOTTOM_UP | Type | Attività |
|  | Parents | [WHOLE_PROGRAM_ANALYSIS](#whole-program-analysis) |
|  | Children | nessuno |
|  | Proprietà | nessuno |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[BottomUp](cpp-event-data-types/bottom-up.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto dell'intero passaggio di completamento dell'analisi del programma. |
| <a name="c1-dll"></a> C1_DLL | Type | Attività |
|  | Parents | [FRONT_END_PASS](#front-end-pass) |
|  | Children | [FRONT_END_FILE](#front-end-file)<br/>[SYMBOL_NAME](#symbol-name)<br/>[TEMPLATE_INSTANTIATION](#template-instantiation) |
|  | Proprietà | nessuno |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[C1DLL](cpp-event-data-types/c1-dll.md) |
|  | Descrizione | Si verifica all'inizio e all'arresto di una chiamata di *c1.dll* o *c1xx.dll* . Queste dll sono il front-end C e C++ del compilatore. Vengono richiamati solo dal driver del compilatore ( *cl.exe* ). |
| <a name="c2-dll"></a> C2_DLL | Type | Attività |
|  | Parents | [BACK_END_PASS](#back-end-pass)<br/>[LTCG](#ltcg) |
|  | Children | [CODE_GENERATION](#code-generation)<br/>[WHOLE_PROGRAM_ANALYSIS](#whole-program-analysis) |
|  | Proprietà | nessuno |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[C2DLL](cpp-event-data-types/c2-dll.md) |
|  | Descrizione | Si verifica all'inizio e all'arresto di una chiamata di *c2.dll* . Questa DLL è il back-end del compilatore. Viene chiamato dal driver del compilatore ( *cl.exe* ). Viene richiamato anche dal linker ( *link.exe* ) quando viene utilizzata la generazione di codice in fase di collegamento. |
| <a name="code-generation"></a> CODE_GENERATION | Type | Attività |
|  | Parents | [C2_DLL](#c2-dll) |
|  | Children | [FUNZIONE](#function)<br/>[THREAD](#thread) |
|  | Proprietà | nessuno |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[CodeGeneration](cpp-event-data-types/code-generation.md) |
|  | Descrizione | Si verifica all'inizio e all'arresto della fase di generazione del codice del back-end. |
| <a name="command-line"></a> COMMAND_LINE | Type | Evento semplice |
|  | Parents | [COMPILATORE](#compiler)<br/>[LINKER](#linker) |
|  | Children | nessuno |
|  | Proprietà | : La riga di comando utilizzata per richiamare *cl.exe* o *link.exe* |
|  | Acquisisci classi | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[CommandLine](cpp-event-data-types/command-line.md) |
|  | Descrizione | Si verifica quando il compilatore e il linker vengono eseguiti valutando la riga di comando. La riga di comando valutata include tutti i parametri *cl.exe* e *link.exe* passati tramite un file di risposta. Include anche parametri per *cl.exe* e *link.exe* passati tramite le variabili di ambiente, ad esempio CL, \_ CL \_ , link e \_ link \_ . |
| <a name="compiler"></a> COMPILATORE | Type | Attività |
|  | Parents | nessuno |
|  | Children | [BACK_END_PASS](#back-end-pass)<br/>[COMMAND_LINE](#command-line)<br/>[ENVIRONMENT_VARIABLE](#environment-variable)<br/>[FILE_INPUT](#file-input)<br/>[OBJ_OUTPUT](#obj-output)<br/>[FRONT_END_PASS](#front-end-pass) |
|  | Proprietà | -Versione del compilatore<br/>-Directory di lavoro<br/>: Percorso assoluto del *cl.exe* richiamato |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[Chiamata](cpp-event-data-types/invocation.md)<br/>[Compilatore](cpp-event-data-types/compiler.md) |
|  | Descrizione | Si verifica all'inizio e all'arresto di una chiamata di *cl.exe* . |
| <a name="environment-variable"></a> ENVIRONMENT_VARIABLE | Type | Evento semplice |
|  | Parents | [COMPILATORE](#compiler)<br/>[LINKER](#linker) |
|  | Children | nessuno |
|  | Proprietà | : Nome della variabile di ambiente<br/>: Valore della variabile di ambiente. |
|  | Acquisisci classi | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[EnvironmentVariable](cpp-event-data-types/environment-variable.md) |
|  | Descrizione | Si verifica una volta per ogni variabile di ambiente esistente al momento della chiamata *cl.exe* o *link.exe* . |
| <a name="executable-image-output"></a> EXECUTABLE_IMAGE_OUTPUT | Type | Evento semplice |
|  | Parents | [LINKER](#linker) |
|  | Children | nessuno |
|  | Proprietà | : Percorso assoluto di una DLL o di un file di output eseguibile. |
|  | Acquisisci classi | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[FileOutput](cpp-event-data-types/file-output.md)<br/>[ExecutableImageOutput](cpp-event-data-types/executable-image-output.md) |
|  | Descrizione | Si verifica quando uno degli input del linker è una DLL o un file di immagine eseguibile. |
| <a name="exp-output"></a> EXP_OUTPUT | Type | Evento semplice |
|  | Parents | [LINKER](#linker) |
|  | Children | nessuno |
|  | Proprietà | : Percorso assoluto di un file di output con *estensione EXP* . |
|  | Acquisisci classi | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[FileOutput](cpp-event-data-types/file-output.md)<br/>[ExpOutput](cpp-event-data-types/exp-output.md) |
|  | Descrizione | Si verifica quando uno degli output del linker è un file con *estensione EXP* . |
| <a name="file-input"></a> FILE_INPUT | Type | Evento semplice |
|  | Parents | [COMPILATORE](#compiler)<br/>[LINKER](#linker) |
|  | Children | nessuno |
|  | Proprietà | : Percorso assoluto del file di input<br/>: Tipo di file di input |
|  | Acquisisci classi | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[FileInput](cpp-event-data-types/file-input.md) |
|  | Descrizione | Si verifica per annunciare un *cl.exe* o *link.exe* input. |
| <a name="force-inlinee"></a> FORCE_INLINEE | Type | Evento semplice |
|  | Parents | [FUNZIONE](#function) |
|  | Children | nessuno |
|  | Proprietà | : Nome della funzione di forza inline.<br/>: Dimensione della funzione di forza inline, rappresentata come conteggio di istruzioni intermedie. |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[ForceInlinee](cpp-event-data-types/force-inlinee.md) |
|  | Descrizione | Si verifica quando una funzione viene forzata in un'altra funzione tramite l'utilizzo della **`__forceinline`** parola chiave. |
| <a name="front-end-file"></a> FRONT_END_FILE | Type | Attività |
|  | Parents | [C1_DLL](#c1-dll)<br/>[FRONT_END_FILE](#front-end-file) |
|  | Children | [FRONT_END_FILE](#front-end-file)<br/>[TEMPLATE_INSTANTIATION](#template-instantiation) |
|  | Proprietà | : Percorso assoluto del file. |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[FrontEndFile](cpp-event-data-types/front-end-file.md) |
|  | Descrizione | Si verifica all'avvio del front-end del compilatore e all'interruzione dell'elaborazione di un file. Questo evento è ricorsivo. La ricorsione si verifica quando il front-end analizza i file inclusi. |
| <a name="front-end-pass"></a> FRONT_END_PASS | Type | Attività |
|  | Parents | [COMPILATORE](#compiler) |
|  | Children | [C1_DLL](#c1-dll) |
|  | Proprietà | -Percorso assoluto del file di origine di input<br/>-Percorso assoluto del file oggetto di output |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[CompilerPass](cpp-event-data-types/compiler-pass.md)<br/>[FrontEndPass](cpp-event-data-types/front-end-pass.md) |
|  | Descrizione | Si verifica all'inizio e all'arresto del passaggio front-end del compilatore. Questo passaggio è responsabile dell'analisi del codice sorgente C/C++ e della relativa conversione in linguaggio intermedio. |
| <a name="function"></a> FUNZIONE | Type | Attività |
|  | Parents | [CODE_GENERATION](#code-generation)<br/>[THREAD](#thread)<br/>[TOP_DOWN](#top-down) |
|  | Children | [FORCE_INLINEE](#force-inlinee) |
|  | Proprietà | : Nome della funzione |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[Funzione](cpp-event-data-types/function.md) |
|  | Descrizione | Si verifica all'avvio e alla fine della generazione del codice per una funzione. |
| <a name="imp-lib-output"></a> IMP_LIB_OUTPUT | Type | Evento semplice |
|  | Parents | [LINKER](#linker) |
|  | Children | nessuno |
|  | Proprietà | : Percorso assoluto di un file di output della libreria di importazione. |
|  | Acquisisci classi | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[FileOutput](cpp-event-data-types/file-output.md)<br/>[ImpLibOutput](cpp-event-data-types/imp-lib-output.md) |
|  | Descrizione | Si verifica quando uno degli output del linker è una libreria di importazione. |
| <a name="lib-output"></a> LIB_OUTPUT | Type | Evento semplice |
|  | Parents | [LINKER](#linker) |
|  | Children | nessuno |
|  | Proprietà | : Percorso assoluto di un file di output della libreria statica. |
|  | Acquisisci classi | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[FileOutput](cpp-event-data-types/file-output.md)<br/>[LibOutput](cpp-event-data-types/lib-output.md) |
|  | Descrizione | Si verifica quando uno degli output del linker è una libreria statica. |
| <a name="linker"></a> LINKER | Type | Attività |
|  | Parents | nessuno |
|  | Children | [COMMAND_LINE](#command-line)<br/>[ENVIRONMENT_VARIABLE](#environment-variable)<br/>[EXECUTABLE_IMAGE_OUTPUT](#executable-image-output)<br/>[EXP_OUTPUT](#exp-output)<br/>[FILE_INPUT](#file-input)<br/>[IMP_LIB_OUTPUT](#imp-lib-output)<br/>[LIB_OUTPUT](#lib-output)<br/>[PASS1](#pass1)<br/>[PASS2](#pass2) |
|  | Proprietà | -Versione del linker<br/>-Directory di lavoro<br/>: Percorso assoluto del *link.exe* richiamato |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[Chiamata](cpp-event-data-types/invocation.md)<br/>[Linker](cpp-event-data-types/linker.md) |
|  | Descrizione | Si verifica all'inizio e all'arresto di una chiamata di *link.exe* . |
| <a name="ltcg"></a> LTCG | Type | Attività |
|  | Parents | [PASS1](#pass1) |
|  | Children | [C2_DLL](#c2-dll) |
|  | Proprietà | nessuno |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[LTCG](cpp-event-data-types/ltcg.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto della generazione di codice in fase di collegamento. |
| <a name="obj-output"></a> OBJ_OUTPUT | Type | Evento semplice |
|  | Parents | [COMPILATORE](#compiler) |
|  | Children | nessuno |
|  | Proprietà | : Percorso assoluto del file di output con *estensione obj* |
|  | Acquisisci classi | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[FileOutput](cpp-event-data-types/file-output.md)<br/>[ObjOutput](cpp-event-data-types/obj-output.md) |
|  | Descrizione | Si verifica una volta per ogni output *. obj* prodotto da *cl.exe* . |
| <a name="opt-icf"></a> OPT_ICF | Type | Attività |
|  | Parents | [PASS1](#pass1) |
|  | Children | nessuno |
|  | Proprietà | nessuno |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[OptICF](cpp-event-data-types/opt-icf.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto della stessa ottimizzazione del linker COMDAT (/OPT: ICF). |
| <a name="opt-lbr"></a> OPT_LBR | Type | Attività |
|  | Parents | [PASS1](#pass1) |
|  | Children | nessuno |
|  | Proprietà | nessuno |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[OptLBR](cpp-event-data-types/opt-lbr.md) |
|  | Descrizione | Si verifica all'inizio e all'arresto dell'ottimizzazione del linker Long Branch (/OPT: LBR). |
| <a name="opt-ref"></a> OPT_REF | Type | Attività |
|  | Parents | [PASS1](#pass1) |
|  | Children | nessuno |
|  | Proprietà | nessuno |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[OptRef](cpp-event-data-types/opt-ref.md) |
|  | Descrizione | Si verifica all'inizio e all'arresto dell'ottimizzazione del linker per le funzioni senza riferimenti e l'eliminazione dei dati (/OPT: REF). |
| <a name="pass1"></a> PASS1 | Type | Attività |
|  | Parents | [LINKER](#linker) |
|  | Children | [LTCG](#ltcg)<br/>[OPT_ICF](#opt-icf)<br/>[OPT_LBR](#opt-lbr)<br/>[OPT_REF](#opt-ref) |
|  | Proprietà | nessuno |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[Pass1](cpp-event-data-types/pass1.md) |
|  | Descrizione | Si verifica all'inizio e all'arresto del passaggio 1 del linker. |
| <a name="pass2"></a> PASS2 | Type | Attività |
|  | Parents | [LINKER](#linker) |
|  | Children | nessuno |
|  | Proprietà | nessuno |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[Pass2](cpp-event-data-types/pass2.md) |
|  | Descrizione | Si verifica all'inizio e all'arresto del passaggio 2 del linker. |
| <a name="pre-ltcg-opt-ref"></a> PRE_LTCG_OPT_REF | Type | Attività |
|  | Parents | [PASS1](#pass1) |
|  | Children | nessuno |
|  | Proprietà | nessuno |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[PreLTCGOptRef](cpp-event-data-types/pre-ltcg-opt-ref.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto della sessione di ottimizzazione del linker che elimina le funzioni e i dati senza riferimenti (/OPT: REF). Viene eseguita prima della generazione di codice in fase di collegamento. |
| <a name="symbol-name"></a> SYMBOL_NAME | Type | Evento semplice |
|  | Parents | [C1_DLL](#c1-dll) |
|  | Children | nessuno |
|  | Proprietà | -Chiave di tipo<br/> : Nome del tipo |
|  | Acquisisci classi | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[SymbolName](cpp-event-data-types/symbol-name.md) |
|  | Descrizione | Si verifica alla fine del passaggio front-end: una volta per ogni tipo necessario per le creazioni di istanze di modello. La chiave è un identificatore numerico per il tipo, mentre il nome è la rappresentazione testuale. Le chiavi dei tipi sono univoche all'interno della traccia analizzata. Tuttavia, chiavi diverse provenienti da passaggi front-end del compilatore diversi possono puntare allo stesso tipo. Il confronto tra i tipi tra i diversi passaggi del front-end del compilatore richiede l'uso dei rispettivi nomi. SYMBOL_NAME eventi vengono generati alla fine di un passaggio front-end del compilatore, dopo che sono state eseguite tutte le creazioni di istanze di modello. |
| <a name="template-instantiation"></a> TEMPLATE_INSTANTIATION | Type | Attività |
|  | Parents | [C1_DLL](#c1-dll)<br/>[FRONT_END_FILE](#front-end-file)<br/>[TEMPLATE_INSTANTIATION](#template-instantiation) |
|  | Children | [TEMPLATE_INSTANTIATION](#template-instantiation) |
|  | Proprietà | -Chiave per il tipo specializzato<br/>-Chiave per il tipo del modello primario<br/>: Tipo di modello di cui è stata creata un'istanza |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[TemplateInstantiation](cpp-event-data-types/template-instantiation.md) |
|  | Descrizione | Si verifica all'inizio e alla fine della creazione di un'istanza del modello. Viene creata un'istanza di un tipo di modello primario (ad esempio `vector` ), che ha come risultato un tipo specializzato, ad esempio `std::vector<int>` . Viene fornita una chiave per entrambi i tipi. Usare l'evento [SYMBOL_NAME](#symbol-name) per convertire una chiave nel nome del tipo. Le chiavi dei tipi sono univoche all'interno della traccia analizzata. Tuttavia, chiavi diverse provenienti da passaggi front-end del compilatore diversi possono puntare allo stesso tipo. Per confrontare i tipi tra i diversi passaggi del front-end del compilatore è necessario usare i nomi dei simboli. Questo evento è ricorsivo. In alcuni casi, la ricorsione si verifica quando il front-end crea un'istanza dei modelli annidati. |
| <a name="thread"></a> THREAD | Type | Attività |
|  | Parents | [CODE_GENERATION](#code-generation)<br/>[TOP_DOWN](#top-down) |
|  | Children | [FUNZIONE](#function) |
|  | Proprietà | nessuno |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[Thread](cpp-event-data-types/thread.md) |
|  | Descrizione | Si verifica all'inizio e alla fine dell'esecuzione di un thread di back-end del compilatore. Un thread sospeso viene considerato terminato. Un thread in fase di riattivazione viene considerato avviato. |
| <a name="top-down"></a> TOP_DOWN | Type | Attività |
|  | Parents | [WHOLE_PROGRAM_ANALYSIS](#whole-program-analysis) |
|  | Children | [FUNZIONE](#function)<br/>[THREAD](#thread) |
|  | Proprietà | nessuno |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[TopDown](cpp-event-data-types/top-down.md) |
|  | Descrizione | Si verifica all'inizio e alla fine dell'intera sessione di analisi del programma. |
| <a name="whole-program-analysis"></a> WHOLE_PROGRAM_ANALYSIS | Type | Attività |
|  | Parents | [C2_DLL](#c2-dll) |
|  | Children | [BOTTOM_UP](#bottom-up)<br/>[TOP_DOWN](#top-down) |
|  | Proprietà | nessuno |
|  | Acquisisci classi | [Attività](cpp-event-data-types/activity.md)<br/>[WholeProgramAnalysis](cpp-event-data-types/whole-program-analysis.md) |
|  | Descrizione | Si verifica all'avvio e all'arresto della fase di analisi dell'intero programma della generazione di codice in fase di collegamento. |

::: moniker-end

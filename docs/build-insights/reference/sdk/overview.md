---
title: SDK di approfondimenti per la compilazione in C
description: Una panoramica dell'SDK di Visual Studio per le informazioni dettagliate sulla compilazione in Visual Studio.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Analyzing
- Relogging
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 126abb0d039227eb269500966d46ef0a729763ee
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323255"
---
# <a name="c-build-insights-sdk"></a>SDK di approfondimenti per la compilazione in C

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

L'SDK di informazioni dettagliate sulla compilazione di C' è una raccolta di API che consentono di creare strumenti personalizzati sulla piattaforma di analisi di compilazione di C. Questa pagina fornisce una panoramica generale per iniziare.

## <a name="obtaining-the-sdk"></a>Ottenere l'SDK

È possibile scaricare l'SDK di analisi di compilazione di C, come pacchetto NuGet, attenendosi alla procedura seguente:

1. Da Visual Studio 2017 e versioni successive, creare un nuovo progetto di C .
1. Nel riquadro **Esplora soluzioni** fare clic con il pulsante destro del mouse sul progetto.
1. Selezionare **Gestisci pacchetti NuGet** dal menu di scelta rapida.
1. In alto a destra, seleziona **l'nuget.org'origine** del pacchetto.
1. Cercare la versione più recente del pacchetto Microsoft.Cpp.BuildInsights.
1. Scegliere **Installa**.
1. Accettare la licenza.

Continua a leggere per informazioni sui concetti generali relativi all'SDK. È inoltre possibile accedere al repository ufficiale degli esempi di analisi di [compilazione di C,](https://github.com/microsoft/cpp-build-insights-samples) per visualizzare esempi di applicazioni reali di C, che utilizzano l'SDK.

## <a name="collecting-a-trace"></a>Raccolta di una tracciaCollecting a trace

L'utilizzo dell'SDK di approfondimenti per la compilazione di C' per analizzare gli eventi provenienti dalla toolchain MSVC richiede innanzitutto la raccolta di una traccia. L'SDK utilizza Event Tracing for Windows (ETW) come tecnologia di traccia sottostante. La raccolta di una traccia può essere eseguita in due modi:Collecting a trace can be done in two ways:

### <a name="method-1-using-vcperf-in-visual-studio-2019-and-above"></a>Metodo 1: utilizzo di vcperf in Visual Studio 2019 e versioni successive

1. Aprire un prompt dei comandi degli strumenti nativi x64 con privilegi elevati per VS 2019.Open an elevated x64 Native Tools Command Prompt for VS 2019.
1. Eseguire il comando seguente: `vcperf /start MySessionName`
1. Compilare il progetto.
1. Eseguire il comando seguente: `vcperf /stopnoanalyze MySessionName outputTraceFile.etl`

   > [!IMPORTANT]
   > Utilizzare `/stopnoanalyze` il comando quando si arresta la traccia con vcperf. Non è possibile utilizzare l'SDK di informazioni dettagliate sulla `/stop` compilazione di C' per analizzare le tracce interrotte dal comando normale.

### <a name="method-2-programmatically"></a>Metodo 2: a livello di codice

Per avviare e arrestare le tracce a livello di codice, utilizzare una di queste funzioni di raccolta di tracce di SDK di Build Insights in C. **Il programma che esegue queste chiamate di funzione deve disporre di privilegi amministrativi.** Solo le funzioni di avvio e arresto della traccia richiedono privilegi amministrativi. Tutte le altre funzioni in Visual S.A.C.

### <a name="sdk-functions-related-to-trace-collection"></a>Funzioni SDK correlate alla raccolta di tracce

| Funzionalità | API C++ | API C |
|--|--|--|
| Avvio di una tracciaStarting a trace | [StartTracingSession](functions/start-tracing-session.md) | [StartTracingSessionA](functions/start-tracing-session-a.md)<br />[StartTracingSessionW](functions/start-tracing-session-w.md) |
| Interruzione di una traccia | [StopTracingSession](functions/stop-tracing-session.md) | [StopTracingSessionA (ArrestoTracingSessionA)](functions/stop-tracing-session-a.md)<br />[StopTracingSessionW](functions/stop-tracing-session-w.md) |
| Arresto di una traccia e<br />analizzando immediatamente il risultato | [StopAndAnalyzeTracingSession (StopAndAnalyzeTracingSession)](functions/stop-and-analyze-tracing-session.md) | [StopAndAnalyzeTracingSessionA](functions/stop-and-analyze-tracing-session-a.md)<br />[StopAndAnalyzeTracingSession (StopAndAnalyzeTracingSession)](functions/stop-and-analyze-tracing-session-w.md) |
| Arresto di una traccia e<br />immediatamente la registrazione del risultato | [StopAndRelogTracingSession (StopAndRelogTracingSession)](functions/stop-and-relog-tracing-session.md) | [ArrestoAndRelogTracingSessionA](functions/stop-and-relog-tracing-session-a.md)<br />[StopAndRelogTracingSessionW (Interruzione della sessione di protezione)](functions/stop-and-relog-tracing-session-w.md) |

Le sezioni seguenti mostrano come configurare un'analisi o una sessione di riregistrazione. È necessario per le funzioni di funzionalità combinate, ad esempio [StopAndAnalyzeTracingSession](functions/stop-and-analyze-tracing-session.md).

## <a name="consuming-a-trace"></a>Utilizzo di una tracciaConsuming a trace

Una volta che si dispone di una traccia ETW, utilizzare il C , build Insights SDK per decomprimerlo. L'SDK offre gli eventi in un formato che consente di sviluppare rapidamente gli strumenti. Non è consigliabile utilizzare la traccia ETW non elaborata senza utilizzare l'SDK. Il formato di evento utilizzato da MSVC è non documentato, ottimizzato per la scalabilità a compilazioni di grandi dimensioni e difficile da dare un senso. Inoltre, l'API SDK di Build Insights è stabile, mentre il formato di traccia ETW non elaborato è soggetto a modifiche senza preavviso.

### <a name="sdk-types-and-functions-related-to-trace-consumption"></a>Tipi SDK e funzioni correlate al consumo di tracce

| Funzionalità | API C++ | API C | Note |
|--|--|--|--|
| Impostazione dei callback degli eventi | [IAnalyzer (Informazioni in stati incom](other-types/ianalyzer-class.md)<br />[IRelogger](other-types/irelogger-class.md) | [ANALYSIS_CALLBACKS](other-types/analysis-callbacks-struct.md)<br />[RELOG_CALLBACKS](other-types/relog-callbacks-struct.md) | L'SDK di approfondimenti per la compilazione in C. Implementare le funzioni di callback creando un analizzatore o una classe relogger che eredita l'interfaccia IAnalyzer o IRelogger . In C implementare i callback nelle funzioni globali e fornire puntatori a essi nella struttura ANALYSIS_CALLBACKS o RELOG_CALLBACKS. |
| Gruppi di costruzione | [MakeStaticAnalyzerGroup](functions/make-static-analyzer-group.md)<br />[MakeStaticReloggerGroup](functions/make-static-relogger-group.md)<br />[MakeDynamicAnalyzerGroup](functions/make-dynamic-analyzer-group.md)<br />[MakeDynamicReloggerGroup (Gruppo MakeDynamicReloggerGroup)](functions/make-dynamic-relogger-group.md) |  | L'API di C, fornisce funzioni e tipi di supporto per raggruppare più oggetti analizzatore e relogger. I gruppi sono un modo semplice per dividere un'analisi complessa in passaggi più semplici. [vcperf](https://github.com/microsoft/vcperf) è organizzato in questo modo. |
| Analisi o riregistrazione | [Analizzare](functions/analyze.md)<br />[Rinuovo](functions/relog.md) | [AnalisiA](functions/analyze-a.md)<br />[AnalisiW](functions/analyze-w.md)<br />[RilogA](functions/relog-a.md)<br />[RilogW](functions/relog-w.md) |  |

### <a name="analyzing-and-relogging"></a>Analisi e relogging

L'utilizzo di una traccia viene eseguito tramite una sessione di analisi o una sessione di riregistrazione.

L'utilizzo di un'analisi regolare è appropriato per la maggior parte degli scenari. Questo metodo offre la flessibilità necessaria `printf` per scegliere il formato di output: text, xml, JSON, database, REST calls e così via.

La riregistrazione è destinata ad analisi speciali che devono produrre un file di output ETW. Tramite la relogging, è possibile convertire gli eventi di Build Insights in un formato di evento ETW personalizzato. Un uso appropriato della relogging consiste nell'associare i dati di Analisi di compilazione di C, a i dati e all'infrastruttura ETW esistenti. Ad esempio, [vcperf](https://github.com/microsoft/vcperf) utilizza le interfacce di relogging. Questo perché deve produrre dati che Windows Performance Analyzer, uno strumento ETW, può comprendere. Se si prevede di utilizzare le interfacce di relogging, è necessaria una conoscenza preliminare del funzionamento di ETW.

### <a name="creating-analyzer-groups"></a>Creazione di gruppi di analizzatori

È importante sapere come creare gruppi. Ecco un esempio che mostra come creare un gruppo di analizzatori che stampa *Hello, world!* per ogni evento di avvio dell'attività che riceve.

```cpp
using namespace Microsoft::Cpp::BuildInsights;

class Hello : public IAnalyzer
{
public:
    AnalysisControl OnStartActivity(
        const EventStack& eventStack) override
    {
        std::cout << "Hello, " << std::endl;
        return AnalysisControl::CONTINUE;
    }
};

class World : public IAnalyzer
{
public:
    AnalysisControl OnStartActivity(
        const EventStack& eventStack) override
    {
        std::cout << "world!" << std::endl;
        return AnalysisControl::CONTINUE;
    }
};

int main()
{
    Hello hello;
    World world;

    // Let's make Hello the first analyzer in the group
    // so that it receives events and prints "Hello, "
    // first.
    auto group = MakeStaticAnalyzerGroup(&hello, &world);

    unsigned numberOfAnalysisPasses = 1;

    // Calling this function initiates the analysis and
    // forwards all events from "inputTrace.etl" to my analyzer
    // group.
    Analyze("inputTrace.etl", numberOfAnalysisPasses, group);

    return 0;
}
```

## <a name="using-events"></a>Utilizzo degli eventi

### <a name="sdk-types-and-functions-related-to-events"></a>Tipi SDK e funzioni correlate agli eventi

| Funzionalità | API C++ | API C | Note |
|--|--|--|--|
| Corrispondenza e filtraggio degli eventi | [Funzione MatchEventStackInMemberFunctionMatchEventStackInMemberFunction](functions/match-event-stack-in-member-function.md)<br />[MatchEventStack](functions/match-event-stack.md)<br />[Funzione MatchEventInMemberFunction](functions/match-event-in-member-function.md)<br />[Evento Corrispondenza](functions/match-event.md) |  | L'API di C, è un'API che semplifica l'estrazione degli eventi che ti interessano dalle tue tracce. Con l'API C, questo filtro deve essere eseguito a mano. |
| Tipi di dati degli eventi | [Attività](cpp-event-data-types/activity.md)<br />[BackEndPass](cpp-event-data-types/back-end-pass.md)<br />[Basso Verso l'alto](cpp-event-data-types/bottom-up.md)<br />[DLL](cpp-event-data-types/c1-dll.md)<br />[DLL C2](cpp-event-data-types/c2-dll.md)<br />[CodeGeneration](cpp-event-data-types/code-generation.md)<br />[Commandline](cpp-event-data-types/command-line.md)<br />[Compilatore](cpp-event-data-types/compiler.md)<br />[CompilatorePassCompilerPass](cpp-event-data-types/compiler-pass.md)<br />[EnvironmentVariable](cpp-event-data-types/environment-variable.md)<br />[Evento](cpp-event-data-types/event.md)<br />[Gruppo di eventi](cpp-event-data-types/event-group.md)<br />[EventStack (Stack evento)](cpp-event-data-types/event-stack.md)<br />[ExecutableImageOutput](cpp-event-data-types/executable-image-output.md)<br />[ExpOutput (ExpOutput)](cpp-event-data-types/exp-output.md)<br />[FileInput](cpp-event-data-types/file-input.md)<br />[FileOutput](cpp-event-data-types/file-output.md)<br />[ForzaInlinee](cpp-event-data-types/force-inlinee.md)<br />[File FrontEnd](cpp-event-data-types/front-end-file.md)<br />[Gruppo FrontEndFileGroup](cpp-event-data-types/front-end-file-group.md)<br />[FrontEndPass](cpp-event-data-types/front-end-pass.md)<br />[Funzione](cpp-event-data-types/function.md)<br />[ImpLibOutput](cpp-event-data-types/imp-lib-output.md)<br />[Chiamata](cpp-event-data-types/invocation.md)<br />[InvocationGroup (InvocationGroup)](cpp-event-data-types/invocation-group.md)<br />[LibOutput (informazioni in base all'](cpp-event-data-types/lib-output.md)<br />[Linker](cpp-event-data-types/linker.md)<br />[Gruppo di linker](cpp-event-data-types/linker-group.md)<br />[Passaggio del linker](cpp-event-data-types/linker-pass.md)<br />[LTCG (InviETG)](cpp-event-data-types/ltcg.md)<br />[ObjOutput](cpp-event-data-types/obj-output.md)<br />[OptICF](cpp-event-data-types/opt-icf.md)<br />[OptLBR](cpp-event-data-types/opt-lbr.md)<br />[OptRef (opzione di riferimento)](cpp-event-data-types/opt-ref.md)<br />[Passaggio1](cpp-event-data-types/pass1.md)<br />[Passaggio2](cpp-event-data-types/pass2.md)<br />[PreLTCGOptRef (preLTCGOptRef)](cpp-event-data-types/pre-ltcg-opt-ref.md)<br />[Evento semplice](cpp-event-data-types/simple-event.md)<br />[NomeSimbolo](cpp-event-data-types/symbol-name.md)<br />[ModelloInstantiation (Creazione guidata)](cpp-event-data-types/template-instantiation.md)<br />[TemplateInstantiationGroup (Gruppo di messaggistica istantanea Template)](cpp-event-data-types/template-instantiation-group.md)<br />[Thread](cpp-event-data-types/thread.md)<br />[Dall'alto verso il basso](cpp-event-data-types/top-down.md)<br />[Traceinfo](cpp-event-data-types/trace-info.md)<br />[Analisi dell'intero programma](cpp-event-data-types/whole-program-analysis.md) | [CL_PASS_DATA](c-event-data-types/cl-pass-data-struct.md)<br />[EVENT_COLLECTION_DATA](c-event-data-types/event-collection-data-struct.md)<br />[EVENT_DATA](c-event-data-types/event-data-struct.md)<br />[EVENT_ID](c-event-data-types/event-id-enum.md)<br />[FILE_DATA](c-event-data-types/file-data-struct.md)<br />[FILE_TYPE_CODE](c-event-data-types/file-type-code-enum.md)<br />[FRONT_END_FILE_DATA](c-event-data-types/front-end-file-data-struct.md)<br />[FUNCTION_DATA](c-event-data-types/function-data-struct.md)<br />[FUNCTION_FORCE_INLINEE_DATA](c-event-data-types/function-force-inlinee-data-struct.md)<br />[INVOCATION_DATA](c-event-data-types/invocation-data-struct.md)<br />[INVOCATION_VERSION_DATA](c-event-data-types/invocation-version-data-struct.md)<br />[MSVC_TOOL_CODE](c-event-data-types/msvc-tool-code-enum.md)<br />[NAME_VALUE_PAIR_DATA](c-event-data-types/name-value-pair-data-struct.md)<br />[SYMBOL_NAME_DATA](c-event-data-types/symbol-name-data-struct.md)<br />[TEMPLATE_INSTANTIATION_DATA](c-event-data-types/template-instantiation-data-struct.md)<br />[TEMPLATE_INSTANTIATION_KIND_CODE](c-event-data-types/template-instantiation-kind-code-enum.md)<br />[TRACE_INFO_DATA](c-event-data-types/trace-info-data-struct.md)<br />[TRANSLATION_UNIT_PASS_CODE](c-event-data-types/translation-unit-pass-code-enum.md) |  |

### <a name="activities-and-simple-events"></a>Attività ed eventi semplici

Gli eventi sono in due categorie: *attività* ed *eventi semplici.* Le attività sono processi in corso nel tempo che hanno un inizio e una fine. Gli eventi semplici sono occorrenze puntuali e non hanno una durata. Quando si analizzano le tracce di MSVC con l'SDK di approfondimenti di compilazione di C, si riceveranno eventi separati all'avvio e all'arresto di un'attività. Riceverai un solo evento quando si verifica un evento semplice.

### <a name="parent-child-relationships"></a>Relazioni padre-figlio

Le attività e gli eventi semplici sono correlati tra loro tramite relazioni padre-figlio. L'elemento padre di un'attività o di un evento semplice è l'attività che include in cui si verificano. Ad esempio, durante la compilazione di un file di origine il compilatore deve analizzare il file, quindi generare il codice. Le attività di analisi e generazione di codice sono entrambi elementi figlio dell'attività del compilatore.

Gli eventi semplici non hanno una durata, quindi non può accadere nient'altro al loro interno. Come tale, non hanno mai figli.

Le relazioni padre-figlio di ogni attività e di un evento semplice sono indicate nella tabella degli [eventi.](event-table.md) Conoscere queste relazioni è importante quando si utilizzano gli eventi di analisi di compilazione di C. Spesso dovrai fare affidamento su di essi per comprendere il contesto completo di un evento.

### <a name="properties"></a>Proprietà

Tutti gli eventi hanno le proprietà seguenti:All events have the following properties:

| Proprietà | Descrizione |
|--|--|
| Identificatore del tipo | Numero che identifica in modo univoco il tipo di evento. |
| Identificatore di istanza | Numero che identifica in modo univoco l'evento all'interno della traccia. Se due eventi dello stesso tipo si verificano in una traccia, entrambi ottengono un identificatore di istanza univoco. |
| Ora di inizio | L'ora di inizio di un'attività o l'ora in cui si è verificato un evento semplice. |
| Identificatore di processo | Numero che identifica il processo in cui si è verificato l'evento. |
| Identificatore del thread | Numero che identifica il thread in cui si è verificato l'evento. |
| Indice del processore | Indice in base zero che indica il processore logico da cui è stato generato l'evento. |
| Nome evento | Stringa che descrive il tipo di evento. |

Tutte le attività diverse dagli eventi semplici hanno anche queste proprietà:All activities other than simple events also have these properties:

| Proprietà | Descrizione |
|--|--|
| Ora di arresto | Ora di arresto dell'attività. |
| Durata esclusiva | Il tempo trascorso in un'attività, escluso il tempo trascorso nelle sue attività figlio. |
| Tempo CPU | Tempo impiegato dalla CPU per l'esecuzione del codice nel thread collegato all'attività. Non include il tempo in cui il filo collegato all'attività dormiva. |
| Tempo CPU esclusivo | Uguale al tempo della CPU, ma escludendo il tempo di CPU impiegato dalle attività figlio. |
| Responsabilità del tempo a muro | Contributo dell'attività all'orario generale a parete. La responsabilità del tempo wall-clock tiene conto del parallelismo tra le attività. Si supponga, ad esempio, che due attività non correlate vengano eseguite in parallelo. Entrambi hanno una durata di 10 secondi e esattamente lo stesso tempo di avvio e arresto. In questo caso, Build Insights assegna una responsabilità di tempo a parete di 5 secondi. Al contrario, se queste attività vengono eseguite una dopo l'altra senza sovrapposizioni, a entrambe viene assegnata una responsabilità di tempo a parete di 10 secondi. |
| Esclusiva responsabilità del tempo a parete | Uguale alla responsabilità del tempo a parete, ma esclude la responsabilità del tempo a parete delle attività figlio. |

Alcuni eventi hanno le loro proprietà al di là di quelli menzionati. In questo caso, queste proprietà aggiuntive sono elencate nella tabella degli [eventi.](event-table.md)

### <a name="consuming-events-provided-by-the-c-build-insights-sdk"></a>Utilizzo di eventi forniti da SDK per le informazioni dettagliate sulla compilazione in C

#### <a name="the-event-stack"></a>Lo stack di eventi

Ogni volta che l'SDK di approfondimenti di compilazione di C, viene fornito sotto forma di stack. L'ultima voce nello stack è l'evento corrente e le voci prima della gerarchia padre. Ad esempio, gli eventi di avvio e arresto [LTCG](event-table.md#ltcg) si verificano durante il passaggio 1 del linker. In questo caso, lo stack che \[si riceve contiene:\] [LINKER](event-table.md#linker), [PASS1](event-table.md#pass1), LTCG . La gerarchia padre è utile perché è possibile risalire un evento alla radice. Se l'attività LTCG di cui sopra è lenta, è possibile scoprire immediatamente quale chiamata del linker è stata coinvolta.

#### <a name="matching-events-and-event-stacks"></a>Eventi di corrispondenza e stack di eventiMatching events and event stacks

L'SDK di approfondimenti per la compilazione di C' offre ogni evento in una traccia, ma la maggior parte delle volte si è interessati solo a un sottoinsieme di essi. In alcuni casi, potrebbe interessare solo un sottoinsieme di stack di *eventi*. L'SDK fornisce funzionalità che consentono di estrarre rapidamente gli eventi o lo stack di eventi necessari e di rifiutare quelli non necessari. Questa operazione viene eseguita tramite queste funzioni di corrispondenza:It's done through these matching functions:

|  |  |
|--|--|
| [Evento Corrispondenza](functions/match-event.md) | Mantenere un evento se corrisponde a uno dei tipi specificati. Inoltrare gli eventi corrispondenti a un'espressione lambda o a un altro tipo richiamabile. La gerarchia padre dell'evento non viene considerata da questa funzione. |
| [Funzione MatchEventInMemberFunction](functions/match-event-in-member-function.md) | Mantenere un evento se corrisponde al tipo specificato nel parametro di una funzione membro. Inoltrare gli eventi corrispondenti alla funzione membro. La gerarchia padre dell'evento non viene considerata da questa funzione. |
| [MatchEventStack](functions/match-event-stack.md) | Mantenere un evento se sia l'evento che la relativa gerarchia padre corrispondono ai tipi specificati. Inoltrare l'evento e gli eventi della gerarchia padre corrispondenti a un tipo lambda o a un altro tipo richiamabile. |
| [Funzione MatchEventStackInMemberFunctionMatchEventStackInMemberFunction](functions/match-event-stack-in-member-function.md) | Mantenere un evento se sia l'evento che la relativa gerarchia padre corrispondono ai tipi specificati nell'elenco di parametri di una funzione membro. Inoltrare l'evento e gli eventi della gerarchia padre corrispondenti alla funzione membro. |

Le funzioni di `MatchEventStack` corrispondenza dello stack di eventi, ad esempio consentono di associare gli spazi vuoti durante la descrizione della gerarchia padre in modo che corrisponda. Ad esempio, si può dire che \[sei interessato allo stack [LINKER](event-table.md#linker), [LTCG.](event-table.md#ltcg) \] Corrisponderebbe anche \[allo stack LINKER, [PASS1](event-table.md#pass1), LTCG.\] L'ultimo tipo specificato deve essere il tipo di evento corrispondente e non fa parte della gerarchia padre.

#### <a name="capture-classes"></a>Acquisire classi

Per `Match*` utilizzare le funzioni è necessario specificare i tipi di cui si desidera trovare la corrispondenza. Questi tipi vengono selezionati da un elenco di classi di *acquisizione.* Le classi di acquisizione sono disponibili in diverse categorie, descritte di seguito.

| Category | Descrizione |
|--|--|
| Exact | Queste classi di acquisizione vengono utilizzate per trovare una corrispondenza con un tipo di evento specifico e nessun altro. Un esempio è la classe [Compiler,](cpp-event-data-types/compiler.md) che corrisponde all'evento [COMPILER.](event-table.md#compiler) |
| Wildcard (Carattere jolly) | Queste classi di acquisizione possono essere utilizzate per trovare una corrispondenza con qualsiasi evento dell'elenco di eventi che supportano. Ad esempio, il carattere jolly [Attività](cpp-event-data-types/activity.md) corrisponde a qualsiasi evento di attività. Un altro esempio è il carattere jolly [CompilerPass,](cpp-event-data-types/compiler-pass.md) che può corrispondere [all'evento FRONT_END_PASS](event-table.md#front-end-pass) o [BACK_END_PASS.](event-table.md#back-end-pass) |
| Gruppo | I nomi delle classi di acquisizione di gruppo terminano in *Gruppo*. Vengono utilizzati per trovare la corrispondenza di più eventi dello stesso tipo in una riga, ignorando le lacune. Hanno senso solo quando corrispondono agli eventi ricorsivi, perché non si sa quanti esistono nello stack di eventi. Ad esempio, l'attività [di FRONT_END_FILE](event-table.md#front-end-file) si verifica ogni volta che il compilatore analizza un file. Questa attività è ricorsiva perché il compilatore può trovare una direttiva include durante l'analisi del file. La classe [FrontEndFile](cpp-event-data-types/front-end-file.md) corrisponde a un solo evento FRONT_END_FILE nello stack. Utilizzare la classe [FrontEndFileGroup](cpp-event-data-types/front-end-file-group.md) in modo che corrisponda all'intera gerarchia di inclusione. |
| Gruppo di caratteri jolly | Un gruppo con caratteri jolly combina le proprietà di caratteri jolly e gruppi. L'unica classe di questa categoria è [InvocationGroup](cpp-event-data-types/invocation-group.md), che corrisponde e acquisisce tutti gli eventi [LINKER](event-table.md#linker) e [COMPILER](event-table.md#compiler) in un singolo stack di eventi. |

Fare riferimento alla [tabella](event-table.md) degli eventi per scoprire quali classi di acquisizione possono essere utilizzate per trovare una corrispondenza con ogni evento.

#### <a name="after-matching-using-captured-events"></a>Dopo la corrispondenza: utilizzando gli eventi acquisiti

Una volta che una `Match*` corrispondenza viene completata correttamente, le funzioni costruiscono gli oggetti della classe di acquisizione e li inoltrano alla funzione specificata. Utilizzare questi oggetti della classe di acquisizione per accedere alle proprietà degli eventi.

#### <a name="example"></a>Esempio

```cpp
AnalysisControl MyAnalyzer::OnStartActivity(const EventStack& eventStack)
{
    // The event types to match are specified in the PrintIncludes function
    // signature.  
    MatchEventStackInMemberFunction(eventStack, this, &MyAnalyzer::PrintIncludes);
}

// We want to capture event stacks where:
// 1. The current event is a FrontEndFile activity.
// 2. The current FrontEndFile activity has at least one parent FrontEndFile activity
//    and possibly many.
void PrintIncludes(FrontEndFileGroup parentIncludes, FrontEndFile currentFile)
{
    // Once we reach this point, the event stack we are interested in has been matched.
    // The current FrontEndFile activity has been captured into 'currentFile', and
    // its entire inclusion hierarchy has been captured in 'parentIncludes'.

    cout << "The current file being parsed is: " << currentFile.Path() << endl;
    cout << "This file was reached through the following inclusions:" << endl;

    for (auto& f : parentIncludes)
    {
        cout << f.Path() << endl;
    }
}
```

::: moniker-end

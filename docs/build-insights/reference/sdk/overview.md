---
title: C++SDK di compilazione Insights
description: Panoramica di Visual Studio C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Analyzing
- Relogging
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 5aafcc65bc30de77131d1945c9f4e78361db14ed
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332397"
---
# <a name="c-build-insights-sdk"></a>C++SDK di compilazione Insights

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

C++ Build Insights SDK è una raccolta di API che consente di creare strumenti personalizzati sulla piattaforma di C++ compilazione di Insights. Questa pagina offre una panoramica di alto livello per iniziare.

## <a name="obtaining-the-sdk"></a>Acquisizione dell'SDK

È possibile scaricare Build C++ Insights SDK come pacchetto NuGet attenendosi alla procedura seguente:

1. Da Visual Studio 2017 e versioni successive, creare un C++ nuovo progetto.
1. Nel riquadro **Esplora soluzioni** fare clic con il pulsante destro del mouse sul progetto.
1. Selezionare **Gestisci pacchetti NuGet** dal menu di scelta rapida.
1. In alto a destra selezionare l'origine del pacchetto **NuGet.org** .
1. Cercare la versione più recente del pacchetto Microsoft. cpp. BuildInsights.
1. Scegliere **Installa**.
1. Accettare la licenza.

Per informazioni sui concetti generali relativi all'SDK, vedere. È anche possibile accedere al [ C++ repository GitHub degli esempi di build Insights](https://github.com/microsoft/cpp-build-insights-samples) ufficiale per vedere esempi di C++ applicazioni reali che usano l'SDK.

## <a name="collecting-a-trace"></a>Raccolta di una traccia

L' C++ uso di build Insights SDK per analizzare gli eventi provenienti dall'MSVC della raccolta dati di base richiede prima di tutto la raccolta di una traccia. L'SDK utilizza Event Tracing for Windows (ETW) come tecnologia di traccia sottostante. La raccolta di una traccia può essere eseguita in due modi:

### <a name="method-1-using-vcperf-in-visual-studio-2019-and-above"></a>Metodo 1: uso di vcperf in Visual Studio 2019 e versioni successive

1. Aprire un Prompt dei comandi degli strumenti nativi x64 con privilegi elevati per VS 2019.
1. Eseguire il comando seguente: `vcperf /start MySessionName`
1. Compilare il progetto.
1. Eseguire il comando seguente: `vcperf /stopnoanalyze MySessionName outputTraceFile.etl`

   > [!IMPORTANT]
   > Usare il comando `/stopnoanalyze` quando si arresta la traccia con vcperf. Non è possibile usare C++ Build Insights SDK per analizzare le tracce interrotte dal normale comando `/stop`.

### <a name="method-2-programmatically"></a>Metodo 2: a livello di codice

Usare una di queste C++ funzioni di raccolta della traccia di build Insights SDK per avviare e arrestare le tracce a livello di codice. **Il programma che esegue queste chiamate di funzione deve disporre di privilegi amministrativi.** Solo le funzioni di traccia di avvio e arresto richiedono privilegi amministrativi. Tutte le altre funzioni in C++ Build Insights SDK possono essere eseguite senza di esse.

### <a name="sdk-functions-related-to-trace-collection"></a>Funzioni SDK correlate alla raccolta di tracce

| Funzionalità | API C++ | API C |
|--|--|--|
| Avvio di una traccia | [StartTracingSession](functions/start-tracing-session.md) | [StartTracingSessionA](functions/start-tracing-session-a.md)<br />[StartTracingSessionW](functions/start-tracing-session-w.md) |
| Arresto di una traccia | [StopTracingSession](functions/stop-tracing-session.md) | [StopTracingSessionA](functions/stop-tracing-session-a.md)<br />[StopTracingSessionW](functions/stop-tracing-session-w.md) |
| Arresto di una traccia e<br />analisi immediata del risultato | [StopAndAnalyzeTracingSession](functions/stop-and-analyze-tracing-session.md) | [StopAndAnalyzeTracingSessionA](functions/stop-and-analyze-tracing-session-a.md)<br />[StopAndAnalyzeTracingSession](functions/stop-and-analyze-tracing-session-w.md) |
| Arresto di una traccia e<br />registrazione immediata del risultato | [StopAndRelogTracingSession](functions/stop-and-relog-tracing-session.md) | [StopAndRelogTracingSessionA](functions/stop-and-relog-tracing-session-a.md)<br />[StopAndRelogTracingSessionW](functions/stop-and-relog-tracing-session-w.md) |

Le sezioni seguenti illustrano come configurare un'analisi o una sessione di registrazione. È obbligatorio per le funzioni di funzionalità combinate, ad esempio [StopAndAnalyzeTracingSession](functions/stop-and-analyze-tracing-session.md).

## <a name="consuming-a-trace"></a>Utilizzo di una traccia

Quando si dispone di una traccia ETW, usare C++ Build Insights SDK per decomprimerlo. L'SDK fornisce gli eventi in un formato che consente di sviluppare rapidamente gli strumenti. Non è consigliabile utilizzare la traccia ETW non elaborata senza utilizzare l'SDK. Il formato dell'evento usato da MSVC non è documentato, è ottimizzato per la scalabilità a compilazioni enormi e può essere difficile da comprendere. Inoltre, l' C++ API di build Insights SDK è stabile, mentre il formato di traccia ETW non elaborato è soggetto a modifiche senza preavviso.

### <a name="sdk-types-and-functions-related-to-trace-consumption"></a>Tipi e funzioni SDK correlati al consumo di tracce

| Funzionalità | API C++ | API C | Note |
|--|--|--|--|
| Impostazione di callback di evento | [IAnalyzer](other-types/ianalyzer-class.md)<br />[IRelogger](other-types/irelogger-class.md) | [ANALYSIS_CALLBACKS](other-types/analysis-callbacks-struct.md)<br />[RELOG_CALLBACKS](other-types/relog-callbacks-struct.md) | Build C++ Insights SDK fornisce eventi tramite funzioni di callback. In C++implementare le funzioni di callback creando una classe Analyzer o relogger che eredita l'interfaccia IAnalyzer o IRelogger. In C implementare i callback nelle funzioni globali e fornire puntatori a essi nella struttura ANALYSIS_CALLBACKS o RELOG_CALLBACKS. |
| Compilazione di gruppi | [MakeStaticAnalyzerGroup](functions/make-static-analyzer-group.md)<br />[MakeStaticReloggerGroup](functions/make-static-relogger-group.md)<br />[MakeDynamicAnalyzerGroup](functions/make-dynamic-analyzer-group.md)<br />[MakeDynamicReloggerGroup](functions/make-dynamic-relogger-group.md) |  | L' C++ API fornisce funzioni helper e tipi per raggruppare più oggetti analizzatore e relogger. I gruppi sono un modo accurato per dividere un'analisi complessa in passaggi più semplici. [vcperf](https://github.com/microsoft/vcperf) è organizzato in questo modo. |
| Analisi o riregistrazione | [Analizzare](functions/analyze.md)<br />[Relog](functions/relog.md) | [Analizza](functions/analyze-a.md)<br />[AnalyzeW](functions/analyze-w.md)<br />[RelogA](functions/relog-a.md)<br />[RelogW](functions/relog-w.md) |  |

### <a name="analyzing-and-relogging"></a>Analisi e riregistrazione

L'utilizzo di una traccia viene eseguito tramite una sessione di analisi o una sessione di riregistrazione.

L'uso di un'analisi regolare è adatto per la maggior parte degli scenari. Questo metodo offre la flessibilità necessaria per scegliere il formato di output: `printf` testo, XML, JSON, database, chiamate REST e così via.

La riregistrazione è destinata ad analisi per scopi specifici che devono produrre un file di output ETW. Con la riregistrazione è possibile convertire gli C++ eventi di compilazione Insights nel proprio formato di evento ETW. Un uso appropriato della riregistrazione potrebbe consistere nell' C++ associare i dati di build Insights agli strumenti e all'infrastruttura ETW esistenti. Ad esempio, [vcperf](https://github.com/microsoft/vcperf) usa le interfacce di riregistrazione. Questo perché deve produrre dati che Windows Performance Analyzer, uno strumento ETW, può comprendere. Se si prevede di utilizzare le interfacce di registrazione, è necessaria una conoscenza preliminare del funzionamento di ETW.

### <a name="creating-analyzer-groups"></a>Creazione di gruppi di analizzatore

È importante capire come creare gruppi. Ecco un esempio che illustra come creare un gruppo analizzatore che stampa *Hello, World!* per ogni evento di inizio attività ricevuto.

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

### <a name="sdk-types-and-functions-related-to-events"></a>Tipi e funzioni SDK correlati agli eventi

| Funzionalità | API C++ | API C | Note |
|--|--|--|--|
| Corrispondenza e filtro degli eventi | [MatchEventStackInMemberFunction](functions/match-event-stack-in-member-function.md)<br />[MatchEventStack](functions/match-event-stack.md)<br />[MatchEventInMemberFunction](functions/match-event-in-member-function.md)<br />[MatchEvent](functions/match-event.md) |  | L' C++ API offre funzioni che semplificano l'estrazione degli eventi a cui si è interessati dalle tracce. Con l'API C, questo filtro deve essere eseguito manualmente. |
| Tipi di dati degli eventi | [Attività](cpp-event-data-types/activity.md)<br />[BackEndPass](cpp-event-data-types/back-end-pass.md)<br />[BottomUp](cpp-event-data-types/bottom-up.md)<br />[C1DLL](cpp-event-data-types/c1-dll.md)<br />[C2DLL](cpp-event-data-types/c2-dll.md)<br />[CodeGeneration](cpp-event-data-types/code-generation.md)<br />[CommandLine](cpp-event-data-types/command-line.md)<br />[Compilatore](cpp-event-data-types/compiler.md)<br />[CompilerPass](cpp-event-data-types/compiler-pass.md)<br />[Metodo EnvironmentVariable](cpp-event-data-types/environment-variable.md)<br />[Event](cpp-event-data-types/event.md)<br />[EventGroup](cpp-event-data-types/event-group.md)<br />[EventStack](cpp-event-data-types/event-stack.md)<br />[ExecutableImageOutput](cpp-event-data-types/executable-image-output.md)<br />[ExpOutput](cpp-event-data-types/exp-output.md)<br />[FileInput](cpp-event-data-types/file-input.md)<br />[FileOutput](cpp-event-data-types/file-output.md)<br />[ForceInlinee](cpp-event-data-types/force-inlinee.md)<br />[FrontEndFile](cpp-event-data-types/front-end-file.md)<br />[FrontEndFileGroup](cpp-event-data-types/front-end-file-group.md)<br />[FrontEndPass](cpp-event-data-types/front-end-pass.md)<br />[Funzione](cpp-event-data-types/function.md)<br />[ImpLibOutput](cpp-event-data-types/imp-lib-output.md)<br />[Chiamata](cpp-event-data-types/invocation.md)<br />[InvocationGroup](cpp-event-data-types/invocation-group.md)<br />[LibOutput](cpp-event-data-types/lib-output.md)<br />[Linker](cpp-event-data-types/linker.md)<br />[LinkerGroup](cpp-event-data-types/linker-group.md)<br />[LinkerPass](cpp-event-data-types/linker-pass.md)<br />[LTCG](cpp-event-data-types/ltcg.md)<br />[ObjOutput](cpp-event-data-types/obj-output.md)<br />[OptICF](cpp-event-data-types/opt-icf.md)<br />[OptLBR](cpp-event-data-types/opt-lbr.md)<br />[OptRef](cpp-event-data-types/opt-ref.md)<br />[Pass1](cpp-event-data-types/pass1.md)<br />[Pass2](cpp-event-data-types/pass2.md)<br />[PreLTCGOptRef](cpp-event-data-types/pre-ltcg-opt-ref.md)<br />[SimpleEvent](cpp-event-data-types/simple-event.md)<br />[SymbolName](cpp-event-data-types/symbol-name.md)<br />[TemplateInstantiation](cpp-event-data-types/template-instantiation.md)<br />[TemplateInstantiationGroup](cpp-event-data-types/template-instantiation-group.md)<br />[Thread](cpp-event-data-types/thread.md)<br />[TopDown](cpp-event-data-types/top-down.md)<br />[TraceInfo](cpp-event-data-types/trace-info.md)<br />[WholeProgramAnalysis](cpp-event-data-types/whole-program-analysis.md) | [CL_PASS_DATA](c-event-data-types/cl-pass-data-struct.md)<br />[EVENT_COLLECTION_DATA](c-event-data-types/event-collection-data-struct.md)<br />[EVENT_DATA](c-event-data-types/event-data-struct.md)<br />[EVENT_ID](c-event-data-types/event-id-enum.md)<br />[FILE_DATA](c-event-data-types/file-data-struct.md)<br />[FILE_TYPE_CODE](c-event-data-types/file-type-code-enum.md)<br />[FRONT_END_FILE_DATA](c-event-data-types/front-end-file-data-struct.md)<br />[FUNCTION_DATA](c-event-data-types/function-data-struct.md)<br />[FUNCTION_FORCE_INLINEE_DATA](c-event-data-types/function-force-inlinee-data-struct.md)<br />[INVOCATION_DATA](c-event-data-types/invocation-data-struct.md)<br />[INVOCATION_VERSION_DATA](c-event-data-types/invocation-version-data-struct.md)<br />[MSVC_TOOL_CODE](c-event-data-types/msvc-tool-code-enum.md)<br />[NAME_VALUE_PAIR_DATA](c-event-data-types/name-value-pair-data-struct.md)<br />[SYMBOL_NAME_DATA](c-event-data-types/symbol-name-data-struct.md)<br />[TEMPLATE_INSTANTIATION_DATA](c-event-data-types/template-instantiation-data-struct.md)<br />[TEMPLATE_INSTANTIATION_KIND_CODE](c-event-data-types/template-instantiation-kind-code-enum.md)<br />[TRACE_INFO_DATA](c-event-data-types/trace-info-data-struct.md)<br />[TRANSLATION_UNIT_PASS_CODE](c-event-data-types/translation-unit-pass-code-enum.md) |  |

### <a name="activities-and-simple-events"></a>Attività ed eventi semplici

Gli eventi sono disponibili in due categorie: *attività* e *eventi semplici*. Le attività sono processi in corso nel tempo che hanno un inizio e una fine. Gli eventi semplici sono occorrenze puntuali e non hanno una durata. Quando si analizzano le C++ tracce MSVC con Build Insights SDK, si riceveranno eventi distinti quando un'attività viene avviata e arrestata. Quando si verifica un evento semplice, si riceverà un solo evento.

### <a name="parent-child-relationships"></a>Relazioni padre-figlio

Le attività e gli eventi semplici sono correlati tra loro tramite relazioni padre-figlio. L'elemento padre di un'attività o di un evento semplice è l'attività comprendente in cui si verificano. Ad esempio, quando si compila un file di origine, il compilatore deve analizzare il file, quindi generare il codice. Le attività di analisi e generazione di codice sono entrambi elementi figlio dell'attività del compilatore.

Gli eventi semplici non hanno una durata, pertanto non è possibile che si verifichino altri elementi. Di conseguenza, non hanno mai elementi figlio.

Le relazioni padre-figlio di ogni attività e di un evento semplice sono indicate nella [tabella degli eventi](event-table.md). Conoscere queste relazioni è importante quando si utilizzano C++ gli eventi di compilazione Insights. Spesso è necessario basarsi su di essi per comprendere il contesto completo di un evento.

### <a name="properties"></a>Proprietà

Tutti gli eventi hanno le proprietà seguenti:

| Proprietà | Descrizione |
|--|--|
| Identificatore di tipo | Numero che identifica in modo univoco il tipo di evento. |
| Identificatore dell'istanza | Numero che identifica in modo univoco l'evento all'interno della traccia. Se due eventi dello stesso tipo si verificano in una traccia, entrambi ottengono un identificatore univoco dell'istanza. |
| Ora di inizio | L'ora di inizio di un'attività o l'ora in cui si è verificato un evento semplice. |
| Identificatore del processo | Numero che identifica il processo in cui si è verificato l'evento. |
| Identificatore thread | Numero che identifica il thread in cui si è verificato l'evento. |
| Indice processore | Indice in base zero che indica il processore logico da cui è stato generato l'evento. |
| Nome evento | Stringa che descrive il tipo di evento. |

Tutte le attività diverse dagli eventi semplici hanno anche queste proprietà:

| Proprietà | Descrizione |
|--|--|
| Ora di arresto | Ora di arresto dell'attività. |
| Durata esclusiva | Tempo impiegato in un'attività, escluso il tempo impiegato nelle attività figlio. |
| Tempo CPU | Tempo impiegato dalla CPU per l'esecuzione del codice nel thread associato all'attività. Non include il momento in cui il thread associato all'attività è rimasto in sospensione. |
| Tempo CPU esclusivo | Uguale al tempo della CPU, escluso il tempo di CPU trascorso dalle attività figlio. |
| Responsabilità della durata del clock | Contributo dell'attività al tempo complessivo del clock. La responsabilità del tempo reale prende in considerazione il parallelismo tra le attività. Si supponga ad esempio che due attività non correlate siano eseguite in parallelo. Entrambi hanno una durata di 10 secondi e esattamente la stessa ora di inizio e di fine. In questo caso, Build Insights assegna una responsabilità del tempo reale di 5 secondi. Al contrario, se queste attività vengono eseguite una dopo l'altra senza sovrapposizione, viene assegnata una responsabilità di 10 secondi a tempo reale. |
| Responsabilità esclusiva del tempo di clock | Uguale alla responsabilità del tempo reale, ma esclude la responsabilità del tempo di clock delle attività figlio. |

Alcuni eventi hanno proprietà proprie oltre a quelle indicate. In questo caso, le proprietà aggiuntive sono elencate nella [tabella degli eventi](event-table.md).

### <a name="consuming-events-provided-by-the-c-build-insights-sdk"></a>Utilizzo degli eventi forniti da C++ Build INSIGHTs SDK

#### <a name="the-event-stack"></a>Stack eventi

Ogni volta C++ che l'SDK di build Insights fornisce un evento, viene visualizzato sotto forma di stack. L'ultima voce nello stack è l'evento corrente e le voci prima di esse sono la gerarchia padre. Ad esempio, gli eventi di avvio e arresto [LTCG](event-table.md#ltcg) si verificano durante il passaggio 1 del linker. In questo caso, lo stack ricevuto contiene: \[[linker](event-table.md#linker), [PASS1](event-table.md#pass1), LTCG\]. La gerarchia padre è utile perché è possibile tracciare un evento nella relativa radice. Se l'attività LTCG menzionata in precedenza è lenta, è possibile scoprire immediatamente quale chiamata del linker è stata interrotta.

#### <a name="matching-events-and-event-stacks"></a>Eventi e stack di eventi corrispondenti

C++ Build Insights SDK consente di ottenere tutti gli eventi in una traccia, ma la maggior parte del tempo si occupa solo di un sottoinsieme. In alcuni casi, è possibile che si occupi solo di un subset di *stack di eventi*. L'SDK fornisce funzionalità che consentono di estrarre rapidamente gli eventi o lo stack di eventi necessari e rifiutare quelli che non si desidera. Questa operazione viene eseguita tramite le funzioni corrispondenti:

|  |  |
|--|--|
| [MatchEvent](functions/match-event.md) | Mantiene un evento se corrisponde a uno dei tipi specificati. Inoltri gli eventi corrispondenti a un'espressione lambda o a un altro tipo chiamabile. La gerarchia padre dell'evento non è considerata da questa funzione. |
| [MatchEventInMemberFunction](functions/match-event-in-member-function.md) | Mantiene un evento se corrisponde al tipo specificato nel parametro di una funzione membro. Spedire gli eventi corrispondenti alla funzione membro. La gerarchia padre dell'evento non è considerata da questa funzione. |
| [MatchEventStack](functions/match-event-stack.md) | Mantiene un evento se l'evento e la relativa gerarchia padre corrispondono ai tipi specificati. Consente di inviare gli eventi dell'evento e della gerarchia padre corrispondente a un'espressione lambda o a un altro tipo chiamabile. |
| [MatchEventStackInMemberFunction](functions/match-event-stack-in-member-function.md) | Mantiene un evento se l'evento e la relativa gerarchia padre corrispondono ai tipi specificati in un elenco di parametri della funzione membro. Consente di inviare gli eventi dell'evento e della gerarchia padre corrispondente alla funzione membro. |

Le funzioni di corrispondenza dello stack eventi come `MatchEventStack` consentono Gap quando si descrive la gerarchia padre di cui trovare la corrispondenza. Ad esempio, si può dire che si è interessati al [linker](event-table.md#linker)\[, [LTCG](event-table.md#ltcg)\] stack. Corrisponde anche al LINKer \[, [pass1](event-table.md#pass1), LTCG\] stack. L'ultimo tipo specificato deve essere il tipo di evento di cui trovare una corrispondenza e non fa parte della gerarchia padre.

#### <a name="capture-classes"></a>Acquisisci classi

Per utilizzare le funzioni di `Match*`, è necessario specificare i tipi per i quali si desidera trovare una corrispondenza. Questi tipi sono selezionati da un elenco di *classi di acquisizione*. Le classi di acquisizione sono disponibili in diverse categorie, descritte di seguito.

| Category | Descrizione |
|--|--|
| Exact | Queste classi di acquisizione vengono usate per trovare la corrispondenza con un tipo di evento specifico e nessun altro. Un esempio è la classe del [compilatore](cpp-event-data-types/compiler.md) , che corrisponde all'evento del [compilatore](event-table.md#compiler) . |
| Wildcard (Carattere jolly) | Queste classi di acquisizione possono essere usate per trovare la corrispondenza con qualsiasi evento dall'elenco di eventi supportati. Il carattere jolly dell' [attività](cpp-event-data-types/activity.md) , ad esempio, corrisponde a qualsiasi evento di attività. Un altro esempio è il carattere jolly [CompilerPass](cpp-event-data-types/compiler-pass.md) , che può corrispondere all'evento [FRONT_END_PASS](event-table.md#front-end-pass) o [BACK_END_PASS](event-table.md#back-end-pass) . |
| Gruppo | I nomi delle classi di acquisizione del gruppo terminano nel *gruppo*. Sono usati per trovare la corrispondenza con più eventi dello stesso tipo in una riga, ignorando gli spazi vuoti. Hanno senso solo quando si corrispondono a eventi ricorsivi, perché non si conosce il numero di elementi presenti nello stack di eventi. Ad esempio, l'attività [FRONT_END_FILE](event-table.md#front-end-file) si verifica ogni volta che il compilatore analizza un file. Questa attività è ricorsiva perché il compilatore potrebbe trovare una direttiva include durante l'analisi del file. La classe [FrontEndFile](cpp-event-data-types/front-end-file.md) corrisponde solo a un evento FRONT_END_FILE nello stack. Usare la classe [FrontEndFileGroup](cpp-event-data-types/front-end-file-group.md) per trovare la corrispondenza con l'intera gerarchia di inclusione. |
| Gruppo di caratteri jolly | Un gruppo di caratteri jolly combina le proprietà dei caratteri jolly e dei gruppi. L'unica classe di questa categoria è [InvocationGroup](cpp-event-data-types/invocation-group.md), che corrisponde e acquisisce tutti gli eventi del [linker](event-table.md#linker) e [del compilatore](event-table.md#compiler) in un singolo stack di eventi. |

Per informazioni sulle classi di acquisizione che è possibile usare per la corrispondenza di ogni evento, vedere la [tabella degli eventi](event-table.md) .

#### <a name="after-matching-using-captured-events"></a>Dopo la corrispondenza: usando gli eventi acquisiti

Una volta completata correttamente la corrispondenza, le funzioni `Match*` costruiscono gli oggetti della classe Capture e li inviano alla funzione specificata. Usare questi oggetti della classe Capture per accedere alle proprietà degli eventi.

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

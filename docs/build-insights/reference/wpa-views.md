---
title: 'Riferimento: Visualizzazioni di Windows Performance Analyzer'
description: Informazioni di riferimento per le visualizzazioni di approfondimenti sulla compilazione in C.
ms.date: 11/03/2019
helpviewer_keywords:
- C++ Build Insights
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: b54b1b76d83b77ec7b8d8d3309d81ed9eb2db2d0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323240"
---
# <a name="reference-windows-performance-analyzer-views"></a>Riferimento: Visualizzazioni di Windows Performance Analyzer

::: moniker range="<=vs-2017"

In Visual Studio 2019 sono disponibili gli strumenti di analisi della build in C. Per visualizzare la documentazione di questa versione, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2019.To see the documentation for this version, set the Visual Studio **Version** selector control for this article to Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range="vs-2019"

In questo articolo vengono fornite informazioni dettagliate su ciascuna delle visualizzazioni di Analisi dettagliate compilazione di C, disponibili in Analizzatore prestazioni Windows (WPA). Utilizzare questa pagina per trovare:

- descrizioni delle colonne di dati; E
- preimpostazioni disponibili per ogni vista, compreso l'uso previsto e la modalità di visualizzazione preferita.

Se non si ha familiarità con WPA, è consigliabile acquisire familiarità con le [nozioni di base di WPA per](/cpp/build-insights/tutorials/wpa-basics)le informazioni dettagliate sulla compilazione di C.

## <a name="build-explorer"></a>Build Explorer

La visualizzazione Esplora compilazione viene utilizzata per:The Build Explorer view is used to:

- diagnosticare problemi di parallelismo,
- determinare se il tempo di compilazione è dominato dall'analisi, dalla generazione di codice o dal collegamento e
- identificare i colli di bottiglia e le attività di compilazione insolitamente lunghe.

### <a name="build-explorer-view-data-columns"></a>Creare colonne di dati della visualizzazione Esplora risorse

| Nome colonna | Descrizione |
|-|-|
| BuildTimelineDescription (Descrizionedi sequenza temporale) | Descrizione testuale della sequenza temporale in cui si verifica l'attività o la proprietà corrente. |
| BuildTimelineId          | Identificatore in base zero per la sequenza temporale in cui si verifica l'attività o la proprietà corrente. |
| Componente                | Componente in fase di compilazione o collegamento quando è stato generato l'evento corrente. Il valore di questa colonna è * \<Invocation X Info\> * quando nessun componente è associato a questo evento. X è un identificatore numerico univoco per la chiamata eseguita al momento dell'emissione dell'evento. Questo identificatore è uguale a quello nella colonna InvocationId per questo evento. |
| Conteggio                    | Numero di attività o proprietà rappresentate da questa riga di dati. Questo valore è sempre 1 ed è utile solo negli scenari di aggregazione quando sono raggruppate più righe. |
| ExclusiveCPUTime (Ora esclusivaCPU)         | Quantità di tempo CPU in millisecondi utilizzata da questa attività. Il tempo trascorso nelle attività figlio non è incluso in questo importo. |
| Durata esclusiva        | Durata del millisecondo dell'attività. La durata delle attività figlio non è inclusa in questo importo. |
| InclusiveCPUTime (Ora inclusivaCPU)         | Quantità di tempo della CPU in millisecondi utilizzata da questa attività e da tutte le attività figlio. |
| Durata Inclusa        | Durata dei millisecondi di questa attività, incluse tutte le attività figlio. |
| InvocationDescrizione    | Descrizione testuale della chiamata in cui si è verificato questo evento. La descrizione include se si tratta di *cl.exe* o *link.exe*e un identificatore di chiamata numerica univoco. Se applicabile, include il percorso completo del componente compilato o collegato durante la chiamata. Per le chiamate che non compilano alcun componente o per quelle che compilano più componenti, il percorso è vuoto. L'identificatore di chiamata è uguale a quello nella colonna InvocationId. |
| InvocationId             | Identificatore numerico univoco per la chiamata in cui si è verificato questo evento. |
| Nome                     | Nome dell'attività o della proprietà rappresentata da questo evento. |
| Tempo                     | Timestamp che identifica quando si è verificato l'evento. |
| Strumento                     | Lo strumento in esecuzione quando si è verificato questo evento. Il valore di questa colonna è CL o Link. |
| Type                     | Tipo dell'evento corrente. Questo valore è Activity o Property.This value is either Activity or Property. |
| Valore                    | Se l'evento corrente è una proprietà, questa colonna contiene il relativo valore. Questa colonna viene lasciata vuota quando l'evento corrente è un'attività. |

### <a name="build-explorer-view-presets"></a>Predefiniti di visualizzazione di Esplora risorse

| Nome predefinito           | Modalità di visualizzazione preferita | Uso |
|-----------------------|---------------------|------------|
| Statistiche attività   | Grafico / Tabella       | Utilizzare questo predefinito per visualizzare le statistiche aggregate per tutte le attività di Esplora campi. In modalità tabella, indicare immediatamente se la compilazione è dominata dall'analisi, dalla generazione di codice o dal linker. Le durate aggregate per ogni attività vengono ordinate in ordine decrescente. Eseguire il drill-in espandendo il nodo principale per individuare facilmente le chiamate che richiedono più tempo per queste attività principali. Se lo si desidera, è possibile modificare le impostazioni WPA per visualizzare le medie o altri tipi di aggregazioni. In modalità grafico, vedere quando ogni attività è attiva durante la compilazione. |
| Chiamate           | Grafico               | Scorrere verso il basso un elenco di chiamate nella visualizzazione grafico ordinate in base all'ora di inizio. È possibile utilizzarlo insieme alla visualizzazione CPU (Campionata) per trovare le chiamate che si allineano con le zone a basso utilizzo della CPU. Rilevare i problemi di parallelismo. |
| Proprietà di chiamataInvocation Properties | Tabella               | Trovare rapidamente le informazioni chiave su un determinato compilatore o chiamata al linker. Determinare la versione, la directory di lavoro o la riga di comando completa utilizzata per richiamarla. |
| Tempistica             | Grafico               | Vedere un grafico a barre di come la compilazione è stata parallelizzata. Identificare a colpo d'occhio problemi di parallelismo e colli di bottiglia. Configurare WPA per assegnare significati diversi alle barre in base alle proprie esigenze. Scegliere le descrizioni delle chiamate come ultima colonna raggruppata per visualizzare un grafico a barre codificato a colori di tutte le chiamate. Consente di identificare rapidamente i colpevoli che richiedono molto tempo. Quindi, ingrandire e scegliere il nome dell'attività come ultima colonna raggruppata per visualizzare le parti più lunghe. |

## <a name="files"></a>File

La vista File viene utilizzata per:

- determinare quali intestazioni vengono incluse più spesso, e
- consentono di decidere cosa includere in un'intestazione precompilata (PCH).

### <a name="files-view-data-columns"></a>Colonne di dati della visualizzazione File

| Nome colonna              | Descrizione |
|--------------------------|-------------|
| ActivityName             | Attività in corso quando è stato generato questo evento di file. Attualmente, questo valore è sempre *Parsing*. |
| BuildTimelineDescription (Descrizionedi sequenza temporale) | * |
| BuildTimelineId          | * |
| Componente                | * |
| Conteggio                    | * |
| Livello nidificazione                    | Posizione in base zero nell'albero di inclusione in cui si trova questo file. Il conteggio inizia dalla radice dell'albero di inclusione. Il valore 0 corrisponde in genere a un file con estensione c/cpp. |
| Durata esclusiva        | * |
| IncludedBy               | Percorso completo del file che includeva il file corrente. |
| PercorsoIncluso             | Percorso completo del file corrente. |
| Durata Inclusa        | * |
| InvocationId             | * |
| StartTime                | Timestamp che rappresenta l'ora in cui è stato generato l'evento del file corrente. |
| Strumento                     | * |

\*Il valore di questa colonna è lo stesso della visualizzazione Esplora risorse di [compilazione.](#build-explorer-view-data-columns)

### <a name="files-view-presets"></a>Predefiniti della vista File

| Nome predefinito | Modalità di visualizzazione preferita | Uso |
|-------------|---------------------|------------|
| Statistiche  | Tabella               | Vedere quali file hanno il tempo di analisi aggregato più alto esaminando l'elenco in ordine decrescente. Utilizzare queste informazioni per ristrutturare le intestazioni o decidere cosa includere nel PCH. |

## <a name="functions"></a>Funzioni

La visualizzazione Funzioni viene utilizzata per identificare le funzioni con un tempo di generazione del codice eccessivamente lungo.

### <a name="functions-view-data-columns"></a>Colonne di dati della visualizzazione Funzioni

| Nome colonna              | Descrizione |
|--------------------------|-------------|
| ActivityName             | Attività in corso quando è stato generato questo evento di funzione. Attualmente, questo valore è sempre *CodeGeneration*. |
| BuildTimelineDescription (Descrizionedi sequenza temporale) | * |
| BuildTimelineId          | * |
| Componente                | * |
| Conteggio                    | * |
| Duration                 | Durata dell'attività di generazione del codice per questa funzione. |
| FunctionName             | Nome della funzione sottoposta a generazione di codice. |
| InvocationId             | * |
| StartTime                | Timestamp che rappresenta quando è stato generato l'evento di funzione corrente. |
| Strumento                     | * |

\*Il valore di questa colonna è lo stesso della visualizzazione Esplora risorse di [compilazione.](#build-explorer-view-data-columns)

### <a name="functions-view-presets"></a>Predefiniti della vista Funzioni

| Nome predefinito | Modalità di visualizzazione preferita | Uso |
|-------------|---------------------|------------|
| Statistiche  | Tabella               | Vedere quali funzioni avevano il più alto tempo di generazione di codice aggregato esaminando l'elenco in ordine decrescente. Possono suggerire dove il codice utilizza in modo eccessivo la parola chiave **__forceinline** o che alcune funzioni potrebbero essere troppo grandi. |
| Tempistica   | Grafico               | Guarda questo grafico a barre per conoscere la posizione e la durata delle funzioni che richiedono più tempo per essere generate. Verificare se sono in linea con i colli di bottiglia nella visualizzazione Esplora risorse di compilazione. In tal caso, intraprendere l'azione appropriata per ridurre i tempi di generazione del codice e a vantaggio dei tempi di compilazione. |

## <a name="see-also"></a>Vedere anche

[Guida introduttiva a Informazioni dettagliate sulla compilazione in C](/cpp/build-insights/get-started-with-cpp-build-insights)\
[Riferimento: comandi vcperf](vcperf-commands.md)\
[Esercitazione: Nozioni di base su Analizzatore prestazioni WindowsTutorial: Windows Performance Analyzer basics](/cpp/build-insights/tutorials/wpa-basics)\
[Windows Performance Analyzer](/windows-hardware/test/wpt/windows-performance-analyzer)

::: moniker-end

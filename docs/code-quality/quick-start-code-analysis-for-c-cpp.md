---
title: 'Guida introduttiva: Analisi codice per C/C++'
description: Eseguire l'analisi statica su codice C , in Visual Studio per rilevare i problemi di codifica comuni e difetti.
ms.date: 04/08/2020
ms.topic: conceptual
helpviewer_keywords:
- C/C++ code analysis
- code analysis, C/C++
ms.openlocfilehash: 43866564915ac84d227ccbf347280efe59e33351
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370577"
---
# <a name="quickstart-code-analysis-for-cc"></a>Guida introduttiva: Analisi codice per C/C++

È possibile migliorare la qualità dell'applicazione eseguendo regolarmente l'analisi del codice C o C++. L'analisi del codice può aiutarti a individuare problemi comuni e violazioni delle buone pratiche di programmazione. E, trova difetti che sono difficili da scoprire attraverso i test. Gli avvisi sono diversi dagli errori e dagli avvisi del compilatore: cerca modelli di codice specifici noti per causare problemi. Ovvero, il codice valido, ma potrebbe comunque creare problemi, per l'utente o per altre persone che utilizzano il codice.

## <a name="configure-rule-sets-for-a-project"></a>Configurare i set di regole per un progetto

1. In **Esplora soluzioni**aprire il menu di scelta rapida per il nome del progetto, quindi scegliere **Proprietà**.

1. Facoltativamente, negli elenchi **Configurazione** e **Piattaforma** scegliere la configurazione di compilazione e la piattaforma di destinazione.

1. Per eseguire l'analisi del codice ogni volta che il progetto viene compilato utilizzando la configurazione selezionata, selezionare la casella di controllo **Abilita analisi codice alla compilazione.** È inoltre possibile eseguire manualmente l'analisi del codice aprendo il menu **Analizza** e scegliendo **Esegui analisi codice su** *NomeProgetto* o **Esegui analisi codice su file**.

1. Scegliere il set di [regole](using-rule-sets-to-specify-the-cpp-rules-to-run.md) che si desidera utilizzare o creare un set di [regole personalizzato.](using-rule-sets-to-specify-the-cpp-rules-to-run.md#to-create-a-rule-set-in-a-text-editor) Se si usa LLVM/clang-cl, vedere Uso di [Clang-Tidy in Visual Studio](../code-quality/clang-tidy.md) per configurare le opzioni di analisi Clang-Tidy.

### <a name="standard-cc-rule-sets"></a>Set di regole standard C/C

Visual Studio include questi set standard di regole per il codice nativo:Visual Studio includes these standard sets of rules for native code:

| Set di regole | Descrizione |
|--|--|
| **Regole aritmetiche di controllo di base di C** | Queste regole applicano i controlli relativi alle [operazioni aritmetiche dalle linee guida](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#es-expressions-and-statements)di base di C. |
| **Regole dei limiti di controllo di base di C** | Queste regole [applicano](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#probounds-bounds-safety-profile)il profilo Bounds delle linee guida di base di C. |
| **Regole di classe di controllo di base di C** | Queste regole applicano i controlli relativi alle classi dalle linee guida di [base di C.](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c-classes-and-class-hierarchies) |
| **Regole di concorrenza per il controllo di base di C** | Queste regole applicano i controlli relativi alla concorrenza dalle linee guida di [base di C.](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#cpcon-concurrency) |
| **Regole di controllo Const di controllo di base di C** | Queste regole [applicano i controlli relativi a const dalle linee guida](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#con-constants-and-immutability)di base di C. |
| **Regole di dichiarazione di controllo di base di C** | Queste regole applicano i controlli relativi alle [dichiarazioni delle linee guida](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#i-interfaces)di base di C. |
| **Regole di enum di controllo di base di C** | Queste regole [applicano i controlli relativi all'enumerazione dalle linee guida](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#S-enum)di base di C. |
| **Regole sperimentali di controllo di base di C** | Queste regole raccolgono alcuni controlli sperimentali. Infine, ci aspettiamo che questi controlli vengano spostati in altri set di regole o rimossi completamente. |
| **Regole per le funzioni di controllo di base di C** | Queste regole applicano i controlli relativi alle funzioni delle linee guida di base di [C.](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f-functions) |
| **Regole GSL di controllo dei core di C** | Queste regole applicano i controlli relativi alla libreria di supporto delle linee guida dalle linee guida di [base di C.](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#S-gsl) |
| **Regole della durata del controllo di base di C** | Queste regole applicano il profilo Durata delle Linee guida di [base di C.](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#prolifetime-lifetime-safety-profile) |
| **Regole del puntatore del proprietario del controllo di base di C** | Queste regole applicano i controlli di gestione delle risorse relativi al [proprietario&lt;T&gt; dalle linee guida](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#r-resource-management)di base di C. |
| **Regole del puntatore non elaborato di controllo di base di C** | Queste regole applicano i controlli di gestione delle risorse relativi [ai puntatori non elaborati dalle linee guida](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#r-resource-management)di base di C. |
| **Regole di controllo di base di C** | Queste regole applicano un sottoinsieme dei controlli dalle linee guida di base di [C.](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c-core-guidelines) Utilizzare questo set di regole per includere tutte le regole di controllo di base di C, ad eccezione dei set di regole Enum e Sperimentale. |
| **Regole per il puntatore condiviso di controllo di base di C** | Queste regole applicano controlli di gestione delle risorse relativi [ai tipi con semantica](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#r-resource-management)del puntatore condiviso dalle linee guida di base di C. |
| **Regole STL di controllo di base di C** | Queste regole applicano i controlli relativi alla [libreria STL (Standard Template Library) di C' dalle Linee guida](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#S-stdlib)di base di C. |
| **Regole di stile di controllo di base di C** | Queste regole applicano i controlli relativi all'utilizzo di espressioni e istruzioni dalle linee guida di base di [C.](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#es-expressions-and-statements) |
| **Regole per i tipi di controllo principali di C** | Queste regole applicano il profilo Tipo delle Linee guida di [base di C.](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#prosafety-type-safety-profile) |
| **Regole univoche per il controllo di base di C** | Queste regole applicano controlli di gestione delle risorse relativi ai tipi con semantica del [puntatore univoca dalle linee guida](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#r-resource-management)di base di C. |
| **Regole di controllo della concorrenzaConcurrency Check Rules** | Queste regole applicano un set di controlli del modello di concorrenza Win32 in C. |
| **Regole di concorrenzaConcurrency Rules** | Aggiunge le regole di concorrenza dalle linee guida di base di C' alle regole di **controllo della concorrenza**. |
| **Regole minime microsoft Native** | Queste regole si concentrano sui problemi più critici nel codice nativo, inclusi potenziali problemi di sicurezza e arresti anomali dell'applicazione. È consigliabile includere questo set di regole in qualsiasi set di regole personalizzato creato per i progetti nativi. |
| **Regole consigliate native Microsoft** | Queste regole si concentrano sui problemi più critici e comuni nel codice nativo. Questi problemi includono potenziali falle di sicurezza e arresti anomali dell'applicazione. È consigliabile includere questo set di regole in qualsiasi set di regole personalizzato creato per i progetti nativi. Questo set di regole è progettato per funzionare con Visual Studio Professional Edition e versioni successive. Include tutte le regole nelle **regole minime microsoft native**. |

Visual Studio include questi set standard di regole per il codice gestito:Visual Studio includes these standard sets of rules for managed code:

| Set di regole | Descrizione |
|--|--|
| **Regole di correttezza di base Microsoft** | Queste regole si concentrano sugli errori logici e sugli errori comuni commessi nell'utilizzo delle API del framework. Includere questo set di regole per espandere l'elenco degli avvisi segnalati dalle regole minime consigliate. |
| **Regole delle linee guida per la progettazione di Base Microsoft** | Queste regole si concentrano sull'applicazione delle procedure consigliate per semplificare la comprensione e l'utilizzo del codice. Includere questo set di regole se il progetto include codice di libreria o se si desidera applicare le procedure consigliate per il codice facilmente gestibile. |
| **Regole di correttezza estesa MicrosoftMicrosoft Extended Correctness Rules** | Queste regole si espandono sulle regole di correttezza di base per ottimizzare la logica segnalata e gli errori di utilizzo del framework. Viene posta particolare enfasi su scenari specifici, ad esempio l'interoperabilità COM e le applicazioni mobili. È consigliabile includere questo set di regole se uno di questi scenari si applica al progetto o per individuare ulteriori problemi nel progetto. |
| **Regole delle linee guida per la progettazione estesa MicrosoftMicrosoft Extended Design Guideline Rules** | Queste regole si espandono sulle regole di base delle linee guida di progettazione per massimizzare i problemi di usabilità e manutenibilità segnalati. Viene posta particolare enfasi sulle linee guida di denominazione. È consigliabile includere questo set di regole se il progetto include codice di libreria o se si desidera applicare gli standard più elevati per la scrittura di codice gestibile. |
| **Regole di globalizzazione Microsoft** | Queste regole si concentrano sui problemi che impediscono la corretta visualizzazione dei dati nell'applicazione se utilizzati in lingue, impostazioni locali e impostazioni cultura diverse. Includere questo set di regole se l'applicazione è localizzata e/o globalizzata. |
| **Regole minime gestite da Microsoft** | Queste regole si concentrano sui problemi più critici nel codice per cui l'analisi del codice è la più accurata.  Queste regole sono di dimensioni ridotte e sono destinate solo per l'esecuzione in edizioni limitate di Visual Studio.These rules are small in number and they are intended to run only in limited Visual Studio editions.  Usare MinimumRecommendedRules.ruleset con altre edizioni di Visual Studio.Use MinimumRecommendedRules.ruleset with other Visual Studio editions. |
| **Regole consigliate gestite da Microsoft** | Queste regole si concentrano sui problemi più critici nel codice. Questi problemi includono potenziali falle di sicurezza, arresti anomali delle applicazioni e altri importanti errori di logica e progettazione. È consigliabile includere questo set di regole in qualsiasi set di regole personalizzato creato per i progetti. |
| **Regole minime di Microsoft Misto (C)/CLR** | Queste regole si concentrano sui problemi più critici nei progetti in linguaggio C, che supportano Common Language Runtime. Questi problemi includono potenziali falle di sicurezza, arresti anomali delle applicazioni e altri importanti errori di logica e progettazione. È consigliabile includere questo set di regole in qualsiasi set di regole personalizzato creato per i progetti in linguaggio C, che supportano Common Language Runtime. |
| **Regole consigliate per Microsoft Misto (C** | Queste regole si concentrano sui problemi più comuni e critici nei progetti in linguaggio C, che supportano Common Language Runtime. Questi problemi includono potenziali falle di sicurezza, arresti anomali delle applicazioni e altri importanti errori di logica e progettazione. Questo set di regole è progettato per l'utilizzo nell'edizione di Visual Studio Professional e versioni successive. |
| **Regole di sicurezza Microsoft** | Questo set di regole contiene tutte le regole di sicurezza Microsoft.This rule set contains all Microsoft security rules. Includere questo set di regole per massimizzare il numero di potenziali problemi di sicurezza segnalati. |

Per includere tutte le regole:

| Set di regole | Descrizione |
|--|--|
| **Microsoft Tutte le regole** | Questo set di regole contiene tutte le regole. L'esecuzione di questo set di regole può comportare la segnalazione di un numero elevato di avvisi. Utilizzare questo set di regole per ottenere un quadro completo di tutti i problemi nel codice. Può aiutarti a decidere quali dei set di regole più mirati sono più appropriati per l'esecuzione per i tuoi progetti. |

## <a name="run-code-analysis"></a>Eseguire l'analisi del codice

Nella pagina **Analisi codice** della finestra di dialogo Proprietà progetto è possibile configurare l'analisi del codice in modo che venga eseguita ogni volta che si compila il progetto. È inoltre possibile eseguire manualmente l'analisi del codice.

Per eseguire l'analisi del codice su una soluzione:

- Scegliere Esegui analisi **codice nella soluzione**dal menu **Compila** .

Per eseguire l'analisi del codice su un progetto:

1. In Esplora soluzioni selezionare il nome del progetto.

1. Scegliere Esegui analisi **codice in** *Nome progetto*dal menu **Compila** .

Per eseguire l'analisi del codice su un file:

1. In Esplora soluzioni selezionare il nome del file.

1. Nel menu **Compila** scegliere **Esegui analisi codice su file** o premere CTRL **.**

   Il progetto o la soluzione vengono compilati e viene eseguita l'analisi del codice. I risultati vengono visualizzati nella finestra Elenco errori.

## <a name="analyze-and-resolve-code-analysis-warnings"></a>Analizzare e risolvere gli avvisi dell'analisi del codice

Nella finestra Elenco errori sono elencati gli avvisi dell'analisi del codice trovati. I risultati vengono visualizzati in una tabella. Se sono disponibili ulteriori informazioni su un particolare avviso, la prima colonna contiene un controllo di espansione. Scegliere per espandere la visualizzazione per ulteriori informazioni sul problema. Se possibile, l'analisi del codice consente di visualizzare i numeri di riga e la logica di analisi che ha portato all'avviso.

Per informazioni dettagliate sull'avviso, incluse le possibili soluzioni al problema, scegliere l'ID avviso nella colonna Codice per visualizzare l'articolo della Guida in linea corrispondente.

Fare doppio clic su un avviso per spostare il cursore sulla riga di codice che ha causato l'avviso nell'editor di codice di Visual Studio. In alternativa, premere INVIO sull'avviso selezionato.

Dopo aver compreso il problema, è possibile risolverlo nel codice. Quindi, eseguire nuovamente l'analisi del codice per assicurarsi che l'avviso non viene più visualizzato nell'Elenco errori.

## <a name="create-work-items-for-code-analysis-warnings"></a>Creare elementi di lavoro per gli avvisi dell'analisi del codiceCreate work items for code analysis warnings

È possibile usare la funzionalità di gestione degli elementi di lavoro per registrare bug da Visual Studio. Per usare questa funzionalità, è necessario connettersi a un'istanza di Azure DevOps Server (in precedenza Team Foundation Server).

### <a name="to-create-a-work-item-for-one-or-more-cc-code-warnings"></a>Per creare un elemento di lavoro per uno o più avvisi del codice C/C++

1. Nell'Elenco errori, espandere e selezionare gli avvisi

1. Scegliere **Crea elemento**di lavoro dal menu di scelta rapida per gli avvisi, quindi scegliere il tipo di elemento di lavoro.

1. Visual Studio crea un singolo elemento di lavoro per gli avvisi selezionati e visualizza l'elemento di lavoro in una finestra del documento dell'IDE.

1. Aggiungere eventuali informazioni aggiuntive e quindi scegliere **Salva elemento di lavoro**.

## <a name="search-and-filter-code-analysis-results"></a>Ricerca e filtro dei risultati dell'analisi del codice

Puoi effettuare una ricerca in lunghi elenchi di messaggi di avviso e filtrare gli avvisi nelle soluzioni composte da più progetti.

- **Per filtrare gli avvisi in base al titolo o all'ID avviso:** immettere la parola chiave nella casella Elenco errori di ricerca.

- **Per filtrare gli avvisi in base**alla gravità : per impostazione predefinita, ai messaggi di analisi del codice viene assegnato un livello di gravità **Avviso**. È possibile assegnare la gravità di uno o più messaggi come **Errore** in un set di regole personalizzato. Nella colonna **Gravità** **dell'Elenco errori**scegliere la freccia a discesa e quindi l'icona del filtro. Scegliere **Avviso** o **Errore** per visualizzare solo i messaggi a cui è assegnata la rispettiva gravità. Scegliere **Seleziona tutto** per visualizzare tutti i messaggi.

## <a name="see-also"></a>Vedere anche

- [Analisi codice per C/C++](../code-quality/code-analysis-for-c-cpp-overview.md)

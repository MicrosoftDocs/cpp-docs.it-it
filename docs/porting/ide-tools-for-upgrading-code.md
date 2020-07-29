---
title: Strumenti IDE di Visual Studio per l'aggiornamento del codice C++
description: L'editor di codice C++ e gli strumenti di analisi del codice in Visual Studio consentono di modernizzare la codebase di C++.
ms.date: 11/13/2019
ms.topic: conceptual
ms.openlocfilehash: 0d43da784e1e2f7789ac17ec01163ce29944e93d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87205730"
---
# <a name="visual-studio-ide-tools-for-upgrading-c-code"></a>Strumenti IDE di Visual Studio per l'aggiornamento del codice C++

Visual Studio consente di aggiornare il codice C++ legacy con opzioni del compilatore, avvisi di analisi del codice e funzionalità dell'editor quali correzioni rapide, informazioni rapide e la barra di scorrimento avanzata. Il termine "codice legacy" si riferisce a una di queste categorie:

- Codice precedentemente consentito dal compilatore Microsoft C++ (MSVC) ma mai conforme allo standard C++.

   Per aggiornare il codice MSVC non conforme precedente, attivare l'opzione del compilatore [/permissive-](../build/reference/permissive-standards-conformance.md) . Tutte le istanze di utilizzi non conformi vengono sottolineate con il controllo ortografia durante rosso nell'editor di codice. I messaggi di errore nella finestra **Elenco errori** includono un Consiglio per la risoluzione dell'errore. Fare clic sul codice di errore per passare alla relativa pagina della guida nella documentazione. Se la correzione di tutti gli errori in una sola volta non è praticabile, è possibile aggiornare il codice non conforme in fasi attivando l'opzione **permissiva** , correggendo alcuni errori, quindi riattivando l'opzione. Il codice verrà compilato con i nuovi miglioramenti ed è possibile tornare indietro e correggere i problemi rimanenti in un secondo momento. Per esempi di codice MSVC non conforme, vedere la pagina [/permissive-](../build/reference/permissive-standards-conformance.md) .

- Codice che è stato consentito in una versione precedente dello standard C++ ma è stato deprecato o rimosso in una versione successiva.

   Per eseguire l'aggiornamento a uno standard del linguaggio più recente, impostare l'opzione [standard del linguaggio C++](../build/reference/std-specify-language-standard-version.md) sullo standard desiderato e correggere gli eventuali errori di compilazione generati. In generale, è consigliabile impostare lo standard del linguaggio su [/std: c++ 17](../build/reference/std-specify-language-standard-version.md). Gli errori generati durante l'aggiornamento a uno standard più recente non sono correlati agli errori generati quando si usa l'opzione **permissive** .

- Codice conforme a tutte le versioni dello standard, ma non è più considerata la procedura consigliata nel linguaggio C++ moderno.

   Per identificare il codice in cui sono consigliate le modifiche, eseguire l' [analisi del codice](/cpp/code-quality/code-analysis-for-c-cpp-overview).

## <a name="open-and-convert-a-legacy-project"></a>Aprire e convertire un progetto legacy

Se il progetto Legacy è basato su una versione precedente di Visual Studio, è possibile aprirlo in Visual Studio 2017 o Visual Studio 2019. Visual Studio lo converte automaticamente nello schema del progetto corrente con supporto per tutte le funzionalità più recenti del compilatore e dell'IDE.

![Aggiornare un progetto](media/upgrade-dialog-v142.png "Aggiornare un progetto")

Per altre informazioni, vedere [aggiornare i progetti C++ da versioni precedenti di Visual Studio](upgrading-projects-from-earlier-versions-of-visual-cpp.md).

## <a name="search-the-code-base"></a>Cerca nella codebase

L'aggiornamento di una codebase spesso implica la ricerca in più file. Per cercare qualsiasi elemento nella codebase, premere **CTRL + T** per visualizzare la casella **di ricerca vai a tutti** .

![Vai a tutti](media/go-to-all.png "Vai a tutti")

Per restringere l'ambito di ricerca, digitare uno dei filtri di 1 lettera, seguito da uno spazio e quindi dall'elemento che si sta cercando.

## <a name="error-list"></a>Elenco errori

Dopo aver impostato lo standard del linguaggio C++ desiderato e qualsiasi altra opzione del compilatore (proprietà del**progetto**  >  **Properties**  >  **generale**), premere **CTRL + MAIUSC + B** per compilare il progetto. È possibile che vengano visualizzati alcuni errori e avvisi sotto forma di controllo ortografia durante rosse in varie posizioni del codice. Gli errori vengono visualizzati anche nella **Elenco errori**. Per ulteriori informazioni su un errore specifico, fare clic sul codice di errore per accedere alla pagina della guida nella documentazione. I codici di errore che iniziano con "C" sono errori del compilatore. I codici che iniziano con "MSB" sono errori di MSBuild che indicano un problema con la configurazione del progetto.

![Errori del compilatore e di MSBuild in Elenco errori](media/compiler-error-list.png "Errori del compilatore e di MSBuild in Elenco errori")

## <a name="document-health-indicator"></a>Indicatore di integrità del documento

L'indicatore di integrità del documento nella parte inferiore dell'editor Mostra il numero di errori e avvisi nel documento corrente e consente di spostarsi direttamente da un avviso/errore a quello successivo.

![Indicatore di integrità del documento](media/document-health-indicator.png "Indicatore di integrità del documento")

In molti casi, è possibile trovare altre informazioni su un errore specifico nella documentazione relativa alla cronologia delle modifiche di Visual Studio e ai miglioramenti della conformità.

- [Miglioramenti della conformità di C++](../overview/cpp-conformance-improvements.md)
- [Visual C++ cronologia modifiche 2003-2015](visual-cpp-change-history-2003-2015.md)
- [Panoramica dei potenziali problemi di aggiornamento](overview-of-potential-upgrade-issues-visual-cpp.md)

## <a name="use-code-analysis-to-modernize-your-code"></a>Usare l'analisi del codice per modernizzare il codice

Quando si esegue l'aggiornamento, è consigliabile eseguire l'analisi del codice nel progetto in modo che il codice sia conforme almeno alle regole consigliate di Microsoft Native. Queste regole sono una combinazione di regole definite da Microsoft e un subset del [linee guida di base di C++](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines). Conformemente a questi problemi, si ridurranno o elimineranno in modo considerevole le origini dei bug più comuni e, allo stesso tempo, il codice risulta più leggibile e quindi più facile da gestire. L'analisi del codice con le regole consigliate native Microsoft è abilitata per impostazione predefinita. È possibile abilitare regole aggiuntive in **Project**  >  **Properties**  >  **analisi codice**Proprietà progetto. Il codice che viola una delle regole viene contrassegnato come avviso ed è sottolineato con una zigzag verde nell'editor di codice. Passare il puntatore del mouse su zigzag per visualizzare una descrizione comando **informazioni rapide** che descrive il problema.

![Descrizione comando analisi codice](media/code-analysis-tooltip.png "Avviso di analisi del codice")

Fare clic sull'icona del filtro nella colonna **codice** per scegliere gli avvisi visualizzati.

![Filtri di analisi codice in Elenco errori](media/code-analysis-filter.png "Filtri di analisi codice in Elenco errori")

Gli errori e gli avvisi di analisi del codice vengono visualizzati anche nella **Elenco errori** Analogamente agli errori del compilatore.

![Avvisi di analisi del codice in Elenco errori](media/code-analysis-error-list.png "Avvisi di analisi del codice in Elenco errori")

È possibile modificare le regole attive e creare RuleSet personalizzati. Per altre informazioni sull'uso dell'analisi del codice, vedere [Cenni preliminari sull'analisi del codice per C/C++](/cpp/code-quality/code-analysis-for-c-cpp-overview).

## <a name="use-quick-actions-to-modernize-code"></a>Usare azioni rapide per modernizzare il codice

L'editor di codice fornisce azioni rapide per alcune raccomandazioni comuni. Quando viene visualizzata l'icona della lampadina, è possibile fare clic su di essa per visualizzare le azioni rapide disponibili.

### <a name="convert-macros-to-constexpr-functions"></a>Converte le macro in funzioni constExpr

Nell'immagine seguente viene illustrato l'utilizzo della macro denominata `AVERAGE` , che presenta la colorazione semantica predefinita. L'immagine mostra anche la descrizione comando informazioni rapide visualizzata quando il cursore del mouse viene posizionato su di esso:

![Espansione della macro informazioni rapide](media/macro-expansion-quick-info.png "Espansione macro della descrizione comando informazioni rapide")

Poiché l'uso delle macro è sconsigliato nel linguaggio C++ moderno, Visual Studio semplifica la conversione delle macro in **`constexpr`** funzioni:

1. Fare clic con il pulsante destro del mouse su `AVERAGE` e scegliere **Vai a definizione**.
2. Fare clic sull'icona del cacciavite e scegliere **Converti macro in constExpr**

   ![Macro di azione rapida per constExpr](media/quick-action-macro-to-constexpr.png "Macro di azione rapida per constExpr")

La macro viene convertita come illustrato di seguito:

![constExpr (funzione)](media/constexpr-function.png "constExpr (funzione)")

La chiamata a `AVERAGE` viene ora colorata come chiamata di funzione e la descrizione comando informazioni rapide Mostra il tipo dedotto della funzione:

![chiamata di funzione constExpr](media/constexpr-function-call.png "chiamata di funzione constExpr")

### <a name="initialize-variables"></a>Inizializzare le variabili

Le variabili non inizializzate possono conservare valori casuali che comportano gravi bug. L'analisi del codice contrassegna queste istanze e l'editor fornisce un'azione rapida:

![Inizializzare una variabile](media/init-variable.png "Azione rapida Inizializza variabile")

### <a name="convert-to-raw-string-literal"></a>Convertire in valore letterale stringa non elaborata

I valori letterali stringa non elaborata sono meno soggetti a errori e più convenienti per il tipo di stringhe con caratteri di escape incorporati. Fare clic con il pulsante destro del mouse su una stringa e scegliere **azioni rapide** per convertirla in un valore letterale stringa non elaborato.

![Valore letterale stringa non elaborata](media/raw-string-literal.png "Valore letterale stringa non elaborata")

La stringa viene convertita in: `R"(C:\Users\bjarnes\demo\output.txt)"` .

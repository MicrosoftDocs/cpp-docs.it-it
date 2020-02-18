---
title: 'Guida introduttiva: Analisi del codice per C/C++'
description: Eseguire l'analisi statica C++ sul codice in Visual Studio per rilevare i problemi e i difetti di codifica comuni.
ms.date: 11/04/2016
ms.topic: conceptual
helpviewer_keywords:
- C/C++ code analysis
- code analysis,C/C++
ms.openlocfilehash: 5ee8f702ddf489732f664ae73eed75b18dc46e86
ms.sourcegitcommit: 7bea0420d0e476287641edeb33a9d5689a98cb98
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/17/2020
ms.locfileid: "77418781"
---
# <a name="quickstart-code-analysis-for-cc"></a>Guida introduttiva: Analisi codice per C/C++

È possibile migliorare la qualità dell'applicazione eseguendo regolarmente l'analisi del codice C o C++. Ciò consente di individuare i problemi comuni, le violazioni delle buone norme di programmazione o i difetti che sono difficili da individuare tramite test. Gli avvisi di analisi del codice sono diversi rispetto agli errori e agli avvisi del compilatore in quanto durante l'analisi del codice vengono cercati modelli di codice specifici che risultano validi ma che potrebbero causare problemi a te o ad altre persone che usano il codice.

## <a name="configure-rule-sets-for-a-project"></a>Configurare i set di regole per un progetto

1. In **Esplora soluzioni**aprire il menu di scelta rapida per il nome del progetto, quindi scegliere **Proprietà**.

1. Facoltativamente, negli elenchi **configurazione** e **piattaforma** scegliere la configurazione di compilazione e la piattaforma di destinazione.

1. Per eseguire l'analisi del codice ogni volta che il progetto viene compilato usando la configurazione selezionata, selezionare la casella di controllo **Abilita analisi codice su compilazione** . È anche possibile eseguire manualmente l'analisi del codice aprendo il menu **analizza** e quindi scegliendo **Esegui analisi codice su** *NomeProgetto* o **Esegui analisi codice su file**.

1. Scegliere il [set di regole](using-rule-sets-to-specify-the-cpp-rules-to-run.md) che si desidera utilizzare o creare un [set di regole personalizzato](using-rule-sets-to-specify-the-cpp-rules-to-run.md#to-create-a-rule-set-in-a-text-editor). Se si usa LLVM/Clang-CL, vedere [uso di Clang-tidy in Visual Studio](../code-quality/clang-tidy.md) per configurare le opzioni di analisi di Clang-tidy.

### <a name="standard-cc-rule-sets"></a>Set di regole standard C/C++

Visual Studio include due set standard di regole per il codice nativo:

|Set di regole|Descrizione|
|--------------|-----------------|
|Regole minime native Microsoft|Questo set di regole è incentrato sui problemi più critici del codice nativo, inclusi i potenziali problemi di sicurezza e gli arresti anomali delle applicazioni. È necessario includere questo set di regole in qualsiasi set di regole personalizzate create per i progetti nativi.|
|Regole consigliate native Microsoft|Questo set di regole copre un'ampia gamma di problemi. Include tutte le regole in Regole minime native Microsoft.|

## <a name="run-code-analysis"></a>Eseguire l'analisi del codice

Nella pagina analisi codice della pagina Proprietà progetto è possibile configurare l'analisi del codice in modo che venga eseguita ogni volta che si compila il progetto. È inoltre possibile eseguire manualmente l'analisi del codice.

Per eseguire l'analisi del codice su una soluzione:

- Nel menu **Compila** scegliere **Esegui analisi del codice su soluzione**.

Per eseguire l'analisi del codice su un progetto:

1. Nella Esplora soluzioni selezionare il nome del progetto.

1. Nel menu **Compila** scegliere **Esegui analisi codice sul nome del** *progetto*.

Per eseguire l'analisi del codice su un file:

1. Nella Esplora soluzioni selezionare il nome del file.

1. Nel menu **Compila** scegliere **Esegui analisi codice su file** oppure premere **CTRL + MAIUSC + ALT + F7**.

   Il progetto o la soluzione vengono compilati e viene eseguita l'analisi del codice. I risultati vengono visualizzati nel Elenco errori.

## <a name="analyze-and-resolve-code-analysis-warnings"></a>Analizzare e risolvere gli avvisi dell'analisi del codice

Per analizzare un avviso specifico, scegliere il titolo dell'avviso nella Elenco errori. L'avviso si espande per visualizzare informazioni aggiuntive sul problema. Se possibile, l'analisi del codice consente di visualizzare i numeri di riga e la logica di analisi che ha portato all'avviso. Per informazioni dettagliate sull'avviso, incluse le possibili soluzioni al problema, scegliere l'ID avviso per visualizzare l'argomento della Guida in linea corrispondente.

Quando si seleziona un avviso, la riga di codice che ha provocato l'avviso viene evidenziata nell'editor di codice di Visual Studio.

Dopo aver compreso il problema, è possibile risolverlo nel codice. Eseguire quindi di nuovo l'analisi del codice per verificare che l'avviso non venga più visualizzato nella Elenco errori e che la correzione non abbia generato nuovi avvisi.

## <a name="suppress-code-analysis-warnings"></a>Non visualizzare gli avvisi di analisi codice

In alcuni casi potresti decidere di non correggere un avviso di analisi del codice. Puoi decidere che risolvere il problema richiede un'eccessiva ricodificazione relativamente alla probabilità che il problema si ripresenti in qualsiasi implementazione realistica del codice. Oppure potresti ritenere che l'analisi utilizzata nell'avviso sia inadeguata per il contesto specifico. È possibile evitare l'eliminazione di singoli avvisi in modo che non vengano più visualizzati nel Elenco errori.

### <a name="to-suppress-a-warning"></a>Per non visualizzare un avviso

1. Se le informazioni dettagliate non sono visualizzate, scegliere il titolo dell'avviso per espanderlo.

1. Scegliere il collegamento **Azioni** nella parte inferiore dell'avviso.

1. Scegliere non **visualizzare il messaggio** , quindi scegliere **nell'origine**.

   L'eliminazione di un messaggio inserisce `#pragma warning (disable:[warning ID])` che evita l'avviso per la riga di codice.

## <a name="create-work-items-for-code-analysis-warnings"></a>Creare elementi di lavoro per gli avvisi di analisi del codice

È possibile usare la funzionalità di gestione degli elementi di lavoro per registrare bug da Visual Studio. Per usare questa funzionalità, collegarsi a un'istanza di Team Foundation Server.

### <a name="to-create-a-work-item-for-one-or-more-cc-code-warnings"></a>Per creare un elemento di lavoro per uno o più avvisi del codice C/C++

1. Nella Elenco errori espandere e selezionare gli avvisi

1. Nel menu di scelta rapida per gli avvisi, scegliere **Crea elemento di lavoro**, quindi scegliere il tipo di elemento di lavoro.

1. Visual Studio crea un singolo elemento di lavoro per gli avvisi selezionati e visualizza l'elemento di lavoro in una finestra del documento dell'IDE.

1. Aggiungere eventuali informazioni aggiuntive, quindi scegliere **Salva elemento di lavoro**.

## <a name="search-and-filter-code-analysis-results"></a>Ricerca e filtro dei risultati dell'analisi del codice

Puoi effettuare una ricerca in lunghi elenchi di messaggi di avviso e filtrare gli avvisi nelle soluzioni composte da più progetti.

- **Per filtrare gli avvisi per titolo o ID avviso**: immettere la parola chiave nella casella di ricerca.

- **Per filtrare gli avvisi in base alla gravità**: per impostazione predefinita, ai messaggi di analisi del codice viene assegnata una gravità di **avviso**. È possibile assegnare la gravità di uno o più messaggi come **errore** in un set di regole personalizzato. Nella colonna **gravità** del **Elenco errori**scegliere la freccia a discesa e quindi l'icona del filtro. Scegliere **avviso** o **errore** per visualizzare solo i messaggi a cui è assegnata la rispettiva gravità. Scegliere **Seleziona tutto** per visualizzare tutti i messaggi.

## <a name="see-also"></a>Vedere anche

- [Analisi del codice per C/C++](../code-quality/code-analysis-for-c-cpp-overview.md)

---
title: Utilizzo di set di regole per specificare le regole C++ da eseguire
ms.date: 04/28/2018
ms.topic: conceptual
f1_keywords:
- vs.codeanalysis.rulesets.native
ms.openlocfilehash: 5cf0f88c6937f4c1609a29fd618af0fdadad4437
ms.sourcegitcommit: 7bea0420d0e476287641edeb33a9d5689a98cb98
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/17/2020
ms.locfileid: "77418718"
---
# <a name="use-rule-sets-to-specify-the-c-rules-to-run"></a>Usare set di regole per specificare C++ le regole da eseguire

In Visual Studio è possibile creare e modificare un set di *regole* personalizzate per soddisfare specifiche esigenze di progetto associate all'analisi del codice. I set di regole predefiniti vengono archiviati in `%VSINSTALLDIR%\Team Tools\Static Analysis Tools\Rule Sets`.

**Visual Studio 2017 versione 15,7 e successive:** È possibile creare set di regole personalizzati utilizzando qualsiasi editor di testo e applicarli nelle compilazioni della riga di comando indipendentemente dal sistema di compilazione in uso. Per altre informazioni, vedere [/analyze: RuleSet](/cpp/build/reference/analyze-code-analysis).

Per creare un set C++ di regole personalizzate in Visual Studio, è necessarioC++ aprire un progetto C/progetto nell'IDE di Visual Studio. Si apre quindi un set di regole standard nell'editor del set di regole e quindi si aggiungono o rimuovono regole specifiche e, facoltativamente, si modifica l'azione che si verifica quando l'analisi del codice determina che una regola è stata violata.

Per creare un nuovo set di regole personalizzate, salvarlo con un nuovo nome file. Il set di regole personalizzate viene assegnato automaticamente al progetto.

## <a name="to-create-a-custom-rule-from-a-single-existing-rule-set"></a>Per creare una regola personalizzata da un singolo set di regole esistente

1. Nel Esplora soluzioni aprire il menu di scelta rapida per il progetto, quindi scegliere **Proprietà**.

1. Nella scheda **Proprietà** scegliere **analisi codice**.

1. Nell'elenco a discesa **set di regole** effettuare una delle operazioni seguenti:

   - Scegliere il set di regole che si desidera personalizzare.

     \- - oppure -

   - Scegliere **\<Sfoglia... >** per specificare un set di regole esistente non presente nell'elenco.

1. Scegliere **Apri** per visualizzare le regole nell'Editor set di regole.

## <a name="to-modify-a-rule-set-in-the-rule-set-editor"></a>Per modificare un set di regole nell'Editor set di regole

- Per modificare il nome visualizzato del set di regole, scegliere **finestra Proprietà**dal menu **Visualizza** . Immettere il nome visualizzato nella casella **nome** . Si noti che il nome visualizzato può essere diverso dal nome del file.

- Per aggiungere tutte le regole del gruppo a un set di regole personalizzate, selezionare la casella di controllo del gruppo. Per rimuovere tutte le regole del gruppo, deselezionare la casella di controllo.

- Per aggiungere una regola specifica al set di regole personalizzate, selezionare la casella di controllo relativa alla regola. Per rimuovere la regola dal set di regole, deselezionare la casella di controllo.

- Per modificare l'azione eseguita quando una regola viene violata in un'analisi del codice, scegliere il campo **azione** per la regola, quindi scegliere uno dei valori seguenti:

     **Avviso** : genera un avviso.

     **Errore** : genera un errore.

     **Info** : genera un messaggio.

     **None** : Disabilita la regola. Questa azione equivale a rimuovere la regola dal set di regole.

## <a name="to-group-filter-or-change-the-fields-in-the-rule-set-editor-by-using-the-rule-set-editor-toolbar"></a>Per raggruppare, filtrare o modificare i campi nell'editor del set di regole tramite la barra degli strumenti Editor set di regole

- Per espandere le regole in tutti i gruppi, scegliere **Espandi tutto**.

- Per comprimere le regole in tutti i gruppi, scegliere **Comprimi tutto**.

- Per modificare il campo in base al quale vengono raggruppate le regole, scegliere il campo dall'elenco **Raggruppa per** . Per visualizzare le regole non raggruppate, scegliere **\<nessuna >** .

- Per aggiungere o rimuovere campi nelle colonne della regola, scegliere **Opzioni colonne**.

- Per nascondere le regole che non si applicano alla soluzione corrente, scegliere **Nascondi regole che non si applicano alla soluzione corrente**.

- Per passare tra le regole di visualizzazione e di occultamento a cui è stata assegnata l'azione di errore, scegliere **Mostra regole che possono generare errori di analisi del codice**.

- Per passare tra le regole di visualizzazione e di occultamento a cui è stata assegnata l'azione di avviso, scegliere **Mostra regole che possono generare avvisi di analisi del codice**.

- Per passare tra le regole di visualizzazione e di occultamento a cui è stata assegnata l'azione **Nessuna** , scegliere **Mostra regole non abilitate**.

- Per aggiungere o rimuovere set di regole predefinite di Microsoft sul set di regole corrente, scegliere **Aggiungi o Rimuovi set di regole figlio**.

## <a name="to-create-a-rule-set-in-a-text-editor"></a>Per creare un set di regole in un editor di testo

È possibile creare un set di regole personalizzato in un editor di testo, archiviarlo in qualsiasi posizione con un'estensione `.ruleset` e applicarlo con l'opzione del compilatore [/analyze: RuleSet](/cpp/build/reference/analyze-code-analysis) .

Nell'esempio seguente viene illustrato un file di set di regole di base che è possibile utilizzare come punto di partenza:

::: moniker range="<=vs-2017"

```xml
<?xml version="1.0" encoding="utf-8"?>
<RuleSet Name="New Rule Set" Description=" " ToolsVersion="15.0">
  <Rules AnalyzerId="Microsoft.Analyzers.NativeCodeAnalysis" RuleNamespace="Microsoft.Rules.Native">
    <Rule Id="C6001" Action="Warning" />
    <Rule Id="C26494" Action="Warning" />
  </Rules>
</RuleSet>
```

::: moniker-end

::: moniker range=">=vs-2019"

```xml
<?xml version="1.0" encoding="utf-8"?>
<RuleSet Name="New Rule Set" Description=" " ToolsVersion="16.0">
  <Rules AnalyzerId="Microsoft.Analyzers.NativeCodeAnalysis" RuleNamespace="Microsoft.Rules.Native">
    <Rule Id="C6001" Action="Warning" />
    <Rule Id="C26494" Action="Warning" />
  </Rules>
</RuleSet>
```

::: moniker-end

---
title: /analyze (Analisi codice)
description: Sintassi e utilizzo dell'opzione/analyze del compilatore Microsoft C++.
ms.date: 07/27/2020
f1_keywords:
- VC.Project.VCCLCompilerTool.EnablePREfast
- /analyze
- VC.Project.VCCLCompilerTool.PREfastAdditionalOptions
- VC.Project.VCCLCompilerTool.PREfastAdditionalPlugins
helpviewer_keywords:
- /analyze compiler option [C++]
- -analyze compiler option [C++]
- analyze compiler option [C++]
ms.assetid: 81da536a-e030-4bd4-be18-383927597d08
ms.openlocfilehash: dcf44f1d282a9dd39205aecb4e75b59a6e8481f9
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92919098"
---
# <a name="analyze-code-analysis"></a>`/analyze` (Analisi codice)

Abilita le opzioni di controllo e analisi del codice.

## <a name="syntax"></a>Sintassi

::: moniker range=">=msvc-150"

> **`/analyze`**\
> **`/analyze-`**\
> **`/analyze:autolog`**\
> **`/analyze:autolog-`**\
> **`/analyze:autolog:ext`***estensione* di\
> **`/analyze:log`***nome file*\
> **`/analyze:max_paths`***numero* di\
> **`/analyze:only`**\
> **`/analyze:plugin`***plug-in-dll*\
> **`/analyze:quiet`**\
> **`/analyze:ruleset`***set di regole*\
> **`/analyze:stacksize`***numero* di\
> **`/analyze:WX-`**

::: moniker-end
::: moniker range="msvc-140"

> **`/analyze`**\
> **`/analyze-`**\
> **`/analyze:autolog`**\
> **`/analyze:autolog-`**\
> **`/analyze:autolog:ext`***estensione* di\
> **`/analyze:log`***nome file*\
> **`/analyze:max_paths`***numero* di\
> **`/analyze:only`**\
> **`/analyze:plugin`***plug-in-dll*\
> **`/analyze:quiet`**\
> **`/analyze:stacksize`***numero* di\
> **`/analyze:WX-`**

::: moniker-end

## <a name="arguments"></a>Argomenti

**`/analyze`**\
Abilita l'analisi nella modalità predefinita. L'output di analisi passa alla console o alla finestra di **output** di Visual Studio come altri messaggi di errore. Utilizzare **`/analyze-`** per disattivare in modo esplicito l'analisi.

**`/analyze:autolog`**\
I risultati dettagliati dell'analizzatore vengono scritti in formato XML in un file con lo stesso nome di base del file di origine e un'estensione di *`.pftlog`* . **`/analyze:autolog-`** Disabilita questo file di log.

**`/analyze:autolog:ext`***estensione* di\
I risultati dettagliati dell'analizzatore vengono scritti in formato XML in un file con lo stesso nome di base del file di origine e un'estensione di *estensione* .

**`/analyze:log`***nome file*\
I risultati dettagliati dell'analizzatore vengono scritti in formato XML nel file specificato da *filename* .

**`/analyze:max_paths`***numero* di\
Il parametro *Number* utilizzato con questa opzione specifica il numero massimo di percorsi di codice da analizzare. Se questo parametro non è specificato, per impostazione predefinita il numero è 256. I valori più grandi provocano un controllo più approfondito, ma l'analisi potrebbe richiedere più tempo.

**`/analyze:only`**\
In genere, il compilatore genera codice ed esegue un controllo più accurato della sintassi dopo aver eseguito l'analizzatore. L' **`/analyze:only`** opzione Disattiva questo passaggio di generazione del codice. L'analisi risulta più veloce, ma non genera errori e avvisi del compilatore che potrebbero essere individuati dal passaggio di generazione del codice del compilatore. Se il programma non è privo di errori di generazione del codice, i risultati dell'analisi potrebbero non essere affidabili. È consigliabile usare questa opzione solo se il codice passa già il controllo della sintassi di generazione del codice senza errori.

**`/analyze:plugin`***plug-in-dll*\
Abilita il plug-in PREfast specificato come parte delle esecuzioni dell'analisi del codice.

::: moniker range="<=msvc-150"

LocalEspC.dll è il plug-in che implementa i controlli di analisi del codice correlati alla concorrenza nell'intervallo di avvisi di C261XX. Ad esempio, [C26100](../../code-quality/c26100.md), [C26101](../../code-quality/c26101.md),...,  [C26167](../../code-quality/c26167.md).

Per eseguire LocalEspC.dll, usare questa opzione del compilatore: **`/analyze:plugin LocalEspC.dll`**

::: moniker-end
::: moniker range=">=msvc-160"

ConcurrencyCheck.dll implementa i controlli di analisi del codice correlati alla concorrenza nell'intervallo di avvisi di C261XX. Ad esempio, [C26100](../../code-quality/c26100.md), [C26101](../../code-quality/c26101.md),...,  [C26167](../../code-quality/c26167.md).

Per eseguire ConcurrencyCheck.dll, eseguire prima questo comando da un prompt dei comandi per gli sviluppatori:

```cmd
set Esp.Extensions=ConcurrencyCheck.dll
```

Usare quindi questa opzione del compilatore: **`/analyze:plugin EspXEngine.dll`** .

Per eseguire CppCoreCheck.dll, eseguire prima questo comando da un prompt dei comandi per gli sviluppatori:

```cmd
set Esp.Extensions=CppCoreCheck.dll
```

Usare quindi questa opzione del compilatore: **`/analyze:plugin EspXEngine.dll`** .

::: moniker-end

**`/analyze:quiet`**\
Disattiva l'output dell'analizzatore nella console o nella finestra di **output** di Visual Studio.

::: moniker range=">=msvc-150"

**`/analyze:ruleset`***FILE_PATH. RuleSet*\
Consente di specificare i set di regole da analizzare, inclusi i set di regole personalizzati che è possibile creare manualmente. Quando questa opzione è impostata, il motore regole è più efficiente, perché esclude i membri non appartenenti al set di regole specificato prima di eseguire. In caso contrario, il motore controlla tutte le regole.

I RuleSet forniti con Visual Studio sono disponibili in *`%VSINSTALLDIR%\Team Tools\Static Analysis Tools\Rule Sets`* .

Il set di regole personalizzate di esempio seguente indica al motore regole di verificare la presenza di C6001 e C26494. Questo file può essere inserito in qualsiasi posizione purché disponga di un' *`.ruleset`* estensione e si fornisca il percorso completo nell'argomento.

```xml
<?xml version="1.0" encoding="utf-8"?>
<RuleSet Name="New Rule Set" Description="New rules to apply." ToolsVersion="15.0">
  <Rules AnalyzerId="Microsoft.Analyzers.NativeCodeAnalysis" RuleNamespace="Microsoft.Rules.Native">
    <Rule Id="C6001" Action="Warning" />
    <Rule Id="C26494" Action="Warning" />
  </Rules>
</RuleSet>
```

::: moniker-end

**`/analyze:stacksize`***numero* di\
Il parametro *Number* utilizzato con questa opzione specifica la dimensione, in byte, dell'stack frame per cui viene generato l'avviso [C6262](../../code-quality/c6262.md) . Lo spazio prima del *numero* è facoltativo. Se questo parametro non è specificato, la dimensione stack frame è 16KB per impostazione predefinita.

**`/analyze:WX-`**\
Gli avvisi di analisi del codice non vengono considerati errori quando si compila tramite **`/WX`** . Per ulteriori informazioni, vedere [ `/WX` (livello di avviso)](compiler-option-warning-level.md).

## <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [Cenni preliminari sull'analisi del codice per c/c++ e sull'](../../code-quality/code-analysis-for-c-cpp-overview.md) [analisi del codice per gli avvisi di c/c++](../../code-quality/code-analysis-for-c-cpp-warnings.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la **Configuration Properties**  >  **Code Analysis**  >  pagina delle proprietà **generale** di analisi del codice delle proprietà di configurazione.

1. Modificare una o più proprietà di **analisi del codice** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnablePREfast%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)

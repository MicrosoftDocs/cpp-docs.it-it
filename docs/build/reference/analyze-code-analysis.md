---
title: /analyze (Analisi codice)
ms.date: 10/15/2019
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
ms.openlocfilehash: c0cebe1cbd160bdec257a960f90039c1af3bfee2
ms.sourcegitcommit: 7bea0420d0e476287641edeb33a9d5689a98cb98
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/17/2020
ms.locfileid: "77416044"
---
# <a name="analyze-code-analysis"></a>/analyze (Analisi codice)

Abilita le opzioni di controllo e analisi del codice.

## <a name="syntax"></a>Sintassi

> **/Analyze**[-] [ **: WX-** ] [ **: log** *filename*] [ **: quiet**] [ **: stacksize** *numero*] [ **: max_paths** *numero*] [ **: only**] [ **:** *RuleSet RuleSet]* [ **:p lugin** *plugin-dll*]

## <a name="arguments"></a>Argomenti

\ **/Analyze**
Abilita l'analisi nella modalità predefinita. L'output di analisi passa alla finestra di **output** come altri messaggi di errore. Usare **/Analyze-** per disattivare in modo esplicito l'analisi.

**/analyze: WX-** \
Gli avvisi di analisi del codice non vengono considerati errori quando si esegue la compilazione usando **/WX**. Per ulteriori informazioni, vedere [/WX (livello di avviso)](compiler-option-warning-level.md).

**/analyze: log** *filename*\
I risultati dettagliati dell'analizzatore vengono scritti in formato XML nel file specificato da *filename*.

**/analyze:\ silenzioso**
Disattiva l'output dell'analizzatore nella finestra di **output** .

**/analyze:** *numero* STACKSIZE\
Il parametro *Number* utilizzato con questa opzione specifica la dimensione, in byte, dell'stack frame per cui viene generato l'avviso [C6262](/cpp/code-quality/c6262) . Lo spazio prima del *numero* è facoltativo. Se questo parametro non è specificato, la dimensione stack frame è 16KB per impostazione predefinita.

**/analyze:** *numero* max_paths\
Il parametro *Number* utilizzato con questa opzione specifica il numero massimo di percorsi di codice da analizzare. Se questo parametro non è specificato, per impostazione predefinita il numero è 256. I valori più grandi provocano un controllo più approfondito, ma l'analisi potrebbe richiedere più tempo.

**/analyze: solo**\
In genere, il compilatore genera codice ed esegue un controllo più accurato della sintassi dopo aver eseguito l'analizzatore. L'opzione **/analyze: only** disattiva questo passaggio di generazione del codice. L'analisi risulta più veloce, ma gli errori e gli avvisi di compilazione che il passaggio di generazione del codice del compilatore potrebbe trovare non vengono emessi. Se il programma non è privo di errori di generazione del codice, i risultati dell'analisi potrebbero non essere affidabili. È consigliabile usare questa opzione solo se il codice passa già il controllo della sintassi di generazione del codice senza errori.

**/analyze: ruleset** *file_path. RuleSet*\
Consente di specificare i set di regole da analizzare, inclusi i set di regole personalizzati che è possibile creare manualmente. Quando questa opzione è impostata, il motore regole è più efficiente, perché esclude i membri non appartenenti al set di regole specificato prima di eseguire. In caso contrario, il motore controlla tutte le regole.

I RuleSet forniti con Visual Studio sono disponibili in *%VSInstallDir%\Team Tools\Static Analysis Tools\Rule sets.*

Il set di regole personalizzate di esempio seguente indica al motore regole di verificare la presenza di C6001 e C26494. È possibile inserire questo file in un punto qualsiasi purché disponga di un'estensione `.ruleset` e si fornisca il percorso completo nell'argomento.

```xml
<?xml version="1.0" encoding="utf-8"?>
<RuleSet Name="New Rule Set" Description=" " ToolsVersion="15.0">
  <Rules AnalyzerId="Microsoft.Analyzers.NativeCodeAnalysis" RuleNamespace="Microsoft.Rules.Native">
    <Rule Id="C6001" Action="Warning" />
    <Rule Id="C26494" Action="Warning" />
  </Rules>
</RuleSet>
```

**/analyze:** *plug-in di plug-in-dll*\
Abilita il plug-in PREfast specificato come parte delle esecuzioni dell'analisi del codice.

::: moniker range="<=vs-2017"

LocalEspC. dll è il plug-in che implementa i controlli di analisi del codice correlati alla concorrenza nell'intervallo di avvisi di C261XX. Ad esempio, [C26100](/cpp/code-quality/c26100), [C26101](/cpp/code-quality/c26101),..., [C26167](/cpp/code-quality/c26167).

Per eseguire LocalEspC. dll, usare questa opzione del compilatore: **/analyze: plugin LocalEspC. dll**

::: moniker-end
::: moniker range=">=vs-2019"

ConcurrencyCheck. dll implementa i controlli di analisi del codice correlati alla concorrenza nell'intervallo di avvisi di C261XX. Ad esempio, [C26100](/cpp/code-quality/c26100), [C26101](/cpp/code-quality/c26101),..., [C26167](/cpp/code-quality/c26167).

Per eseguire ConcurrencyCheck. dll, eseguire prima questo comando da un prompt dei comandi per gli sviluppatori:

```cmd
set Esp.Extensions=ConcurrencyCheck.dll
```

Usare quindi questa opzione del compilatore: **/analyze: plugin EspXEngine. dll**.

::: moniker-end

Per eseguire CppCoreCheck. dll, eseguire prima questo comando da un prompt dei comandi per gli sviluppatori:

```cmd
set Esp.Extensions=CppCoreCheck.dll
```

Usare quindi questa opzione del compilatore: **/analyze: plugin EspXEngine. dll**.

## <a name="remarks"></a>Osservazioni

Per altre informazioni, vedere [analisi del codice per cC++ /Panoramica](/cpp/code-quality/code-analysis-for-c-cpp-overview) e [analisi del codice perC++ c/avvisi](/cpp/code-quality/code-analysis-for-c-cpp-warnings).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare le **proprietà di configurazione** > **analisi codice** > pagina delle proprietà **generale** .

1. Modificare una o più proprietà di **analisi del codice** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnablePREfast%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)

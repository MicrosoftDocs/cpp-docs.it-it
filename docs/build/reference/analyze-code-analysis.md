---
title: /analyze (Analisi codice)
ms.date: 10/01/2019
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
ms.openlocfilehash: d647045d76dc32544f8146424b220547890b0943
ms.sourcegitcommit: 4517932a67bbf2db16cfb122d3bef57a43696242
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/02/2019
ms.locfileid: "71816325"
---
# <a name="analyze-code-analysis"></a>/analyze (Analisi codice)

Abilita le opzioni di controllo e analisi del codice.

## <a name="syntax"></a>Sintassi

```cmd
/analyze[-][:WX-][:log filename][:quiet][:stacksize number][:max_paths number][:only][:ruleset]
```

## <a name="arguments"></a>Argomenti

/Analyze attiva l'analisi nella modalità predefinita. L'output di analisi passa alla finestra di **output** come altri messaggi di errore. Usare **/Analyze-** per disattivare in modo esplicito l'analisi.

/analyze: WX-specifica **/analyze: WX** : indica che gli avvisi di analisi del codice non vengono considerati errori quando si compila tramite **/WX**. Per altre informazioni, vedere [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Livello di avviso)](compiler-option-warning-level.md).

/analyze: log `filename` i risultati analizzatore dettagliati vengono scritti in formato XML nel file specificato da `filename`.

/analyze: quiet disattiva l'output dell'analizzatore nella finestra di **output** .

/analyze: stacksize `number` il parametro `number` usato con questa opzione specifica la dimensione, in byte, dell'stack frame per cui viene generato l'avviso [C6262](/visualstudio/code-quality/c6262) . Lo spazio prima di `number` è facoltativo. Se questo parametro non viene specificato, le dimensioni dello stack frame sono 16 KB per impostazione predefinita.

/analyze: max_paths `number` il parametro `number` usato con questa opzione specifica il numero massimo di percorsi di codice da analizzare. Se questo parametro non viene specificato, il numero è 256 per impostazione predefinita. Valore maggiori consentono di eseguire un controllo più accurato, ma l'analisi potrebbe richiedere più tempo.

/analyze: in genere, il compilatore genera codice ed esegue più verifiche della sintassi dopo l'esecuzione dell'analizzatore. L'opzione **/analyze: only** disattiva questo passaggio di generazione del codice. in questo modo l'analisi risulta più veloce, ma gli errori e gli avvisi di compilazione che potrebbero essere stati individuati dal passaggio di generazione del codice del compilatore non vengono generati. Se il programma non è privo di errori di generazione del codice, i risultati dell'analisi potrebbero essere inaffidabili. È pertanto consigliabile utilizzare questa opzione solo se il codice ha già superato il controllo della sintassi di generazione del codice senza errori.

/analyze: RuleSet `<file_path>.ruleset` consente di specificare i set di regole da analizzare, inclusi i set di regole personalizzati che è possibile creare autonomamente. Quando questa opzione è impostata, il motore regole è più efficiente perché esclude i membri non appartenenti al set di regole specificato prima di eseguire. Quando l'opzione non è impostata, il motore controlla tutte le regole.

I RuleSet forniti con Visual Studio sono disponibili in **%VSInstallDir%\Team Tools\Static Analysis Tools\Rule sets.**

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

/analyze: il plug-in Abilita il plug-in PREfast specificato come parte delle esecuzioni dell'analisi del codice.
LocalEspC. dll è il plug-in che implementa i controlli di analisi del codice correlati alla concorrenza nell'intervallo di avvisi di C261XX. Ad esempio, [C26100](/visualstudio/code-quality/c26100), [C26101](/visualstudio/code-quality/c26101),..., [C26167](/visualstudio/code-quality/c26167).

Per eseguire LocalEspC. dll, usare questa opzione del compilatore: **/analyze: plugin LocalEspC. dll**

Per eseguire CppCoreCheck. dll, eseguire prima questo comando da un prompt dei comandi per gli sviluppatori:

```cmd
set Esp.Extensions=CppCoreCheck.dll
```

Usare quindi questa opzione del compilatore: **/analyze: plugin EspXEngine. dll**.

## <a name="remarks"></a>Note

Per altre informazioni, vedere [analisi del codice per cC++ /Panoramica](/visualstudio/code-quality/code-analysis-for-c-cpp-overview) e [analisi del codice perC++ c/avvisi](/visualstudio/code-quality/code-analysis-for-c-cpp-warnings).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere il nodo **analisi codice** .

1. Selezionare la pagina delle proprietà **Generale** .

1. Modificare una o più proprietà di **analisi del codice** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnablePREfast%2A>.

## <a name="see-also"></a>Vedere anche

- [Opzioni del compilatore MSVC](compiler-options.md)
- [Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)

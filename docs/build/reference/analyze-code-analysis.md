---
title: /analyze (Analisi codice)
ms.date: 04/26/2018
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
ms.openlocfilehash: 057fabe9612f84af07649d7a4f7bbf6d83e01f6c
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57426212"
---
# <a name="analyze-code-analysis"></a>/analyze (Analisi codice)

Abilita le opzioni di controllo e analisi del codice.

## <a name="syntax"></a>Sintassi

```cmd
/analyze[-][:WX-][:log filename][:quiet][:stacksize number][:max_paths number][:only][:ruleset]
```

## <a name="arguments"></a>Argomenti

/analyze Turns analisi nella modalità predefinita. Output di analisi viene il **Output** finestra come gli altri messaggi di errore. Uso **/ANALYZE -** disattivare in modo esplicito l'analisi.

/analyze: WX-se si specifica **/analyze: WX -** significa che gli avvisi dell'analisi del codice non viene considerati come errori quando esegue la compilazione usando **/WX**. Per altre informazioni, vedere [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Livello di avviso)](../../build/reference/compiler-option-warning-level.md).

/analyze: log `filename` risultati dettagliati dell'analizzatore vengono scritti come XML nel file specificato da `filename`.

/analyze: quiet Turns off output analyzer per il **Output** finestra.

/analyze: stacksize `number` il `number` parametro che viene usato con questa opzione specifica la dimensione, espressa in byte, del frame dello stack per quali avviso [C6262](/visualstudio/code-quality/c6262) viene generato. Se questo parametro non viene specificato, le dimensioni dello stack frame sono 16 KB per impostazione predefinita.

/analyze: max_paths `number` il `number` parametro che viene usato con questa opzione specifica il numero massimo di percorsi del codice da analizzare. Se questo parametro non viene specificato, il numero è 256 per impostazione predefinita. Valore maggiori consentono di eseguire un controllo più accurato, ma l'analisi potrebbe richiedere più tempo.

/analyze: only in genere, il compilatore genera il codice e viene ulteriori informazioni sulla sintassi verifica al termine dell'esecuzione dell'analizzatore. Il **/analyze: solo** opzione si disattiva questo passaggio di generazione del codice; in questo modo, l'analisi più velocemente, ma non vengono generati errori di compilazione e avvisi che potrebbero essere rilevati durante il passaggio di generazione di codice del compilatore. Se il programma non è privo di errori di generazione del codice, i risultati dell'analisi potrebbero essere inaffidabili. È pertanto consigliabile utilizzare questa opzione solo se il codice ha già superato il controllo della sintassi di generazione del codice senza errori.

/analyze: ruleset `<file_path>.ruleset` consente di specificare quale regola imposta da analizzare, compresi i set di regole personalizzate che è possibile creare personalmente. Quando questa opzione è impostata, il motore regole è più efficiente poiché vengono esclusi gli utenti non membri del set prima dell'esecuzione di regole specificato. Quando l'opzione non è impostata, il motore controlla tutte le regole.

Il set di regole forniti con Visual Studio si trovano nella **%VSINSTALLDIR%\Team Tools\Static Analysis Tools\Rule set.**

Il set di regole personalizzate di esempio seguente indica al motore di regole per verificare la presenza C6001 e C26494. È possibile inserire questo file in un punto qualsiasi, purché abbia un `.ruleset` estensione e specifica il percorso completo nell'argomento.

```xml
<?xml version="1.0" encoding="utf-8"?>
<RuleSet Name="New Rule Set" Description=" " ToolsVersion="15.0">
  <Rules AnalyzerId="Microsoft.Analyzers.NativeCodeAnalysis" RuleNamespace="Microsoft.Rules.Native">
    <Rule Id="C6001" Action="Warning" />
    <Rule Id="C26494" Action="Warning" />
  </Rules>
</RuleSet>
```

/analyze: plug-in consente il plug-in di PREfast specificato come parte dell'analisi codice viene eseguita.
LocalEspC.dll è il plug-in che implementa l'analisi del codice correlati alla concorrenza controlla l'intervallo di C261XX avvisi. Ad esempio, [C26100](/visualstudio/code-quality/c26100), [C26101](/visualstudio/code-quality/c26101),..., [C26167](/visualstudio/code-quality/c26167).

Per eseguire LocalEspC.dll, usare l'opzione del compilatore: **/analyze: plug-in LocalEspC.dll**

Per eseguire CppCoreCheck.dll, eseguire questo comando da un prompt dei comandi per gli sviluppatori:

```cmd
set Esp.Extensions=CppCoreCheck.dll
```

Quindi usare questa opzione del compilatore: **/analyze: plug-in EspXEngine.dll**.

## <a name="remarks"></a>Note

Per altre informazioni, vedere [analisi del codice per C/C++ Overview](/visualstudio/code-quality/code-analysis-for-c-cpp-overview) e [analisi del codice per C/C++ avvisi](/visualstudio/code-quality/code-analysis-for-c-cpp-warnings).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere la **analisi del codice** nodo.

1. Selezionare la pagina delle proprietà **Generale** .

1. Modificare uno o più i **analisi del codice** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnablePREfast%2A>.

## <a name="see-also"></a>Vedere anche

- [Opzioni del compilatore](../../build/reference/compiler-options.md)
- [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)

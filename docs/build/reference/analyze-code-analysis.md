---
title: -analyze (Code Analysis) | Documenti Microsoft
ms.custom: ''
ms.date: 04/26/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
f1_keywords:
- VC.Project.VCCLCompilerTool.EnablePREfast
- /analyze
- VC.Project.VCCLCompilerTool.PREfastAdditionalOptions
- VC.Project.VCCLCompilerTool.PREfastAdditionalPlugins
dev_langs:
- C++
helpviewer_keywords:
- /analyze compiler option [C++]
- -analyze compiler option [C++]
- analyze compiler option [C++]
ms.assetid: 81da536a-e030-4bd4-be18-383927597d08
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0f706c3ff32635384766ac2c028cc0e5096118b8
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
---
# <a name="analyze-code-analysis"></a>/analyze (Analisi codice)

Abilita le opzioni di controllo e analisi del codice.

## <a name="syntax"></a>Sintassi

```cmd
/analyze[-][:WX-][:log filename][:quiet][:stacksize number][:max_paths number][:only][:ruleset]
```

## <a name="arguments"></a>Argomenti

 /analyze  
 Abilita l'analisi nella modalità predefinita. Output di analisi viene il **Output** finestra come gli altri messaggi di errore. Utilizzare **/ANALYZE -** per disabilitare in modo esplicito l'analisi.

 /analyze:WX-  
 Specifica di **/analyze: WX -** significa che gli avvisi di analisi del codice non viene considerati errori quando esegue la compilazione con **/WX**. Per altre informazioni, vedere [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Livello di avviso)](../../build/reference/compiler-option-warning-level.md).

 /analyze:log `filename`  
 I risultati dettagliati dell'analizzatore vengono scritti in formato XML nel file specificato da `filename`.

 /analyze:quiet  
 Disattiva l'output dell'analizzatore di **Output** finestra.

 /analyze:stacksize `number`  
 Il `number` parametro utilizzato con questa opzione specifica la dimensione, in byte, del frame dello stack per il tipo di avviso [C6262](/visualstudio/code-quality/c6262) viene generato. Se questo parametro non viene specificato, le dimensioni dello stack frame sono 16 KB per impostazione predefinita.

 /analyze:max_paths `number`  
 Il parametro `number` utilizzato con questa opzione consente di specificare il numero massimo di percorsi di codice da analizzare. Se questo parametro non viene specificato, il numero è 256 per impostazione predefinita. Valore maggiori consentono di eseguire un controllo più accurato, ma l'analisi potrebbe richiedere più tempo.

 /analyze:only  
 In genere, il compilatore genera codice ed esegue un controllo più accurato della sintassi dopo aver eseguito l'analizzatore. Il **/analyze: solo** opzione disattiva questo passaggio di generazione del codice; in questo modo, l'analisi più velocemente, ma non verranno generati errori di compilazione e gli avvisi che potrebbero essere rilevati dal passaggio di generazione di codice del compilatore. Se il programma non è privo di errori di generazione del codice, i risultati dell'analisi potrebbero essere inaffidabili. È pertanto consigliabile utilizzare questa opzione solo se il codice ha già superato il controllo della sintassi di generazione del codice senza errori.

 /analyze: set di regole `<file_path>.ruleset`  
Consente di specificare quale regola imposta da analizzare, inclusi i set di regole personalizzate che è possibile creare personalmente. Quando questa opzione è impostata, il motore regole di business è più efficiente poiché vengono esclusi non membri del set prima dell'esecuzione di regole specificato. Quando l'opzione non è impostata, il motore controlla tutte le regole.

Sono inclusi gli oggetti ruleSet forniti con Visual Studio **%VSINSTALLDIR%\Team Tools\Static Analysis Tools\Rule set.**

Il set di regole personalizzato di esempio seguente indica al motore regole di verificare la presenza di C6001 e C26494. È possibile posizionare questo file in un punto qualsiasi, purché ha un `.ruleset` estensione e si fornisce il percorso completo nell'argomento.

```xml
<?xml version="1.0" encoding="utf-8"?>
<RuleSet Name="New Rule Set" Description=" " ToolsVersion="15.0">
  <Rules AnalyzerId="Microsoft.Analyzers.NativeCodeAnalysis" RuleNamespace="Microsoft.Rules.Native">
    <Rule Id="C6001" Action="Warning" />
    <Rule Id="C26494" Action="Warning" />
  </Rules>
</RuleSet>
```

/analyze: plug-in  
Consente i plug-in PREfast specificato come parte di analisi del codice viene eseguita. LocalEspC.dll è il plug-in che implementa l'analisi del codice correlato alla concorrenza controlla l'intervallo di C261XX avvisi. Ad esempio [C26100](/visualstudio/code-quality/c26100), [C26101](/visualstudio/code-quality/c26101),..., [C26167](/visualstudio/code-quality/c26167).

Per eseguire LocalEspC.dll, usare l'opzione del compilatore: **/analyze: plug-in LocalEspC.dll**

Per eseguire CppCoreCheck.dll, eseguire questo comando al prompt dei comandi per sviluppatori:

```cmd
set Esp.Extensions=CppCoreCheck.dll
```

Quindi utilizzare l'opzione del compilatore: **/analyze: plug-in EspXEngine.dll**.

## <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [analisi del codice per C/C++ Panoramica](/visualstudio/code-quality/code-analysis-for-c-cpp-overview) e [analisi del codice per C/C++ avvisi](/visualstudio/code-quality/code-analysis-for-c-cpp-warnings).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Espandere il **le proprietà di configurazione** nodo.

1. Espandere il **analisi del codice** nodo.

1. Selezionare la pagina delle proprietà **Generale** .

1. Modificare uno o più di **analisi del codice** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnablePREfast%2A>.

## <a name="see-also"></a>Vedere anche

- [Opzioni del compilatore](../../build/reference/compiler-options.md)
- [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
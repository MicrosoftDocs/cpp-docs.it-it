---
title: -analyze (Code Analysis) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ba76ddd10866e414d9817f628c7a1aec019964de
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="analyze-code-analysis"></a>/analyze (Analisi codice)
Abilita le opzioni di controllo e analisi del codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/analyze[-][:WX-][:log filename][:quiet][:stacksize number][:max_paths number][:only]  
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
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [analisi del codice per C/C++ Panoramica](/visualstudio/code-quality/code-analysis-for-c-cpp-overview) e [analisi del codice per C/C++ avvisi](/visualstudio/code-quality/code-analysis-for-c-cpp-warnings).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Espandere il **analisi del codice** nodo.  
  
4.  Selezionare la pagina delle proprietà **Generale** .  
  
5.  Modificare uno o più di **analisi del codice** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnablePREfast%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
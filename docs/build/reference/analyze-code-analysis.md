---
title: "/analyze (Analisi codice) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.EnablePREfast"
  - "/analyze"
  - "VC.Project.VCCLCompilerTool.PREfastAdditionalOptions"
  - "VC.Project.VCCLCompilerTool.PREfastAdditionalPlugins"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/analyze (opzione del compilatore) [C++]"
  - "analyze (opzione del compilatore) [C++]"
  - "-analyze (opzione del compilatore) [C++]"
ms.assetid: 81da536a-e030-4bd4-be18-383927597d08
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /analyze (Analisi codice)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Abilita le opzioni di controllo e analisi del codice.  
  
## Sintassi  
  
```  
/analyze[-][:WX-][:log filename][:quiet][:stacksize number][:max_paths number][:only]  
```  
  
## Argomenti  
 \/analyze  
 Abilita l'analisi nella modalità predefinita.  L'output di analisi viene visualizzato nella finestra **Output** come gli altri messaggi di errore.  Utilizzare **\/analyze\-** per disabilitare l'analisi in modo esplicito.  
  
 \/analyze:WX\-  
 Se si specifica **\/analyze:WX\-**, gli avvisi relativi all'analisi del codice non vengono considerati errori quando si esegue la compilazione utilizzando **\/WX**.  Per ulteriori informazioni, vedere [\/w, \/Wn, \/WX, \/Wall, \/wln, \/wdn, \/wen, \/won \(Livello avvisi\)](../../build/reference/compiler-option-warning-level.md).  
  
 \/analyze:log `filename`  
 I risultati dettagliati dell'analizzatore vengono scritti in formato XML nel file specificato da `filename`.  
  
 \/analyze:quiet  
 Disabilita l'output dell'analizzatore nella finestra **Output**.  
  
 \/analyze:stacksize `number`  
 Il parametro `number` utilizzato con questa opzione consente di specificare le dimensioni in byte dello stack frame per cui è stato generato l'avviso [C6262](../Topic/C6262.md).  Se questo parametro non viene specificato, le dimensioni dello stack frame sono 16 KB per impostazione predefinita.  
  
 \/analyze:max\_paths `number`  
 Il parametro `number` utilizzato con questa opzione consente di specificare il numero massimo di percorsi di codice da analizzare.  Se questo parametro non viene specificato, il numero è 256 per impostazione predefinita.  Valore maggiori consentono di eseguire un controllo più accurato, ma l'analisi potrebbe richiedere più tempo.  
  
 \/analyze:only  
 In genere, il compilatore genera codice ed esegue un controllo più accurato della sintassi dopo aver eseguito l'analizzatore.  L'opzione **\/analyze:only** consente di disabilitare il passaggio di generazione del codice. In questo modo, l'analisi risulterà più rapida, ma non verranno generati gli avvisi e gli errori di compilazione che potrebbero essere rilevati durante il passaggio di generazione del codice.  Se il programma non è privo di errori di generazione del codice, i risultati dell'analisi potrebbero essere inaffidabili. È pertanto consigliabile utilizzare questa opzione solo se il codice ha già superato il controllo della sintassi di generazione del codice senza errori.  
  
## Note  
 Per ulteriori informazioni, vedere [Cenni preliminari sull'analisi del codice per C\/C\+\+](../Topic/Code%20Analysis%20for%20C-C++%20Overview.md) e [Avvisi dell'analisi codice per il linguaggio C\/C\+\+](../Topic/Code%20Analysis%20for%20C-C++%20Warnings.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere il nodo **Analisi codice**.  
  
4.  Selezionare la pagina delle proprietà **Generale**.  
  
5.  Modificare una o più proprietà di **Analisi codice**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnablePREfast%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
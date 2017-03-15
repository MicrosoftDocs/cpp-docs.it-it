---
title: "/w, /Wn, /WX, /Wall, /wln, /wdn, /wen, /won (Livello avvisi) | Microsoft Docs"
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
  - "VC.Project.VCCLCompilerTool.DisableSpecificWarnings"
  - "VC.Project.VCCLCompilerTool.WarningLevel"
  - "VC.Project.VCCLWCECompilerTool.DisableSpecificWarnings"
  - "VC.Project.VCCLCompilerTool.WarnAsError"
  - "VC.Project.VCCLWCECompilerTool.WarnAsError"
  - "/wx"
  - "VC.Project.VCCLWCECompilerTool.WarningLevel"
  - "/wall"
  - "VC.Project.VCCLCompilerTool.TreatSpecificWarningsAsErrors"
  - "/Wv"
  - "/w0"
  - "/w1"
  - "/w2"
  - "/w3"
  - "/w4"
  - "/wd"
  - "/we"
  - "/wo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/w (opzione del compilatore)"
  - "/W0 (opzione del compilatore) [C++]"
  - "/W1 (opzione del compilatore) [C++]"
  - "/W2 (opzione del compilatore) [C++]"
  - "/W3 (opzione del compilatore) [C++]"
  - "/W4 (opzione del compilatore) [C++]"
  - "/Wall (opzione del compilatore) [C++]"
  - "/wd (opzione del compilatore) [C++]"
  - "/we (opzione del compilatore) [C++]"
  - "/wo (opzione del compilatore) [C++]"
  - "/WX (opzione del compilatore) [C++]"
  - "w (opzione del compilatore) [C++]"
  - "-w (opzione del compilatore) [C++]"
  - "W0 (opzione del compilatore) [C++]"
  - "-W0 (opzione del compilatore) [C++]"
  - "W1 (opzione del compilatore) [C++]"
  - "-W1 (opzione del compilatore) [C++]"
  - "W2 (opzione del compilatore) [C++]"
  - "-W2 (opzione del compilatore) [C++]"
  - "W3 (opzione del compilatore) [C++]"
  - "-W3 (opzione del compilatore) [C++]"
  - "W4 (opzione del compilatore) [C++]"
  - "-W4 (opzione del compilatore) [C++]"
  - "Wall (opzione del compilatore) [C++]"
  - "-Wall (opzione del compilatore) [C++]"
  - "Livello avvisi (opzione del compilatore)"
  - "avvisi, Considera gli avvisi come errori (opzione del compilatore)"
  - "wd (opzione del compilatore) [C++]"
  - "-wd (opzione del compilatore) [C++]"
  - "we (opzione del compilatore) [C++]"
  - "-we (opzione del compilatore) [C++]"
  - "wo (opzione del compilatore) [C++]"
  - "-wo (opzione del compilatore) [C++]"
  - "WX (opzione del compilatore) [C++]"
  - "-WX (opzione del compilatore) [C++]"
ms.assetid: d6bc7bf5-c754-4879-909c-8e3a67e2629f
caps.latest.revision: 21
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /w, /Wn, /WX, /Wall, /wln, /wdn, /wen, /won (Livello avvisi)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica la modalità di generazione degli avvisi del compilatore per una determinata compilazione.  
  
## Sintassi  
  
```  
/w  
/Wn  
/WX  
/Wall  
/wln  
/wdn  
/wen  
/won  
```  
  
## Note  
 Le opzioni e gli argomenti correlati sono descritti nella tabella riportata di seguito.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**\/w**|Disabilita tutti gli avvisi del compilatore.|  
|**\/W** `n`|Specifica il livello degli avvisi generato dal compilatore.  I livelli degli avvisi validi per `n` vanno da 0 a 4:<br /><br /> -   Con il livello 0 vengono disattivati tutti gli avvisi.<br />-   Con il livello 1 vengono visualizzati gli avvisi gravi.  L'impostazione predefinita è il livello 1.<br />-   Il livello 2 visualizza tutti gli avvisi del livello 1 e quelli di gravità inferiore al livello 1.<br />-   Il livello 3 visualizza tutti gli avvisi del livello 2 e tutti gli altri avvisi consigliati per finalità di produzione.<br />-   Il livello 4 visualizza tutti gli avvisi di livello 3 e gli avvisi informativi.  Si consiglia di utilizzare questa opzione solo per fornire gli avvisi come lint.  Tuttavia, per un nuovo progetto, potrebbe essere preferibile utilizzare `/W4` in tutte le compilazioni; questo garantirà il minor numero possibile di errori del codice di difficile individuazione.|  
|**\/Wall**|Visualizza tutti gli avvisi \/W4 e tutti gli altri avvisi non inclusi in \/W4, ad esempio avvisi al di fuori dell'impostazione predefinita.  Vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).|  
|**\/WX**|Considera tutti gli avvisi come errori.  Per un nuovo progetto, potrebbe essere preferibile utilizzare **\/WX** in tutte le compilazioni. La risoluzione di tutti gli avvisi garantirà il minor numero possibile di errori del codice di difficile individuazione.<br /><br /> Il linker ha anche un'opzione **\/WX**.  Per ulteriori informazioni, vedere [\/WX \(Considera gli avvisi del linker come errori\)](../../build/reference/wx-treat-linker-warnings-as-errors.md).|  
|**\/w** `ln`|Specifica il livello di un determinato avviso.  Il primo parametro imposta il livello degli avvisi \(come in **\/W**`n`\) mentre il secondo è il numero di avviso vero e proprio.<br /><br /> `/w14326`, ad esempio, determina la generazione di C4326 come avviso di livello 1.|  
|**\/wd** `n`|Disabilita l'avviso del compilatore specificato in `n`.<br /><br /> `/wd4326`, ad esempio, disattiva l'avviso del compilatore C4326.|  
|**\/we** `n`|Considera come errore l'avviso del compilatore specificato in `n`.<br /><br /> `/we4326`, ad esempio, contrassegna il numero di avviso C4326 come un errore.|  
|**\/wo** `n`|Riporta l'errore soltanto una volta per l'avviso del compilatore specificato in `n`.<br /><br /> Ad esempio, `/wo4326`, fa sì che l'avviso C4326 sia segnalato solo una volta.|  
  
 Se si crea un'intestazione precompilata \([\/Yc \(Crea il file di intestazione precompilato\)](../../build/reference/yc-create-precompiled-header-file.md)\) usando una delle opzioni **\/w**, qualsiasi utilizzo dell'intestazione precompilata \([\/Yu \(Utilizza il file di intestazione precompilato\)](../../build/reference/yu-use-precompiled-header-file.md)\) fa sì che le stesse opzioni **\/w** siano nuovamente attive.  È possibile eseguire l'override dell'impostazione **\/w** nell'intestazione precompilata usando un'altra opzione **\/w** dalla riga di comando.  
  
 Le direttive del pragma nel codice sorgente non vengono influenzate dall'opzione **\/w**.  
  
 È anche possibile utilizzare [warning](../../preprocessor/warning.md) per controllare il livello di avviso segnalato in fase di compilazione.  
  
 La [documentazione di errori di compilazione](../../error-messages/compiler-errors-1/c-cpp-build-errors.md) illustra gli avvisi e i livelli di avviso e indica perché alcune istruzioni non vengono compilate come previsto.  
  
### Impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Selezionare **C\/C\+\+**.  
  
3.  Sulla pagina delle proprietà **Generale**, modificare le proprietà **Livello avvisi** o **Considera gli avvisi come errori**.  
  
4.  Sulla pagina delle proprietà **Avanzate**, modificare la proprietà **Disabilita avvisi specifici**.  
  
5.  Per le opzioni restanti, sulla pagina delle proprietà **Riga di comando**, digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Impostare l'opzione del compilatore a livello di codice  
  
-   Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WarningLevel%2A>, <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WarnAsError%2A>, <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DisableSpecificWarnings%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
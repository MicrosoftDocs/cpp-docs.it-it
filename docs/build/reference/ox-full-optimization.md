---
title: "/Ox (Ottimizzazione completa) | Microsoft Docs"
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
  - "VC.Project.VCCLCompilerTool.ToolOptimization"
  - "/ox"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Ox (opzione del compilatore) [C++]"
  - "velocità codice"
  - "ottimizzazione completa"
  - "Ox (opzione del compilatore) [C++]"
  - "-Ox (opzione del compilatore) [C++]"
ms.assetid: 3ad7c30b-c615-428c-b1d0-2e024f81c760
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Ox (Ottimizzazione completa)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'opzione del compilatore **\/Ox** produce codice che favorisce la velocità di esecuzione rispetto a dimensioni minori.  
  
## Sintassi  
  
```  
/Ox  
```  
  
## Note  
 L'utilizzo dell'opzione del compilatore **\/Ox** equivale a utilizzare le opzioni seguenti:  
  
-   [\/Ob \(Espansione funzioni inline\)](../../build/reference/ob-inline-function-expansion.md), dove il parametro dell'opzione è 2 \(**\/Ob2**\)  
  
-   [\/Og \(Ottimizzazioni globali\)](../../build/reference/og-global-optimizations.md)  
  
-   [\/Oi \(Genera funzioni intrinseche\)](../../build/reference/oi-generate-intrinsic-functions.md)  
  
-   [\/Ot \(Ottimizza per velocità codice\)](../../build/reference/os-ot-favor-small-code-favor-fast-code.md)  
  
-   [\/Oy \(Omissione dei puntatori ai frame\)](../../build/reference/oy-frame-pointer-omission.md)  
  
 **\/Ox** e le opzioni riportate di seguito si escludono a vicenda:  
  
-   [\/O1 \(Riduci dimensione\)](../../build/reference/o1-o2-minimize-size-maximize-speed.md)  
  
-   [\/O2 \(Ottimizza velocità\)](../../build/reference/o1-o2-minimize-size-maximize-speed.md)  
  
-   [\/Od \(Disabilita \(Debug\)\)](../../build/reference/od-disable-debug.md)  
  
 L'opzione del compilatore **\/Ox** abilita inoltre l'ottimizzazione del valore restituito denominato, che elimina il costruttore e il distruttore di copia di un valore restituito basato sullo stack.  Per ulteriori informazioni, vedere [\/O1, \/O2 \(Riduci dimensione, Ottimizza velocità\)](../../build/reference/o1-o2-minimize-size-maximize-speed.md).  
  
 È possibile chiudere l'opzione del compilatore **\/Ox** se si specifica **\/Oxs**, che combina l'opzione del compilatore **\/Ox** con [\/Os \(Ottimizza per dimensione codice\)](../../build/reference/os-ot-favor-small-code-favor-fast-code.md).  Le opzioni combinate favoriscono la dimensione minore del codice.  
  
 In generale, specificare [\/O2 \(Ottimizza velocità\)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) anziché **\/Ox**e [\/O1 \(Riduci dimensione\)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) anziché **\/Oxs**.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Ottimizzazione**.  
  
4.  Modificare la proprietà **Ottimizzazione**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization%2A>.  
  
## Vedere anche  
 [Opzioni \/O \(Ottimizza codice\)](../../build/reference/o-options-optimize-code.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
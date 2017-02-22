---
title: "/Qsafe_fp_loads | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 2b2ce52d-ba57-4bd3-a739-47a7f8bfaba9
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# /Qsafe_fp_loads
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Richiede istruzioni di spostamento Integer per i valori in virgola mobile e disabilita alcune ottimizzazioni di carico in virgola mobile.  
  
## Sintassi  
  
```  
/Qsafe_fp_loads  
```  
  
## Note  
 **\/Qsafe\_fp\_loads** è disponibile solo nei compilatori per piattaforma x86; non è disponibile per i compilatori x64 o ARM.  
  
 **\/Qsafe\_fp\_loads** forza il compilatore a utilizzare le istruzioni di spostamento integer anziché istruzioni di spostamento in virgola mobile per spostare i dati tra la memoria ed i registri MMX.  Questa opzione inoltre disabilita l'ottimizzazione del caricamento del registro per i valori in virgola mobile che possono essere caricati in più percorsi di controllo quando il valore può generare un'eccezione in fase di caricamento, ad esempio un valore NaN.  
  
 Tale opzione viene ignorata da [\/fp:except](../../build/reference/fp-specify-floating-point-behavior.md).  **\/Qsafe\_fp\_loads** specifica un sottoinsieme del comportamento del compilatore specificato da **\/fp:except**.  
  
 **\/Qsafe\_fp\_loads** è incompatibile con [\/clr](../../build/reference/clr-common-language-runtime-compilation.md) e [\/fp:fast](../../build/reference/fp-specify-floating-point-behavior.md).  Per ulteriori informazioni sulle opzioni in virgola mobile del compilatore, vedere [\/fp \(Specifica il comportamento della virgola mobile\)](../../build/reference/fp-specify-floating-point-behavior.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Selezionare la cartella **C\/C\+\+**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni \/Q \(Operazioni di basso livello\)](../../build/reference/q-options-low-level-operations.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
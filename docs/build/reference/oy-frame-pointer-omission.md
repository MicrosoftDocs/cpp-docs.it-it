---
title: "/Oy (Omissione dei puntatori ai frame) | Microsoft Docs"
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
  - "VC.Project.VCCLCompilerTool.OmitFramePointers"
  - "/oy"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Oy (opzione del compilatore) [C++]"
  - "Attiva l'omissione dei puntatori ai frame (opzione del compilatore) [C++]"
  - "omissione dei puntatori ai frame"
  - "Oy (opzione del compilatore) [C++]"
  - "-Oy (opzione del compilatore) [C++]"
  - "Puntatore allo stack frame (opzione del compilatore) [C++]"
  - "annullamento della creazione di puntatori ai frame"
ms.assetid: c451da86-5297-4c5a-92bc-561d41379853
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Oy (Omissione dei puntatori ai frame)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Disabilita la creazione di puntatori ai frame nello stack di chiamate.  
  
## Sintassi  
  
```  
/Oy[-]  
```  
  
## Note  
 Questa opzione consente di velocizzare l'esecuzione delle chiamate di funzione in quanto non è necessario impostare e rimuovere alcun puntatore ai frame.  Libera inoltre un ulteriore registro, EBP sul processore Intel 386 o versioni successive, per l'archiviazione delle variabili e delle sottoespressioni utilizzate di frequente.  
  
 L'opzione **\/Oy** abilita l'omissione dei puntatori ai frame, l'opzione **\/Oy\-** la disabilita. **\/Oy** è disponibile solo nei compilatori x86.  
  
 Se il codice richiede l'indirizzamento basato su EBP, è possibile specificare l'opzione **\/Oy–** dopo  **\/Ox** oppure utilizzare [optimize](../../preprocessor/optimize.md) con gli argomenti "**y**" e **off** per ottenere la migliore ottimizzazione con tale tipo di indirizzamento.  Il compilatore rileva la maggior parte dei casi in cui l'indirizzamento basato su EBP è necessario, ad esempio con le funzioni `_alloca` e `setjmp` e con la gestione delle eccezioni strutturate.  
  
 Le opzioni [\/Ox \(Ottimizzazione completa\)](../../build/reference/ox-full-optimization.md) e [\/O1, \/O2 \(Riduci dimensione, Ottimizza velocità\)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) implicano **\/Oy**.  Se si specifica **\/Oy–** dopo l'opzione **\/Ox**, **\/O1** o **\/O2**, l'opzione **\/Oy** viene disabilitata, che sia esplicita o implicita.  
  
 L'opzione del compilatore **\/Oy** rende più complesso l'utilizzo del debugger perché il compilatore sopprime le informazioni relative ai puntatori ai frame.  Se si specifica un'opzione del compilatore per il debug \([\/Z7, \/Zi, \/ZI](../../build/reference/z7-zi-zi-debug-information-format.md)\), è consigliabile specificare l'opzione **\/Oy\-** dopo eventuali opzioni del compilatore relative all'ottimizzazione.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Ottimizzazione**.  
  
4.  Modificare la proprietà **Ometti puntatori ai frame**.  Questa proprietà consente di aggiungere o rimuovere solo l'opzione **\/Oy**.  Se si desidera aggiungere l'opzione **\/Oy\-**, fare clic su **Riga di comando** e modificare le **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OmitFramePointers%2A>.  
  
## Vedere anche  
 [Opzioni \/O \(Ottimizza codice\)](../../build/reference/o-options-optimize-code.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
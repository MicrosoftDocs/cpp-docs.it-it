---
title: "/Qfast_transcendentals (forzare funzioni trascendenti veloci) | Microsoft Docs"
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
  - "/Qfast_transcendentals"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Qfast_transcendentals"
  - "imporre funzioni trascendenti veloci"
ms.assetid: 4de24bd1-38e6-49d4-9a05-04c9937d24ac
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Qfast_transcendentals (forzare funzioni trascendenti veloci)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Genera codice inline per le funzioni trascendenti.  
  
## Sintassi  
  
```  
/Qfast_transcendentals  
```  
  
## Note  
 Questa opzione del compilatore forza la conversione delle funzioni trascendenti in codice inline per migliorare la velocità di esecuzione.  Questa opzione è operativa solo quando viene utilizzata con **\/fp:except** o **\/fp:precise**.  La generazione del codice inline per le funzioni trascendenti rappresenta già il comportamento predefinito con **\/fp:fast**.  
  
 Questa opzione è incompatibile con **\/fp:strict**.  Per ulteriori informazioni sulle opzioni a virgola mobile del compilatore, vedere [\/fp \(Specifica il comportamento della virgola mobile\)](../../build/reference/fp-specify-floating-point-behavior.md) .  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni \/Q \(Operazioni di basso livello\)](../../build/reference/q-options-low-level-operations.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
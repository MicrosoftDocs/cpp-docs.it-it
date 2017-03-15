---
title: "/Od (Disabilita (Debug)) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/od"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Od (opzione del compilatore) [C++]"
  - "Disabilita (Debug) (opzione del compilatore) [C++]"
  - "disabilitazione ottimizzazioni"
  - "compilazione veloce"
  - "nessuna ottimizzazione"
  - "Od (opzione del compilatore) [C++]"
  - "-Od (opzione del compilatore) [C++]"
ms.assetid: b1ac31b7-e086-4eeb-be5e-488f7513f5f5
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# /Od (Disabilita (Debug))
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Disattiva tutte le ottimizzazioni nel programma e velocizza la compilazione.  
  
## Sintassi  
  
```  
/Od  
```  
  
## Note  
 Rappresenta l'impostazione predefinita.  Poiché **\/Od** elimina lo spostamento di codice, il processo di debug risulta semplificato.  Per ulteriori informazioni sulle opzioni per il debug, vedere [\/Z7, \/Zi, \/ZI \(Formato informazioni di debug\)](../../build/reference/z7-zi-zi-debug-information-format.md).  
  
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
 [\/Z7, \/Zi, \/ZI \(Formato informazioni di debug\)](../../build/reference/z7-zi-zi-debug-information-format.md)
---
title: "/GA (Ottimizza per applicazione Windows) | Microsoft Docs"
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
  - "VC.Project.VCCLCompilerTool.OptimizeForWindowsApplication"
  - "/ga"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/GA (opzione del compilatore) [C++]"
  - "GA (opzione del compilatore) [C++]"
  - "-GA (opzione del compilatore) [C++]"
  - "ottimizzazione per Windows (opzioni del compilatore)"
ms.assetid: be97323e-15a0-4836-862c-95980b51926a
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /GA (Ottimizza per applicazione Windows)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'utilizzo di \/GA produce un codice più efficiente per un file exe per l'accesso alle variabili TLS \(thread\-local storage\).  
  
## Sintassi  
  
```  
/GA  
```  
  
## Note  
 **\/GA** rende più rapido l'accesso ai dati dichiarati con [\_\_declspec\(thread\)](../../cpp/declspec.md) in un programma basato su Windows.  Quando questa opzione è impostata, si presuppone che la macro [\_\_tls\_index](http://msdn.microsoft.com/library/windows/desktop/ms686749) sia 0.  
  
 L'utilizzo di **\/GA** per una DLL può causare generazione di codice errata.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
---
title: "/GX (Attiva gestione eccezioni) | Microsoft Docs"
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
  - "/gx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/GX (opzione del compilatore) [C++]"
  - "compilatore cl.exe, gestione eccezioni"
  - "abilitazione della gestione eccezioni (opzione del compilatore) [C++]"
  - "gestione eccezioni, abilitazione"
  - "GX (opzione del compilatore) [C++]"
  - "-GX (opzione del compilatore) [C++]"
ms.assetid: 933b43ba-de77-4ff8-a48b-7074de90bc1c
caps.latest.revision: 16
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /GX (Attiva gestione eccezioni)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente la gestione sincrona delle eccezioni presupponendo che le funzioni C `extern` non producano mai un'eccezione.  
  
## Sintassi  
  
```  
/GX  
```  
  
## Note  
 Equivale a [\/EH \(Modello di gestione delle eccezioni\)](../../build/reference/eh-exception-handling-model.md).  
  
 **\/GX** è attiva per impostazione predefinita quando si esegue la compilazione all'interno dell'ambiente di sviluppo.  Per impostazione predefinita, **\/GX\-** viene attivata quando si utilizzano gli strumenti della riga di comando.  
  
 Per ulteriori informazioni, vedere [Gestione delle eccezioni C\+\+](../../cpp/cpp-exception-handling.md).  
  
 **\/GX** è deprecata. Utilizzare [\/EH \(Modello di gestione delle eccezioni\)](../../build/reference/eh-exception-handling-model.md).  Per ulteriori informazioni, vedere [Deprecated Compiler Options in Visual C\+\+ 2005](http://msdn.microsoft.com/it-it/aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
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
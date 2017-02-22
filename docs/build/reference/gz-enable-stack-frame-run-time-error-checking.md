---
title: "/GZ (Attiva controllo errori in fase di esecuzione dello stack frame) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/gz"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/GZ (opzione del compilatore) [C++]"
  - "compilazioni di debug, rilevamento degli errori di build di rilascio"
  - "GZ (opzione del compilatore) [C++]"
  - "-GZ (opzione del compilatore) [C++]"
  - "errori di build di rilascio"
ms.assetid: b3efeeff-d5e3-4057-91c9-f6fc73d0270c
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# /GZ (Attiva controllo errori in fase di esecuzione dello stack frame)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue le stesse operazioni eseguite dall'opzione [\/RTC \(Controlli di runtime\)](../../build/reference/rtc-run-time-error-checks.md).  Deprecata.  
  
## Sintassi  
  
```  
/GZ  
```  
  
## Note  
 **\/GZ** viene utilizzato solo in una build non ottimizzata \([\/Od \(Disabilita \(Debug\)\)](../../build/reference/od-disable-debug.md)\).  
  
 **\/GZ** è deprecata. Utilizzare [\/RTC \(Controlli di runtime\)](../../build/reference/rtc-run-time-error-checks.md).  Per ulteriori informazioni, vedere [Deprecated Compiler Options in Visual C\+\+ 2005](http://msdn.microsoft.com/it-it/aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
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
---
title: "/Ge (Attiva ricerche dello stack) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/ge"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Ge (opzione del compilatore) [C++]"
  - "abilitazione ricerche dello stack"
  - "Ge (opzione del compilatore) [C++]"
  - "-Ge (opzione del compilatore) [C++]"
  - "chiamate di verifica dello stack"
  - "ricerche dello stack"
  - "stack, ricerche dello stack"
ms.assetid: 4b54deae-4e3c-4bfa-95f3-ba23590f7258
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# /Ge (Attiva ricerche dello stack)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Attiva le ricerche dello stack per ogni chiamata di funzione che richiede l'archiviazione per le variabili locali.  
  
## Sintassi  
  
```  
/Ge  
```  
  
## Note  
 Questo meccanismo risulta utile se si riscrive la funzionalità della ricerca dello stack.  Si consiglia di utilizzare [\/Gh \(Attiva funzione hook \_penter\)](../../build/reference/gh-enable-penter-hook-function.md) anziché riscrivere la ricerca dello stack.  
  
 [\/Gs \(Verifica le chiamate ai controlli di stack\)](../../build/reference/gs-control-stack-checking-calls.md) ha lo stesso effetto.  
  
 L'opzione **\/Ge** è deprecata; il compilatore genererà il controllo dello stack.  Per ulteriori informazioni, vedere [Deprecated Compiler Options in Visual C\+\+ 2005](http://msdn.microsoft.com/it-it/aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
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
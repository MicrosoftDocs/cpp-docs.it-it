---
title: "/Gy (Attiva collegamento a livello di funzione) | Microsoft Docs"
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
  - "VC.Project.VCCLCompilerTool.EnableFunctionLevelLinking"
  - "/gy"
  - "VC.Project.VCCLWCECompilerTool.EnableFunctionLevelLinking"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Gy (opzione del compilatore) [C++]"
  - "COMDAT (funzione)"
  - "Abilita collegamento a livello di funzione (opzione del compilatore) [C++]"
  - "Gy (opzione del compilatore) [C++]"
  - "-Gy (opzione del compilatore) [C++]"
  - "funzioni nel pacchetto"
ms.assetid: 0d3cf14c-ed7d-4ad3-b4b6-104e56f61046
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Gy (Attiva collegamento a livello di funzione)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Indica al compilatore di assemblare singole funzioni sotto forma di funzioni incluse nel pacchetto \(COMDAT\).  
  
## Sintassi  
  
```  
/Gy[-]  
```  
  
## Note  
 Il linker richiede che venga creato il package delle funzioni separatamente come COMDAT per escludere o ordinare singole funzioni in una DLL o in un file exe.  
  
 Per escludere le funzioni di package senza riferimenti dal file exe, è possibile utilizzare l'opzione del linker [\/OPT \(Ottimizzazioni\)](../../build/reference/opt-optimizations.md).  
  
 Per includere le funzioni di package nell'ordine specificato nel file exe è possibile utilizzare l'opzione del linker [\/ORDER \(Inserisce le funzioni in ordine\)](../../build/reference/order-put-functions-in-order.md).  
  
 Delle funzioni inline viene sempre creato il package se ne è stata creata l'istanza come chiamate. Ciò si verifica, ad esempio, se l'inlining è disattivato o se si accetta un indirizzo di funzione.  Inoltre, a differenza delle altre funzioni, le funzioni membro C\+\+ definite nella dichiarazione della classe vengono automaticamente incluse in un package e la selezione di questa opzione è necessaria per compilarle come funzioni di package.  
  
> [!NOTE]
>  L'opzione [\/ZI](../../build/reference/z7-zi-zi-debug-information-format.md), utilizzata per Modifica e continuazione, imposta automaticamente l'opzione **\/Gy**.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Generazione codice**.  
  
4.  Modificare la proprietà **Attiva collegamento a livello di funzione**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableFunctionLevelLinking%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
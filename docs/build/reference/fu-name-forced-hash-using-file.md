---
title: "/FU (Specifica file #using da utilizzare) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.ForcedUsingFiles"
  - "/FU"
  - "VC.Project.VCNMakeTool.ForcedUsingAssemblies"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/FU (opzione del compilatore) [C++]"
  - "FU (opzione del compilatore) [C++]"
  - "-FU (opzione del compilatore) [C++]"
ms.assetid: 698f8603-457f-435a-baff-5ac9243d6ca1
caps.latest.revision: 15
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /FU (Specifica file #using da utilizzare)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un opzione del compilatore che può essere utilizzata come alternativa al passaggio di un nome file a [Direttiva \#using](../../preprocessor/hash-using-directive-cpp.md) nel codice sorgente.  
  
## Sintassi  
  
```  
/FU file  
```  
  
## Argomenti  
 `file`  
 Specifica il file dei metadati a cui fare riferimento in questa compilazione.  
  
## Note  
 L'opzione \/FU accetta solo un nome file.  Per specificare più file, utilizzare \/FU con ognuno.  
  
 Se si utilizza [!INCLUDE[cppcli](../../build/reference/includes/cppcli_md.md)] e si fa riferimento ai metadati per utilizzare la funzionalità [Assembly Friend](../../dotnet/friend-assemblies-cpp.md), non è possibile utilizzare **\/FU**.  È necessario fare riferimento ai metadati nel codice utilizzando `#using`\- insieme con l'attributo `[as friend]`.  Gli assembly friend non sono supportati in [!INCLUDE[cppwrt](../../build/reference/includes/cppwrt_md.md)] \([!INCLUDE[cppwrt_short](../../build/reference/includes/cppwrt_short_md.md)]\).  
  
 Per informazioni su come creare un assembly o un modulo per Common Language Runtime \(CLR\), vedere [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md).  Per informazioni su come compilare in [!INCLUDE[cppwrt_short](../../build/reference/includes/cppwrt_short_md.md)], vedere [Compilazione di applicazioni e librerie](../Topic/Building%20apps%20and%20libraries%20\(C++-CX\).md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Selezionare la cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
4.  Modificare la proprietà **Imponi \#using**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForcedUsingFiles%2A>.  
  
## Vedere anche  
 [Opzioni del file di output \(\/F\)](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
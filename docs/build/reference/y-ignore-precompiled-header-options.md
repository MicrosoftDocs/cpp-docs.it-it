---
title: "/Y- (Ignora le opzioni di intestazioni precompilate) | Microsoft Docs"
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
  - "/y-"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Y- (opzione del compilatore) [C++]"
  - "-Y- (opzione del compilatore) [C++]"
  - "Y- (opzione del compilatore) [C++]"
ms.assetid: cfaecb36-58db-46b8-b04d-cca6072b1b7a
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Y- (Ignora le opzioni di intestazioni precompilate)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente di ignorare tutte le altre opzioni del compilatore `/Y`. Non può essere sottoposta a override.  
  
## Sintassi  
  
```  
/Y-  
```  
  
## Note  
 Per ulteriori informazioni sulle intestazioni precompilate, vedere:  
  
-   [\/Y \(Intestazioni precompilate\)](../../build/reference/y-precompiled-headers.md)  
  
-   [Creazione di file di intestazione precompilati](../../build/reference/creating-precompiled-header-files.md)  
  
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
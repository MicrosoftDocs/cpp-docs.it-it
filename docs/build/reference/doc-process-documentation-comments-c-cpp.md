---
title: "/doc (Elabora i commenti per la documentazione) (C/C++) | Microsoft Docs"
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
  - "VC.Project.VCCLCompilerTool.GenerateXMLDocumentationFiles"
  - "/doc"
  - "VC.Project.VCCLCompilerTool.XMLDocumentationFileName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/doc (opzione del compilatore) [C++]"
  - "commenti, codice C++"
  - "-doc (opzione del compilatore) [C++]"
  - "documentazione XML, commenti nei file di origine"
ms.assetid: b54f7e2c-f28f-4f46-9ed6-0db09be2cc63
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /doc (Elabora i commenti per la documentazione) (C/C++)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Indica al compilatore di elaborare i commenti relativi alla documentazione nei file di codice sorgente e di creare un file xdc per ciascun file di codice sorgente che contiene commenti relativi alla documentazione.  
  
## Sintassi  
  
```  
/doc[name]  
```  
  
## Argomenti  
 `name`  
 Nome del file xdc che verrà creato dal compilatore.  È valido solo quando nella compilazione viene passato un file cpp.  
  
## Note  
 I file con estensione xdc vengono elaborati in un file con estensione xml con xdcmake.exe.  Per ulteriori informazioni, vedere [Riferimento a XDCMake](../../ide/xdcmake-reference.md).  
  
 È possibile aggiungere commenti relativi alla documentazione nei propri file di codice sorgente.  Per ulteriori informazioni, vedere [Tag consigliati per i commenti relativi alla documentazione](../../ide/recommended-tags-for-documentation-comments-visual-cpp.md).  
  
 **\/doc** non è compatibile con **\/clr:oldSyntax**.  Per ulteriori informazioni, vedere [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 Per utilizzare il file xml generato con IntelliSense, il nome del file xml deve essere uguale al nome dell'assembly che si desidera supportare e la directory del file xml deve essere la stessa dell'assembly.  Quando nel progetto Visual Studio viene fatto riferimento all'assembly, verrà trovato anche il file xml.  Per ulteriori informazioni, vedere [Utilizzo di IntelliSense](../Topic/Using%20IntelliSense.md) e [Inserimento di commenti al codice XML](../Topic/Supplying%20XML%20Code%20Comments.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere il nodo **C\/C\+\+**.  
  
4.  Selezionare la pagina delle proprietà **File di output**.  
  
5.  Modificare la proprietà **Genera file di documentazione XML**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GenerateXMLDocumentationFiles%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
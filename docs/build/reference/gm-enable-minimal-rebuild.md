---
title: "/Gm (Attiva ricompilazione minima) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.MinimalRebuild"
  - "/Gm"
  - "/FD"
  - "VC.Project.VCCLWCECompilerTool.MinimalRebuild"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Gm (opzione del compilatore) [C++]"
  - "Abilita ricompilazione minima (opzione del compilatore) [C++]"
  - "Gm (opzione del compilatore) [C++]"
  - "-Gm (opzione del compilatore) [C++]"
  - "ricompilazione minima"
ms.assetid: d8869ce0-d2ea-40eb-8dae-6d2cdb61dd59
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# /Gm (Attiva ricompilazione minima)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Abilita la ricompilazione minima, che determina se è necessario ricompilare i file di origine C\+\+ che includono modifiche alle definizioni delle classi C\+\+ archiviate nei file di intestazione con estensione h.  
  
## Sintassi  
  
```  
/Gm  
```  
  
## Note  
 Il compilatore archivia le informazioni sulla dipendenza tra i file di origine e le definizioni delle classi nel file con estensione idb del progetto durante la prima compilazione.  Le informazioni sulla dipendenza indicano quale file di origine è dipendente da una determinata definizione di classe e in quale file con estensione h si trova la definizione. Nelle compilazioni successive le informazioni archiviate nel file con estensione idb vengono usate per stabilire se occorre compilare un file di origine, anche se include un file con estensione h modificato.  
  
> [!NOTE]
>  La ricompilazione minima richiede che le definizioni delle classi non vengano modificate nei file di inclusione.  Le definizioni delle classi devono essere globali per un progetto \(dovrebbe esistere una sola definizione di una determinata classe\) perché le informazioni sulla dipendenza nel file con estensione idb vengono create per l'intero progetto.  Se esiste più di una definizione per una classe nel progetto, disabilitare la ricompilazione minima.  
  
 Dato che il linker incrementale non supporta i metadati di Windows inclusi nei file con estensione obj tramite l'opzione [\/ZW \(Compilazione di Windows Runtime\)](../../build/reference/zw-windows-runtime-compilation.md), l'opzione **\/Gm** non è compatibile con **\/ZW**.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Generazione codice**.  
  
4.  Modificare la proprietà **Abilita ricompilazione minima**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.MinimalRebuild%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
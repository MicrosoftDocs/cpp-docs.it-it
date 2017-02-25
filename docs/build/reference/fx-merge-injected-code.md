---
title: "/Fx (Esegue il merge del codice) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLWCECompilerTool.ExpandAttributedSource"
  - "/Fx"
  - "VC.Project.VCCLCompilerTool.ExpandAttributedSource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Fx (opzione del compilatore) [C++]"
  - "-Fx (opzione del compilatore) [C++]"
  - "codice inserito"
  - "unione di codice inserito"
  - "/Fx (opzione del compilatore) [C++]"
ms.assetid: 14f0e301-3bab-45a3-bbdf-e7ce66f20560
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# /Fx (Esegue il merge del codice)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Produce una copia di ogni file di origine con il codice inserito nell'origine.  
  
## Sintassi  
  
```  
/Fx  
```  
  
## Note  
 Per distinguere un file di origine unito da un file di origine originale, **\/Fx** aggiunge un'estensione mrg tra il nome e l'estensione del file. Ad esempio, un file denominato MyCode.cpp contenente codice con attributi e compilato con **\/Fx** crea un file denominato MyCode.mrg.cpp contenente il codice seguente:  
  
```  
//+++ Start Injected Code [no_injected_text(true)];      // Suppress injected text, it has // already been injected #pragma warning(disable: 4543) // Suppress warnings about skipping // injected text #pragma warning(disable: 4199) // Suppress warnings from attribute // providers //--- End Injected Code  
```  
  
 In un file MRG, il codice inserito a causa di un attributo verrà delimitato nel modo seguente:  
  
```  
//+++ Start Injected Code ... //--- End Injected Code  
```  
  
 L'attributo [no\_injected\_text](../../windows/no-injected-text.md) viene incorporato in un file MRG che consente la compilazione del file MRG senza dover reinserire il testo.  
  
 Ricordare che il file di origine MRG è una rappresentazione del codice sorgente inserito dal compilatore. Il file MRG potrebbe non essere compilato o eseguito esattamente come il file originale.  
  
 Le macro non vengono espanse nel file MRG.  
  
 Se il programma include un file di intestazione che usa il codice inserito, **\/Fx** genera un file MRG.H per tale intestazione.**\/Fx** non unisce i file di inclusione che non usano il codice inserito.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **File di output**.  
  
4.  Modificare la proprietà **Espandi origine con attributi**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ExpandAttributedSource%2A>.  
  
## Vedere anche  
 [Opzioni del file di output \(\/F\)](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
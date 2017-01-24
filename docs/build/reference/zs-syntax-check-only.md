---
title: "/Zs (Solo controllo della sintassi) | Microsoft Docs"
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
  - "/zs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Zs (opzione del compilatore) [C++]"
  - "Solo controllo della sintassi (opzione del compilatore)"
  - "Zs (opzione del compilatore)"
  - "-Zs (opzione del compilatore) [C++]"
ms.assetid: b4b41e6a-3f41-4d09-9cb6-fde5aa2cfecf
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Zs (Solo controllo della sintassi)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Indica al compilatore di controllare solo la sintassi dei file di origine nella riga di comando.  
  
## Sintassi  
  
```  
/Zs  
```  
  
## Note  
 Quando si utilizza questa opzione, non viene creato alcun file di output e i messaggi di errore vengono scritti nell'output standard.  
  
 L'opzione **\/Zs** consente di individuare e correggere rapidamente gli errori di sintassi prima che venga compilato e collegato un file di origine.  
  
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
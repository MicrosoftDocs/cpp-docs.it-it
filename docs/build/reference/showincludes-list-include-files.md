---
title: "/showIncludes (Elenca i file di inclusione) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLWCECompilerTool.ShowIncludes"
  - "VC.Project.VCCLCompilerTool.ShowIncludes"
  - "/showincludes"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/showIncludes (opzione del compilatore) [C++]"
  - "file di inclusione"
  - "file di inclusione, visualizzazione durante la compilazione"
  - "showIncludes (opzione del compilatore) [C++]"
  - "-showIncludes (opzione del compilatore) [C++]"
ms.assetid: 0b74b052-f594-45a6-a7c7-09e1a319547d
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# /showIncludes (Elenca i file di inclusione)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina l'output di un elenco di file di inclusione da parte del compilatore.  Vengono visualizzati anche i file di inclusione annidati, vale a dire i file inclusi a loro volta dai file inclusi dal programmatore.  
  
## Sintassi  
  
```  
/showIncludes  
```  
  
## Note  
 Quando viene rilevato un file di inclusione durante la compilazione, viene prodotto un messaggio, ad esempio:  
  
```  
Note: including file: d:\MyDir\include\stdio.h  
```  
  
 I file di inclusione annidati sono indicati da un rientro, uno spazio per ogni livello di annidamento, ad esempio:  
  
```  
Note: including file: d:\temp\1.h  
Note: including file:  d:\temp\2.h  
```  
  
 In questo caso, è presente il rientro perché `2.h` è stato incluso dall'interno di `1.h`.  
  
 L'opzione **\/showIncludes** genera dati in `stderr`, non in `stdout`.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
4.  Modificare la proprietà **Mostra inclusioni**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ShowIncludes%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
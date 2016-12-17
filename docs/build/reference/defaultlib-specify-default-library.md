---
title: "/DEFAULTLIB (Specifica la libreria predefinita) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.DefaultLibraries"
  - "/defaultlib"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/DEFAULTLIB (opzione del linker)"
  - "DEFAULTLIB (opzione del linker)"
  - "-DEFAULTLIB (opzione del linker)"
  - "librerie, aggiunta a elenchi"
ms.assetid: 6af7ff49-c170-4a13-97e2-2b9ae2de20c9
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /DEFAULTLIB (Specifica la libreria predefinita)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/DEFAULTLIB:library  
```  
  
## Note  
 dove:  
  
 *library*  
 Nome di una libreria in cui eseguire le ricerche per la risoluzione di riferimenti esterni.  
  
## Note  
 L'opzione \/DEFAULTLIB consente di aggiungere una *library* all'elenco di librerie in cui vengono eseguite le ricerche per la risoluzione dei riferimenti in LINK.  La ricerca viene effettuata nella libreria specificata con \/DEFAULTLIB dopo le librerie specificate alla riga di comando e prima delle librerie predefinite specificate nei file obj.  
  
 Con l'opzione [Ignora tutte le librerie predefinite](../../build/reference/nodefaultlib-ignore-libraries.md) \(\/NODEFAULTLIB\) viene eseguito l'override di \/DEFAULTLIB:*library*.  Con l'opzione [Ignora librerie](../../build/reference/nodefaultlib-ignore-libraries.md) \(\/NODEFAULTLIB:*library*\) viene eseguito l'override di \/DEFAULTLIB:*library* quando lo stesso nome di *library* viene specificato in entrambe.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
-   Questa opzione non è disponibile all'interno dell'ambiente di sviluppo di Visual Studio.  Per aggiungere una libreria alla fase di collegamento, utilizzare la proprietà **Dipendenze aggiuntive** della pagina delle proprietà **Input**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
---
title: "/LIBPATH (Percorso LIB aggiuntivo) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/libpath"
  - "VC.Project.VCLinkerTool.AdditionalLibraryDirectories"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/LIBPATH (opzione del linker)"
  - "Additional Libpath (opzione del linker)"
  - "override del percorso delle librerie ambiente"
  - "LIBPATH (opzione del linker)"
  - "-LIBPATH (opzione del linker)"
  - "percorso libreria (opzione del linker)"
ms.assetid: 7240af0b-9a3d-4d53-8169-2a92cd6958ba
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# /LIBPATH (Percorso LIB aggiuntivo)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/LIBPATH:dir  
```  
  
## Note  
 dove:  
  
 `dir`  
 Specifica il percorso in cui verranno effettuate le ricerche prima di tentare nel percorso specificato dall'opzione dell'ambiente LIB.  
  
## Note  
 Utilizzare l'opzione \/LIBPATH per eseguire l'override del percorso della libreria dell'ambiente.  La ricerca verrà eseguita prima nel percorso specificato da questa opzione, quindi in quello specificato nella variabile di ambiente LIB.  È possibile specificare solo una directory per ogni opzione \/LIBPATH immessa.  Se si desidera specificare più directory, sarà necessario specificare più opzioni \/LIBPATH.  La ricerca verrà eseguita nelle diverse directory nell'ordine in cui sono state specificate.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Generale**.  
  
4.  Modificare la proprietà **Directory librerie aggiuntive**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalLibraryDirectories%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
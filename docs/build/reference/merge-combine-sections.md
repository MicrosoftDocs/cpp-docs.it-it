---
title: "/MERGE (Combina sezioni) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/merge"
  - "VC.Project.VCLinkerTool.MergeSections"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/MERGE (opzione del linker)"
  - "MERGE (opzione del linker)"
  - "-MERGE (opzione del linker)"
  - "sezioni"
  - "sezioni, combinazione"
  - "sezioni, denominazione"
ms.assetid: 10fb20c2-0b3f-4c8d-98a8-f69aedf03d52
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# /MERGE (Combina sezioni)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/MERGE:from=to  
```  
  
## Note  
 L'opzione \/MERGE consente di unire la prima sezione \(*from*\) alla seconda sezione \(*to*\), assegnando alla sezione ottenuta il nome *to*.  Ad esempio `/merge:.rdata=.text`.  
  
 Se la seconda sezione non esiste, la sezione *from* verrà automaticamente rinominata in *to*.  
  
 L'opzione \/MERGE risulta utile per la creazione di VxD e per eseguire l'override dei nomi di sezione generati nel compilatore.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
4.  Modificare la proprietà **Esegui merge sezioni**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MergeSections%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
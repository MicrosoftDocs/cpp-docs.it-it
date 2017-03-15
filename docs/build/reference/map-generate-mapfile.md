---
title: "/MAP (Genera file MAP) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/map"
  - "VC.Project.VCLinkerTool.MapFileName"
  - "VC.Project.VCLinkerTool.GenerateMapFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/MAP (opzione del linker)"
  - "Genera file map (opzione del linker)"
  - "MAP (opzione del linker)"
  - "-MAP (opzione del linker)"
  - "mapfile (opzione del linker)"
  - "file MAP, creazione del linker"
  - "file MAP, informazioni sul programma collegato"
  - "file MAP, specifica del nome file"
ms.assetid: 9ccce53d-4e36-43da-87b0-7603ddfdea63
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# /MAP (Genera file MAP)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/MAP[:filename]  
```  
  
## Note  
 dove:  
  
 *filename*  
 Nome specificato dall'utente per il file di mapping.  Sostituisce il nome predefinito.  
  
## Note  
 L'opzione \/MAP indica al linker di creare un file di mapping.  
  
 Per impostazione predefinita al file MAP viene assegnato un nome composto dal nome di base del programma e dall'estensione MAP.  Il *filename* facoltativo consente di eseguire l'override del nome predefinito di un file MAP.  
  
 Un file MAP è un file di testo contenente le seguenti informazioni sul programma collegato:  
  
-   Il nome del modulo, ovvero il nome di base del file  
  
-   Il timestamp dell'intestazione del file del programma \(non del file system\)  
  
-   L'elenco dei gruppi del programma, con l'indirizzo iniziale \(nel formato *sezione*:*offset*\), la lunghezza, il nome e la classe di ciascun gruppo  
  
-   Un elenco di simboli pubblici con ciascun indirizzo \(nel formato *sezione*:*offset*\), nome del simbolo, indirizzo di tipo flat e file obj in cui è definito il simbolo  
  
-   Il punto di ingresso \(nel formato *sezione*:*offset*\)  
  
 L'opzione [\/MAPINFO](../../build/reference/mapinfo-include-information-in-mapfile.md) consente di specificare informazioni aggiuntive da includere nel file MAP.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Debug**.  
  
4.  Modificare la proprietà **Genera file MAP**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateMapFile%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MapFileName%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
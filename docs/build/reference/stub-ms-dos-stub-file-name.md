---
title: "/STUB (nome file stub MS-DOS) | Microsoft Docs"
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
  - "/stub"
  - "VC.Project.VCLinkerTool.DosStub"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/STUB (opzione del linker)"
  - "Nome file stub MS-DOS (opzione del linker)"
  - "STUB (opzione del linker)"
  - "-STUB (opzione del linker)"
  - "Win32 [C++], collegamento di programmi stub MS-DOS"
  - "API Windows [C++], collegamento di programmi stub MS-DOS"
ms.assetid: 65221ffe-4f9a-4a14-ac69-3cfb79b40b5f
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /STUB (nome file stub MS-DOS)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/STUB:filename  
```  
  
## Note  
 dove:  
  
 *filename*  
 Applicazione MS\-DOS.  
  
## Note  
 L'opzione \/STUB connette un programma stub MS\-DOS ad un programma Win32.  
  
 Il programma stub viene richiamato se il file viene eseguito in MS\-DOS.  In genere viene visualizzato un messaggio appropriato. Tuttavia qualsiasi applicazione MS\-DOS può essere un programma stub.  
  
 Specificare un *filename* per il programma stub dopo i due punti \(:\) alla riga di comando.  Nel linker viene verificato il *filename* e viene visualizzato un messaggio di errore se il file non è un eseguibile.  È necessario che il programma sia un file exe. I file COM non sono validi come programmi stub.  
  
 Se questa opzione non viene utilizzata, verrà associato automaticamente un programma stub predefinito nel quale verrà generato il seguente messaggio:  
  
```  
This program cannot be run in MS-DOS mode.  
```  
  
 Quando si compila un driver di periferica virtuale, *filename* consente all'utente di specificare un nome file contenente una struttura IMAGE\_DOS\_HEADER \(definita in WINNT.H\) da utilizzare nel VXD, in sostituzione dell'intestazione predefinita.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
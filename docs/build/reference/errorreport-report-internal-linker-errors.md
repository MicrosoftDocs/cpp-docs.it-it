---
title: "/ERRORREPORT (Segnala gli errori interni del linker) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/ERRORREPORT"
  - "VC.Project.VCLinkerTool.ErrorReporting"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/ERRORREPORT (opzione del linker)"
  - "ERRORREPORT (opzione del linker)"
  - "-ERRORREPORT (opzione del linker)"
ms.assetid: f5fab595-a2f1-4eb0-ab5c-1c0fbd3d8c28
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# /ERRORREPORT (Segnala gli errori interni del linker)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/errorReport:[ none | prompt | queue | send ]  
```  
  
## Note  
 Consentire di fornire informazioni su errori interni del compilatore \(ICE\) direttamente a Microsoft.  
  
 L'opzione **\/errorReport:send** prova a inviare automaticamente le informazioni sull'errore a Microsoft, ma il successo dipende dalle impostazioni del Registro di sistema.  Per ulteriori informazioni su come impostare i valori appropriati nel Registro di sistema, vedere la pagina relativa alla [Modalità di Abilitazione della Segnalazione degli Errori Automatica negli Strumenti da Riga di Comando di Visual Studio 2008](http://go.microsoft.com/fwlink/?LinkID=184695) sul sito Web MSDN.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per ulteriori informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Selezionare la cartella **Proprietà di configurazione**.  
  
3.  Selezionare la cartella **Linker**.  
  
4.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
5.  Modificare la proprietà **Segnalazione errori**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ErrorReporting%2A>.  
  
## Vedere anche  
 [\/errorReport \(Segnala gli errori interni del compilatore\)](../../build/reference/errorreport-report-internal-compiler-errors.md)   
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
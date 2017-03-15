---
title: "Pagine delle propriet&#224; MIDL: Avanzate | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCMidlTool.ErrorCheckBounds"
  - "VC.Project.VCMidlTool.ErrorCheckStubData"
  - "VC.Project.VCMidlTool.ErrorCheckAllocations"
  - "VC.Project.VCMidlTool.CPreprocessOptions"
  - "VC.Project.VCMidlTool.UndefinePreprocessorDefinitions"
  - "VC.Project.VCMidlTool.EnableErrorChecks"
  - "VC.Project.VCMidlTool.RedirectOutputAndErrors"
  - "VC.Project.VCMidlTool.ErrorCheckEnumRange"
  - "VC.Project.VCMidlTool.StructMemberAlignment"
  - "VC.Project.VCMidlTool.ErrorCheckRefPointers"
  - "VC.Project.VCMidlTool.ValidateParameters"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MIDL, pagina proprietà"
ms.assetid: d1c92e01-f403-4ed6-ab45-4043a3c9c6bb
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Pagine delle propriet&#224; MIDL: Avanzate
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella pagina delle proprietà **Avanzate** della cartella **MIDL** sono specificate le seguenti opzioni del compilatore MIDL:  
  
-   Attiva controllo errori \([\/error](http://msdn.microsoft.com/library/windows/desktop/aa367324)\)  
  
-   Controlla allocazioni \([\/error](http://msdn.microsoft.com/library/windows/desktop/aa367324)\)  
  
-   Controlla limiti \([\/error](http://msdn.microsoft.com/library/windows/desktop/aa367324)\)  
  
-   Controlla intervallo di enumerazione \([\/error](http://msdn.microsoft.com/library/windows/desktop/aa367324)\)  
  
-   Controlla puntatori di riferimento \([\/error](http://msdn.microsoft.com/library/windows/desktop/aa367324)\)  
  
-   Controlla dati stub \([\/error](http://msdn.microsoft.com/library/windows/desktop/aa367324)\)  
  
-   Convalida parametri \([\/robust](http://msdn.microsoft.com/library/windows/desktop/aa367363)\)  
  
-   Allineamento membri struttura \([\/Zp](http://msdn.microsoft.com/library/windows/desktop/aa367388)\)  
  
-   Reindirizza output \([\/o](http://msdn.microsoft.com/library/windows/desktop/aa367351)\)  
  
-   Opzioni di pre\-elaborazione C \([\/cpp\_opt](http://msdn.microsoft.com/library/windows/desktop/aa367318)\)  
  
-   Rimuovi definizioni per il preprocessore \([\/D](http://msdn.microsoft.com/library/windows/desktop/aa367373)\)  
  
 \* \/robust deve essere utilizzato solo durante la compilazione per un computer con sistema operativo Windows 2000 o successivo.  Se si compila un progetto ATL e si desidera utilizzare \/robust, è necessario modificare la riga seguente nel file dlldatax.c:  
  
```  
#define _WIN32_WINNT 0x0400   //for Windows NT 4.0 or Windows 95 with DCOM  
to   
#define _WIN32_WINNT 0x0500   //for Windows NT 4.0 or Windows 95 with DCOM  
```  
  
 Per informazioni sull'accesso alla pagina delle proprietà **Avanzate** nella cartella **MIDL**, vedere [Procedura: specificare le proprietà del progetto tramite le pagine delle proprietà](../misc/how-to-specify-project-properties-with-property-pages.md).  
  
 Per informazioni sull'accesso alle opzioni MIDL a livello di codice per i progetti di C\+\+, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCMidlTool>.  
  
## Vedere anche  
 [Pagine delle proprietà MIDL](../ide/midl-property-pages.md)
---
title: "Servizi usati negli esempi | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "servizi, visualizzati negli esempi"
  - "esempi, servizi"
ms.assetid: 04864feb-9b8b-45c4-8233-fc2ed9273987
caps.latest.revision: 9
caps.handback.revision: 9
manager: "douge"
---
# Servizi usati negli esempi
Gli esempi inclusi in [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] sono implementati numerosi servizi.  Nell'elenco seguente vengono illustrati diversi servizi di uso frequente e gli esempi che li utilizzano.  
  
> [!NOTE]
>  Se entrambi fanno riferimento ed esempi non supportati sono disponibili, solo esempio di riferimento è elencato.  
  
|Servizio|Esempio|  
|--------------|-------------|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SLocalRegistry>|BscEdit, ProjectSubtype|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsActivityLog>|[Procedura: utilizzare il registro attività](../Topic/How%20to:%20Use%20the%20Activity%20Log.md)|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsAddProjectItemDlg>|BscPrj, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsCreateAggregateProject>|BscPrj|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsFileChange>|Deprecata.  In alternativa, utilizzare <xref:Microsoft.VisualStudio.Shell.Interop.SVsFileChangeEx>.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsFileChangeEx>|BscEdit, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsMonitorUserContext>|esempio di Reference.HelpIntegration.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsQueryEditQuerySave>|esempio di SingleViewEditor.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsRegisterEditors>|esempio di SingleViewEditor.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsRegisterProjectTypes>|BscPrj, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsResourceManager>|Reference.Package, Reference.ToolWindow e molto altro esempi|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsRunningDocumentTable>|esempio di SingleViewEditor.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsSccManager>|BscPrj, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsShell>|Reference.Package, Reference.ToolWindow e molto altro esempi|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsShellDebugger>|BscEdt, BscPrj, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsShellMonitorSelection>|BscPrj, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsSolution>|BscPrj, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsTrackProjectDocuments>|BscPrj, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsTrackSelectionEx>|SingleViewEditor, BscPrj, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsUIShell>|Reference.ToolWindow, BscEdit e molto altro esempi|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsUIShellOpenDocument>|BscEdit, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsWindowFrame>|Reference.ToolWindow|  
  
## Vedere anche  
 [Elenco dei servizi disponibili](../Topic/List%20of%20Available%20Services.md)   
 [Funzionalità fondamentali del servizio](../Topic/Service%20Essentials.md)
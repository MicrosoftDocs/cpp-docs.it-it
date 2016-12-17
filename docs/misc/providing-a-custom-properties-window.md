---
title: "Specifica di una finestra Propriet&#224; personalizzate | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "browser delle proprietà, specifica"
  - "Finestra Proprietà, specifica della finestra Proprietà personalizzate"
ms.assetid: 408dcdef-8ef9-4644-97d2-f311cd35824f
caps.latest.revision: 12
caps.handback.revision: 12
manager: "douge"
---
# Specifica di una finestra Propriet&#224; personalizzate
È possibile fornire la propria finestra **Proprietà** per un sistema di progetto specificato, anziché estensione della finestra **Proprietà** fornita dall'ambiente di sviluppo integrato di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] \(IDE\).  Lo scenario più frequentemente rilevato è quando manualmente utilizzando l'oggetto è stato collocato nella struttura della finestra.  
  
 Nel caso non si implementano l'oggetto trova nella struttura della finestra, ma ancora possibile accedere a tramite altri mezzi, vi sono vari modi per accedere all'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsWindowFrame> come indicato nell'ultima procedura a questa pagina.  
  
### Per fornire la Finestra Proprietà  
  
1.  Definire un GUID che rappresenta l'implementazione della finestra **Proprietà** .  
  
2.  Nell'implementazione di <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.SetSite%2A> , utilizzare il servizio di <xref:Microsoft.VisualStudio.Shell.Interop.IProfferService> per offrire la finestra **Proprietà** come servizio all'ambiente di Visual Studio.  
  
### Per chiamare la finestra delle proprietà  
  
1.  Chiamare il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsWindowPane.SetSite%2A>.  
  
2.  `QueryService` per <xref:Microsoft.VisualStudio.Shell.Interop.SVsTrackSelectionEx> da <xref:Microsoft.VisualStudio.OLE.Interop.IServiceProvider> è stato trasformato il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsWindowPane.SetSite%2A> .  
  
3.  Ottenere <xref:Microsoft.VisualStudio.Shell.Interop.IVsTrackSelectionEx> dal servizio di <xref:Microsoft.VisualStudio.Shell.Interop.SVsTrackSelectionEx> .  
  
4.  Chiamare <xref:Microsoft.VisualStudio.Shell.Interop.IVsTrackSelectionEx.OnElementValueChange%2A> con il primo parametro impostato su `SEID_PropertyBrowserSID` \(ottenuto da enumerazione di <xref:Microsoft.VisualStudio.VSConstants.VSSELELEMID>\), e il terzo parametro, `varValue`, che rappresenta un formato stringa del GUID che rappresenta la finestra **Proprietà**.  Fare una sola volta questa chiamata alla prima creazione della finestra del documento della finestra **Proprietà** .  Dopo la chiamata a questa finestra **Proprietà** è associata alla struttura della finestra.  
  
### Per ottenere la struttura della finestra oggetto quando non viene effettuata dall'implementatore  
  
-   È possibile `QueryService` per il servizio di <xref:Microsoft.VisualStudio.Shell.Interop.SVsTrackSelectionEx> da <xref:Microsoft.VisualStudio.Shell.Interop.IVsWindowFrame.GetProperty%2A> con il parametro `propid` impostato su <xref:Microsoft.VisualStudio.Shell.Interop.__VSFPROPID>.  
  
-   È possibile ottenere la finestra di documento attivo chiamando <xref:Microsoft.VisualStudio.Shell.Interop.IVsMonitorSelection.GetCurrentSelection%2A> tramite il servizio di SVsMonitorSelection.  Impostare il parametro `elementid` a `SEID_WindowFrame`, ricavato dall'enumerazione di <xref:Microsoft.VisualStudio.VSConstants.VSSELELEMID> .  
  
## Vedere anche  
 [Estensione delle proprietà](../Topic/Extending%20Properties.md)   
 [Interfacce e i campi di proprietà finestra](../Topic/Properties%20Window%20Fields%20and%20Interfaces.md)
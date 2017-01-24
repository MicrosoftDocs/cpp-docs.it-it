---
title: "Aggiornamento dei valori della propriet&#224; nella finestra Propriet&#224; | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "finestra Proprietà, aggiornamento dei valori della proprietà"
  - "valori della proprietà, aggiornamento nella finestra Proprietà"
ms.assetid: 9358e8c3-b9d2-4fd4-aaab-cf48d1526db4
caps.latest.revision: 9
caps.handback.revision: 9
manager: "douge"
---
# Aggiornamento dei valori della propriet&#224; nella finestra Propriet&#224;
Esistono due modi per mantenere sincronizzata la finestra **Proprietà** con le modifiche dei valori della proprietà. Il primo consiste nel chiamare l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShell>, che fornisce l'accesso alle funzionalità di windowing di base, inclusi l'accesso e la creazione di finestre degli strumenti e dei documenti fornite dall'ambiente. I passaggi seguenti descrivono il processo di sincronizzazione.  
  
## Aggiornamento dei valori di proprietà tramite IVsUIShell  
  
#### Per aggiornare i valori di proprietà tramite l'interfaccia IVsUIShell  
  
1.  Chiamare <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShell> \(tramite il servizio <xref:Microsoft.VisualStudio.Shell.Interop.SVsUIShell>\) ogni volta che VSPackage, progetti o editor devono creare o enumerare finestre degli strumenti o dei documenti.  
  
2.  Implementare <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShell.RefreshPropertyBrowser%2A> per mantenere sincronizzata la finestra **Proprietà** con le modifiche alle proprietà per un progetto \(o qualsiasi altro oggetto selezionato visualizzato tramite la finestra **Proprietà**\) senza implementare <xref:Microsoft.VisualStudio.OLE.Interop.IConnectionPointContainer> e generare eventi <xref:Microsoft.VisualStudio.OLE.Interop.IPropertyNotifySink.OnChanged%2A>.  
  
3.  Implementare i metodi <xref:Microsoft.VisualStudio.Shell.Interop.IVsHierarchy><xref:Microsoft.VisualStudio.Shell.Interop.IVsHierarchy.AdviseHierarchyEvents%2A> e <xref:Microsoft.VisualStudio.Shell.Interop.IVsHierarchy.UnadviseHierarchyEvents%2A> per stabilire e disabilitare, rispettivamente, la notifica client degli eventi di gerarchia senza richiedere l'implementazione di <xref:Microsoft.VisualStudio.OLE.Interop.IConnectionPointContainer> nella gerarchia.  
  
## Aggiornamento dei valori di proprietà tramite IConnection  
 Il secondo modo per mantenere sincronizzata la finestra **Proprietà** con le modifiche dei valori della proprietà consiste nell'implementare `IConnection` sull'oggetto collegabile per indicare l'esistenza delle interfacce in uscita. Se si vuole localizzare il nome della proprietà, derivare l'oggetto da <xref:System.ComponentModel.ICustomTypeDescriptor>. L'implementazione <xref:System.ComponentModel.ICustomTypeDescriptor> può modificare i descrittori di proprietà che restituisce e cambiare il nome di una proprietà. Per localizzare la descrizione, creare un attributo che deriva da <xref:System.ComponentModel.DescriptionAttribute> ed eseguire l'override della proprietà Description.  
  
#### Considerazioni relative all'implementazione dell'interfaccia IConnection  
  
1.  `IConnection` fornisce l'accesso a un oggetto secondario enumeratore con l'interfaccia <xref:Microsoft.VisualStudio.OLE.Interop.IEnumConnectionPoints>. Fornisce inoltre l'accesso a tutti gli oggetti secondari del punto di connessione, ciascuno dei quali implementa l'interfaccia <xref:Microsoft.VisualStudio.OLE.Interop.IConnectionPoint>.  
  
2.  Qualsiasi oggetto è responsabile dell'implementazione di un evento <xref:Microsoft.VisualStudio.OLE.Interop.IPropertyNotifySink>. Nella finestra **Proprietà** verrà indicato l'evento impostato tramite `IConnection`.  
  
3.  Un punto di connessione controlla il numero di connessioni \(una o più\) che consente nella propria implementazione di <xref:Microsoft.VisualStudio.OLE.Interop.IConnectionPoint.Advise%2A>. Un punto di connessione che consente una sola interfaccia può restituire <xref:Microsoft.VisualStudio.VSConstants.E_NOTIMPL> dal metodo <xref:Microsoft.VisualStudio.OLE.Interop.IConnectionPoint.EnumConnections%2A>.  
  
4.  Un client può chiamare l'interfaccia `IConnection` per ottenere l'accesso a un oggetto secondario enumeratore con l'interfaccia <xref:Microsoft.VisualStudio.OLE.Interop.IEnumConnectionPoints>. L'interfaccia <xref:Microsoft.VisualStudio.OLE.Interop.IEnumConnectionPoints> può quindi essere chiamata per enumerare i punti di connessione per ogni ID di interfaccia \(IID\) in uscita.  
  
5.  `IConnection` può anche essere chiamato per ottenere l'accesso agli oggetti secondari del punto di connessione con l'interfaccia <xref:Microsoft.VisualStudio.OLE.Interop.IConnectionPoint> per ogni IID in uscita. Tramite l'interfaccia <xref:Microsoft.VisualStudio.OLE.Interop.IConnectionPoint>, un client avvia o termina un ciclo consultivo con l'oggetto collegabile e la sincronizzazione del client stesso. Il client può anche chiamare l'interfaccia <xref:Microsoft.VisualStudio.OLE.Interop.IConnectionPoint> per ottenere un oggetto enumeratore con l'interfaccia <xref:Microsoft.VisualStudio.OLE.Interop.IEnumConnections> per enumerare le connessioni note.  
  
## Vedere anche  
 [Specifica della traccia della selezione per la finestra Proprietà](../misc/announcing-property-window-selection-tracking.md)   
 [Estensione delle proprietà](../Topic/Extending%20Properties.md)
---
title: "Aggiunta di servizi Web ai sistemi del progetto | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "sistemi del progetto, aggiunta di servizi Web"
  - "servizi Web, aggiunta ai sistemi del progetto VSPackage"
ms.assetid: 8efa078b-68b2-45a2-9be2-44f807bc0d7f
caps.latest.revision: 8
caps.handback.revision: 8
manager: "douge"
---
# Aggiunta di servizi Web ai sistemi del progetto
I servizi Web XML sono, in genere risorse URL\-indirizzabili che restituiscono informazioni a livello di codice al sistema di progetto utilizzando il protocollo SOAP \(vengano Object Access Protocol\)\).  È possibile integrare i servizi Web al sistema di progetto di un VSPackage tramite l'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsAddProjectItemDlg2> .  
  
### Per aggiungere un servizio Web nel sistema del progetto  
  
1.  Chiamata `QueryService` per l'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsAddProjectItemDlg2> tramite il servizio di <xref:Microsoft.VisualStudio.Shell.Interop.SVsAddWebReferenceDlg> .  
  
2.  Chiamare il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsAddWebReferenceDlg2.AddWebReferenceDlg%2A>.  Se viene passato nel parametro di `pDiscoverySession` come `NULL`, una sessione di individuazione viene creata automaticamente e la sessione viene memorizzato nella cache in modo che sia disponibile per l'utilizzo successivo dall'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsAddWebReferenceDlg2> .  il metodo di<xref:Microsoft.VisualStudio.Shell.Interop.IVsAddWebReferenceDlg2.AddWebReferenceDlg%2A> restituisce un puntatore a <xref:Microsoft.VisualStudio.Shell.Interop.IDiscoveryResult2>.  
  
3.  Chiamare il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IDiscoveryResult.AddWebReference%2A>.  Passare l'oggetto ActiveX per la cartella riferimenti del servizio Web come parametro di `pUnkWebReferenceFolder` .  I controlli dell'ambiente di Visual Studio quindi se il servizio Web è già presente.  Se il servizio Web non è presente, l'ambiente scarica e aggiunge il servizio Web in una cartella e a tutti i file aggiuntivi \(ad esempio file wsdl\) per i nodi figlio della cartella.  
  
## Vedere anche  
 <xref:Microsoft.VisualStudio.Shell.Interop.IVsAddWebReferenceDlg2>   
 <xref:Microsoft.VisualStudio.Shell.Interop.IDiscoveryResult>   
 <xref:Microsoft.VisualStudio.Shell.Interop.IDiscoverySession>   
 <xref:Microsoft.VisualStudio.Shell.Interop.IVsDiscoveryService>
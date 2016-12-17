---
title: "Specifica della traccia della selezione per la finestra Propriet&#224; | Microsoft Docs"
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
  - "editor [Visual Studio SDK], supporto delle pagine delle proprietà"
  - "pagine delle proprietà, traccia della selezione"
  - "finestra Proprietà, traccia della selezione"
  - "selezione, traccia"
  - "editor [Visual Studio SDK], supporto della finestra Proprietà"
ms.assetid: a7536f82-afd7-4894-9a60-84307fb92b7e
caps.latest.revision: 13
caps.handback.revision: 13
manager: "douge"
---
# Specifica della traccia della selezione per la finestra Propriet&#224;
Se si desidera utilizzare la finestra di **Proprietà** o le pagine di **proprietà** , ad esempio, un form, testo, o una selezione per il quale si desidera visualizzare le proprietà, è necessario avere una conoscenza approfondita della modalità di coordinate la selezione.  Ad esempio, è necessario sapere se la selezione singola o selezioni.  In genere si utilizza una finestra del documento quando:  Questa interfaccia fornisce informazioni necessarie dalla finestra di **Proprietà** .  
  
### Per annunciare selezione all'ambiente  
  
1.  chiamata `QueryInterface` per <xref:Microsoft.VisualStudio.OLE.Interop.IServiceProvider>.  
  
    1.  A tale scopo, utilizzare il puntatore del sito passato alla visualizzazione quando è stato creato.  
  
    2.  Chiamare `QueryService` dalla visualizzazione per il servizio di `SID_STrackSelection` .  
  
         Viene restituito un puntatore a <xref:Microsoft.VisualStudio.Shell.Interop.ITrackSelection>.  
  
2.  Chiamare il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.ITrackSelection.OnSelectChange%2A> ogni modifica di selezione e passare un puntatore a un oggetto che implementa <xref:Microsoft.VisualStudio.Shell.Interop.ISelectionContainer>.  
  
     L'oggetto contenitore di selezione possibile utilizzare la scelta o selezioni e contiene le informazioni di selezione in un oggetto di `IDispatch` .  Chiamando il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.ITrackSelection.OnSelectChange%2A> indica alla finestra di **Proprietà** che la selezione è stata modificata.  La finestra di **Proprietà** utilizza quindi gli oggetti in <xref:Microsoft.VisualStudio.Shell.Interop.ISelectionContainer> per determinare se singolo o selezioni si sono verificati e quali sono le effettive selezioni dell'oggetto.  
  
     Se si specifica una selezione multipla, la finestra di **Proprietà** trova l'intersezione tra le proprietà comuni per gli oggetti.  Se si specifica una singola selezione dell'oggetto, la finestra di **Proprietà** visualizzare tutte le proprietà di un oggetto.  
  
## Vedere anche  
 [Estensione delle proprietà](../Topic/Extending%20Properties.md)   
 [Pagine delle proprietà](../Topic/Property%20Pages.md)
---
title: "Attivazione sul posto | Microsoft Docs"
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
  - "editor [Visual Studio SDK], personalizzati - attivazione di visualizzazione sul posto"
ms.assetid: 7d316945-06e0-4d8e-ba3a-0ef96fc75399
caps.latest.revision: 26
caps.handback.revision: 26
manager: "douge"
---
# Attivazione sul posto
Se la visualizzazione dell'editor ospita controlli ActiveX o altri controlli attivi, è necessario implementare la visualizzazione come controllo ActiveX o come oggetto dati del documento attivo usando il modello di attivazione sul posto.  
  
## Supporto per menu, barre degli strumenti e comandi  
 Visual Studio consente alla visualizzazione dell'editor di usare i menu e le barre degli strumenti dell'IDE. Queste estensioni sono dette *componenti OLE sul posto*. Per altre informazioni, vedere <xref:Microsoft.VisualStudio.Shell.Interop.IOleInPlaceComponent> e <xref:Microsoft.VisualStudio.Shell.Interop.IOleInPlaceComponentUIManager>.  
  
 Se si implementa un controllo ActiveX, è possibile ospitare altri oggetti incorporati. Se si implementa un oggetto dati del documento, la cornice della finestra vincola la possibilità di usare i controlli ActiveX.  
  
> [!NOTE]
>  Le interfacce <xref:Microsoft.VisualStudio.OLE.Interop.IOleDocument> e <xref:Microsoft.VisualStudio.OLE.Interop.IOleDocumentView> consentono una separazione di dati e visualizzazione. Tuttavia, Visual Studio non supporta questa funzionalità e queste interfacce vengono usate solo per rappresentare l'oggetto visualizzazione del documento.  
  
 Gli editor che usano il servizio <xref:Microsoft.VisualStudio.Shell.Interop.SOleComponentUIManager> possono fornire l'integrazione di menu, barre degli strumenti e comandi chiamando i metodi dell'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IOleInPlaceComponentUIManager> che il servizio <xref:Microsoft.VisualStudio.Shell.Interop.SOleComponentUIManager> implementa. Gli editor possono anche offrire altre funzionalità di Visual Studio, come la traccia della selezione e la gestione dell'annullamento. Per altre informazioni, vedere [Creazione di finestre di progettazione ed editor personalizzati](../Topic/Creating%20Custom%20Editors%20and%20Designers.md).  
  
## Interfacce e oggetti usati  
 Gli oggetti usati per creare l'attivazione sul posto sono illustrati nella figura seguente.  
  
 ![Editor di attivazione sul posto](../misc/media/vsinplaceactivationeditor.png "vsInPlaceActivationEditor")  
Editor di attivazione sul posto  
  
> [!NOTE]
>  Tra gli oggetti di questa figura, solo l'oggetto `CYourEditorFactory` è necessario per creare un editor standard. Se si crea un editor personalizzato, non è necessario implementare <xref:Microsoft.VisualStudio.Shell.Interop.IVsPersistDocData2> perché l'editor avrà probabilmente un proprio meccanismo di salvataggio permanente privato. Per altre informazioni, vedere [Creazione di finestre di progettazione ed editor personalizzati](../Topic/Creating%20Custom%20Editors%20and%20Designers.md).  
  
 Tutte le interfacce implementate per creare un editor di attivazione sul posto sono visualizzate nel singolo oggetto `CYourEditorDocument`, ma questa configurazione supporta solo una singola visualizzazione dei dati del documento. Per altre informazioni sul supporto di più visualizzazioni dei dati del documento, vedere [Supporta più viste di documento](../Topic/Supporting%20Multiple%20Document%20Views.md).  
  
|Interfaccia|Tipo di oggetto|Uso|  
|-----------------|---------------------|---------|  
|<xref:Microsoft.VisualStudio.Shell.Interop.IOleInPlaceComponent>|Visualizzazione|Consente agli oggetti VSPackage sul posto di funzionare come componenti completamente integrati dell'IDE usando il servizio <xref:Microsoft.VisualStudio.Shell.Interop.SOleComponentUIManager>. Questo servizio integra menu, barre degli strumenti e comandi dell'oggetto nell'IDE e invia notifiche delle modifiche di stato.|  
|<xref:Microsoft.VisualStudio.OLE.Interop.IOleObject>|Visualizzazione|Mezzo principale attraverso cui un oggetto incorporato fornisce funzionalità di base al relativo contenitore e comunica con esso.|  
|<xref:Microsoft.VisualStudio.OLE.Interop.IOleInPlaceActiveObject>|Visualizzazione|Gestisce l'attivazione e la disattivazione degli oggetti sul posto e determina la quantità dell'oggetto sul posto che deve essere visibile.|  
|<xref:Microsoft.VisualStudio.OLE.Interop.IOleInPlaceObject>|Visualizzazione|Fornisce un canale diretto di comunicazione tra un oggetto sul posto, la finestra cornice più esterna dell'applicazione associata e la finestra del documento nell'applicazione che contiene l'oggetto incorporato.|  
|<xref:Microsoft.VisualStudio.OLE.Interop.IOleDocument>|Visualizzazione|Implementa un oggetto ActiveX. Si noti che i metodi di <xref:Microsoft.VisualStudio.OLE.Interop.IOleDocument> e `T:Microsoft.VisualStudio.OLE.Interop.IOleDocumentView` che separano i dati del documento e la visualizzazione non sono usati nell'IDE.|  
|<xref:Microsoft.VisualStudio.OLE.Interop.IOleCommandTarget>|Visualizzazione\/Dati|Consente all'oggetto dati del documento o all'oggetto visualizzazione del documento, o a entrambi, di partecipare alla gestione dei comandi.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbarUser>|Visualizzazione|Consente gli aggiornamenti della barra di stato.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxUser>|Visualizzazione|Consente l'aggiunta di elementi alla casella degli strumenti.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.IVsFileChangeEvents>|Dati|Invia una notifica delle modifiche al file. Questa interfaccia è facoltativa.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.IPersistFileFormat>|Dati|Consente di abilitare la funzionalità Salva con nome per un tipo di file.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.IVsPersistDocData>|Dati|Abilita il salvataggio permanente di un documento. Per i file di sola lettura, chiamare <xref:Microsoft.VisualStudio.Shell.Interop.IVsPersistDocData2.SetDocDataReadOnly%2A> per fornire l'icona a forma di lucchetto che indica i file di sola lettura.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.IVsDocDataFileChangeControl>|Dati|Determina se le modifiche ai dati del documento devono essere ignorate.|
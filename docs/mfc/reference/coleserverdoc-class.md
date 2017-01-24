---
title: "COleServerDoc Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleServerDoc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleServerDoc class"
  - "container/server applications"
  - "OLE containers, server documents"
  - "applicazioni server OLE, managing server documents"
  - "OLE server documents"
  - "server documents, OLE"
  - "server, OLE"
ms.assetid: a9cdd96a-e0ac-43bb-9203-2c29237e965c
caps.latest.revision: 24
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COleServerDoc Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe base per i documenti del server OLE.  
  
## Sintassi  
  
```  
class AFX_NOVTABLE COleServerDoc : public COleLinkingDoc  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleServerDoc::COleServerDoc](../Topic/COleServerDoc::COleServerDoc.md)|Costruisce un oggetto `COleServerDoc`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleServerDoc::ActivateDocObject](../Topic/COleServerDoc::ActivateDocObject.md)|Attiva il documento collegato di DocObject.|  
|[COleServerDoc::ActivateInPlace](../Topic/COleServerDoc::ActivateInPlace.md)|Attiva il documento per la modifica sul posto.|  
|[COleServerDoc::DeactivateAndUndo](../Topic/COleServerDoc::DeactivateAndUndo.md)|Disattiva l'interfaccia utente del server.|  
|[COleServerDoc::DiscardUndoState](../Topic/COleServerDoc::DiscardUndoState.md)|Informazioni della fase di rollback\- stato di rifiuta.|  
|[COleServerDoc::GetClientSite](../Topic/COleServerDoc::GetClientSite.md)|Recupera un puntatore a interfaccia sottostante `IOleClientSite`.|  
|[COleServerDoc::GetEmbeddedItem](../Topic/COleServerDoc::GetEmbeddedItem.md)|Restituisce un puntatore a un elemento che rappresenta l'intero documento.|  
|[COleServerDoc::GetItemClipRect](../Topic/COleServerDoc::GetItemClipRect.md)|Restituisce il rettangolo di ridimensionamento corrente per la modifica sul posto.|  
|[COleServerDoc::GetItemPosition](../Topic/COleServerDoc::GetItemPosition.md)|Restituisce il rettangolo di posizione corrente, relativo all'area client dell'applicazione contenitore, per la modifica sul posto.|  
|[COleServerDoc::GetZoomFactor](../Topic/COleServerDoc::GetZoomFactor.md)|Restituisce il fattore di zoom in pixel.|  
|[COleServerDoc::IsDocObject](../Topic/COleServerDoc::IsDocObject.md)|Determina se il documento è un DocObject.|  
|[COleServerDoc::IsEmbedded](../Topic/COleServerDoc::IsEmbedded.md)|Indica se il documento è incorporato in un documento contenitore o in un computer autonomo.|  
|[COleServerDoc::IsInPlaceActive](../Topic/COleServerDoc::IsInPlaceActive.md)|Restituisce `TRUE` se l'elemento è attualmente attivo sul posto.|  
|[COleServerDoc::NotifyChanged](../Topic/COleServerDoc::NotifyChanged.md)|Notifica ai contenitori che l'utente ha modificato il documento.|  
|[COleServerDoc::NotifyClosed](../Topic/COleServerDoc::NotifyClosed.md)|Notifica ai contenitori che l'utente ha chiuso il documento.|  
|[COleServerDoc::NotifyRename](../Topic/COleServerDoc::NotifyRename.md)|Notifica ai contenitori che l'utente ha modificato il documento.|  
|[COleServerDoc::NotifySaved](../Topic/COleServerDoc::NotifySaved.md)|Notifica ai contenitori che l'utente ha salvato il documento.|  
|[COleServerDoc::OnDeactivate](../Topic/COleServerDoc::OnDeactivate.md)|Chiamato dal framework quando l'utente disabilita un elemento è stato attivato sul posto.|  
|[COleServerDoc::OnDeactivateUI](../Topic/COleServerDoc::OnDeactivateUI.md)|Chiamato dal framework per eliminare i controlli e altri elementi di interfaccia utente creati per l'attivazione sul posto.|  
|[COleServerDoc::OnDocWindowActivate](../Topic/COleServerDoc::OnDocWindowActivate.md)|Chiamato dal framework quando la finestra cornice di documento client è attivata o disattivata.|  
|[COleServerDoc::OnResizeBorder](../Topic/COleServerDoc::OnResizeBorder.md)|Chiamato dal framework quando la finestra cornice o la finestra del documento dell'applicazione contenitore viene ridimensionata.|  
|[COleServerDoc::OnShowControlBars](../Topic/COleServerDoc::OnShowControlBars.md)|Chiamato dal framework per visualizzare o nascondere le barre di controllo per la modifica sul posto.|  
|[COleServerDoc::OnUpdateDocument](../Topic/COleServerDoc::OnUpdateDocument.md)|Chiamato dal framework quando un documento server che è un elemento incorporato viene salvato, aggiornando la copia del contenitore dell'elemento.|  
|[COleServerDoc::RequestPositionChange](../Topic/COleServerDoc::RequestPositionChange.md)|Modifica la posizione della modifica sul posto.|  
|[COleServerDoc::SaveEmbedding](../Topic/COleServerDoc::SaveEmbedding.md)|Indica all'applicazione contenitore salvare il documento.|  
|[COleServerDoc::ScrollContainerBy](../Topic/COleServerDoc::ScrollContainerBy.md)|Scorre il documento contenitore.|  
|[COleServerDoc::UpdateAllItems](../Topic/COleServerDoc::UpdateAllItems.md)|Notifica ai contenitori che l'utente ha modificato il documento.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleServerDoc::CreateInPlaceFrame](../Topic/COleServerDoc::CreateInPlaceFrame.md)|Chiamato dal framework per creare una finestra cornice per la modifica sul posto.|  
|[COleServerDoc::DestroyInPlaceFrame](../Topic/COleServerDoc::DestroyInPlaceFrame.md)|Chiamato dal framework per eliminare una finestra cornice per la modifica sul posto.|  
|[COleServerDoc::GetDocObjectServer](../Topic/COleServerDoc::GetDocObjectServer.md)|Eseguire l'override della funzione per creare un nuovo oggetto `CDocObjectServer` e per indicare che il documento è un contenitore di DocObject.|  
|[COleServerDoc::OnClose](../Topic/COleServerDoc::OnClose.md)|Chiamato dal framework quando richieste di un contenitore di chiudere il documento.|  
|[COleServerDoc::OnExecOleCmd](../Topic/COleServerDoc::OnExecOleCmd.md)|Esegue un comando specificato o consente di visualizzare per il comando.|  
|[COleServerDoc::OnFrameWindowActivate](../Topic/COleServerDoc::OnFrameWindowActivate.md)|Chiamato dal framework quando la finestra cornice del contenitore viene attivata o disattivata.|  
|[COleServerDoc::OnGetEmbeddedItem](../Topic/COleServerDoc::OnGetEmbeddedItem.md)|Chiamato per ottenere `COleServerItem` che rappresenta l'intero documento; utilizzato per ottenere un elemento incorporato.  Implementazione richiesta.|  
|[COleServerDoc::OnReactivateAndUndo](../Topic/COleServerDoc::OnReactivateAndUndo.md)|Chiamato dal framework per annullare le modifiche apportate durante la modifica sul posto.|  
|[COleServerDoc::OnSetHostNames](../Topic/COleServerDoc::OnSetHostNames.md)|Chiamato dal framework quando un contenitore imposta il titolo per un oggetto incorporato.|  
|[COleServerDoc::OnSetItemRects](../Topic/COleServerDoc::OnSetItemRects.md)|Chiamato dal framework per posizionare la finestra al posto della cornice per la modifica nella finestra dell'applicazione contenitore.|  
|[COleServerDoc::OnShowDocument](../Topic/COleServerDoc::OnShowDocument.md)|Chiamato dal framework per visualizzare o nascondere il documento.|  
  
## Note  
 Un documento server può contenere oggetti [COleServerItem](../../mfc/reference/coleserveritem-class.md), che rappresentano l'interfaccia server a incorporato o agli elementi collegati.  Quando un'applicazione server viene avviata da un contenitore modificare un elemento incorporato, l'elemento viene caricato come proprio documento server; l'oggetto `COleServerDoc` contiene un solo oggetto `COleServerItem`, composto da un intero documento.  Quando un'applicazione server viene avviata da un contenitore modificare un elemento collegato, un documento esistente viene caricato da disco, una parte contenuto del documento viene evidenziata per indicare l'elemento collegato.  
  
 Gli oggetti di`COleServerDoc` possono inoltre contenere elementi della classe [COleClientItem](../../mfc/reference/coleclientitem-class.md).  Consente di creare applicazioni di contenitore\- server.  Il framework fornisce funzioni correttamente per archiviare gli elementi `COleClientItem` come ulteriore `COleServerItem` oggetti.  
  
 Se l'applicazione server non fa collegamenti di supporto, un documento server conterrà sempre un solo elemento server, che rappresenta l'intero oggetto incorporato come documento.  Se l'applicazione server vengono forniti collegamenti di supporto, deve creare un elemento server ogni volta una selezione viene copiata negli Appunti.  
  
 Per utilizzare `COleServerDoc`, derivare una classe da e implementare la funzione membro [OnGetEmbeddedItem](../Topic/COleServerDoc::OnGetEmbeddedItem.md), che consente al server supportano gli elementi incorporati.  Derivare la classe da `COleServerItem` per distribuire gli elementi nei documenti e restituire oggetti della classe da `OnGetEmbeddedItem`.  
  
 Per supportare gli elementi collegati, `COleServerDoc` fornisce la funzione membro [OnGetLinkedItem](../Topic/COleLinkingDoc::OnGetLinkedItem.md).  È possibile utilizzare l'implementazione predefinita o eseguirne l'override se si dispone della propria modalità di gestione degli elementi del documento.  
  
 È necessario un `COleServerDoc`classe derivata da per ogni tipo di documento server i supporti di applicazione.  Ad esempio, se l'applicazione server supporta i fogli di lavoro e grafici, sono necessari due `COleServerDoc`di classi derivate.  
  
 Per ulteriori informazioni sui server, vedere l'articolo [server: Implementazione di un server](../../mfc/servers-implementing-a-server.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocument](../../mfc/reference/cdocument-class.md)  
  
 [COleDocument](../../mfc/reference/coledocument-class.md)  
  
 [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md)  
  
 `COleServerDoc`  
  
## Requisiti  
 **Header:** afxole.h  
  
## Vedere anche  
 [Esempio HIERSVR MFC](../../top/visual-cpp-samples.md)   
 [COleLinkingDoc Class](../../mfc/reference/colelinkingdoc-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleDocument Class](../../mfc/reference/coledocument-class.md)   
 [COleLinkingDoc Class](../../mfc/reference/colelinkingdoc-class.md)   
 [COleTemplateServer Class](../../mfc/reference/coletemplateserver-class.md)
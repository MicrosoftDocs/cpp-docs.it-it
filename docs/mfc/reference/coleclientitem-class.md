---
title: "COleClientItem Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleClientItem"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "client items and OLE containers"
  - "COleClientItem class"
  - "container interface class"
  - "OLE client item class"
  - "OLE containers, client items"
  - "OLE containers, interface class"
ms.assetid: 7f571b7c-2758-4839-847a-0cf1ef643128
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 26
---
# COleClientItem Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Definisce l'interfaccia del contenitore agli elementi OLE.  
  
## Sintassi  
  
```  
class COleClientItem : public CDocItem  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleClientItem::COleClientItem](../Topic/COleClientItem::COleClientItem.md)|Costruisce un oggetto `COleClientItem`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleClientItem::Activate](../Topic/COleClientItem::Activate.md)|Aprire l'elemento OLE per un'operazione quindi esegue il verbo specificato.|  
|[COleClientItem::ActivateAs](../Topic/COleClientItem::ActivateAs.md)|Attiva l'elemento come altro tipo.|  
|[COleClientItem::AttachDataObject](../Topic/COleClientItem::AttachDataObject.md)|L'accesso ai dati nell'oggetto OLE.|  
|[COleClientItem::CanCreateFromData](../Topic/COleClientItem::CanCreateFromData.md)|Indica se un'applicazione contenitore può creare un oggetto incorporato.|  
|[COleClientItem::CanCreateLinkFromData](../Topic/COleClientItem::CanCreateLinkFromData.md)|Indica se un'applicazione contenitore può creare un oggetto collegato.|  
|[COleClientItem::CanPaste](../Topic/COleClientItem::CanPaste.md)|Indica se gli Appunti contengono un elemento OLE integrabile o statico.|  
|[COleClientItem::CanPasteLink](../Topic/COleClientItem::CanPasteLink.md)|Indica se gli Appunti contengono un elemento collegabile OLE.|  
|[COleClientItem::Close](../Topic/COleClientItem::Close.md)|Chiude un collegamento a un server ma non elimina l'elemento OLE.|  
|[COleClientItem::ConvertTo](../Topic/COleClientItem::ConvertTo.md)|Converte l'elemento a un altro.|  
|[COleClientItem::CopyToClipboard](../Topic/COleClientItem::CopyToClipboard.md)|Copiare l'elemento OLE negli Appunti.|  
|[COleClientItem::CreateCloneFrom](../Topic/COleClientItem::CreateCloneFrom.md)|Viene creato un duplicato di un elemento esistente.|  
|[COleClientItem::CreateFromClipboard](../Topic/COleClientItem::CreateFromClipboard.md)|Crea un elemento incorporato dagli Appunti.|  
|[COleClientItem::CreateFromData](../Topic/COleClientItem::CreateFromData.md)|Crea un elemento incorporato da un oggetto dati.|  
|[COleClientItem::CreateFromFile](../Topic/COleClientItem::CreateFromFile.md)|Crea un elemento incorporato da un file.|  
|[COleClientItem::CreateLinkFromClipboard](../Topic/COleClientItem::CreateLinkFromClipboard.md)|Crea un elemento collegato dagli Appunti.|  
|[COleClientItem::CreateLinkFromData](../Topic/COleClientItem::CreateLinkFromData.md)|Crea un elemento collegato da un oggetto dati.|  
|[COleClientItem::CreateLinkFromFile](../Topic/COleClientItem::CreateLinkFromFile.md)|Crea un elemento collegato da un file.|  
|[COleClientItem::CreateNewItem](../Topic/COleClientItem::CreateNewItem.md)|Crea un nuovo elemento incorporato avviando l'applicazione server.|  
|[COleClientItem::CreateStaticFromClipboard](../Topic/COleClientItem::CreateStaticFromClipboard.md)|Crea un elemento statico dagli Appunti.|  
|[COleClientItem::CreateStaticFromData](../Topic/COleClientItem::CreateStaticFromData.md)|Crea un elemento statico da un oggetto dati.|  
|[COleClientItem::Deactivate](../Topic/COleClientItem::Deactivate.md)|Disattiva l'elemento.|  
|[COleClientItem::DeactivateUI](../Topic/COleClientItem::DeactivateUI.md)|Ripristino dell'interfaccia utente dell'applicazione contenitore allo stato originale.|  
|[COleClientItem::Delete](../Topic/COleClientItem::Delete.md)|Elimina o chiudere l'elemento OLE se fosse un elemento collegato.|  
|[COleClientItem::DoDragDrop](../Topic/COleClientItem::DoDragDrop.md)|Esegue un'operazione di trascinamento.|  
|[COleClientItem::DoVerb](../Topic/COleClientItem::DoVerb.md)|Esegue il verbo specificato.|  
|[COleClientItem::Draw](../Topic/COleClientItem::Draw.md)|Estrae l'elemento OLE.|  
|[COleClientItem::GetActiveView](../Topic/COleClientItem::GetActiveView.md)|Ottiene la visualizzazione dell'elemento viene attivato sul posto.|  
|[COleClientItem::GetCachedExtent](../Topic/COleClientItem::GetCachedExtent.md)|Restituisce i limiti del rettangolo dell'elemento OLE.|  
|[COleClientItem::GetClassID](../Topic/COleClientItem::GetClassID.md)|Ottiene l'id della classe dell'elemento corrente|  
|[COleClientItem::GetClipboardData](../Topic/COleClientItem::GetClipboardData.md)|Ottiene i dati che verranno inseriti negli Appunti chiamando la funzione membro `CopyToClipboard`.|  
|[COleClientItem::GetDocument](../Topic/COleClientItem::GetDocument.md)|Restituisce l'oggetto `COleDocument` contenente l'elemento corrente.|  
|[COleClientItem::GetDrawAspect](../Topic/COleClientItem::GetDrawAspect.md)|Ottiene la visualizzazione dell'elemento corrente per il rendering.|  
|[COleClientItem::GetExtent](../Topic/COleClientItem::GetExtent.md)|Restituisce i limiti del rettangolo dell'elemento OLE.|  
|[COleClientItem::GetIconFromRegistry](../Topic/COleClientItem::GetIconFromRegistry.md)|Retrives handle a un'icona associata al server di un CLSID particolare.|  
|[COleClientItem::GetIconicMetafile](../Topic/COleClientItem::GetIconicMetafile.md)|Ottiene un metafile utilizzate per creare l'icona dell'elemento.|  
|[COleClientItem::GetInPlaceWindow](../Topic/COleClientItem::GetInPlaceWindow.md)|Restituisce un puntatore alla finestra di modifica sul posto dell'elemento.|  
|[COleClientItem::GetItemState](../Topic/COleClientItem::GetItemState.md)|Ottiene lo stato corrente dell'elemento.|  
|[COleClientItem::GetLastStatus](../Topic/COleClientItem::GetLastStatus.md)|Restituisce lo stato dell'ultima operazione OLE.|  
|[COleClientItem::GetLinkUpdateOptions](../Topic/COleClientItem::GetLinkUpdateOptions.md)|Restituisce la modalità di aggiornamento per un elemento collegato \(funzionalità avanzate\).|  
|[COleClientItem::GetType](../Topic/COleClientItem::GetType.md)|Restituisce il tipo \(incorporato, collegato, o statici\) dell'elemento OLE.|  
|[COleClientItem::GetUserType](../Topic/COleClientItem::GetUserType.md)|Ottiene una stringa che descrive il tipo di elemento.|  
|[COleClientItem::IsInPlaceActive](../Topic/COleClientItem::IsInPlaceActive.md)|Restituisce `TRUE` se l'elemento è attivo sul posto.|  
|[COleClientItem::IsLinkUpToDate](../Topic/COleClientItem::IsLinkUpToDate.md)|Restituisce **TRUE** se un elemento collegato verrà aggiornato con il documento di origine.|  
|[COleClientItem::IsModified](../Topic/COleClientItem::IsModified.md)|Restituisce `TRUE` se l'elemento è stato modificato da quando è stato salvato per ultima.|  
|[COleClientItem::IsOpen](../Topic/COleClientItem::IsOpen.md)|Restituisce `TRUE` se l'elemento è attualmente aperto nell'applicazione server.|  
|[COleClientItem::IsRunning](../Topic/COleClientItem::IsRunning.md)|Restituisce `TRUE` se l'applicazione server dell'elemento è in esecuzione.|  
|[COleClientItem::OnActivate](../Topic/COleClientItem::OnActivate.md)|Chiamato dal framework per notificare all'elemento che viene attivato.|  
|[COleClientItem::OnActivateUI](../Topic/COleClientItem::OnActivateUI.md)|Chiamato dal framework per notificare all'elemento che viene attivato e deve mostrare la relativa interfaccia utente.|  
|[COleClientItem::OnChange](../Topic/COleClientItem::OnChange.md)|Chiamato quando il server modifica l'elemento OLE.  Implementazione richiesta.|  
|[COleClientItem::OnDeactivate](../Topic/COleClientItem::OnDeactivate.md)|Chiamato dal framework quando un elemento viene disabilitato.|  
|[COleClientItem::OnDeactivateUI](../Topic/COleClientItem::OnDeactivateUI.md)|Chiamato dal framework quando il server ha rimosso la relativa interfaccia utente sul posto.|  
|[COleClientItem::OnGetClipboardData](../Topic/COleClientItem::OnGetClipboardData.md)|Chiamato dal framework per ottenere i dati per essere copiato negli Appunti.|  
|[COleClientItem::OnInsertMenus](../Topic/COleClientItem::OnInsertMenus.md)|Chiamato dal framework per creare un menu composto.|  
|[COleClientItem::OnRemoveMenus](../Topic/COleClientItem::OnRemoveMenus.md)|Chiamato dal framework per rimuovere i menu del contenitore da un menu composto.|  
|[COleClientItem::OnSetMenu](../Topic/COleClientItem::OnSetMenu.md)|Chiamato dal framework per impostare e rimuovere un menu composto.|  
|[COleClientItem::OnShowControlBars](../Topic/COleClientItem::OnShowControlBars.md)|Chiamato dal framework per visualizzare e nascondere le barre di controllo.|  
|[COleClientItem::OnUpdateFrameTitle](../Topic/COleClientItem::OnUpdateFrameTitle.md)|Chiamato dal framework per aggiornare la didascalia della finestra cornice.|  
|[COleClientItem::ReactivateAndUndo](../Topic/COleClientItem::ReactivateAndUndo.md)|Riattivare l'elemento e annullata l'ultima operazione di modifica sul posto.|  
|[COleClientItem::Release](../Topic/COleClientItem::Release.md)|Elimina la connessione a un elemento collegato OLE e la chiusura se è stata aperta.  Non elimina l'elemento client.|  
|[COleClientItem::Reload](../Topic/COleClientItem::Reload.md)|Ricarica l'elemento dopo una chiamata a `ActivateAs`.|  
|[COleClientItem::Run](../Topic/COleClientItem::Run.md)|Esegue l'applicazione associata all'elemento.|  
|[COleClientItem::SetDrawAspect](../Topic/COleClientItem::SetDrawAspect.md)|Imposta la visualizzazione dell'elemento corrente per il rendering.|  
|[COleClientItem::SetExtent](../Topic/COleClientItem::SetExtent.md)|Imposta il rettangolo di delimitazione dell'elemento OLE.|  
|[COleClientItem::SetHostNames](../Topic/COleClientItem::SetHostNames.md)|Imposta i nomi che il server viene visualizzato quando modifica l'elemento OLE.|  
|[COleClientItem::SetIconicMetafile](../Topic/COleClientItem::SetIconicMetafile.md)|Memorizza nella cache metafile utilizzate per creare l'icona dell'elemento.|  
|[COleClientItem::SetItemRects](../Topic/COleClientItem::SetItemRects.md)|Imposta il rettangolo di delimitazione dell'elemento.|  
|[COleClientItem::SetLinkUpdateOptions](../Topic/COleClientItem::SetLinkUpdateOptions.md)|Imposta la modalità di aggiornamento per un elemento collegato \(funzionalità avanzate\).|  
|[COleClientItem::SetPrintDevice](../Topic/COleClientItem::SetPrintDevice.md)|Imposta il dispositivo di stampa di destinazione per l'elemento client.|  
|[COleClientItem::UpdateLink](../Topic/COleClientItem::UpdateLink.md)|Aggiorna la cache di presentazione di un elemento.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleClientItem::CanActivate](../Topic/COleClientItem::CanActivate.md)|Chiamato dal framework per determinare se l'attivazione sul posto è consentita.|  
|[COleClientItem::OnChangeItemPosition](../Topic/COleClientItem::OnChangeItemPosition.md)|Chiamato dal framework quando si modifica la posizione di un elemento.|  
|[COleClientItem::OnDeactivateAndUndo](../Topic/COleClientItem::OnDeactivateAndUndo.md)|Chiamato dal framework per annullare dopo l'attivazione.|  
|[COleClientItem::OnDiscardUndoState](../Topic/COleClientItem::OnDiscardUndoState.md)|Chiamato dal framework per rimuovere le informazioni sullo stato di annullamento dell'elemento.|  
|[COleClientItem::OnGetClipRect](../Topic/COleClientItem::OnGetClipRect.md)|Chiamato dal framework per ottenere coordinate del rettangolo di ridimensionamento dell'elemento.|  
|[COleClientItem::OnGetItemPosition](../Topic/COleClientItem::OnGetItemPosition.md)|Chiamato dal framework per ottenere la posizione dell'elemento nella visualizzazione.|  
|[COleClientItem::OnGetWindowContext](../Topic/COleClientItem::OnGetWindowContext.md)|Chiamato dal framework quando un elemento viene attivato sul posto.|  
|[COleClientItem::OnScrollBy](../Topic/COleClientItem::OnScrollBy.md)|Chiamato dal framework per lo scorrimento nella visualizzazione.|  
|[COleClientItem::OnShowItem](../Topic/COleClientItem::OnShowItem.md)|Chiamato dal framework per visualizzare l'elemento OLE.|  
  
## Note  
 Un elemento OLE rappresenta i dati, creati e gestiti da un'applicazione server, che può "senza problemi" essere inclusa in un documento in modo che venga visualizzato all'utente essere un singolo documento.  Il risultato è "un documento composto" composto l'elemento OLE e di un documento contenente.  
  
 Un elemento OLE può essere incorporato o collegato.  Se è incorporato, i dati sono archiviati come parte del documento composto.  Se sono collegati, i dati sono archiviati come parte di un file separato creati dall'applicazione server e solo un collegamento al file viene archiviato nel documento composto.  Tutti gli elementi OLE contiene informazioni che specificano l'applicazione server che deve essere chiamata per modificarli.  
  
 `COleClientItem` definisce diverse funzioni sottoponibili a override che vengono chiamate in risposta a richieste dall'applicazione server; questi overridables generalmente agiscono da notifiche.  In questo modo l'applicazione server al contenitore delle modifiche apportate dall'utente quando viene modificato l'elemento OLE, o recuperare le informazioni necessarie durante la modifica.  
  
 `COleClientItem` può essere utilizzato con la classe [COleDocument](../../mfc/reference/coledocument-class.md), [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md), o [COleServerDoc](../../mfc/reference/coleserverdoc-class.md).  Per utilizzare `COleClientItem`, derivare una classe da e implementare la funzione membro [OnChange](../Topic/COleClientItem::OnChange.md), che definisce come il contenitore risposta alle modifiche apportate all'elemento.  Per supportare l'attivazione sul posto, eseguire l'override della funzione membro [OnGetItemPosition](../Topic/COleClientItem::OnGetItemPosition.md).  Questa funzione vengono fornite informazioni sul percorso visualizzato dell'elemento OLE.  
  
 Per ulteriori informazioni sull'interfaccia del contenitore, vedere gli articoli [contenitori: implementare un contenitore](../../mfc/containers-implementing-a-container.md) e [attivazione](../../mfc/activation-cpp.md).  
  
> [!NOTE]
>  [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] fa riferimento a incorporato e gli elementi collegati oggetti "e" fa riferimento ai tipi di elementi come "classe". Questo utilizzo di riferimento il termine "elemento" distinguere l'entità OLE dall'oggetto corrispondente C\+\+ e il termine "tipo" per distinguere la categoria OLE dalla classe C\+\+.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocItem](../../mfc/reference/cdocitem-class.md)  
  
 `COleClientItem`  
  
## Requisiti  
 **Header:** afxole.h  
  
## Vedere anche  
 [Esempio MFCBIND MFC](../../top/visual-cpp-samples.md)   
 [Esempio OCLIENT MFC](../../top/visual-cpp-samples.md)   
 [CDocItem Class](../../mfc/reference/cdocitem-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleServerItem Class](../../mfc/reference/coleserveritem-class.md)
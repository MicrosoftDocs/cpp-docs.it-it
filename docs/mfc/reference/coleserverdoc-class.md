---
title: Classe COleServerDoc | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleServerDoc
- AFXOLE/COleServerDoc
- AFXOLE/COleServerDoc::COleServerDoc
- AFXOLE/COleServerDoc::ActivateDocObject
- AFXOLE/COleServerDoc::ActivateInPlace
- AFXOLE/COleServerDoc::DeactivateAndUndo
- AFXOLE/COleServerDoc::DiscardUndoState
- AFXOLE/COleServerDoc::GetClientSite
- AFXOLE/COleServerDoc::GetEmbeddedItem
- AFXOLE/COleServerDoc::GetItemClipRect
- AFXOLE/COleServerDoc::GetItemPosition
- AFXOLE/COleServerDoc::GetZoomFactor
- AFXOLE/COleServerDoc::IsDocObject
- AFXOLE/COleServerDoc::IsEmbedded
- AFXOLE/COleServerDoc::IsInPlaceActive
- AFXOLE/COleServerDoc::NotifyChanged
- AFXOLE/COleServerDoc::NotifyClosed
- AFXOLE/COleServerDoc::NotifyRename
- AFXOLE/COleServerDoc::NotifySaved
- AFXOLE/COleServerDoc::OnDeactivate
- AFXOLE/COleServerDoc::OnDeactivateUI
- AFXOLE/COleServerDoc::OnDocWindowActivate
- AFXOLE/COleServerDoc::OnResizeBorder
- AFXOLE/COleServerDoc::OnShowControlBars
- AFXOLE/COleServerDoc::OnUpdateDocument
- AFXOLE/COleServerDoc::RequestPositionChange
- AFXOLE/COleServerDoc::SaveEmbedding
- AFXOLE/COleServerDoc::ScrollContainerBy
- AFXOLE/COleServerDoc::UpdateAllItems
- AFXOLE/COleServerDoc::CreateInPlaceFrame
- AFXOLE/COleServerDoc::DestroyInPlaceFrame
- AFXOLE/COleServerDoc::GetDocObjectServer
- AFXOLE/COleServerDoc::OnClose
- AFXOLE/COleServerDoc::OnExecOleCmd
- AFXOLE/COleServerDoc::OnFrameWindowActivate
- AFXOLE/COleServerDoc::OnGetEmbeddedItem
- AFXOLE/COleServerDoc::OnReactivateAndUndo
- AFXOLE/COleServerDoc::OnSetHostNames
- AFXOLE/COleServerDoc::OnSetItemRects
- AFXOLE/COleServerDoc::OnShowDocument
dev_langs:
- C++
helpviewer_keywords:
- COleServerDoc [MFC], COleServerDoc
- COleServerDoc [MFC], ActivateDocObject
- COleServerDoc [MFC], ActivateInPlace
- COleServerDoc [MFC], DeactivateAndUndo
- COleServerDoc [MFC], DiscardUndoState
- COleServerDoc [MFC], GetClientSite
- COleServerDoc [MFC], GetEmbeddedItem
- COleServerDoc [MFC], GetItemClipRect
- COleServerDoc [MFC], GetItemPosition
- COleServerDoc [MFC], GetZoomFactor
- COleServerDoc [MFC], IsDocObject
- COleServerDoc [MFC], IsEmbedded
- COleServerDoc [MFC], IsInPlaceActive
- COleServerDoc [MFC], NotifyChanged
- COleServerDoc [MFC], NotifyClosed
- COleServerDoc [MFC], NotifyRename
- COleServerDoc [MFC], NotifySaved
- COleServerDoc [MFC], OnDeactivate
- COleServerDoc [MFC], OnDeactivateUI
- COleServerDoc [MFC], OnDocWindowActivate
- COleServerDoc [MFC], OnResizeBorder
- COleServerDoc [MFC], OnShowControlBars
- COleServerDoc [MFC], OnUpdateDocument
- COleServerDoc [MFC], RequestPositionChange
- COleServerDoc [MFC], SaveEmbedding
- COleServerDoc [MFC], ScrollContainerBy
- COleServerDoc [MFC], UpdateAllItems
- COleServerDoc [MFC], CreateInPlaceFrame
- COleServerDoc [MFC], DestroyInPlaceFrame
- COleServerDoc [MFC], GetDocObjectServer
- COleServerDoc [MFC], OnClose
- COleServerDoc [MFC], OnExecOleCmd
- COleServerDoc [MFC], OnFrameWindowActivate
- COleServerDoc [MFC], OnGetEmbeddedItem
- COleServerDoc [MFC], OnReactivateAndUndo
- COleServerDoc [MFC], OnSetHostNames
- COleServerDoc [MFC], OnSetItemRects
- COleServerDoc [MFC], OnShowDocument
ms.assetid: a9cdd96a-e0ac-43bb-9203-2c29237e965c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c7df4ea13313758c517188e1c4ce0441618a99b4
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37039064"
---
# <a name="coleserverdoc-class"></a>Classe COleServerDoc
Classe di base per i documenti del server OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class AFX_NOVTABLE COleServerDoc : public COleLinkingDoc  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleServerDoc::COleServerDoc](#coleserverdoc)|Costruisce un oggetto `COleServerDoc`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleServerDoc::ActivateDocObject](#activatedocobject)|Attiva il documento DocObject associato.|  
|[COleServerDoc::ActivateInPlace](#activateinplace)|Attiva il documento per la modifica sul posto.|  
|[COleServerDoc::DeactivateAndUndo](#deactivateandundo)|Disattiva interfaccia utente del server.|  
|[COleServerDoc::DiscardUndoState](#discardundostate)|Elimina le informazioni sullo stato di annullamento.|  
|[COleServerDoc::GetClientSite](#getclientsite)|Recupera un puntatore all'oggetto sottostante `IOleClientSite` interfaccia.|  
|[COleServerDoc::GetEmbeddedItem](#getembeddeditem)|Restituisce un puntatore a un elemento che rappresenta l'intero documento.|  
|[COleServerDoc::GetItemClipRect](#getitemcliprect)|Restituisce il rettangolo di ritaglio corrente per la modifica sul posto.|  
|[COleServerDoc::GetItemPosition](#getitemposition)|Restituisce il rettangolo di posizione corrente, relative rispetto all'area client dell'applicazione contenitore, per la modifica sul posto.|  
|[COleServerDoc::GetZoomFactor](#getzoomfactor)|Restituisce il fattore di zoom in pixel.|  
|[COleServerDoc::IsDocObject](#isdocobject)|Determina se il documento è DocObject.|  
|[COleServerDoc::IsEmbedded](#isembedded)|Indica se il documento è in esecuzione autonomo o incorporato in un documento contenitore.|  
|[COleServerDoc::IsInPlaceActive](#isinplaceactive)|Restituisce `TRUE` se l'elemento è attualmente attivato sul posto.|  
|[COleServerDoc::NotifyChanged](#notifychanged)|Notifica a contenitori che l'utente ha modificato il documento.|  
|[COleServerDoc::NotifyClosed](#notifyclosed)|Notifica a contenitori che l'utente ha chiuso il documento.|  
|[COleServerDoc::NotifyRename](#notifyrename)|Notifica a contenitori che l'utente ha rinominato il documento.|  
|[COleServerDoc::NotifySaved](#notifysaved)|Notifica a contenitori che l'utente è salvato il documento.|  
|[COleServerDoc::OnDeactivate](#ondeactivate)|Chiamato dal framework quando l'utente disattiva un elemento che è stato attivato sul posto.|  
|[COleServerDoc::OnDeactivateUI](#ondeactivateui)|Chiamato dal framework per eliminare definitivamente i controlli e altri elementi dell'interfaccia utente creati per l'attivazione sul posto.|  
|[COleServerDoc::OnDocWindowActivate](#ondocwindowactivate)|Chiamato dal framework quando finestra cornice di documento del contenitore è attivata o disattivata.|  
|[COleServerDoc::OnResizeBorder](#onresizeborder)|Chiamato dal framework quando l'applicazione contenitore finestra cornice o finestra del documento viene ridimensionato.|  
|[COleServerDoc::OnShowControlBars](#onshowcontrolbars)|Chiamato dal framework per mostrare o nascondere le barre di controllo per la modifica sul posto.|  
|[COleServerDoc::OnUpdateDocument](#onupdatedocument)|Chiamato dal framework quando viene salvato un documento nel server che è un elemento incorporato, l'aggiornamento di copia del contenitore dell'elemento.|  
|[COleServerDoc::RequestPositionChange](#requestpositionchange)|Modifica la posizione della cornice per la modifica sul posto.|  
|[COleServerDoc::SaveEmbedding](#saveembedding)|Comunicare all'applicazione contenitore per salvare il documento.|  
|[COleServerDoc::ScrollContainerBy](#scrollcontainerby)|Scorre il documento contenitore.|  
|[COleServerDoc::UpdateAllItems](#updateallitems)|Notifica a contenitori che l'utente ha modificato il documento.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleServerDoc::CreateInPlaceFrame](#createinplaceframe)|Chiamata eseguita dal framework per creare una finestra cornice per la modifica sul posto.|  
|[COleServerDoc::DestroyInPlaceFrame](#destroyinplaceframe)|Chiamato dal framework per eliminare definitivamente una finestra cornice per la modifica sul posto.|  
|[COleServerDoc::GetDocObjectServer](#getdocobjectserver)|Eseguire l'override di questa funzione per creare un nuovo `CDocObjectServer` dell'oggetto e indicare che questo documento è un contenitore DocObject.|  
|[COleServerDoc::OnClose](#onclose)|Chiamato dal framework quando un contenitore richiede la chiusura del documento.|  
|[COleServerDoc::OnExecOleCmd](#onexecolecmd)|Esegue un comando specificato o viene visualizzata la Guida per il comando.|  
|[COleServerDoc::OnFrameWindowActivate](#onframewindowactivate)|Chiamato dal framework quando finestra cornice del contenitore è attivata o disattivata.|  
|[COleServerDoc:: OnGetEmbeddedItem](#ongetembeddeditem)|Chiamata eseguita per ottenere un `COleServerItem` che rappresenta l'intero documento; usato per ottenere un elemento incorporato. Implementazione necessaria.|  
|[COleServerDoc::OnReactivateAndUndo](#onreactivateandundo)|Chiamato dal framework per annullare le modifiche apportate durante la modifica sul posto.|  
|[COleServerDoc::OnSetHostNames](#onsethostnames)|Chiamato dal framework quando un contenitore imposta il titolo della finestra per un oggetto incorporato.|  
|[COleServerDoc::OnSetItemRects](#onsetitemrects)|Chiamato dal framework per posizionare la finestra cornice modifica sul posto all'interno di finestra dell'applicazione contenitore.|  
|[COleServerDoc::OnShowDocument](#onshowdocument)|Chiamato dal framework per mostrare o nascondere il documento.|  
  
## <a name="remarks"></a>Note  
 Un documento server può contenere [COleServerItem](../../mfc/reference/coleserveritem-class.md) oggetti che rappresentano l'interfaccia server agli elementi incorporati o collegati. Quando un'applicazione server viene avviata da un contenitore per modificare un elemento incorporato, l'elemento viene caricato come il proprio documento del server. il `COleServerDoc` oggetto contiene uno solo `COleServerItem` oggetto, composto l'intero documento. Quando un'applicazione server viene avviata da un contenitore per modificare un elemento collegato, un documento esistente viene caricato dal disco. una parte del contenuto del documento è evidenziata per indicare che l'elemento collegato.  
  
 `COleServerDoc` gli oggetti possono inoltre contenere elementi del [COleClientItem](../../mfc/reference/coleclientitem-class.md) classe. In questo modo è possibile creare applicazioni contenitore / server. Il framework fornisce funzioni per archiviare correttamente la `COleClientItem` elementi durante la gestione di `COleServerItem` oggetti.  
  
 Se l'applicazione server non supporta i collegamenti, un documento server conterrà sempre un solo elemento del server, che rappresenta l'intero oggetto incorporato come un documento. Se l'applicazione server supporta i collegamenti, è necessario creare un elemento server ogni volta che una selezione viene copiata negli Appunti.  
  
 Per utilizzare `COleServerDoc`, derivare una classe e implementare il [OnGetEmbeddedItem](#ongetembeddeditem) funzione membro, che consente al server supportare gli elementi incorporati. Derivare una classe da `COleServerItem` per implementare gli elementi nei documenti e restituire oggetti di tale classe da `OnGetEmbeddedItem`.  
  
 Per supportare gli elementi collegati, `COleServerDoc` fornisce il [OnGetLinkedItem](../../mfc/reference/colelinkingdoc-class.md#ongetlinkeditem) funzione membro. È possibile usare l'implementazione predefinita o eseguirne l'override se è possibile personalizzare le modalità di gestione degli elementi del documento.  
  
 È necessario uno `COleServerDoc`-classe derivata di ogni tipo di server di documenti supportate dall'applicazione. Ad esempio, se l'applicazione server supporta i grafici e fogli di lavoro, è necessario utilizzare due `COleServerDoc`-classi derivate.  
  
 Per ulteriori informazioni sui server, vedere l'articolo [server: implementazione di un Server](../../mfc/servers-implementing-a-server.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocument](../../mfc/reference/cdocument-class.md)  
  
 [COleDocument](../../mfc/reference/coledocument-class.md)  
  
 [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md)  
  
 `COleServerDoc`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="activatedocobject"></a>  COleServerDoc::ActivateDocObject  
 Attiva il documento DocObject associato.  
  
```  
void ActivateDocObject();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `COleServerDoc` non supporta i documenti attivi (detto anche DocObjects). Per abilitare questo supporto, vedere [GetDocObjectServer](#getdocobjectserver) e la classe [CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md).  
  
##  <a name="activateinplace"></a>  COleServerDoc::ActivateInPlace  
 Attiva l'elemento per la modifica sul posto.  
  
```  
BOOL ActivateInPlace();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario, 0, che indica che l'elemento è completamente aperto.  
  
### <a name="remarks"></a>Note  
 Questa funzione esegue tutte le operazioni necessari per l'attivazione sul posto. Crea una finestra cornice sul posto, viene attivato e viene ridimensionata per l'elemento, imposta menu condivisi e altri controlli, scorre l'elemento nella visualizzazione e imposta lo stato attivo alla finestra cornice sul posto.  
  
 Questa funzione viene chiamata dall'implementazione predefinita del [COleServerItem::OnShow](../../mfc/reference/coleserveritem-class.md#onshow). Chiamare questa funzione se l'applicazione supporta verbo un'altra per l'attivazione sul posto (ad esempio Play).  
  
##  <a name="coleserverdoc"></a>  COleServerDoc::COleServerDoc  
 Costruisce un `COleServerDoc` oggetto senza stabilire la connessione con le DLL di sistema OLE.  
  
```  
COleServerDoc();
```  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [COleLinkingDoc::Register](../../mfc/reference/colelinkingdoc-class.md#register) per aprire le comunicazioni con OLE. Se si utilizza [COleTemplateServer](../../mfc/reference/coletemplateserver-class.md) nell'applicazione `COleLinkingDoc::Register` viene chiamato automaticamente dal `COleLinkingDoc`dell'implementazione di `OnNewDocument`, `OnOpenDocument`, e `OnSaveDocument`.  
  
##  <a name="createinplaceframe"></a>  COleServerDoc::CreateInPlaceFrame  
 Il framework chiama questa funzione per creare una finestra cornice per la modifica sul posto.  
  
```  
virtual COleIPFrameWnd* CreateInPlaceFrame(CWnd* pParentWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *pParentWnd*  
 Puntatore alla finestra padre dell'applicazione contenitore.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla finestra cornice sul posto, o **NULL** caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita Usa informazioni specificate nel modello di documento per creare il frame. La vista utilizzata è la prima visualizzazione creata per il documento. Questa vista viene temporaneamente disconnessa dal frame originale e collegata al frame appena creato.  
  
 Si tratta di un'avanzata sottoponibile a override.  
  
##  <a name="deactivateandundo"></a>  COleServerDoc::DeactivateAndUndo  
 Chiamare questa funzione se annullare supportate dall'applicazione e l'utente sceglie Annulla dopo l'attivazione di un elemento ma prima di modificarlo.  
  
```  
BOOL DeactivateAndUndo();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero in caso di esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Se l'applicazione contenitore viene scritta utilizzando la libreria Microsoft Foundation Class, chiamare questa funzione provoca [COleClientItem::OnDeactivateAndUndo](../../mfc/reference/coleclientitem-class.md#ondeactivateandundo) da chiamare, che disattiva interfaccia utente del server.  
  
##  <a name="destroyinplaceframe"></a>  COleServerDoc::DestroyInPlaceFrame  
 Il framework chiama questa funzione per eliminare definitivamente una finestra cornice sul posto e riportare il server finestra del documento dell'applicazione allo stato antecedente l'attivazione sul posto.  
  
```  
virtual void DestroyInPlaceFrame(COleIPFrameWnd* pFrameWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *pFrameWnd*  
 Puntatore alla finestra cornice sul posto per essere distrutti.  
  
### <a name="remarks"></a>Note  
 Si tratta di un'avanzata sottoponibile a override.  
  
##  <a name="discardundostate"></a>  COleServerDoc::DiscardUndoState  
 Se l'utente esegue un'operazione di modifica che non può essere annullata, chiamare questa funzione per forzare l'applicazione contenitore per eliminare le informazioni relative allo stato di annullamento.  
  
```  
BOOL DiscardUndoState();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero in caso di esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene fornita in modo che i server che supportano l'annullamento possono liberare le risorse che sarebbero altrimenti utilizzabile dalle informazioni sullo stato di annullamento che non possono essere utilizzate.  
  
##  <a name="getclientsite"></a>  COleServerDoc::GetClientSite  
 Recupera un puntatore all'oggetto sottostante `IOleClientSite` interfaccia.  
  
```  
LPOLECLIENTSITE GetClientSite() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Recupera un puntatore all'oggetto sottostante [IOleClientSite](http://msdn.microsoft.com/library/windows/desktop/ms693706) interfaccia.  
  
##  <a name="getdocobjectserver"></a>  COleServerDoc::GetDocObjectServer  
 Eseguire l'override di questa funzione per creare un nuovo `CDocObjectServer` elemento e restituisce un puntatore a esso.  
  
```  
virtual CDocObjectServer* GetDocObjectServer(LPOLEDOCUMENTSITE pDocSite);
```  
  
### <a name="parameters"></a>Parametri  
 *pDocSite*  
 Puntatore al `IOleDocumentSite` interfaccia cui si connetterà questo documento al server.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CDocObjectServer`; **NULL** se l'operazione non riuscita.  
  
### <a name="remarks"></a>Note  
 Quando un server DocObject è attivato, la restituzione di un non - **NULL** puntatore mostra che il client può supportare DocObjects. L'implementazione predefinita restituisce **NULL**.  
  
 Un'implementazione tipica di un documento che supporta DocObjects semplicemente allocherà un nuovo `CDocObjectServer` dell'oggetto e restituire al chiamante. Ad esempio:  
  
 [!code-cpp[NVC_MFCOleServer#3](../../mfc/codesnippet/cpp/coleserverdoc-class_1.cpp)]  
  
##  <a name="getembeddeditem"></a>  COleServerDoc::GetEmbeddedItem  
 Chiamare questa funzione per ottenere un puntatore a un elemento che rappresenta l'intero documento.  
  
```  
COleServerItem* GetEmbeddedItem();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un elemento che rappresenta l'intero documento; **NULL** se l'operazione non riuscita.  
  
### <a name="remarks"></a>Note  
 Viene chiamato [COleServerDoc:: OnGetEmbeddedItem](#ongetembeddeditem), una funzione virtuale con nessuna implementazione predefinita.  
  
##  <a name="getitemcliprect"></a>  COleServerDoc::GetItemClipRect  
 Chiamare il `GetItemClipRect` funzione membro per ottenere le coordinate del rettangolo di ridimensionamento dell'elemento che viene modificato sul posto.  
  
```  
void GetItemClipRect(LPRECT lpClipRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *lpClipRect*  
 Puntatore a un `RECT` struttura o un `CRect` oggetto per recuperare le coordinate del rettangolo di ridimensionamento dell'elemento.  
  
### <a name="remarks"></a>Note  
 Coordinate sono espresse in pixel relativo all'area client della finestra dell'applicazione contenitore.  
  
 Disegno non viene eseguito all'esterno del rettangolo di ritaglio. Disegno in genere, viene automaticamente limitato. Utilizzare questa funzione per determinare se l'utente è stata fatta scorrere all'esterno dell'area visibile del documento. In tal caso, scorre il documento contenitore in base alle necessità mediante una chiamata a [ScrollContainerBy](#scrollcontainerby).  
  
##  <a name="getitemposition"></a>  COleServerDoc::GetItemPosition  
 Chiamare il `GetItemPosition` funzione membro per ottenere le coordinate dell'elemento viene modificata sul posto.  
  
```  
void GetItemPosition(LPRECT lpPosRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *lpPosRect*  
 Puntatore a un `RECT` struttura o un `CRect` oggetto per recuperare le coordinate dell'elemento.  
  
### <a name="remarks"></a>Note  
 Coordinate sono espresse in pixel relativo all'area client della finestra dell'applicazione contenitore.  
  
 La posizione dell'elemento può essere confrontata con il rettangolo di ridimensionamento corrente per determinare l'entità a cui l'elemento è visibile (o meno) nella schermata.  
  
##  <a name="getzoomfactor"></a>  COleServerDoc::GetZoomFactor  
 Il `GetZoomFactor` funzione membro determina il "fattore di zoom" di un elemento che è stato attivato per la modifica sul posto.  
  
```  
BOOL GetZoomFactor(
    LPSIZE lpSizeNum = NULL,  
    LPSIZE lpSizeDenom = NULL,  
    LPCRECT lpPosRect = NULL) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *lpSizeNum*  
 Puntatore a un oggetto della classe `CSize` che conterrà il numeratore del fattore di zoom. Può essere **NULL**.  
  
 *lpSizeDenom*  
 Puntatore a un oggetto della classe `CSize` che conterrà il denominatore del fattore di zoom. Può essere **NULL**.  
  
 *lpPosRect*  
 Puntatore a un oggetto della classe `CRect` che descrive la nuova posizione. Se questo argomento viene **NULL**, la funzione utilizza la posizione dell'elemento corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento è attivato per posto la modifica e il fattore di zoom è è diverso da 100% (1:1); in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il fattore di zoom, in pixel, è la proporzione della dimensione dell'elemento di estensione corrente. Se l'applicazione contenitore non è impostato in misura dell'elemento, estensione naturale (come determinato dalla [COleServerItem::OnGetExtent](../../mfc/reference/coleserveritem-class.md#ongetextent)) viene utilizzato.  
  
 La funzione imposta i primi due argomenti sul numeratore e il denominatore di "fattore di zoom." dell'elemento Se l'elemento non viene modificata sul posto, la funzione imposta questi argomenti su un valore predefinito pari a 100% (o 1:1) e restituisce zero. Per ulteriori informazioni, vedere 40 Nota tecnica [MFC/OLE ridimensionamento sul posto e zoom](../../mfc/tn040-mfc-ole-in-place-resizing-and-zooming.md).  
  
##  <a name="isdocobject"></a>  COleServerDoc::IsDocObject  
 Determina se il documento è DocObject.  
  
```  
BOOL IsDocObject() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se il documento è DocObject; in caso contrario **FALSE**.  
  
##  <a name="isembedded"></a>  COleServerDoc::IsEmbedded  
 Chiamare il `IsEmbedded` funzione membro per determinare se il documento rappresenta un oggetto incorporato in un contenitore.  
  
```  
BOOL IsEmbedded() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la `COleServerDoc` oggetto è un documento che rappresenta un oggetto incorporato in un contenitore; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Un documento caricato da un file non è incorporato anche se possono essere modificati da un'applicazione contenitore come collegamento. Un documento incorporato in un documento contenitore viene considerato da incorporare.  
  
##  <a name="isinplaceactive"></a>  COleServerDoc::IsInPlaceActive  
 Chiamare il `IsInPlaceActive` funzione membro per determinare se l'elemento è attualmente nello stato attivo sul posto.  
  
```  
BOOL IsInPlaceActive() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la `COleServerDoc` oggetto è attivo posto; in caso contrario 0.  
  
##  <a name="notifychanged"></a>  COleServerDoc::NotifyChanged  
 Chiamare questa funzione per notificare a tutti gli elementi collegati connessi al documento che il documento è stato modificato.  
  
```  
void NotifyChanged();
```  
  
### <a name="remarks"></a>Note  
 In genere, chiamare questa funzione dopo che l'utente modifica alcuni attributi globali, ad esempio le dimensioni del documento server. Se un elemento OLE è collegato al documento con un collegamento automatico, l'elemento viene aggiornato per riflettere le modifiche. Nelle applicazioni contenitore scritte con la libreria Microsoft Foundation Class, il [OnChange](../../mfc/reference/coleclientitem-class.md#onchange) funzione membro di `COleClientItem` viene chiamato.  
  
> [!NOTE]
>  Questa funzione è inclusa per compatibilità con OLE 1. Le nuove applicazioni devono utilizzare [UpdateAllItems](#updateallitems).  
  
##  <a name="notifyclosed"></a>  COleServerDoc::NotifyClosed  
 Chiamare questa funzione per notificare il failover dei contenitori che il documento è stato chiuso.  
  
```  
void NotifyClosed();
```  
  
### <a name="remarks"></a>Note  
 Quando l'utente sceglie il comando chiude dal menu File `NotifyClosed` viene chiamato da `COleServerDoc`dell'implementazione del [OnCloseDocument](../../mfc/reference/cdocument-class.md#onclosedocument) funzione membro. Nelle applicazioni contenitore scritte con la libreria Microsoft Foundation Class, il [OnChange](../../mfc/reference/coleclientitem-class.md#onchange) funzione membro di `COleClientItem` viene chiamato.  
  
##  <a name="notifyrename"></a>  COleServerDoc::NotifyRename  
 Chiamare questa funzione dopo che l'utente consente di rinominare il documento server.  
  
```  
void NotifyRename(LPCTSTR lpszNewName);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszNewName*  
 Puntatore a una stringa che specifica il nuovo nome del documento server; si tratta in genere il percorso completo.  
  
### <a name="remarks"></a>Note  
 Quando l'utente sceglie il comando Salva dal menu File `NotifyRename` viene chiamato da `COleServerDoc`dell'implementazione del [OnSaveDocument](../../mfc/reference/cdocument-class.md#onsavedocument) funzione membro. Questa funzione notifica del sistema OL le DLL, che a sua volta notifica i contenitori. Nelle applicazioni contenitore scritte con la libreria Microsoft Foundation Class, il [OnChange](../../mfc/reference/coleclientitem-class.md#onchange) funzione membro di `COleClientItem` viene chiamato.  
  
##  <a name="notifysaved"></a>  COleServerDoc::NotifySaved  
 Chiamare questa funzione dopo che l'utente salva il documento server.  
  
```  
void NotifySaved();
```  
  
### <a name="remarks"></a>Note  
 Quando l'utente sceglie il comando Salva dal menu File `NotifySaved` viene chiamato automaticamente da `COleServerDoc`dell'implementazione di [OnSaveDocument](../../mfc/reference/cdocument-class.md#onsavedocument). Questa funzione notifica del sistema OL le DLL, che a sua volta notifica i contenitori. Nelle applicazioni contenitore scritte con la libreria Microsoft Foundation Class, il [OnChange](../../mfc/reference/coleclientitem-class.md#onchange) funzione membro di `COleClientItem` viene chiamato.  
  
##  <a name="onclose"></a>  COleServerDoc::OnClose  
 Chiamato dal framework quando un contenitore richiede che il documento server essere chiuso.  
  
```  
virtual void OnClose(OLECLOSE dwCloseOption);
```  
  
### <a name="parameters"></a>Parametri  
 *dwCloseOption*  
 Un valore dall'enumerazione `OLECLOSE`. Per il parametro è possibile specificare uno dei valori riportati di seguito:  
  
- `OLECLOSE_SAVEIFDIRTY` Il file viene salvato se è stato modificato.  
  
- `OLECLOSE_NOSAVE` Il file viene chiuso senza essere salvato.  
  
- `OLECLOSE_PROMPTSAVE` Se il file è stato modificato, all'utente viene richiesto sulla averlo salvato.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama `CDocument::OnCloseDocument`.  
  
 Per ulteriori informazioni e valori aggiuntivi, vedere [OLECLOSE](http://msdn.microsoft.com/library/windows/desktop/ms680623) in Windows SDK.  
  
##  <a name="ondeactivate"></a>  COleServerDoc::OnDeactivate  
 Chiamato dal framework quando l'utente disattiva un elemento incorporato o collegato che è attualmente attiva.  
  
```  
virtual void OnDeactivate();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione ripristinato lo stato originale di interfaccia utente dell'applicazione contenitore ed Elimina tutti i menu e altri controlli che sono stati creati per l'attivazione sul posto.  
  
 Le informazioni sullo stato di annullamento in modo non condizionale di rilascio a questo punto.  
  
 Per altre informazioni, vedere l'articolo [attivazione](../../mfc/activation-cpp.md)...  
  
##  <a name="ondeactivateui"></a>  COleServerDoc::OnDeactivateUI  
 Chiamata eseguita quando l'utente disattiva un elemento che è stato attivato sul posto.  
  
```  
virtual void OnDeactivateUI(BOOL bUndoable);
```  
  
### <a name="parameters"></a>Parametri  
 *bUndoable*  
 Specifica se le modifiche possono essere annullate.  
  
### <a name="remarks"></a>Note  
 Interfaccia utente dell'applicazione contenitore ripristinato lo stato originale, nascondere tutti i menu e altri controlli che sono stati creati per l'attivazione sul posto di questa funzione.  
  
 Il framework imposta sempre *bUndoable* alla **FALSE**. Se il server supporta l'annullamento ed è presente un'operazione che può essere annullata, chiamare l'implementazione della classe di base con *bUndoable* impostato su **TRUE**.  
  
##  <a name="ondocwindowactivate"></a>  COleServerDoc::OnDocWindowActivate  
 Il framework chiama questa funzione per attivare o disattivare una finestra del documento per la modifica sul posto.  
  
```  
virtual void OnDocWindowActivate(BOOL bActivate);
```  
  
### <a name="parameters"></a>Parametri  
 *bActivate*  
 Specifica se la finestra del documento deve essere attivata o disattivata.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita rimuove o aggiunge gli elementi dell'interfaccia utente di livello frame come appropriato. Eseguire l'override di questa funzione se si desidera eseguire azioni aggiuntive quando il documento contenente l'elemento è attivato o disattivato.  
  
 Per altre informazioni, vedere l'articolo [attivazione](../../mfc/activation-cpp.md)...  
  
##  <a name="onexecolecmd"></a>  COleServerDoc::OnExecOleCmd  
 Il framework chiama questa funzione per visualizzare la Guida per il comando o eseguire un comando specificato.  
  
```  
virtual HRESULT OnExecOleCmd(
    const GUID* pguidCmdGroup,  
    DWORD nCmdID,  
    DWORD nCmdExecOpt,  
    VARIANTARG* pvarargIn,  
    VARIANTARG* pvarargOut);
```  
  
### <a name="parameters"></a>Parametri  
 *pguidCmdGroup*  
 Un puntatore a un GUID che identifica un set di comandi. Può essere **NULL** per indicare il gruppo di comandi predefinito.  
  
 *nCmdID*  
 Comando da eseguire. È necessario racchiudere il gruppo identificato da *pguidCmdGroup*.  
  
 *nCmdExecOut*  
 Il modo l'oggetto deve eseguire il comando, uno o più dei seguenti valori di **OLECMDEXECOPT** enumerazione:  
  
 **OLECMDEXECOPT_DODEFAULT**  
  
 **OLECMDEXECOPT_PROMPTUSER**  
  
 **OLECMDEXECOPT_DONTPROMPTUSER**  
  
 **OLECMDEXECOPT_SHOWHELP**  
  
 *pvarargIn*  
 Puntatore a un **VARIANTARG** contenente gli argomenti di input per il comando. Può essere **NULL**.  
  
 *pvarargOut*  
 Puntatore a un **VARIANTARG** per ricevere i valori di output restituiti dal comando. Può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` se riesce; in caso contrario, uno dei seguenti codici di errore:  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|**E_UNEXPECTED**|Si è verificato un errore imprevisto|  
|**E_FAIL**|Si è verificato un errore|  
|**E_NOTIMPL**|Indica MFC stesso deve provare a convertire e inviare il comando|  
|**OLECMDERR_E_UNKNOWNGROUP**|*pguidCmdGroup* è non **NULL** ma non specifica un gruppo di comando riconosciuto|  
|**OLECMDERR_E_NOTSUPPORTED**|*nCmdID* non è riconosciuto come un comando valido nel gruppo *pguidCmdGroup*|  
|**OLECMDERR_DISABLED**|Il comando identificato *nCmdID* è disabilitato e non può essere eseguita|  
|**OLECMDERR_NOHELP**|Chiamante richiesto per la Guida sul comando identificato *nCmdID* ma è disponibile alcuna Guida|  
|**OLECMDERR_CANCELED**|L'utente ha annullato l'esecuzione|  
  
### <a name="remarks"></a>Note  
 `COleCmdUI` Consente di abilitare, aggiornare e impostare altre proprietà dei comandi dell'interfaccia utente DocObject. Dopo che i comandi vengono inizializzati, è possibile eseguirli con `OnExecOleCmd`.  
  
 Il framework chiama la funzione prima di tentare di tradurre e inviare un comando di documento OLE. Non è necessario eseguire l'override di questa funzione per gestire i comandi di documenti OLE standard, ma è necessario fornire un override di questa funzione se si desidera gestire comandi personalizzati o gestire i comandi che accettano parametri o restituiranno risultati.  
  
 La maggior parte dei comandi non accettano argomenti o valori restituiti. Per la maggior parte dei comandi il chiamante può passare **NULL**s per *pvarargIn* e *pvarargOut*. Per i comandi che prevede valori di input, il chiamante può dichiarare e inizializzare un **VARIANTARG** variabile e passare un puntatore alla variabile in *pvarargIn*. Per i comandi che richiedono un singolo valore, l'argomento può essere archiviato direttamente nella **VARIANTARG** e passato alla funzione. Più argomenti devono essere impacchettati all'interno di **VARIANTARG** usando uno dei tipi supportati (ad esempio `IDispatch` e **SAFEARRAY** ).  
  
 Analogamente, se un comando restituisce gli argomenti il chiamante deve dichiarare un **VARIANTARG**, inizializzarla su `VT_EMPTY`e passare l'indirizzo in *pvarargOut*. Se un comando restituisce un singolo valore, l'oggetto può archiviare tale valore direttamente nel *pvarargOut*. Più valori di output devono essere impacchettati in qualche modo appropriato per il **VARIANTARG**.  
  
 L'implementazione della classe di base di questa funzione descrive in dettaglio il **OLE_COMMAND_MAP** strutture associate alla destinazione del comando e provare a inviare il comando per un gestore appropriato. L'implementazione della classe di base funziona solo con i comandi che non accettano argomenti o valori restituiti. Se si desidera gestire i comandi che accettano argomenti o valori restituiti, è necessario eseguire l'override di questa funzione e di lavoro con la *pvarargIn* e *pvarargOut* parametri manualmente.  
  
##  <a name="onframewindowactivate"></a>  COleServerDoc::OnFrameWindowActivate  
 Il framework chiama questa funzione quando finestra cornice dell'applicazione contenitore è attivata o disattivata.  
  
```  
virtual void OnFrameWindowActivate(BOOL bActivate);
```  
  
### <a name="parameters"></a>Parametri  
 *bActivate*  
 Specifica se la finestra cornice deve essere attivata o disattivata.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita consente di annullare eventuali modalità della Guida in che finestra cornice potrebbe essere. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale, quando la finestra cornice è attivata o disattivata.  
  
 Per altre informazioni, vedere l'articolo [attivazione](../../mfc/activation-cpp.md)...  
  
##  <a name="ongetembeddeditem"></a>  COleServerDoc:: OnGetEmbeddedItem  
 Chiamato dal framework quando un'applicazione contenitore chiama l'applicazione server per creare o modificare un elemento incorporato.  
  
```  
virtual COleServerItem* OnGetEmbeddedItem() = 0;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un elemento che rappresenta l'intero documento; **NULL** se l'operazione non riuscita.  
  
### <a name="remarks"></a>Note  
 Non vi è nessuna implementazione predefinita. È necessario eseguire l'override di questa funzione per restituire un elemento che rappresenta l'intero documento. Questo valore restituito deve essere un oggetto di un `COleServerItem`-classe derivata.  
  
##  <a name="onreactivateandundo"></a>  COleServerDoc::OnReactivateAndUndo  
 Il framework chiama questa funzione quando l'utente sceglie di annullare le modifiche apportate a un elemento con stato attivato sul posto, modificato e successivamente disattivato.  
  
```  
virtual BOOL OnReactivateAndUndo();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione tranne quella **FALSE** per indicare un errore.  
  
 Eseguire l'override di questa funzione se l'applicazione supporta l'annullamento. In genere è necessario eseguire l'operazione di annullamento, quindi attivare l'elemento chiamando `ActivateInPlace`. Se l'applicazione contenitore viene scritta con la libreria Microsoft Foundation Class, la chiamata `COleClientItem::ReactivateAndUndo` , questa funzione da chiamare.  
  
##  <a name="onresizeborder"></a>  COleServerDoc::OnResizeBorder  
 Il framework chiama questa funzione quando finestre cornice dell'applicazione contenitore modificano dimensioni.  
  
```  
virtual void OnResizeBorder(
    LPCRECT lpRectBorder,  
    LPOLEINPLACEUIWINDOW lpUIWindow,  
    BOOL bFrame);
```  
  
### <a name="parameters"></a>Parametri  
 *lpRectBorder*  
 Puntatore a un `RECT` struttura o un `CRect` oggetto che specifica le coordinate del bordo.  
  
 *lpUIWindow*  
 Puntatore a un oggetto della classe **IOleInPlaceUIWindow** che possiede la sessione di modifica sul posto corrente.  
  
 *bFrame*  
 **TRUE** se *lpUIWindow* punta alla finestra cornice di primo livello dell'applicazione contenitore, o **FALSE** se *lpUIWindow* punta al contenitore finestra cornice a livello di documento dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene ridimensionato e regola le barre degli strumenti e altri elementi dell'interfaccia utente in base alle nuove dimensioni della finestra.  
  
 Per altre informazioni, vedere [IOleInPlaceUIWindow](http://msdn.microsoft.com/library/windows/desktop/ms680716) in Windows SDK.  
  
 Si tratta di un'avanzata sottoponibile a override.  
  
##  <a name="onsethostnames"></a>  COleServerDoc::OnSetHostNames  
 Chiamato dal framework quando il contenitore imposta o modifica i nomi host per questo documento.  
  
```  
virtual void OnSetHostNames(
    LPCTSTR lpszHost,  
    LPCTSTR lpszHostObj);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszHost*  
 Puntatore a una stringa che specifica il nome dell'applicazione contenitore.  
  
 *lpszHostObj*  
 Puntatore a una stringa che specifica il nome del contenitore per il documento.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita viene modificato il titolo del documento per tutte le viste che fanno riferimento a questo documento.  
  
 Eseguire l'override di questa funzione se l'applicazione imposta i titoli attraverso un meccanismo diverso.  
  
##  <a name="onsetitemrects"></a>  COleServerDoc::OnSetItemRects  
 Il framework chiama questa funzione per posizionare la finestra cornice modifica sul posto all'interno di finestra cornice dell'applicazione contenitore.  
  
```  
virtual void OnSetItemRects(
    LPCRECT lpPosRect,  
    LPCRECT lpClipRect);
```  
  
### <a name="parameters"></a>Parametri  
 *lpPosRect*  
 Puntatore a un `RECT` struttura o un `CRect` oggetto che specifica la posizione della finestra cornice sul posto relative rispetto all'area client dell'applicazione contenitore.  
  
 *lpClipRect*  
 Puntatore a un `RECT` struttura o un `CRect` oggetto che specifica il rettangolo di ridimensionamento della finestra cornice sul posto relative rispetto all'area client dell'applicazione contenitore.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per aggiornare il fattore di zoom della vista, se necessario.  
  
 Questa funzione viene chiamata in genere in risposta a un `RequestPositionChange` chiama, anche se può essere chiamato in qualsiasi momento da contenitore per richiedere una modifica alla posizione dell'elemento sul posto.  
  
##  <a name="onshowcontrolbars"></a>  COleServerDoc::OnShowControlBars  
 Il framework chiama questa funzione per visualizzare o nascondere le barre di controllo dell'applicazione server associate alla finestra cornice identificata *pFrameWnd*.  
  
```  
virtual void OnShowControlBars(
    CFrameWnd* pFrameWnd,  
    BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
 *pFrameWnd*  
 Puntatore alla finestra cornice con le barre di controllo devono essere nascoste o visualizzate.  
  
 *bMostra*  
 Determina se le barre di controllo verranno visualizzate o nascoste.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita enumera tutte le barre di controllo appartenenti a tale finestra cornice e consente di nascondere o Mostra loro.  
  
##  <a name="onshowdocument"></a>  COleServerDoc::OnShowDocument  
 Il framework chiama la `OnShowDocument` funziona quando il documento server deve essere nascosto o visualizzato.  
  
```  
virtual void OnShowDocument(BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
 *bMostra*  
 Specifica se l'interfaccia utente per il documento deve essere visualizzato o nascosto.  
  
### <a name="remarks"></a>Note  
 Se *bMostra* viene **TRUE**, l'implementazione predefinita attiva l'applicazione server, se necessario, determinando l'applicazione contenitore di scorrere la finestra in modo che l'elemento è visibile. Se *bMostra* viene **FALSE**, l'implementazione predefinita disattiva l'elemento tramite una chiamata a `OnDeactivate`, Elimina o nasconde tutte le finestre cornice che sono state create per il documento, ad eccezione del primo uno. Se non rimangono documenti visibili, l'implementazione predefinita nasconde l'applicazione server.  
  
##  <a name="onupdatedocument"></a>  COleServerDoc::OnUpdateDocument  
 Chiamato dal framework quando il salvataggio di un documento che è un elemento incorporato in un documento composito.  
  
```  
virtual BOOL OnUpdateDocument();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il documento è stato aggiornato correttamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama la [COleServerDoc::NotifySaved](#notifysaved) e [COleServerDoc::SaveEmbedding](#saveembedding) funzioni membro e quindi contrassegna come di pulizia. Eseguire l'override di questa funzione se si desidera eseguire elaborazione durante l'aggiornamento di un elemento incorporato speciale.  
  
##  <a name="requestpositionchange"></a>  COleServerDoc::RequestPositionChange  
 Chiamare questa funzione membro per impostare l'applicazione contenitore di modificare la posizione dell'elemento.  
  
```  
void RequestPositionChange(LPCRECT lpPosRect);
```  
  
### <a name="parameters"></a>Parametri  
 *lpPosRect*  
 Puntatore a un `RECT` struttura o un `CRect` oggetto che contiene la nuova posizione.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata generalmente (in combinazione con `UpdateAllItems`) quando i dati in un elemento attivo sul posto sono stato modificato. In seguito a questa chiamata, il contenitore potrebbe o la modifica potrebbe non funzionare chiamando `OnSetItemRects`. La posizione risultante potrebbe essere diversa da quello richiesto.  
  
##  <a name="saveembedding"></a>  COleServerDoc::SaveEmbedding  
 Chiamare questa funzione per indicare l'applicazione contenitore per salvare l'oggetto incorporato.  
  
```  
void SaveEmbedding();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata automaticamente da `OnUpdateDocument`. Si noti che questa funzione provoca l'elemento da aggiornare nel disco, pertanto è in genere chiamato solo come risultato di un'azione utente specifico.  
  
##  <a name="scrollcontainerby"></a>  COleServerDoc::ScrollContainerBy  
 Chiamare il `ScrollContainerBy` funzione membro per scorrere il documento contenitore della quantità, in pixel, indicato da `sizeScroll`.  
  
```  
BOOL ScrollContainerBy(CSize sizeScroll);
```  
  
### <a name="parameters"></a>Parametri  
 *sizeScroll*  
 Indica la distanza scorrere il documento contenitore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 I valori positivi indicano lo scorrimento verso il basso e a destra. i valori negativi indicano lo scorrimento verticale e a sinistra.  
  
##  <a name="updateallitems"></a>  COleServerDoc::UpdateAllItems  
 Chiamare questa funzione per notificare a tutti gli elementi collegati connessi al documento che il documento è stato modificato.  
  
```  
void UpdateAllItems(
    COleServerItem* pSender,  
    LPARAM lHint = 0L,  
    CObject* pHint = NULL,  
    DVASPECT nDrawAspect = DVASPECT_CONTENT);
```  
  
### <a name="parameters"></a>Parametri  
 *pSender*  
 Puntatore all'elemento che modifica il documento, o **NULL** se tutti gli elementi devono essere aggiornati.  
  
 *lHint*  
 Contiene informazioni sulla modifica.  
  
 *pHint*  
 Puntatore a un oggetto di archiviazione delle informazioni sulla modifica.  
  
 *nDrawAspect*  
 Determina l'elemento da disegnare. Si tratta di un valore di `DVASPECT` enumerazione. Per il parametro è possibile specificare uno dei valori riportati di seguito:  
  
- `DVASPECT_CONTENT` Elemento è rappresentato in modo tale che può essere visualizzato come oggetto incorporato all'interno del relativo contenitore.  
  
- `DVASPECT_THUMBNAIL` Elemento viene visualizzato in una rappresentazione "anteprima" in modo che possa essere visualizzata in uno strumento di esplorazione.  
  
- `DVASPECT_ICON` Elemento è rappresentato da un'icona.  
  
- `DVASPECT_DOCPRINT` Elemento è rappresentato come se fosse stampato utilizzando il comando Stampa dal menu File.  
  
### <a name="remarks"></a>Note  
 In genere si chiama questa funzione dopo che l'utente modifica il documento server. Se un elemento OLE è collegato al documento con un collegamento automatico, l'elemento viene aggiornato per riflettere le modifiche. Nelle applicazioni contenitore scritte con la libreria Microsoft Foundation Class, il [OnChange](../../mfc/reference/coleclientitem-class.md#onchange) funzione membro di `COleClientItem` viene chiamato.  
  
 Questa funzione chiama la `OnUpdate` funzione membro per ogni elemento del documento, ad eccezione di invio, il passaggio *pHint*, *lHint*, e *nDrawAspect*. Usare questi parametri per passare le informazioni per gli elementi sulle modifiche apportate al documento. È possibile codificare informazioni utilizzando *lHint* oppure è possibile definire un `CObject`-derivata per archiviare informazioni sulle modifiche e passare un oggetto di tale classe usando *pHint*. Eseguire l'override di `OnUpdate` funzione del membro nel `COleServerItem`-derivata per ottimizzare l'aggiornamento di ogni elemento a seconda se è stato modificato relativa presentazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio HIERSVR](../../visual-cpp-samples.md)   
 [Classe COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleDocument (classe)](../../mfc/reference/coledocument-class.md)   
 [Classe COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md)   
 [Classe COleTemplateServer](../../mfc/reference/coletemplateserver-class.md)

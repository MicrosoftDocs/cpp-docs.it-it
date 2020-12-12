---
description: 'Altre informazioni su: classe COleServerDoc'
title: Classe COleServerDoc
ms.date: 11/04/2016
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
ms.openlocfilehash: b96327f2e3e59d4c9941a8e930be70aee3bb58e4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226688"
---
# <a name="coleserverdoc-class"></a>Classe COleServerDoc

Classe di base per i documenti del server OLE.

## <a name="syntax"></a>Sintassi

```
class AFX_NOVTABLE COleServerDoc : public COleLinkingDoc
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COleServerDoc:: COleServerDoc](#coleserverdoc)|Costruisce un oggetto `COleServerDoc`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleServerDoc:: ActivateDocObject](#activatedocobject)|Attiva il documento DocObject associato.|
|[COleServerDoc:: ActivateInPlace](#activateinplace)|Attiva il documento per la modifica sul posto.|
|[COleServerDoc::D eactivateAndUndo](#deactivateandundo)|Disattiva l'interfaccia utente del server.|
|[COleServerDoc::D iscardUndoState](#discardundostate)|Elimina le informazioni sullo stato di annullamento.|
|[COleServerDoc:: GetClientSite](#getclientsite)|Recupera un puntatore all'interfaccia sottostante `IOleClientSite` .|
|[COleServerDoc:: GetEmbeddedItem](#getembeddeditem)|Restituisce un puntatore a un elemento che rappresenta l'intero documento.|
|[COleServerDoc:: GetItemClipRect](#getitemcliprect)|Restituisce il rettangolo di ritaglio corrente per la modifica sul posto.|
|[COleServerDoc:: GetItemPosition](#getitemposition)|Restituisce il rettangolo di posizione corrente, relativo all'area client dell'applicazione contenitore, per la modifica sul posto.|
|[COleServerDoc:: GetZoomFactor](#getzoomfactor)|Restituisce il fattore di zoom in pixel.|
|[COleServerDoc:: IsDocObject](#isdocobject)|Determina se il documento è un DocObject.|
|[COleServerDoc:: inembedded](#isembedded)|Indica se il documento è incorporato in un documento contenitore o se è in esecuzione autonomo.|
|[COleServerDoc:: IsInPlaceActive](#isinplaceactive)|Restituisce TRUE se l'elemento è attualmente attivato sul posto.|
|[COleServerDoc:: NotifyChanged](#notifychanged)|Notifica ai contenitori che l'utente ha modificato il documento.|
|[COleServerDoc:: NotifyClosed](#notifyclosed)|Notifica ai contenitori che l'utente ha chiuso il documento.|
|[COleServerDoc:: NotifyRename](#notifyrename)|Notifica ai contenitori che l'utente ha rinominato il documento.|
|[COleServerDoc:: NotifySaved](#notifysaved)|Notifica ai contenitori che l'utente ha salvato il documento.|
|[COleServerDoc:: OnDeactivate](#ondeactivate)|Chiamata eseguita dal framework quando l'utente disattiva un elemento attivato sul posto.|
|[COleServerDoc:: OnDeactivateUI](#ondeactivateui)|Chiamata eseguita dal Framework per eliminare definitivamente i controlli e altri elementi dell'interfaccia utente creati per l'attivazione sul posto.|
|[COleServerDoc:: OnDocWindowActivate](#ondocwindowactivate)|Chiamata eseguita dal framework quando la finestra cornice del documento del contenitore viene attivata o disattivata.|
|[COleServerDoc:: OnResizeBorder](#onresizeborder)|Chiamata eseguita dal framework quando la finestra cornice o la finestra del documento dell'applicazione contenitore viene ridimensionata.|
|[COleServerDoc:: OnShowControlBars](#onshowcontrolbars)|Chiamato dal Framework per mostrare o nascondere le barre di controllo per la modifica sul posto.|
|[COleServerDoc:: OnUpdateDocument](#onupdatedocument)|Chiamata eseguita dal framework quando viene salvato un documento del server che è un elemento incorporato, aggiornando la copia del contenitore dell'elemento.|
|[COleServerDoc:: RequestPositionChange](#requestpositionchange)|Modifica la posizione del frame di modifica sul posto.|
|[COleServerDoc:: SaveEmbedding](#saveembedding)|Indica all'applicazione contenitore di salvare il documento.|
|[COleServerDoc:: ScrollContainerBy](#scrollcontainerby)|Scorre il documento del contenitore.|
|[COleServerDoc:: UpdateAllItems](#updateallitems)|Notifica ai contenitori che l'utente ha modificato il documento.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[COleServerDoc:: CreateInPlaceFrame](#createinplaceframe)|Chiamata eseguita dal Framework per creare una finestra cornice per la modifica sul posto.|
|[COleServerDoc::D estroyInPlaceFrame](#destroyinplaceframe)|Chiamata eseguita dal Framework per eliminare definitivamente una finestra cornice per la modifica sul posto.|
|[COleServerDoc:: GetDocObjectServer](#getdocobjectserver)|Eseguire l'override di questa funzione per creare un nuovo `CDocObjectServer` oggetto e indicare che questo documento è un contenitore DocObject.|
|[COleServerDoc:: OnClose](#onclose)|Chiamata eseguita dal framework quando un contenitore richiede la chiusura del documento.|
|[COleServerDoc:: OnExecOleCmd](#onexecolecmd)|Esegue un comando specificato o Visualizza la guida per il comando.|
|[COleServerDoc:: OnFrameWindowActivate](#onframewindowactivate)|Chiamata eseguita dal framework quando la finestra cornice del contenitore viene attivata o disattivata.|
|[COleServerDoc:: OnGetEmbeddedItem](#ongetembeddeditem)|Chiamato per ottenere un `COleServerItem` oggetto che rappresenta l'intero documento; usato per ottenere un elemento incorporato. Implementazione richiesta.|
|[COleServerDoc:: OnReactivateAndUndo](#onreactivateandundo)|Chiamato dal Framework per annullare le modifiche apportate durante la modifica sul posto.|
|[COleServerDoc:: OnSetHostNames](#onsethostnames)|Chiamata eseguita dal framework quando un contenitore imposta il titolo della finestra per un oggetto incorporato.|
|[COleServerDoc:: OnSetItemRects](#onsetitemrects)|Chiamato dal Framework per posizionare la finestra cornice per la modifica sul posto all'interno della finestra dell'applicazione contenitore.|
|[COleServerDoc:: OnShowDocument](#onshowdocument)|Chiamata eseguita dal Framework per mostrare o nascondere il documento.|

## <a name="remarks"></a>Commenti

Un documento del server può contenere oggetti [COleServerItem](../../mfc/reference/coleserveritem-class.md) , che rappresentano l'interfaccia server per gli elementi incorporati o collegati. Quando un'applicazione server viene avviata da un contenitore per modificare un elemento incorporato, l'elemento viene caricato come documento server. l' `COleServerDoc` oggetto contiene un solo `COleServerItem` oggetto, costituito dall'intero documento. Quando un'applicazione server viene avviata da un contenitore per modificare un elemento collegato, viene caricato un documento esistente dal disco; viene evidenziata una parte del contenuto del documento per indicare l'elemento collegato.

`COleServerDoc` gli oggetti possono contenere anche elementi della classe [COleClientItem](../../mfc/reference/coleclientitem-class.md) . In questo modo è possibile creare applicazioni server contenitore. Il Framework fornisce funzioni per archiviare correttamente gli `COleClientItem` elementi durante la manutenzione degli `COleServerItem` oggetti.

Se l'applicazione server non supporta i collegamenti, un documento server conterrà sempre un solo elemento server, che rappresenta l'intero oggetto incorporato come documento. Se l'applicazione server supporta i collegamenti, deve creare un elemento del server ogni volta che una selezione viene copiata negli Appunti.

Per usare `COleServerDoc` , derivare una classe da essa e implementare la funzione membro [OnGetEmbeddedItem](#ongetembeddeditem) , che consente al server di supportare gli elementi incorporati. Derivare una classe da `COleServerItem` per implementare gli elementi nei documenti e restituire gli oggetti di tale classe da `OnGetEmbeddedItem` .

Per supportare gli elementi collegati, `COleServerDoc` fornisce la funzione membro [OnGetLinkedItem](../../mfc/reference/colelinkingdoc-class.md#ongetlinkeditem) . È possibile utilizzare l'implementazione predefinita o eseguirne l'override se si dispone di un modo personalizzato per gestire gli elementi del documento.

È necessaria una `COleServerDoc` classe derivata da per ogni tipo di documento server supportato dall'applicazione. Se, ad esempio, l'applicazione server supporta fogli di lavoro e grafici, è necessario disporre di due `COleServerDoc` classi derivate.

Per ulteriori informazioni sui server, vedere l'articolo [Server: implementazione di un server](../../mfc/servers-implementing-a-server.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocument](../../mfc/reference/cdocument-class.md)

[COleDocument](../../mfc/reference/coledocument-class.md)

[COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md)

`COleServerDoc`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

## <a name="coleserverdocactivatedocobject"></a><a name="activatedocobject"></a> COleServerDoc:: ActivateDocObject

Attiva il documento DocObject associato.

```cpp
void ActivateDocObject();
```

### <a name="remarks"></a>Commenti

Per impostazione predefinita, non `COleServerDoc` supporta i documenti attivi (detti anche DocObjects). Per abilitare questo supporto, vedere [GetDocObjectServer](#getdocobjectserver) e Class [CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md).

## <a name="coleserverdocactivateinplace"></a><a name="activateinplace"></a> COleServerDoc:: ActivateInPlace

Attiva l'elemento per la modifica sul posto.

```
BOOL ActivateInPlace();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario, 0, che indica che l'elemento è completamente aperto.

### <a name="remarks"></a>Commenti

Questa funzione esegue tutte le operazioni necessarie per l'attivazione sul posto. Crea una finestra cornice sul posto, la attiva e la ridimensiona nell'elemento, Configura menu condivisi e altri controlli, scorre l'elemento nella visualizzazione e imposta lo stato attivo sulla finestra cornice sul posto.

Questa funzione viene chiamata dall'implementazione predefinita di [COleServerItem:: OnShow](../../mfc/reference/coleserveritem-class.md#onshow). Chiamare questa funzione se l'applicazione supporta un altro verbo per l'attivazione sul posto, ad esempio Play.

## <a name="coleserverdoccoleserverdoc"></a><a name="coleserverdoc"></a> COleServerDoc:: COleServerDoc

Costruisce un `COleServerDoc` oggetto senza connettersi con le DLL di sistema OLE.

```
COleServerDoc();
```

### <a name="remarks"></a>Commenti

Per aprire le comunicazioni con OLE, è necessario chiamare [COleLinkingDoc:: Register](../../mfc/reference/colelinkingdoc-class.md#register) . Se si usa [COleTemplateServer](../../mfc/reference/coletemplateserver-class.md) nell'applicazione, `COleLinkingDoc::Register` viene chiamato dall' `COleLinkingDoc` implementazione di `OnNewDocument` , `OnOpenDocument` e `OnSaveDocument` .

## <a name="coleserverdoccreateinplaceframe"></a><a name="createinplaceframe"></a> COleServerDoc:: CreateInPlaceFrame

Il Framework chiama questa funzione per creare una finestra cornice per la modifica sul posto.

```
virtual COleIPFrameWnd* CreateInPlaceFrame(CWnd* pParentWnd);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Puntatore alla finestra padre dell'applicazione contenitore.

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra cornice sul posto o NULL in caso di esito negativo.

### <a name="remarks"></a>Commenti

Per creare il frame, l'implementazione predefinita usa le informazioni specificate nel modello di documento. La vista utilizzata è la prima vista creata per il documento. Questa visualizzazione viene scollegata temporaneamente dal frame originale e collegata al frame appena creato.

Si tratta di un oggetto avanzato sottoponibile a override.

## <a name="coleserverdocdeactivateandundo"></a><a name="deactivateandundo"></a> COleServerDoc::D eactivateAndUndo

Chiamare questa funzione se l'applicazione supporta l'annullamento e l'utente sceglie Annulla dopo aver attivato un elemento ma prima di modificarlo.

```
BOOL DeactivateAndUndo();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Se l'applicazione contenitore viene scritta usando il libreria Microsoft Foundation Class, la chiamata a questa funzione causa la chiamata a [COleClientItem:: OnDeactivateAndUndo](../../mfc/reference/coleclientitem-class.md#ondeactivateandundo) , che disattiva l'interfaccia utente del server.

## <a name="coleserverdocdestroyinplaceframe"></a><a name="destroyinplaceframe"></a> COleServerDoc::D estroyInPlaceFrame

Il Framework chiama questa funzione per eliminare definitivamente una finestra cornice sul posto e ripristinare lo stato della finestra del documento dell'applicazione server prima dell'attivazione sul posto.

```
virtual void DestroyInPlaceFrame(COleIPFrameWnd* pFrameWnd);
```

### <a name="parameters"></a>Parametri

*pFrameWnd*<br/>
Puntatore alla finestra cornice sul posto da eliminare definitivamente.

### <a name="remarks"></a>Commenti

Si tratta di un oggetto avanzato sottoponibile a override.

## <a name="coleserverdocdiscardundostate"></a><a name="discardundostate"></a> COleServerDoc::D iscardUndoState

Se l'utente esegue un'operazione di modifica che non può essere annullata, chiamare questa funzione per forzare l'applicazione contenitore a rimuovere le informazioni relative allo stato di annullamento.

```
BOOL DiscardUndoState();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questa funzione viene fornita in modo che i server che supportano l'annullamento possano liberare risorse che altrimenti verrebbero utilizzate da informazioni sullo stato di annullamento che non possono essere utilizzate.

## <a name="coleserverdocgetclientsite"></a><a name="getclientsite"></a> COleServerDoc:: GetClientSite

Recupera un puntatore all'interfaccia sottostante `IOleClientSite` .

```
LPOLECLIENTSITE GetClientSite() const;
```

### <a name="return-value"></a>Valore restituito

Recupera un puntatore all'interfaccia [IOleClientSite](/windows/win32/api/oleidl/nn-oleidl-ioleclientsite) sottostante.

## <a name="coleserverdocgetdocobjectserver"></a><a name="getdocobjectserver"></a> COleServerDoc:: GetDocObjectServer

Eseguire l'override di questa funzione per creare un nuovo `CDocObjectServer` elemento e restituirvi un puntatore.

```
virtual CDocObjectServer* GetDocObjectServer(LPOLEDOCUMENTSITE pDocSite);
```

### <a name="parameters"></a>Parametri

*pDocSite*<br/>
Puntatore all' `IOleDocumentSite` interfaccia che collegherà questo documento al server.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CDocObjectServer` ; NULL se l'operazione non è riuscita.

### <a name="remarks"></a>Commenti

Quando viene attivato un server DocObject, la restituzione di un puntatore non NULL indica che il client può supportare DocObjects. L'implementazione predefinita restituisce NULL.

Un'implementazione tipica per un documento che supporta DocObjects alloca semplicemente un nuovo `CDocObjectServer` oggetto e lo restituisce al chiamante. Ad esempio:

[!code-cpp[NVC_MFCOleServer#3](../../mfc/codesnippet/cpp/coleserverdoc-class_1.cpp)]

## <a name="coleserverdocgetembeddeditem"></a><a name="getembeddeditem"></a> COleServerDoc:: GetEmbeddedItem

Chiamare questa funzione per ottenere un puntatore a un elemento che rappresenta l'intero documento.

```
COleServerItem* GetEmbeddedItem();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un elemento che rappresenta l'intero documento; NULL se l'operazione non è riuscita.

### <a name="remarks"></a>Commenti

Chiama [COleServerDoc:: OnGetEmbeddedItem](#ongetembeddeditem), una funzione virtuale senza un'implementazione predefinita.

## <a name="coleserverdocgetitemcliprect"></a><a name="getitemcliprect"></a> COleServerDoc:: GetItemClipRect

Chiamare la `GetItemClipRect` funzione membro per ottenere le coordinate del rettangolo di ritaglio dell'elemento che viene modificato sul posto.

```cpp
void GetItemClipRect(LPRECT lpClipRect) const;
```

### <a name="parameters"></a>Parametri

*lpClipRect*<br/>
Puntatore a una `RECT` struttura o a un `CRect` oggetto per ricevere le coordinate del rettangolo di ridimensionamento dell'elemento.

### <a name="remarks"></a>Commenti

Le coordinate sono espresse in pixel rispetto all'area client della finestra dell'applicazione contenitore.

Il disegno non deve verificarsi all'esterno del rettangolo di ritaglio. In genere, il disegno viene limitato automaticamente. Utilizzare questa funzione per determinare se l'utente ha eseguito lo scorrimento al di fuori della parte visibile del documento; in tal caso, scorrere il documento del contenitore in base alle esigenze mediante una chiamata a [ScrollContainerBy](#scrollcontainerby).

## <a name="coleserverdocgetitemposition"></a><a name="getitemposition"></a> COleServerDoc:: GetItemPosition

Chiamare la `GetItemPosition` funzione membro per ottenere le coordinate dell'elemento da modificare sul posto.

```cpp
void GetItemPosition(LPRECT lpPosRect) const;
```

### <a name="parameters"></a>Parametri

*lpPosRect*<br/>
Puntatore a una `RECT` struttura o a un `CRect` oggetto per ricevere le coordinate dell'elemento.

### <a name="remarks"></a>Commenti

Le coordinate sono espresse in pixel rispetto all'area client della finestra dell'applicazione contenitore.

La posizione dell'elemento può essere confrontata con il rettangolo di ritaglio corrente per determinare l'ambito in cui l'elemento è visibile (o non visibile) sullo schermo.

## <a name="coleserverdocgetzoomfactor"></a><a name="getzoomfactor"></a> COleServerDoc:: GetZoomFactor

La `GetZoomFactor` funzione membro determina il "fattore di zoom" di un elemento attivato per la modifica sul posto.

```
BOOL GetZoomFactor(
    LPSIZE lpSizeNum = NULL,
    LPSIZE lpSizeDenom = NULL,
    LPCRECT lpPosRect = NULL) const;
```

### <a name="parameters"></a>Parametri

*lpSizeNum*<br/>
Puntatore a un oggetto della classe `CSize` che conterrà il numeratore del fattore di zoom. Può essere NULL.

*lpSizeDenom*<br/>
Puntatore a un oggetto della classe `CSize` che conterrà il denominatore del fattore di zoom. Può essere NULL.

*lpPosRect*<br/>
Puntatore a un oggetto della classe `CRect` che descrive la nuova posizione dell'elemento. Se questo argomento è NULL, la funzione utilizza la posizione corrente dell'elemento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento viene attivato per la modifica sul posto e il fattore di zoom è diverso da 100% (1:1); in caso contrario, 0.

### <a name="remarks"></a>Commenti

Il fattore di zoom, in pixel, è la proporzione della dimensione dell'elemento all'extent corrente. Se l'extent dell'elemento non è stato impostato dall'applicazione contenitore, viene utilizzato l'extent naturale (come determinato da [COleServerItem:: OnGetExtent](../../mfc/reference/coleserveritem-class.md#ongetextent)).

La funzione imposta i primi due argomenti sul numeratore e sul denominatore del "fattore di zoom" dell'elemento. Se l'elemento non viene modificato sul posto, la funzione imposta questi argomenti su un valore predefinito pari a 100% (o 1:1) e restituisce zero. Per ulteriori informazioni, vedere la nota tecnica 40, [MFC/OLE In-Place il ridimensionamento e lo zoom](../../mfc/tn040-mfc-ole-in-place-resizing-and-zooming.md).

## <a name="coleserverdocisdocobject"></a><a name="isdocobject"></a> COleServerDoc:: IsDocObject

Determina se il documento è un DocObject.

```
BOOL IsDocObject() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il documento è un DocObject. in caso contrario, FALSE.

## <a name="coleserverdocisembedded"></a><a name="isembedded"></a> COleServerDoc:: inembedded

Chiamare la `IsEmbedded` funzione membro per determinare se il documento rappresenta un oggetto incorporato in un contenitore.

```
BOOL IsEmbedded() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l' `COleServerDoc` oggetto è un documento che rappresenta un oggetto incorporato in un contenitore; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Un documento caricato da un file non è incorporato, sebbene possa essere modificato da un'applicazione contenitore come collegamento. Un documento incorporato in un documento contenitore viene considerato incorporato.

## <a name="coleserverdocisinplaceactive"></a><a name="isinplaceactive"></a> COleServerDoc:: IsInPlaceActive

Chiamare la `IsInPlaceActive` funzione membro per determinare se l'elemento si trova attualmente nello stato attivo sul posto.

```
BOOL IsInPlaceActive() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l' `COleServerDoc` oggetto è attivo sul posto; in caso contrario, 0.

## <a name="coleserverdocnotifychanged"></a><a name="notifychanged"></a> COleServerDoc:: NotifyChanged

Chiamare questa funzione per notificare a tutti gli elementi collegati connessi al documento che il documento è stato modificato.

```cpp
void NotifyChanged();
```

### <a name="remarks"></a>Commenti

In genere, questa funzione viene chiamata dopo che l'utente modifica un attributo globale, ad esempio le dimensioni del documento del server. Se un elemento OLE è collegato al documento con un collegamento automatico, l'elemento viene aggiornato per riflettere le modifiche. Nelle applicazioni contenitore scritte con la libreria Microsoft Foundation Class viene chiamata la funzione membro [OnChange](../../mfc/reference/coleclientitem-class.md#onchange) di `COleClientItem` .

> [!NOTE]
> Questa funzione è inclusa per la compatibilità con OLE 1. Le nuove applicazioni devono usare [UpdateAllItems](#updateallitems).

## <a name="coleserverdocnotifyclosed"></a><a name="notifyclosed"></a> COleServerDoc:: NotifyClosed

Chiamare questa funzione per notificare al contenitore che il documento è stato chiuso.

```cpp
void NotifyClosed();
```

### <a name="remarks"></a>Commenti

Quando l'utente sceglie il comando Chiudi dal menu file, `NotifyClosed` viene chiamato dall' `COleServerDoc` implementazione della funzione membro [OnCloseDocument](../../mfc/reference/cdocument-class.md#onclosedocument) . Nelle applicazioni contenitore scritte con la libreria Microsoft Foundation Class viene chiamata la funzione membro [OnChange](../../mfc/reference/coleclientitem-class.md#onchange) di `COleClientItem` .

## <a name="coleserverdocnotifyrename"></a><a name="notifyrename"></a> COleServerDoc:: NotifyRename

Chiamare questa funzione dopo che l'utente rinomina il documento del server.

```cpp
void NotifyRename(LPCTSTR lpszNewName);
```

### <a name="parameters"></a>Parametri

*lpszNewName*<br/>
Puntatore a una stringa che specifica il nuovo nome del documento del server. si tratta in genere di un percorso completo.

### <a name="remarks"></a>Commenti

Quando l'utente sceglie il comando Salva con nome dal menu file, `NotifyRename` viene chiamato dall' `COleServerDoc` implementazione della funzione membro [OnSaveDocument](../../mfc/reference/cdocument-class.md#onsavedocument) . Questa funzione notifica le DLL di sistema OLE, che a loro volta inviano notifiche ai contenitori. Nelle applicazioni contenitore scritte con la libreria Microsoft Foundation Class viene chiamata la funzione membro [OnChange](../../mfc/reference/coleclientitem-class.md#onchange) di `COleClientItem` .

## <a name="coleserverdocnotifysaved"></a><a name="notifysaved"></a> COleServerDoc:: NotifySaved

Chiamare questa funzione dopo che l'utente ha salvato il documento del server.

```cpp
void NotifySaved();
```

### <a name="remarks"></a>Commenti

Quando l'utente sceglie il comando Salva dal menu file, `NotifySaved` viene chiamato dall' `COleServerDoc` implementazione di [OnSaveDocument](../../mfc/reference/cdocument-class.md#onsavedocument). Questa funzione notifica le DLL di sistema OLE, che a loro volta inviano notifiche ai contenitori. Nelle applicazioni contenitore scritte con la libreria Microsoft Foundation Class viene chiamata la funzione membro [OnChange](../../mfc/reference/coleclientitem-class.md#onchange) di `COleClientItem` .

## <a name="coleserverdoconclose"></a><a name="onclose"></a> COleServerDoc:: OnClose

Chiamata eseguita dal framework quando un contenitore richiede la chiusura del documento del server.

```
virtual void OnClose(OLECLOSE dwCloseOption);
```

### <a name="parameters"></a>Parametri

*dwCloseOption*<br/>
Valore dell'enumerazione OLECLOSE. Per il parametro è possibile specificare uno dei valori riportati di seguito:

- OLECLOSE_SAVEIFDIRTY il file viene salvato se è stato modificato.

- OLECLOSE_NOSAVE il file viene chiuso senza essere salvato.

- OLECLOSE_PROMPTSAVE se il file è stato modificato, all'utente viene richiesto di salvarlo.

### <a name="remarks"></a>Commenti

L'implementazione predefinita chiama `CDocument::OnCloseDocument` .

Per ulteriori informazioni e valori aggiuntivi, vedere [OLECLOSE](/windows/win32/api/oleidl/ne-oleidl-oleclose) nel Windows SDK.

## <a name="coleserverdocondeactivate"></a><a name="ondeactivate"></a> COleServerDoc:: OnDeactivate

Chiamata eseguita dal framework quando l'utente disattiva un elemento incorporato o collegato attualmente attivo sul posto.

```
virtual void OnDeactivate();
```

### <a name="remarks"></a>Commenti

Questa funzione Ripristina lo stato originale dell'interfaccia utente dell'applicazione contenitore ed Elimina tutti i menu e altri controlli creati per l'attivazione sul posto.

A questo punto, le informazioni sullo stato di annullamento dovrebbero essere rilasciate in modo incondizionato.

Per ulteriori informazioni, vedere l'articolo [attivazione](../../mfc/activation-cpp.md).

## <a name="coleserverdocondeactivateui"></a><a name="ondeactivateui"></a> COleServerDoc:: OnDeactivateUI

Chiamato quando l'utente disattiva un elemento attivato sul posto.

```
virtual void OnDeactivateUI(BOOL bUndoable);
```

### <a name="parameters"></a>Parametri

*bUndoable*<br/>
Specifica se le modifiche di modifica possono essere annullate.

### <a name="remarks"></a>Commenti

Questa funzione Ripristina lo stato originale dell'interfaccia utente dell'applicazione contenitore, nascondendo tutti i menu e altri controlli creati per l'attivazione sul posto.

Il Framework imposta sempre *bUndoable* su false. Se il server supporta l'annullamento ed è presente un'operazione che può essere annullata, chiamare l'implementazione della classe di base con *bUndoable* impostato su true.

## <a name="coleserverdocondocwindowactivate"></a><a name="ondocwindowactivate"></a> COleServerDoc:: OnDocWindowActivate

Il Framework chiama questa funzione per attivare o disattivare una finestra del documento per la modifica sul posto.

```
virtual void OnDocWindowActivate(BOOL bActivate);
```

### <a name="parameters"></a>Parametri

*bActivate*<br/>
Specifica se la finestra del documento deve essere attivata o disattivata.

### <a name="remarks"></a>Commenti

L'implementazione predefinita rimuove o aggiunge gli elementi dell'interfaccia utente a livello di frame nel modo appropriato. Eseguire l'override di questa funzione se si desidera eseguire azioni aggiuntive quando il documento contenente l'elemento viene attivato o disattivato.

Per ulteriori informazioni, vedere l'articolo [attivazione](../../mfc/activation-cpp.md).

## <a name="coleserverdoconexecolecmd"></a><a name="onexecolecmd"></a> COleServerDoc:: OnExecOleCmd

Il Framework chiama questa funzione per eseguire un comando specificato o visualizzare la guida per il comando.

```
virtual HRESULT OnExecOleCmd(
    const GUID* pguidCmdGroup,
    DWORD nCmdID,
    DWORD nCmdExecOpt,
    VARIANTARG* pvarargIn,
    VARIANTARG* pvarargOut);
```

### <a name="parameters"></a>Parametri

*pguidCmdGroup*<br/>
Puntatore a un GUID che identifica un set di comandi. Può essere NULL per indicare il gruppo di comandi predefinito.

*nCmdID*<br/>
Comando da eseguire. Deve trovarsi nel gruppo identificato da *pguidCmdGroup*.

*nCmdExecOut*<br/>
Il modo in cui l'oggetto deve eseguire il comando, uno o più dei valori seguenti dall'enumerazione OLECMDEXECOPT:

OLECMDEXECOPT_DODEFAULT

OLECMDEXECOPT_PROMPTUSER

OLECMDEXECOPT_DONTPROMPTUSER

OLECMDEXECOPT_SHOWHELP

*pvarargIn*<br/>
Puntatore a un VARIANTARG contenente gli argomenti di input per il comando. Può essere NULL.

*pvarargOut*<br/>
Puntatore a un VARIANTARG per ricevere i valori restituiti dall'output dal comando. Può essere NULL.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se ha esito positivo; in caso contrario, uno dei codici di errore seguenti:

|Valore|Description|
|-----------|-----------------|
|E_UNEXPECTED|Si è verificato un errore imprevisto|
|E_FAIL|Si è verificato un errore|
|E_NOTIMPL|Indica che MFC deve tentare di tradurre e inviare il comando|
|OLECMDERR_E_UNKNOWNGROUP|*pguidCmdGroup* è diverso da null, ma non specifica un gruppo di comandi riconosciuto|
|OLECMDERR_E_NOTSUPPORTED|*nCmdID* non è riconosciuto come comando valido nel gruppo *pguidCmdGroup*|
|OLECMDERR_DISABLED|Il comando identificato da *nCmdID* è disabilitato e non può essere eseguito|
|OLECMDERR_NOHELP|Il chiamante ha richiesto assistenza sul comando identificato da *nCmdID* , ma non è disponibile alcuna guida|
|OLECMDERR_CANCELED|L'utente ha annullato l'esecuzione|

### <a name="remarks"></a>Commenti

`COleCmdUI` può essere usato per abilitare, aggiornare e impostare altre proprietà dei comandi dell'interfaccia utente di DocObject. Dopo l'inizializzazione dei comandi, è possibile eseguirli con `OnExecOleCmd` .

Il Framework chiama la funzione prima di provare a tradurre e inviare un comando di documento OLE. Non è necessario eseguire l'override di questa funzione per gestire i comandi standard del documento OLE, ma è necessario fornire una sostituzione a questa funzione se si vuole gestire i comandi personalizzati o gestire i comandi che accettano parametri o restituiscono risultati.

La maggior parte dei comandi non accetta argomenti o valori restituiti. Per la maggior parte dei comandi il chiamante può passare i valori NULL per *pvarargIn* e *pvarargOut*. Per i comandi che prevedono valori di input, il chiamante può dichiarare e inizializzare una variabile VARIANTARG e passare un puntatore alla variabile in *pvarargIn*. Per i comandi che richiedono un singolo valore, l'argomento può essere archiviato direttamente in VARIANTARG e passato alla funzione. È necessario creare un pacchetto di più argomenti all'interno di VARIANTARG utilizzando uno dei tipi supportati (ad esempio `IDispatch` e SAFEARRAY).

Analogamente, se un comando restituisce argomenti, il chiamante deve dichiarare un VARIANTARG, inizializzarlo per VT_EMPTY e passare il relativo indirizzo in *pvarargOut*. Se un comando restituisce un singolo valore, l'oggetto può archiviare tale valore direttamente in *pvarargOut*. È necessario creare un pacchetto di più valori di output in un modo appropriato per VARIANTARG.

L'implementazione della classe di base di questa funzione guiderà le strutture OLE_COMMAND_MAP associate alla destinazione del comando e tenterà di inviare il comando a un gestore appropriato. L'implementazione della classe di base funziona solo con i comandi che non accettano argomenti o valori restituiti. Se è necessario gestire i comandi che accettano argomenti o valori restituiti, è necessario eseguire l'override di questa funzione e usare manualmente i parametri *pvarargIn* e *pvarargOut* .

## <a name="coleserverdoconframewindowactivate"></a><a name="onframewindowactivate"></a> COleServerDoc:: OnFrameWindowActivate

Il Framework chiama questa funzione quando la finestra cornice dell'applicazione contenitore viene attivata o disattivata.

```
virtual void OnFrameWindowActivate(BOOL bActivate);
```

### <a name="parameters"></a>Parametri

*bActivate*<br/>
Specifica se la finestra cornice deve essere attivata o disattivata.

### <a name="remarks"></a>Commenti

L'implementazione predefinita Annulla tutte le modalità della guida che possono trovarsi nella finestra cornice. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando la finestra cornice viene attivata o disattivata.

Per ulteriori informazioni, vedere l'articolo [attivazione](../../mfc/activation-cpp.md).

## <a name="coleserverdocongetembeddeditem"></a><a name="ongetembeddeditem"></a> COleServerDoc:: OnGetEmbeddedItem

Chiamata eseguita dal framework quando un'applicazione contenitore chiama l'applicazione server per creare o modificare un elemento incorporato.

```
virtual COleServerItem* OnGetEmbeddedItem() = 0;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un elemento che rappresenta l'intero documento; NULL se l'operazione non è riuscita.

### <a name="remarks"></a>Commenti

Non vi è nessuna implementazione predefinita. È necessario eseguire l'override di questa funzione per restituire un elemento che rappresenta l'intero documento. Questo valore restituito deve essere un oggetto di una `COleServerItem` classe derivata da.

## <a name="coleserverdoconreactivateandundo"></a><a name="onreactivateandundo"></a> COleServerDoc:: OnReactivateAndUndo

Il Framework chiama questa funzione quando l'utente sceglie di annullare le modifiche apportate a un elemento attivato sul posto, modificato e successivamente disattivato.

```
virtual BOOL OnReactivateAndUndo();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

L'implementazione predefinita non esegue alcuna operazione, ad eccezione di return FALSE per indicare un errore.

Eseguire l'override di questa funzione se l'applicazione supporta l'annullamento. In genere si esegue l'operazione di annullamento, quindi si attiva l'elemento chiamando `ActivateInPlace` . Se l'applicazione contenitore viene scritta con il libreria Microsoft Foundation Class, la chiamata `COleClientItem::ReactivateAndUndo` a causa la chiamata della funzione.

## <a name="coleserverdoconresizeborder"></a><a name="onresizeborder"></a> COleServerDoc:: OnResizeBorder

Il Framework chiama questa funzione quando cambiano le dimensioni delle finestre cornice dell'applicazione contenitore.

```
virtual void OnResizeBorder(
    LPCRECT lpRectBorder,
    LPOLEINPLACEUIWINDOW lpUIWindow,
    BOOL bFrame);
```

### <a name="parameters"></a>Parametri

*lpRectBorder*<br/>
Puntatore a una `RECT` struttura o a un `CRect` oggetto che specifica le coordinate del bordo.

*lpUIWindow*<br/>
Puntatore a un oggetto della classe `IOleInPlaceUIWindow` che possiede la sessione di modifica sul posto corrente.

*bFrame*<br/>
TRUE se *lpUIWindow* punta alla finestra cornice di primo livello dell'applicazione contenitore oppure false se *lpUIWindow* punta alla finestra cornice a livello di documento dell'applicazione contenitore.

### <a name="remarks"></a>Commenti

Questa funzione ridimensiona e regola le barre degli strumenti e altri elementi dell'interfaccia utente in base alle nuove dimensioni della finestra.

Per ulteriori informazioni, vedere [oleinplaceuiwindow](/windows/win32/api/oleidl/nn-oleidl-ioleinplaceuiwindow) nel Windows SDK.

Si tratta di un oggetto avanzato sottoponibile a override.

## <a name="coleserverdoconsethostnames"></a><a name="onsethostnames"></a> COleServerDoc:: OnSetHostNames

Chiamata eseguita dal framework quando il contenitore imposta o modifica i nomi host per questo documento.

```
virtual void OnSetHostNames(
    LPCTSTR lpszHost,
    LPCTSTR lpszHostObj);
```

### <a name="parameters"></a>Parametri

*lpszHost*<br/>
Puntatore a una stringa che specifica il nome dell'applicazione contenitore.

*lpszHostObj*<br/>
Puntatore a una stringa che specifica il nome del contenitore per il documento.

### <a name="remarks"></a>Commenti

L'implementazione predefinita modifica il titolo del documento per tutte le visualizzazioni che fanno riferimento a questo documento.

Eseguire l'override di questa funzione se l'applicazione imposta i titoli tramite un meccanismo diverso.

## <a name="coleserverdoconsetitemrects"></a><a name="onsetitemrects"></a> COleServerDoc:: OnSetItemRects

Il Framework chiama questa funzione per posizionare la finestra cornice per la modifica sul posto all'interno della finestra cornice dell'applicazione contenitore.

```
virtual void OnSetItemRects(
    LPCRECT lpPosRect,
    LPCRECT lpClipRect);
```

### <a name="parameters"></a>Parametri

*lpPosRect*<br/>
Puntatore a una `RECT` struttura o a un `CRect` oggetto che specifica la posizione della finestra cornice sul posto relativa all'area client dell'applicazione contenitore.

*lpClipRect*<br/>
Puntatore a una `RECT` struttura o a un `CRect` oggetto che specifica il rettangolo di ridimensionamento della finestra cornice sul posto rispetto all'area client dell'applicazione contenitore.

### <a name="remarks"></a>Commenti

Eseguire l'override di questa funzione per aggiornare il fattore di zoom della visualizzazione, se necessario.

Questa funzione viene in genere chiamata in risposta a una `RequestPositionChange` chiamata, anche se può essere chiamata in qualsiasi momento dal contenitore per richiedere una modifica della posizione per l'elemento sul posto.

## <a name="coleserverdoconshowcontrolbars"></a><a name="onshowcontrolbars"></a> COleServerDoc:: OnShowControlBars

Il Framework chiama questa funzione per mostrare o nascondere le barre di controllo dell'applicazione server associata alla finestra cornice identificata da *pFrameWnd*.

```
virtual void OnShowControlBars(
    CFrameWnd* pFrameWnd,
    BOOL bShow);
```

### <a name="parameters"></a>Parametri

*pFrameWnd*<br/>
Puntatore alla finestra cornice le cui barre di controllo devono essere nascoste o visualizzate.

*bShow*<br/>
Determina se le barre di controllo sono visualizzate o nascoste.

### <a name="remarks"></a>Commenti

L'implementazione predefinita enumera tutte le barre di controllo di proprietà della finestra cornice e le nasconde o le Visualizza.

## <a name="coleserverdoconshowdocument"></a><a name="onshowdocument"></a> COleServerDoc:: OnShowDocument

Il Framework chiama la `OnShowDocument` funzione quando il documento server deve essere nascosto o visualizzato.

```
virtual void OnShowDocument(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
Specifica se l'interfaccia utente per il documento deve essere mostrata o nascosta.

### <a name="remarks"></a>Commenti

Se *bShow* è true, l'implementazione predefinita attiva l'applicazione server, se necessario, e fa sì che l'applicazione contenitore scorra la finestra in modo che l'elemento sia visibile. Se *bShow* è false, l'implementazione predefinita disattiva l'elemento tramite una chiamata a `OnDeactivate` , quindi Elimina o nasconde tutte le finestre cornice create per il documento, eccetto la prima. Se non viene mantenuto alcun documento visibile, l'implementazione predefinita nasconde l'applicazione server.

## <a name="coleserverdoconupdatedocument"></a><a name="onupdatedocument"></a> COleServerDoc:: OnUpdateDocument

Chiamata eseguita dal framework quando si salva un documento che è un elemento incorporato in un documento composto.

```
virtual BOOL OnUpdateDocument();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il documento è stato aggiornato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

L'implementazione predefinita chiama le funzioni membro [COleServerDoc:: NotifySaved](#notifysaved) e [COleServerDoc:: SaveEmbedding](#saveembedding) e quindi contrassegna il documento come pulito. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando si aggiorna un elemento incorporato.

## <a name="coleserverdocrequestpositionchange"></a><a name="requestpositionchange"></a> COleServerDoc:: RequestPositionChange

Chiamare questa funzione membro per fare in modo che l'applicazione contenitore modifichi la posizione dell'elemento.

```cpp
void RequestPositionChange(LPCRECT lpPosRect);
```

### <a name="parameters"></a>Parametri

*lpPosRect*<br/>
Puntatore a una `RECT` struttura o a un `CRect` oggetto contenente la nuova posizione dell'elemento.

### <a name="remarks"></a>Commenti

Questa funzione viene in genere chiamata (insieme a `UpdateAllItems` ) quando i dati in un elemento attivo sul posto sono stati modificati. Dopo questa chiamata, il contenitore potrebbe o meno eseguire la modifica chiamando `OnSetItemRects` . La posizione risultante potrebbe essere diversa da quella richiesta.

## <a name="coleserverdocsaveembedding"></a><a name="saveembedding"></a> COleServerDoc:: SaveEmbedding

Chiamare questa funzione per indicare all'applicazione contenitore di salvare l'oggetto incorporato.

```cpp
void SaveEmbedding();
```

### <a name="remarks"></a>Commenti

Questa funzione viene chiamata automaticamente da `OnUpdateDocument` . Si noti che questa funzione causa l'aggiornamento dell'elemento sul disco, pertanto viene in genere chiamato solo come risultato di un'azione utente specifica.

## <a name="coleserverdocscrollcontainerby"></a><a name="scrollcontainerby"></a> COleServerDoc:: ScrollContainerBy

Chiamare la `ScrollContainerBy` funzione membro per scorrere il documento del contenitore in base alla quantità, espressa in pixel, indicata da `sizeScroll` .

```
BOOL ScrollContainerBy(CSize sizeScroll);
```

### <a name="parameters"></a>Parametri

*sizeScroll*<br/>
Indica la distanza di scorrimento del documento contenitore.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

I valori positivi indicano lo scorrimento verso il basso e verso destra; i valori negativi indicano lo scorrimento verso l'alto e verso sinistra.

## <a name="coleserverdocupdateallitems"></a><a name="updateallitems"></a> COleServerDoc:: UpdateAllItems

Chiamare questa funzione per notificare a tutti gli elementi collegati connessi al documento che il documento è stato modificato.

```cpp
void UpdateAllItems(
    COleServerItem* pSender,
    LPARAM lHint = 0L,
    CObject* pHint = NULL,
    DVASPECT nDrawAspect = DVASPECT_CONTENT);
```

### <a name="parameters"></a>Parametri

*pSender*<br/>
Puntatore all'elemento che ha modificato il documento oppure NULL se tutti gli elementi devono essere aggiornati.

*lHint*<br/>
Contiene informazioni sulla modifica.

*pHint*<br/>
Puntatore a un oggetto che archivia informazioni sulla modifica.

*nDrawAspect*<br/>
Determina la modalità di disegno dell'elemento. Si tratta di un valore dell'enumerazione DVASPECT. Per il parametro è possibile specificare uno dei valori riportati di seguito:

- DVASPECT_CONTENT elemento viene rappresentato in modo tale che possa essere visualizzato come oggetto incorporato all'interno del relativo contenitore.

- Viene eseguito il rendering di DVASPECT_THUMBNAIL elemento in una rappresentazione "thumbnail" in modo che possa essere visualizzato in uno strumento di esplorazione.

- DVASPECT_ICON elemento è rappresentato da un'icona.

- DVASPECT_DOCPRINT elemento viene rappresentato come se fosse stampato usando il comando stampa del menu file.

### <a name="remarks"></a>Commenti

Questa funzione viene in genere chiamata dopo che l'utente ha modificato il documento del server. Se un elemento OLE è collegato al documento con un collegamento automatico, l'elemento viene aggiornato per riflettere le modifiche. Nelle applicazioni contenitore scritte con la libreria Microsoft Foundation Class viene chiamata la funzione membro [OnChange](../../mfc/reference/coleclientitem-class.md#onchange) di `COleClientItem` .

Questa funzione chiama la `OnUpdate` funzione membro per ogni elemento del documento, ad eccezione dell'elemento mittente, passando *pHint*, *lHint* e *nDrawAspect*. Utilizzare questi parametri per passare informazioni agli elementi relativi alle modifiche apportate al documento. È possibile codificare le informazioni usando *lHint* oppure è possibile definire una `CObject` classe derivata da per archiviare le informazioni sulle modifiche e passare un oggetto di tale classe usando *pHint*. Eseguire l'override della `OnUpdate` funzione membro nella `COleServerItem` classe derivata da per ottimizzare l'aggiornamento di ogni elemento a seconda che la presentazione sia stata modificata.

## <a name="see-also"></a>Vedi anche

[HIERSVR di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDocument](../../mfc/reference/coledocument-class.md)<br/>
[Classe COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md)<br/>
[Classe COleTemplateServer](../../mfc/reference/coletemplateserver-class.md)

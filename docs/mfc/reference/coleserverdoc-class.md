---
title: Classe COleServerDoc | Microsoft Docs
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
ms.openlocfilehash: 350ad7f66054f2df2d1cc7bb21fefed0b71616e2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46377500"
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
|[COleServerDoc::GetClientSite](#getclientsite)|Recupera un puntatore sottostante `IOleClientSite` interfaccia.|
|[COleServerDoc::GetEmbeddedItem](#getembeddeditem)|Restituisce un puntatore a un elemento che rappresenta l'intero documento.|
|[COleServerDoc::GetItemClipRect](#getitemcliprect)|Restituisce il rettangolo di ritaglio corrente per la modifica sul posto.|
|[COleServerDoc::GetItemPosition](#getitemposition)|Restituisce il rettangolo di posizione corrente, rispetto all'area client dell'applicazione contenitore per la modifica sul posto.|
|[COleServerDoc::GetZoomFactor](#getzoomfactor)|Restituisce il fattore di zoom espressa in pixel.|
|[COleServerDoc::IsDocObject](#isdocobject)|Determina se il documento è DocObject.|
|[COleServerDoc::IsEmbedded](#isembedded)|Indica se il documento è autonomo in esecuzione o incorporato in un documento contenitore.|
|[COleServerDoc::IsInPlaceActive](#isinplaceactive)|Restituisce TRUE se l'elemento è attualmente attivato sul posto.|
|[COleServerDoc::NotifyChanged](#notifychanged)|Notifica i contenitori che l'utente ha modificato il documento.|
|[COleServerDoc::NotifyClosed](#notifyclosed)|Notifica i contenitori che l'utente ha chiuso il documento.|
|[COleServerDoc::NotifyRename](#notifyrename)|Notifica i contenitori che l'utente ha rinominato il documento.|
|[COleServerDoc::NotifySaved](#notifysaved)|Notifica i contenitori che l'utente ha salvato il documento.|
|[COleServerDoc::OnDeactivate](#ondeactivate)|Chiamato dal framework quando l'utente disattiva un elemento che è stato attivato sul posto.|
|[COleServerDoc::OnDeactivateUI](#ondeactivateui)|Chiamato dal framework per eliminare definitivamente i controlli e altri elementi dell'interfaccia utente creati per l'attivazione sul posto.|
|[COleServerDoc::OnDocWindowActivate](#ondocwindowactivate)|Chiamato dal framework quando finestra cornice di documento del contenitore è attivata o disattivata.|
|[COleServerDoc::OnResizeBorder](#onresizeborder)|Chiamato dal framework quando è ridimensionato finestra cornice o finestra del documento dell'applicazione contenitore.|
|[COleServerDoc::OnShowControlBars](#onshowcontrolbars)|Chiamato dal framework per mostrare o nascondere le barre di controllo per la modifica sul posto.|
|[COleServerDoc::OnUpdateDocument](#onupdatedocument)|Chiamato dal framework quando viene salvato un documento nel server è un elemento incorporato, l'aggiornamento di copia del contenitore dell'elemento.|
|[COleServerDoc::RequestPositionChange](#requestpositionchange)|Modifica la posizione della cornice per la modifica sul posto.|
|[COleServerDoc::SaveEmbedding](#saveembedding)|Indica all'applicazione contenitore per salvare il documento.|
|[COleServerDoc::ScrollContainerBy](#scrollcontainerby)|Scorre il documento contenitore.|
|[COleServerDoc::UpdateAllItems](#updateallitems)|Notifica i contenitori che l'utente ha modificato il documento.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[COleServerDoc::CreateInPlaceFrame](#createinplaceframe)|Chiamata eseguita dal framework per creare una finestra cornice per la modifica sul posto.|
|[COleServerDoc::DestroyInPlaceFrame](#destroyinplaceframe)|Chiamato dal framework per eliminare definitivamente una finestra cornice per la modifica sul posto.|
|[COleServerDoc::GetDocObjectServer](#getdocobjectserver)|Eseguire l'override di questa funzione per creare un nuovo `CDocObjectServer` dell'oggetto e indica che questo documento è un contenitore DocObject.|
|[COleServerDoc::OnClose](#onclose)|Chiamato dal framework quando un contenitore richiede la chiusura del documento.|
|[COleServerDoc::OnExecOleCmd](#onexecolecmd)|Esegue un comando specificato o Visualizza la Guida per il comando.|
|[COleServerDoc::OnFrameWindowActivate](#onframewindowactivate)|Chiamato dal framework quando finestra cornice del contenitore è attivata o disattivata.|
|[COleServerDoc:: OnGetEmbeddedItem](#ongetembeddeditem)|Chiamata eseguita per ottenere un `COleServerItem` che rappresenta l'intero documento, usata per ottenere un elemento incorporato. Implementazione necessaria.|
|[COleServerDoc::OnReactivateAndUndo](#onreactivateandundo)|Chiamato dal framework per annullare le modifiche apportate durante la modifica sul posto.|
|[COleServerDoc::OnSetHostNames](#onsethostnames)|Chiamato dal framework quando un contenitore imposta il titolo della finestra per un oggetto incorporato.|
|[COleServerDoc::OnSetItemRects](#onsetitemrects)|Chiamato dal framework per posizionare la finestra cornice di modifica sul posto all'interno di finestra dell'applicazione contenitore.|
|[COleServerDoc::OnShowDocument](#onshowdocument)|Chiamato dal framework per mostrare o nascondere il documento.|

## <a name="remarks"></a>Note

Un documento del server può contenere [COleServerItem](../../mfc/reference/coleserveritem-class.md) oggetti che rappresentano l'interfaccia server agli elementi incorporati o collegati. Quando un'applicazione server viene avviata da un contenitore per modificare un elemento incorporato, l'elemento viene caricato come il proprio documento server. il `COleServerDoc` oggetto contiene uno solo `COleServerItem` oggetto, costituito l'intero documento. Quando un'applicazione server viene avviata da un contenitore per modificare un elemento collegato, un documento esistente viene caricato dal disco. una parte del contenuto del documento è evidenziata per indicare che l'elemento collegato.

`COleServerDoc` gli oggetti possono inoltre contenere elementi del [COleClientItem](../../mfc/reference/coleclientitem-class.md) classe. Ciò consente di creare applicazioni contenitore / server. Il framework fornisce funzioni per archiviare in modo corretto il `COleClientItem` elementi durante la gestione di `COleServerItem` oggetti.

Se l'applicazione server non supporta i collegamenti, documento server contiene sempre un solo elemento del server, che rappresenta l'intero oggetto incorporato come un documento. Se l'applicazione server supporta i collegamenti, è necessario creare un elemento del server ogni volta che una selezione viene copiata negli Appunti.

Per utilizzare `COleServerDoc`, una classe derivata da esso e implementare le [OnGetEmbeddedItem](#ongetembeddeditem) funzione membro, che consente al server supportare gli elementi incorporati. Derivare una classe dalla classe `COleServerItem` per implementare gli elementi nei documenti e restituire gli oggetti di tale classe dal `OnGetEmbeddedItem`.

Per supportare gli elementi collegati, `COleServerDoc` fornisce il [OnGetLinkedItem](../../mfc/reference/colelinkingdoc-class.md#ongetlinkeditem) funzione membro. È possibile usare l'implementazione predefinita o ignorarlo se è possibile personalizzare le modalità di gestione degli elementi del documento.

È necessaria una `COleServerDoc`-classe derivata per ogni tipo di server di documenti supportate dall'applicazione. Ad esempio, se l'applicazione server supporta i grafici e fogli di lavoro, è necessario due `COleServerDoc`-le classi derivate.

Per altre informazioni sui server, vedere l'articolo [server: implementazione di un Server](../../mfc/servers-implementing-a-server.md).

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

Questa funzione esegue tutte le operazioni necessarie per l'attivazione sul posto. Crea una finestra cornice sul posto, viene attivato e viene ridimensionata all'elemento, Configura menu condivisi e altri controlli, scorre l'elemento all'interno della visualizzazione e imposta lo stato attivo alla finestra cornice sul posto.

Questa funzione viene chiamata dall'implementazione predefinita del [COleServerItem::OnShow](../../mfc/reference/coleserveritem-class.md#onshow). Chiamare questa funzione se l'applicazione supporta il verbo di un altro per l'attivazione sul posto (ad esempio riproduzione).

##  <a name="coleserverdoc"></a>  COleServerDoc::COleServerDoc

Costruisce un `COleServerDoc` oggetto senza eseguire la connessione con le DLL di sistema OLE.

```
COleServerDoc();
```

### <a name="remarks"></a>Note

È necessario chiamare [COleLinkingDoc::Register](../../mfc/reference/colelinkingdoc-class.md#register) per aprire le comunicazioni con OLE. Se si usa [COleTemplateServer](../../mfc/reference/coletemplateserver-class.md) nell'applicazione in uso `COleLinkingDoc::Register` viene chiamato automaticamente dal `COleLinkingDoc`dell'implementazione di `OnNewDocument`, `OnOpenDocument`, e `OnSaveDocument`.

##  <a name="createinplaceframe"></a>  COleServerDoc::CreateInPlaceFrame

Il framework chiama questa funzione per creare una finestra cornice per la modifica sul posto.

```
virtual COleIPFrameWnd* CreateInPlaceFrame(CWnd* pParentWnd);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Puntatore alla finestra padre dell'applicazione contenitore.

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra cornice sul posto, oppure NULL se ha esito negativo.

### <a name="remarks"></a>Note

L'implementazione predefinita Usa le informazioni specificate nel modello di documento per creare il frame. La vista utilizzata è la prima visualizzazione creata per il documento. In questa vista è temporaneamente disconnesso dal frame originale e associata al frame appena creato.

Si tratta di un'avanzata sottoponibile a override.

##  <a name="deactivateandundo"></a>  COleServerDoc::DeactivateAndUndo

Chiamare questa funzione se annullare supportate dall'applicazione e l'utente sceglie di annullamento dopo l'attivazione di un elemento ma prima di modificarlo.

```
BOOL DeactivateAndUndo();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Se l'applicazione contenitore viene scritta usando la libreria Microsoft Foundation Class, chiamare questa funzione provoca [COleClientItem::OnDeactivateAndUndo](../../mfc/reference/coleclientitem-class.md#ondeactivateandundo) per essere chiamato, che disattiva interfaccia utente del server.

##  <a name="destroyinplaceframe"></a>  COleServerDoc::DestroyInPlaceFrame

Il framework chiama questa funzione per eliminare definitivamente una finestra cornice sul posto e riportare il server finestra del documento dell'applicazione allo stato antecedente attivazione sul posto.

```
virtual void DestroyInPlaceFrame(COleIPFrameWnd* pFrameWnd);
```

### <a name="parameters"></a>Parametri

*pFrameWnd*<br/>
Puntatore alla finestra cornice sul posto da distruggere.

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

Questa funzione viene fornita in modo che i server che supportano l'annullamento possono liberare le risorse che in caso contrario, potrebbero essere utilizzate dalle informazioni sullo stato di annullamento non possono essere usati.

##  <a name="getclientsite"></a>  COleServerDoc::GetClientSite

Recupera un puntatore sottostante `IOleClientSite` interfaccia.

```
LPOLECLIENTSITE GetClientSite() const;
```

### <a name="return-value"></a>Valore restituito

Recupera un puntatore sottostante [IOleClientSite](/windows/desktop/api/oleidl/nn-oleidl-ioleclientsite) interfaccia.

##  <a name="getdocobjectserver"></a>  COleServerDoc::GetDocObjectServer

Eseguire l'override di questa funzione per creare un nuovo `CDocObjectServer` di elemento e restituire un puntatore a esso.

```
virtual CDocObjectServer* GetDocObjectServer(LPOLEDOCUMENTSITE pDocSite);
```

### <a name="parameters"></a>Parametri

*pDocSite*<br/>
Puntatore al `IOleDocumentSite` interfaccia che si connetterà questo documento al server.

### <a name="return-value"></a>Valore restituito

Un puntatore a un `CDocObjectServer`; NULL se l'operazione non riuscita.

### <a name="remarks"></a>Note

Quando un server DocObject è attivato, viene illustrata la restituzione di un puntatore non NULL che il client può supportare DocObjects. L'implementazione predefinita restituisce NULL.

Un'implementazione tipica di un documento che supporta DocObjects semplicemente dovrà allocare un nuovo `CDocObjectServer` dell'oggetto e restituirlo al chiamante. Ad esempio:

[!code-cpp[NVC_MFCOleServer#3](../../mfc/codesnippet/cpp/coleserverdoc-class_1.cpp)]

##  <a name="getembeddeditem"></a>  COleServerDoc::GetEmbeddedItem

Chiamare questa funzione per ottenere un puntatore a un elemento che rappresenta l'intero documento.

```
COleServerItem* GetEmbeddedItem();
```

### <a name="return-value"></a>Valore restituito

Un puntatore a un elemento che rappresenta il documento. NULL se l'operazione non riuscita.

### <a name="remarks"></a>Note

Viene chiamato [COleServerDoc:: OnGetEmbeddedItem](#ongetembeddeditem), una funzione virtuale senza l'implementazione predefinita.

##  <a name="getitemcliprect"></a>  COleServerDoc::GetItemClipRect

Chiamare il `GetItemClipRect` funzione membro per ottenere le coordinate del rettangolo di ridimensionamento dell'elemento che viene modificato sul posto.

```
void GetItemClipRect(LPRECT lpClipRect) const;
```

### <a name="parameters"></a>Parametri

*lpClipRect*<br/>
Puntatore a un `RECT` struttura o un `CRect` oggetto che riceverà le coordinate del rettangolo di ridimensionamento dell'elemento.

### <a name="remarks"></a>Note

Le coordinate sono espresse in pixel rispetto all'area client della finestra dell'applicazione contenitore.

Disegno non deve essere eseguita all'esterno del rettangolo di ritaglio. In genere, i disegni sono automaticamente limitati. Utilizzare questa funzione per determinare se l'utente ha fatto scorrere all'esterno dell'area visibile del documento. In questo caso, scorre il documento contenitore in base alle esigenze mediante una chiamata a [ScrollContainerBy](#scrollcontainerby).

##  <a name="getitemposition"></a>  COleServerDoc::GetItemPosition

Chiamare il `GetItemPosition` funzione membro per ottenere le coordinate dell'elemento modificato sul posto.

```
void GetItemPosition(LPRECT lpPosRect) const;
```

### <a name="parameters"></a>Parametri

*lpPosRect*<br/>
Puntatore a un `RECT` struttura o un `CRect` oggetto che riceverà le coordinate dell'elemento.

### <a name="remarks"></a>Note

Le coordinate sono espresse in pixel rispetto all'area client della finestra dell'applicazione contenitore.

La posizione dell'elemento può essere confrontata con il rettangolo di ritaglio corrente per determinare l'entità a cui l'elemento è visibile (o meno) nella schermata.

##  <a name="getzoomfactor"></a>  COleServerDoc::GetZoomFactor

Il `GetZoomFactor` funzione membro determina che il "fattore di zoom" di un elemento che è stato attivato per la modifica sul posto.

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
Puntatore a un oggetto della classe `CRect` che descrive la nuova posizione. Se questo argomento è NULL, la funzione Usa la posizione dell'elemento corrente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è attivato per sul posto di modifica e il fattore di zoom è è diverso da 100% (1:1); in caso contrario 0.

### <a name="remarks"></a>Note

Il fattore di zoom, in pixel, è la percentuale delle dimensioni dell'elemento di estensione corrente. Se l'applicazione contenitore non è impostata nella misura dell'elemento, estensione naturale (come determinato dalla [COleServerItem::OnGetExtent](../../mfc/reference/coleserveritem-class.md#ongetextent)) viene usato.

La funzione imposta i primi due argomenti per il numeratore e del denominatore del "fattore di zoom." dell'elemento Se non viene modificato l'elemento posto, la funzione imposta questi argomenti su un valore predefinito di 100% (o 1:1) e restituisce zero. Per altre informazioni, vedere 40 Nota tecnica, [MFC/OLE ridimensionamento sul posto e zoom](../../mfc/tn040-mfc-ole-in-place-resizing-and-zooming.md).

##  <a name="isdocobject"></a>  COleServerDoc::IsDocObject

Determina se il documento è DocObject.

```
BOOL IsDocObject() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il documento è DocObject; in caso contrario, FALSE.

##  <a name="isembedded"></a>  COleServerDoc::IsEmbedded

Chiamare il `IsEmbedded` funzione membro per determinare se il documento rappresenta un oggetto incorporato in un contenitore.

```
BOOL IsEmbedded() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il `COleServerDoc` oggetto è un documento che rappresenta un oggetto incorporato in un contenitore; in caso contrario, 0.

### <a name="remarks"></a>Note

Un documento caricato da un file non è incorporato anche se possono essere modificati da un'applicazione contenitore come collegamento. Un documento incorporato in un documento del contenitore viene considerato da incorporare.

##  <a name="isinplaceactive"></a>  COleServerDoc::IsInPlaceActive

Chiamare il `IsInPlaceActive` funzione membro per determinare se l'elemento è attualmente nello stato attivo sul posto.

```
BOOL IsInPlaceActive() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il `COleServerDoc` oggetti sono attiva in posizione; in caso contrario 0.

##  <a name="notifychanged"></a>  COleServerDoc::NotifyChanged

Chiamare questa funzione per notificare a tutti gli elementi collegati collegati al documento che il documento è stato modificato.

```
void NotifyChanged();
```

### <a name="remarks"></a>Note

In genere, si chiama questa funzione dopo che l'utente modifica alcuni attributi globali, ad esempio le dimensioni del documento server. Se un elemento OLE è collegato al documento con un collegamento automatico, l'elemento viene aggiornato per riflettere le modifiche. Nelle applicazioni contenitore scritte con la libreria Microsoft Foundation Class, il [OnChange](../../mfc/reference/coleclientitem-class.md#onchange) funzione di membro di `COleClientItem` viene chiamato.

> [!NOTE]
>  Questa funzione è inclusa per compatibilità con OLE 1. Le nuove applicazioni devono usare [UpdateAllItems](#updateallitems).

##  <a name="notifyclosed"></a>  COleServerDoc::NotifyClosed

Chiamare questa funzione per ricevere una notifica di uno o più contenitori che il documento è stato chiuso.

```
void NotifyClosed();
```

### <a name="remarks"></a>Note

Quando l'utente sceglie il comando chiude da menu File `NotifyClosed` viene chiamato dal `COleServerDoc`dell'implementazione delle [OnCloseDocument](../../mfc/reference/cdocument-class.md#onclosedocument) funzione membro. Nelle applicazioni contenitore scritte con la libreria Microsoft Foundation Class, il [OnChange](../../mfc/reference/coleclientitem-class.md#onchange) funzione di membro di `COleClientItem` viene chiamato.

##  <a name="notifyrename"></a>  COleServerDoc::NotifyRename

Chiamare questa funzione dopo che l'utente rinomina il documento server.

```
void NotifyRename(LPCTSTR lpszNewName);
```

### <a name="parameters"></a>Parametri

*lpszNewName*<br/>
Puntatore a una stringa che specifica il nuovo nome del documento server; si tratta in genere il percorso completo.

### <a name="remarks"></a>Note

Quando l'utente sceglie il comando Salva dal menu File `NotifyRename` viene chiamato dal `COleServerDoc`dell'implementazione delle [OnSaveDocument](../../mfc/reference/cdocument-class.md#onsavedocument) funzione membro. Questa funzione notifica il sistema OLE le DLL, che a sua volta notifica i contenitori. Nelle applicazioni contenitore scritte con la libreria Microsoft Foundation Class, il [OnChange](../../mfc/reference/coleclientitem-class.md#onchange) funzione di membro di `COleClientItem` viene chiamato.

##  <a name="notifysaved"></a>  COleServerDoc::NotifySaved

Chiamare questa funzione dopo che l'utente salva il documento server.

```
void NotifySaved();
```

### <a name="remarks"></a>Note

Quando l'utente sceglie il comando Salva dal menu File `NotifySaved` viene chiamato automaticamente dal `COleServerDoc`dell'implementazione di [OnSaveDocument](../../mfc/reference/cdocument-class.md#onsavedocument). Questa funzione notifica il sistema OLE le DLL, che a sua volta notifica i contenitori. Nelle applicazioni contenitore scritte con la libreria Microsoft Foundation Class, il [OnChange](../../mfc/reference/coleclientitem-class.md#onchange) funzione di membro di `COleClientItem` viene chiamato.

##  <a name="onclose"></a>  COleServerDoc::OnClose

Chiamato dal framework quando un contenitore richiede che il documento server chiuso.

```
virtual void OnClose(OLECLOSE dwCloseOption);
```

### <a name="parameters"></a>Parametri

*dwCloseOption*<br/>
Valore ricavato dall'enumerazione OLECLOSE. Per il parametro è possibile specificare uno dei valori riportati di seguito:

- OLECLOSE_SAVEIFDIRTY il file viene salvato se è stato modificato.

- OLECLOSE_NOSAVE il file viene chiuso senza essere salvato.

- OLECLOSE_PROMPTSAVE se il file è stato modificato, l'utente viene richiesto sulla salvarla.

### <a name="remarks"></a>Note

L'implementazione predefinita chiama `CDocument::OnCloseDocument`.

Per altre informazioni e valori aggiuntivi, vedere [OLECLOSE](/windows/desktop/api/oleidl/ne-oleidl-tagoleclose) nel SDK di Windows.

##  <a name="ondeactivate"></a>  COleServerDoc::OnDeactivate

Chiamato dal framework quando l'utente disattiva un elemento incorporato o collegato che è attualmente attiva.

```
virtual void OnDeactivate();
```

### <a name="remarks"></a>Note

Questa funzione consente di ripristinare lo stato originale dell'interfaccia utente dell'applicazione contenitore ed Elimina tutti i menu e altri controlli che sono stati creati per l'attivazione sul posto.

Le informazioni sullo stato di annullamento devono essere rilasciate una in modo incondizionato a questo punto.

Per altre informazioni, vedere l'articolo [attivazione](../../mfc/activation-cpp.md)...

##  <a name="ondeactivateui"></a>  COleServerDoc::OnDeactivateUI

Chiamato quando l'utente disattiva un elemento che è stato attivato sul posto.

```
virtual void OnDeactivateUI(BOOL bUndoable);
```

### <a name="parameters"></a>Parametri

*bUndoable*<br/>
Specifica se le modifiche possono essere annullate.

### <a name="remarks"></a>Note

Questa funzione consente di ripristinare lo stato originale, se si nasconde tutti i menu e altri controlli che sono stati creati per l'attivazione sul posto dell'interfaccia utente dell'applicazione contenitore.

Il framework imposta sempre *bUndoable* su FALSE. Se il server supporta l'annullamento e viene eseguita un'operazione che può essere annullata, chiamare l'implementazione della classe di base con *bUndoable* impostata su TRUE.

##  <a name="ondocwindowactivate"></a>  COleServerDoc::OnDocWindowActivate

Il framework chiama questa funzione per attivare o disattivare una finestra del documento per la modifica sul posto.

```
virtual void OnDocWindowActivate(BOOL bActivate);
```

### <a name="parameters"></a>Parametri

*bActivate*<br/>
Specifica se la finestra del documento deve essere attivata o disattivata.

### <a name="remarks"></a>Note

L'implementazione predefinita consente di rimuovere o aggiunge gli elementi dell'interfaccia utente a livello di frame come appropriato. Eseguire l'override di questa funzione se si desidera eseguire azioni aggiuntive quando il documento contenente l'elemento è attivato o disattivato.

Per altre informazioni, vedere l'articolo [attivazione](../../mfc/activation-cpp.md)...

##  <a name="onexecolecmd"></a>  COleServerDoc::OnExecOleCmd

Il framework chiama questa funzione per eseguire un comando specificato o visualizzare la Guida per il comando.

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
Comando da eseguire. Deve appartenere al gruppo identificato da *pguidCmdGroup*.

*nCmdExecOut*<br/>
Il modo l'oggetto deve eseguire il comando, uno o più dei seguenti valori dall'enumerazione OLECMDEXECOPT:

OLECMDEXECOPT_DODEFAULT

OLECMDEXECOPT_PROMPTUSER

OLECMDEXECOPT_DONTPROMPTUSER

OLECMDEXECOPT_SHOWHELP

*pvarargIn*<br/>
Puntatore a un VARIANTARG contenente gli argomenti di input per il comando. Può essere NULL.

*pvarargOut*<br/>
Puntatore a un VARIANTARG per ricevere l'output, i valori restituiti dal comando. Può essere NULL.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'esito positivo. in caso contrario, uno dei codici di errore seguente:

|Valore|Descrizione|
|-----------|-----------------|
|E_UNEXPECTED|Si è verificato un errore imprevisto|
|E_FAIL|Si è verificato un errore|
|E_NOTIMPL|Indica MFC stessa deve tentare di convertire e inviare il comando|
|OLECMDERR_E_UNKNOWNGROUP|*pguidCmdGroup* è diverso da NULL, ma non specifica un gruppo di controlli riconosciuto|
|OLECMDERR_E_NOTSUPPORTED|*nCmdID* non è riconosciuto come un comando valido nel gruppo *pguidCmdGroup*|
|OLECMDERR_DISABLED|Il comando identificato da *nCmdID* è disabilitato e non può essere eseguita|
|OLECMDERR_NOHELP|Chiamante richiesto per la Guida sul comando identificato da *nCmdID* ma nessuna guida è disponibile|
|OLECMDERR_CANCELED|L'utente ha annullato l'esecuzione|

### <a name="remarks"></a>Note

`COleCmdUI` Consente di abilitare, aggiornare e impostare altre proprietà dei comandi dell'interfaccia utente DocObject. Dopo che i comandi vengono inizializzati, è possibile eseguirle con `OnExecOleCmd`.

Il framework chiama la funzione prima di provare a convertire e inviare un comando di documento OLE. Non è necessario eseguire l'override di questa funzione per gestire i comandi di documenti OLE standard, ma è necessario specificare una sostituzione per questa funzione se si desidera gestire i propri comandi personalizzati o per gestire i comandi che accettano parametri o restituiranno risultati.

La maggior parte dei comandi non accettano argomenti o valori restituiti. Per la maggior parte dei comandi il chiamante può passare i valori null *pvarargIn* e *pvarargOut*. Per i comandi che prevede valori di input, il chiamante può dichiarare e inizializzare una variabile VARIANTARG e passare un puntatore alla variabile in *pvarargIn*. Per i comandi che richiedono un singolo valore, l'argomento può essere archiviato direttamente nel VARIANTARG e passato alla funzione. Più argomenti devono essere compresso all'interno di VARIANTARG usando uno dei tipi supportati (ad esempio `IDispatch` e SAFEARRAY).

Analogamente, se un comando restituisce gli argomenti il chiamante deve dichiarare un VARIANTARG, inizializzarla su VT_EMPTY e passare l'indirizzo nel *pvarargOut*. Se un comando restituisce un singolo valore, l'oggetto può archiviare tale valore direttamente nella *pvarargOut*. Più valori di output devono essere compresso in modo appropriato per il VARIANTARG.

L'implementazione della classe di base di questa funzione verrà illustrato le strutture OLE_COMMAND_MAP associate con la destinazione del comando e provare a inviare il comando per un gestore appropriato. L'implementazione della classe di base funziona solo con i comandi che non accettano argomenti o valori restituiti. Se è necessario gestire i comandi che accettano argomenti o valori restituiti, è necessario eseguire l'override di questa funzione e lavorare con i *pvarargIn* e *pvarargOut* parametri manualmente.

##  <a name="onframewindowactivate"></a>  COleServerDoc::OnFrameWindowActivate

Il framework chiama questa funzione quando la finestra cornice dell'applicazione contenitore è attivata o disattivata.

```
virtual void OnFrameWindowActivate(BOOL bActivate);
```

### <a name="parameters"></a>Parametri

*bActivate*<br/>
Specifica se la finestra cornice deve essere attivata o disattivata.

### <a name="remarks"></a>Note

L'implementazione predefinita consente di annullare eventuali modalità della Guida in che della finestra cornice potrebbe essere. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando la finestra cornice è attivata o disattivata.

Per altre informazioni, vedere l'articolo [attivazione](../../mfc/activation-cpp.md)...

##  <a name="ongetembeddeditem"></a>  COleServerDoc:: OnGetEmbeddedItem

Chiamato dal framework quando un'applicazione contenitore chiama l'applicazione server per creare o modificare un elemento incorporato.

```
virtual COleServerItem* OnGetEmbeddedItem() = 0;
```

### <a name="return-value"></a>Valore restituito

Un puntatore a un elemento che rappresenta il documento. NULL se l'operazione non riuscita.

### <a name="remarks"></a>Note

Non vi è nessuna implementazione predefinita. È necessario eseguire l'override di questa funzione per restituire un elemento che rappresenta l'intero documento. Questo valore restituito deve essere un oggetto di un `COleServerItem`-classe derivata.

##  <a name="onreactivateandundo"></a>  COleServerDoc::OnReactivateAndUndo

Il framework chiama questa funzione quando l'utente sceglie di annullare le modifiche apportate a un elemento che è stato attivato sul posto, modificato e successivamente disattivato.

```
virtual BOOL OnReactivateAndUndo();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

L'implementazione predefinita non esegue alcuna operazione tranne restituisce FALSE per indicare un errore.

Eseguire l'override di questa funzione se l'applicazione supporta l'annullamento. In genere si potrebbe eseguire l'operazione di annullamento, quindi attivare l'elemento chiamando `ActivateInPlace`. Se l'applicazione contenitore viene scritta con la libreria Microsoft Foundation Class, la chiamata `COleClientItem::ReactivateAndUndo` fa sì che questa funzione da chiamare.

##  <a name="onresizeborder"></a>  COleServerDoc::OnResizeBorder

Il framework chiama questa funzione quando finestre cornice dell'applicazione contenitore di modifica delle dimensioni.

```
virtual void OnResizeBorder(
    LPCRECT lpRectBorder,
    LPOLEINPLACEUIWINDOW lpUIWindow,
    BOOL bFrame);
```

### <a name="parameters"></a>Parametri

*lpRectBorder*<br/>
Puntatore a un `RECT` struttura o un `CRect` oggetto che specifica le coordinate del bordo.

*lpUIWindow*<br/>
Puntatore a un oggetto della classe `IOleInPlaceUIWindow` che possiede la sessione di modifica sul posto corrente.

*bFrame*<br/>
TRUE se *lpUIWindow* punta alla finestra cornice di primo livello dell'applicazione contenitore oppure FALSE in caso *lpUIWindow* fa riferimento alla finestra cornice a livello di documento dell'applicazione contenitore.

### <a name="remarks"></a>Note

Questa funzione viene ridimensionata e regola le barre degli strumenti e altri elementi dell'interfaccia utente in base alle nuove dimensioni della finestra.

Per altre informazioni, vedere [Oleinplaceuiwindow](/windows/desktop/api/oleidl/nn-oleidl-ioleinplaceuiwindow) nel SDK di Windows.

Si tratta di un'avanzata sottoponibile a override.

##  <a name="onsethostnames"></a>  COleServerDoc::OnSetHostNames

Chiamato dal framework quando il contenitore imposta o modifica i nomi host per questo documento.

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

### <a name="remarks"></a>Note

L'implementazione predefinita viene modificato il titolo del documento per tutte le viste che fanno riferimento a questo documento.

Eseguire l'override di questa funzione se l'applicazione imposta i titoli attraverso un meccanismo diverso.

##  <a name="onsetitemrects"></a>  COleServerDoc::OnSetItemRects

Il framework chiama questa funzione per posizionare la finestra cornice di modifica sul posto all'interno di finestra cornice dell'applicazione contenitore.

```
virtual void OnSetItemRects(
    LPCRECT lpPosRect,
    LPCRECT lpClipRect);
```

### <a name="parameters"></a>Parametri

*lpPosRect*<br/>
Puntatore a un `RECT` struttura o un `CRect` oggetto che specifica la posizione della finestra cornice sul posto rispetto all'area client dell'applicazione contenitore.

*lpClipRect*<br/>
Puntatore a un `RECT` struttura o un `CRect` oggetto che specifica il rettangolo di ridimensionamento della finestra cornice sul posto rispetto all'area client dell'applicazione contenitore.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione per aggiornare il fattore di zoom della vista, se necessario.

Questa funzione viene in genere chiamata in risposta a un `RequestPositionChange` chiamare, anche se può essere chiamato in qualsiasi momento dal contenitore per richiedere una modifica della posizione per l'elemento sul posto.

##  <a name="onshowcontrolbars"></a>  COleServerDoc::OnShowControlBars

Il framework chiama questa funzione per visualizzare o nascondere le barre di controllo dell'applicazione server associate alla finestra cornice identificata da *pFrameWnd*.

```
virtual void OnShowControlBars(
    CFrameWnd* pFrameWnd,
    BOOL bShow);
```

### <a name="parameters"></a>Parametri

*pFrameWnd*<br/>
Puntatore alla finestra cornice con le barre di controllo devono essere nascoste o visualizzate.

*bMostra*<br/>
Determina se le barre di controllo visualizzate o nascoste.

### <a name="remarks"></a>Note

L'implementazione predefinita enumera tutte le barre di controllo appartenenti a tale finestra cornice e nasconde o Mostra le.

##  <a name="onshowdocument"></a>  COleServerDoc::OnShowDocument

Il framework chiama il `OnShowDocument` corretto quando il documento server deve essere nascosto o visualizzato.

```
virtual void OnShowDocument(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bMostra*<br/>
Specifica se l'interfaccia utente per il documento deve essere visualizzato o nascosto.

### <a name="remarks"></a>Note

Se *bMostra* è TRUE, l'implementazione predefinita attiva l'applicazione server, se necessario e fa sì che l'applicazione contenitore scorrere la finestra in modo che l'elemento è visibile. Se *bMostra* è FALSE, l'implementazione predefinita consente di disattivare l'elemento tramite una chiamata a `OnDeactivate`, quindi distrugge o nasconde tutte le finestre cornice che sono state create per il documento, ad eccezione del primo. Se non rimangono documenti visibili, l'implementazione predefinita consente di nascondere l'applicazione server.

##  <a name="onupdatedocument"></a>  COleServerDoc::OnUpdateDocument

Chiamato dal framework durante il salvataggio di un documento che è un elemento incorporato in un documento composito.

```
virtual BOOL OnUpdateDocument();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il documento è stato aggiornato correttamente; in caso contrario 0.

### <a name="remarks"></a>Note

L'implementazione predefinita chiama il [COleServerDoc::NotifySaved](#notifysaved) e [COleServerDoc::SaveEmbedding](#saveembedding) membro le funzioni e quindi contrassegna come di pulizia. Eseguire l'override di questa funzione se si desidera eseguire speciale di elaborazione quando si aggiorna un elemento incorporato.

##  <a name="requestpositionchange"></a>  COleServerDoc::RequestPositionChange

Chiamare questa funzione membro per impostare l'applicazione contenitore di modificare la posizione dell'elemento.

```
void RequestPositionChange(LPCRECT lpPosRect);
```

### <a name="parameters"></a>Parametri

*lpPosRect*<br/>
Puntatore a un `RECT` struttura o un `CRect` oggetto contenente la nuova posizione.

### <a name="remarks"></a>Note

Questa funzione viene in genere chiamata (in combinazione con `UpdateAllItems`) quando vengono modificati i dati in un elemento attivo sul posto. In seguito a questa chiamata, il contenitore potrebbe o non può eseguire la modifica chiamando `OnSetItemRects`. La posizione risultante potrebbe essere diversa da quello richiesto.

##  <a name="saveembedding"></a>  COleServerDoc::SaveEmbedding

Chiamare questa funzione per indicare all'applicazione contenitore per salvare l'oggetto incorporato.

```
void SaveEmbedding();
```

### <a name="remarks"></a>Note

Questa funzione viene chiamata automaticamente da `OnUpdateDocument`. Si noti che questa funzione provoca l'elemento da aggiornare nel disco, in modo che in genere viene chiamato solo in seguito a un'azione dell'utente specifico.

##  <a name="scrollcontainerby"></a>  COleServerDoc::ScrollContainerBy

Chiamare il `ScrollContainerBy` funzione membro; scorre il documento contenitore della quantità, in pixel, indicato da `sizeScroll`.

```
BOOL ScrollContainerBy(CSize sizeScroll);
```

### <a name="parameters"></a>Parametri

*sizeScroll*<br/>
Indica la distanza del documento contenitore deve scorrere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

I valori positivi indicano lo scorrimento verso il basso e a destra. i valori negativi indicano lo scorrimento verticale e a sinistra.

##  <a name="updateallitems"></a>  COleServerDoc::UpdateAllItems

Chiamare questa funzione per notificare a tutti gli elementi collegati collegati al documento che il documento è stato modificato.

```
void UpdateAllItems(
    COleServerItem* pSender,
    LPARAM lHint = 0L,
    CObject* pHint = NULL,
    DVASPECT nDrawAspect = DVASPECT_CONTENT);
```

### <a name="parameters"></a>Parametri

*pSender*<br/>
Puntatore all'elemento di modifica del documento, oppure NULL se tutti gli elementi devono essere aggiornati.

*lHint*<br/>
Contiene informazioni sulla modifica.

*pHint*<br/>
Puntatore a un oggetto di archiviazione delle informazioni sulla modifica.

*nDrawAspect*<br/>
Determina come deve essere disegnato l'elemento. Questo è un valore dall'enumerazione DVASPECT. Per il parametro è possibile specificare uno dei valori riportati di seguito:

- Elemento DVASPECT_CONTENT è rappresentato in modo tale che possono essere visualizzato come un oggetto incorporato all'interno del relativo contenitore.

- DVASPECT_THUMBNAIL rendering viene eseguito in una rappresentazione di "anteprima" in modo che possa essere visualizzata in uno strumento di esplorazione.

- Elemento DVASPECT_ICON è rappresentato da un'icona.

- Elemento DVASPECT_DOCPRINT viene rappresentata come se fosse stampato utilizzando il comando Stampa dal menu File.

### <a name="remarks"></a>Note

In genere si chiama questa funzione dopo che l'utente modifica il documento server. Se un elemento OLE è collegato al documento con un collegamento automatico, l'elemento viene aggiornato per riflettere le modifiche. Nelle applicazioni contenitore scritte con la libreria Microsoft Foundation Class, il [OnChange](../../mfc/reference/coleclientitem-class.md#onchange) funzione di membro di `COleClientItem` viene chiamato.

Questa funzione chiama il `OnUpdate` funzione di membro per ogni elemento del documento, ad eccezione dell'invio, passando *pHint*, *lHint*, e *nDrawAspect*. Usare questi parametri per passare le informazioni per gli elementi sulle modifiche apportate al documento. È possibile codificare usando le informazioni *lHint* oppure è possibile definire una `CObject`-classe per archiviare le informazioni sulle modifiche e passare un oggetto di questa classe utilizzando derivata *pHint*. Eseguire l'override di `OnUpdate` funzione di membro nel `COleServerItem`-derivata per ottimizzare l'aggiornamento di ogni elemento a seconda del fatto che ha subito.

## <a name="see-also"></a>Vedere anche

[Esempio MFC HIERSVR](../../visual-cpp-samples.md)<br/>
[Classe COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDocument](../../mfc/reference/coledocument-class.md)<br/>
[Classe COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md)<br/>
[Classe COleTemplateServer](../../mfc/reference/coletemplateserver-class.md)

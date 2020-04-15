---
title: Classe COleServerItem
ms.date: 11/04/2016
f1_keywords:
- COleServerItem
- AFXOLE/COleServerItem
- AFXOLE/COleServerItem::COleServerItem
- AFXOLE/COleServerItem::AddOtherClipboardData
- AFXOLE/COleServerItem::CopyToClipboard
- AFXOLE/COleServerItem::DoDragDrop
- AFXOLE/COleServerItem::GetClipboardData
- AFXOLE/COleServerItem::GetDocument
- AFXOLE/COleServerItem::GetEmbedSourceData
- AFXOLE/COleServerItem::GetItemName
- AFXOLE/COleServerItem::GetLinkSourceData
- AFXOLE/COleServerItem::GetObjectDescriptorData
- AFXOLE/COleServerItem::IsConnected
- AFXOLE/COleServerItem::IsLinkedItem
- AFXOLE/COleServerItem::NotifyChanged
- AFXOLE/COleServerItem::OnDoVerb
- AFXOLE/COleServerItem::OnDraw
- AFXOLE/COleServerItem::OnDrawEx
- AFXOLE/COleServerItem::OnGetClipboardData
- AFXOLE/COleServerItem::OnGetExtent
- AFXOLE/COleServerItem::OnInitFromData
- AFXOLE/COleServerItem::OnQueryUpdateItems
- AFXOLE/COleServerItem::OnRenderData
- AFXOLE/COleServerItem::OnRenderFileData
- AFXOLE/COleServerItem::OnRenderGlobalData
- AFXOLE/COleServerItem::OnSetColorScheme
- AFXOLE/COleServerItem::OnSetData
- AFXOLE/COleServerItem::OnSetExtent
- AFXOLE/COleServerItem::OnUpdate
- AFXOLE/COleServerItem::OnUpdateItems
- AFXOLE/COleServerItem::SetItemName
- AFXOLE/COleServerItem::GetDataSource
- AFXOLE/COleServerItem::OnHide
- AFXOLE/COleServerItem::OnOpen
- AFXOLE/COleServerItem::OnShow
- AFXOLE/COleServerItem::m_sizeExtent
helpviewer_keywords:
- COleServerItem [MFC], COleServerItem
- COleServerItem [MFC], AddOtherClipboardData
- COleServerItem [MFC], CopyToClipboard
- COleServerItem [MFC], DoDragDrop
- COleServerItem [MFC], GetClipboardData
- COleServerItem [MFC], GetDocument
- COleServerItem [MFC], GetEmbedSourceData
- COleServerItem [MFC], GetItemName
- COleServerItem [MFC], GetLinkSourceData
- COleServerItem [MFC], GetObjectDescriptorData
- COleServerItem [MFC], IsConnected
- COleServerItem [MFC], IsLinkedItem
- COleServerItem [MFC], NotifyChanged
- COleServerItem [MFC], OnDoVerb
- COleServerItem [MFC], OnDraw
- COleServerItem [MFC], OnDrawEx
- COleServerItem [MFC], OnGetClipboardData
- COleServerItem [MFC], OnGetExtent
- COleServerItem [MFC], OnInitFromData
- COleServerItem [MFC], OnQueryUpdateItems
- COleServerItem [MFC], OnRenderData
- COleServerItem [MFC], OnRenderFileData
- COleServerItem [MFC], OnRenderGlobalData
- COleServerItem [MFC], OnSetColorScheme
- COleServerItem [MFC], OnSetData
- COleServerItem [MFC], OnSetExtent
- COleServerItem [MFC], OnUpdate
- COleServerItem [MFC], OnUpdateItems
- COleServerItem [MFC], SetItemName
- COleServerItem [MFC], GetDataSource
- COleServerItem [MFC], OnHide
- COleServerItem [MFC], OnOpen
- COleServerItem [MFC], OnShow
- COleServerItem [MFC], m_sizeExtent
ms.assetid: 80256df6-3888-4256-944b-787d4b2e6b0d
ms.openlocfilehash: 5373075cf6dfc54e6e2368e46f48f317fcec64d9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376110"
---
# <a name="coleserveritem-class"></a>Classe COleServerItem

Fornisce l'interfaccia server agli elementi OLE.

## <a name="syntax"></a>Sintassi

```
class COleServerItem : public CDocItem
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[COleServerItem::COleServerItem (informazioni in base alla proprietà del computer non è stato possibile](#coleserveritem)|Costruisce un oggetto `COleServerItem`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleServerItem::AddOtherClipboardData](#addotherclipboarddata)|Inserisce i formati `COleDataSource` di presentazione e conversione in un oggetto.|
|[COleServerItem::CopyToClipboard](#copytoclipboard)|Copia l'elemento negli Appunti.|
|[COleServerItem::DoDragDrop](#dodragdrop)|Esegue un'operazione di trascinamento della selezione.|
|[COleServerItem::GetClipboardData](#getclipboarddata)|Ottiene l'origine dati da utilizzare nel trasferimento dei dati (trascinamento o rilascio degli Appunti).|
|[COleServerItem::GetDocument](#getdocument)|Restituisce il documento server che contiene l'elemento.|
|[COleServerItem::GetEmbedSourceData](#getembedsourcedata)|Ottiene i dati CF_EMBEDSOURCE per un elemento OLE.|
|[COleServerItem::GetItemName](#getitemname)|Restituisce il nome dell'elemento. Utilizzato solo per gli elementi collegati.|
|[COleServerItem::GetLinkSourceData](#getlinksourcedata)|Ottiene i dati CF_LINKSOURCE per un elemento OLE.|
|[COleServerItem::GetObjectDescriptorData](#getobjectdescriptordata)|Ottiene i dati CF_OBJECTDESCRIPTOR per un elemento OLE.|
|[COleServerItem::IsConnected](#isconnected)|Indica se l'elemento è attualmente collegato a un contenitore attivo.|
|[COleServerItem::IsLinkedItem](#islinkeditem)|Indica se l'elemento rappresenta un elemento OLE collegato.|
|[COleServerItem::NotifyChanged](#notifychanged)|Aggiorna tutti i contenitori con l'aggiornamento automatico dei collegamenti.|
|[COleServerItem::OnDoVerb](#ondoverb)|Chiamato per eseguire un verbo.|
|[COleServerItem::OnDraw](#ondraw)|Chiamato quando il contenitore richiede di disegnare l'elemento; necessaria l'attuazione.|
|[COleServerItem::OnDrawEx](#ondrawex)|Chiamato per il disegno di elementi specializzati.|
|[COleServerItem::OnGetClipboardData](#ongetclipboarddata)|Chiamato dal framework per ottenere i dati che verrebbero copiati negli Appunti.|
|[COleServerItem::OnGetExtent (informazioni in base alla proprietà del computer)](#ongetextent)|Chiamato dal framework per recuperare le dimensioni dell'elemento OLE.|
|[COleServerItem::OnInitFromData](#oninitfromdata)|Chiamato dal framework per inizializzare un elemento OLE utilizzando il contenuto dell'oggetto di trasferimento dati specificato.|
|[COleServerItem::OnQueryUpdateItems](#onqueryupdateitems)|Chiamato per determinare se è necessario aggiornare gli elementi collegati.|
|[COleServerItem::OnRenderData](#onrenderdata)|Recupera i dati come parte del rendering ritardato.|
|[COleServerItem::OnRenderFileData](#onrenderfiledata)|Recupera i dati `CFile` in un oggetto come parte del rendering ritardato.|
|[COleServerItem::OnRenderGlobalData](#onrenderglobaldata)|Recupera i dati in un HGLOBAL come parte del rendering ritardato.|
|[COleServerItem::OnSetColorScheme](#onsetcolorscheme)|Chiamato per impostare la combinazione di colori dell'elemento.|
|[COleServerItem::OnSetData](#onsetdata)|Chiamato per impostare i dati dell'elemento.|
|[COleServerItem::OnSetExtent (Informazioni in base alle informazioni in questo insieme dei prodotti)](#onsetextent)|Chiamato dal framework per impostare le dimensioni dell'elemento OLE.|
|[COleServerItem::OnUpdate](#onupdate)|Chiamato quando una parte del documento a cui appartiene l'elemento viene modificata.|
|[COleServerItem::OnUpdateItems](#onupdateitems)|Chiamato per aggiornare la cache delle presentazioni di tutti gli elementi nel documento server.|
|[COleServerItem::SetItemName](#setitemname)|Imposta il nome dell'elemento. Utilizzato solo per gli elementi collegati.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[COleServerItem::GetDataSource](#getdatasource)|Ottiene l'oggetto utilizzato per archiviare i formati di conversione.|
|[COleServerItem::OnHide](#onhide)|Chiamato dal framework per nascondere l'elemento OLE.|
|[COleServerItem::OnOpen (Informazioni in base ai criteri della pagina](#onopen)|Chiamato dal framework per visualizzare l'elemento OLE nella propria finestra di primo livello.|
|[COleServerItem::OnShow](#onshow)|Chiamato quando il contenitore richiede di visualizzare l'elemento.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleServerItem::m_sizeExtent](#m_sizeextent)|Informa il server sulla quantità di elemento OLE visibile.|

## <a name="remarks"></a>Osservazioni

Un elemento collegato può rappresentare alcuni o tutti i documenti server. Un elemento incorporato rappresenta sempre un intero documento server.

La `COleServerItem` classe definisce diverse funzioni membro sottoponibili a override chiamate dalle librerie a collegamento dinamico (DLL) del sistema OLE, in genere in risposta alle richieste dell'applicazione contenitore. Queste funzioni membro consentono all'applicazione contenitore di modificare l'elemento indirettamente in vari modi, ad esempio visualizzandolo, eseguendone i verbi o recuperandone i dati in vari formati.

Per `COleServerItem`utilizzare , derivare una classe da essa e implementare le funzioni membro [OnDraw](#ondraw) e [Serialize](../../mfc/reference/cobject-class.md#serialize) . La `OnDraw` funzione fornisce la rappresentazione metafile di un elemento, consentendone la visualizzazione quando un'applicazione contenitore apre un documento composto. La `Serialize` funzione `CObject` di fornisce la rappresentazione nativa di un elemento, consentendo il trasferimento di un elemento incorporato tra le applicazioni server e contenitore. [OnGetExtent](#ongetextent) fornisce la dimensione naturale dell'elemento al contenitore, consentendo al contenitore di ridimensionare l'elemento.

Per ulteriori informazioni sui server e sugli argomenti correlati, vedere l'articolo [Servers: Implementing a Server](../../mfc/servers-implementing-a-server.md) e "Creating a Container/Server Application" nell'articolo [Containers: Advanced Features](../../mfc/containers-advanced-features.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocItem](../../mfc/reference/cdocitem-class.md)

`COleServerItem`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxole.h

## <a name="coleserveritemaddotherclipboarddata"></a><a name="addotherclipboarddata"></a>COleServerItem::AddOtherClipboardData

Chiamare questa funzione per inserire i formati di presentazione `COleDataSource` e conversione per l'elemento OLE nell'oggetto specificato.

```
void AddOtherClipboardData(COleDataSource* pDataSource);
```

### <a name="parameters"></a>Parametri

*pDataSource (informazioni in stato in stato in e*<br/>
Puntatore `COleDataSource` all'oggetto in cui devono essere posizionati i dati.

### <a name="remarks"></a>Osservazioni

È necessario aver implementato la funzione membro [OnDraw](#ondraw) per fornire il formato di presentazione (un'immagine metafile) per l'elemento. Per supportare altri formati di conversione, registrarli utilizzando l'oggetto [COleDataSource](../../mfc/reference/coledatasource-class.md) restituito da [GetDataSource](#getdatasource) ed eseguire l'override della funzione membro [OnRenderData](#onrenderdata) per fornire dati nei formati che si desidera supportare.

## <a name="coleserveritemcoleserveritem"></a><a name="coleserveritem"></a>COleServerItem::COleServerItem (informazioni in base alla proprietà del computer non è stato possibile

Costruisce un `COleServerItem` oggetto e lo aggiunge alla raccolta di elementi del documento server di elementi del documento.

```
COleServerItem(
    COleServerDoc* pServerDoc,
    BOOL bAutoDelete);
```

### <a name="parameters"></a>Parametri

*pServerDoc (informazioni in stato in stato di*<br/>
Puntatore al documento che conterrà il nuovo elemento.

*bEliminazione automatica*<br/>
Flag che indica se l'oggetto può essere eliminato quando viene rilasciato un collegamento ad esso. Impostare questa opzione `COleServerItem` su FALSE se l'oggetto è parte integrante dei dati del documento che è necessario eliminare. Impostare questa proprietà su TRUE se l'oggetto è una struttura secondaria utilizzata per identificare un intervallo nei dati del documento che può essere eliminato dal framework.

## <a name="coleserveritemcopytoclipboard"></a><a name="copytoclipboard"></a>COleServerItem::CopyToClipboard

Chiamare questa funzione per copiare l'elemento OLE negli Appunti.

```
void CopyToClipboard(BOOL bIncludeLink = FALSE);
```

### <a name="parameters"></a>Parametri

*bIncludereLink*<br/>
Impostare questa proprietà su TRUE se i dati di collegamento devono essere copiati negli Appunti. Impostare questa proprietà su FALSE se l'applicazione server non supporta i collegamenti.

### <a name="remarks"></a>Osservazioni

La funzione utilizza la funzione membro [OnGetClipboardData](#ongetclipboarddata) per creare un oggetto [COleDataSource](../../mfc/reference/coledatasource-class.md) contenente i dati dell'elemento OLE nei formati supportati. La funzione inserisce quindi l'oggetto `COleDataSource` negli Appunti utilizzando la funzione [COleDataSource::SetClipboard](../../mfc/reference/coledatasource-class.md#setclipboard) . L'oggetto `COleDataSource` include i dati nativi dell'elemento e la relativa rappresentazione in formato CF_METAFILEPICT, nonché i dati in qualsiasi formato di conversione che si sceglie di supportare. Per il funzionamento di questa funzione membro, è necessario aver implementato [Serialize](../../mfc/reference/cobject-class.md#serialize) e [OnDraw.](#ondraw)

## <a name="coleserveritemdodragdrop"></a><a name="dodragdrop"></a>COleServerItem::DoDragDrop

Chiamare `DoDragDrop` la funzione membro per eseguire un'operazione di trascinamento della selezione.

```
DROPEFFECT DoDragDrop(
    LPCRECT lpRectItem,
    CPoint ptOffset,
    BOOL bIncludeLink = FALSE,
    DWORD dwEffects = DROPEFFECT_COPY | DROPEFFECT_MOVE,
    LPCRECT lpRectStartDrag = NULL);
```

### <a name="parameters"></a>Parametri

*lpRectItem (oggetto LpRectItem)*<br/>
Rettangolo dell'elemento sullo schermo, in pixel, rispetto all'area client.

*PtOffset*<br/>
Offset da *lpItemRect* in cui si trovava la posizione del mouse al momento del trascinamento.

*bIncludereLink*<br/>
Impostare questa proprietà su TRUE se i dati di collegamento devono essere copiati negli Appunti. Impostarlo su FALSE se l'applicazione non supporta i collegamenti.

*dwEffetti*<br/>
Determina gli effetti che l'origine di trascinamento consentirà nell'operazione di trascinamento (una combinazione di Copia, Sposta e Collegamento).

*lpRectStartDrag*<br/>
Puntatore al rettangolo che definisce il punto in cui inizia effettivamente il trascinamento. Per ulteriori informazioni, vedere la sezione Osservazioni successiva.

### <a name="return-value"></a>Valore restituito

Valore dell'enumerazione DROPEFFECT. Se è DROPEFFECT_MOVE, i dati originali devono essere rimossi.

### <a name="remarks"></a>Osservazioni

L'operazione di trascinamento della selezione non viene avviata immediatamente. Attende fino a quando il cursore del mouse lascia il rettangolo specificato da *lpRectStartDrag* o fino a quando non è stato passato un numero specificato di millisecondi. Se *lpRectStartDrag* è NULL, viene utilizzato un rettangolo predefinito in modo che il trascinamento inizi quando il cursore del mouse si sposta di un pixel.

Il tempo di ritardo è specificato da un'impostazione della chiave del Registro di sistema. È possibile modificare il tempo di ritardo chiamando [CWinApp::WriteProfileString](../../mfc/reference/cwinapp-class.md#writeprofilestring) o [CWinApp::WriteProfileInt](../../mfc/reference/cwinapp-class.md#writeprofileint). Se non si specifica il tempo di ritardo, viene utilizzato un valore predefinito di 200 millisecondi. Il tempo di ritardo del trascinamento viene memorizzato come segue:

- Il tempo di ritardo del trascinamento di Windows NT è memorizzato in HKEY_LOCAL_MACHINE SOFTWARE .

- Il tempo di ritardo del trascinamento di Windows 3.x viene memorizzato nel file WIN. INI, nella sezione [Windows.

- Il tempo di ritardo di trascinamento di Windows 95/98 viene archiviato in una versione memorizzata nella cache di WIN. InI.

Per ulteriori informazioni su come vengono archiviate le informazioni sul ritardo di trascinamento nel Registro di sistema o nel file . INI, vedere [WriteProfileString](/windows/win32/api/winbase/nf-winbase-writeprofilestringw) in Windows SDK.

## <a name="coleserveritemgetclipboarddata"></a><a name="getclipboarddata"></a>COleServerItem::GetClipboardData

Chiamare questa funzione per riempire l'oggetto [specificato COleDataSource](../../mfc/reference/coledatasource-class.md) oggetto con tutti i dati che verrebbero copiati negli Appunti se si chiama [CopyToClipboard](#copytoclipboard) (gli stessi dati verrebbero trasferiti anche se si chiama [DoDragDrop](#dodragdrop)).

```
void GetClipboardData(
    COleDataSource* pDataSource,
    BOOL bIncludeLink = FALSE,
    LPPOINT lpOffset = NULL,
    LPSIZE lpSize = NULL);
```

### <a name="parameters"></a>Parametri

*pDataSource (informazioni in stato in stato in e*<br/>
Puntatore `COleDataSource` all'oggetto che riceverà i dati dell'elemento OLE in tutti i formati supportati.

*bIncludereLink*<br/>
TRUESe i dati di collegamento devono essere copiati negli Appunti. FALSE se l'applicazione server non supporta i collegamenti.

*LpOffset (Offset)*<br/>
Offset, in pixel, del cursore del mouse dall'origine dell'oggetto.

*LpSize (Informazioni in questo formato utente)*<br/>
Dimensione dell'oggetto in pixel.

### <a name="remarks"></a>Osservazioni

Questa funzione chiama la funzione membro [GetEmbedSourceData](#getembedsourcedata) per ottenere i dati nativi per l'elemento OLE e chiama la funzione membro [AddOtherClipboardData](#addotherclipboarddata) per ottenere il formato della presentazione e gli eventuali formati di conversione supportati. Se *bIncludeLink* è TRUE, la funzione chiama anche [GetLinkSourceData](#getlinksourcedata) per ottenere i dati di collegamento per l'elemento.

Eseguire l'override di questa funzione `COleDataSource` se si desidera inserire `CopyToClipboard`formati in un oggetto prima o dopo i formati forniti da .

## <a name="coleserveritemgetdatasource"></a><a name="getdatasource"></a>COleServerItem::GetDataSource

Chiamare questa funzione per ottenere il [COleDataSource](../../mfc/reference/coledatasource-class.md) oggetto utilizzato per archiviare i formati di conversione che supporta l'applicazione server.

```
COleDataSource* GetDataSource();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto `COleDataSource` utilizzato per archiviare i formati di conversione.

### <a name="remarks"></a>Osservazioni

Se si desidera che l'applicazione server offra dati in diversi formati `COleDataSource` durante le operazioni di trasferimento dei dati, registrare tali formati con l'oggetto restituito da questa funzione. Ad esempio, se si desidera fornire una CF_TEXT rappresentazione dell'elemento OLE per gli Appunti `COleDataSource` o le operazioni di trascinamento della selezione, è necessario registrare il formato con l'oggetto restituito da questa funzione e quindi eseguire l'override della `OnRenderXxxData` funzione membro per fornire i dati.

## <a name="coleserveritemgetdocument"></a><a name="getdocument"></a>COleServerItem::GetDocument

Chiamare questa funzione per ottenere un puntatore al documento che contiene l'elemento.

```
COleServerDoc* GetDocument() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al documento che contiene l'elemento; NULL se l'elemento non fa parte di un documento.

### <a name="remarks"></a>Osservazioni

In questo modo è possibile accedere al documento `COleServerItem` server passato come argomento al costruttore.

## <a name="coleserveritemgetembedsourcedata"></a><a name="getembedsourcedata"></a>COleServerItem::GetEmbedSourceData

Chiamare questa funzione per ottenere i dati CF_EMBEDSOURCE per un elemento OLE.

```
void GetEmbedSourceData(LPSTGMEDIUM lpStgMedium);
```

### <a name="parameters"></a>Parametri

*lpStgMedia*<br/>
Puntatore alla struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) che riceverà i dati CF_EMBEDSOURCE per l'elemento OLE.

### <a name="remarks"></a>Osservazioni

Questo formato include i dati nativi dell'elemento. È necessario aver `Serialize` implementato la funzione membro affinché questa funzione funzioni correttamente.

Il risultato può quindi essere aggiunto a un'origine dati utilizzando [COleDataSource::CacheData](../../mfc/reference/coledatasource-class.md#cachedata). Questa funzione viene chiamata automaticamente da [COleServerItem::OnGetClipboardData](#ongetclipboarddata).

Per ulteriori informazioni, vedere [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) in Windows SDK.

## <a name="coleserveritemgetitemname"></a><a name="getitemname"></a>COleServerItem::GetItemName

Chiamare questa funzione per ottenere il nome dell'elemento.

```
const CString& GetItemName() const;
```

### <a name="return-value"></a>Valore restituito

Nome dell'elemento.

### <a name="remarks"></a>Osservazioni

Questa funzione viene in genere chiamata solo per gli elementi collegati.

## <a name="coleserveritemgetlinksourcedata"></a><a name="getlinksourcedata"></a>COleServerItem::GetLinkSourceData

Chiamare questa funzione per ottenere i dati CF_LINKSOURCE per un elemento OLE.

```
BOOL GetLinkSourceData(LPSTGMEDIUM lpStgMedium);
```

### <a name="parameters"></a>Parametri

*lpStgMedia*<br/>
Puntatore alla struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) che riceverà i dati CF_LINKSOURCE per l'elemento OLE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo formato include il CLSID che descrive il tipo di elemento OLE e le informazioni necessarie per individuare il documento contenente l'elemento OLE.

Il risultato può quindi essere aggiunto a un'origine dati con [COleDataSource::CacheData](../../mfc/reference/coledatasource-class.md#cachedata). Questa funzione viene chiamata automaticamente da [OnGetClipboardData](#ongetclipboarddata).

Per ulteriori informazioni, vedere [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) in Windows SDK.

## <a name="coleserveritemgetobjectdescriptordata"></a><a name="getobjectdescriptordata"></a>COleServerItem::GetObjectDescriptorData

Chiamare questa funzione per ottenere i dati CF_OBJECTDESCRIPTOR per un elemento OLE.

```
void GetObjectDescriptorData(
    LPPOINT lpOffset,
    LPSIZE lpSize,
    LPSTGMEDIUM lpStgMedium);
```

### <a name="parameters"></a>Parametri

*LpOffset (Offset)*<br/>
Offset del clic del mouse dall'angolo superiore sinistro dell'elemento OLE. Può essere NULL.

*LpSize (Informazioni in questo formato utente)*<br/>
Dimensione dell'elemento OLE. Può essere NULL.

*lpStgMedia*<br/>
Puntatore alla struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) che riceverà i dati CF_OBJECTDESCRIPTOR per l'elemento OLE.

### <a name="remarks"></a>Osservazioni

Le informazioni vengono `STGMEDIUM` copiate nella struttura a cui punta *lpStgMedium*. Questo formato include le informazioni necessarie per la finestra di dialogo Incolla speciale.

Per ulteriori informazioni, vedere [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) in Windows SDK.

## <a name="coleserveritemisconnected"></a><a name="isconnected"></a>COleServerItem::IsConnected

Chiamare questa funzione per verificare se l'elemento OLE è connesso.

```
BOOL IsConnected() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è connesso; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Un elemento OLE viene considerato connesso se uno o più contenitori contenevano riferimenti all'elemento. Un elemento è connesso se il conteggio dei riferimenti è maggiore di 0 o se è un elemento incorporato.

## <a name="coleserveritemislinkeditem"></a><a name="islinkeditem"></a>COleServerItem::IsLinkedItem

Chiamare questa funzione per verificare se l'elemento OLE è un elemento collegato.

```
BOOL IsLinkedItem() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è un elemento collegato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Un elemento è collegato se l'elemento è valido e non viene restituito nell'elenco di elementi incorporati del documento. Un elemento collegato potrebbe essere connesso o meno a un contenitore.

È comune utilizzare la stessa classe sia per gli elementi collegati che per quelli incorporati. `IsLinkedItem`consente di fare in modo che gli elementi collegati si comportino in modo diverso rispetto agli elementi incorporati, anche se molte volte il codice è comune.

## <a name="coleserveritemm_sizeextent"></a><a name="m_sizeextent"></a>COleServerItem::m_sizeExtent

Questo membro indica al server la quantità di oggetto visibile nel documento contenitore.

```
CSize m_sizeExtent;
```

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di [OnSetExtent](#onsetextent) imposta questo membro.

## <a name="coleserveritemnotifychanged"></a><a name="notifychanged"></a>COleServerItem::NotifyChanged

Chiamare questa funzione dopo la modifica dell'elemento collegato.

```
void NotifyChanged(DVASPECT nDrawAspect = DVASPECT_CONTENT);
```

### <a name="parameters"></a>Parametri

*nDrawAspect (inquestoe>*<br/>
Valore dell'enumerazione DVASPECT che indica quale aspetto dell'elemento OLE è stato modificato. Questo parametro può avere uno dei seguenti valori:

- DVASPECT_CONTENT Elemento è rappresentato in modo che possa essere visualizzato come un oggetto incorporato all'interno del relativo contenitore.

- DVASPECT_THUMBNAIL elemento viene eseguito il rendering in una rappresentazione "miniatura" in modo che possa essere visualizzato in uno strumento di esplorazione.

- DVASPECT_ICON elemento è rappresentato da un'icona.

- DVASPECT_DOCPRINT Elemento viene rappresentato come se fosse stampato utilizzando il comando Stampa del menu File.

### <a name="remarks"></a>Osservazioni

Se un elemento contenitore è collegato al documento con un collegamento automatico, l'elemento viene aggiornato per riflettere le modifiche. Nelle applicazioni contenitore scritte utilizzando la libreria Microsoft Foundation Class, [COleClientItem::OnChange](../../mfc/reference/coleclientitem-class.md#onchange) viene chiamato in risposta.

## <a name="coleserveritemondoverb"></a><a name="ondoverb"></a>COleServerItem::OnDoVerb

Chiamato dal framework per eseguire il verbo specificato.

```
virtual void OnDoVerb(LONG iVerb);
```

### <a name="parameters"></a>Parametri

*IVerbo*<br/>
Specifica il verbo da eseguire. Può essere uno dei seguenti:

|Valore|Significato|Simbolo|
|-----------|-------------|------------|
|0|verbo primario|OLEIVERB_PRIMARY|
|1|Verbo secondario|(nessuna)|
|- 1|Elemento di visualizzazione per la modifica|OLEIVERB_SHOW|
|- 2|Modifica elemento in una finestra separata|OLEIVERB_OPEN|
|- 3|Nascondi elemento|OLEIVERB_HIDE|

Il valore -1 è in genere un alias per un altro verbo. Se la modifica aperta non è supportata, -2 ha lo stesso effetto di -1. Per ulteriori valori, vedere [IOleObject::DoVerb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb) in Windows SDK.

### <a name="remarks"></a>Osservazioni

Se l'applicazione contenitore è stata scritta con la libreria Microsoft Foundation Class, questa funzione `COleClientItem` viene chiamata quando viene chiamata la funzione membro [COleClientItem::Activate](../../mfc/reference/coleclientitem-class.md#activate) dell'oggetto corrispondente. L'implementazione predefinita chiama la funzione membro [OnShow](#onshow) se viene specificato il verbo primario o OLEIVERB_SHOW, [OnOpen](#onopen) se viene specificato il verbo secondario o OLEIVERB_OPEN e [OnHide](#onhide) se OLEIVERB_HIDE è specificato. L'implementazione `OnShow` predefinita chiama if *iVerb* non è uno dei verbi elencati in precedenza.

Eseguire l'override di questa funzione se il verbo primario non visualizza l'elemento. Ad esempio, se l'elemento è una registrazione audio e il verbo principale è Play, non è necessario visualizzare l'applicazione server per riprodurre l'elemento.

Per ulteriori informazioni, vedere [IOleObject::DoVerb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb) in Windows SDK.

## <a name="coleserveritemondraw"></a><a name="ondraw"></a>COleServerItem::OnDraw

Chiamato dal framework per eseguire il rendering dell'elemento OLE in un metafile.

```
virtual BOOL OnDraw(
    CDC* pDC,
    CSize& rSize) = 0;
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore all'oggetto [CDC](../../mfc/reference/cdc-class.md) su cui disegnare l'elemento. Il contesto di visualizzazione viene connesso automaticamente al contesto di visualizzazione dell'attributo in modo da poter chiamare le funzioni di attributo, anche se questa operazione renderebbe il metafile specifico del dispositivo.

*rDimensioni*<br/>
Dimensione, in unità HIMETRIC, in cui disegnare il metafile.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è stato disegnato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La rappresentazione metafile dell'elemento OLE viene utilizzata per visualizzare l'elemento nell'applicazione contenitore. Se l'applicazione contenitore è stata scritta con la libreria Microsoft Foundation Class, il metafile viene utilizzato dalla funzione membro [Draw](../../mfc/reference/coleclientitem-class.md#draw) dell'oggetto [corrispondente COleClientItem](../../mfc/reference/coleclientitem-class.md) oggetto. Non vi è nessuna implementazione predefinita. È necessario eseguire l'override di questa funzione per disegnare l'elemento nel contesto di periferica specificato.

## <a name="coleserveritemondrawex"></a><a name="ondrawex"></a>COleServerItem::OnDrawEx

Chiamato dal framework per tutti i disegni.

```
virtual BOOL OnDrawEx(
    CDC* pDC,
    DVASPECT nDrawAspect,
    CSize& rSize);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore all'oggetto [CDC](../../mfc/reference/cdc-class.md) su cui disegnare l'elemento. Il controller di dominio viene connesso automaticamente all'attributo DC in modo da poter chiamare le funzioni di attributo, anche se in questo modo renderebbe il dispositivo metafile specifico del dispositivo.

*nDrawAspect (inquestoe>*<br/>
Valore dell'enumerazione DVASPECT. Questo parametro può avere uno dei seguenti valori:

- DVASPECT_CONTENT Elemento è rappresentato in modo che possa essere visualizzato come un oggetto incorporato all'interno del relativo contenitore.

- DVASPECT_THUMBNAIL elemento viene eseguito il rendering in una rappresentazione "miniatura" in modo che possa essere visualizzato in uno strumento di esplorazione.

- DVASPECT_ICON elemento è rappresentato da un'icona.

- DVASPECT_DOCPRINT Elemento viene rappresentato come se fosse stampato utilizzando il comando Stampa del menu File.

*rDimensioni*<br/>
Dimensione dell'elemento in unità HIMETRIC.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è stato disegnato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'implementazione `OnDraw` predefinita chiama quando DVASPECT è uguale a DVASPECT_CONTENT; in caso contrario, non riesce.

Eseguire l'override di questa funzione per fornire i dati di presentazione per aspetti diversi da DVASPECT_CONTENT, ad esempio DVASPECT_ICON o DVASPECT_THUMBNAIL.

## <a name="coleserveritemongetclipboarddata"></a><a name="ongetclipboarddata"></a>COleServerItem::OnGetClipboardData

Chiamato dal framework per `COleDataSource` ottenere un oggetto contenente tutti i dati che verrebbero inseriti negli Appunti da una chiamata alla funzione membro [CopyToClipboard.](#copytoclipboard)

```
virtual COleDataSource* OnGetClipboardData(
    BOOL bIncludeLink,
    LPPOINT lpOffset,
    LPSIZE lpSize);
```

### <a name="parameters"></a>Parametri

*bIncludereLink*<br/>
Impostare questa proprietà su TRUE se i dati di collegamento devono essere copiati negli Appunti. Impostare questa proprietà su FALSE se l'applicazione server non supporta i collegamenti.

*LpOffset (Offset)*<br/>
Offset del cursore del mouse dall'origine dell'oggetto in pixel.

*LpSize (Informazioni in questo formato utente)*<br/>
Dimensione dell'oggetto in pixel.

### <a name="return-value"></a>Valore restituito

Puntatore a un [oggetto COleDataSource](../../mfc/reference/coledatasource-class.md) contenente i dati degli Appunti.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione chiama [GetClipboardData](#getclipboarddata).

## <a name="coleserveritemongetextent"></a><a name="ongetextent"></a>COleServerItem::OnGetExtent (informazioni in base alla proprietà del computer)

Chiamato dal framework per recuperare le dimensioni, in unità HIMETRIC, dell'elemento OLE.

```
virtual BOOL OnGetExtent(
    DVASPECT nDrawAspect,
    CSize& rSize);
```

### <a name="parameters"></a>Parametri

*nDrawAspect (inquestoe>*<br/>
Specifica l'aspetto dell'elemento OLE i cui limiti devono essere recuperati. Questo parametro può avere uno dei seguenti valori:

- DVASPECT_CONTENT Elemento è rappresentato in modo che possa essere visualizzato come un oggetto incorporato all'interno del relativo contenitore.

- DVASPECT_THUMBNAIL elemento viene eseguito il rendering in una rappresentazione "miniatura" in modo che possa essere visualizzato in uno strumento di esplorazione.

- DVASPECT_ICON elemento è rappresentato da un'icona.

- DVASPECT_DOCPRINT Elemento viene rappresentato come se fosse stampato utilizzando il comando Stampa del menu File.

*rDimensioni*<br/>
Riferimento a `CSize` un oggetto che riceverà le dimensioni dell'elemento OLE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se l'applicazione contenitore è stata scritta con la libreria Microsoft Foundation `COleClientItem` Class, questa funzione viene chiamata quando viene chiamata la funzione membro [GetExtent](../../mfc/reference/coleclientitem-class.md#getextent) dell'oggetto corrispondente. L'implementazione predefinita non esegue alcuna operazione. È necessario implementarlo da soli. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale durante la gestione di una richiesta per le dimensioni dell'elemento OLE.

## <a name="coleserveritemonhide"></a><a name="onhide"></a>COleServerItem::OnHide

Chiamato dal framework per nascondere l'elemento OLE.

```
virtual void OnHide();
```

### <a name="remarks"></a>Osservazioni

Il valore `COleServerDoc::OnShowDocument( FALSE )`predefinito chiama . La funzione notifica inoltre al contenitore che l'elemento OLE è stato nascosto. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando si nasconde un elemento OLE.

## <a name="coleserveritemoninitfromdata"></a><a name="oninitfromdata"></a>COleServerItem::OnInitFromData

Chiamato dal framework per inizializzare un elemento OLE utilizzando il contenuto di *pDataObject*.

```
virtual BOOL OnInitFromData(
    COleDataObject* pDataObject,
    BOOL bCreation);
```

### <a name="parameters"></a>Parametri

*pDataObject (oggetto PDataObject)*<br/>
Puntatore a un oggetto dati OLE contenente dati in vari formati per l'inizializzazione dell'elemento OLE.

*bCreazione*<br/>
TRUESe la funzione viene chiamata per inizializzare un elemento OLE appena creato da un'applicazione contenitore. FALSE se la funzione viene chiamata per sostituire il contenuto di un elemento OLE già esistente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se *bCreation* è TRUE, questa funzione viene chiamata se un contenitore implementa Inserisci nuovo oggetto in base alla selezione corrente. I dati selezionati vengono utilizzati durante la creazione del nuovo elemento OLE. Ad esempio, quando si seleziona un intervallo di celle in un foglio di calcolo e quindi si utilizza Inserisci nuovo oggetto per creare un grafico basato sui valori nell'intervallo selezionato. L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione per scegliere un formato accettabile tra quelli offerti da *pDataObject* e inizializzare l'elemento OLE in base ai dati forniti. Si tratta di un oggetto sottoponibile a override avanzato.

Per ulteriori informazioni, vedere [IOleObject::InitFromData](/windows/win32/api/oleidl/nf-oleidl-ioleobject-initfromdata) in Windows SDK.

## <a name="coleserveritemonopen"></a><a name="onopen"></a>COleServerItem::OnOpen (Informazioni in base ai criteri della pagina

Chiamato dal framework per visualizzare l'elemento OLE in un'istanza separata dell'applicazione server, anziché sul posto.

```
virtual void OnOpen();
```

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita attiva la prima finestra cornice che visualizza il documento che contiene il OLE elemento; se l'applicazione è un mini-server, l'implementazione predefinita mostra la finestra principale. La funzione notifica inoltre al contenitore che l'elemento OLE è stato aperto.

Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando si apre un elemento OLE. Ciò è particolarmente comune con gli elementi collegati in cui si desidera impostare la selezione sul collegamento quando viene aperto.

Per ulteriori informazioni, vedere [IOleClientSite::OnShowWindow](/windows/win32/api/oleidl/nf-oleidl-ioleclientsite-onshowwindow) in Windows SDK.

## <a name="coleserveritemonqueryupdateitems"></a><a name="onqueryupdateitems"></a>COleServerItem::OnQueryUpdateItems

Chiamato dal framework per determinare se gli elementi collegati nel documento server corrente non sono aggiornati.

```
virtual BOOL OnQueryUpdateItems();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il documento contiene elementi che richiedono aggiornamenti; 0 se tutti gli elementi sono aggiornati.

### <a name="remarks"></a>Osservazioni

Un elemento non è aggiornato se il documento di origine è stato modificato ma l'elemento collegato non è stato aggiornato per riflettere le modifiche nel documento.

## <a name="coleserveritemonrenderdata"></a><a name="onrenderdata"></a>COleServerItem::OnRenderData

Chiamato dal framework per recuperare i dati nel formato specificato.

```
virtual BOOL OnRenderData(
    LPFORMATETC lpFormatEtc,
    LPSTGMEDIUM lpStgMedium);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc (in questo campo)*<br/>
Punta alla struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che specifica il formato in cui vengono richieste le informazioni.

*lpStgMedia*<br/>
Punta a una struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) in cui devono essere restituiti i dati.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il formato specificato è posizionato `COleDataSource` in precedenza nell'oggetto utilizzando la funzione membro [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderdata) o [DelayRenderFileData](../../mfc/reference/coledatasource-class.md#delayrenderfiledata) per il rendering ritardato. L'implementazione predefinita di questa funzione chiama [onRenderFileData](#onrenderfiledata) o [OnRenderGlobalData](#onrenderglobaldata), rispettivamente, se il supporto di archiviazione fornito è un file o memoria. Se nessuno di questi formati viene fornito, l'implementazione predefinita restituisce 0 e non esegue alcuna operazione.

Se *lpStgMedium*-> *tymed* è TYMED_NULL, STGMEDIUM deve essere allocato e riempito come specificato da *lpFormatEtc->timed*. In caso contrario TYMED_NULL, STGMEDIUM deve essere compilato sul posto con i dati.

Si tratta di un oggetto sottoponibile a override avanzato. Eseguire l'override di questa funzione per fornire i dati nel formato e nel supporto richiesti. A seconda dei dati, è possibile eseguire l'override di una delle altre versioni di questa funzione. Se le dimensioni dei dati sono `OnRenderGlobalData`di piccole dimensioni e fisse, eseguire l'override di . Se i dati si trova in un file `OnRenderFileData`o sono di dimensioni variabili, eseguire l'override di .

Per ulteriori informazioni, vedere [IDataObject::GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata), [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1), [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc)e [TYMED](/windows/win32/api/objidl/ne-objidl-tymed) in Windows SDK.

## <a name="coleserveritemonrenderfiledata"></a><a name="onrenderfiledata"></a>COleServerItem::OnRenderFileData

Chiamato dal framework per recuperare i dati nel formato specificato quando il supporto di archiviazione è un file.

```
virtual BOOL OnRenderFileData(
    LPFORMATETC lpFormatEtc,
    CFile* pFile);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc (in questo campo)*<br/>
Punta alla struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che specifica il formato in cui vengono richieste le informazioni.

*pFile (File)*<br/>
Punta a `CFile` un oggetto in cui deve essere eseguito il rendering dei dati.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il formato specificato è posizionato `COleDataSource` in precedenza nell'oggetto utilizzando la funzione membro [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderdata) per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce semplicemente FALSE.

Si tratta di un oggetto sottoponibile a override avanzato. Eseguire l'override di questa funzione per fornire i dati nel formato e nel supporto richiesti. A seconda dei dati, è possibile eseguire l'override di una delle altre versioni di questa funzione. Se si desidera gestire più supporti di archiviazione, eseguire l'override [di OnRenderData](#onrenderdata). Se i dati si trova in un file o sono di dimensioni variabili, eseguire l'override [di OnRenderFileData](#onrenderfiledata).

Per ulteriori informazioni, vedere [IDataObject::GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata) e [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in Windows SDK.

## <a name="coleserveritemonrenderglobaldata"></a><a name="onrenderglobaldata"></a>COleServerItem::OnRenderGlobalData

Chiamato dal framework per recuperare i dati nel formato specificato quando il supporto di archiviazione specificato è la memoria globale.

```
virtual BOOL OnRenderGlobalData(
    LPFORMATETC lpFormatEtc,
    HGLOBAL* phGlobal);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc (in questo campo)*<br/>
Punta alla struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che specifica il formato in cui vengono richieste le informazioni.

*PhGlobal (globale)*<br/>
Punta a un handle alla memoria globale in cui devono essere restituiti i dati. Se non è stata allocata memoria, questo parametro può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il formato specificato è posizionato `COleDataSource` in precedenza nell'oggetto utilizzando la funzione membro [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderdata) per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce semplicemente FALSE.

Se *phGlobal* è NULL, un nuovo HGLOBAL deve essere allocato e restituito in *phGlobal*. In caso contrario, il HGLOBAL specificato da *phGlobal* deve essere riempito con i dati. La quantità di dati inseriti in HGLOBAL non deve superare la dimensione corrente del blocco di memoria. Inoltre, il blocco non può essere riallocato a una dimensione maggiore.

Si tratta di un oggetto sottoponibile a override avanzato. Eseguire l'override di questa funzione per fornire i dati nel formato e nel supporto richiesti. A seconda dei dati, è possibile eseguire l'override di una delle altre versioni di questa funzione. Se si desidera gestire più supporti di archiviazione, eseguire l'override [di OnRenderData](#onrenderdata). Se i dati si trova in un file o sono di dimensioni variabili, eseguire l'override [di OnRenderFileData](#onrenderfiledata).

Per ulteriori informazioni, vedere [IDataObject::GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata) e [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in Windows SDK.

## <a name="coleserveritemonsetcolorscheme"></a><a name="onsetcolorscheme"></a>COleServerItem::OnSetColorScheme

Chiamato dal framework per specificare una tavolozza di colori da utilizzare durante la modifica dell'elemento OLE.

```
virtual BOOL OnSetColorScheme(const LOGPALETTE* lpLogPalette);
```

### <a name="parameters"></a>Parametri

*LpLogPalette (in modo lpLogPalette)*<br/>
Puntatore a una struttura [LOGPALETTE di](/windows/win32/api/wingdi/ns-wingdi-logpalette) Windows.

### <a name="return-value"></a>Valore restituito

Diverso da zero se viene utilizzata la tavolozza dei colori; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se l'applicazione contenitore è stata scritta utilizzando la libreria Microsoft Foundation Class, questa funzione `COleClientItem` viene chiamata quando viene chiamata la funzione [IOleObject::SetColorScheme](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setcolorscheme) dell'oggetto corrispondente. L'implementazione predefinita restituisce FALSE. Eseguire l'override di questa funzione se si desidera utilizzare la tavolozza consigliata. L'applicazione server non è necessaria per utilizzare la tavolozza suggerita.

Per ulteriori informazioni, vedere [IOleObject::SetColorScheme](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setcolorscheme) in Windows SDK.

## <a name="coleserveritemonsetdata"></a><a name="onsetdata"></a>COleServerItem::OnSetData

Chiamato dal framework per sostituire i dati dell'elemento OLE con i dati specificati.

```
virtual BOOL OnSetData(
    LPFORMATETC lpFormatEtc,
    LPSTGMEDIUM lpStgMedium,
    BOOL bRelease);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc (in questo campo)*<br/>
Puntatore a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che specifica il formato dei dati.

*lpStgMedia*<br/>
Puntatore a una struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) in cui si trovano i dati.

*bRilascio*<br/>
Indica chi ha la proprietà del supporto di archiviazione dopo aver completato la chiamata di funzione. Il chiamante decide chi è responsabile del rilascio delle risorse allocate per conto del supporto di archiviazione. Il chiamante esegue questa operazione impostando *bRelease*. Se *bRelease* è diverso da zero, l'elemento server assume la proprietà, liberando il supporto al termine dell'utilizzo. Quando *bRelease* è 0, il chiamante mantiene la proprietà e l'elemento server può utilizzare il supporto di archiviazione solo per la durata della chiamata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'elemento server non assume la proprietà dei dati fino a quando non è stato ottenuto correttamente. Ovvero, non assume la proprietà se restituisce 0. Se l'origine dati assume la proprietà, libera il supporto di archiviazione chiamando la funzione [ReleaseStgMedium.](/windows/win32/api/ole2/nf-ole2-releasestgmedium)

L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione per sostituire i dati dell'elemento OLE con i dati specificati. Si tratta di un oggetto sottoponibile a override avanzato.

Per ulteriori informazioni, vedere [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1), [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc)e [ReleaseStgMedium](/windows/win32/api/ole2/nf-ole2-releasestgmedium) in Windows SDK.

## <a name="coleserveritemonsetextent"></a><a name="onsetextent"></a>COleServerItem::OnSetExtent (Informazioni in base alle informazioni in questo insieme dei prodotti)

Chiamato dal framework per indicare all'elemento OLE la quantità di spazio disponibile nel documento contenitore.

```
virtual BOOL OnSetExtent(
    DVASPECT nDrawAspect,
    const CSize& size);
```

### <a name="parameters"></a>Parametri

*nDrawAspect (inquestoe>*<br/>
Specifica l'aspetto dell'elemento OLE i cui limiti vengono specificati. Questo parametro può avere uno dei seguenti valori:

- DVASPECT_CONTENT Elemento è rappresentato in modo che possa essere visualizzato come un oggetto incorporato all'interno del relativo contenitore.

- DVASPECT_THUMBNAIL elemento viene eseguito il rendering in una rappresentazione "miniatura" in modo che possa essere visualizzato in uno strumento di esplorazione.

- DVASPECT_ICON elemento è rappresentato da un'icona.

- DVASPECT_DOCPRINT Elemento viene rappresentato come se fosse stampato utilizzando il comando Stampa del menu File.

*Dimensione*<br/>
Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) struttura che specifica la nuova dimensione dell'elemento OLE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se l'applicazione contenitore è stata scritta con la libreria Microsoft Foundation `COleClientItem` Class, questa funzione viene chiamata quando viene chiamata la funzione membro [SetExtent](../../mfc/reference/coleclientitem-class.md#setextent) dell'oggetto corrispondente. L'implementazione predefinita imposta il [membro di m_sizeExtent](#m_sizeextent) alla dimensione specificata se *nDrawAspect* è DVASPECT_CONTENT; in caso contrario restituisce 0. Eseguire l'override di questa funzione per eseguire un'elaborazione speciale quando si modificano le dimensioni dell'elemento.

## <a name="coleserveritemonshow"></a><a name="onshow"></a>COleServerItem::OnShow

Chiamato dal framework per indicare all'applicazione server di visualizzare l'elemento OLE sul posto.

```
virtual void OnShow();
```

### <a name="remarks"></a>Osservazioni

Questa funzione viene in genere chiamata quando l'utente dell'applicazione contenitore crea un elemento o esegue un verbo, ad esempio Edit, che richiede la visualizzazione dell'elemento. L'implementazione predefinita tenta l'attivazione sul posto. Se l'operazione non `OnOpen` riesce, la funzione chiama la funzione membro per visualizzare l'elemento OLE in una finestra separata.

Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando viene visualizzato un elemento OLE.

## <a name="coleserveritemonupdate"></a><a name="onupdate"></a>COleServerItem::OnUpdate

Chiamato dal framework quando un elemento è stato modificato.

```
virtual void OnUpdate(
    COleServerItem* pSender,
    LPARAM lHint,
    CObject* pHint,
    DVASPECT nDrawAspect);
```

### <a name="parameters"></a>Parametri

*pSender*<br/>
Puntatore all'elemento che ha modificato il documento. Può essere NULL.

*LSuggerimento*<br/>
Contiene informazioni sulla modifica.

*pHint*<br/>
Puntatore a un oggetto che archivia le informazioni sulla modifica.

*nDrawAspect (inquestoe>*<br/>
Valore dell'enumerazione DVASPECT. Questo parametro può avere uno dei seguenti valori:

- DVASPECT_CONTENT Elemento è rappresentato in modo che possa essere visualizzato come un oggetto incorporato all'interno del relativo contenitore.

- DVASPECT_THUMBNAIL elemento viene eseguito il rendering in una rappresentazione "miniatura" in modo che possa essere visualizzato in uno strumento di esplorazione.

- DVASPECT_ICON elemento è rappresentato da un'icona.

- DVASPECT_DOCPRINT Elemento viene rappresentato come se fosse stampato utilizzando il comando Stampa del menu File.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita chiama [NotifyChanged](#notifychanged), indipendentemente dal suggerimento o dal mittente.

## <a name="coleserveritemonupdateitems"></a><a name="onupdateitems"></a>COleServerItem::OnUpdateItems

Chiamato dal framework per aggiornare tutti gli elementi nel documento server.

```
virtual void OnUpdateItems();
```

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita chiama `COleClientItem` [UpdateLink](../../mfc/reference/coleclientitem-class.md#updatelink) per tutti gli oggetti nel documento.

## <a name="coleserveritemsetitemname"></a><a name="setitemname"></a>COleServerItem::SetItemName

Chiamare questa funzione quando si crea un elemento collegato per impostarne il nome.

```
void SetItemName(LPCTSTR lpszItemName);
```

### <a name="parameters"></a>Parametri

*lpszItemName (nome dall'elemento in stato di inademp*<br/>
Puntatore al nuovo nome dell'elemento.

### <a name="remarks"></a>Osservazioni

Il nome deve essere univoco all'interno del documento. Quando un'applicazione server viene chiamata per modificare un elemento collegato, l'applicazione utilizza questo nome per trovare l'elemento. Non è necessario chiamare questa funzione per gli elementi incorporati.

## <a name="see-also"></a>Vedere anche

[Esempio MFC HIERSVR](../../overview/visual-cpp-samples.md)<br/>
[Classe CDocItem](../../mfc/reference/cdocitem-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)<br/>
[Classe COleServerDoc](../../mfc/reference/coleserverdoc-class.md)<br/>
[Classe COleTemplateServer](../../mfc/reference/coletemplateserver-class.md)

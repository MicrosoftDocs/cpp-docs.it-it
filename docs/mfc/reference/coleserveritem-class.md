---
description: 'Altre informazioni su: classe COleServerItem'
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
ms.openlocfilehash: 30f99e6ee62406b47a493781586d8ed8b11a60b3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226649"
---
# <a name="coleserveritem-class"></a>Classe COleServerItem

Fornisce l'interfaccia server agli elementi OLE.

## <a name="syntax"></a>Sintassi

```
class COleServerItem : public CDocItem
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Description|
|----------|-----------------|
|[COleServerItem:: COleServerItem](#coleserveritem)|Costruisce un oggetto `COleServerItem`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleServerItem:: AddOtherClipboardData](#addotherclipboarddata)|Inserisce i formati di presentazione e conversione in un `COleDataSource` oggetto.|
|[COleServerItem:: CopyToClipboard](#copytoclipboard)|Copia l'elemento negli Appunti.|
|[COleServerItem::D oDragDrop](#dodragdrop)|Esegue un'operazione di trascinamento della selezione.|
|[COleServerItem:: GetClipboardData](#getclipboarddata)|Ottiene l'origine dati da utilizzare per il trasferimento dei dati (trascinamento della selezione o appunti).|
|[COleServerItem:: GetDocument](#getdocument)|Restituisce il documento del server che contiene l'elemento.|
|[COleServerItem:: GetEmbedSourceData](#getembedsourcedata)|Ottiene i dati CF_EMBEDSOURCE per un elemento OLE.|
|[COleServerItem:: GetItemName](#getitemname)|Restituisce il nome dell'elemento. Utilizzato solo per gli elementi collegati.|
|[COleServerItem:: GetLinkSourceData](#getlinksourcedata)|Ottiene i dati CF_LINKSOURCE per un elemento OLE.|
|[COleServerItem:: GetObjectDescriptorData](#getobjectdescriptordata)|Ottiene i dati CF_OBJECTDESCRIPTOR per un elemento OLE.|
|[COleServerItem:: disconnected](#isconnected)|Indica se l'elemento è attualmente collegato a un contenitore attivo.|
|[COleServerItem:: IsLinkedItem](#islinkeditem)|Indica se l'elemento rappresenta un elemento OLE collegato.|
|[COleServerItem:: NotifyChanged](#notifychanged)|Aggiorna tutti i contenitori con aggiornamento automatico dei collegamenti.|
|[COleServerItem:: OnDoVerb](#ondoverb)|Chiamato per eseguire un verbo.|
|[COleServerItem:: onpare](#ondraw)|Chiamato quando il contenitore richiede la traccia dell'elemento; implementazione richiesta.|
|[COleServerItem:: OnDrawEx](#ondrawex)|Chiamato per il disegno di elementi specializzati.|
|[COleServerItem:: OnGetClipboardData](#ongetclipboarddata)|Chiamato dal Framework per ottenere i dati che verrebbero copiati negli Appunti.|
|[COleServerItem:: OnGetExtent](#ongetextent)|Chiamata eseguita dal Framework per recuperare la dimensione dell'elemento OLE.|
|[COleServerItem:: OnInitFromData](#oninitfromdata)|Chiamata eseguita dal Framework per inizializzare un elemento OLE utilizzando il contenuto dell'oggetto di trasferimento dati specificato.|
|[COleServerItem:: OnQueryUpdateItems](#onqueryupdateitems)|Chiamata eseguita per determinare se gli elementi collegati richiedono l'aggiornamento.|
|[COleServerItem:: OnRenderData](#onrenderdata)|Recupera i dati come parte del rendering ritardato.|
|[COleServerItem:: OnRenderFileData](#onrenderfiledata)|Recupera i dati in un `CFile` oggetto come parte del rendering ritardato.|
|[COleServerItem:: OnRenderGlobalData](#onrenderglobaldata)|Recupera i dati in un HGLOBAL come parte del rendering ritardato.|
|[COleServerItem:: OnSetColorScheme](#onsetcolorscheme)|Chiamato per impostare la combinazione di colori dell'elemento.|
|[COleServerItem:: OnSetData](#onsetdata)|Chiamato per impostare i dati dell'elemento.|
|[COleServerItem:: OnSetExtent](#onsetextent)|Chiamata eseguita dal Framework per impostare la dimensione dell'elemento OLE.|
|[COleServerItem:: OnUpdate](#onupdate)|Chiamato quando viene modificata una parte del documento a cui appartiene l'elemento.|
|[COleServerItem:: OnUpdateItems](#onupdateitems)|Chiamato per aggiornare la cache di presentazione di tutti gli elementi nel documento del server.|
|[COleServerItem:: SetItemName](#setitemname)|Imposta il nome dell'elemento. Utilizzato solo per gli elementi collegati.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[COleServerItem:: GetDataSource](#getdatasource)|Ottiene l'oggetto utilizzato per archiviare i formati di conversione.|
|[COleServerItem:: OnHide](#onhide)|Chiamata eseguita dal Framework per nascondere l'elemento OLE.|
|[COleServerItem:: OnOpen](#onopen)|Chiamata eseguita dal Framework per visualizzare l'elemento OLE nella relativa finestra di primo livello.|
|[COleServerItem:: OnShow](#onshow)|Chiamato quando il contenitore richiede di visualizzare l'elemento.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[COleServerItem:: m_sizeExtent](#m_sizeextent)|Informa il server della quantità di elemento OLE visibile.|

## <a name="remarks"></a>Commenti

Un elemento collegato può rappresentare solo alcuni o tutti i documenti server. Un elemento incorporato rappresenta sempre un intero documento del server.

La `COleServerItem` classe definisce diverse funzioni membro sottoponibili a override chiamate dalle librerie di collegamento dinamico (dll) di sistema OLE, in genere in risposta alle richieste provenienti dall'applicazione contenitore. Queste funzioni membro consentono all'applicazione contenitore di manipolare l'elemento indirettamente in diversi modi, ad esempio visualizzandola, eseguendo i relativi verbi o recuperando i dati in vari formati.

Per usare `COleServerItem` , derivare una classe e implementare le funzioni membro [onpare](#ondraw) e [Serialize](../../mfc/reference/cobject-class.md#serialize) . La `OnDraw` funzione fornisce la rappresentazione metafile di un elemento, consentendo la visualizzazione quando un'applicazione contenitore apre un documento composto. La `Serialize` funzione di `CObject` fornisce la rappresentazione nativa di un elemento, consentendo il trasferimento di un elemento incorporato tra le applicazioni server e contenitore. [OnGetExtent](#ongetextent) fornisce la dimensione naturale dell'elemento al contenitore, consentendo al contenitore di ridimensionare l'elemento.

Per ulteriori informazioni sui server e gli argomenti correlati, vedere l'articolo [Server: implementazione di un server](../../mfc/servers-implementing-a-server.md) e creazione di un'applicazione contenitore/server nell'articolo [contenitori: funzionalità avanzate](../../mfc/containers-advanced-features.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocItem](../../mfc/reference/cdocitem-class.md)

`COleServerItem`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

## <a name="coleserveritemaddotherclipboarddata"></a><a name="addotherclipboarddata"></a> COleServerItem:: AddOtherClipboardData

Chiamare questa funzione per inserire i formati di presentazione e conversione per l'elemento OLE nell' `COleDataSource` oggetto specificato.

```cpp
void AddOtherClipboardData(COleDataSource* pDataSource);
```

### <a name="parameters"></a>Parametri

*pDataSource*<br/>
Puntatore all' `COleDataSource` oggetto in cui devono essere inseriti i dati.

### <a name="remarks"></a>Commenti

È necessario avere implementato la funzione membro [Ondisegno](#ondraw) per fornire il formato di presentazione (un'immagine di metafile) per l'elemento. Per supportare altri formati di conversione, registrarli usando l'oggetto [COleDataSource](../../mfc/reference/coledatasource-class.md) restituito da [GetDataSource](#getdatasource) ed eseguire l'override della funzione membro [OnRenderData](#onrenderdata) per fornire i dati nei formati che si desidera supportare.

## <a name="coleserveritemcoleserveritem"></a><a name="coleserveritem"></a> COleServerItem:: COleServerItem

Costruisce un `COleServerItem` oggetto e lo aggiunge alla raccolta di elementi del documento del server.

```
COleServerItem(
    COleServerDoc* pServerDoc,
    BOOL bAutoDelete);
```

### <a name="parameters"></a>Parametri

*pServerDoc*<br/>
Puntatore al documento che conterrà il nuovo elemento.

*bAutoDelete*<br/>
Flag che indica se l'oggetto può essere eliminato quando viene rilasciato un collegamento ad esso. Impostare su FALSE se l' `COleServerItem` oggetto è parte integrante dei dati del documento che è necessario eliminare. Impostare su TRUE se l'oggetto è una struttura secondaria utilizzata per identificare un intervallo nei dati del documento che può essere eliminato dal Framework.

## <a name="coleserveritemcopytoclipboard"></a><a name="copytoclipboard"></a> COleServerItem:: CopyToClipboard

Chiamare questa funzione per copiare l'elemento OLE negli Appunti.

```cpp
void CopyToClipboard(BOOL bIncludeLink = FALSE);
```

### <a name="parameters"></a>Parametri

*bIncludeLink*<br/>
Impostare su TRUE se i dati di collegamento devono essere copiati negli Appunti. Impostare su FALSE se l'applicazione server non supporta i collegamenti.

### <a name="remarks"></a>Commenti

La funzione usa la funzione membro [OnGetClipboardData](#ongetclipboarddata) per creare un oggetto [COleDataSource](../../mfc/reference/coledatasource-class.md) contenente i dati dell'elemento OLE nei formati supportati. La funzione quindi posiziona l' `COleDataSource` oggetto negli appunti usando la funzione [COleDataSource::](../../mfc/reference/coledatasource-class.md#setclipboard) selettore. L' `COleDataSource` oggetto include i dati nativi dell'elemento e la relativa rappresentazione nel formato CF_METAFILEPICT, nonché i dati in qualsiasi formato di conversione che si sceglie di supportare. Per il corretto funzionamento di questa funzione membro è necessario avere implementato [Serialize](../../mfc/reference/cobject-class.md#serialize) e [onpare](#ondraw) .

## <a name="coleserveritemdodragdrop"></a><a name="dodragdrop"></a> COleServerItem::D oDragDrop

Chiamare la `DoDragDrop` funzione membro per eseguire un'operazione di trascinamento della selezione.

```
DROPEFFECT DoDragDrop(
    LPCRECT lpRectItem,
    CPoint ptOffset,
    BOOL bIncludeLink = FALSE,
    DWORD dwEffects = DROPEFFECT_COPY | DROPEFFECT_MOVE,
    LPCRECT lpRectStartDrag = NULL);
```

### <a name="parameters"></a>Parametri

*lpRectItem*<br/>
Rettangolo dell'elemento sullo schermo, in pixel, relativo all'area client.

*ptOffset*<br/>
Offset da *lpItemRect in* in cui si trovava la posizione del mouse al momento del trascinamento.

*bIncludeLink*<br/>
Impostare su TRUE se i dati di collegamento devono essere copiati negli Appunti. Impostarla su FALSE se l'applicazione non supporta i collegamenti.

*dwEffects*<br/>
Determina gli effetti che l'origine di trascinamento consentirà nell'operazione di trascinamento, ovvero una combinazione di copia, spostamento e collegamento.

*lpRectStartDrag*<br/>
Puntatore al rettangolo che definisce la posizione in cui inizia effettivamente il trascinamento. Per ulteriori informazioni, vedere la sezione Osservazioni successiva.

### <a name="return-value"></a>Valore restituito

Valore dell'enumerazione DROPEFFECT. Se è DROPEFFECT_MOVE, i dati originali devono essere rimossi.

### <a name="remarks"></a>Commenti

L'operazione di trascinamento della selezione non viene avviata immediatamente. Attende fino a quando il cursore del mouse lascia il rettangolo specificato da *lpRectStartDrag* o fino a quando non viene superato il numero di millisecondi specificato. Se *lpRectStartDrag* è null, viene utilizzato un rettangolo predefinito in modo che il trascinamento venga avviato quando il cursore del mouse viene spostato di un pixel.

Il tempo di ritardo viene specificato da un'impostazione della chiave del registro di sistema. È possibile modificare l'ora di ritardo chiamando [CWinApp:: WriteProfileString](../../mfc/reference/cwinapp-class.md#writeprofilestring) o [CWinApp:: WriteProfileInt](../../mfc/reference/cwinapp-class.md#writeprofileint). Se non si specifica il tempo di ritardo, viene usato un valore predefinito di 200 millisecondi. Il tempo di trascinamento del ritardo viene archiviato come segue:

- Il tempo di ritardi di trascinamento di Windows NT è archiviato in HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\NT\CurrentVersion\IniFileMapping\win.ini \Windows\DragDelay.

- Il tempo di ritardo del trascinamento di Windows 3. x viene archiviato nel file di WIN.INI, nella sezione [Windows}.

- Il ritardo di trascinamento di Windows 95/98 viene archiviato in una versione memorizzata nella cache di WIN.INI.

Per ulteriori informazioni sul modo in cui le informazioni sul ritardo di trascinamento vengono archiviate nel registro di sistema o. File INI, vedere [WriteProfileString](/windows/win32/api/winbase/nf-winbase-writeprofilestringw) nel Windows SDK.

## <a name="coleserveritemgetclipboarddata"></a><a name="getclipboarddata"></a> COleServerItem:: GetClipboardData

Chiamare questa funzione per riempire l'oggetto [COleDataSource](../../mfc/reference/coledatasource-class.md) specificato con tutti i dati che verrebbero copiati negli Appunti se si chiama [CopyToClipboard](#copytoclipboard) (gli stessi dati verrebbero trasferiti anche se è stato chiamato [DoDragDrop](#dodragdrop)).

```cpp
void GetClipboardData(
    COleDataSource* pDataSource,
    BOOL bIncludeLink = FALSE,
    LPPOINT lpOffset = NULL,
    LPSIZE lpSize = NULL);
```

### <a name="parameters"></a>Parametri

*pDataSource*<br/>
Puntatore all' `COleDataSource` oggetto che riceverà i dati dell'elemento OLE in tutti i formati supportati.

*bIncludeLink*<br/>
TRUE se i dati del collegamento devono essere copiati negli Appunti. FALSE se l'applicazione server non supporta i collegamenti.

*lpOffset*<br/>
Offset, in pixel, del cursore del mouse dall'origine dell'oggetto.

*lpSize*<br/>
Dimensioni dell'oggetto in pixel.

### <a name="remarks"></a>Commenti

Questa funzione chiama la funzione membro [GetEmbedSourceData](#getembedsourcedata) per ottenere i dati nativi per l'elemento OLE e chiama la funzione membro [AddOtherClipboardData](#addotherclipboarddata) per ottenere il formato di presentazione ed eventuali formati di conversione supportati. Se *bIncludeLink* è true, la funzione chiama anche [GetLinkSourceData](#getlinksourcedata) per ottenere i dati del collegamento per l'elemento.

Eseguire l'override di questa funzione se si desidera inserire formati in un `COleDataSource` oggetto prima o dopo quei formati forniti da `CopyToClipboard` .

## <a name="coleserveritemgetdatasource"></a><a name="getdatasource"></a> COleServerItem:: GetDataSource

Chiamare questa funzione per ottenere l'oggetto [COleDataSource](../../mfc/reference/coledatasource-class.md) utilizzato per archiviare i formati di conversione supportati dall'applicazione server.

```
COleDataSource* GetDataSource();
```

### <a name="return-value"></a>Valore restituito

Puntatore all' `COleDataSource` oggetto utilizzato per archiviare i formati di conversione.

### <a name="remarks"></a>Commenti

Se si desidera che l'applicazione server offra dati in una varietà di formati durante le operazioni di trasferimento dei dati, registrare tali formati con l' `COleDataSource` oggetto restituito da questa funzione. Se ad esempio si desidera fornire una rappresentazione CF_TEXT dell'elemento OLE per gli Appunti o le operazioni di trascinamento della selezione, è necessario registrare il formato con l' `COleDataSource` oggetto restituito da questa funzione, quindi eseguire l'override della `OnRenderXxxData` funzione membro per fornire i dati.

## <a name="coleserveritemgetdocument"></a><a name="getdocument"></a> COleServerItem:: GetDocument

Chiamare questa funzione per ottenere un puntatore al documento che contiene l'elemento.

```
COleServerDoc* GetDocument() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al documento che contiene l'elemento; NULL se l'elemento non fa parte di un documento.

### <a name="remarks"></a>Commenti

In questo modo è possibile accedere al documento del server passato come argomento al `COleServerItem` costruttore.

## <a name="coleserveritemgetembedsourcedata"></a><a name="getembedsourcedata"></a> COleServerItem:: GetEmbedSourceData

Chiamare questa funzione per ottenere i dati CF_EMBEDSOURCE per un elemento OLE.

```cpp
void GetEmbedSourceData(LPSTGMEDIUM lpStgMedium);
```

### <a name="parameters"></a>Parametri

*lpStgMedium*<br/>
Puntatore alla struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) che riceverà i dati CF_EMBEDSOURCE per l'elemento OLE.

### <a name="remarks"></a>Commenti

Questo formato include i dati nativi dell'elemento. Per il corretto funzionamento di questa funzione, è necessario avere implementato la `Serialize` funzione membro.

Il risultato può quindi essere aggiunto a un'origine dati tramite [COleDataSource:: CacheData](../../mfc/reference/coledatasource-class.md#cachedata). Questa funzione viene chiamata automaticamente da [COleServerItem:: OnGetClipboardData](#ongetclipboarddata).

Per ulteriori informazioni, vedere [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) nel Windows SDK.

## <a name="coleserveritemgetitemname"></a><a name="getitemname"></a> COleServerItem:: GetItemName

Chiamare questa funzione per ottenere il nome dell'elemento.

```
const CString& GetItemName() const;
```

### <a name="return-value"></a>Valore restituito

Nome dell'elemento.

### <a name="remarks"></a>Commenti

Questa funzione viene in genere chiamata solo per gli elementi collegati.

## <a name="coleserveritemgetlinksourcedata"></a><a name="getlinksourcedata"></a> COleServerItem:: GetLinkSourceData

Chiamare questa funzione per ottenere i dati CF_LINKSOURCE per un elemento OLE.

```
BOOL GetLinkSourceData(LPSTGMEDIUM lpStgMedium);
```

### <a name="parameters"></a>Parametri

*lpStgMedium*<br/>
Puntatore alla struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) che riceverà i dati CF_LINKSOURCE per l'elemento OLE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Questo formato include il CLSID che descrive il tipo dell'elemento OLE e le informazioni necessarie per individuare il documento contenente l'elemento OLE.

Il risultato può quindi essere aggiunto a un'origine dati con [COleDataSource:: CacheData](../../mfc/reference/coledatasource-class.md#cachedata). Questa funzione viene chiamata automaticamente da [OnGetClipboardData](#ongetclipboarddata).

Per ulteriori informazioni, vedere [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) nel Windows SDK.

## <a name="coleserveritemgetobjectdescriptordata"></a><a name="getobjectdescriptordata"></a> COleServerItem:: GetObjectDescriptorData

Chiamare questa funzione per ottenere i dati CF_OBJECTDESCRIPTOR per un elemento OLE.

```cpp
void GetObjectDescriptorData(
    LPPOINT lpOffset,
    LPSIZE lpSize,
    LPSTGMEDIUM lpStgMedium);
```

### <a name="parameters"></a>Parametri

*lpOffset*<br/>
Offset del clic del mouse dall'angolo superiore sinistro dell'elemento OLE. Può essere NULL.

*lpSize*<br/>
Dimensioni dell'elemento OLE. Può essere NULL.

*lpStgMedium*<br/>
Puntatore alla struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) che riceverà i dati CF_OBJECTDESCRIPTOR per l'elemento OLE.

### <a name="remarks"></a>Commenti

Le informazioni vengono copiate nella `STGMEDIUM` struttura a cui punta *lpStgMedium*. Questo formato include le informazioni necessarie per la finestra di dialogo Incolla speciale.

Per ulteriori informazioni, vedere [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) nel Windows SDK.

## <a name="coleserveritemisconnected"></a><a name="isconnected"></a> COleServerItem:: disconnected

Chiamare questa funzione per verificare se l'elemento OLE è connesso.

```
BOOL IsConnected() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è connesso; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Un elemento OLE viene considerato connesso se uno o più contenitori contengono riferimenti all'elemento. Un elemento è connesso se il conteggio dei riferimenti è maggiore di 0 o se è un elemento incorporato.

## <a name="coleserveritemislinkeditem"></a><a name="islinkeditem"></a> COleServerItem:: IsLinkedItem

Chiamare questa funzione per verificare se l'elemento OLE è un elemento collegato.

```
BOOL IsLinkedItem() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è un elemento collegato; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Un elemento viene collegato se l'elemento è valido e non viene restituito nell'elenco di elementi incorporati del documento. Un elemento collegato potrebbe o non essere connesso a un contenitore.

È comune usare la stessa classe per gli elementi collegati e incorporati. `IsLinkedItem` consente di rendere gli elementi collegati comportarsi in modo diverso dagli elementi incorporati, sebbene molte volte il codice sia comune.

## <a name="coleserveritemm_sizeextent"></a><a name="m_sizeextent"></a> COleServerItem:: m_sizeExtent

Questo membro indica al server la quantità dell'oggetto visibile nel documento contenitore.

```
CSize m_sizeExtent;
```

### <a name="remarks"></a>Commenti

Il membro viene impostato dall'implementazione predefinita di [OnSetExtent](#onsetextent) .

## <a name="coleserveritemnotifychanged"></a><a name="notifychanged"></a> COleServerItem:: NotifyChanged

Chiamare questa funzione dopo che l'elemento collegato è stato modificato.

```cpp
void NotifyChanged(DVASPECT nDrawAspect = DVASPECT_CONTENT);
```

### <a name="parameters"></a>Parametri

*nDrawAspect*<br/>
Valore dell'enumerazione DVASPECT che indica quale aspetto dell'elemento OLE è stato modificato. Questo parametro può avere uno dei valori seguenti:

- DVASPECT_CONTENT elemento viene rappresentato in modo tale che possa essere visualizzato come oggetto incorporato all'interno del relativo contenitore.

- Viene eseguito il rendering di DVASPECT_THUMBNAIL elemento in una rappresentazione "thumbnail" in modo che possa essere visualizzato in uno strumento di esplorazione.

- DVASPECT_ICON elemento è rappresentato da un'icona.

- DVASPECT_DOCPRINT elemento viene rappresentato come se fosse stampato usando il comando stampa del menu file.

### <a name="remarks"></a>Commenti

Se un elemento contenitore è collegato al documento con un collegamento automatico, l'elemento viene aggiornato per riflettere le modifiche. Nelle applicazioni contenitore scritte usando il libreria Microsoft Foundation Class, [COleClientItem:: OnChange](../../mfc/reference/coleclientitem-class.md#onchange) viene chiamato in risposta.

## <a name="coleserveritemondoverb"></a><a name="ondoverb"></a> COleServerItem:: OnDoVerb

Chiamato dal Framework per eseguire il verbo specificato.

```
virtual void OnDoVerb(LONG iVerb);
```

### <a name="parameters"></a>Parametri

*iVerb*<br/>
Specifica il verbo da eseguire. Può essere uno dei seguenti:

|Valore|Significato|Simbolo|
|-----------|-------------|------------|
|0|verbo primario|OLEIVERB_PRIMARY|
|1|Verbo secondario|(nessuna)|
|- 1|Elemento visualizzato per la modifica|OLEIVERB_SHOW|
|-2|Modifica elemento in una finestra separata|OLEIVERB_OPEN|
|-3|Nascondi elemento|OLEIVERB_HIDE|

Il valore-1 è in genere un alias per un altro verbo. Se la modifica aperta non è supportata,-2 ha lo stesso effetto di-1. Per ulteriori valori, vedere [IOleObject::D overb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb) nella Windows SDK.

### <a name="remarks"></a>Commenti

Se l'applicazione contenitore è stata scritta con il libreria Microsoft Foundation Class, questa funzione viene chiamata quando viene chiamata la funzione membro [COleClientItem:: Activate](../../mfc/reference/coleclientitem-class.md#activate) dell' `COleClientItem` oggetto corrispondente. L'implementazione predefinita chiama la funzione membro [OnShow](#onshow) se viene specificato il verbo o il OLEIVERB_SHOW principale, [OnOpen](#onopen) se viene specificato il verbo o il OLEIVERB_OPEN secondario e [OnHide](#onhide) se OLEIVERB_HIDE è specificato. L'implementazione predefinita chiama `OnShow` se *iVerb* non è uno dei verbi elencati in precedenza.

Eseguire l'override di questa funzione se il verbo principale non Visualizza l'elemento. Se, ad esempio, l'elemento è una registrazione audio e il verbo principale è Play, non sarà necessario visualizzare l'applicazione server per riprodurre l'elemento.

Per ulteriori informazioni, vedere [IOleObject::D overb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb) nella Windows SDK.

## <a name="coleserveritemondraw"></a><a name="ondraw"></a> COleServerItem:: onpare

Chiamato dal Framework per eseguire il rendering dell'elemento OLE in un metafile.

```
virtual BOOL OnDraw(
    CDC* pDC,
    CSize& rSize) = 0;
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore all'oggetto [CDC](../../mfc/reference/cdc-class.md) sul quale creare l'elemento. Il contesto di visualizzazione viene automaticamente connesso al contesto di visualizzazione dell'attributo, in modo che sia possibile chiamare le funzioni di attributo, anche se in questo modo si rende il Metafile specifico del dispositivo.

*rsize.*<br/>
Dimensioni, in unità HIMETRIC, in cui creare il metafile.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è stato disegnato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

La rappresentazione del metafile dell'elemento OLE viene utilizzata per visualizzare l'elemento nell'applicazione contenitore. Se l'applicazione contenitore è stata scritta con il libreria Microsoft Foundation Class, il metafile viene usato dalla funzione membro di [estrazione](../../mfc/reference/coleclientitem-class.md#draw) dell'oggetto [COleClientItem](../../mfc/reference/coleclientitem-class.md) corrispondente. Non vi è nessuna implementazione predefinita. È necessario eseguire l'override di questa funzione per creare l'elemento nel contesto di dispositivo specificato.

## <a name="coleserveritemondrawex"></a><a name="ondrawex"></a> COleServerItem:: OnDrawEx

Chiamato dal Framework per tutto il disegno.

```
virtual BOOL OnDrawEx(
    CDC* pDC,
    DVASPECT nDrawAspect,
    CSize& rSize);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore all'oggetto [CDC](../../mfc/reference/cdc-class.md) sul quale creare l'elemento. Il controller di dominio viene automaticamente connesso al controller di dominio dell'attributo, in modo da poter chiamare le funzioni di attributo, anche se in questo modo il metafile è specifico del dispositivo.

*nDrawAspect*<br/>
Valore dell'enumerazione DVASPECT. Questo parametro può avere uno dei valori seguenti:

- DVASPECT_CONTENT elemento viene rappresentato in modo tale che possa essere visualizzato come oggetto incorporato all'interno del relativo contenitore.

- Viene eseguito il rendering di DVASPECT_THUMBNAIL elemento in una rappresentazione "thumbnail" in modo che possa essere visualizzato in uno strumento di esplorazione.

- DVASPECT_ICON elemento è rappresentato da un'icona.

- DVASPECT_DOCPRINT elemento viene rappresentato come se fosse stampato usando il comando stampa del menu file.

*rsize.*<br/>
Dimensione dell'elemento in unità HIMETRIC.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è stato disegnato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

L'implementazione predefinita chiama `OnDraw` quando DVASPECT è uguale a DVASPECT_CONTENT; in caso contrario, ha esito negativo.

Eseguire l'override di questa funzione per fornire i dati di presentazione per aspetti diversi da DVASPECT_CONTENT, ad esempio DVASPECT_ICON o DVASPECT_THUMBNAIL.

## <a name="coleserveritemongetclipboarddata"></a><a name="ongetclipboarddata"></a> COleServerItem:: OnGetClipboardData

Chiamata eseguita dal Framework per ottenere un `COleDataSource` oggetto contenente tutti i dati che verrebbero inseriti negli Appunti da una chiamata alla funzione membro [CopyToClipboard](#copytoclipboard) .

```
virtual COleDataSource* OnGetClipboardData(
    BOOL bIncludeLink,
    LPPOINT lpOffset,
    LPSIZE lpSize);
```

### <a name="parameters"></a>Parametri

*bIncludeLink*<br/>
Impostare su TRUE se i dati di collegamento devono essere copiati negli Appunti. Impostare su FALSE se l'applicazione server non supporta i collegamenti.

*lpOffset*<br/>
Offset del cursore del mouse dall'origine dell'oggetto in pixel.

*lpSize*<br/>
Dimensioni dell'oggetto in pixel.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [COleDataSource](../../mfc/reference/coledatasource-class.md) che contiene i dati degli Appunti.

### <a name="remarks"></a>Commenti

L'implementazione predefinita di questa funzione chiama [GetClipboardData](#getclipboarddata).

## <a name="coleserveritemongetextent"></a><a name="ongetextent"></a> COleServerItem:: OnGetExtent

Chiamata eseguita dal Framework per recuperare le dimensioni, in unità HIMETRIC, dell'elemento OLE.

```
virtual BOOL OnGetExtent(
    DVASPECT nDrawAspect,
    CSize& rSize);
```

### <a name="parameters"></a>Parametri

*nDrawAspect*<br/>
Specifica l'aspetto dell'elemento OLE di cui devono essere recuperati i limiti. Questo parametro può avere uno dei valori seguenti:

- DVASPECT_CONTENT elemento viene rappresentato in modo tale che possa essere visualizzato come oggetto incorporato all'interno del relativo contenitore.

- Viene eseguito il rendering di DVASPECT_THUMBNAIL elemento in una rappresentazione "thumbnail" in modo che possa essere visualizzato in uno strumento di esplorazione.

- DVASPECT_ICON elemento è rappresentato da un'icona.

- DVASPECT_DOCPRINT elemento viene rappresentato come se fosse stampato usando il comando stampa del menu file.

*rsize.*<br/>
Riferimento a un `CSize` oggetto che riceverà le dimensioni dell'elemento OLE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Se l'applicazione contenitore è stata scritta con il libreria Microsoft Foundation Class, questa funzione viene chiamata quando viene chiamata la funzione membro [GetExtent](../../mfc/reference/coleclientitem-class.md#getextent) dell' `COleClientItem` oggetto corrispondente. L'implementazione predefinita non esegue alcuna operazione. È necessario implementarlo autonomamente. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando si gestisce una richiesta per la dimensione dell'elemento OLE.

## <a name="coleserveritemonhide"></a><a name="onhide"></a> COleServerItem:: OnHide

Chiamata eseguita dal Framework per nascondere l'elemento OLE.

```
virtual void OnHide();
```

### <a name="remarks"></a>Commenti

Chiamate predefinite `COleServerDoc::OnShowDocument( FALSE )` . La funzione notifica inoltre al contenitore che l'elemento OLE è stato nascosto. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando si nasconde un elemento OLE.

## <a name="coleserveritemoninitfromdata"></a><a name="oninitfromdata"></a> COleServerItem:: OnInitFromData

Chiamata eseguita dal Framework per inizializzare un elemento OLE utilizzando il contenuto di *pDataObject*.

```
virtual BOOL OnInitFromData(
    COleDataObject* pDataObject,
    BOOL bCreation);
```

### <a name="parameters"></a>Parametri

*pDataObject*<br/>
Puntatore a un oggetto dati OLE contenente i dati in vari formati per l'inizializzazione dell'elemento OLE.

*bCreation*<br/>
TRUE se la funzione viene chiamata per inizializzare un elemento OLE appena creato da un'applicazione contenitore. FALSE se la funzione viene chiamata per sostituire il contenuto di un elemento OLE già esistente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Se *bCreation* è true, questa funzione viene chiamata se un contenitore implementa l'inserimento di un nuovo oggetto in base alla selezione corrente. I dati selezionati vengono utilizzati durante la creazione del nuovo elemento OLE. Ad esempio, quando si seleziona un intervallo di celle in un programma di foglio di calcolo e quindi si utilizza l'oggetto Inserisci nuovo per creare un grafico in base ai valori nell'intervallo selezionato. L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione per scegliere un formato accettabile da quelli offerti da *pDataObject* e inizializzare l'elemento OLE in base ai dati forniti. Si tratta di un oggetto avanzato sottoponibile a override.

Per ulteriori informazioni, vedere [IOleObject:: InitFromData](/windows/win32/api/oleidl/nf-oleidl-ioleobject-initfromdata) nel Windows SDK.

## <a name="coleserveritemonopen"></a><a name="onopen"></a> COleServerItem:: OnOpen

Viene chiamato dal Framework per visualizzare l'elemento OLE in un'istanza separata dell'applicazione server, anziché sul posto.

```
virtual void OnOpen();
```

### <a name="remarks"></a>Commenti

L'implementazione predefinita attiva la prima finestra cornice che Visualizza il documento che contiene l'elemento OLE; Se l'applicazione è un mini Server, l'implementazione predefinita Mostra la finestra principale. La funzione notifica inoltre al contenitore che l'elemento OLE è stato aperto.

Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando si apre un elemento OLE. Questo è particolarmente comune con gli elementi collegati in cui si desidera impostare la selezione sul collegamento quando viene aperto.

Per ulteriori informazioni, vedere [IOleClientSite:: OnShowWindow](/windows/win32/api/oleidl/nf-oleidl-ioleclientsite-onshowwindow) nella Windows SDK.

## <a name="coleserveritemonqueryupdateitems"></a><a name="onqueryupdateitems"></a> COleServerItem:: OnQueryUpdateItems

Chiamata eseguita dal Framework per determinare se gli elementi collegati nel documento del server corrente non sono aggiornati.

```
virtual BOOL OnQueryUpdateItems();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il documento contiene elementi che richiedono aggiornamenti; 0 se tutti gli elementi sono aggiornati.

### <a name="remarks"></a>Commenti

Un elemento non è aggiornato se il documento di origine è stato modificato ma l'elemento collegato non è stato aggiornato per riflettere le modifiche apportate al documento.

## <a name="coleserveritemonrenderdata"></a><a name="onrenderdata"></a> COleServerItem:: OnRenderData

Chiamato dal Framework per recuperare i dati nel formato specificato.

```
virtual BOOL OnRenderData(
    LPFORMATETC lpFormatEtc,
    LPSTGMEDIUM lpStgMedium);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc*<br/>
Punta alla struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che specifica il formato in cui vengono richieste le informazioni.

*lpStgMedium*<br/>
Punta a una struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) in cui devono essere restituiti i dati.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Il formato specificato viene inserito in precedenza nell' `COleDataSource` oggetto utilizzando la funzione membro [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderdata) o [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderfiledata) per il rendering ritardato. L'implementazione predefinita di questa funzione chiama [OnRenderFileData](#onrenderfiledata) o [OnRenderGlobalData](#onrenderglobaldata), rispettivamente, se il supporto di archiviazione fornito è un file o una memoria. Se nessuno di questi formati viene specificato, l'implementazione predefinita restituisce 0 e non esegue alcuna operazione.

Se *lpStgMedium* ->  *TYMED* è TYMED_NULL, STGMEDIUM deve essere allocato e compilato come specificato da *lpFormatEtc->TYMED*. Se non TYMED_NULL, il STGMEDIUM deve essere compilato con i dati.

Si tratta di un oggetto avanzato sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato e nel supporto richiesti. A seconda dei dati, potrebbe essere necessario eseguire l'override di una delle altre versioni di questa funzione. Se i dati sono di dimensioni ridotte e di dimensioni fisse, eseguire l'override di `OnRenderGlobalData` . Se i dati sono in un file o sono di dimensioni variabili, eseguire l'override di `OnRenderFileData` .

Per ulteriori informazioni, vedere [IDataObject:: GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata), [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1), [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc)e [TYMED](/windows/win32/api/objidl/ne-objidl-tymed) nel Windows SDK.

## <a name="coleserveritemonrenderfiledata"></a><a name="onrenderfiledata"></a> COleServerItem:: OnRenderFileData

Chiamata eseguita dal Framework per recuperare i dati nel formato specificato quando il supporto di archiviazione è un file.

```
virtual BOOL OnRenderFileData(
    LPFORMATETC lpFormatEtc,
    CFile* pFile);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc*<br/>
Punta alla struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che specifica il formato in cui vengono richieste le informazioni.

*pFile*<br/>
Punta a un `CFile` oggetto in cui deve essere eseguito il rendering dei dati.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Il formato specificato viene inserito in precedenza nell' `COleDataSource` oggetto utilizzando la funzione membro [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderdata) per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce semplicemente FALSE.

Si tratta di un oggetto avanzato sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato e nel supporto richiesti. A seconda dei dati, potrebbe essere necessario eseguire l'override di una delle altre versioni di questa funzione. Se si desidera gestire più supporti di archiviazione, eseguire l'override di [OnRenderData](#onrenderdata). Se i dati sono in un file o sono di dimensioni variabili, eseguire l'override di [OnRenderFileData](#onrenderfiledata).

Per ulteriori informazioni, vedere [IDataObject:: GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata) e [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) nel Windows SDK.

## <a name="coleserveritemonrenderglobaldata"></a><a name="onrenderglobaldata"></a> COleServerItem:: OnRenderGlobalData

Chiamata eseguita dal Framework per recuperare i dati nel formato specificato quando il supporto di archiviazione specificato è memoria globale.

```
virtual BOOL OnRenderGlobalData(
    LPFORMATETC lpFormatEtc,
    HGLOBAL* phGlobal);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc*<br/>
Punta alla struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che specifica il formato in cui vengono richieste le informazioni.

*phGlobal*<br/>
Punta a un handle per la memoria globale in cui devono essere restituiti i dati. Se non è stata allocata alcuna memoria, questo parametro può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Il formato specificato viene inserito in precedenza nell' `COleDataSource` oggetto utilizzando la funzione membro [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderdata) per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce semplicemente FALSE.

Se *phGlobal* è null, è necessario allocare e restituire un nuovo HGLOBAL in *phGlobal*. In caso contrario, il HGLOBAL specificato da *phGlobal* deve essere riempito con i dati. La quantità di dati inseriti in HGLOBAL non deve superare la dimensione corrente del blocco di memoria. Inoltre, il blocco non può essere riallocato a dimensioni maggiori.

Si tratta di un oggetto avanzato sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato e nel supporto richiesti. A seconda dei dati, potrebbe essere necessario eseguire l'override di una delle altre versioni di questa funzione. Se si desidera gestire più supporti di archiviazione, eseguire l'override di [OnRenderData](#onrenderdata). Se i dati sono in un file o sono di dimensioni variabili, eseguire l'override di [OnRenderFileData](#onrenderfiledata).

Per ulteriori informazioni, vedere [IDataObject:: GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata) e [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) nel Windows SDK.

## <a name="coleserveritemonsetcolorscheme"></a><a name="onsetcolorscheme"></a> COleServerItem:: OnSetColorScheme

Chiamato dal Framework per specificare una tavolozza dei colori da utilizzare per la modifica dell'elemento OLE.

```
virtual BOOL OnSetColorScheme(const LOGPALETTE* lpLogPalette);
```

### <a name="parameters"></a>Parametri

*lpLogPalette*<br/>
Puntatore a una struttura [LOGPALETTE](/windows/win32/api/wingdi/ns-wingdi-logpalette) di Windows.

### <a name="return-value"></a>Valore restituito

Diverso da zero se viene utilizzata la tavolozza dei colori; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Se l'applicazione contenitore è stata scritta usando il libreria Microsoft Foundation Class, questa funzione viene chiamata quando viene chiamata la funzione [IOleObject:: SetColorScheme](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setcolorscheme) dell' `COleClientItem` oggetto corrispondente. L'implementazione predefinita restituisce FALSE. Eseguire l'override di questa funzione se si desidera utilizzare la tavolozza consigliata. Non è necessario che l'applicazione server usi la tavolozza consigliata.

Per ulteriori informazioni, vedere [IOleObject:: SetColorScheme](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setcolorscheme) nel Windows SDK.

## <a name="coleserveritemonsetdata"></a><a name="onsetdata"></a> COleServerItem:: OnSetData

Chiamata eseguita dal Framework per sostituire i dati dell'elemento OLE con i dati specificati.

```
virtual BOOL OnSetData(
    LPFORMATETC lpFormatEtc,
    LPSTGMEDIUM lpStgMedium,
    BOOL bRelease);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc*<br/>
Puntatore a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che specifica il formato dei dati.

*lpStgMedium*<br/>
Puntatore a una struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) in cui risiedono i dati.

*bRelease*<br/>
Indica chi ha la proprietà del supporto di archiviazione dopo aver completato la chiamata di funzione. Il chiamante decide chi è responsabile del rilascio delle risorse allocate per conto del supporto di archiviazione. Il chiamante esegue questa operazione impostando *bRelease*. Se *bRelease* è diverso da zero, l'elemento server diventa proprietario, liberando il supporto al termine dell'utilizzo. Quando *bRelease* è 0, il chiamante mantiene la proprietà e l'elemento server può usare il supporto di archiviazione solo per la durata della chiamata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

L'elemento server non assume la proprietà dei dati fino a quando non viene ottenuto correttamente. Ovvero, non assume la proprietà se restituisce 0. Se l'origine dati acquisisce la proprietà, il supporto di archiviazione viene liberato chiamando la funzione [ReleaseStgMedium](/windows/win32/api/ole2/nf-ole2-releasestgmedium) .

L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione per sostituire i dati dell'elemento OLE con i dati specificati. Si tratta di un oggetto avanzato sottoponibile a override.

Per ulteriori informazioni, vedere [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1), [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc)e [ReleaseStgMedium](/windows/win32/api/ole2/nf-ole2-releasestgmedium) nel Windows SDK.

## <a name="coleserveritemonsetextent"></a><a name="onsetextent"></a> COleServerItem:: OnSetExtent

Chiamata eseguita dal Framework per indicare all'elemento OLE la quantità di spazio disponibile nel documento contenitore.

```
virtual BOOL OnSetExtent(
    DVASPECT nDrawAspect,
    const CSize& size);
```

### <a name="parameters"></a>Parametri

*nDrawAspect*<br/>
Specifica l'aspetto dell'elemento OLE i cui limiti vengono specificati. Questo parametro può avere uno dei valori seguenti:

- DVASPECT_CONTENT elemento viene rappresentato in modo tale che possa essere visualizzato come oggetto incorporato all'interno del relativo contenitore.

- Viene eseguito il rendering di DVASPECT_THUMBNAIL elemento in una rappresentazione "thumbnail" in modo che possa essere visualizzato in uno strumento di esplorazione.

- DVASPECT_ICON elemento è rappresentato da un'icona.

- DVASPECT_DOCPRINT elemento viene rappresentato come se fosse stampato usando il comando stampa del menu file.

*size*<br/>
Struttura [CSize](../../atl-mfc-shared/reference/csize-class.md) che specifica la nuova dimensione dell'elemento OLE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Se l'applicazione contenitore è stata scritta con il libreria Microsoft Foundation Class, questa funzione viene chiamata quando viene chiamata la funzione membro di [dismisura](../../mfc/reference/coleclientitem-class.md#setextent) dell' `COleClientItem` oggetto corrispondente. L'implementazione predefinita imposta il membro [m_sizeExtent](#m_sizeextent) sulla dimensione specificata se *nDrawAspect* è DVASPECT_CONTENT; in caso contrario, restituisce 0. Eseguire l'override di questa funzione per eseguire un'elaborazione speciale quando si modificano le dimensioni dell'elemento.

## <a name="coleserveritemonshow"></a><a name="onshow"></a> COleServerItem:: OnShow

Chiamata eseguita dal Framework per indicare all'applicazione server di visualizzare l'elemento OLE sul posto.

```
virtual void OnShow();
```

### <a name="remarks"></a>Commenti

Questa funzione viene in genere chiamata quando l'utente dell'applicazione contenitore crea un elemento o esegue un verbo, ad esempio Edit, che richiede che l'elemento venga visualizzato. L'implementazione predefinita tenta l'attivazione sul posto. Se l'operazione ha esito negativo, la funzione chiama la `OnOpen` funzione membro per visualizzare l'elemento OLE in una finestra separata.

Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando viene visualizzato un elemento OLE.

## <a name="coleserveritemonupdate"></a><a name="onupdate"></a> COleServerItem:: OnUpdate

Chiamata eseguita dal framework quando un elemento è stato modificato.

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

*lHint*<br/>
Contiene informazioni sulla modifica.

*pHint*<br/>
Puntatore a un oggetto che archivia informazioni sulla modifica.

*nDrawAspect*<br/>
Valore dell'enumerazione DVASPECT. Questo parametro può avere uno dei valori seguenti:

- DVASPECT_CONTENT elemento viene rappresentato in modo tale che possa essere visualizzato come oggetto incorporato all'interno del relativo contenitore.

- Viene eseguito il rendering di DVASPECT_THUMBNAIL elemento in una rappresentazione "thumbnail" in modo che possa essere visualizzato in uno strumento di esplorazione.

- DVASPECT_ICON elemento è rappresentato da un'icona.

- DVASPECT_DOCPRINT elemento viene rappresentato come se fosse stampato usando il comando stampa del menu file.

### <a name="remarks"></a>Commenti

L'implementazione predefinita chiama [NotifyChanged](#notifychanged), indipendentemente dall'hint o dal mittente.

## <a name="coleserveritemonupdateitems"></a><a name="onupdateitems"></a> COleServerItem:: OnUpdateItems

Chiamata eseguita dal Framework per aggiornare tutti gli elementi nel documento del server.

```
virtual void OnUpdateItems();
```

### <a name="remarks"></a>Commenti

L'implementazione predefinita chiama [UpdateLink](../../mfc/reference/coleclientitem-class.md#updatelink) per tutti `COleClientItem` gli oggetti nel documento.

## <a name="coleserveritemsetitemname"></a><a name="setitemname"></a> COleServerItem:: SetItemName

Chiamare questa funzione quando si crea un elemento collegato per impostarne il nome.

```cpp
void SetItemName(LPCTSTR lpszItemName);
```

### <a name="parameters"></a>Parametri

*lpszItemName*<br/>
Puntatore al nuovo nome dell'elemento.

### <a name="remarks"></a>Commenti

Il nome deve essere univoco all'interno del documento. Quando viene chiamata un'applicazione server per modificare un elemento collegato, l'applicazione usa questo nome per trovare l'elemento. Non è necessario chiamare questa funzione per gli elementi incorporati.

## <a name="see-also"></a>Vedi anche

[HIERSVR di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CDocItem](../../mfc/reference/cdocitem-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[COleClientItem (classe)](../../mfc/reference/coleclientitem-class.md)<br/>
[Classe COleServerDoc](../../mfc/reference/coleserverdoc-class.md)<br/>
[Classe COleTemplateServer](../../mfc/reference/coletemplateserver-class.md)

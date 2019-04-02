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
ms.openlocfilehash: c4c026975e9884ac2a0e6aaef31e799c2b5b09bf
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58777376"
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
|[COleServerItem::COleServerItem](#coleserveritem)|Costruisce un oggetto `COleServerItem`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleServerItem::AddOtherClipboardData](#addotherclipboarddata)|Inserisce i formati di presentazione e la conversione in un `COleDataSource` oggetto.|
|[COleServerItem::CopyToClipboard](#copytoclipboard)|Copia l'elemento negli Appunti.|
|[COleServerItem::DoDragDrop](#dodragdrop)|Esegue un'operazione di trascinamento e rilascio.|
|[COleServerItem::GetClipboardData](#getclipboarddata)|Ottiene l'origine dati per l'uso nel trasferimento dei dati (operazione di trascinamento o negli Appunti).|
|[COleServerItem::GetDocument](#getdocument)|Restituisce il documento server contenente l'elemento.|
|[COleServerItem::GetEmbedSourceData](#getembedsourcedata)|Ottiene i dati CF_OBJECTDESCRIPTOR per un elemento OLE.|
|[COleServerItem::GetItemName](#getitemname)|Restituisce il nome dell'elemento. Usato per solo gli elementi collegati.|
|[COleServerItem::GetLinkSourceData](#getlinksourcedata)|Ottiene i dati CF_LINKSOURCE per un elemento OLE.|
|[COleServerItem::GetObjectDescriptorData](#getobjectdescriptordata)|Ottiene i dati inseriti per un elemento OLE.|
|[COleServerItem::IsConnected](#isconnected)|Indica se l'elemento è attualmente associato a un contenitore attivo.|
|[COleServerItem::IsLinkedItem](#islinkeditem)|Indica se l'elemento rappresenta un elemento OLE collegato.|
|[COleServerItem::NotifyChanged](#notifychanged)|Aggiorna tutti i contenitori con aggiornamento automatico di collegamento.|
|[COleServerItem::OnDoVerb](#ondoverb)|Chiamato per eseguire un verbo.|
|[COleServerItem::OnDraw](#ondraw)|Chiamato quando il contenitore richiede per disegnare l'elemento; implementazione necessaria.|
|[COleServerItem::OnDrawEx](#ondrawex)|Chiamata eseguita per il disegno elemento specializzato.|
|[COleServerItem::OnGetClipboardData](#ongetclipboarddata)|Chiamato dal framework per ottenere i dati che possono essere copiati negli Appunti.|
|[COleServerItem::OnGetExtent](#ongetextent)|Chiamato dal framework per recuperare la dimensione dell'elemento OLE.|
|[COleServerItem::OnInitFromData](#oninitfromdata)|Chiamata eseguita dal framework per inizializzare un elemento OLE usando il contenuto dell'oggetto di trasferimento dati specificato.|
|[COleServerItem::OnQueryUpdateItems](#onqueryupdateitems)|Chiamato per determinare se eventuali elementi collegati devono essere aggiornati.|
|[COleServerItem::OnRenderData](#onrenderdata)|Recupera i dati come parte del rendering ritardato.|
|[COleServerItem::OnRenderFileData](#onrenderfiledata)|Recupera i dati in un `CFile` oggetto come parte del rendering ritardato.|
|[COleServerItem::OnRenderGlobalData](#onrenderglobaldata)|Recupera i dati in un HGLOBAL come parte del rendering ritardato.|
|[COleServerItem::OnSetColorScheme](#onsetcolorscheme)|Chiamata eseguita per impostare la combinazione di colori dell'elemento.|
|[COleServerItem::OnSetData](#onsetdata)|Chiamata eseguita per impostare i dati dell'elemento.|
|[COleServerItem::OnSetExtent](#onsetextent)|Chiamato dal framework per impostare le dimensioni dell'elemento OLE.|
|[COleServerItem::OnUpdate](#onupdate)|Chiamato quando appartiene a una parte del documento l'elemento viene modificato.|
|[COleServerItem::OnUpdateItems](#onupdateitems)|Chiamato per aggiornare la cache di presentazione di tutti gli elementi nel documento server.|
|[COleServerItem::SetItemName](#setitemname)|Imposta il nome dell'elemento. Usato per solo gli elementi collegati.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[COleServerItem::GetDataSource](#getdatasource)|Ottiene l'oggetto utilizzato per archiviare i formati di conversione.|
|[COleServerItem::OnHide](#onhide)|Chiamato dal framework per nascondere l'elemento OLE.|
|[COleServerItem::OnOpen](#onopen)|Chiamata eseguita dal framework per visualizzare l'elemento OLE in una finestra di primo livello.|
|[COleServerItem::OnShow](#onshow)|Chiamato quando il contenitore richiede di visualizzare l'elemento.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleServerItem::m_sizeExtent](#m_sizeextent)|Indica il server le quantità dell'elemento OLE è visibile.|

## <a name="remarks"></a>Note

Alcune o tutte di un documento del server, può rappresentare un elemento collegato. Un elemento incorporato rappresenta sempre un intero documento server.

Il `COleServerItem` classe definisce diverse funzioni membro sottoponibile a override che vengono chiamate dalle librerie di collegamento dinamico (DLL), system OLE in genere in risposta alle richieste dall'applicazione contenitore. Queste funzioni membro consentono all'applicazione contenitore modificare l'elemento indirettamente in vari modi, ad esempio visualizzarla, eseguire i relativi verbi o recuperando i dati in vari formati.

Per utilizzare `COleServerItem`, una classe derivata da esso e implementare le [OnDraw](#ondraw) e [Serialize](../../mfc/reference/cobject-class.md#serialize) funzioni membro. Il `OnDraw` funzione fornisce la rappresentazione del metafile di un elemento, in modo che possa essere visualizzato quando un'applicazione contenitore viene aperto un documento composito. Il `Serialize` funzione di `CObject` fornisce la rappresentazione nativa di un elemento, che consente un elemento incorporato da trasferire tra le applicazioni server e il contenitore. [OnGetExtent](#ongetextent) fornisce la dimensione standard dell'elemento nel contenitore, l'abilitazione di contenitori ridimensionare l'elemento.

Per altre informazioni sui server e argomenti correlati, vedere l'articolo [server: Implementazione di un Server](../../mfc/servers-implementing-a-server.md) e "Creazione di un'applicazione di contenitore/Server" nell'articolo [contenitori: Funzionalità avanzate](../../mfc/containers-advanced-features.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocItem](../../mfc/reference/cdocitem-class.md)

`COleServerItem`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

##  <a name="addotherclipboarddata"></a>  COleServerItem::AddOtherClipboardData

Chiamare questa funzione per inserire i formati di presentazione e conversione per l'elemento OLE specificato `COleDataSource` oggetto.

```
void AddOtherClipboardData(COleDataSource* pDataSource);
```

### <a name="parameters"></a>Parametri

*pDataSource*<br/>
Puntatore al `COleDataSource` dell'oggetto in cui i dati devono essere inseriti.

### <a name="remarks"></a>Note

Deve avere implementato il [OnDraw](#ondraw) funzione membro per fornire il formato di presentazione (un'immagine del metafile) per l'elemento. Per supportare altri formati di conversione, registrarli usando il [COleDataSource](../../mfc/reference/coledatasource-class.md) oggetto restituito da [GetDataSource](#getdatasource) ed eseguire l'override di [routine OnRenderData](#onrenderdata) funzione membro fornire i dati nei formati di cui che si vuole supportare.

##  <a name="coleserveritem"></a>  COleServerItem::COleServerItem

Costruisce un `COleServerItem` dell'oggetto e lo aggiunge alla raccolta del documento server elementi del documento.

```
COleServerItem(
    COleServerDoc* pServerDoc,
    BOOL bAutoDelete);
```

### <a name="parameters"></a>Parametri

*pServerDoc*<br/>
Puntatore al documento che conterrà il nuovo elemento.

*bAutoDelete*<br/>
Flag che indica se l'oggetto può essere eliminato quando viene rilasciato un collegamento a essa. Impostare questa proprietà su FALSE se il `COleServerItem` oggetto è parte integrante di dati del documento che è necessario eliminare. Impostare questa opzione su TRUE se l'oggetto è una struttura secondaria usata per identificare un intervallo di dati del documento che possono essere eliminati dal framework.

##  <a name="copytoclipboard"></a>  COleServerItem::CopyToClipboard

Chiamare questa funzione per copiare negli Appunti l'elemento OLE.

```
void CopyToClipboard(BOOL bIncludeLink = FALSE);
```

### <a name="parameters"></a>Parametri

*bIncludeLink*<br/>
Impostare questa proprietà su TRUE se i dati di collegamento devono essere copiati negli Appunti. Impostare questa proprietà su FALSE se il server dell'applicazione non supporta i collegamenti.

### <a name="remarks"></a>Note

La funzione Usa il [OnGetClipboardData](#ongetclipboarddata) funzione di membro per creare un [COleDataSource](../../mfc/reference/coledatasource-class.md) oggetto contenente i dati nei formati supportati dell'elemento OLE. La funzione inserisce quindi il `COleDataSource` oggetti negli Appunti utilizzando i [SetClipboard](../../mfc/reference/coledatasource-class.md#setclipboard) (funzione). Il `COleDataSource` oggetto include dati nativi dell'elemento e la relativa rappresentazione in formato CF_EMBEDSOURCE, nonché i dati in qualsiasi formato di conversione si sceglie di supportare. Deve avere implementato [Serialize](../../mfc/reference/cobject-class.md#serialize) e [OnDraw](#ondraw) per questa funzione membro da usare.

##  <a name="dodragdrop"></a>  COleServerItem:: DoDragDrop

Chiamare il `DoDragDrop` funzione membro per eseguire un'operazione di trascinamento e rilascio.

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
L'offset dal *lpItemRect* in cui è stata la posizione del mouse al momento dell'operazione di trascinamento.

*bIncludeLink*<br/>
Impostare questa proprietà su TRUE se i dati di collegamento devono essere copiati negli Appunti. Impostarla su FALSE se l'applicazione non supporta i collegamenti.

*dwEffects*<br/>
Determina gli effetti che verranno consentiti dall'origine di trascinamento nell'operazione di trascinamento (una combinazione di copia, spostamento e collegamento).

*lpRectStartDrag*<br/>
Puntatore al rettangolo che definisce dove viene avviato effettivamente il trascinamento. Per ulteriori informazioni, vedere la sezione Osservazioni successiva.

### <a name="return-value"></a>Valore restituito

Valore ricavato dall'enumerazione DROPEFFECT. Se è DROPEFFECT_MOVE, i dati originali devono essere rimossi.

### <a name="remarks"></a>Note

L'operazione di trascinamento e rilascio non verrà avviato immediatamente. È in attesa fino a quando il cursore del mouse lascia il rettangolo specificato da *lpRectStartDrag* o fino a quando un numero specificato di millisecondi trascorsi. Se *lpRectStartDrag* è NULL, un rettangolo predefinito viene usato in modo che l'operazione di trascinamento viene avviato quando il cursore del mouse si sposta un pixel.

L'intervallo di tempo viene specificato dall'impostazione della chiave del Registro di sistema. È possibile modificare l'intervallo di tempo chiamando [CWinApp::WriteProfileString](../../mfc/reference/cwinapp-class.md#writeprofilestring) oppure [CWinApp:: Writeprofileint](../../mfc/reference/cwinapp-class.md#writeprofileint). Se non si specifica l'intervallo di tempo, viene utilizzato un valore predefinito di 200 millisecondi. Ritarda ora di trascinamento viene archiviato come indicato di seguito:

- Ritarda ora di Windows NT trascinamento viene archiviato in HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\NT\CurrentVersion\IniFileMapping\win.ini\Windows\DragDelay.

- Ritarda ora di Windows 3.x trascinamento viene archiviato nel file WIN. File INI, la sezione [Windows}.

- Ritarda ora di Windows 95 o 98 trascinamento viene archiviato in una versione memorizzata nella cache di WIN. INI.

Per altre informazioni su come trascinare ritardo informazioni vengono archiviate nel Registro di sistema o di. File con estensione INI, vedere [WriteProfileString](/windows/desktop/api/winbase/nf-winbase-writeprofilestringa) nel SDK di Windows.

##  <a name="getclipboarddata"></a>  COleServerItem::GetClipboardData

Chiamare questa funzione per riempire l'oggetto specificato [COleDataSource](../../mfc/reference/coledatasource-class.md) oggetto con tutti i dati che possono essere copiati negli Appunti, se è stato chiamato [CopyToClipboard](#copytoclipboard) (gli stessi dati potrebbero essere trasferiti anche se si chiamato [DoDragDrop](#dodragdrop)).

```
void GetClipboardData(
    COleDataSource* pDataSource,
    BOOL bIncludeLink = FALSE,
    LPPOINT lpOffset = NULL,
    LPSIZE lpSize = NULL);
```

### <a name="parameters"></a>Parametri

*pDataSource*<br/>
Puntatore al `COleDataSource` oggetto che riceverà i dati dell'elemento OLE in tutti i formati supportati.

*bIncludeLink*<br/>
TRUE se i dati di collegamento devono essere copiati negli Appunti. FALSO se l'applicazione server non supporta i collegamenti.

*lpOffset*<br/>
Offset, in pixel, del cursore del mouse rispetto all'origine dell'oggetto.

*lpSize*<br/>
Le dimensioni dell'oggetto in pixel.

### <a name="remarks"></a>Note

Questa funzione chiama il [GetEmbedSourceData](#getembedsourcedata) funzione di membro per ottenere i dati nativi per l'elemento OLE e chiama il [AddOtherClipboardData](#addotherclipboarddata) funzione membro per ottenere il formato di presentazione e qualsiasi conversione formati supportati. Se *bIncludeLink* è TRUE, la funzione anche le chiamate [GetLinkSourceData](#getlinksourcedata) per ottenere i dati di collegamento per l'elemento.

Eseguire l'override di questa funzione se si desidera inserire i formati una `COleDataSource` oggetto prima o dopo i formati forniti da `CopyToClipboard`.

##  <a name="getdatasource"></a>  COleServerItem::GetDataSource

Chiamare questa funzione per ottenere il [COleDataSource](../../mfc/reference/coledatasource-class.md) oggetto usato per archiviare i formati di conversione supportate dall'applicazione server.

```
COleDataSource* GetDataSource();
```

### <a name="return-value"></a>Valore restituito

Un puntatore al `COleDataSource` oggetto usato per archiviare i formati di conversione.

### <a name="remarks"></a>Note

Se si vuole che l'applicazione server offrono un'ampia gamma di formati dati durante il trasferimento dati operazioni, registrare tali formati con la `COleDataSource` oggetto restituito da questa funzione. Ad esempio, se si desidera fornire una rappresentazione CF_TEXT dell'elemento OLE per operazioni di trascinamento e rilascio o negli Appunti, registrare il formato con il `COleDataSource` oggetto questa funzione restituisce e quindi eseguire l'override di `OnRenderXxxData` funzione membro fornire i dati.

##  <a name="getdocument"></a>  COleServerItem::GetDocument

Chiamare questa funzione per ottenere un puntatore al documento che contiene l'elemento.

```
COleServerDoc* GetDocument() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore al documento che contiene l'elemento; NULL se l'elemento non fa parte di un documento.

### <a name="remarks"></a>Note

Ciò consente l'accesso al documento server che è stato passato come argomento per il `COleServerItem` costruttore.

##  <a name="getembedsourcedata"></a>  COleServerItem::GetEmbedSourceData

Chiamare questa funzione per ottenere i dati CF_OBJECTDESCRIPTOR per un elemento OLE.

```
void GetEmbedSourceData(LPSTGMEDIUM lpStgMedium);
```

### <a name="parameters"></a>Parametri

*lpStgMedium*<br/>
Puntatore per il [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium) struttura che riceverà i dati CF_OBJECTDESCRIPTOR per l'elemento OLE.

### <a name="remarks"></a>Note

Questo formato include dati nativi dell'elemento. Deve avere implementato il `Serialize` funzione membro per questa funzione per il corretto funzionamento.

Il risultato può quindi essere aggiunto a un'origine dati mediante [CacheData](../../mfc/reference/coledatasource-class.md#cachedata). Questa funzione viene chiamata automaticamente da [COleServerItem::OnGetClipboardData](#ongetclipboarddata).

Per altre informazioni, vedere [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium) nel SDK di Windows.

##  <a name="getitemname"></a>  COleServerItem::GetItemName

Chiamare questa funzione per ottenere il nome dell'elemento.

```
const CString& GetItemName() const;
```

### <a name="return-value"></a>Valore restituito

Nome dell'elemento.

### <a name="remarks"></a>Note

In genere chiamato questa funzione solo per gli elementi collegati.

##  <a name="getlinksourcedata"></a>  COleServerItem::GetLinkSourceData

Chiamare questa funzione per ottenere i dati CF_LINKSOURCE per un elemento OLE.

```
BOOL GetLinkSourceData(LPSTGMEDIUM lpStgMedium);
```

### <a name="parameters"></a>Parametri

*lpStgMedium*<br/>
Puntatore per il [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium) struttura che riceverà i dati CF_LINKSOURCE per l'elemento OLE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questo formato include il CLSID che descrive il tipo dell'elemento OLE e le informazioni necessarie per individuare il documento contenente l'elemento OLE.

Il risultato può quindi essere aggiunte a un'origine dati con [CacheData](../../mfc/reference/coledatasource-class.md#cachedata). Questa funzione viene chiamata automaticamente da [OnGetClipboardData](#ongetclipboarddata).

Per altre informazioni, vedere [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium) nel SDK di Windows.

##  <a name="getobjectdescriptordata"></a>  COleServerItem::GetObjectDescriptorData

Chiamare questa funzione per ottenere i dati inseriti per un elemento OLE.

```
void GetObjectDescriptorData(
    LPPOINT lpOffset,
    LPSIZE lpSize,
    LPSTGMEDIUM lpStgMedium);
```

### <a name="parameters"></a>Parametri

*lpOffset*<br/>
Offset del clic del mouse nell'angolo in alto a sinistra dell'elemento OLE. Può essere NULL.

*lpSize*<br/>
Dimensione dell'elemento OLE. Può essere NULL.

*lpStgMedium*<br/>
Puntatore per il [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium) struttura che riceverà i dati inseriti per l'elemento OLE.

### <a name="remarks"></a>Note

Le informazioni vengano copiate nel `STGMEDIUM` struttura a cui punta *lpStgMedium*. Questo formato include le informazioni necessarie per la finestra di dialogo Incolla speciale.

Per altre informazioni, vedere [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium) nel SDK di Windows.

##  <a name="isconnected"></a>  COleServerItem::IsConnected

Chiamare questa funzione per verificare se l'elemento OLE è connesso.

```
BOOL IsConnected() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se è connesso l'elemento; in caso contrario 0.

### <a name="remarks"></a>Note

Un elemento OLE viene considerato una connessione attiva se uno o più contenitori contengano riferimenti all'elemento. Se il conteggio dei riferimenti è maggiore di 0 o se è un elemento incorporato, un elemento è connesso.

##  <a name="islinkeditem"></a>  COleServerItem::IsLinkedItem

Chiamare questa funzione per verificare se l'elemento OLE è un elemento collegato.

```
BOOL IsLinkedItem() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è un elemento collegato; in caso contrario 0.

### <a name="remarks"></a>Note

Se l'elemento è valido e non viene restituito nell'elenco del documento di elementi incorporati è collegato un elemento. Un elemento collegato potrebbe o potrebbe non essere connesso a un contenitore.

Accade spesso di usare la stessa classe per gli elementi incorporati sia collegati. `IsLinkedItem` Consente di verificare gli elementi collegati si comportano in modo diverso rispetto agli elementi incorporati, anche se molte volte il codice è comune.

##  <a name="m_sizeextent"></a>  COleServerItem::m_sizeExtent

Questo membro indica al server la quantità dell'oggetto è visibile nel documento contenitore.

```
CSize m_sizeExtent;
```

### <a name="remarks"></a>Note

L'implementazione predefinita di [OnSetExtent](#onsetextent) imposta questo membro.

##  <a name="notifychanged"></a>  COleServerItem::NotifyChanged

Chiamare questa funzione dopo che l'elemento collegato è stato modificato.

```
void NotifyChanged(DVASPECT nDrawAspect = DVASPECT_CONTENT);
```

### <a name="parameters"></a>Parametri

*nDrawAspect*<br/>
Un valore ricavato dall'enumerazione DVASPECT che indica quale aspetto dell'elemento OLE è stato modificato. Questo parametro può avere uno dei valori seguenti:

- Elemento DVASPECT_CONTENT è rappresentato in modo tale che possono essere visualizzato come un oggetto incorporato all'interno del relativo contenitore.

- DVASPECT_THUMBNAIL rendering viene eseguito in una rappresentazione di "anteprima" in modo che possa essere visualizzata in uno strumento di esplorazione.

- Elemento DVASPECT_ICON è rappresentato da un'icona.

- Elemento DVASPECT_DOCPRINT viene rappresentata come se fosse stampato utilizzando il comando Stampa dal menu File.

### <a name="remarks"></a>Note

Se un elemento contenitore è collegato al documento con un collegamento automatico, l'elemento viene aggiornato per riflettere le modifiche. Nelle applicazioni contenitore scritte usando la libreria Microsoft Foundation Class [COleClientItem:: OnChange](../../mfc/reference/coleclientitem-class.md#onchange) viene chiamato in risposta.

##  <a name="ondoverb"></a>  COleServerItem::OnDoVerb

Chiamato dal framework per eseguire il verbo specificato.

```
virtual void OnDoVerb(LONG iVerb);
```

### <a name="parameters"></a>Parametri

*iVerb*<br/>
Specifica il verbo da eseguire. Può essere uno dei seguenti:

|Value|Significato|Simbolo|
|-----------|-------------|------------|
|0|verbo primario|OLEIVERB_PRIMARY|
|1|Verbo secondario|(Nessuno)|
|- 1|Elemento visualizzato per la modifica|OLEIVERB_SHOW|
|- 2|Modifica elemento nella finestra separata|OLEIVERB_OPEN|
|- 3|Nascondere elementi|OLEIVERB_HIDE|

Il valore-1 è in genere un alias per un altro verbo. Se Apri modifica non è supportata, -2 ha lo stesso effetto di -1. Per i valori aggiuntivi, vedere [IOleObject:: DoVerb](/windows/desktop/api/oleidl/nf-oleidl-ioleobject-doverb) nel SDK di Windows.

### <a name="remarks"></a>Note

Se l'applicazione del contenitore è stato scritto con la libreria Microsoft Foundation Class, questa funzione viene chiamata quando il [COleClientItem::Activate](../../mfc/reference/coleclientitem-class.md#activate) funzione di membro del corrispondente `COleClientItem` viene chiamato l'oggetto. L'implementazione predefinita chiama il [OnShow](#onshow) funzione di membro se viene specificato il verbo primario o OLEIVERB_SHOW, [OnOpen](#onopen) se il verbo secondario o OLEIVERB_OPEN è specificato, e [OnHide ](#onhide) se OLEIVERB_HIDE è specificato. L'implementazione predefinita chiama `OnShow` se *iVerb* non è uno dei verbi elencati in precedenza.

Eseguire l'override di questa funzione se il verbo primario non viene visualizzato l'elemento. Ad esempio, se l'elemento è una registrazione audio e il verbo primario è Play, non dovrà visualizzare l'applicazione server per riprodurre l'elemento.

Per altre informazioni, vedere [IOleObject:: DoVerb](/windows/desktop/api/oleidl/nf-oleidl-ioleobject-doverb) nel SDK di Windows.

##  <a name="ondraw"></a>  COleServerItem:: OnDraw

Chiamato dal framework per eseguire il rendering dell'elemento OLE in un metafile.

```
virtual BOOL OnDraw(
    CDC* pDC,
    CSize& rSize) = 0;
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Un puntatore per il [CDC](../../mfc/reference/cdc-class.md) oggetto su cui disegnare l'elemento. Contesto di visualizzazione viene connesso automaticamente al contesto di visualizzazione dell'attributo in modo che è possibile chiamare funzioni di attributo, anche se potrebbe rendere il metafile specifici del dispositivo.

*rSize*<br/>
Dimensione in unità HIMETRIC, in cui disegnare metafile.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è stato creato correttamente l'elemento; in caso contrario 0.

### <a name="remarks"></a>Note

La rappresentazione del metafile dell'elemento OLE viene utilizzata per visualizzare l'elemento in un'applicazione contenitore. Se l'applicazione del contenitore è stato scritto con la libreria Microsoft Foundation Class, metafile viene usato per il [disegnare](../../mfc/reference/coleclientitem-class.md#draw) funzione di membro del corrispondente [COleClientItem](../../mfc/reference/coleclientitem-class.md) oggetto. Non vi è nessuna implementazione predefinita. È necessario eseguire l'override di questa funzione per disegnare l'elemento nel contesto di dispositivo specificato.

##  <a name="ondrawex"></a>  COleServerItem::OnDrawEx

Chiamato dal framework per tutti i disegni.

```
virtual BOOL OnDrawEx(
    CDC* pDC,
    DVASPECT nDrawAspect,
    CSize& rSize);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Un puntatore per il [CDC](../../mfc/reference/cdc-class.md) oggetto su cui disegnare l'elemento. Il controller di dominio viene connesso automaticamente al controller di dominio dell'attributo in modo che è possibile chiamare funzioni di attributo, anche se potrebbe rendere il metafile specifici del dispositivo.

*nDrawAspect*<br/>
Valore ricavato dall'enumerazione DVASPECT. Questo parametro può avere uno dei valori seguenti:

- Elemento DVASPECT_CONTENT è rappresentato in modo tale che possono essere visualizzato come un oggetto incorporato all'interno del relativo contenitore.

- DVASPECT_THUMBNAIL rendering viene eseguito in una rappresentazione di "anteprima" in modo che possa essere visualizzata in uno strumento di esplorazione.

- Elemento DVASPECT_ICON è rappresentato da un'icona.

- Elemento DVASPECT_DOCPRINT viene rappresentata come se fosse stampato utilizzando il comando Stampa dal menu File.

*rSize*<br/>
Dimensione dell'elemento in unità HIMETRIC.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è stato creato correttamente l'elemento; in caso contrario 0.

### <a name="remarks"></a>Note

L'implementazione predefinita chiama `OnDraw` quando DVASPECT è uguale a DVASPECT_CONTENT; in caso contrario, si verifica un errore.

Eseguire l'override di questa funzione per fornire i dati di presentazione per gli aspetti diversi da DVASPECT_CONTENT, ad esempio DVASPECT_ICON o DVASPECT_THUMBNAIL.

##  <a name="ongetclipboarddata"></a>  COleServerItem::OnGetClipboardData

Chiamato dal framework per ottenere un `COleDataSource` oggetto che contiene tutti i dati verranno inseriti negli Appunti da una chiamata per il [CopyToClipboard](#copytoclipboard) funzione membro.

```
virtual COleDataSource* OnGetClipboardData(
    BOOL bIncludeLink,
    LPPOINT lpOffset,
    LPSIZE lpSize);
```

### <a name="parameters"></a>Parametri

*bIncludeLink*<br/>
Impostare questa proprietà su TRUE se i dati di collegamento devono essere copiati negli Appunti. Impostare questa proprietà su FALSE se il server dell'applicazione non supporta i collegamenti.

*lpOffset*<br/>
L'offset del cursore del mouse rispetto all'origine dell'oggetto in pixel.

*lpSize*<br/>
Le dimensioni dell'oggetto in pixel.

### <a name="return-value"></a>Valore restituito

Un puntatore a un [COleDataSource](../../mfc/reference/coledatasource-class.md) oggetto che contiene i dati negli Appunti.

### <a name="remarks"></a>Note

L'implementazione predefinita di questa funzione chiama [GetClipboardData](#getclipboarddata).

##  <a name="ongetextent"></a>  COleServerItem::OnGetExtent

Chiamata eseguita dal framework per recuperare le dimensioni, in unità HIMETRIC dell'elemento OLE.

```
virtual BOOL OnGetExtent(
    DVASPECT nDrawAspect,
    CSize& rSize);
```

### <a name="parameters"></a>Parametri

*nDrawAspect*<br/>
Specifica l'aspetto dell'elemento OLE cui limiti devono essere recuperate. Questo parametro può avere uno dei valori seguenti:

- Elemento DVASPECT_CONTENT è rappresentato in modo tale che possono essere visualizzato come un oggetto incorporato all'interno del relativo contenitore.

- DVASPECT_THUMBNAIL rendering viene eseguito in una rappresentazione di "anteprima" in modo che possa essere visualizzata in uno strumento di esplorazione.

- Elemento DVASPECT_ICON è rappresentato da un'icona.

- Elemento DVASPECT_DOCPRINT viene rappresentata come se fosse stampato utilizzando il comando Stampa dal menu File.

*rSize*<br/>
Fare riferimento a un `CSize` oggetto che riceverà le dimensioni dell'elemento OLE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Se l'applicazione del contenitore è stato scritto con la libreria Microsoft Foundation Class, questa funzione viene chiamata quando il [GetExtent](../../mfc/reference/coleclientitem-class.md#getextent) funzione di membro del corrispondente `COleClientItem` viene chiamato l'oggetto. L'implementazione predefinita non esegue alcuna operazione. È necessario implementarla se stessi. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando si gestisce una richiesta per le dimensioni dell'elemento OLE.

##  <a name="onhide"></a>  COleServerItem::OnHide

Chiamato dal framework per nascondere l'elemento OLE.

```
virtual void OnHide();
```

### <a name="remarks"></a>Note

Le chiamate predefinita `COleServerDoc::OnShowDocument( FALSE )`. La funzione invii una notifica anche il contenitore che l'elemento OLE è stata nascosta. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando si nasconde un elemento OLE.

##  <a name="oninitfromdata"></a>  COleServerItem::OnInitFromData

Chiamato dal framework per inizializzare un elemento OLE usando il contenuto del *pDataObject*.

```
virtual BOOL OnInitFromData(
    COleDataObject* pDataObject,
    BOOL bCreation);
```

### <a name="parameters"></a>Parametri

*pDataObject*<br/>
Puntatore a un oggetto data OLE che contiene i dati in vari formati per l'inizializzazione dell'elemento OLE.

*bCreation*<br/>
TRUE se la funzione viene chiamata per inizializzare un elemento OLE appena vengono creato da un'applicazione contenitore. FALSE se la funzione viene chiamata per sostituire il contenuto di un elemento OLE già esistente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Se *bCreation* è TRUE, questa funzione viene chiamata se un contenitore implementa Inserisci nuovo oggetto basato sulla selezione corrente. I dati selezionati vengono usati quando si crea il nuovo elemento OLE. Ad esempio, quando la selezione di un intervallo di celle in un foglio di calcolo e quindi usare il nuovo oggetto Insert per creare un grafico in base ai valori nell'intervallo selezionato. L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione per scegliere quella offerta da un formato accettabile *pDataObject* e inizializzare l'elemento OLE in base ai dati forniti. Si tratta di un'avanzata sottoponibile a override.

Per altre informazioni, vedere [IOleObject:: InitFromData](/windows/desktop/api/oleidl/nf-oleidl-ioleobject-initfromdata) nel SDK di Windows.

##  <a name="onopen"></a>  COleServerItem::OnOpen

Chiamata eseguita dal framework per visualizzare l'elemento OLE in un'istanza separata dell'applicazione server, anziché in posizione.

```
virtual void OnOpen();
```

### <a name="remarks"></a>Note

L'implementazione predefinita attiva la prima finestra cornice Visualizza il documento che contiene l'elemento OLE; Se l'applicazione è un server ridotto, l'implementazione predefinita mostra la finestra principale. La funzione invii una notifica anche il contenitore che l'elemento OLE è stato aperto.

Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando si apre un elemento OLE. Questo è particolarmente comune con gli elementi collegati in cui si desidera impostare l'opzione per il collegamento quando viene aperto.

Per altre informazioni, vedere [IOleClientSite::OnShowWindow](/windows/desktop/api/oleidl/nf-oleidl-ioleclientsite-onshowwindow) nel SDK di Windows.

##  <a name="onqueryupdateitems"></a>  COleServerItem::OnQueryUpdateItems

Chiamato dal framework per determinare se eventuali elementi collegati nel documento server corrente non sono aggiornati.

```
virtual BOOL OnQueryUpdateItems();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il documento presenta gli elementi che gli aggiornamenti. 0 se tutti gli elementi sono aggiornati.

### <a name="remarks"></a>Note

Un elemento non è aggiornato se il documento di origine è stato modificato, ma l'elemento collegato non è stato aggiornato per riflettere le modifiche nel documento.

##  <a name="onrenderdata"></a>  COleServerItem::OnRenderData

Chiamato dal framework per recuperare i dati nel formato specificato.

```
virtual BOOL OnRenderData(
    LPFORMATETC lpFormatEtc,
    LPSTGMEDIUM lpStgMedium);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc*<br/>
Punta al [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura che specifica il formato in cui vengono richieste informazioni.

*lpStgMedium*<br/>
Punta a un [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium) struttura in cui i dati sono da restituire.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il formato specificato è uno precedentemente spostata nel `COleDataSource` utilizzando il [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderdata) o [DelayRenderFileData](../../mfc/reference/coledatasource-class.md#delayrenderfiledata) funzione membro per il rendering ritardato. L'implementazione predefinita di questa funzione chiama [OnRenderFileData](#onrenderfiledata) oppure [OnRenderGlobalData](#onrenderglobaldata), rispettivamente, se il supporto di archiviazione fornito è un file o della memoria. Se nessuno di questi formati viene fornito, l'implementazione predefinita restituisce 0 e non esegue alcuna operazione.

Se *lpStgMedium*-> *tymed* TYMED_NULL, è il STGMEDIUM deve allocato e compilato come specificato da *lpFormatEtc -> tymed*. In caso contrario TYMED_NULL, il STGMEDIUM devono essere compilate con i dati.

Si tratta di un'avanzata sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato richiesto delle medie. A seconda dei dati, è possibile eseguire l'override in una delle altre versioni di questa funzione invece. Se i dati sono piccole e ha dimensione fissa, eseguire l'override `OnRenderGlobalData`. Se i dati in un file o sono di dimensioni variabili, eseguire l'override `OnRenderFileData`.

Per altre informazioni, vedere [IDataObject:: GetData](/windows/desktop/api/objidl/nf-objidl-idataobject-getdata), [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium), [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc), e [TYMED](/windows/desktop/api/objidl/ne-objidl-tagtymed) nel SDK di Windows.

##  <a name="onrenderfiledata"></a>  COleServerItem::OnRenderFileData

Chiamato dal framework per recuperare i dati nel formato specificato quando il supporto di archiviazione è un file.

```
virtual BOOL OnRenderFileData(
    LPFORMATETC lpFormatEtc,
    CFile* pFile);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc*<br/>
Punta al [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura che specifica il formato in cui vengono richieste informazioni.

*pFile*<br/>
Punta a un `CFile` oggetto in cui i dati da sottoporre a rendering.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il formato specificato è uno precedentemente spostata nel `COleDataSource` utilizzando il [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderdata) funzione membro per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce FALSE.

Si tratta di un'avanzata sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato richiesto delle medie. A seconda dei dati, si potrebbe voler eseguire l'override in una delle altre versioni di questa funzione invece. Se si desidera gestire più supporti di archiviazione, eseguire l'override [routine OnRenderData](#onrenderdata). Se i dati in un file o sono di dimensioni variabili, eseguire l'override [OnRenderFileData](#onrenderfiledata).

Per altre informazioni, vedere [IDataObject:: GetData](/windows/desktop/api/objidl/nf-objidl-idataobject-getdata) e [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) nel SDK di Windows.

##  <a name="onrenderglobaldata"></a>  COleServerItem::OnRenderGlobalData

Chiamato dal framework per recuperare i dati nel formato specificato quando il supporto di archiviazione specificato è la memoria globale.

```
virtual BOOL OnRenderGlobalData(
    LPFORMATETC lpFormatEtc,
    HGLOBAL* phGlobal);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc*<br/>
Punta al [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura che specifica il formato in cui vengono richieste informazioni.

*phGlobal*<br/>
Punta a un handle per la memoria globale in cui i dati sono da restituire. Se non è stata allocata alcuna memoria, questo parametro può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il formato specificato è uno precedentemente spostata nel `COleDataSource` utilizzando il [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderdata) funzione membro per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce FALSE.

Se *phGlobal* è NULL, un nuovo HGLOBAL deve essere allocato e restituito nella *phGlobal*. In caso contrario, il HGLOBAL specificato da *phGlobal* deve essere riempito con i dati. La quantità di dati inseriti nel HGLOBAL non deve superare la dimensione corrente del blocco di memoria. Inoltre, il blocco non può essere riallocato a una dimensione maggiore.

Si tratta di un'avanzata sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato richiesto delle medie. A seconda dei dati, è possibile eseguire l'override in una delle altre versioni di questa funzione invece. Se si desidera gestire più supporti di archiviazione, eseguire l'override [routine OnRenderData](#onrenderdata). Se i dati in un file o sono di dimensioni variabili, eseguire l'override [OnRenderFileData](#onrenderfiledata).

Per altre informazioni, vedere [IDataObject:: GetData](/windows/desktop/api/objidl/nf-objidl-idataobject-getdata) e [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) nel SDK di Windows.

##  <a name="onsetcolorscheme"></a>  COleServerItem::OnSetColorScheme

Chiamato dal framework per specificare una tavolozza dei colori da utilizzare quando si modifica l'elemento OLE.

```
virtual BOOL OnSetColorScheme(const LOGPALETTE* lpLogPalette);
```

### <a name="parameters"></a>Parametri

*lpLogPalette*<br/>
Puntatore a un Windows [LOGPALETTE](/windows/desktop/api/wingdi/ns-wingdi-taglogpalette) struttura.

### <a name="return-value"></a>Valore restituito

Diverso da zero se viene utilizzata la tavolozza dei colori. in caso contrario 0.

### <a name="remarks"></a>Note

Se l'applicazione contenitore è stata scritta usando la libreria Microsoft Foundation Class, questa funzione viene chiamata quando il [IOleObject::SetColorScheme](/windows/desktop/api/oleidl/nf-oleidl-ioleobject-setcolorscheme) funzione corrispondente `COleClientItem` viene chiamato l'oggetto. L'implementazione predefinita restituisce FALSE. Eseguire l'override di questa funzione se si desidera utilizzare la tavolozza consigliata. Non è necessario che l'applicazione server utilizza la tavolozza suggerita.

Per altre informazioni, vedere [IOleObject::SetColorScheme](/windows/desktop/api/oleidl/nf-oleidl-ioleobject-setcolorscheme) nel SDK di Windows.

##  <a name="onsetdata"></a>  COleServerItem::OnSetData

Chiamato dal framework per sostituire i dati dell'elemento OLE con i dati specificati.

```
virtual BOOL OnSetData(
    LPFORMATETC lpFormatEtc,
    LPSTGMEDIUM lpStgMedium,
    BOOL bRelease);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc*<br/>
Puntatore a un [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura che specifica il formato dei dati.

*lpStgMedium*<br/>
Puntatore a un [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium) struttura in cui si trovano i dati.

*bRelease*<br/>
Indica chi ha la proprietà del supporto di archiviazione dopo il completamento della chiamata di funzione. Il chiamante decide chi è responsabile del rilascio delle risorse allocate per conto del supporto di archiviazione. Il chiamante esegue questa operazione impostando *bRelease*. Se *bRelease* è diverso da zero, l'elemento server acquisisce la proprietà, il rilascio del supporto quando ha finito di usarlo. Quando *bRelease* è 0, il chiamante mantiene la proprietà e l'elemento server può usare il supporto di archiviazione solo per la durata della chiamata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

L'elemento server non accetta la proprietà dei dati fino a quando non lo ha ha ottenuto. Vale a dire, non viene preso la proprietà se viene restituito 0. Se l'origine dei dati acquisisce la proprietà, consente di liberare il supporto di archiviazione chiamando il [ReleaseStgMedium](/windows/desktop/api/ole2/nf-ole2-releasestgmedium) (funzione).

L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione per sostituire i dati dell'elemento OLE con i dati specificati. Si tratta di un'avanzata sottoponibile a override.

Per altre informazioni, vedere [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium), [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc), e [ReleaseStgMedium](/windows/desktop/api/ole2/nf-ole2-releasestgmedium) nel SDK di Windows.

##  <a name="onsetextent"></a>  COleServerItem::OnSetExtent

Chiamato dal framework per indicare l'elemento OLE quantità di spazio sono disponibili nel documento contenitore.

```
virtual BOOL OnSetExtent(
    DVASPECT nDrawAspect,
    const CSize& size);
```

### <a name="parameters"></a>Parametri

*nDrawAspect*<br/>
Specifica l'aspetto dell'elemento OLE cui limiti vengono specificati. Questo parametro può avere uno dei valori seguenti:

- Elemento DVASPECT_CONTENT è rappresentato in modo tale che possono essere visualizzato come un oggetto incorporato all'interno del relativo contenitore.

- DVASPECT_THUMBNAIL rendering viene eseguito in una rappresentazione di "anteprima" in modo che possa essere visualizzata in uno strumento di esplorazione.

- Elemento DVASPECT_ICON è rappresentato da un'icona.

- Elemento DVASPECT_DOCPRINT viene rappresentata come se fosse stampato utilizzando il comando Stampa dal menu File.

*size*<br/>
Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) struttura specificando la nuova dimensione dell'elemento OLE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Se l'applicazione del contenitore è stato scritto con la libreria Microsoft Foundation Class, questa funzione viene chiamata quando il [SetExtent](../../mfc/reference/coleclientitem-class.md#setextent) funzione di membro del corrispondente `COleClientItem` viene chiamato l'oggetto. L'implementazione predefinita imposta il [m_sizeExtent](#m_sizeextent) membro alle dimensioni specificate se *nDrawAspect* è DVASPECT_CONTENT; in caso contrario, restituisce 0. Eseguire l'override di questa funzione per eseguire un'elaborazione speciale quando si modificano le dimensioni dell'elemento.

##  <a name="onshow"></a>  COleServerItem::OnShow

Chiamato dal framework per indicare all'applicazione server per visualizzare l'elemento OLE in posizione.

```
virtual void OnShow();
```

### <a name="remarks"></a>Note

Questa funzione viene in genere chiamata quando l'utente dell'applicazione contenitore crea un elemento o esegue un verbo, quali la modifica, che richiede che l'elemento da visualizzare. L'implementazione predefinita tenta l'attivazione sul posto. Se l'operazione non riesce, la funzione chiama la `OnOpen` funzione membro per visualizzare l'elemento OLE in una finestra separata.

Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando viene visualizzato un elemento OLE.

##  <a name="onupdate"></a>  COleServerItem::OnUpdate

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
Puntatore all'elemento che il documento modificato. Può essere NULL.

*lHint*<br/>
Contiene informazioni sulla modifica.

*pHint*<br/>
Puntatore a un oggetto di archiviazione delle informazioni sulla modifica.

*nDrawAspect*<br/>
Valore ricavato dall'enumerazione DVASPECT. Questo parametro può avere uno dei valori seguenti:

- Elemento DVASPECT_CONTENT è rappresentato in modo tale che possono essere visualizzato come un oggetto incorporato all'interno del relativo contenitore.

- DVASPECT_THUMBNAIL rendering viene eseguito in una rappresentazione di "anteprima" in modo che possa essere visualizzata in uno strumento di esplorazione.

- Elemento DVASPECT_ICON è rappresentato da un'icona.

- Elemento DVASPECT_DOCPRINT viene rappresentata come se fosse stampato utilizzando il comando Stampa dal menu File.

### <a name="remarks"></a>Note

L'implementazione predefinita chiama [NotifyChanged](#notifychanged), indipendentemente dall'hint o mittente.

##  <a name="onupdateitems"></a>  COleServerItem::OnUpdateItems

Chiamato dal framework per aggiornare tutti gli elementi nel documento server.

```
virtual void OnUpdateItems();
```

### <a name="remarks"></a>Note

L'implementazione predefinita chiama [UpdateLink](../../mfc/reference/coleclientitem-class.md#updatelink) per tutti i `COleClientItem` gli oggetti del documento.

##  <a name="setitemname"></a>  COleServerItem::SetItemName

Chiamare questa funzione quando si crea un elemento collegato per impostare il relativo nome.

```
void SetItemName(LPCTSTR lpszItemName);
```

### <a name="parameters"></a>Parametri

*lpszItemName*<br/>
Puntatore al nuovo nome dell'elemento.

### <a name="remarks"></a>Note

Il nome deve essere univoco all'interno del documento. Quando un'applicazione server viene chiamata per modificare un elemento collegato, l'applicazione usa il nome specificato per trovare l'elemento. Non è necessario chiamare questa funzione per gli elementi incorporati.

## <a name="see-also"></a>Vedere anche

[Esempio MFC HIERSVR](../../overview/visual-cpp-samples.md)<br/>
[Classe CDocItem](../../mfc/reference/cdocitem-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)<br/>
[Classe COleServerDoc](../../mfc/reference/coleserverdoc-class.md)<br/>
[Classe COleTemplateServer](../../mfc/reference/coletemplateserver-class.md)

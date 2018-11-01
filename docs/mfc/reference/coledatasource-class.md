---
title: Classe COleDataSource
ms.date: 11/04/2016
f1_keywords:
- COleDataSource
- AFXOLE/COleDataSource
- AFXOLE/COleDataSource::COleDataSource
- AFXOLE/COleDataSource::CacheData
- AFXOLE/COleDataSource::CacheGlobalData
- AFXOLE/COleDataSource::DelayRenderData
- AFXOLE/COleDataSource::DelayRenderFileData
- AFXOLE/COleDataSource::DelaySetData
- AFXOLE/COleDataSource::DoDragDrop
- AFXOLE/COleDataSource::Empty
- AFXOLE/COleDataSource::FlushClipboard
- AFXOLE/COleDataSource::GetClipboardOwner
- AFXOLE/COleDataSource::OnRenderData
- AFXOLE/COleDataSource::OnRenderFileData
- AFXOLE/COleDataSource::OnRenderGlobalData
- AFXOLE/COleDataSource::OnSetData
- AFXOLE/COleDataSource::SetClipboard
helpviewer_keywords:
- COleDataSource [MFC], COleDataSource
- COleDataSource [MFC], CacheData
- COleDataSource [MFC], CacheGlobalData
- COleDataSource [MFC], DelayRenderData
- COleDataSource [MFC], DelayRenderFileData
- COleDataSource [MFC], DelaySetData
- COleDataSource [MFC], DoDragDrop
- COleDataSource [MFC], Empty
- COleDataSource [MFC], FlushClipboard
- COleDataSource [MFC], GetClipboardOwner
- COleDataSource [MFC], OnRenderData
- COleDataSource [MFC], OnRenderFileData
- COleDataSource [MFC], OnRenderGlobalData
- COleDataSource [MFC], OnSetData
- COleDataSource [MFC], SetClipboard
ms.assetid: 02c8ee7d-8e10-4463-8613-bb2a0305ca69
ms.openlocfilehash: 539f3f1611d4d9d83d37754b66986c6b4f59549c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50614201"
---
# <a name="coledatasource-class"></a>Classe COleDataSource

Funge da cache in cui un'applicazione inserisce i dati che fornirà durante le operazioni di trasferimento dei dati, ad esempio gli Appunti o le operazioni di trascinamento e rilascio.

## <a name="syntax"></a>Sintassi

```
class COleDataSource : public CCmdTarget
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDataSource::COleDataSource](#coledatasource)|Costruisce un oggetto `COleDataSource`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CacheData](#cachedata)|Sono disponibili i dati in un formato specificato usando un `STGMEDIUM` struttura.|
|[COleDataSource:: CacheGlobalData](#cacheglobaldata)|Offre i dati in un formato specificato utilizzando un HGLOBAL.|
|[COleDataSource:: DelayRenderData](#delayrenderdata)|Offre i dati in un formato specificato utilizzando il rendering ritardato.|
|[COleDataSource:: DelayRenderFileData](#delayrenderfiledata)|Sono disponibili dati in un formato specificato in un `CFile` puntatore.|
|[COleDataSource::DelaySetData](#delaysetdata)|Chiamato per ogni formato supportato in `OnSetData`.|
|[COleDataSource:: DoDragDrop](#dodragdrop)|Esegue le operazioni di trascinamento e rilascio con un'origine dati.|
|[COleDataSource::Empty](#empty)|Svuota il `COleDataSource` oggetto dei dati.|
|[COleDataSource::FlushClipboard](#flushclipboard)|Esegue il rendering di tutti i dati negli Appunti.|
|[COleDataSource::GetClipboardOwner](#getclipboardowner)|Verifica che i dati inseriti negli Appunti sono ancora presenti.|
|[:: OnRenderData](#onrenderdata)|Recupera i dati come parte del rendering ritardato.|
|[:: OnRenderFileData](#onrenderfiledata)|Recupera i dati in un `CFile` come parte del rendering ritardato.|
|[COleDataSource::OnRenderGlobalData](#onrenderglobaldata)|Recupera i dati in un HGLOBAL come parte del rendering ritardato.|
|[COleDataSource::OnSetData](#onsetdata)|Chiamata eseguita per sostituire i dati nel `COleDataSource` oggetto.|
|[SetClipboard](#setclipboard)|Posizioni un `COleDataSource` oggetto negli Appunti.|

## <a name="remarks"></a>Note

È possibile creare origini dati OLE direttamente. In alternativa, il [COleClientItem](../../mfc/reference/coleclientitem-class.md) e [COleServerItem](../../mfc/reference/coleserveritem-class.md) classi creano origini dati OLE in risposta alla loro `CopyToClipboard` e `DoDragDrop` funzioni membro. Visualizzare [COleServerItem::CopyToClipboard](../../mfc/reference/coleserveritem-class.md#copytoclipboard) per una breve descrizione. Eseguire l'override di `OnGetClipboardData` la funzione membro di classe dell'elemento elemento o un server del client per aggiungere altri formati degli Appunti per i dati nell'origine dati OLE creato per il `CopyToClipboard` o `DoDragDrop` funzione membro.

Ogni volta che si vuole preparare i dati per un trasferimento, si deve creare un oggetto di questa classe e compilarlo con i dati tramite il metodo più appropriato per i dati. Il modo in cui viene inserito in un'origine dati è influenzato direttamente da fatto che i dati vengono forniti immediatamente (per il rendering immediato) oppure on demand (rendering ritardati). Per tutti i formati degli Appunti in cui vengono forniti dati passando il formato degli Appunti da usare (ed eventualmente [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura), chiamare [DelayRenderData](#delayrenderdata).

Per altre informazioni sulle origini dati e trasferimento dei dati, vedere l'articolo [oggetti dati e origini dati (OLE)](../../mfc/data-objects-and-data-sources-ole.md). Inoltre, l'articolo [negli Appunti argomenti](../../mfc/clipboard.md) descrive il meccanismo degli Appunti OLE.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleDataSource`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

##  <a name="cachedata"></a>  CacheData

Chiamare questa funzione per specificare un formato in cui i dati sono disponibile durante i dati delle operazioni di trasferimento.

```
void CacheData(
    CLIPFORMAT cfFormat,
    LPSTGMEDIUM lpStgMedium,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*cfFormat*<br/>
Il formato degli Appunti in cui deve essere offerti i dati. Questo parametro può essere uno dei formati Appunti predefiniti o il valore restituito dalla finestra di Windows nativa [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) (funzione).

*lpStgMedium*<br/>
Punta a un [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium) struttura che contiene i dati nel formato specificato.

*lpFormatEtc*<br/>
Punta a un [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura che descrive il formato in cui deve essere offerti i dati. Specificare un valore per questo parametro se si desidera specificare le informazioni sul formato aggiuntive oltre il formato degli Appunti specificato da *cfFormat*. Se è NULL, vengono usati valori predefiniti per gli altri campi di `FORMATETC` struttura.

### <a name="remarks"></a>Note

È necessario fornire i dati, perché questa funzione fornisce con rendering immediato. I dati viene memorizzato nella cache fino a quando necessario.

Fornire i dati usando un [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium) struttura. È anche possibile usare il `CacheGlobalData` è sufficientemente piccolo da trasferire in modo efficiente utilizzando un HGLOBAL funzione membro se la quantità di dati fornito.

Dopo la chiamata a `CacheData` il `ptd` appartenente `lpFormatEtc` e il contenuto del *lpStgMedium* sono di proprietà dall'oggetto dati, non dal chiamante.

Per usare il rendering ritardato, chiamare il [DelayRenderData](#delayrenderdata) oppure [DelayRenderFileData](#delayrenderfiledata) funzione membro. Per altre informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [oggetti dati e origini dati: Manipulation](../../mfc/data-objects-and-data-sources-manipulation.md).

Per altre informazioni, vedere la [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium) e [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) strutture nel SDK di Windows.

Per altre informazioni, vedere [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) nel SDK di Windows.

##  <a name="cacheglobaldata"></a>  COleDataSource:: CacheGlobalData

Chiamare questa funzione per specificare un formato in cui i dati sono disponibile durante i dati delle operazioni di trasferimento.

```
void CacheGlobalData(
    CLIPFORMAT cfFormat,
    HGLOBAL hGlobal,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*cfFormat*<br/>
Il formato degli Appunti in cui deve essere offerti i dati. Questo parametro può essere uno dei formati Appunti predefiniti o il valore restituito dalla finestra di Windows nativa [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) (funzione).

*hGlobal*<br/>
Handle per il blocco di memoria globale che contiene i dati nel formato specificato.

*lpFormatEtc*<br/>
Punta a un [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura che descrive il formato in cui deve essere offerti i dati. Specificare un valore per questo parametro se si desidera specificare le informazioni sul formato aggiuntive oltre il formato degli Appunti specificato da *cfFormat*. Se è NULL, vengono usati valori predefiniti per gli altri campi di `FORMATETC` struttura.

### <a name="remarks"></a>Note

Questa funzione fornisce i dati utilizzando il rendering immediato, pertanto è necessario fornire i dati quando si chiama la funzione. i dati viene memorizzato nella cache fino a quando necessario. Usare il `CacheData` funzione membro, se si specificano una grande quantità di dati o se si necessita di un supporto di archiviazione strutturata.

Per usare il rendering ritardato, chiamare il [DelayRenderData](#delayrenderdata) oppure [DelayRenderFileData](#delayrenderfiledata) funzione membro. Per altre informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [oggetti dati e origini dati: Manipulation](../../mfc/data-objects-and-data-sources-manipulation.md).

Per altre informazioni, vedere la [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura nel SDK di Windows.

Per altre informazioni, vedere [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) nel SDK di Windows.

##  <a name="coledatasource"></a>  COleDataSource::COleDataSource

Costruisce un oggetto `COleDataSource`.

```
COleDataSource();
```

##  <a name="delayrenderdata"></a>  COleDataSource:: DelayRenderData

Chiamare questa funzione per specificare un formato in cui i dati sono disponibile durante i dati delle operazioni di trasferimento.

```
void DelayRenderData(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*cfFormat*<br/>
Il formato degli Appunti in cui deve essere offerti i dati. Questo parametro può essere uno dei formati Appunti predefiniti o il valore restituito dalla finestra di Windows nativa [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) (funzione).

*lpFormatEtc*<br/>
Punta a un [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura che descrive il formato in cui deve essere offerti i dati. Specificare un valore per questo parametro se si desidera specificare le informazioni sul formato aggiuntive oltre il formato degli Appunti specificato da *cfFormat*. Se è NULL, vengono usati valori predefiniti per gli altri campi di `FORMATETC` struttura.

### <a name="remarks"></a>Note

Questa funzione fornisce i dati utilizzando il rendering posticipato, in modo che i dati non vengono forniti immediatamente. Il [routine OnRenderData](#onrenderdata) oppure [OnRenderGlobalData](#onrenderglobaldata) funzione membro viene chiamata per richiedere i dati.

Utilizzare questa funzione se non si intende fornire i dati tramite un `CFile` oggetto. Se si intende fornire i dati tramite un `CFile` dell'oggetto, chiamare il [DelayRenderFileData](#delayrenderfiledata) funzione membro. Per altre informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [oggetti dati e origini dati: Manipulation](../../mfc/data-objects-and-data-sources-manipulation.md).

Per usare il rendering immediato, chiamare il [CacheData](#cachedata) oppure [CacheGlobalData](#cacheglobaldata) funzione membro.

Per altre informazioni, vedere la [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura nel SDK di Windows.

Per altre informazioni, vedere [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) nel SDK di Windows.

##  <a name="delayrenderfiledata"></a>  COleDataSource:: DelayRenderFileData

Chiamare questa funzione per specificare un formato in cui i dati sono disponibile durante i dati delle operazioni di trasferimento.

```
void DelayRenderFileData(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*cfFormat*<br/>
Il formato degli Appunti in cui deve essere offerti i dati. Questo parametro può essere uno dei formati Appunti predefiniti o il valore restituito dalla finestra di Windows nativa [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) (funzione).

*lpFormatEtc*<br/>
Punta a un [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura che descrive il formato in cui deve essere offerti i dati. Specificare un valore per questo parametro se si desidera specificare le informazioni sul formato aggiuntive oltre il formato degli Appunti specificato da *cfFormat*. Se è NULL, vengono usati valori predefiniti per gli altri campi di `FORMATETC` struttura.

### <a name="remarks"></a>Note

Questa funzione fornisce i dati utilizzando il rendering posticipato, in modo che i dati non vengono forniti immediatamente. Il [OnRenderFileData](#onrenderfiledata) funzione membro viene chiamata per richiedere i dati.

Utilizzare questa funzione se si intende usare un `CFile` oggetto da fornire i dati. Se non si intende usare un `CFile` dell'oggetto, chiamare il [DelayRenderData](#delayrenderdata) funzione membro. Per altre informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [oggetti dati e origini dati: Manipulation](../../mfc/data-objects-and-data-sources-manipulation.md).

Per usare il rendering immediato, chiamare il [CacheData](#cachedata) oppure [CacheGlobalData](#cacheglobaldata) funzione membro.

Per altre informazioni, vedere la [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura nel SDK di Windows.

Per altre informazioni, vedere [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) nel SDK di Windows.

##  <a name="delaysetdata"></a>  COleDataSource::DelaySetData

Chiamare questa funzione per supportare la modifica del contenuto dell'origine dati.

```
void DelaySetData(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*cfFormat*<br/>
Il formato degli Appunti in cui si desidera salvare i dati. Questo parametro può essere uno dei formati Appunti predefiniti o il valore restituito dalla finestra di Windows nativa [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) (funzione).

*lpFormatEtc*<br/>
Punta a un [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura che descrive il formato in cui i dati deve essere sostituito. Specificare un valore per questo parametro se si desidera specificare le informazioni sul formato aggiuntive oltre il formato degli Appunti specificato da *cfFormat*. Se è NULL, vengono usati valori predefiniti per gli altri campi di `FORMATETC` struttura.

### <a name="remarks"></a>Note

[OnSetData](#onsetdata) verrà chiamato dal framework quando ciò si verifica. Viene usato solo quando il framework restituisce l'origine dati dal [COleServerItem::GetDataSource](../../mfc/reference/coleserveritem-class.md#getdatasource). Se `DelaySetData` non viene chiamato, il `OnSetData` funzione non verrà mai chiamata. `DelaySetData` deve essere chiamato per ogni negli Appunti o `FORMATETC` supporto del formato.

Per altre informazioni, vedere la [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura nel SDK di Windows.

Per altre informazioni, vedere [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) nel SDK di Windows.

##  <a name="dodragdrop"></a>  COleDataSource:: DoDragDrop

Chiamare il `DoDragDrop` funzione di membro per eseguire un'operazione di trascinamento e rilascio per questa origine dati, in genere un [CWnd::OnLButtonDown](../../mfc/reference/cwnd-class.md#onlbuttondown) gestore.

```
DROPEFFECT DoDragDrop(
    DWORD dwEffects = DROPEFFECT_COPY|DROPEFFECT_MOVE|DROPEFFECT_LINK,
    LPCRECT lpRectStartDrag = NULL,
    COleDropSource* pDropSource = NULL);
```

### <a name="parameters"></a>Parametri

*dwEffects*<br/>
Trascinamento e rilascio operazioni consentite su questa origine dati. Può essere uno o più dei seguenti:

- DROPEFFECT_COPY è stato possibile eseguire un'operazione di copia.

- DROPEFFECT_MOVE è stato possibile eseguire un'operazione di spostamento.

- È stato possibile stabilire DROPEFFECT_LINK link tramite messaggio e-mail dai dati rilasciati ai dati originali.

- DROPEFFECT_SCROLL indica che potrebbe verificarsi un'operazione di scorrimento di trascinamento.

*lpRectStartDrag*<br/>
Puntatore al rettangolo che definisce dove viene avviato effettivamente il trascinamento. Per ulteriori informazioni, vedere la sezione Osservazioni successiva.

*pDropSource*<br/>
Punta a un'origine di trascinamento. Se NULL quindi un'implementazione predefinita di [COleDropSource](../../mfc/reference/coledropsource-class.md) verrà utilizzato.

### <a name="return-value"></a>Valore restituito

DROP effetto generato dall'operazione di trascinamento e rilascio; in caso contrario DROPEFFECT_NONE se l'operazione non inizia mai perché l'utente ha rilasciato il pulsante del mouse prima di lasciare il rettangolo specificato.

### <a name="remarks"></a>Note

L'operazione di trascinamento e rilascio non verrà avviato immediatamente. È in attesa fino a quando il cursore del mouse lascia il rettangolo specificato da *lpRectStartDrag* o fino a quando un numero specificato di millisecondi trascorsi. Se *lpRectStartDrag* è NULL, le dimensioni del rettangolo sono 1 pixel.

L'intervallo di tempo viene specificato dall'impostazione della chiave del Registro di sistema. È possibile modificare l'intervallo di tempo chiamando [CWinApp::WriteProfileString](../../mfc/reference/cwinapp-class.md#writeprofilestring) oppure [CWinApp:: Writeprofileint](../../mfc/reference/cwinapp-class.md#writeprofileint). Se non si specifica l'intervallo di tempo, viene utilizzato un valore predefinito di 200 millisecondi. Ritarda ora di trascinamento viene archiviato come indicato di seguito:

- Ritarda ora di Windows NT trascinamento viene archiviato in HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\NT\CurrentVersion\IniFileMapping\win.ini\Windows\DragDelay.

- Ritarda ora di Windows 3.x trascinamento viene archiviato nel file WIN. File INI, la sezione [Windows}.

- Ritarda ora di Windows 95 o 98 trascinamento viene archiviato in una versione memorizzata nella cache di WIN. INI.

Per altre informazioni su come trascinare ritardo informazioni vengono archiviate nel Registro di sistema o di. File con estensione INI, vedere [WriteProfileString](/windows/desktop/api/winbase/nf-winbase-writeprofilestringa) nel SDK di Windows.

Per altre informazioni, vedere l'articolo [trascinamento della selezione: implementazione di un'origine Drop](../../mfc/drag-and-drop-implementing-a-drop-source.md).

##  <a name="empty"></a>  COleDataSource::Empty

Chiamare questa funzione per svuotare il `COleDataSource` oggetto dei dati.

```
void Empty();
```

### <a name="remarks"></a>Note

Entrambi memorizzati nella cache e formati di rendering ritardo vengono svuotati in modo da poter essere riutilizzati.

Per altre informazioni, vedere [ReleaseStgMedium](/windows/desktop/api/ole2/nf-ole2-releasestgmedium) nel SDK di Windows.

##  <a name="flushclipboard"></a>  COleDataSource::FlushClipboard

Esegue il rendering dei dati negli Appunti e quindi consente di incollare i dati dagli Appunti dopo la chiusura dell'applicazione.

```
static void PASCAL FlushClipboard();
```

### <a name="remarks"></a>Note

Uso [SetClipboard](#setclipboard) per inserire dati negli Appunti.

##  <a name="getclipboardowner"></a>  COleDataSource::GetClipboardOwner

Determina se i dati negli Appunti è stata modificata [SetClipboard](#setclipboard) ultima chiamata al metodo e, in caso affermativo, identifica il proprietario corrente.

```
static COleDataSource* PASCAL GetClipboardOwner();
```

### <a name="return-value"></a>Valore restituito

I dati di origine attualmente negli Appunti oppure NULL se non c'è niente negli Appunti o se gli Appunti non appartiene all'applicazione chiamante.

##  <a name="onrenderdata"></a>  :: OnRenderData

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

Il formato specificato è uno precedentemente spostata nel `COleDataSource` utilizzando il [DelayRenderData](#delayrenderdata) o [DelayRenderFileData](#delayrenderfiledata) funzione membro per il rendering ritardato. L'implementazione predefinita di questa funzione chiamerà [OnRenderFileData](#onrenderfiledata) oppure [OnRenderGlobalData](#onrenderglobaldata) se il supporto di archiviazione fornito è un file o della memoria, rispettivamente. Se nessuno di questi formati vengono specificati, quindi l'implementazione predefinita restituirà 0 e non eseguire alcuna operazione. Per altre informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [oggetti dati e origini dati: Manipulation](../../mfc/data-objects-and-data-sources-manipulation.md).

Se *lpStgMedium*-> *tymed* TYMED_NULL, è il `STGMEDIUM` deve essere allocato e compilato come specificato dalle *lpFormatEtc -> tymed*. Se non è TYMED_NULL, il `STGMEDIUM` devono essere compilate con i dati.

Si tratta di un'avanzata sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato richiesto delle medie. A seconda dei dati, è possibile eseguire l'override in una delle altre versioni di questa funzione invece. Se i dati sono piccole e ha dimensione fissa, eseguire l'override `OnRenderGlobalData`. Se i dati in un file o sono di dimensioni variabili, eseguire l'override `OnRenderFileData`.

Per altre informazioni, vedere la [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium) e [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) strutture, i [TYMED](/windows/desktop/api/objidl/ne-objidl-tagtymed) tipo di enumerazione, e [IDataObject:: GetData](/windows/desktop/api/objidl/nf-objidl-idataobject-getdata) Nella finestra di Windows SDK.

##  <a name="onrenderfiledata"></a>  :: OnRenderFileData

Chiamato dal framework per recuperare i dati nel formato specificato quando il supporto di archiviazione specificato è un file.

```
virtual BOOL OnRenderFileData(
    LPFORMATETC lpFormatEtc,
    CFile* pFile);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc*<br/>
Punta al [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura che specifica il formato in cui vengono richieste informazioni.

*pFile*<br/>
Punta a un [CFile](../../mfc/reference/cfile-class.md) oggetto in cui i dati da sottoporre a rendering.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il formato specificato è uno precedentemente spostata nel `COleDataSource` utilizzando il [DelayRenderData](#delayrenderdata) funzione membro per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce FALSE.

Si tratta di un'avanzata sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato richiesto delle medie. A seconda dei dati, si potrebbe voler eseguire l'override in una delle altre versioni di questa funzione invece. Se si desidera gestire più supporti di archiviazione, eseguire l'override [routine OnRenderData](#onrenderdata). Se i dati in un file o sono di dimensioni variabili, eseguire l'override `OnRenderFileData`. Per altre informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [oggetti dati e origini dati: Manipulation](../../mfc/data-objects-and-data-sources-manipulation.md).

Per altre informazioni, vedere la [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura e [IDataObject:: GetData](/windows/desktop/api/objidl/nf-objidl-idataobject-getdata) nel SDK di Windows.

##  <a name="onrenderglobaldata"></a>  COleDataSource::OnRenderGlobalData

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
Punta a un handle per la memoria globale in cui i dati sono da restituire. Se uno non è ancora stato allocato, questo parametro può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il formato specificato è uno precedentemente spostata nel `COleDataSource` utilizzando il [DelayRenderData](#delayrenderdata) funzione membro per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce FALSE.

Se *phGlobal* è NULL, un nuovo HGLOBAL deve essere allocato e restituito nella *phGlobal*. In caso contrario, il HGLOBAL specificato da *phGlobal* deve essere riempito con i dati. La quantità di dati inseriti nel HGLOBAL non deve superare la dimensione corrente del blocco di memoria. Inoltre, il blocco non può essere riallocato a una dimensione maggiore.

Si tratta di un'avanzata sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato richiesto delle medie. A seconda dei dati, è possibile eseguire l'override in una delle altre versioni di questa funzione invece. Se si desidera gestire più supporti di archiviazione, eseguire l'override [routine OnRenderData](#onrenderdata). Se i dati in un file o sono di dimensioni variabili, eseguire l'override [OnRenderFileData](#onrenderfiledata). Per altre informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [oggetti dati e origini dati: Manipulation](../../mfc/data-objects-and-data-sources-manipulation.md).

Per altre informazioni, vedere la [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura e [IDataObject:: GetData](/windows/desktop/api/objidl/nf-objidl-idataobject-getdata) nel SDK di Windows.

##  <a name="onsetdata"></a>  COleDataSource::OnSetData

Chiamato dal framework per impostare o sostituire i dati nel `COleDataSource` oggetto nel formato specificato.

```
virtual BOOL OnSetData(
    LPFORMATETC lpFormatEtc,
    LPSTGMEDIUM lpStgMedium,
    BOOL bRelease);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc*<br/>
Punta al [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura che specifica il formato in cui i dati viene sostituiti.

*lpStgMedium*<br/>
Punta al [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium) struttura che contiene i dati che andrà a sostituire il contenuto corrente del `COleDataSource` oggetto.

*bRelease*<br/>
Indica chi ha la proprietà del supporto di archiviazione dopo il completamento della chiamata di funzione. Il chiamante decide chi è responsabile del rilascio delle risorse allocate per conto del supporto di archiviazione. Il chiamante esegue questa operazione impostando *bRelease*. Se *bRelease* è diverso da zero, l'origine dei dati acquisisce la proprietà, il rilascio del supporto quando ha finito di usarlo. Quando *bRelease* è 0, il chiamante mantiene la proprietà e l'origine dati è possibile usare il supporto di archiviazione solo per la durata della chiamata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

L'origine dati non accetta la proprietà dei dati fino a quando non lo ha ha ottenuto. Vale a dire, acquisire la proprietà non se `OnSetData` restituisce 0. Se l'origine dei dati acquisisce la proprietà, consente di liberare il supporto di archiviazione chiamando il [ReleaseStgMedium](/windows/desktop/api/ole2/nf-ole2-releasestgmedium) (funzione).

L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione per sostituire i dati nel formato specificato. Si tratta di un'avanzata sottoponibile a override.

Per altre informazioni, vedere la [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium) e [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) strutture e le [ReleaseStgMedium](/windows/desktop/api/ole2/nf-ole2-releasestgmedium) e [IDataObject:: GetData](/windows/desktop/api/objidl/nf-objidl-idataobject-getdata) funzioni in Windows SDK.

##  <a name="setclipboard"></a>  SetClipboard

Inserisce i dati contenuti nel `COleDataSource` oggetti negli Appunti dopo la chiamata a una delle seguenti funzioni: [CacheData](#cachedata), [CacheGlobalData](#cacheglobaldata), [DelayRenderData](#delayrenderdata), oppure [DelayRenderFileData](#delayrenderfiledata).

```
void SetClipboard();
```

## <a name="see-also"></a>Vedere anche

[Esempio MFC HIERSVR](../../visual-cpp-samples.md)<br/>
[Esempio MFC OCLIENT](../../visual-cpp-samples.md)<br/>
[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDataObject](../../mfc/reference/coledataobject-class.md)

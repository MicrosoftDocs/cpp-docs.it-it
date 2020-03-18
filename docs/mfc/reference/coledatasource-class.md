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
ms.openlocfilehash: 5cd573590bc1adb303e0b4c5cd600b9fa6c685b2
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79421135"
---
# <a name="coledatasource-class"></a>Classe COleDataSource

Funge da cache in cui un'applicazione inserisce i dati che fornirà durante le operazioni di trasferimento dei dati, ad esempio gli Appunti o le operazioni di trascinamento e rilascio.

## <a name="syntax"></a>Sintassi

```
class COleDataSource : public CCmdTarget
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDataSource:: COleDataSource](#coledatasource)|Costruisce un oggetto `COleDataSource`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDataSource:: CacheData](#cachedata)|Offre dati in un formato specificato utilizzando una struttura `STGMEDIUM`.|
|[COleDataSource:: CacheGlobalData](#cacheglobaldata)|Offre dati in un formato specificato utilizzando un HGLOBAL.|
|[COleDataSource::D elayRenderData](#delayrenderdata)|Offre dati in un formato specificato utilizzando il rendering ritardato.|
|[COleDataSource::D elayRenderFileData](#delayrenderfiledata)|Offre dati in un formato specificato in un puntatore `CFile`.|
|[COleDataSource::D elaySetData](#delaysetdata)|Chiamato per ogni formato supportato in `OnSetData`.|
|[COleDataSource::D oDragDrop](#dodragdrop)|Esegue operazioni di trascinamento e rilascio con un'origine dati.|
|[COleDataSource:: Empty](#empty)|Svuota l'oggetto `COleDataSource` di dati.|
|[COleDataSource:: FlushClipboard](#flushclipboard)|Esegue il rendering di tutti i dati negli Appunti.|
|[COleDataSource:: GetClipboardOwner](#getclipboardowner)|Verifica che i dati inseriti negli Appunti siano ancora presenti.|
|[COleDataSource:: OnRenderData](#onrenderdata)|Recupera i dati come parte del rendering ritardato.|
|[COleDataSource:: OnRenderFileData](#onrenderfiledata)|Recupera i dati in un `CFile` come parte del rendering ritardato.|
|[COleDataSource:: OnRenderGlobalData](#onrenderglobaldata)|Recupera i dati in un HGLOBAL come parte del rendering ritardato.|
|[COleDataSource:: OnSetData](#onsetdata)|Chiamato per sostituire i dati nell'oggetto `COleDataSource`.|
|[COleDataSource:: gli Appunti](#setclipboard)|Inserisce un oggetto `COleDataSource` negli Appunti.|

## <a name="remarks"></a>Osservazioni

È possibile creare direttamente origini dati OLE. In alternativa, le classi [COleClientItem](../../mfc/reference/coleclientitem-class.md) e [COleServerItem](../../mfc/reference/coleserveritem-class.md) creano origini dati OLE in risposta alle funzioni membro `CopyToClipboard` e `DoDragDrop`. Per una breve descrizione, vedere [COleServerItem:: CopyToClipboard](../../mfc/reference/coleserveritem-class.md#copytoclipboard) . Eseguire l'override della funzione membro `OnGetClipboardData` della classe elemento client o elemento server per aggiungere altri formati degli Appunti ai dati nell'origine dati OLE creata per la funzione membro `CopyToClipboard` o `DoDragDrop`.

Quando si desidera preparare i dati per un trasferimento, è necessario creare un oggetto di questa classe e riempirvi i dati utilizzando il metodo più appropriato per i dati. Il modo in cui viene inserito in un'origine dati è direttamente influenzato dal fatto che i dati vengano forniti immediatamente (rendering immediato) o su richiesta (rendering ritardato). Per ogni formato degli Appunti in cui si forniscono dati passando il formato degli Appunti da usare (e una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) facoltativa), chiamare [DelayRenderData](#delayrenderdata).

Per ulteriori informazioni sulle origini dati e sul trasferimento dei dati, vedere l'articolo [oggetti dati e origini dati (OLE)](../../mfc/data-objects-and-data-sources-ole.md). Inoltre, gli argomenti degli [Appunti](../../mfc/clipboard.md) dell'articolo descrivono il meccanismo degli Appunti OLE.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleDataSource`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

##  <a name="cachedata"></a>COleDataSource:: CacheData

Chiamare questa funzione per specificare un formato in cui i dati vengono offerti durante le operazioni di trasferimento dei dati.

```
void CacheData(
    CLIPFORMAT cfFormat,
    LPSTGMEDIUM lpStgMedium,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*cfFormat*<br/>
Formato degli Appunti in cui vengono offerti i dati. Questo parametro può essere uno dei formati degli appunti predefiniti oppure il valore restituito dalla funzione nativa [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) di Windows.

*lpStgMedium*<br/>
Punta a una struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) contenente i dati nel formato specificato.

*lpFormatEtc*<br/>
Punta a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che descrive il formato in cui vengono offerti i dati. Fornire un valore per questo parametro se si desidera specificare informazioni aggiuntive sul formato oltre il formato degli Appunti specificato da *cfFormat*. Se è NULL, vengono utilizzati i valori predefiniti per gli altri campi nella struttura `FORMATETC`.

### <a name="remarks"></a>Osservazioni

È necessario fornire i dati, perché questa funzione lo fornisce usando il rendering immediato. I dati vengono memorizzati nella cache finché non sono necessari.

Fornire i dati utilizzando una struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) . È anche possibile usare la funzione membro `CacheGlobalData` se la quantità di dati che si sta fornendo è sufficientemente piccola da essere trasferita in modo efficiente usando un HGLOBAL.

Dopo la chiamata a `CacheData` il membro `ptd` di `lpFormatEtc` e il contenuto di *lpStgMedium* sono di proprietà dell'oggetto dati, non dal chiamante.

Per usare il rendering ritardato, chiamare la funzione membro [DelayRenderData](#delayrenderdata) o [DelayRenderData](#delayrenderfiledata) . Per ulteriori informazioni sul rendering ritardato gestito da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).

Per ulteriori informazioni, vedere le strutture [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) e [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) nel Windows SDK.

Per ulteriori informazioni, vedere [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) nel Windows SDK.

##  <a name="cacheglobaldata"></a>COleDataSource:: CacheGlobalData

Chiamare questa funzione per specificare un formato in cui i dati vengono offerti durante le operazioni di trasferimento dei dati.

```
void CacheGlobalData(
    CLIPFORMAT cfFormat,
    HGLOBAL hGlobal,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*cfFormat*<br/>
Formato degli Appunti in cui vengono offerti i dati. Questo parametro può essere uno dei formati degli appunti predefiniti oppure il valore restituito dalla funzione nativa [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) di Windows.

*hGlobal*<br/>
Handle per il blocco di memoria globale contenente i dati nel formato specificato.

*lpFormatEtc*<br/>
Punta a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che descrive il formato in cui vengono offerti i dati. Fornire un valore per questo parametro se si desidera specificare informazioni aggiuntive sul formato oltre il formato degli Appunti specificato da *cfFormat*. Se è NULL, vengono utilizzati i valori predefiniti per gli altri campi nella struttura `FORMATETC`.

### <a name="remarks"></a>Osservazioni

Questa funzione fornisce i dati utilizzando il rendering immediato, pertanto è necessario fornire i dati quando si chiama la funzione; i dati vengono memorizzati nella cache finché non sono necessari. Usare la funzione membro `CacheData` se si fornisce una grande quantità di dati o se è necessario un supporto di archiviazione strutturato.

Per usare il rendering ritardato, chiamare la funzione membro [DelayRenderData](#delayrenderdata) o [DelayRenderData](#delayrenderfiledata) . Per ulteriori informazioni sul rendering ritardato gestito da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).

Per ulteriori informazioni, vedere la struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) nell'Windows SDK.

Per ulteriori informazioni, vedere [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) nel Windows SDK.

##  <a name="coledatasource"></a>COleDataSource:: COleDataSource

Costruisce un oggetto `COleDataSource`.

```
COleDataSource();
```

##  <a name="delayrenderdata"></a>COleDataSource::D elayRenderData

Chiamare questa funzione per specificare un formato in cui i dati vengono offerti durante le operazioni di trasferimento dei dati.

```
void DelayRenderData(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*cfFormat*<br/>
Formato degli Appunti in cui vengono offerti i dati. Questo parametro può essere uno dei formati degli appunti predefiniti oppure il valore restituito dalla funzione nativa [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) di Windows.

*lpFormatEtc*<br/>
Punta a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che descrive il formato in cui vengono offerti i dati. Fornire un valore per questo parametro se si desidera specificare informazioni aggiuntive sul formato oltre il formato degli Appunti specificato da *cfFormat*. Se è NULL, vengono utilizzati i valori predefiniti per gli altri campi nella struttura `FORMATETC`.

### <a name="remarks"></a>Osservazioni

Questa funzione fornisce i dati utilizzando il rendering ritardato, quindi i dati non vengono forniti immediatamente. Per richiedere i dati, viene chiamata la funzione membro [OnRenderData](#onrenderdata) o [OnRenderGlobalData](#onrenderglobaldata) .

Utilizzare questa funzione se non si intende fornire i dati tramite un oggetto `CFile`. Se si intende fornire i dati tramite un oggetto `CFile`, chiamare la funzione membro [DelayRenderData](#delayrenderfiledata) . Per ulteriori informazioni sul rendering ritardato gestito da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).

Per usare il rendering immediato, chiamare la funzione membro [CacheData](#cachedata) o [CacheGlobalData](#cacheglobaldata) .

Per ulteriori informazioni, vedere la struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) nell'Windows SDK.

Per ulteriori informazioni, vedere [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) nel Windows SDK.

##  <a name="delayrenderfiledata"></a>COleDataSource::D elayRenderFileData

Chiamare questa funzione per specificare un formato in cui i dati vengono offerti durante le operazioni di trasferimento dei dati.

```
void DelayRenderFileData(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*cfFormat*<br/>
Formato degli Appunti in cui vengono offerti i dati. Questo parametro può essere uno dei formati degli appunti predefiniti oppure il valore restituito dalla funzione nativa [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) di Windows.

*lpFormatEtc*<br/>
Punta a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che descrive il formato in cui vengono offerti i dati. Fornire un valore per questo parametro se si desidera specificare informazioni aggiuntive sul formato oltre il formato degli Appunti specificato da *cfFormat*. Se è NULL, vengono utilizzati i valori predefiniti per gli altri campi nella struttura `FORMATETC`.

### <a name="remarks"></a>Osservazioni

Questa funzione fornisce i dati utilizzando il rendering ritardato, quindi i dati non vengono forniti immediatamente. La funzione membro [OnRenderFileData](#onrenderfiledata) viene chiamata per richiedere i dati.

Usare questa funzione se si intende usare un oggetto `CFile` per fornire i dati. Se non si intende usare un oggetto `CFile`, chiamare la funzione membro [DelayRenderData](#delayrenderdata) . Per ulteriori informazioni sul rendering ritardato gestito da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).

Per usare il rendering immediato, chiamare la funzione membro [CacheData](#cachedata) o [CacheGlobalData](#cacheglobaldata) .

Per ulteriori informazioni, vedere la struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) nell'Windows SDK.

Per ulteriori informazioni, vedere [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) nel Windows SDK.

##  <a name="delaysetdata"></a>COleDataSource::D elaySetData

Chiamare questa funzione per supportare la modifica del contenuto dell'origine dati.

```
void DelaySetData(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*cfFormat*<br/>
Formato degli Appunti in cui devono essere inseriti i dati. Questo parametro può essere uno dei formati degli appunti predefiniti oppure il valore restituito dalla funzione nativa [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) di Windows.

*lpFormatEtc*<br/>
Punta a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che descrive il formato in cui i dati devono essere sostituiti. Fornire un valore per questo parametro se si desidera specificare informazioni aggiuntive sul formato oltre il formato degli Appunti specificato da *cfFormat*. Se è NULL, vengono utilizzati i valori predefiniti per gli altri campi nella struttura `FORMATETC`.

### <a name="remarks"></a>Osservazioni

Quando si verifica questa situazione, [OnSetData](#onsetdata) verrà chiamato dal Framework. Viene usato solo quando il Framework restituisce l'origine dati da [COleServerItem:: GetDataSource](../../mfc/reference/coleserveritem-class.md#getdatasource). Se `DelaySetData` non viene chiamata, la funzione `OnSetData` non verrà mai chiamata. `DelaySetData` deve essere chiamato per ogni Appunti o il formato `FORMATETC` supportato.

Per ulteriori informazioni, vedere la struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) nell'Windows SDK.

Per ulteriori informazioni, vedere [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) nel Windows SDK.

##  <a name="dodragdrop"></a>COleDataSource::D oDragDrop

Chiamare la funzione membro `DoDragDrop` per eseguire un'operazione di trascinamento della selezione per questa origine dati, in genere in un gestore [CWnd:: OnLButtonDown](../../mfc/reference/cwnd-class.md#onlbuttondown) .

```
DROPEFFECT DoDragDrop(
    DWORD dwEffects = DROPEFFECT_COPY|DROPEFFECT_MOVE|DROPEFFECT_LINK,
    LPCRECT lpRectStartDrag = NULL,
    COleDropSource* pDropSource = NULL);
```

### <a name="parameters"></a>Parametri

*dwEffects*<br/>
Operazioni di trascinamento della selezione consentite su questa origine dati. Può essere uno o più degli elementi seguenti:

- DROPEFFECT_COPY è possibile eseguire un'operazione di copia.

- DROPEFFECT_MOVE è possibile eseguire un'operazione di spostamento.

- DROPEFFECT_LINK è possibile stabilire un collegamento tra i dati eliminati e i dati originali.

- DROPEFFECT_SCROLL indica che potrebbe verificarsi un'operazione di trascinamento di scorrimento.

*lpRectStartDrag*<br/>
Puntatore al rettangolo che definisce la posizione in cui inizia effettivamente il trascinamento. Per ulteriori informazioni, vedere la sezione Osservazioni successiva.

*pDropSource*<br/>
Punta a un'origine di rilascio. Se NULL, verrà utilizzata un'implementazione predefinita di [COleDropSource](../../mfc/reference/coledropsource-class.md) .

### <a name="return-value"></a>Valore restituito

Effetto di rilascio generato dall'operazione di trascinamento della selezione; in caso contrario DROPEFFECT_NONE se l'operazione non viene mai avviata perché l'utente ha rilasciato il pulsante del mouse prima di lasciare il rettangolo specificato.

### <a name="remarks"></a>Osservazioni

L'operazione di trascinamento della selezione non viene avviata immediatamente. Attende fino a quando il cursore del mouse lascia il rettangolo specificato da *lpRectStartDrag* o fino a quando non viene superato il numero di millisecondi specificato. Se *lpRectStartDrag* è null, le dimensioni del rettangolo sono pari a un pixel.

Il tempo di ritardo viene specificato da un'impostazione della chiave del registro di sistema. È possibile modificare l'ora di ritardo chiamando [CWinApp:: WriteProfileString](../../mfc/reference/cwinapp-class.md#writeprofilestring) o [CWinApp:: WriteProfileInt](../../mfc/reference/cwinapp-class.md#writeprofileint). Se non si specifica il tempo di ritardo, viene usato un valore predefinito di 200 millisecondi. Il tempo di trascinamento del ritardo viene archiviato come segue:

- Il tempo di ritardi di trascinamento di Windows NT è archiviato in HKEY_LOCAL_MACHINE \SOFTWARE\Microsoft\Windows\NT\CurrentVersion\IniFileMapping\win.ini\Windows\DragDelay.

- Il tempo di ritardo di trascinamento di Windows 3. x viene archiviato nella vittoria. File INI, nella sezione [Windows}.

- Il ritardo di trascinamento di Windows 95/98 è archiviato in una versione memorizzata nella cache di WIN. INI.

Per ulteriori informazioni sul modo in cui le informazioni sul ritardo di trascinamento vengono archiviate nel registro di sistema o. File INI, vedere [WriteProfileString](/windows/win32/api/winbase/nf-winbase-writeprofilestringw) nel Windows SDK.

Per altre informazioni, vedere l'articolo [trascinamento della selezione OLE](../../mfc/drag-and-drop-ole.md).

##  <a name="empty"></a>COleDataSource:: Empty

Chiamare questa funzione per svuotare il `COleDataSource` oggetto dei dati.

```
void Empty();
```

### <a name="remarks"></a>Osservazioni

Entrambi i formati di rendering memorizzati nella cache e ritardo vengono svuotati in modo che possano essere riutilizzati.

Per ulteriori informazioni, vedere [ReleaseStgMedium](/windows/win32/api/ole2/nf-ole2-releasestgmedium) nel Windows SDK.

##  <a name="flushclipboard"></a>COleDataSource:: FlushClipboard

Esegue il rendering dei dati presenti negli Appunti e quindi consente di incollare i dati dagli Appunti dopo l'arresto dell'applicazione.

```
static void PASCAL FlushClipboard();
```

### <a name="remarks"></a>Osservazioni

Usare gli [Appunti](#setclipboard) per inserire i dati negli Appunti.

##  <a name="getclipboardowner"></a>COleDataSource:: GetClipboardOwner

Determina se i dati negli Appunti sono stati modificati dopo l'ultima chiamata di [seclipboard](#setclipboard) e, in caso affermativo, identifica il proprietario corrente.

```
static COleDataSource* PASCAL GetClipboardOwner();
```

### <a name="return-value"></a>Valore restituito

Origine dati attualmente negli Appunti oppure NULL se non è presente alcun elemento negli Appunti oppure se gli Appunti non sono di proprietà dell'applicazione chiamante.

##  <a name="onrenderdata"></a>COleDataSource:: OnRenderData

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
Punta a una struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) in cui devono essere restituiti i dati.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il formato specificato è quello inserito in precedenza nell'oggetto `COleDataSource` usando la funzione membro [DelayRenderData](#delayrenderdata) o [DelayRenderData](#delayrenderfiledata) per il rendering ritardato. L'implementazione predefinita di questa funzione chiamerà [OnRenderFileData](#onrenderfiledata) o [OnRenderGlobalData](#onrenderglobaldata) se il supporto di archiviazione fornito è rispettivamente un file o una memoria. Se nessuno di questi formati viene specificato, l'implementazione predefinita restituirà 0 e non eseguirà alcuna operazione. Per ulteriori informazioni sul rendering ritardato gestito da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).

Se *lpStgMedium*-> *TYMED* è TYMED_NULL, le `STGMEDIUM` devono essere allocate e riempite come specificato da *lpformatetc-> tymed*. Se non è TYMED_NULL, il `STGMEDIUM` deve essere compilato con i dati.

Si tratta di un oggetto avanzato sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato e nel supporto richiesti. A seconda dei dati, potrebbe essere necessario eseguire l'override di una delle altre versioni di questa funzione. Se i dati sono di dimensioni ridotte e di dimensioni fisse, eseguire l'override `OnRenderGlobalData`. Se i dati sono in un file o sono di dimensioni variabili, eseguire l'override `OnRenderFileData`.

Per ulteriori informazioni, vedere le strutture [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) e [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) , il tipo di enumerazione [TYMED](/windows/win32/api/objidl/ne-objidl-tymed) e [IDataObject:: GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata) nel Windows SDK.

##  <a name="onrenderfiledata"></a>COleDataSource:: OnRenderFileData

Chiamata eseguita dal Framework per recuperare i dati nel formato specificato quando il supporto di archiviazione specificato è un file.

```
virtual BOOL OnRenderFileData(
    LPFORMATETC lpFormatEtc,
    CFile* pFile);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc*<br/>
Punta alla struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che specifica il formato in cui vengono richieste le informazioni.

*pFile*<br/>
Punta a un oggetto [CFile](../../mfc/reference/cfile-class.md) in cui è necessario eseguire il rendering dei dati.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il formato specificato è quello inserito in precedenza nell'oggetto `COleDataSource` usando la funzione membro [DelayRenderData](#delayrenderdata) per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce semplicemente FALSE.

Si tratta di un oggetto avanzato sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato e nel supporto richiesti. A seconda dei dati, potrebbe essere necessario eseguire l'override di una delle altre versioni di questa funzione. Se si desidera gestire più supporti di archiviazione, eseguire l'override di [OnRenderData](#onrenderdata). Se i dati sono in un file o sono di dimensioni variabili, eseguire l'override `OnRenderFileData`. Per ulteriori informazioni sul rendering ritardato gestito da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).

Per ulteriori informazioni, vedere la struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) e [IDataObject:: GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata) nel Windows SDK.

##  <a name="onrenderglobaldata"></a>COleDataSource:: OnRenderGlobalData

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
Punta a un handle per la memoria globale in cui devono essere restituiti i dati. Se non è ancora stato allocato, questo parametro può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il formato specificato è quello inserito in precedenza nell'oggetto `COleDataSource` usando la funzione membro [DelayRenderData](#delayrenderdata) per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce semplicemente FALSE.

Se *phGlobal* è null, è necessario allocare e restituire un nuovo HGLOBAL in *phGlobal*. In caso contrario, il HGLOBAL specificato da *phGlobal* deve essere riempito con i dati. La quantità di dati inseriti in HGLOBAL non deve superare la dimensione corrente del blocco di memoria. Inoltre, il blocco non può essere riallocato a dimensioni maggiori.

Si tratta di un oggetto avanzato sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato e nel supporto richiesti. A seconda dei dati, potrebbe essere necessario eseguire l'override di una delle altre versioni di questa funzione. Se si desidera gestire più supporti di archiviazione, eseguire l'override di [OnRenderData](#onrenderdata). Se i dati sono in un file o sono di dimensioni variabili, eseguire l'override di [OnRenderFileData](#onrenderfiledata). Per ulteriori informazioni sul rendering ritardato gestito da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).

Per ulteriori informazioni, vedere la struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) e [IDataObject:: GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata) nel Windows SDK.

##  <a name="onsetdata"></a>COleDataSource:: OnSetData

Chiamato dal Framework per impostare o sostituire i dati nell'oggetto `COleDataSource` nel formato specificato.

```
virtual BOOL OnSetData(
    LPFORMATETC lpFormatEtc,
    LPSTGMEDIUM lpStgMedium,
    BOOL bRelease);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc*<br/>
Punta alla struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che specifica il formato in cui i dati vengono sostituiti.

*lpStgMedium*<br/>
Punta alla struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) contenente i dati che sostituiranno il contenuto corrente dell'oggetto `COleDataSource`.

*bRelease*<br/>
Indica chi ha la proprietà del supporto di archiviazione dopo aver completato la chiamata di funzione. Il chiamante decide chi è responsabile del rilascio delle risorse allocate per conto del supporto di archiviazione. Il chiamante esegue questa operazione impostando *bRelease*. Se *bRelease* è diverso da zero, l'origine dati assume la proprietà, liberando il supporto quando ha terminato di usarlo. Quando *bRelease* è 0, il chiamante mantiene la proprietà e l'origine dati può usare il supporto di archiviazione solo per la durata della chiamata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'origine dati non assume la proprietà dei dati fino a quando non viene ottenuta correttamente. Ovvero non assume la proprietà se `OnSetData` restituisce 0. Se l'origine dati acquisisce la proprietà, il supporto di archiviazione viene liberato chiamando la funzione [ReleaseStgMedium](/windows/win32/api/ole2/nf-ole2-releasestgmedium) .

L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione per sostituire i dati nel formato specificato. Si tratta di un oggetto avanzato sottoponibile a override.

Per ulteriori informazioni, vedere le strutture [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) e [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) e le funzioni [ReleaseStgMedium](/windows/win32/api/ole2/nf-ole2-releasestgmedium) e [IDataObject:: GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata) nel Windows SDK.

##  <a name="setclipboard"></a>COleDataSource:: gli Appunti

Inserisce i dati contenuti nell'oggetto `COleDataSource` negli Appunti dopo avere chiamato una delle funzioni seguenti: [CacheData](#cachedata), [CacheGlobalData](#cacheglobaldata), [DelayRenderData](#delayrenderdata)o [DelayRenderData](#delayrenderfiledata).

```
void SetClipboard();
```

## <a name="see-also"></a>Vedere anche

[HIERSVR di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[OCLIENT di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDataObject](../../mfc/reference/coledataobject-class.md)

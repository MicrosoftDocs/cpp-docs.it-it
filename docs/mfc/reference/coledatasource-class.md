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
ms.openlocfilehash: 8746be43e3f2a31558904323392983b183d4f198
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753893"
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
|[COleDataSource::CacheData](#cachedata)|Offre i dati in `STGMEDIUM` un formato specificato utilizzando una struttura.|
|[COleDataSource::CacheGlobalData](#cacheglobaldata)|Offre i dati in un formato specificato utilizzando un HGLOBAL.|
|[COleDataSource::DelayRenderData](#delayrenderdata)|Offre i dati in un formato specificato utilizzando il rendering ritardato.|
|[COleDataSource::DelayRenderFileData](#delayrenderfiledata)|Offre i dati in `CFile` un formato specificato in un puntatore.|
|[COleDataSource::DelaySetData](#delaysetdata)|Chiamato per ogni formato `OnSetData`supportato in .|
|[COleDataSource::DoDragDrop](#dodragdrop)|Esegue operazioni di trascinamento con un'origine dati.|
|[COleDataSource::Vuoto](#empty)|Svuota l'oggetto `COleDataSource` dei dati.|
|[COleDataSource::FlushClipboard](#flushclipboard)|Esegue il rendering di tutti i dati negli Appunti.|
|[COleDataSource::GetClipboardOwner](#getclipboardowner)|Verifica che i dati inseriti negli Appunti siano ancora presenti.|
|[COleDataSource::OnRenderData](#onrenderdata)|Recupera i dati come parte del rendering ritardato.|
|[COleDataSource::OnRenderFileData](#onrenderfiledata)|Recupera i dati `CFile` in un come parte del rendering ritardato.|
|[COleDataSource::OnRenderGlobalData](#onrenderglobaldata)|Recupera i dati in un HGLOBAL come parte del rendering ritardato.|
|[COleDataSource::OnSetData](#onsetdata)|Chiamato per sostituire i `COleDataSource` dati nell'oggetto.|
|[COleDataSource::SetClipboard](#setclipboard)|Inserisce `COleDataSource` un oggetto negli Appunti.|

## <a name="remarks"></a>Osservazioni

È possibile creare direttamente le origini dati OLE. In alternativa, le classi [COleClientItem](../../mfc/reference/coleclientitem-class.md) e [COleServerItem](../../mfc/reference/coleserveritem-class.md) creano `CopyToClipboard` origini `DoDragDrop` dati OLE in risposta alle relative funzioni membro e . Vedere [COleServerItem::CopyToClipboard](../../mfc/reference/coleserveritem-class.md#copytoclipboard) per una breve descrizione. Eseguire `OnGetClipboardData` l'override della funzione membro dell'elemento client o della classe dell'elemento server `CopyToClipboard` `DoDragDrop` per aggiungere altri formati degli Appunti ai dati nell'origine dati OLE creata per la funzione membro o .

Ogni volta che si desidera preparare i dati per un trasferimento, è necessario creare un oggetto di questa classe e riempirlo con i dati utilizzando il metodo più appropriato per i dati. Il modo in cui viene inserito in un'origine dati è direttamente influenzato dal fatto che i dati vengono forniti immediatamente (rendering immediato) o su richiesta (rendering ritardato). Per ogni formato degli Appunti in cui si forniscono dati passando il formato degli Appunti da utilizzare (e una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) facoltativa), chiamare [DelayRenderData](#delayrenderdata).

Per ulteriori informazioni sulle origini dati e sul trasferimento dei dati, vedere l'articolo [Oggetti dati e origini dati (OLE).](../../mfc/data-objects-and-data-sources-ole.md) Inoltre, l'articolo [Argomenti degli Appunti](../../mfc/clipboard.md) descrive il meccanismo degli Appunti OLE.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleDataSource`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxole.h

## <a name="coledatasourcecachedata"></a><a name="cachedata"></a>COleDataSource::CacheData

Chiamare questa funzione per specificare un formato in cui vengono offerti i dati durante le operazioni di trasferimento dei dati.

```cpp
void CacheData(
    CLIPFORMAT cfFormat,
    LPSTGMEDIUM lpStgMedium,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*Formato cf*<br/>
Formato degli Appunti in cui devono essere offerti i dati. Questo parametro può essere uno dei formati degli Appunti predefiniti o il valore restituito dalla funzione nativa [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) di Windows.

*lpStgMedia*<br/>
Punta a una struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) contenente i dati nel formato specificato.

*lpFormatEtc (in questo campo)*<br/>
Punta a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che descrive il formato in cui i dati devono essere offerti. Specificare un valore per questo parametro se si desidera specificare informazioni aggiuntive sul formato oltre al formato degli Appunti specificato da *cfFormat*. Se è NULL, i valori predefiniti vengono `FORMATETC` utilizzati per gli altri campi nella struttura.

### <a name="remarks"></a>Osservazioni

È necessario fornire i dati, perché questa funzione li fornisce utilizzando il rendering immediato. I dati vengono memorizzati nella cache fino a quando necessario.

Fornire i dati utilizzando una struttura [STGMEDIUM.](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) È inoltre possibile `CacheGlobalData` utilizzare la funzione membro se la quantità di dati che si sta fornendo è sufficientemente piccola da essere trasferita in modo efficiente utilizzando un HGLOBAL.

Dopo la `CacheData` chiamata `ptd` al `lpFormatEtc` membro di e il contenuto di *lpStgMedium* sono di proprietà dell'oggetto dati, non dal chiamante.

Per utilizzare il rendering ritardato, chiamare la funzione membro [DelayRenderData](#delayrenderdata) o [DelayRenderFileData.](#delayrenderfiledata) Per ulteriori informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [Oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).

Per ulteriori informazioni, vedere le strutture [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) e [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in Windows SDK.

Per altre informazioni, vedere [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) in Windows SDK.

## <a name="coledatasourcecacheglobaldata"></a><a name="cacheglobaldata"></a>COleDataSource::CacheGlobalData

Chiamare questa funzione per specificare un formato in cui vengono offerti i dati durante le operazioni di trasferimento dei dati.

```cpp
void CacheGlobalData(
    CLIPFORMAT cfFormat,
    HGLOBAL hGlobal,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*Formato cf*<br/>
Formato degli Appunti in cui devono essere offerti i dati. Questo parametro può essere uno dei formati degli Appunti predefiniti o il valore restituito dalla funzione nativa [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) di Windows.

*Hglobal*<br/>
Handle per il blocco di memoria globale contenente i dati nel formato specificato.

*lpFormatEtc (in questo campo)*<br/>
Punta a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che descrive il formato in cui i dati devono essere offerti. Specificare un valore per questo parametro se si desidera specificare informazioni aggiuntive sul formato oltre al formato degli Appunti specificato da *cfFormat*. Se è NULL, i valori predefiniti vengono `FORMATETC` utilizzati per gli altri campi nella struttura.

### <a name="remarks"></a>Osservazioni

Questa funzione fornisce i dati utilizzando il rendering immediato, pertanto è necessario fornire i dati quando si chiama la funzione; i dati vengono memorizzati nella cache fino a quando necessario. Utilizzare `CacheData` la funzione membro se si fornisce una grande quantità di dati o se è necessario un supporto di archiviazione strutturato.

Per utilizzare il rendering ritardato, chiamare la funzione membro [DelayRenderData](#delayrenderdata) o [DelayRenderFileData.](#delayrenderfiledata) Per ulteriori informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [Oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).

Per ulteriori informazioni, vedere la struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in Windows SDK.

Per altre informazioni, vedere [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) in Windows SDK.

## <a name="coledatasourcecoledatasource"></a><a name="coledatasource"></a>COleDataSource::COleDataSource

Costruisce un oggetto `COleDataSource`.

```
COleDataSource();
```

## <a name="coledatasourcedelayrenderdata"></a><a name="delayrenderdata"></a>COleDataSource::DelayRenderData

Chiamare questa funzione per specificare un formato in cui vengono offerti i dati durante le operazioni di trasferimento dei dati.

```cpp
void DelayRenderData(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*Formato cf*<br/>
Formato degli Appunti in cui devono essere offerti i dati. Questo parametro può essere uno dei formati degli Appunti predefiniti o il valore restituito dalla funzione nativa [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) di Windows.

*lpFormatEtc (in questo campo)*<br/>
Punta a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che descrive il formato in cui i dati devono essere offerti. Specificare un valore per questo parametro se si desidera specificare informazioni aggiuntive sul formato oltre al formato degli Appunti specificato da *cfFormat*. Se è NULL, i valori predefiniti vengono `FORMATETC` utilizzati per gli altri campi nella struttura.

### <a name="remarks"></a>Osservazioni

Questa funzione fornisce i dati utilizzando il rendering ritardato, pertanto i dati non vengono forniti immediatamente. Il [OnRenderData](#onrenderdata) o [OnRenderGlobalData](#onrenderglobaldata) funzione membro viene chiamata per richiedere i dati.

Utilizzare questa funzione se non si intende `CFile` fornire i dati tramite un oggetto. Se si intende fornire i `CFile` dati tramite un oggetto, chiamare il [DelayRenderFileData](#delayrenderfiledata) funzione membro. Per ulteriori informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [Oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).

Per utilizzare il rendering immediato, chiamare la funzione membro [CacheData](#cachedata) o [CacheGlobalData.](#cacheglobaldata)

Per ulteriori informazioni, vedere la struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in Windows SDK.

Per altre informazioni, vedere [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) in Windows SDK.

## <a name="coledatasourcedelayrenderfiledata"></a><a name="delayrenderfiledata"></a>COleDataSource::DelayRenderFileData

Chiamare questa funzione per specificare un formato in cui vengono offerti i dati durante le operazioni di trasferimento dei dati.

```cpp
void DelayRenderFileData(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*Formato cf*<br/>
Formato degli Appunti in cui devono essere offerti i dati. Questo parametro può essere uno dei formati degli Appunti predefiniti o il valore restituito dalla funzione nativa [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) di Windows.

*lpFormatEtc (in questo campo)*<br/>
Punta a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che descrive il formato in cui i dati devono essere offerti. Specificare un valore per questo parametro se si desidera specificare informazioni aggiuntive sul formato oltre al formato degli Appunti specificato da *cfFormat*. Se è NULL, i valori predefiniti vengono `FORMATETC` utilizzati per gli altri campi nella struttura.

### <a name="remarks"></a>Osservazioni

Questa funzione fornisce i dati utilizzando il rendering ritardato, pertanto i dati non vengono forniti immediatamente. Il [OnRenderFileData](#onrenderfiledata) funzione membro viene chiamata per richiedere i dati.

Utilizzare questa funzione se si `CFile` intende utilizzare un oggetto per fornire i dati. Se non si intende `CFile` utilizzare un oggetto, chiamare la funzione membro [DelayRenderData](#delayrenderdata) . Per ulteriori informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [Oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).

Per utilizzare il rendering immediato, chiamare la funzione membro [CacheData](#cachedata) o [CacheGlobalData.](#cacheglobaldata)

Per ulteriori informazioni, vedere la struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in Windows SDK.

Per altre informazioni, vedere [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) in Windows SDK.

## <a name="coledatasourcedelaysetdata"></a><a name="delaysetdata"></a>COleDataSource::DelaySetData

Chiamare questa funzione per supportare la modifica del contenuto dell'origine dati.

```cpp
void DelaySetData(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*Formato cf*<br/>
Formato degli Appunti in cui devono essere inseriti i dati. Questo parametro può essere uno dei formati degli Appunti predefiniti o il valore restituito dalla funzione nativa [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) di Windows.

*lpFormatEtc (in questo campo)*<br/>
Punta a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che descrive il formato in cui i dati devono essere sostituiti. Specificare un valore per questo parametro se si desidera specificare informazioni aggiuntive sul formato oltre al formato degli Appunti specificato da *cfFormat*. Se è NULL, i valori predefiniti vengono `FORMATETC` utilizzati per gli altri campi nella struttura.

### <a name="remarks"></a>Osservazioni

[OnSetData](#onsetdata) verrà chiamato dal framework quando questo accade. Viene utilizzato solo quando il framework restituisce l'origine dati da [COleServerItem::GetDataSource](../../mfc/reference/coleserveritem-class.md#getdatasource). Se `DelaySetData` non viene `OnSetData` chiamato, la funzione non verrà mai chiamata. `DelaySetData`deve essere chiamato per `FORMATETC` ogni Appunti o formato supportato.

Per ulteriori informazioni, vedere la struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in Windows SDK.

Per altre informazioni, vedere [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) in Windows SDK.

## <a name="coledatasourcedodragdrop"></a><a name="dodragdrop"></a>COleDataSource::DoDragDrop

Chiamare `DoDragDrop` la funzione membro per eseguire un'operazione di trascinamento della selezione per questa origine dati, in genere in un [CWnd::OnLButtonDown](../../mfc/reference/cwnd-class.md#onlbuttondown) gestore.

```
DROPEFFECT DoDragDrop(
    DWORD dwEffects = DROPEFFECT_COPY|DROPEFFECT_MOVE|DROPEFFECT_LINK,
    LPCRECT lpRectStartDrag = NULL,
    COleDropSource* pDropSource = NULL);
```

### <a name="parameters"></a>Parametri

*dwEffetti*<br/>
Operazioni di trascinamento della selezione consentite in questa origine dati. Può essere uno o più dei seguenti:

- DROPEFFECT_COPY È possibile eseguire un'operazione di copia.

- DROPEFFECT_MOVE È possibile eseguire un'operazione di spostamento.

- DROPEFFECT_LINK È stato possibile stabilire un collegamento dai dati eliminati ai dati originali.

- DROPEFFECT_SCROLL Indica che potrebbe verificarsi un'operazione di scorrimento di trascinamento.

*lpRectStartDrag*<br/>
Puntatore al rettangolo che definisce il punto in cui inizia effettivamente il trascinamento. Per ulteriori informazioni, vedere la sezione Osservazioni successiva.

*pDropSource (informazioni in stato in questo campo)*<br/>
Punta a un'origine di rilascio. Se NULL verrà utilizzata un'implementazione predefinita di [COleDropSource.If](../../mfc/reference/coledropsource-class.md) NULL then a default implementation of COleDropSource will be used.

### <a name="return-value"></a>Valore restituito

Effetto di rilascio generato dall'operazione di trascinamento della selezione; in caso contrario, DROPEFFECT_NONE se l'operazione non inizia mai perché l'utente ha rilasciato il pulsante del mouse prima di lasciare il rettangolo fornito.

### <a name="remarks"></a>Osservazioni

L'operazione di trascinamento della selezione non viene avviata immediatamente. Attende fino a quando il cursore del mouse lascia il rettangolo specificato da *lpRectStartDrag* o fino a quando non è stato passato un numero specificato di millisecondi. Se *lpRectStartDrag* è NULL, la dimensione del rettangolo è di un pixel.

Il tempo di ritardo è specificato da un'impostazione della chiave del Registro di sistema. È possibile modificare il tempo di ritardo chiamando [CWinApp::WriteProfileString](../../mfc/reference/cwinapp-class.md#writeprofilestring) o [CWinApp::WriteProfileInt](../../mfc/reference/cwinapp-class.md#writeprofileint). Se non si specifica il tempo di ritardo, viene utilizzato un valore predefinito di 200 millisecondi. Il tempo di ritardo del trascinamento viene memorizzato come segue:

- Il tempo di ritardo del trascinamento di Windows NT è memorizzato in HKEY_LOCAL_MACHINE SOFTWARE .

- Il tempo di ritardo del trascinamento di Windows 3.x viene memorizzato nel file WIN. INI, nella sezione [Windows.

- Il tempo di ritardo di trascinamento di Windows 95/98 viene archiviato in una versione memorizzata nella cache di WIN. InI.

Per ulteriori informazioni su come vengono archiviate le informazioni sul ritardo di trascinamento nel Registro di sistema o nel file . INI, vedere [WriteProfileString](/windows/win32/api/winbase/nf-winbase-writeprofilestringw) in Windows SDK.

Per ulteriori informazioni, vedere l'articolo [OLE drag and drop](../../mfc/drag-and-drop-ole.md).

## <a name="coledatasourceempty"></a><a name="empty"></a>COleDataSource::Vuoto

Chiamare questa funzione `COleDataSource` per svuotare l'oggetto di dati.

```cpp
void Empty();
```

### <a name="remarks"></a>Osservazioni

Sia i formati di rendering memorizzati nella cache che i formati di rendering ritardato vengono svuotati in modo che possano essere riutilizzati.

Per ulteriori informazioni, vedere [ReleaseStgMedium](/windows/win32/api/ole2/nf-ole2-releasestgmedium) in Windows SDK.

## <a name="coledatasourceflushclipboard"></a><a name="flushclipboard"></a>COleDataSource::FlushClipboard

Esegue il rendering dei dati negli Appunti e quindi consente di incollare i dati dagli Appunti dopo l'arresto dell'applicazione.

```
static void PASCAL FlushClipboard();
```

### <a name="remarks"></a>Osservazioni

Utilizzare [SetClipboard](#setclipboard) per inserire dati negli Appunti.

## <a name="coledatasourcegetclipboardowner"></a><a name="getclipboardowner"></a>COleDataSource::GetClipboardOwner

Determina se i dati negli Appunti sono stati modificati dall'ultima chiamata [di SetClipboard](#setclipboard) e, in caso affermativo, identifica il proprietario corrente.

```
static COleDataSource* PASCAL GetClipboardOwner();
```

### <a name="return-value"></a>Valore restituito

Origine dati attualmente negli Appunti oppure NULL se negli Appunti non è presente alcun elemento negli Appunti o se gli Appunti non sono di proprietà dell'applicazione chiamante.

## <a name="coledatasourceonrenderdata"></a><a name="onrenderdata"></a>COleDataSource::OnRenderData

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

Il formato specificato è posizionato `COleDataSource` in precedenza nell'oggetto utilizzando la funzione membro [DelayRenderData](#delayrenderdata) o [DelayRenderFileData](#delayrenderfiledata) per il rendering ritardato. L'implementazione predefinita di questa funzione chiamerà [OnRenderFileData](#onrenderfiledata) o [OnRenderGlobalData](#onrenderglobaldata) se il supporto di archiviazione fornito è rispettivamente un file o una memoria. Se non viene fornito alcun o più di questi formati, l'implementazione predefinita restituirà 0 e non eseguirà alcuna operazione. Per ulteriori informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [Oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).

Se *lpStgMedium*-> *tymed* è `STGMEDIUM` TYMED_NULL, l'oggetto deve essere allocato e riempito come specificato da *lpFormatEtc->tymed*. Se non è TYMED_NULL, il `STGMEDIUM` deve essere compilato sul posto con i dati.

Si tratta di un oggetto sottoponibile a override avanzato. Eseguire l'override di questa funzione per fornire i dati nel formato e nel supporto richiesti. A seconda dei dati, è possibile eseguire l'override di una delle altre versioni di questa funzione. Se le dimensioni dei dati sono `OnRenderGlobalData`di piccole dimensioni e fisse, eseguire l'override di . Se i dati si trova in un file `OnRenderFileData`o sono di dimensioni variabili, eseguire l'override di .

Per ulteriori informazioni, vedere le strutture [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) e [FORMATETC,](/windows/win32/api/objidl/ns-objidl-formatetc) il tipo di enumerazione [TYMED](/windows/win32/api/objidl/ne-objidl-tymed) e [IDataObject::GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata) in Windows SDK.

## <a name="coledatasourceonrenderfiledata"></a><a name="onrenderfiledata"></a>COleDataSource::OnRenderFileData

Chiamato dal framework per recuperare i dati nel formato specificato quando il supporto di archiviazione specificato è un file.

```
virtual BOOL OnRenderFileData(
    LPFORMATETC lpFormatEtc,
    CFile* pFile);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc (in questo campo)*<br/>
Punta alla struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che specifica il formato in cui vengono richieste le informazioni.

*pFile (File)*<br/>
Punta a un [CFile](../../mfc/reference/cfile-class.md) oggetto in cui deve essere eseguito il rendering dei dati.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il formato specificato è posizionato `COleDataSource` in precedenza nell'oggetto utilizzando la funzione membro [DelayRenderData](#delayrenderdata) per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce semplicemente FALSE.

Si tratta di un oggetto sottoponibile a override avanzato. Eseguire l'override di questa funzione per fornire i dati nel formato e nel supporto richiesti. A seconda dei dati, è possibile eseguire l'override di una delle altre versioni di questa funzione. Se si desidera gestire più supporti di archiviazione, eseguire l'override [di OnRenderData](#onrenderdata). Se i dati si trova in un file `OnRenderFileData`o sono di dimensioni variabili, eseguire l'override di . Per ulteriori informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [Oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).

Per ulteriori informazioni, vedere la struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) e [IDataObject::GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata) in Windows SDK.

## <a name="coledatasourceonrenderglobaldata"></a><a name="onrenderglobaldata"></a>COleDataSource::OnRenderGlobalData

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
Punta a un handle alla memoria globale in cui devono essere restituiti i dati. Se non è ancora stato allocato, questo parametro può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il formato specificato è posizionato `COleDataSource` in precedenza nell'oggetto utilizzando la funzione membro [DelayRenderData](#delayrenderdata) per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce semplicemente FALSE.

Se *phGlobal* è NULL, un nuovo HGLOBAL deve essere allocato e restituito in *phGlobal*. In caso contrario, il HGLOBAL specificato da *phGlobal* deve essere riempito con i dati. La quantità di dati inseriti in HGLOBAL non deve superare la dimensione corrente del blocco di memoria. Inoltre, il blocco non può essere riallocato a una dimensione maggiore.

Si tratta di un oggetto sottoponibile a override avanzato. Eseguire l'override di questa funzione per fornire i dati nel formato e nel supporto richiesti. A seconda dei dati, è possibile eseguire l'override di una delle altre versioni di questa funzione. Se si desidera gestire più supporti di archiviazione, eseguire l'override [di OnRenderData](#onrenderdata). Se i dati si trova in un file o sono di dimensioni variabili, eseguire l'override [di OnRenderFileData](#onrenderfiledata). Per ulteriori informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [Oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).

Per ulteriori informazioni, vedere la struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) e [IDataObject::GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata) in Windows SDK.

## <a name="coledatasourceonsetdata"></a><a name="onsetdata"></a>COleDataSource::OnSetData

Chiamato dal framework per impostare o `COleDataSource` sostituire i dati nell'oggetto nel formato specificato.

```
virtual BOOL OnSetData(
    LPFORMATETC lpFormatEtc,
    LPSTGMEDIUM lpStgMedium,
    BOOL bRelease);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc (in questo campo)*<br/>
Punta alla struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che specifica il formato in cui i dati vengono sostituiti.

*lpStgMedia*<br/>
Punta alla struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) contenente i dati che `COleDataSource` sostituiranno il contenuto corrente dell'oggetto.

*bRilascio*<br/>
Indica chi ha la proprietà del supporto di archiviazione dopo aver completato la chiamata di funzione. Il chiamante decide chi è responsabile del rilascio delle risorse allocate per conto del supporto di archiviazione. Il chiamante esegue questa operazione impostando *bRelease*. Se *bRelease* è diverso da zero, l'origine dati assume la proprietà, liberando il supporto al termine dell'utilizzo. Quando *bRelease* è 0, il chiamante mantiene la proprietà e l'origine dati può utilizzare il supporto di archiviazione solo per la durata della chiamata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'origine dati non assume la proprietà dei dati fino a quando non li ha ottenuti correttamente. Ovvero, non assume la `OnSetData` proprietà se restituisce 0. Se l'origine dati assume la proprietà, libera il supporto di archiviazione chiamando la funzione [ReleaseStgMedium.](/windows/win32/api/ole2/nf-ole2-releasestgmedium)

L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione per sostituire i dati nel formato specificato. Si tratta di un oggetto sottoponibile a override avanzato.

Per ulteriori informazioni, vedere le strutture [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) e [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) e le funzioni [ReleaseStgMedium](/windows/win32/api/ole2/nf-ole2-releasestgmedium) e [IDataObject::GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata) in Windows SDK.

## <a name="coledatasourcesetclipboard"></a><a name="setclipboard"></a>COleDataSource::SetClipboard

Inserisce nell'oggetto `COleDataSource` negli Appunti dopo aver chiamato una delle seguenti funzioni: [CacheData](#cachedata), [CacheGlobalData](#cacheglobaldata), [DelayRenderData](#delayrenderdata)o [DelayRenderFileData](#delayrenderfiledata).

```cpp
void SetClipboard();
```

## <a name="see-also"></a>Vedere anche

[Esempio MFC HIERSVR](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC OCLIENT](../../overview/visual-cpp-samples.md)<br/>
[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDataObject](../../mfc/reference/coledataobject-class.md)

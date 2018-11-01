---
title: Classe COleDataObject
ms.date: 11/04/2016
f1_keywords:
- COleDataObject
- AFXOLE/COleDataObject
- AFXOLE/COleDataObject::COleDataObject
- AFXOLE/COleDataObject::Attach
- AFXOLE/COleDataObject::AttachClipboard
- AFXOLE/COleDataObject::BeginEnumFormats
- AFXOLE/COleDataObject::Detach
- AFXOLE/COleDataObject::GetData
- AFXOLE/COleDataObject::GetFileData
- AFXOLE/COleDataObject::GetGlobalData
- AFXOLE/COleDataObject::GetNextFormat
- AFXOLE/COleDataObject::IsDataAvailable
- AFXOLE/COleDataObject::Release
helpviewer_keywords:
- COleDataObject [MFC], COleDataObject
- COleDataObject [MFC], Attach
- COleDataObject [MFC], AttachClipboard
- COleDataObject [MFC], BeginEnumFormats
- COleDataObject [MFC], Detach
- COleDataObject [MFC], GetData
- COleDataObject [MFC], GetFileData
- COleDataObject [MFC], GetGlobalData
- COleDataObject [MFC], GetNextFormat
- COleDataObject [MFC], IsDataAvailable
- COleDataObject [MFC], Release
ms.assetid: d1cc84be-2e1c-4bb3-a8a0-565eb08aaa34
ms.openlocfilehash: 40c7d87e2dafa3c9b40e8ebda60b15a7b32709eb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50540283"
---
# <a name="coledataobject-class"></a>Classe COleDataObject

Utilizzata nei trasferimenti di dati per il recupero in diversi formati dagli Appunti, mediante il trascinamento della selezione o da un elemento OLE incorporato.

## <a name="syntax"></a>Sintassi

```
class COleDataObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDataObject::COleDataObject](#coledataobject)|Costruisce un oggetto `COleDataObject`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDataObject::Attach](#attach)|Collega l'oggetto dati OLE specificata al `COleDataObject`.|
|[COleDataObject::AttachClipboard](#attachclipboard)|Collega l'oggetto dati negli Appunti.|
|[COleDataObject](#beginenumformats)|Prepara per uno o più successive `GetNextFormat` chiamate.|
|[COleDataObject::Detach](#detach)|Scollega associato `IDataObject` oggetto.|
|[COleDataObject::GetData](#getdata)|Copia i dati dall'oggetto OLE dati collegato in un formato specificato.|
|[COleDataObject::GetFileData](#getfiledata)|Copia i dati dall'oggetto OLE dati collegato in un `CFile` puntatore nel formato specificato.|
|[COleDataObject::GetGlobalData](#getglobaldata)|Copia i dati dall'oggetto OLE dati collegato in un `HGLOBAL` nel formato specificato.|
|[COleDataObject::GetNextFormat](#getnextformat)|Restituisce il formato di dati successivo disponibile.|
|[COleDataObject:: IsDataAvailable](#isdataavailable)|Controlla se i dati sono disponibili in un formato specificato.|
|[COleDataObject::Release](#release)|Consente di scollegare e rilascia l'oggetto associato `IDataObject` oggetto.|

## <a name="remarks"></a>Note

`COleDataObject` non è una classe di base.

Questi tipi di trasferimenti di dati includono un'origine e destinazione. L'origine dati viene implementato come un oggetto del [COleDataSource](../../mfc/reference/coledatasource-class.md) classe. Ogni volta che un'applicazione di destinazione contiene dati eliminati in esso o viene richiesto di eseguire un'operazione Incolla dagli Appunti, un oggetto del `COleDataObject` classe deve essere creata.

Questa classe consente di determinare la presenza di dati in un formato specificato. È possibile inoltre enumerare i formati di dati disponibili oppure controllare se un formato specifico sia disponibile e quindi recuperare i dati nel formato preferito. Il recupero degli oggetti può essere eseguita in diversi modi, tra cui l'uso di un [CFile](../../mfc/reference/cfile-class.md), un HGLOBAL oppure un `STGMEDIUM` struttura.

Per altre informazioni, vedere la [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium) struttura nel SDK di Windows.

Per altre informazioni sull'uso di oggetti dati nell'applicazione, vedere l'articolo [oggetti dati e origini dati (OLE)](../../mfc/data-objects-and-data-sources-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`COleDataObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

##  <a name="attach"></a>  COleDataObject::Attach

Chiamare questa funzione per associare il `COleDataObject` con un oggetto dati OLE.

```
void Attach(
    LPDATAOBJECT lpDataObject,
    BOOL bAutoRelease = TRUE);
```

### <a name="parameters"></a>Parametri

*lpDataObject*<br/>
Punta a un oggetto dati OLE.

*bAutoRelease*<br/>
TRUE se l'oggetto dati OLE deve essere rilasciato quando il `COleDataObject` oggetto è eliminata; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [IDataObject](/windows/desktop/api/objidl/nn-objidl-idataobject) nel SDK di Windows.

##  <a name="attachclipboard"></a>  COleDataObject::AttachClipboard

Chiamare questa funzione per connettere l'oggetto dati che si trova negli Appunti per la `COleDataObject` oggetto.

```
BOOL AttachClipboard();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

> [!NOTE]
>  Chiamare questa funzione blocca gli Appunti fino al rilascio di questo oggetto dati. L'oggetto dati viene rilasciato nel distruttore per la `COleDataObject`. Per altre informazioni, vedere [OpenClipboard](/windows/desktop/api/winuser/nf-winuser-openclipboard) e [CloseClipboard](/windows/desktop/api/winuser/nf-winuser-closeclipboard) nella documentazione Win32.

##  <a name="beginenumformats"></a>  COleDataObject

Chiamare questa funzione per la preparazione per le chiamate successive a `GetNextFormat` per recuperare un elenco di formati di dati dall'elemento.

```
void BeginEnumFormats();
```

### <a name="remarks"></a>Note

Dopo una chiamata a `BeginEnumFormats`, la posizione del primo formato supportato da questo oggetto dati viene archiviata. Le chiamate successive a `GetNextFormat` enumera l'elenco dei formati disponibili nell'oggetto dati.

Per controllare la disponibilità dei dati in un formato specifico, usare [COleDataObject:: IsDataAvailable](#isdataavailable).

Per altre informazioni, vedere [IDataObject::EnumFormatEtc](/windows/desktop/api/objidl/nf-objidl-idataobject-enumformatetc) nel SDK di Windows.

##  <a name="coledataobject"></a>  COleDataObject::COleDataObject

Costruisce un oggetto `COleDataObject`.

```
COleDataObject();
```

### <a name="remarks"></a>Note

Una chiamata a [COleDataObject::Attach](#attach) oppure [COleDataObject::AttachClipboard](#attachclipboard) deve essere effettuata prima di chiamare altro `COleDataObject` funzioni.

> [!NOTE]
>  Poiché uno dei parametri per i gestori di trascinamento e rilascio è un puntatore a un `COleDataObject`, non è necessario chiamare questo costruttore per il supporto di trascinamento della selezione.

##  <a name="detach"></a>  COleDataObject::Detach

Chiamare questa funzione per scollegare il `COleDataObject` oggetto dall'oggetto OLE associato i dati senza rilasciare l'oggetto dati.

```
LPDATAOBJECT Detach();
```

### <a name="return-value"></a>Valore restituito

Un puntatore all'oggetto data OLE che è stato scollegato.

### <a name="remarks"></a>Note

##  <a name="getdata"></a>  COleDataObject::GetData

Chiamare questa funzione per recuperare i dati dall'elemento nel formato specificato.

```
BOOL GetData(
    CLIPFORMAT cfFormat,
    LPSTGMEDIUM lpStgMedium,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*cfFormat*<br/>
Il formato in cui sono necessario restituire i dati. Questo parametro può essere uno dei formati Appunti predefiniti o il valore restituito dalla finestra di Windows nativa [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) (funzione).

*lpStgMedium*<br/>
Punta a un [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium) struttura che riceverà i dati.

*lpFormatEtc*<br/>
Punta a un [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura che descrive il formato in cui sono necessario restituire i dati. Specificare un valore per questo parametro se si desidera specificare le informazioni sul formato aggiuntive oltre il formato degli Appunti specificato da *cfFormat*. Se è NULL, vengono utilizzati i valori predefiniti per gli altri campi di `FORMATETC` struttura.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [IDataObject:: GetData](/windows/desktop/api/objidl/nf-objidl-idataobject-getdata), [STGMEDIUM](/windows/desktop/api/objidl/ns-objidl-tagstgmedium), e [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) nel SDK di Windows.

Per altre informazioni, vedere [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) nel SDK di Windows.

##  <a name="getfiledata"></a>  COleDataObject::GetFileData

Chiamare questa funzione per creare un `CFile` oppure `CFile`-oggetto derivato e per recuperare i dati nel formato specificato in un `CFile` puntatore.

```
CFile* GetFileData(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*cfFormat*<br/>
Il formato in cui sono necessario restituire i dati. Questo parametro può essere uno dei formati Appunti predefiniti o il valore restituito dalla finestra di Windows nativa [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) (funzione).

*lpFormatEtc*<br/>
Punta a un [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura che descrive il formato in cui sono necessario restituire i dati. Specificare un valore per questo parametro se si desidera specificare le informazioni sul formato aggiuntive oltre il formato degli Appunti specificato da *cfFormat*. Se è NULL, vengono utilizzati i valori predefiniti per gli altri campi di `FORMATETC` struttura.

### <a name="return-value"></a>Valore restituito

Puntatore al nuovo `CFile` o `CFile`-derivato l'oggetto che contiene i dati se riesce; in caso contrario, NULL.

### <a name="remarks"></a>Note

A seconda del supporto di cui i dati vengono archiviati in, il tipo effettivo a cui punta il valore restituito può essere `CFile`, `CSharedFile`, o `COleStreamFile`.

> [!NOTE]
>  Il `CFile` oggetto a cui accede il valore restituito di questa funzione è di proprietà dal chiamante. È responsabilità del chiamante **eliminare** il `CFile` oggetto, in tal modo la chiusura del file.

Per altre informazioni, vedere [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) nel SDK di Windows.

Per altre informazioni, vedere [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) nel SDK di Windows.

##  <a name="getglobaldata"></a>  COleDataObject::GetGlobalData

Chiamare questa funzione per allocare un blocco di memoria globale e recuperare i dati nel formato specificato in un HGLOBAL.

```
HGLOBAL GetGlobalData(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*cfFormat*<br/>
Il formato in cui sono necessario restituire i dati. Questo parametro può essere uno dei formati Appunti predefiniti o il valore restituito dalla finestra di Windows nativa [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) (funzione).

*lpFormatEtc*<br/>
Punta a un [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura che descrive il formato in cui sono necessario restituire i dati. Specificare un valore per questo parametro se si desidera specificare le informazioni sul formato aggiuntive oltre il formato degli Appunti specificato da *cfFormat*. Se è NULL, vengono utilizzati i valori predefiniti per gli altri campi di `FORMATETC` struttura.

### <a name="return-value"></a>Valore restituito

L'handle del blocco di memoria globale che contiene i dati se ha esito positivo. in caso contrario NULL.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) nel SDK di Windows.

Per altre informazioni, vedere [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) nel SDK di Windows.

##  <a name="getnextformat"></a>  COleDataObject::GetNextFormat

Chiamare questa funzione più volte per ottenere tutti i formati disponibili per il recupero dei dati dall'elemento.

```
BOOL GetNextFormat(LPFORMATETC lpFormatEtc);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc*<br/>
Punta al [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura che riceve le informazioni di formato, al termine della chiamata di funzione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è disponibile; un altro formato in caso contrario 0.

### <a name="remarks"></a>Note

Dopo una chiamata a [COleDataObject](#beginenumformats), la posizione del primo formato supportato da questo oggetto dati viene archiviata. Le chiamate successive a `GetNextFormat` enumera l'elenco dei formati disponibili nell'oggetto dati. Usare queste funzioni per elencare i formati disponibili.

Per verificare la disponibilità di un determinato formato, chiamare [COleDataObject:: IsDataAvailable](#isdataavailable).

Per altre informazioni, vedere [IEnumXXXX::Next](https://msdn.microsoft.com/library/ms695273.aspx) nel SDK di Windows.

##  <a name="isdataavailable"></a>  COleDataObject:: IsDataAvailable

Chiamare questa funzione per determinare se un particolare formato è disponibile per il recupero dei dati dall'elemento OLE.

```
BOOL IsDataAvailable(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*cfFormat*<br/>
Il formato di dati degli Appunti da utilizzare nella struttura a cui punta *lpFormatEtc*. Questo parametro può essere uno dei formati Appunti predefiniti o il valore restituito dalla finestra di Windows nativa [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) (funzione).

*lpFormatEtc*<br/>
Punta a un [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura che descrive il formato desiderato. Specificare un valore per questo parametro solo se si desidera specificare le informazioni sul formato aggiuntive oltre il formato degli Appunti specificato da *cfFormat*. Se è NULL, vengono utilizzati i valori predefiniti per gli altri campi di `FORMATETC` struttura.

### <a name="return-value"></a>Valore restituito

Diverso da zero se i dati sono disponibili nel formato specificato. in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione è utile prima di chiamare `GetData`, `GetFileData`, o `GetGlobalData`.

Per altre informazioni, vedere [IDataObject::QueryGetData](/windows/desktop/api/objidl/nf-objidl-idataobject-querygetdata) e [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) nel SDK di Windows.

Per altre informazioni, vedere [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) nel SDK di Windows.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CRichEditView::QueryAcceptData](../../mfc/reference/cricheditview-class.md#queryacceptdata).

##  <a name="release"></a>  COleDataObject::Release

Chiamare questa funzione per rilasciare la proprietà del [IDataObject](/windows/desktop/api/objidl/nn-objidl-idataobject) oggetto che era precedentemente associato il `COleDataObject` oggetto.

```
void Release();
```

### <a name="remarks"></a>Note

Il `IDataObject` è stato associato il `COleDataObject` chiamando `Attach` o `AttachClipboard` in modo esplicito o dal framework. Se il *bAutoRelease* del parametro `Attach` è FALSE, il `IDataObject` oggetto non verrà rilasciato. In questo caso, il chiamante è responsabile del rilascio di `IDataObject` chiamando [IUnknown:: Release](/windows/desktop/api/unknwn/nf-unknwn-iunknown-release).

## <a name="see-also"></a>Vedere anche

[Esempio MFC HIERSVR](../../visual-cpp-samples.md)<br/>
[Esempio MFC OCLIENT](../../visual-cpp-samples.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDataSource](../../mfc/reference/coledatasource-class.md)<br/>
[Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)<br/>
[Classe COleServerItem](../../mfc/reference/coleserveritem-class.md)

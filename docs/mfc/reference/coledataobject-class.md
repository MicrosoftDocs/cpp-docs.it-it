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
ms.openlocfilehash: 5e1545a033ab482e838fbc944b0ca9b3e543d651
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366127"
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
|[Oggetto COleDataObject::COleDataObject](#coledataobject)|Costruisce un oggetto `COleDataObject`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto COleDataObject::Attach](#attach)|Associa l'oggetto dati OLE `COleDataObject`specificato all'oggetto .|
|[COleDataObject::AttachClipboard](#attachclipboard)|Associa l'oggetto dati negli Appunti.|
|[Oggetto COleDataObject::BeginEnumFormats](#beginenumformats)|Si prepara per una `GetNextFormat` o più chiamate successive.|
|[Oggetto COleDataObject::Detach](#detach)|Scollega l'oggetto associato. `IDataObject`|
|[Oggetto DatiDatiCo::DatiCOleDataObject::GetData](#getdata)|Copia i dati dall'oggetto dati OLE associato in un formato specificato.|
|[Oggetto COleDataObject::GetFileData](#getfiledata)|Copia i dati dall'oggetto dati OLE associato in un `CFile` puntatore nel formato specificato.|
|[Oggetto DatiObject::GetGlobalDataCOleDataObject::GetGlobalData](#getglobaldata)|Copia i dati dall'oggetto dati OLE associato in un `HGLOBAL` nel formato specificato.|
|[Oggetto COleDataObject::GetNextFormat](#getnextformat)|Restituisce il formato dati successivo disponibile.|
|[COleDataObject::IsDataAvailable](#isdataavailable)|Controlla se i dati sono disponibili in un formato specificato.|
|[COleDataObject::Release](#release)|Scollega e rilascia `IDataObject` l'oggetto associato.|

## <a name="remarks"></a>Osservazioni

`COleDataObject`non dispone di una classe base.

Questi tipi di trasferimenti di dati includono un'origine e una destinazione. L'origine dati viene implementata come oggetto della classe [COleDataSource.](../../mfc/reference/coledatasource-class.md) Ogni volta che un'applicazione di destinazione contiene dati rilasciati o viene `COleDataObject` chiesto di eseguire un'operazione Incolla dagli Appunti, è necessario creare un oggetto della classe.

Questa classe consente di determinare se i dati sono presenti in un formato specificato. È inoltre possibile enumerare i formati di dati disponibili o verificare se un determinato formato è disponibile e quindi recuperare i dati nel formato preferito. Il recupero degli oggetti può essere eseguito in diversi modi, tra cui `STGMEDIUM` l'utilizzo di un [CFile](../../mfc/reference/cfile-class.md), un HGLOBAL o una struttura.

Per ulteriori informazioni, vedere la struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) in Windows SDK.

Per ulteriori informazioni sull'utilizzo di oggetti dati nell'applicazione, vedere l'articolo [Oggetti dati e origini dati (OLE).](../../mfc/data-objects-and-data-sources-ole.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`COleDataObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxole.h

## <a name="coledataobjectattach"></a><a name="attach"></a>Oggetto COleDataObject::Attach

Chiamare questa funzione `COleDataObject` per associare l'oggetto a un oggetto dati OLE.

```
void Attach(
    LPDATAOBJECT lpDataObject,
    BOOL bAutoRelease = TRUE);
```

### <a name="parameters"></a>Parametri

*lpDataObject (oggetto lpDataObject)*<br/>
Punta a un oggetto dati OLE.

*bRilascioautomatico*<br/>
TRUESe l'oggetto dati OLE `COleDataObject` deve essere rilasciato quando l'oggetto viene eliminato. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [IDataObject](/windows/win32/api/objidl/nn-objidl-idataobject) in Windows SDK.

## <a name="coledataobjectattachclipboard"></a><a name="attachclipboard"></a>COleDataObject::AttachClipboard

Chiamare questa funzione per collegare all'oggetto dati `COleDataObject` attualmente presente gli Appunti all'oggetto.

```
BOOL AttachClipboard();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> La chiamata a questa funzione blocca gli Appunti fino al rilascio di questo oggetto dati. L'oggetto dati viene rilasciato nel `COleDataObject`distruttore per l'oggetto . Per altre informazioni, vedere OpenClipboard e CloseClipboard nel file Win32.For more information, see [OpenClipboard](/windows/win32/api/winuser/nf-winuser-openclipboard) and [CloseClipboard](/windows/win32/api/winuser/nf-winuser-closeclipboard) in the Win32 documenton.

## <a name="coledataobjectbeginenumformats"></a><a name="beginenumformats"></a>Oggetto COleDataObject::BeginEnumFormats

Chiamare questa funzione per preparare `GetNextFormat` le chiamate successive per il recupero di un elenco di formati di dati dall'elemento.

```
void BeginEnumFormats();
```

### <a name="remarks"></a>Osservazioni

Dopo una `BeginEnumFormats`chiamata a , viene memorizzata la posizione del primo formato supportato da questo oggetto dati. Le chiamate `GetNextFormat` successive a enumerano l'elenco dei formati disponibili nell'oggetto dati.

Per verificare la disponibilità dei dati in un determinato formato, utilizzare [COleDataObject::IsDataAvailable](#isdataavailable).

Per ulteriori informazioni, vedere [IDataObject::EnumFormatEtc](/windows/win32/api/objidl/nf-objidl-idataobject-enumformatetc) in Windows SDK.

## <a name="coledataobjectcoledataobject"></a><a name="coledataobject"></a>Oggetto COleDataObject::COleDataObject

Costruisce un oggetto `COleDataObject`.

```
COleDataObject();
```

### <a name="remarks"></a>Osservazioni

Prima di chiamare altre `COleDataObject` funzioni, è necessario effettuare una chiamata a [COleDataObject::Attach](#attach) o [COleDataObject::AttachClipboard](#attachclipboard) .

> [!NOTE]
> Poiché uno dei parametri per i gestori di trascinamento della selezione è un puntatore a un `COleDataObject`oggetto , non è necessario chiamare questo costruttore per supportare il trascinamento della selezione.

## <a name="coledataobjectdetach"></a><a name="detach"></a>Oggetto COleDataObject::Detach

Chiamare questa funzione `COleDataObject` per scollegare l'oggetto dall'oggetto dati OLE associato senza rilasciare l'oggetto dati.

```
LPDATAOBJECT Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto dati OLE scollegato.

### <a name="remarks"></a>Osservazioni

## <a name="coledataobjectgetdata"></a><a name="getdata"></a>Oggetto DatiDatiCo::DatiCOleDataObject::GetData

Chiamare questa funzione per recuperare i dati dall'elemento nel formato specificato.

```
BOOL GetData(
    CLIPFORMAT cfFormat,
    LPSTGMEDIUM lpStgMedium,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*Formato cf*<br/>
Formato in cui devono essere restituiti i dati. Questo parametro può essere uno dei formati degli Appunti predefiniti o il valore restituito dalla funzione nativa [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) di Windows.

*lpStgMedia*<br/>
Punta a una struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1) che riceverà i dati.

*lpFormatEtc (in questo campo)*<br/>
Punta a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che descrive il formato in cui devono essere restituiti i dati. Specificare un valore per questo parametro se si desidera specificare informazioni aggiuntive sul formato oltre al formato degli Appunti specificato da *cfFormat*. Se è NULL, i valori predefiniti vengono utilizzati per gli altri campi nella `FORMATETC` struttura.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [IDataObject::GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata), [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium~r1)e [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in Windows SDK.

Per altre informazioni, vedere [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) in Windows SDK.

## <a name="coledataobjectgetfiledata"></a><a name="getfiledata"></a>Oggetto COleDataObject::GetFileData

Chiamare questa funzione `CFile` per `CFile`creare un oggetto derivato da o `CFile` e recuperare i dati nel formato specificato in un puntatore.

```
CFile* GetFileData(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*Formato cf*<br/>
Formato in cui devono essere restituiti i dati. Questo parametro può essere uno dei formati degli Appunti predefiniti o il valore restituito dalla funzione nativa [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) di Windows.

*lpFormatEtc (in questo campo)*<br/>
Punta a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che descrive il formato in cui devono essere restituiti i dati. Specificare un valore per questo parametro se si desidera specificare informazioni aggiuntive sul formato oltre al formato degli Appunti specificato da *cfFormat*. Se è NULL, i valori predefiniti vengono utilizzati per gli altri campi nella `FORMATETC` struttura.

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto new `CFile` o `CFile`derivato contenente i dati se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

A seconda del supporto in cui sono archiviati i dati, `CFile` `CSharedFile`il `COleStreamFile`tipo effettivo a cui punta il valore restituito può essere , , o .

> [!NOTE]
> L'oggetto `CFile` a cui si accede dal valore restituito di questa funzione è di proprietà del chiamante. È responsabilità del chiamante `CFile` **eliminare** l'oggetto, chiudendo così il file.

Per ulteriori informazioni, vedere [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in Windows SDK.

Per altre informazioni, vedere [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) in Windows SDK.

## <a name="coledataobjectgetglobaldata"></a><a name="getglobaldata"></a>Oggetto DatiObject::GetGlobalDataCOleDataObject::GetGlobalData

Chiamare questa funzione per allocare un blocco di memoria globale e recuperare i dati nel formato specificato in un HGLOBAL.

```
HGLOBAL GetGlobalData(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*Formato cf*<br/>
Formato in cui devono essere restituiti i dati. Questo parametro può essere uno dei formati degli Appunti predefiniti o il valore restituito dalla funzione nativa [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) di Windows.

*lpFormatEtc (in questo campo)*<br/>
Punta a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che descrive il formato in cui devono essere restituiti i dati. Specificare un valore per questo parametro se si desidera specificare informazioni aggiuntive sul formato oltre al formato degli Appunti specificato da *cfFormat*. Se è NULL, i valori predefiniti vengono utilizzati per gli altri campi nella `FORMATETC` struttura.

### <a name="return-value"></a>Valore restituito

Handle del blocco di memoria globale contenente i dati in caso di esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in Windows SDK.

Per altre informazioni, vedere [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) in Windows SDK.

## <a name="coledataobjectgetnextformat"></a><a name="getnextformat"></a>Oggetto COleDataObject::GetNextFormat

Chiamare questa funzione ripetutamente per ottenere tutti i formati disponibili per il recupero dei dati dall'elemento.

```
BOOL GetNextFormat(LPFORMATETC lpFormatEtc);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc (in questo campo)*<br/>
Punta alla struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che riceve le informazioni sul formato quando viene restituita la chiamata di funzione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è disponibile un altro formato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Dopo una chiamata a [COleDataObject::BeginEnumFormats](#beginenumformats), viene memorizzata la posizione del primo formato supportato da questo oggetto dati. Le chiamate `GetNextFormat` successive a enumerano l'elenco dei formati disponibili nell'oggetto dati. Utilizzare queste funzioni per elencare i formati disponibili.

Per verificare la disponibilità di un determinato formato, chiamare [COleDataObject::IsDataAvailable](#isdataavailable).

Per ulteriori informazioni, vedere [IEnumXXXX::Next](/previous-versions//ms695273\(v=vs.85\)) in Windows SDK.

## <a name="coledataobjectisdataavailable"></a><a name="isdataavailable"></a>COleDataObject::IsDataAvailable

Chiamare questa funzione per determinare se un particolare formato è disponibile per il recupero dei dati dall'elemento OLE.

```
BOOL IsDataAvailable(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*Formato cf*<br/>
Formato dati degli Appunti da utilizzare nella struttura a cui fa riferimento *lpFormatEtc*. Questo parametro può essere uno dei formati degli Appunti predefiniti o il valore restituito dalla funzione nativa [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) di Windows.

*lpFormatEtc (in questo campo)*<br/>
Punta a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che descrive il formato desiderato. Specificare un valore per questo parametro solo se si desidera specificare informazioni di formato aggiuntive oltre al formato degli Appunti specificato da *cfFormat*. Se è NULL, i valori predefiniti vengono utilizzati per gli altri campi nella `FORMATETC` struttura.

### <a name="return-value"></a>Valore restituito

Diverso da zero se i dati sono disponibili nel formato specificato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione è `GetData`utile `GetFileData`prima `GetGlobalData`di chiamare , , o .

Per ulteriori informazioni, vedere [IDataObject::QueryGetData](/windows/win32/api/objidl/nf-objidl-idataobject-querygetdata) e [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in Windows SDK.

Per altre informazioni, vedere [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) in Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRichEditView::QueryAcceptData](../../mfc/reference/cricheditview-class.md#queryacceptdata).

## <a name="coledataobjectrelease"></a><a name="release"></a>COleDataObject::Release

Chiamare questa funzione per rilasciare la proprietà dell'oggetto `COleDataObject` [IDataObject](/windows/win32/api/objidl/nn-objidl-idataobject) precedentemente associato all'oggetto.

```
void Release();
```

### <a name="remarks"></a>Osservazioni

L'oggetto `IDataObject` è `COleDataObject` stato `Attach` `AttachClipboard` associato a chiamando o in modo esplicito o dal framework. Se il *bAutoRelease* parametro `Attach` `IDataObject` è FALSE, l'oggetto non verrà rilasciato. In questo caso, il chiamante `IDataObject` è responsabile del rilascio di dall'oggetto chiamando [IUnknown::Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release).

## <a name="see-also"></a>Vedere anche

[Esempio MFC HIERSVR](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC OCLIENT](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDataSource](../../mfc/reference/coledatasource-class.md)<br/>
[Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)<br/>
[Classe COleServerItem](../../mfc/reference/coleserveritem-class.md)

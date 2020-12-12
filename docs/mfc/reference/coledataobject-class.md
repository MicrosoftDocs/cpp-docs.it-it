---
description: 'Altre informazioni su: classe COleDataObject'
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
ms.openlocfilehash: ae94ed51f3f644efa73847c8e80300ebc5543190
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97227364"
---
# <a name="coledataobject-class"></a>Classe COleDataObject

Utilizzata nei trasferimenti di dati per il recupero in diversi formati dagli Appunti, mediante il trascinamento della selezione o da un elemento OLE incorporato.

## <a name="syntax"></a>Sintassi

```
class COleDataObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COleDataObject:: COleDataObject](#coledataobject)|Costruisce un oggetto `COleDataObject`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleDataObject:: Connetti](#attach)|Connette l'oggetto dati OLE specificato a `COleDataObject` .|
|[COleDataObject:: AttachClipboard](#attachclipboard)|Connette l'oggetto dati presente negli Appunti.|
|[COleDataObject:: BeginEnumFormats](#beginenumformats)|Prepara una o più `GetNextFormat` chiamate successive.|
|[COleDataObject::D etach](#detach)|Disconnette l'oggetto associato `IDataObject` .|
|[COleDataObject:: GetData](#getdata)|Copia i dati dall'oggetto dati OLE collegato in un formato specificato.|
|[COleDataObject:: GetFileData](#getfiledata)|Copia i dati dall'oggetto dati OLE collegato in un `CFile` puntatore nel formato specificato.|
|[COleDataObject:: GetGlobalData](#getglobaldata)|Copia i dati dall'oggetto dati OLE associato in un oggetto `HGLOBAL` nel formato specificato.|
|[COleDataObject:: GetNextFormat](#getnextformat)|Restituisce il formato dati successivo disponibile.|
|[COleDataObject:: IsDataAvailable](#isdataavailable)|Verifica se i dati sono disponibili in un formato specificato.|
|[COleDataObject:: Release](#release)|Scollega e rilascia l'oggetto associato `IDataObject` .|

## <a name="remarks"></a>Commenti

`COleDataObject` non dispone di una classe base.

Questi tipi di trasferimenti di dati includono un'origine e una destinazione. L'origine dati viene implementata come un oggetto della classe [COleDataSource](../../mfc/reference/coledatasource-class.md) . Ogni volta che a un'applicazione di destinazione sono stati rilasciati dati o viene richiesto di eseguire un'operazione Incolla dagli Appunti, è necessario creare un oggetto della `COleDataObject` classe.

Questa classe consente di determinare se i dati esistono in un formato specificato. È anche possibile enumerare i formati di dati disponibili o controllare se è disponibile un determinato formato, quindi recuperare i dati nel formato preferito. Il recupero di oggetti può essere eseguito in diversi modi, tra cui l'uso di un [CFile](../../mfc/reference/cfile-class.md), di un HGLOBAL o di una `STGMEDIUM` struttura.

Per ulteriori informazioni, vedere la struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) nella Windows SDK.

Per ulteriori informazioni sull'utilizzo di oggetti dati nell'applicazione, vedere l'articolo [oggetti dati e origini dati (OLE)](../../mfc/data-objects-and-data-sources-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`COleDataObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

## <a name="coledataobjectattach"></a><a name="attach"></a> COleDataObject:: Connetti

Chiamare questa funzione per associare l' `COleDataObject` oggetto a un oggetto dati OLE.

```cpp
void Attach(
    LPDATAOBJECT lpDataObject,
    BOOL bAutoRelease = TRUE);
```

### <a name="parameters"></a>Parametri

*lpDataObject*<br/>
Punta a un oggetto dati OLE.

*bAutoRelease*<br/>
TRUE se l'oggetto dati OLE deve essere rilasciato quando l' `COleDataObject` oggetto viene eliminato definitivamente; in caso contrario, false.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [IDataObject](/windows/win32/api/objidl/nn-objidl-idataobject) nella Windows SDK.

## <a name="coledataobjectattachclipboard"></a><a name="attachclipboard"></a> COleDataObject:: AttachClipboard

Chiamare questa funzione per alleghi all'oggetto l'oggetto dati attualmente presente negli Appunti `COleDataObject` .

```
BOOL AttachClipboard();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

> [!NOTE]
> La chiamata di questa funzione blocca gli Appunti finché questo oggetto dati non viene rilasciato. L'oggetto dati viene rilasciato nel distruttore per `COleDataObject` . Per ulteriori informazioni, vedere [OpenClipboard](/windows/win32/api/winuser/nf-winuser-openclipboard) e [CloseClipboard](/windows/win32/api/winuser/nf-winuser-closeclipboard) nella documentazione di Win32.

## <a name="coledataobjectbeginenumformats"></a><a name="beginenumformats"></a> COleDataObject:: BeginEnumFormats

Chiamare questa funzione per preparare le chiamate successive a `GetNextFormat` per il recupero di un elenco di formati di dati dall'elemento.

```cpp
void BeginEnumFormats();
```

### <a name="remarks"></a>Commenti

Dopo una chiamata a `BeginEnumFormats` , viene archiviata la posizione del primo formato supportato da questo oggetto dati. Le chiamate successive a `GetNextFormat` enumerano l'elenco dei formati disponibili nell'oggetto dati.

Per verificare la disponibilità dei dati in un formato specificato, utilizzare [COleDataObject:: IsDataAvailable](#isdataavailable).

Per ulteriori informazioni, vedere [IDataObject:: EnumFormatEtc](/windows/win32/api/objidl/nf-objidl-idataobject-enumformatetc) nel Windows SDK.

## <a name="coledataobjectcoledataobject"></a><a name="coledataobject"></a> COleDataObject:: COleDataObject

Costruisce un oggetto `COleDataObject`.

```
COleDataObject();
```

### <a name="remarks"></a>Commenti

Prima di chiamare altre funzioni, è necessario effettuare una chiamata a [COleDataObject:: Connetti](#attach) o [COleDataObject:: AttachClipboard](#attachclipboard) `COleDataObject` .

> [!NOTE]
> Poiché uno dei parametri ai gestori di trascinamento della selezione è un puntatore a `COleDataObject` , non è necessario chiamare questo costruttore per supportare il trascinamento della selezione.

## <a name="coledataobjectdetach"></a><a name="detach"></a> COleDataObject::D etach

Chiamare questa funzione per scollegare l' `COleDataObject` oggetto dall'oggetto dati OLE associato senza rilasciare l'oggetto dati.

```
LPDATAOBJECT Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto dati OLE che è stato scollegato.

### <a name="remarks"></a>Commenti

## <a name="coledataobjectgetdata"></a><a name="getdata"></a> COleDataObject:: GetData

Chiamare questa funzione per recuperare i dati dall'elemento nel formato specificato.

```
BOOL GetData(
    CLIPFORMAT cfFormat,
    LPSTGMEDIUM lpStgMedium,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*cfFormat*<br/>
Formato in cui devono essere restituiti i dati. Questo parametro può essere uno dei formati degli appunti predefiniti oppure il valore restituito dalla funzione nativa [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) di Windows.

*lpStgMedium*<br/>
Punta a una struttura [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) che riceverà i dati.

*lpFormatEtc*<br/>
Punta a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che descrive il formato in cui devono essere restituiti i dati. Fornire un valore per questo parametro se si desidera specificare informazioni aggiuntive sul formato oltre il formato degli Appunti specificato da *cfFormat*. Se è NULL, vengono usati i valori predefiniti per gli altri campi nella `FORMATETC` struttura.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [IDataObject:: GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata), [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1)e [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) nel Windows SDK.

Per ulteriori informazioni, vedere [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) nel Windows SDK.

## <a name="coledataobjectgetfiledata"></a><a name="getfiledata"></a> COleDataObject:: GetFileData

Chiamare questa funzione per creare un `CFile` `CFile` oggetto derivato da o e recuperare i dati nel formato specificato in un `CFile` puntatore.

```
CFile* GetFileData(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*cfFormat*<br/>
Formato in cui devono essere restituiti i dati. Questo parametro può essere uno dei formati degli appunti predefiniti oppure il valore restituito dalla funzione nativa [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) di Windows.

*lpFormatEtc*<br/>
Punta a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che descrive il formato in cui devono essere restituiti i dati. Fornire un valore per questo parametro se si desidera specificare informazioni aggiuntive sul formato oltre il formato degli Appunti specificato da *cfFormat*. Se è NULL, vengono usati i valori predefiniti per gli altri campi nella `FORMATETC` struttura.

### <a name="return-value"></a>Valore restituito

Puntatore al nuovo `CFile` `CFile` oggetto derivato da o che contiene i dati in caso di esito positivo; in caso contrario, null.

### <a name="remarks"></a>Commenti

A seconda del supporto in cui vengono archiviati i dati, il tipo effettivo a cui fa riferimento il valore restituito può essere `CFile` , `CSharedFile` o `COleStreamFile` .

> [!NOTE]
> L' `CFile` oggetto a cui si accede tramite il valore restituito di questa funzione è di proprietà del chiamante. Il chiamante è responsabile dell' **`delete`** `CFile` oggetto, chiudendo quindi il file.

Per ulteriori informazioni, vedere [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) nella Windows SDK.

Per ulteriori informazioni, vedere [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) nel Windows SDK.

## <a name="coledataobjectgetglobaldata"></a><a name="getglobaldata"></a> COleDataObject:: GetGlobalData

Chiamare questa funzione per allocare un blocco di memoria globale e recuperare i dati nel formato specificato in un HGLOBAL.

```
HGLOBAL GetGlobalData(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*cfFormat*<br/>
Formato in cui devono essere restituiti i dati. Questo parametro può essere uno dei formati degli appunti predefiniti oppure il valore restituito dalla funzione nativa [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) di Windows.

*lpFormatEtc*<br/>
Punta a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che descrive il formato in cui devono essere restituiti i dati. Fornire un valore per questo parametro se si desidera specificare informazioni aggiuntive sul formato oltre il formato degli Appunti specificato da *cfFormat*. Se è NULL, vengono usati i valori predefiniti per gli altri campi nella `FORMATETC` struttura.

### <a name="return-value"></a>Valore restituito

Handle del blocco di memoria globale contenente i dati in caso di esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) nella Windows SDK.

Per ulteriori informazioni, vedere [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) nel Windows SDK.

## <a name="coledataobjectgetnextformat"></a><a name="getnextformat"></a> COleDataObject:: GetNextFormat

Chiamare questa funzione ripetutamente per ottenere tutti i formati disponibili per il recupero dei dati dall'elemento.

```
BOOL GetNextFormat(LPFORMATETC lpFormatEtc);
```

### <a name="parameters"></a>Parametri

*lpFormatEtc*<br/>
Punta alla struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che riceve le informazioni sul formato quando la chiamata di funzione restituisce.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è disponibile un altro formato; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Dopo una chiamata a [COleDataObject:: BeginEnumFormats](#beginenumformats), viene archiviata la posizione del primo formato supportato da questo oggetto dati. Le chiamate successive a `GetNextFormat` enumerano l'elenco dei formati disponibili nell'oggetto dati. Usare queste funzioni per elencare i formati disponibili.

Per verificare la disponibilità di un determinato formato, chiamare [COleDataObject:: IsDataAvailable](#isdataavailable).

Per ulteriori informazioni, vedere [IEnumXXXX:: Next](/previous-versions/ms695273\(v=vs.85\)) nell'Windows SDK.

## <a name="coledataobjectisdataavailable"></a><a name="isdataavailable"></a> COleDataObject:: IsDataAvailable

Chiamare questa funzione per determinare se è disponibile un particolare formato per il recupero dei dati dall'elemento OLE.

```
BOOL IsDataAvailable(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### <a name="parameters"></a>Parametri

*cfFormat*<br/>
Formato di dati degli Appunti da utilizzare nella struttura a cui punta *lpFormatEtc*. Questo parametro può essere uno dei formati degli appunti predefiniti oppure il valore restituito dalla funzione nativa [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) di Windows.

*lpFormatEtc*<br/>
Punta a una struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) che descrive il formato desiderato. Fornire un valore per questo parametro solo se si desidera specificare informazioni aggiuntive sul formato oltre il formato degli Appunti specificato da *cfFormat*. Se è NULL, vengono usati i valori predefiniti per gli altri campi nella `FORMATETC` struttura.

### <a name="return-value"></a>Valore restituito

Diverso da zero se i dati sono disponibili nel formato specificato; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questa funzione è utile prima `GetData` di chiamare, `GetFileData` o `GetGlobalData` .

Per ulteriori informazioni, vedere [IDataObject:: QueryGetData](/windows/win32/api/objidl/nf-objidl-idataobject-querygetdata) e [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) nel Windows SDK.

Per ulteriori informazioni, vedere [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRichEditView:: QueryAcceptData](../../mfc/reference/cricheditview-class.md#queryacceptdata).

## <a name="coledataobjectrelease"></a><a name="release"></a> COleDataObject:: Release

Chiamare questa funzione per rilasciare la proprietà dell'oggetto [IDataObject](/windows/win32/api/objidl/nn-objidl-idataobject) precedentemente associato all' `COleDataObject` oggetto.

```cpp
void Release();
```

### <a name="remarks"></a>Commenti

L'oggetto `IDataObject` è stato associato a chiamando `COleDataObject` `Attach` o `AttachClipboard` in modo esplicito o dal Framework. Se il parametro *bAutoRelease* di `Attach` è false, l' `IDataObject` oggetto non verrà rilasciato. In questo caso, il chiamante è responsabile del rilascio `IDataObject` di chiamando [IUnknown:: Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release).

## <a name="see-also"></a>Vedi anche

[HIERSVR di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[OCLIENT di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDataSource](../../mfc/reference/coledatasource-class.md)<br/>
[COleClientItem (classe)](../../mfc/reference/coleclientitem-class.md)<br/>
[Classe COleServerItem](../../mfc/reference/coleserveritem-class.md)

---
description: 'Altre informazioni su: classe COleStreamFile'
title: Classe COleStreamFile
ms.date: 11/04/2016
f1_keywords:
- COleStreamFile
- AFXOLE/COleStreamFile
- AFXOLE/COleStreamFile::COleStreamFile
- AFXOLE/COleStreamFile::Attach
- AFXOLE/COleStreamFile::CreateMemoryStream
- AFXOLE/COleStreamFile::CreateStream
- AFXOLE/COleStreamFile::Detach
- AFXOLE/COleStreamFile::GetStream
- AFXOLE/COleStreamFile::OpenStream
helpviewer_keywords:
- COleStreamFile [MFC], COleStreamFile
- COleStreamFile [MFC], Attach
- COleStreamFile [MFC], CreateMemoryStream
- COleStreamFile [MFC], CreateStream
- COleStreamFile [MFC], Detach
- COleStreamFile [MFC], GetStream
- COleStreamFile [MFC], OpenStream
ms.assetid: e4f93698-e17c-4a18-a7c0-4b4df8eb4d93
ms.openlocfilehash: b856dc5b408c43f61a11f7c68035587bc16bbeaa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226636"
---
# <a name="colestreamfile-class"></a>Classe COleStreamFile

Rappresenta un flusso di dati (`IStream`) in un file composito come parte di un archivio strutturato OLE.

## <a name="syntax"></a>Sintassi

```
class COleStreamFile : public CFile
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COleStreamFile:: COleStreamFile](#colestreamfile)|Costruisce un oggetto `COleStreamFile`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleStreamFile:: Connetti](#attach)|Associa un flusso all'oggetto.|
|[COleStreamFile:: CreateMemoryStream](#creatememorystream)|Crea un flusso dalla memoria globale e lo associa all'oggetto.|
|[COleStreamFile:: CreateStream](#createstream)|Crea un flusso e lo associa all'oggetto.|
|[COleStreamFile::D etach](#detach)|Annulla l'associazione del flusso dall'oggetto.|
|[COleStreamFile:: GetStream](#getstream)|Restituisce il flusso corrente.|
|[COleStreamFile:: OpenStream](#openstream)|Apre in modo sicuro un flusso e lo associa all'oggetto.|

## <a name="remarks"></a>Commenti

Un `IStorage` oggetto deve esistere prima che il flusso possa essere aperto o creato, a meno che non si tratti di un flusso di memoria.

`COleStreamFile` gli oggetti vengono modificati esattamente come gli oggetti [CFile](../../mfc/reference/cfile-class.md) .

Per ulteriori informazioni sulla modifica di flussi e archivi, vedere l'articolo [contenitori: file composti](../../mfc/containers-compound-files.md).

Per ulteriori informazioni, vedere [IStream](/windows/win32/api/objidl/nn-objidl-istream) e [IStorage](/windows/win32/api/objidl/nn-objidl-istorage) nel Windows SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

`COleStreamFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

## <a name="colestreamfileattach"></a><a name="attach"></a> COleStreamFile:: Connetti

Associa il flusso OLE fornito all' `COleStreamFile` oggetto.

```cpp
void Attach(LPSTREAM lpStream);
```

### <a name="parameters"></a>Parametri

*lpStream*<br/>
Punta al flusso OLE ( `IStream` ) da associare all'oggetto. Non può essere NULL.

### <a name="remarks"></a>Commenti

L'oggetto non deve essere già associato a un flusso OLE.

Per ulteriori informazioni, vedere [IStream](/windows/win32/api/objidl/nn-objidl-istream) nel Windows SDK.

## <a name="colestreamfilecolestreamfile"></a><a name="colestreamfile"></a> COleStreamFile:: COleStreamFile

Crea un oggetto `COleStreamFile`.

```
COleStreamFile(LPSTREAM lpStream = NULL);
```

### <a name="parameters"></a>Parametri

*lpStream*<br/>
Puntatore al flusso OLE da associare all'oggetto.

### <a name="remarks"></a>Commenti

Se *lpStream* è null, l'oggetto non è associato a un flusso OLE; in caso contrario, l'oggetto è associato al flusso OLE fornito.

Per ulteriori informazioni, vedere [IStream](/windows/win32/api/objidl/nn-objidl-istream) nel Windows SDK.

## <a name="colestreamfilecreatememorystream"></a><a name="creatememorystream"></a> COleStreamFile:: CreateMemoryStream

Crea in modo sicuro un nuovo flusso fuori dalla memoria globale condivisa in cui un errore è una condizione normale e prevista.

```
BOOL CreateMemoryStream(CFileException* pError = NULL);
```

### <a name="parameters"></a>Parametri

*pError*<br/>
Punta a un oggetto [CFileException](../../mfc/reference/cfileexception-class.md) o null che indica lo stato di completamento dell'operazione di creazione. Specificare questo parametro se si desidera monitorare le possibili eccezioni generate tentando di creare il flusso.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il flusso viene creato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

La memoria viene allocata dal sottosistema OLE.

Per ulteriori informazioni, vedere [CreateStreamOnHGlobal](/windows/win32/api/combaseapi/nf-combaseapi-createstreamonhglobal) nel Windows SDK.

## <a name="colestreamfilecreatestream"></a><a name="createstream"></a> COleStreamFile:: CreateStream

Crea in modo sicuro un nuovo flusso nell'oggetto di archiviazione fornito in cui un errore è una condizione normale e prevista.

```
BOOL CreateStream(
    LPSTORAGE lpStorage,
    LPCTSTR lpszStreamName,
    DWORD nOpenFlags = modeReadWrite|shareExclusive|modeCreate,
    CFileException* pError = NULL);
```

### <a name="parameters"></a>Parametri

*lpStorage*<br/>
Punta all'oggetto di archiviazione OLE che contiene il flusso da creare. Non può essere NULL.

*lpszStreamName*<br/>
Nome del flusso da creare. Non può essere NULL.

*nOpenFlags*<br/>
Modalità di accesso da utilizzare per l'apertura del flusso. Per impostazione predefinita vengono utilizzate le modalità Exclusive, di lettura/scrittura e di creazione. Per un elenco completo delle modalità disponibili, vedere [CFile:: CFile](../../mfc/reference/cfile-class.md#cfile).

*pError*<br/>
Punta a un oggetto [CFileException](../../mfc/reference/cfileexception-class.md) o null. Specificare questo parametro se si desidera monitorare le possibili eccezioni generate tentando di creare il flusso.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il flusso viene creato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Se l'apertura ha esito negativo e *perror* non è null, verrà generata un'eccezione di file.

Per ulteriori informazioni, vedere [IStorage:: CreateStream](/windows/win32/api/objidl/nf-objidl-istorage-createstream) nella Windows SDK.

## <a name="colestreamfiledetach"></a><a name="detach"></a> COleStreamFile::D etach

Annulla l'associazione del flusso dall'oggetto senza chiudere il flusso.

```
LPSTREAM Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore al flusso ( `IStream` ) associato all'oggetto.

### <a name="remarks"></a>Commenti

Il flusso deve essere chiuso in altro modo prima della terminazione del programma.

Per ulteriori informazioni, vedere [IStream](/windows/win32/api/objidl/nn-objidl-istream) nel Windows SDK.

## <a name="colestreamfilegetstream"></a><a name="getstream"></a> COleStreamFile:: GetStream

Chiamare questa funzione per restituire un puntatore al flusso corrente.

```
IStream* GetStream() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia di flusso corrente ( [IStream](/windows/win32/api/objidl/nn-objidl-istream)).

## <a name="colestreamfileopenstream"></a><a name="openstream"></a> COleStreamFile:: OpenStream

Apre un flusso esistente.

```
BOOL OpenStream(
    LPSTORAGE lpStorage,
    LPCTSTR lpszStreamName,
    DWORD nOpenFlags = modeReadWrite|shareExclusive,
    CFileException* pError = NULL);
```

### <a name="parameters"></a>Parametri

*lpStorage*<br/>
Punta all'oggetto di archiviazione OLE che contiene il flusso da aprire. Non può essere NULL.

*lpszStreamName*<br/>
Nome del flusso da aprire. Non può essere NULL.

*nOpenFlags*<br/>
Modalità di accesso da utilizzare per l'apertura del flusso. Per impostazione predefinita vengono usate le modalità esclusiva e lettura/scrittura. Per l'elenco completo delle modalità disponibili, vedere [CFile:: CFile](../../mfc/reference/cfile-class.md#cfile).

*pError*<br/>
Punta a un oggetto [CFileException](../../mfc/reference/cfileexception-class.md) o null. Specificare questo parametro se si desidera monitorare le possibili eccezioni generate tentando di aprire il flusso.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il flusso viene aperto correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Se l'apertura ha esito negativo e *perror* non è null, verrà generata un'eccezione di file.

Per ulteriori informazioni, vedere [IStorage:: OpenStream](/windows/win32/api/objidl/nf-objidl-istorage-openstream) nella Windows SDK.

## <a name="see-also"></a>Vedi anche

[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)

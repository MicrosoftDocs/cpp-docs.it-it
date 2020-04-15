---
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
ms.openlocfilehash: 1f53d3bd55fbff45257c06af2ab11f066d421a54
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376105"
---
# <a name="colestreamfile-class"></a>Classe COleStreamFile

Rappresenta un flusso di dati (`IStream`) in un file composito come parte di un archivio strutturato OLE.

## <a name="syntax"></a>Sintassi

```
class COleStreamFile : public CFile
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleStreamFile::COleStreamFile](#colestreamfile)|Costruisce un oggetto `COleStreamFile`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleStreamFile::Attach](#attach)|Associa un flusso all'oggetto.|
|[COleStreamFile::CreateMemoryStream](#creatememorystream)|Crea un flusso dalla memoria globale e lo associa all'oggetto.|
|[COleStreamFile::CreateStream](#createstream)|Crea un flusso e lo associa all'oggetto.|
|[COleStreamFile::Detach](#detach)|Annulla l'associazione del flusso dall'oggetto.|
|[COleStreamFile::GetStream](#getstream)|Restituisce il flusso corrente.|
|[COleStreamFile::OpenStream](#openstream)|Apre in modo sicuro un flusso e lo associa all'oggetto.|

## <a name="remarks"></a>Osservazioni

Un `IStorage` oggetto deve esistere prima che il flusso possa essere aperto o creato, a meno che non si tratti di un flusso di memoria.

`COleStreamFile`gli oggetti vengono manipolati esattamente come [CFile](../../mfc/reference/cfile-class.md) oggetti.

Per altre informazioni sulla modifica di flussi e archivi, vedere l'articolo [Contenitori: file compositi](../../mfc/containers-compound-files.md)..

Per ulteriori informazioni, vedere [IStream](/windows/win32/api/objidl/nn-objidl-istream) e [IStorage](/windows/win32/api/objidl/nn-objidl-istorage) in Windows SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

`COleStreamFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxole.h

## <a name="colestreamfileattach"></a><a name="attach"></a>COleStreamFile::Attach

Associa il flusso OLE fornito `COleStreamFile` all'oggetto.

```
void Attach(LPSTREAM lpStream);
```

### <a name="parameters"></a>Parametri

*lpStream (lpStream)*<br/>
Punta al flusso OLE (`IStream`) da associare all'oggetto. Non può essere NULL.

### <a name="remarks"></a>Osservazioni

L'oggetto non deve essere già associato a un flusso OLE.

Per ulteriori informazioni, vedere [IStream](/windows/win32/api/objidl/nn-objidl-istream) in Windows SDK.

## <a name="colestreamfilecolestreamfile"></a><a name="colestreamfile"></a>COleStreamFile::COleStreamFile

Crea un oggetto `COleStreamFile`.

```
COleStreamFile(LPSTREAM lpStream = NULL);
```

### <a name="parameters"></a>Parametri

*lpStream (lpStream)*<br/>
Puntatore al flusso OLE da associare all'oggetto.

### <a name="remarks"></a>Osservazioni

Se *lpStream* è NULL, l'oggetto non è associato a un flusso OLE, in caso contrario, l'oggetto viene associato al flusso OLE fornito.

Per ulteriori informazioni, vedere [IStream](/windows/win32/api/objidl/nn-objidl-istream) in Windows SDK.

## <a name="colestreamfilecreatememorystream"></a><a name="creatememorystream"></a>COleStreamFile::CreateMemoryStream

Crea in modo sicuro un nuovo flusso dalla memoria condivisa globale in cui un errore è una condizione normale e prevista.

```
BOOL CreateMemoryStream(CFileException* pError = NULL);
```

### <a name="parameters"></a>Parametri

*pError*<br/>
Punta a un [oggetto CFileException](../../mfc/reference/cfileexception-class.md) o NULL che indica lo stato di completamento dell'operazione di creazione. Specificare questo parametro se si desidera monitorare le possibili eccezioni generate dal tentativo di creare il flusso.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il flusso viene creato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La memoria viene allocata dal sottosistema OLE.

Per altre informazioni, vedere [CreateStreamOnHGlobal](/windows/win32/api/combaseapi/nf-combaseapi-createstreamonhglobal) in Windows SDK.

## <a name="colestreamfilecreatestream"></a><a name="createstream"></a>COleStreamFile::CreateStream

Crea in modo sicuro un nuovo flusso nell'oggetto di archiviazione fornito in cui un errore è una condizione normale prevista.

```
BOOL CreateStream(
    LPSTORAGE lpStorage,
    LPCTSTR lpszStreamName,
    DWORD nOpenFlags = modeReadWrite|shareExclusive|modeCreate,
    CFileException* pError = NULL);
```

### <a name="parameters"></a>Parametri

*LpStorage (archiviazione)*<br/>
Punta all'oggetto di archiviazione OLE che contiene il flusso da creare. Non può essere NULL.

*lpszStreamName (nome di flusso)*<br/>
Nome del flusso da creare. Non può essere NULL.

*nOpenFlags (in elenco)*<br/>
Modalità di accesso da utilizzare all'apertura del flusso. Per impostazione predefinita vengono utilizzate le modalità esclusive, di lettura/scrittura e di creazione. Per un elenco completo delle modalità disponibili, vedere [CFile::CFile](../../mfc/reference/cfile-class.md#cfile).

*pError*<br/>
Punta a un oggetto [CFileException](../../mfc/reference/cfileexception-class.md) o NULL. Specificare questo parametro se si desidera monitorare le possibili eccezioni generate dal tentativo di creare il flusso.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il flusso viene creato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se l'apertura non riesce e *pError* non è NULL, verrà generata un'eccezione di file.

Per altre informazioni, vedere [IStorage::CreateStream](/windows/win32/api/objidl/nf-objidl-istorage-createstream) in Windows SDK.

## <a name="colestreamfiledetach"></a><a name="detach"></a>COleStreamFile::Detach

Annulla l'associazione del flusso dall'oggetto senza chiudere il flusso.

```
LPSTREAM Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore al flusso`IStream`( ) associato all'oggetto.

### <a name="remarks"></a>Osservazioni

Il flusso deve essere chiuso in altro modo prima che il programma termini.

Per ulteriori informazioni, vedere [IStream](/windows/win32/api/objidl/nn-objidl-istream) in Windows SDK.

## <a name="colestreamfilegetstream"></a><a name="getstream"></a>COleStreamFile::GetStream

Chiamare questa funzione per restituire un puntatore al flusso corrente.

```
IStream* GetStream() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia del flusso corrente ( [IStream](/windows/win32/api/objidl/nn-objidl-istream)).

## <a name="colestreamfileopenstream"></a><a name="openstream"></a>COleStreamFile::OpenStream

Apre un flusso esistente.

```
BOOL OpenStream(
    LPSTORAGE lpStorage,
    LPCTSTR lpszStreamName,
    DWORD nOpenFlags = modeReadWrite|shareExclusive,
    CFileException* pError = NULL);
```

### <a name="parameters"></a>Parametri

*LpStorage (archiviazione)*<br/>
Punta all'oggetto di archiviazione OLE che contiene il flusso da aprire. Non può essere NULL.

*lpszStreamName (nome di flusso)*<br/>
Nome del flusso da aprire. Non può essere NULL.

*nOpenFlags (in elenco)*<br/>
Modalità di accesso da utilizzare all'apertura del flusso. Per impostazione predefinita vengono utilizzate le modalità esclusive e di lettura/scrittura. Per l'elenco completo delle modalità disponibili, vedere [CFile::CFile](../../mfc/reference/cfile-class.md#cfile).

*pError*<br/>
Punta a un oggetto [CFileException](../../mfc/reference/cfileexception-class.md) o NULL. Specificare questo parametro se si desidera monitorare le possibili eccezioni generate dal tentativo di aprire il flusso.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il flusso viene aperto correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se l'apertura non riesce e *pError* non è NULL, verrà generata un'eccezione di file.

Per ulteriori informazioni, vedere [IStorage::OpenStream](/windows/win32/api/objidl/nf-objidl-istorage-openstream) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)

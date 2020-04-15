---
title: Classe CAtlTemporaryFile
ms.date: 11/04/2016
f1_keywords:
- CAtlTemporaryFile
- ATLFILE/ATL::CAtlTemporaryFile
- ATLFILE/ATL::CAtlTemporaryFile::CAtlTemporaryFile
- ATLFILE/ATL::CAtlTemporaryFile::Close
- ATLFILE/ATL::CAtlTemporaryFile::Create
- ATLFILE/ATL::CAtlTemporaryFile::Flush
- ATLFILE/ATL::CAtlTemporaryFile::GetPosition
- ATLFILE/ATL::CAtlTemporaryFile::GetSize
- ATLFILE/ATL::CAtlTemporaryFile::HandsOff
- ATLFILE/ATL::CAtlTemporaryFile::HandsOn
- ATLFILE/ATL::CAtlTemporaryFile::LockRange
- ATLFILE/ATL::CAtlTemporaryFile::Read
- ATLFILE/ATL::CAtlTemporaryFile::Seek
- ATLFILE/ATL::CAtlTemporaryFile::SetSize
- ATLFILE/ATL::CAtlTemporaryFile::TempFileName
- ATLFILE/ATL::CAtlTemporaryFile::UnlockRange
- ATLFILE/ATL::CAtlTemporaryFile::Write
helpviewer_keywords:
- CAtlTemporaryFile class
ms.assetid: 05f0f2a5-94f6-4594-8dae-b114292ff5f9
ms.openlocfilehash: 605e4bcbe7208b18d8d1a50507e8e142a93bde5e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321313"
---
# <a name="catltemporaryfile-class"></a>Classe CAtlTemporaryFile

Questa classe fornisce metodi per la creazione e l'utilizzo di un file temporaneo.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CAtlTemporaryFile
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlTemporaryFile::CAtlTemporaryFile](#catltemporaryfile)|Costruttore.|
|[FileContemporaneo Di CAtlTemporariFile:::CAtlTemporaryFile](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlTemporaryFile::Close](#close)|Chiamare questo metodo per chiudere un file temporaneo ed eliminarne il contenuto o archiviarli con il nome file specificato.|
|[CAtlTemporaryFile::Create](#create)|Chiamare questo metodo per creare un file temporaneo.|
|[CAtlTemporaryFile::Flush](#flush)|Chiamare questo metodo per forzare la scrittura dei dati rimanenti nel buffer di file nel file temporaneo.|
|[CAtlTemporaryFile::GetPosition](#getposition)|Chiamare questo metodo per ottenere la posizione corrente del puntatore del file.|
|[CAtlTemporaryFile::GetSize](#getsize)|Chiamare questo metodo per ottenere la dimensione in byte del file temporaneo.|
|[CAtlTemporaryFile::HandsOff](#handsoff)|Chiamare questo metodo per dissociare il file dall'oggetto. `CAtlTemporaryFile`|
|[CAtlTemporaryFile::HandsOn](#handson)|Chiamare questo metodo per aprire un file temporaneo esistente e posizionare il puntatore alla fine del file.|
|[CAtlTemporaryFile::LockRange](#lockrange)|Chiamare questo metodo per bloccare un'area nel file per impedire ad altri processi di accedervi.|
|[CAtlTemporaryFile::Leggi](#read)|Chiamare questo metodo per leggere i dati dal file temporaneo a partire dalla posizione indicata dal puntatore del file.|
|[CAtlTemporaryFile::Seek](#seek)|Chiamare questo metodo per spostare il puntatore del file temporaneo.|
|[CAtlTemporaryFile::SetSize](#setsize)|Chiamare questo metodo per impostare la dimensione del file temporaneo.|
|[CAtlTemporaryFile::NomeFileTemp](#tempfilename)|Chiamare questo metodo per restituire il nome del file temporaneo.|
|[CAtlTemporaryFile::UnlockRange](#unlockrange)|Chiamare questo metodo per sbloccare un'area del file temporaneo.|
|[CAtlTemporaryFile::Write](#write)|Chiamare questo metodo per scrivere i dati nel file temporaneo a partire dalla posizione indicata dal puntatore del file.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlTemporaryFile::operatorE HANDLE](#operator_handle)|Restituisce un handle per il file temporaneo.|

## <a name="remarks"></a>Osservazioni

`CAtlTemporaryFile`semplifica la creazione e l'utilizzo di un file temporaneo. Il file viene automaticamente denominato, aperto, chiuso ed eliminato. Se il contenuto del file è necessario dopo la chiusura del file, è possibile salvarlo in un nuovo file con un nome specificato.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlfile.h

## <a name="example"></a>Esempio

Vedere l'esempio per [CAtlTemporaryFile::CAtlTemporaryFile](#catltemporaryfile).

## <a name="catltemporaryfilecatltemporaryfile"></a><a name="catltemporaryfile"></a>CAtlTemporaryFile::CAtlTemporaryFile

Costruttore.

```
CAtlTemporaryFile() throw();
```

### <a name="remarks"></a>Osservazioni

Un file non viene effettivamente aperto fino a quando non viene effettuata una chiamata a [CAtlTemporaryFile::Create](#create).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#73](../../atl/codesnippet/cpp/catltemporaryfile-class_1.cpp)]

## <a name="catltemporaryfilecatltemporaryfile"></a><a name="dtor"></a>FileContemporaneo Di CAtlTemporariFile:::CAtlTemporaryFile

Distruttore.

```
~CAtlTemporaryFile() throw();
```

### <a name="remarks"></a>Osservazioni

Il distruttore chiama [CAtlTemporaryFile::Close](#close).

## <a name="catltemporaryfileclose"></a><a name="close"></a>CAtlTemporaryFile::Close

Chiamare questo metodo per chiudere un file temporaneo ed eliminarne il contenuto o archiviarli con il nome file specificato.

```
HRESULT Close(LPCTSTR szNewName = NULL) throw();
```

### <a name="parameters"></a>Parametri

*szNewName (nome in da dominio szNewName)*<br/>
Nome del nuovo file in cui archiviare il contenuto del file temporaneo. Se questo argomento è NULL, il contenuto del file temporaneo viene eliminato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlTemporaryFile::CAtlTemporaryFile](#catltemporaryfile).

## <a name="catltemporaryfilecreate"></a><a name="create"></a>CAtlTemporaryFile::Create

Chiamare questo metodo per creare un file temporaneo.

```
HRESULT Create(LPCTSTR pszDir = NULL, DWORD dwDesiredAccess = GENERIC_WRITE) throw();
```

### <a name="parameters"></a>Parametri

*pszDir*<br/>
Percorso del file temporaneo. Se è NULL, [GetTempPath](/windows/win32/api/fileapi/nf-fileapi-gettemppathw) verrà chiamato per assegnare un percorso.

*dwDesiredAccess (Accesso desiderato)*<br/>
L'accesso desiderato. Vedere *dwDesiredAccess* in [CreateFile](/windows/win32/api/fileapi/nf-fileapi-createfilew) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlTemporaryFile::CAtlTemporaryFile](#catltemporaryfile).

## <a name="catltemporaryfileflush"></a><a name="flush"></a>CAtlTemporaryFile::Flush

Chiamare questo metodo per forzare la scrittura dei dati rimanenti nel buffer di file nel file temporaneo.

```
HRESULT Flush() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Simile a [CAtlTemporaryFile::HandsOff](#handsoff), con la differenza che il file non è chiuso.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlTemporaryFile::CAtlTemporaryFile](#catltemporaryfile).

## <a name="catltemporaryfilegetposition"></a><a name="getposition"></a>CAtlTemporaryFile::GetPosition

Chiamare questo metodo per ottenere la posizione corrente del puntatore del file.

```
HRESULT GetPosition(ULONGLONG& nPos) const throw();
```

### <a name="parameters"></a>Parametri

*Npos*<br/>
Posizione in byte.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Per modificare la posizione del puntatore del file, utilizzare [CAtlTemporaryFile::Seek](#seek).

## <a name="catltemporaryfilegetsize"></a><a name="getsize"></a>CAtlTemporaryFile::GetSize

Chiamare questo metodo per ottenere la dimensione in byte del file temporaneo.

```
HRESULT GetSize(ULONGLONG& nLen) const throw();
```

### <a name="parameters"></a>Parametri

*nLen*<br/>
Numero di byte nel file.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="catltemporaryfilehandsoff"></a><a name="handsoff"></a>CAtlTemporaryFile::HandsOff

Chiamare questo metodo per dissociare il file dall'oggetto. `CAtlTemporaryFile`

```
HRESULT HandsOff() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

`HandsOff`e [CAtlTemporaryFile::HandsOn](#handson) vengono utilizzati per dissociare il file dall'oggetto e ricollegarlo se necessario. `HandsOff`forzerà tutti i dati rimanenti nel buffer di file da scrivere nel file temporaneo e quindi chiudere il file. Se si desidera chiudere ed eliminare il file in modo permanente o se si desidera chiudere e mantenere il contenuto del file con un determinato nome, utilizzare [CAtlTemporaryFile::Close](#close).

## <a name="catltemporaryfilehandson"></a><a name="handson"></a>CAtlTemporaryFile::HandsOn

Chiamare questo metodo per aprire un file temporaneo esistente e posizionare il puntatore alla fine del file.

```
HRESULT HandsOn() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

[CAtlTemporaryFile::HandsOff](#handsoff) `HandsOn` e vengono utilizzati per dissociare il file dall'oggetto e ricollegarlo se necessario.

## <a name="catltemporaryfilelockrange"></a><a name="lockrange"></a>CAtlTemporaryFile::LockRange

Chiamare questo metodo per bloccare un'area nel file temporaneo per impedire ad altri processi di accedervi.

```
HRESULT LockRange(ULONGLONG nPos, ULONGLONG nCount) throw();
```

### <a name="parameters"></a>Parametri

*Npos*<br/>
Posizione nel file in cui deve iniziare il blocco.

*nConteggio*<br/>
Lunghezza dell'intervallo di byte da bloccato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Il blocco di byte in un file impedisce l'accesso a tali byte da altri processi. È possibile bloccare più aree di un file, ma non sono consentite aree sovrapposte. Per sbloccare correttamente un'area, utilizzare [CAtlTemporaryFile::UnlockRange](#unlockrange), assicurandosi che l'intervallo di byte corrisponda esattamente all'area precedentemente bloccata. `LockRange`non unisce aree adiacenti; se due regioni bloccate sono adiacenti, è necessario sbloccare ciascuna separatamente.

## <a name="catltemporaryfileoperator-handle"></a><a name="operator_handle"></a>CAtlTemporaryFile::operatorE HANDLE

Restituisce un handle per il file temporaneo.

```
operator HANDLE() throw();
```

## <a name="catltemporaryfileread"></a><a name="read"></a>CAtlTemporaryFile::Leggi

Chiamare questo metodo per leggere i dati dal file temporaneo a partire dalla posizione indicata dal puntatore del file.

```
HRESULT Read(
    LPVOID pBuffer,
    DWORD nBufSize,
    DWORD& nBytesRead) throw();
```

### <a name="parameters"></a>Parametri

*pBuffer*<br/>
Puntatore al buffer che riceverà i dati letti dal file.

*nBufSize (informazioni in base al nome)*<br/>
Dimensioni del buffer, in byte.

*nBytesRead*<br/>
Numero di byte letti.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Chiama [CAtlFile::Read](../../atl/reference/catlfile-class.md#read). Per modificare la posizione del puntatore del file, chiamare [CAtlTemporaryFile::Seek](#seek).

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlTemporaryFile::CAtlTemporaryFile](#catltemporaryfile).

## <a name="catltemporaryfileseek"></a><a name="seek"></a>CAtlTemporaryFile::Seek

Chiamare questo metodo per spostare il puntatore del file temporaneo.

```
HRESULT Seek(LONGLONG nOffset, DWORD dwFrom = FILE_CURRENT) throw();
```

### <a name="parameters"></a>Parametri

*nOffset*<br/>
Offset, in byte, dal punto di partenza fornito da *dwFrom.*

*dwDa*<br/>
Il punto iniziale (FILE_BEGIN, FILE_CURRENT o FILE_END).

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Chiama [CAtlFile::Seek](../../atl/reference/catlfile-class.md#seek). Per ottenere la posizione corrente del puntatore del file, chiamare [CAtlTemporaryFile::GetPosition](#getposition).

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlTemporaryFile::CAtlTemporaryFile](#catltemporaryfile).

## <a name="catltemporaryfilesetsize"></a><a name="setsize"></a>CAtlTemporaryFile::SetSize

Chiamare questo metodo per impostare la dimensione del file temporaneo.

```
HRESULT SetSize(ULONGLONG nNewLen) throw();
```

### <a name="parameters"></a>Parametri

*nNewLen*<br/>
Nuova lunghezza del file in byte.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Chiama [CAtlFile::SetSize](../../atl/reference/catlfile-class.md#setsize). Al ritorno, il puntatore del file è posizionato alla fine del file.

## <a name="catltemporaryfiletempfilename"></a><a name="tempfilename"></a>CAtlTemporaryFile::NomeFileTemp

Chiamare questo metodo per restituire il nome del file temporaneo.

```
LPCTSTR TempFileName() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'LPCTSTR che punta al nome del file.

### <a name="remarks"></a>Osservazioni

Il nome del file viene generato in [CAtlTemporaryFile::CAtlTemporaryFile](#catltemporaryfile) con una chiamata alla funzione [GetTempFile](/windows/win32/api/fileapi/nf-fileapi-gettempfilenamew)di Windows SDK. L'estensione del file sarà sempre "TFR" per il file temporaneo.

## <a name="catltemporaryfileunlockrange"></a><a name="unlockrange"></a>CAtlTemporaryFile::UnlockRange

Chiamare questo metodo per sbloccare un'area del file temporaneo.

```
HRESULT UnlockRange(ULONGLONG nPos, ULONGLONG nCount) throw();
```

### <a name="parameters"></a>Parametri

*Npos*<br/>
Posizione nel file in cui deve iniziare lo sblocco.

*nConteggio*<br/>
Lunghezza dell'intervallo di byte da sbloccare.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Chiama [CAtlFile::UnlockRange](../../atl/reference/catlfile-class.md#unlockrange).

## <a name="catltemporaryfilewrite"></a><a name="write"></a>CAtlTemporaryFile::Write

Chiamare questo metodo per scrivere i dati nel file temporaneo a partire dalla posizione indicata dal puntatore del file.

```
HRESULT Write(
    LPCVOID pBuffer,
    DWORD nBufSize,
    DWORD* pnBytesWritten = NULL) throw();
```

### <a name="parameters"></a>Parametri

*pBuffer*<br/>
Buffer contenente i dati da scrivere nel file.

*nBufSize (informazioni in base al nome)*<br/>
Numero di byte da trasferire dal buffer.

*pnBytesScritto*<br/>
Numero di byte scritti.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Chiama [CAtlFile::Write](../../atl/reference/catlfile-class.md#write).

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlTemporaryFile::CAtlTemporaryFile](#catltemporaryfile).

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classe CAtlFile](../../atl/reference/catlfile-class.md)

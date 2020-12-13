---
description: 'Altre informazioni su: classe CAtlTemporaryFile'
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
ms.openlocfilehash: 44431132e4ce1535b29b1b0f9409c095b8fa9fd2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97152608"
---
# <a name="catltemporaryfile-class"></a>Classe CAtlTemporaryFile

Questa classe fornisce i metodi per la creazione e l'uso di un file temporaneo.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
class CAtlTemporaryFile
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile)|Costruttore.|
|[CAtlTemporaryFile:: ~ CAtlTemporaryFile](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAtlTemporaryFile:: Close](#close)|Chiamare questo metodo per chiudere un file temporaneo ed eliminarne il contenuto oppure archiviarlo con il nome file specificato.|
|[CAtlTemporaryFile:: create](#create)|Chiamare questo metodo per creare un file temporaneo.|
|[CAtlTemporaryFile:: Flush](#flush)|Chiamare questo metodo per forzare la scrittura nel file temporaneo di tutti i dati rimanenti nel buffer di file.|
|[CAtlTemporaryFile:: GetPosition](#getposition)|Chiamare questo metodo per ottenere la posizione corrente del puntatore del file.|
|[CAtlTemporaryFile:: GetSize](#getsize)|Chiamare questo metodo per ottenere le dimensioni in byte del file temporaneo.|
|[CAtlTemporaryFile:: HandsOff](#handsoff)|Chiamare questo metodo per annullare l'associazione del file dall' `CAtlTemporaryFile` oggetto.|
|[CAtlTemporaryFile:: HandsOn](#handson)|Chiamare questo metodo per aprire un file temporaneo esistente e posizionare il puntatore alla fine del file.|
|[CAtlTemporaryFile:: LockRange](#lockrange)|Chiamare questo metodo per bloccare un'area del file per impedire l'accesso da parte di altri processi.|
|[CAtlTemporaryFile:: Read](#read)|Chiamare questo metodo per leggere i dati dal file temporaneo a partire dalla posizione indicata dal puntatore del file.|
|[CAtlTemporaryFile:: Seek](#seek)|Chiamare questo metodo per spostare il puntatore del file temporaneo.|
|[CAtlTemporaryFile:: sesize](#setsize)|Chiamare questo metodo per impostare le dimensioni del file temporaneo.|
|[CAtlTemporaryFile:: TempFileName](#tempfilename)|Chiamare questo metodo per restituire il nome del file temporaneo.|
|[CAtlTemporaryFile:: UnlockRange](#unlockrange)|Chiamare questo metodo per sbloccare un'area del file temporaneo.|
|[CAtlTemporaryFile:: Write](#write)|Chiamare questo metodo per scrivere i dati nel file temporaneo a partire dalla posizione indicata dal puntatore del file.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[HANDLE CAtlTemporaryFile:: operator](#operator_handle)|Restituisce un handle per il file temporaneo.|

## <a name="remarks"></a>Commenti

`CAtlTemporaryFile` semplifica la creazione e l'utilizzo di un file temporaneo. Il file viene denominato, aperto, chiuso ed eliminato automaticamente. Se il contenuto del file è obbligatorio dopo la chiusura del file, è possibile salvarlo in un nuovo file con un nome specificato.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlfile. h

## <a name="example"></a>Esempio

Vedere l'esempio per [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).

## <a name="catltemporaryfilecatltemporaryfile"></a><a name="catltemporaryfile"></a> CAtlTemporaryFile:: CAtlTemporaryFile

Costruttore.

```cpp
CAtlTemporaryFile() throw();
```

### <a name="remarks"></a>Commenti

Un file non viene effettivamente aperto fino a quando non viene effettuata una chiamata a [CAtlTemporaryFile:: create](#create).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#73](../../atl/codesnippet/cpp/catltemporaryfile-class_1.cpp)]

## <a name="catltemporaryfilecatltemporaryfile"></a><a name="dtor"></a> CAtlTemporaryFile:: ~ CAtlTemporaryFile

Distruttore.

```cpp
~CAtlTemporaryFile() throw();
```

### <a name="remarks"></a>Commenti

Il distruttore chiama [CAtlTemporaryFile:: Close](#close).

## <a name="catltemporaryfileclose"></a><a name="close"></a> CAtlTemporaryFile:: Close

Chiamare questo metodo per chiudere un file temporaneo ed eliminarne il contenuto oppure archiviarlo con il nome file specificato.

```cpp
HRESULT Close(LPCTSTR szNewName = NULL) throw();
```

### <a name="parameters"></a>Parametri

*szNewName*<br/>
Nome del nuovo file in cui archiviare il contenuto del file temporaneo. Se questo argomento è NULL, il contenuto del file temporaneo viene eliminato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).

## <a name="catltemporaryfilecreate"></a><a name="create"></a> CAtlTemporaryFile:: create

Chiamare questo metodo per creare un file temporaneo.

```cpp
HRESULT Create(LPCTSTR pszDir = NULL, DWORD dwDesiredAccess = GENERIC_WRITE) throw();
```

### <a name="parameters"></a>Parametri

*pszDir*<br/>
Percorso per il file temporaneo. Se è NULL, [GetTempPath](/windows/win32/api/fileapi/nf-fileapi-gettemppathw) verrà chiamato per assegnare un percorso.

*dwDesiredAccess*<br/>
Accesso desiderato. Vedere *dwDesiredAccess* in [CreateFile](/windows/win32/api/fileapi/nf-fileapi-createfilew) nella Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).

## <a name="catltemporaryfileflush"></a><a name="flush"></a> CAtlTemporaryFile:: Flush

Chiamare questo metodo per forzare la scrittura nel file temporaneo di tutti i dati rimanenti nel buffer di file.

```cpp
HRESULT Flush() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Simile a [CAtlTemporaryFile:: HandsOff](#handsoff), ad eccezione del fatto che il file non è chiuso.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).

## <a name="catltemporaryfilegetposition"></a><a name="getposition"></a> CAtlTemporaryFile:: GetPosition

Chiamare questo metodo per ottenere la posizione corrente del puntatore del file.

```cpp
HRESULT GetPosition(ULONGLONG& nPos) const throw();
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Posizione in byte.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Per modificare la posizione del puntatore del file, utilizzare [CAtlTemporaryFile:: Seek](#seek).

## <a name="catltemporaryfilegetsize"></a><a name="getsize"></a> CAtlTemporaryFile:: GetSize

Chiamare questo metodo per ottenere le dimensioni in byte del file temporaneo.

```cpp
HRESULT GetSize(ULONGLONG& nLen) const throw();
```

### <a name="parameters"></a>Parametri

*nLen*<br/>
Numero di byte nel file.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

## <a name="catltemporaryfilehandsoff"></a><a name="handsoff"></a> CAtlTemporaryFile:: HandsOff

Chiamare questo metodo per annullare l'associazione del file dall' `CAtlTemporaryFile` oggetto.

```cpp
HRESULT HandsOff() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

`HandsOff` e [CAtlTemporaryFile:: handson](#handson) vengono usati per annullare l'associazione del file dall'oggetto e ricollegarlo se necessario. `HandsOff` forza i dati rimanenti nel buffer di file da scrivere nel file temporaneo e quindi chiude il file. Se si desidera chiudere ed eliminare definitivamente il file oppure se si desidera chiudere e mantenere il contenuto del file con un nome specificato, utilizzare [CAtlTemporaryFile:: Close](#close).

## <a name="catltemporaryfilehandson"></a><a name="handson"></a> CAtlTemporaryFile:: HandsOn

Chiamare questo metodo per aprire un file temporaneo esistente e posizionare il puntatore alla fine del file.

```cpp
HRESULT HandsOn() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

[CAtlTemporaryFile:: HandsOff](#handsoff) e `HandsOn` vengono usati per annullare l'associazione del file dall'oggetto e ricollegarlo, se necessario.

## <a name="catltemporaryfilelockrange"></a><a name="lockrange"></a> CAtlTemporaryFile:: LockRange

Chiamare questo metodo per bloccare un'area nel file temporaneo per impedire l'accesso da parte di altri processi.

```cpp
HRESULT LockRange(ULONGLONG nPos, ULONGLONG nCount) throw();
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Posizione nel file in cui deve iniziare il blocco.

*nCount*<br/>
Lunghezza dell'intervallo di byte da bloccare.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Il blocco di byte in un file impedisce l'accesso a tali byte da altri processi. È possibile bloccare più di un'area di un file, ma non sono consentite aree sovrapposte. Per sbloccare correttamente un'area, usare [CAtlTemporaryFile:: UnlockRange](#unlockrange), assicurandosi che l'intervallo di byte corrisponda esattamente all'area bloccata in precedenza. `LockRange` non unisce aree adiacenti; Se due aree bloccate sono adiacenti, è necessario sbloccarle separatamente.

## <a name="catltemporaryfileoperator-handle"></a><a name="operator_handle"></a> HANDLE CAtlTemporaryFile:: operator

Restituisce un handle per il file temporaneo.

```cpp
operator HANDLE() throw();
```

## <a name="catltemporaryfileread"></a><a name="read"></a> CAtlTemporaryFile:: Read

Chiamare questo metodo per leggere i dati dal file temporaneo a partire dalla posizione indicata dal puntatore del file.

```cpp
HRESULT Read(
    LPVOID pBuffer,
    DWORD nBufSize,
    DWORD& nBytesRead) throw();
```

### <a name="parameters"></a>Parametri

*pBuffer*<br/>
Puntatore al buffer che riceverà i dati letti dal file.

*nBufSize*<br/>
Dimensioni del buffer, in byte.

*nBytesRead*<br/>
Numero di byte letti.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Chiama [CAtlFile:: Read](../../atl/reference/catlfile-class.md#read). Per modificare la posizione del puntatore del file, chiamare [CAtlTemporaryFile:: Seek](#seek).

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).

## <a name="catltemporaryfileseek"></a><a name="seek"></a> CAtlTemporaryFile:: Seek

Chiamare questo metodo per spostare il puntatore del file temporaneo.

```cpp
HRESULT Seek(LONGLONG nOffset, DWORD dwFrom = FILE_CURRENT) throw();
```

### <a name="parameters"></a>Parametri

*nOffset*<br/>
Offset, in byte, dal punto iniziale fornito da *dwFrom.*

*dwFrom*<br/>
Punto iniziale (FILE_BEGIN, FILE_CURRENT o FILE_END).

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Chiama [CAtlFile:: Seek](../../atl/reference/catlfile-class.md#seek). Per ottenere la posizione corrente del puntatore del file, chiamare [CAtlTemporaryFile:: GetPosition](#getposition).

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).

## <a name="catltemporaryfilesetsize"></a><a name="setsize"></a> CAtlTemporaryFile:: sesize

Chiamare questo metodo per impostare le dimensioni del file temporaneo.

```cpp
HRESULT SetSize(ULONGLONG nNewLen) throw();
```

### <a name="parameters"></a>Parametri

*nNewLen*<br/>
Nuova lunghezza del file in byte.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Chiama [CAtlFile:: sesize](../../atl/reference/catlfile-class.md#setsize). Al ritorno, il puntatore del file è posizionato alla fine del file.

## <a name="catltemporaryfiletempfilename"></a><a name="tempfilename"></a> CAtlTemporaryFile:: TempFileName

Chiamare questo metodo per restituire il nome del file temporaneo.

```cpp
LPCTSTR TempFileName() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il LPCTSTR che punta al nome del file.

### <a name="remarks"></a>Commenti

Il nome del file viene generato in [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile) con una chiamata alla funzione [GetTempFile](/windows/win32/api/fileapi/nf-fileapi-gettempfilenamew)Windows SDK. L'estensione del file sarà sempre "TFR" per il file temporaneo.

## <a name="catltemporaryfileunlockrange"></a><a name="unlockrange"></a> CAtlTemporaryFile:: UnlockRange

Chiamare questo metodo per sbloccare un'area del file temporaneo.

```cpp
HRESULT UnlockRange(ULONGLONG nPos, ULONGLONG nCount) throw();
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Posizione nel file in cui deve iniziare lo sblocco.

*nCount*<br/>
Lunghezza dell'intervallo di byte da sbloccare.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Chiama [CAtlFile:: UnlockRange](../../atl/reference/catlfile-class.md#unlockrange).

## <a name="catltemporaryfilewrite"></a><a name="write"></a> CAtlTemporaryFile:: Write

Chiamare questo metodo per scrivere i dati nel file temporaneo a partire dalla posizione indicata dal puntatore del file.

```cpp
HRESULT Write(
    LPCVOID pBuffer,
    DWORD nBufSize,
    DWORD* pnBytesWritten = NULL) throw();
```

### <a name="parameters"></a>Parametri

*pBuffer*<br/>
Buffer contenente i dati da scrivere nel file.

*nBufSize*<br/>
Numero di byte da trasferire dal buffer.

*pnBytesWritten*<br/>
Numero di byte scritti.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Chiama [CAtlFile:: Write](../../atl/reference/catlfile-class.md#write).

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classe CAtlFile](../../atl/reference/catlfile-class.md)

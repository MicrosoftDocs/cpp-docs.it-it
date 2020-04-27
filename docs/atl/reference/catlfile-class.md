---
title: Classe CAtlFile
ms.date: 11/04/2016
f1_keywords:
- CAtlFile
- ATLFILE/ATL::CAtlFile
- ATLFILE/ATL::CAtlFile::CAtlFile
- ATLFILE/ATL::CAtlFile::Create
- ATLFILE/ATL::CAtlFile::Flush
- ATLFILE/ATL::CAtlFile::GetOverlappedResult
- ATLFILE/ATL::CAtlFile::GetPosition
- ATLFILE/ATL::CAtlFile::GetSize
- ATLFILE/ATL::CAtlFile::LockRange
- ATLFILE/ATL::CAtlFile::Read
- ATLFILE/ATL::CAtlFile::Seek
- ATLFILE/ATL::CAtlFile::SetSize
- ATLFILE/ATL::CAtlFile::UnlockRange
- ATLFILE/ATL::CAtlFile::Write
- ATLFILE/ATL::CAtlFile::m_pTM
helpviewer_keywords:
- CAtlFile class
ms.assetid: 93ed160b-af2a-448c-9cbe-e5fa46c199bb
ms.openlocfilehash: 83a0a89bf6e2e21be33cf8c6003228111eff5394
ms.sourcegitcommit: 2bc15c5b36372ab01fa21e9bcf718fa22705814f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/27/2020
ms.locfileid: "82168111"
---
# <a name="catlfile-class"></a>Classe CAtlFile

Questa classe fornisce un wrapper sottile per l'API di gestione dei file di Windows.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
class CAtlFile : public CHandle
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlFile:: CAtlFile](#catlfile)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlFile:: create](#create)|Chiamare questo metodo per creare o aprire un file.|
|[CAtlFile:: Flush](#flush)|Chiamare questo metodo per cancellare i buffer per il file e far sì che tutti i dati memorizzati nel buffer vengano scritti nel file.|
|[CAtlFile:: GetOverlappedResult](#getoverlappedresult)|Chiamare questo metodo per ottenere i risultati di un'operazione sovrapposta sul file.|
|[CAtlFile:: GetPosition](#getposition)|Chiamare questo metodo per ottenere la posizione corrente del puntatore del file dal file.|
|[CAtlFile:: GetSize](#getsize)|Chiamare questo metodo per ottenere le dimensioni in byte del file.|
|[CAtlFile:: LockRange](#lockrange)|Chiamare questo metodo per bloccare un'area del file per impedire l'accesso da parte di altri processi.|
|[CAtlFile:: Read](#read)|Chiamare questo metodo per leggere i dati da un file a partire dalla posizione indicata dal puntatore del file.|
|[CAtlFile:: Seek](#seek)|Chiamare questo metodo per spostare il puntatore del file.|
|[CAtlFile:: sesize](#setsize)|Chiamare questo metodo per impostare le dimensioni del file.|
|[CAtlFile:: UnlockRange](#unlockrange)|Chiamare questo metodo per sbloccare un'area del file.|
|[CAtlFile:: Write](#write)|Chiamare questo metodo per scrivere i dati nel file a partire dalla posizione indicata dal puntatore del file.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAtlFile:: m_pTM](#m_ptm)|Puntatore all' `CAtlTransactionManager` oggetto|

## <a name="remarks"></a>Osservazioni

Utilizzare questa classe quando le esigenze di gestione dei file sono relativamente semplici, ma è necessaria una maggiore astrazione rispetto a quella fornita dall'API Windows, senza includere le dipendenze MFC.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CHandle](../../atl/reference/chandle-class.md)

`CAtlFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlfile. h

## <a name="catlfilecatlfile"></a><a name="catlfile"></a>CAtlFile:: CAtlFile

Costruttore.

```cpp
CAtlFile() throw();
CAtlFile(CAtlTransactionManager* pTM = NULL) throw();
CAtlFile(CAtlFile& file) throw();
explicit CAtlFile(HANDLE hFile) throw();
```

### <a name="parameters"></a>Parametri

*file*<br/>
Oggetto file.

*hFile*<br/>
Handle di file.

*pTM*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="remarks"></a>Osservazioni

Il costruttore di copia trasferisce la proprietà dell'handle di file `CAtlFile` dall'oggetto originale all'oggetto appena costruito.

## <a name="catlfilecreate"></a><a name="create"></a>CAtlFile:: create

Chiamare questo metodo per creare o aprire un file.

```cpp
HRESULT Create(
    LPCTSTR szFilename,
    DWORD dwDesiredAccess,
    DWORD dwShareMode,
    DWORD dwCreationDisposition,
    DWORD dwFlagsAndAttributes = FILE_ATTRIBUTE_NORMAL,
    LPSECURITY_ATTRIBUTES lpsa = NULL,
    HANDLE hTemplateFile = NULL) throw();
```

### <a name="parameters"></a>Parametri

*szFilename*<br/>
Nome del file.

*dwDesiredAccess*<br/>
Accesso desiderato. Vedere *dwDesiredAccess* in [CreateFile](/windows/win32/api/fileapi/nf-fileapi-createfilew) nella Windows SDK.

*dwShareMode*<br/>
Modalità di condivisione. Vedere *dwShareMode* in `CreateFile`.

*dwCreationDisposition*<br/>
Disposizione di creazione. Vedere *dwCreationDisposition* in `CreateFile`.

*dwFlagsAndAttributes*<br/>
Flag e attributi. Vedere *dwFlagsAndAttributes* in `CreateFile`.

*lpsa*<br/>
Attributi di sicurezza. Vedere *lpSecurityAttributes* in `CreateFile`.

*hTemplateFile*<br/>
File modello. Vedere *hTemplateFile* in `CreateFile`.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Chiama [CreateFile](/windows/win32/api/fileapi/nf-fileapi-createfilew) per creare o aprire il file.

## <a name="catlfileflush"></a><a name="flush"></a>CAtlFile:: Flush

Chiamare questo metodo per cancellare i buffer per il file e far sì che tutti i dati memorizzati nel buffer vengano scritti nel file.

```cpp
HRESULT Flush() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Chiama [FlushFileBuffers](/windows/win32/api/fileapi/nf-fileapi-flushfilebuffers) per scaricare i dati memorizzati nel buffer nel file.

## <a name="catlfilegetoverlappedresult"></a><a name="getoverlappedresult"></a>CAtlFile:: GetOverlappedResult

Chiamare questo metodo per ottenere i risultati di un'operazione sovrapposta sul file.

```cpp
HRESULT GetOverlappedResult(
    LPOVERLAPPED pOverlapped,
    DWORD& dwBytesTransferred,
    BOOL bWait) throw();
```

### <a name="parameters"></a>Parametri

*pOverlapped*<br/>
Struttura sovrapposta. Vedere *lpOverlapped* in [GetOverlappedResult](/windows/win32/api/ioapiset/nf-ioapiset-getoverlappedresult) nella Windows SDK.

*dwBytesTransferred*<br/>
Byte trasferiti. Vedere *lpNumberOfBytesTransferred* in `GetOverlappedResult`.

*bWait*<br/>
Opzione wait. Vedere *bWait* in `GetOverlappedResult`.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Chiama [GetOverlappedResult](/windows/win32/api/ioapiset/nf-ioapiset-getoverlappedresult) per ottenere i risultati di un'operazione sovrapposta sul file.

## <a name="catlfilegetposition"></a><a name="getposition"></a>CAtlFile:: GetPosition

Chiamare questo metodo per ottenere la posizione corrente del puntatore del file.

```cpp
HRESULT GetPosition(ULONGLONG& nPos) const throw();
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Posizione in byte.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Chiama [SetFilePointer](/windows/win32/api/fileapi/nf-fileapi-setfilepointer) per ottenere la posizione corrente del puntatore del file.

## <a name="catlfilegetsize"></a><a name="getsize"></a>CAtlFile:: GetSize

Chiamare questo metodo per ottenere le dimensioni in byte del file.

```cpp
HRESULT GetSize(ULONGLONG& nLen) const throw();
```

### <a name="parameters"></a>Parametri

*nLen*<br/>
Numero di byte nel file.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Chiama [Filesize](/windows/win32/api/fileapi/nf-fileapi-getfilesize) per ottenere le dimensioni in byte del file.

## <a name="catlfilelockrange"></a><a name="lockrange"></a>CAtlFile:: LockRange

Chiamare questo metodo per bloccare un'area del file per impedire l'accesso da parte di altri processi.

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

### <a name="remarks"></a>Osservazioni

Chiama [lockfile](/windows/win32/api/fileapi/nf-fileapi-lockfile) per bloccare un'area del file. Il blocco di byte in un file impedisce l'accesso a tali byte da altri processi. È possibile bloccare più di un'area di un file, ma non sono consentite aree sovrapposte. Quando si sblocca un'area usando [CAtlFile:: UnlockRange](#unlockrange), l'intervallo di byte deve corrispondere esattamente all'area bloccata in precedenza. `LockRange`non unisce aree adiacenti; Se due aree bloccate sono adiacenti, è necessario sbloccarle separatamente.

## <a name="catlfilem_ptm"></a><a name="m_ptm"></a>CAtlFile:: m_pTM

Puntatore a un oggetto `CAtlTransactionManager`.

```cpp
CAtlTransactionManager* m_pTM;
```

### <a name="remarks"></a>Osservazioni

## <a name="catlfileread"></a><a name="read"></a>CAtlFile:: Read

Chiamare questo metodo per leggere i dati da un file a partire dalla posizione indicata dal puntatore del file.

```cpp
HRESULT Read(
    LPVOID pBuffer,
    DWORD nBufSize) throw();

HRESULT Read(
    LPVOID pBuffer,
    DWORD nBufSize,
    DWORD& nBytesRead) throw();

HRESULT Read(
    LPVOID pBuffer,
    DWORD nBufSize,
    LPOVERLAPPED pOverlapped) throw();

HRESULT Read(
    LPVOID pBuffer,
    DWORD nBufSize,
    LPOVERLAPPED pOverlapped,
    LPOVERLAPPED_COMPLETION_ROUTINE pfnCompletionRoutine) throw();
```

### <a name="parameters"></a>Parametri

*pBuffer*<br/>
Puntatore al buffer che riceverà i dati letti dal file.

*nBufSize*<br/>
Dimensioni del buffer, in byte.

*nBytesRead*<br/>
Numero di byte letti.

*pOverlapped*<br/>
Struttura sovrapposta. Vedere *lpOverlapped* in [ReadFile](/windows/win32/api/fileapi/nf-fileapi-readfile) nella Windows SDK.

*pfnCompletionRoutine*<br/>
Routine di completamento. Vedere *il lpCompletionRoutine* in [ReadFileEx](/windows/win32/api/fileapi/nf-fileapi-readfileex) nella Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

I primi tre form chiamano [ReadFile](/windows/win32/api/fileapi/nf-fileapi-readfile), l'ultimo [ReadFileEx](/windows/win32/api/fileapi/nf-fileapi-readfileex) per leggere i dati dal file. Usare [CAtlFile:: Seek](#seek) per spostare il puntatore del file.

## <a name="catlfileseek"></a><a name="seek"></a>CAtlFile:: Seek

Chiamare questo metodo per spostare il puntatore del file.

```cpp
HRESULT Seek(
    LONGLONG nOffset,
    DWORD dwFrom = FILE_CURRENT) throw();
```

### <a name="parameters"></a>Parametri

*nOffset*<br/>
Offset dal punto iniziale fornito da *dwFrom*.

*dwFrom*<br/>
Punto iniziale (FILE_BEGIN, FILE_CURRENT o FILE_END).

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Chiama [SetFilePointer](/windows/win32/api/fileapi/nf-fileapi-setfilepointer) per spostare il puntatore del file.

## <a name="catlfilesetsize"></a><a name="setsize"></a>CAtlFile:: sesize

Chiamare questo metodo per impostare le dimensioni del file.

```cpp
HRESULT SetSize(ULONGLONG nNewLen) throw();
```

### <a name="parameters"></a>Parametri

*nNewLen*<br/>
Nuova lunghezza del file in byte.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Chiama [SetFilePointer](/windows/win32/api/fileapi/nf-fileapi-setfilepointer) e [SetEndOfFile](/windows/win32/api/fileapi/nf-fileapi-setendoffile) per impostare le dimensioni del file. Al ritorno, il puntatore del file è posizionato alla fine del file.

## <a name="catlfileunlockrange"></a><a name="unlockrange"></a>CAtlFile:: UnlockRange

Chiamare questo metodo per sbloccare un'area del file.

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

### <a name="remarks"></a>Osservazioni

Chiama [UnlockFile](/windows/win32/api/fileapi/nf-fileapi-unlockfile) per sbloccare un'area del file.

## <a name="catlfilewrite"></a><a name="write"></a>CAtlFile:: Write

Chiamare questo metodo per scrivere i dati nel file a partire dalla posizione indicata dal puntatore del file.

```cpp
HRESULT Write(
    LPCVOID pBuffer,
    DWORD nBufSize,
    LPOVERLAPPED pOverlapped,
    LPOVERLAPPED_COMPLETION_ROUTINE pfnCompletionRoutine) throw();

HRESULT Write(
    LPCVOID pBuffer,
    DWORD nBufSize,
    DWORD* pnBytesWritten = NULL) throw();

HRESULT Write(
    LPCVOID pBuffer,
    DWORD nBufSize,
    LPOVERLAPPED pOverlapped) throw();
```

### <a name="parameters"></a>Parametri

*pBuffer*<br/>
Buffer contenente i dati da scrivere nel file.

*nBufSize*<br/>
Numero di byte da trasferire dal buffer.

*pOverlapped*<br/>
Struttura sovrapposta. Vedere *lpOverlapped* in [WriteFile](/windows/win32/api/fileapi/nf-fileapi-writefile) nella Windows SDK.

*pfnCompletionRoutine*<br/>
Routine di completamento. Vedere *il lpCompletionRoutine* in [WriteFileEx](/windows/win32/api/fileapi/nf-fileapi-writefileex) nella Windows SDK.

*pnBytesWritten*<br/>
Byte scritti.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Le prime tre forme chiamano [WriteFile](/windows/win32/api/fileapi/nf-fileapi-writefile), l'ultima chiama [WriteFileEx](/windows/win32/api/fileapi/nf-fileapi-writefileex) per scrivere i dati nel file. Usare [CAtlFile:: Seek](#seek) per spostare il puntatore del file.

## <a name="see-also"></a>Vedere anche

[Esempio Marquee](../../overview/visual-cpp-samples.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classe CHandle](../../atl/reference/chandle-class.md)

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
ms.openlocfilehash: 39f323874ccde5178722235b9beb34c2572407a1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318973"
---
# <a name="catlfile-class"></a>Classe CAtlFile

Questa classe fornisce un wrapper sottile intorno all'API di gestione dei file di Windows.This class provides a thin wrapper around the Windows file-handling API.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CAtlFile : public CHandle
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlFile::CAtlFile](#catlfile)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlFile::Crea](#create)|Chiamare questo metodo per creare o aprire un file.|
|[CAtlFile::Flush](#flush)|Chiamare questo metodo per cancellare i buffer per il file e fare in modo che tutti i dati memorizzati nel buffer vengano scritti nel file.|
|[CAtlFile::GetOverlappedResult](#getoverlappedresult)|Chiamare questo metodo per ottenere i risultati di un'operazione sovrapposta sul file.|
|[CAtlFile::GetPosition](#getposition)|Chiamare questo metodo per ottenere la posizione del puntatore del file corrente dal file.|
|[CAtlFile::GetSize](#getsize)|Chiamare questo metodo per ottenere la dimensione in byte del file.|
|[CAtlFile::LockRange](#lockrange)|Chiamare questo metodo per bloccare un'area nel file per impedire ad altri processi di accedervi.|
|[CAtlFile::Leggi](#read)|Chiamare questo metodo per leggere i dati da un file a partire dalla posizione indicata dal puntatore del file.|
|[CAtlFile::Seek](#seek)|Chiamare questo metodo per spostare il puntatore del file.|
|[CAtlFile::SetSize](#setsize)|Chiamare questo metodo per impostare la dimensione del file.|
|[CAtlFile::UnlockRange](#unlockrange)|Chiamare questo metodo per sbloccare un'area del file.|
|[CAtlFile::Scrittura](#write)|Chiamare questo metodo per scrivere dati nel file a partire dalla posizione indicata dal puntatore del file.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAtlFile::m_pTM](#m_ptm)|Puntatore `CAtlTransactionManager` all'oggetto|

## <a name="remarks"></a>Osservazioni

Utilizzare questa classe quando le esigenze di gestione dei file sono relativamente semplici, ma è necessaria una maggiore astrazione rispetto a quella fornita dall'API di Windows, senza includere le dipendenze MFC.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CHandle](../../atl/reference/chandle-class.md)

`CAtlFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlfile.h

## <a name="catlfilecatlfile"></a><a name="catlfile"></a>CAtlFile::CAtlFile

Costruttore.

```
CAtlFile() throw();
CAtlFile(CAtlTransactionManager* pTM = NULL) throw();
CAtlFile(CAtlFile& file) throw();
explicit CAtlFile(HANDLE hFile) throw();
```

### <a name="parameters"></a>Parametri

*ﬁle*<br/>
Oggetto file.

*hFile (File)*<br/>
Handle del file.

*Ptm*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="remarks"></a>Osservazioni

Il costruttore di copia trasferisce `CAtlFile` la proprietà dell'handle di file dall'oggetto originale all'oggetto appena costruito.

## <a name="catlfilecreate"></a><a name="create"></a>CAtlFile::Crea

Chiamare questo metodo per creare o aprire un file.

```
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

*Nomefile di sz*<br/>
Nome del file.

*dwDesiredAccess (Accesso desiderato)*<br/>
L'accesso desiderato. Vedere *dwDesiredAccess* in [CreateFile](/windows/win32/api/fileapi/nf-fileapi-createfilew) in Windows SDK.

*dwShareMode (Modalità dwShare)*<br/>
Modalità di condivisione. Vedere *dwShareMode* in `CreateFile`.

*dwCreationDisposizione*<br/>
La disposizione della creazione. Vedere *dwCreationDisposition* in `CreateFile`.

*dwFlagsAndAttributes (Attributi dwFlagsAndAttributes)*<br/>
Flag e attributi. Vedere *dwFlagsAndAttributes* in `CreateFile`.

*lpsa*<br/>
Attributi di sicurezza. Vedere *lpSecurityAttributes* in `CreateFile`.

*hTemplateFile (file )*<br/>
File modello. Vedere *hTemplateFile* in `CreateFile`.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Chiama [CreateFile](/windows/win32/api/fileapi/nf-fileapi-createfilew) per creare o aprire il file.

## <a name="catlfileflush"></a><a name="flush"></a>CAtlFile::Flush

Chiamare questo metodo per cancellare i buffer per il file e fare in modo che tutti i dati memorizzati nel buffer vengano scritti nel file.

```
HRESULT Flush() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Chiama [FlushFileBuffers](/windows/win32/api/fileapi/nf-fileapi-flushfilebuffers) per scaricare i dati memorizzati nel buffer nel file.

## <a name="catlfilegetoverlappedresult"></a><a name="getoverlappedresult"></a>CAtlFile::GetOverlappedResult

Chiamare questo metodo per ottenere i risultati di un'operazione sovrapposta sul file.

```
HRESULT GetOverlappedResult(
    LPOVERLAPPED pOverlapped,
    DWORD& dwBytesTransferred,
    BOOL bWait) throw();
```

### <a name="parameters"></a>Parametri

*pSovrapposto*<br/>
Struttura sovrapposta. Vedere *lpOverlapped* in [GetOverlappedResult](/windows/win32/api/ioapiset/nf-ioapiset-getoverlappedresult) in Windows SDK.

*dwBytesTransferred*<br/>
Byte trasferiti. Vedere *lpNumberOfBytesTransferred* in `GetOverlappedResult`.

*bAttendere*<br/>
Opzione di attesa. Vedere *bAttendere* in `GetOverlappedResult`.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Chiama [GetOverlappedResult](/windows/win32/api/ioapiset/nf-ioapiset-getoverlappedresult) per ottenere i risultati di un'operazione sovrapposta sul file.

## <a name="catlfilegetposition"></a><a name="getposition"></a>CAtlFile::GetPosition

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

Chiama [SetFilePointer](/windows/win32/api/fileapi/nf-fileapi-setfilepointer) per ottenere la posizione corrente del puntatore del file.

## <a name="catlfilegetsize"></a><a name="getsize"></a>CAtlFile::GetSize

Chiamare questo metodo per ottenere la dimensione in byte del file.

```
HRESULT GetSize(ULONGLONG& nLen) const throw();
```

### <a name="parameters"></a>Parametri

*nLen*<br/>
Numero di byte nel file.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Chiama [GetFileSize](/windows/win32/api/fileapi/nf-fileapi-getfilesize) per ottenere la dimensione in byte del file.

## <a name="catlfilelockrange"></a><a name="lockrange"></a>CAtlFile::LockRange

Chiamare questo metodo per bloccare un'area nel file per impedire ad altri processi di accedervi.

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

Chiama [LockFile](/windows/win32/api/fileapi/nf-fileapi-lockfile) per bloccare un'area nel file. Il blocco di byte in un file impedisce l'accesso a tali byte da altri processi. È possibile bloccare più aree di un file, ma non sono consentite aree sovrapposte. Quando si sblocca un'area, utilizzando [CAtlFile::UnlockRange](#unlockrange), l'intervallo di byte deve corrispondere esattamente all'area precedentemente bloccata. `LockRange`non unisce aree adiacenti; se due regioni bloccate sono adiacenti, è necessario sbloccare ciascuna separatamente.

## <a name="catlfilem_ptm"></a><a name="m_ptm"></a>CAtlFile::m_pTM

Puntatore a un oggetto `CAtlTransactionManager`.

```
CAtlTransactionManager* m_pTM;
```

### <a name="remarks"></a>Osservazioni

## <a name="catlfileread"></a><a name="read"></a>CAtlFile::Leggi

Chiamare questo metodo per leggere i dati da un file a partire dalla posizione indicata dal puntatore del file.

```
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

*nBufSize (informazioni in base al nome)*<br/>
Dimensioni del buffer, in byte.

*nBytesRead*<br/>
Numero di byte letti.

*pSovrapposto*<br/>
Struttura sovrapposta. Vedere *lpOverlapped* in [ReadFile](/windows/win32/api/fileapi/nf-fileapi-readfile) in Windows SDK.

*pfnCompletionRoutine (informazioni in base alla proprietà pfnCompletionRoutine*<br/>
La routine di completamento. Vedere *lpCompletionRoutine* in [ReadFileEx](/windows/win32/api/fileapi/nf-fileapi-readfileex) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Le prime tre form chiamano [ReadFile](/windows/win32/api/fileapi/nf-fileapi-readfile), l'ultimo [ReadFileEx](/windows/win32/api/fileapi/nf-fileapi-readfileex) per leggere i dati dal file. Utilizzare [CAtlFile::Seek](#seek) per spostare il puntatore del file.

## <a name="catlfileseek"></a><a name="seek"></a>CAtlFile::Seek

Chiamare questo metodo per spostare il puntatore del file.

```
HRESULT Seek(
    LONGLONG nOffset,
    DWORD dwFrom = FILE_CURRENT) throw();
```

### <a name="parameters"></a>Parametri

*nOffset*<br/>
Offset dal punto iniziale fornito da *dwFrom*.

*dwDa*<br/>
Il punto iniziale (FILE_BEGIN, FILE_CURRENT o FILE_END).

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Chiama [SetFilePointer](/windows/win32/api/fileapi/nf-fileapi-setfilepointer) per spostare il puntatore del file.

## <a name="catlfilesetsize"></a><a name="setsize"></a>CAtlFile::SetSize

Chiamare questo metodo per impostare la dimensione del file.

```
HRESULT SetSize(ULONGLONG nNewLen) throw();
```

### <a name="parameters"></a>Parametri

*nNewLen*<br/>
Nuova lunghezza del file in byte.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Chiama [SetFilePointer](/windows/win32/api/fileapi/nf-fileapi-setfilepointer) e [SetEndOfFile](/windows/win32/api/fileapi/nf-fileapi-setendoffile) per impostare la dimensione del file. Al ritorno, il puntatore del file è posizionato alla fine del file.

## <a name="catlfileunlockrange"></a><a name="unlockrange"></a>CAtlFile::UnlockRange

Chiamare questo metodo per sbloccare un'area del file.

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

Chiama [UnlockFile](/windows/win32/api/fileapi/nf-fileapi-unlockfile) per sbloccare un'area del file.

## <a name="catlfilewrite"></a><a name="write"></a>CAtlFile::Scrittura

Chiamare questo metodo per scrivere dati nel file a partire dalla posizione indicata dal puntatore del file.

```
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

*nBufSize (informazioni in base al nome)*<br/>
Numero di byte da trasferire dal buffer.

*pSovrapposto*<br/>
Struttura sovrapposta. Vedere *lpOverlapped* in [WriteFile](/windows/win32/api/fileapi/nf-fileapi-writefile) in Windows SDK.

*pfnCompletionRoutine (informazioni in base alla proprietà pfnCompletionRoutine*<br/>
La routine di completamento. Vedere *lpCompletionRoutine* in [WriteFileEx](/windows/win32/api/fileapi/nf-fileapi-writefileex) in Windows SDK.

*pnBytesScritto*<br/>
Byte scritti.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Le prime tre form chiamano [WriteFile](/windows/win32/api/fileapi/nf-fileapi-writefile), l'ultima chiama [WriteFileEx](/windows/win32/api/fileapi/nf-fileapi-writefileex) per scrivere dati nel file. Utilizzare [CAtlFile::Seek](#seek) per spostare il puntatore del file.

## <a name="see-also"></a>Vedere anche

[Esempio Marquee](../../overview/visual-cpp-samples.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classe CHandle](../../atl/reference/chandle-class.md)

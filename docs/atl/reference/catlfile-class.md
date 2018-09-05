---
title: Classe CAtlFile | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CAtlFile class
ms.assetid: 93ed160b-af2a-448c-9cbe-e5fa46c199bb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d3d6ff72f9f5011d7c4e0f0b65cca9a82227b70d
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43753253"
---
# <a name="catlfile-class"></a>Classe CAtlFile

Questa classe fornisce un wrapper sottile per i Windows API di gestione di file.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

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
|[CAtlFile::Create](#create)|Chiamare questo metodo per creare o aprire un file.|
|[CAtlFile::Flush](#flush)|Chiamare questo metodo per cancellare il buffer per il file e causare tutti i dati memorizzati nel buffer da scrivere nel file.|
|[CAtlFile::GetOverlappedResult](#getoverlappedresult)|Chiamare questo metodo per ottenere i risultati di un'operazione sovrapposta sul file.|
|[CAtlFile::GetPosition](#getposition)|Chiamare questo metodo per ottenere la posizione corrente del puntatore di file dal file.|
|[CAtlFile::GetSize](#getsize)|Chiamare questo metodo per ottenere la dimensione in byte del file.|
|[CAtlFile::LockRange](#lockrange)|Chiamare questo metodo per bloccare un'area nel file per impedire l'accesso di altri processi.|
|[CAtlFile::Read](#read)|Chiamare questo metodo per leggere i dati da un file a partire dalla posizione indicata dal puntatore di file.|
|[CAtlFile::Seek](#seek)|Chiamare questo metodo per spostare il puntatore del file del file.|
|[CAtlFile::SetSize](#setsize)|Chiamare questo metodo per impostare le dimensioni del file.|
|[CAtlFile::UnlockRange](#unlockrange)|Chiamare questo metodo per sbloccare un'area del file.|
|[CAtlFile::Write](#write)|Chiamare questo metodo per scrivere i dati del file iniziando dalla posizione indicata dal puntatore di file.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CAtlFile::m_pTM](#m_ptm)|Puntatore a `CAtlTransactionManager` oggetto|

## <a name="remarks"></a>Note

Utilizzare questa classe quando le esigenze di gestione dei file sono relativamente semplici, ma altre astrazione rispetto a quelli offerti l'API di Windows è necessaria, senza includere le dipendenze MFC.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CHandle](../../atl/reference/chandle-class.md)

`CAtlFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlfile.h

##  <a name="catlfile"></a>  CAtlFile::CAtlFile

Costruttore.

```
CAtlFile() throw();
CAtlFile(CAtlTransactionManager* pTM = NULL) throw();
CAtlFile(CAtlFile& file) throw();
explicit CAtlFile(HANDLE hFile) throw();
```

### <a name="parameters"></a>Parametri

*file*  
L'oggetto file.

*oggetto hFile*  
L'handle di file.

*pTM*  
Puntatore all'oggetto CAtlTransactionManager

### <a name="remarks"></a>Note

Il costruttore di copia trasferisce la proprietà dell'handle di file rispetto all'originale `CAtlFile` all'oggetto appena costruito.

##  <a name="create"></a>  CAtlFile::Create

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

*szFilename*  
Nome file.

*dwDesiredAccess*  
L'accesso desiderato. Visualizzare *dwDesiredAccess* nelle [CreateFile](/windows/desktop/api/fileapi/nf-fileapi-createfilea) nel SDK di Windows.

*dwShareMode*  
La modalità di condivisione. Visualizzare *dwShareMode* in `CreateFile`.

*dwCreationDisposition*  
Disposizione di creazione. Visualizzare *dwCreationDisposition* in `CreateFile`.

*dwFlagsAndAttributes*  
I flag e gli attributi. Visualizzare *dwFlagsAndAttributes* in `CreateFile`.

*lpsa*  
Gli attributi di sicurezza. Visualizzare *lpSecurityAttributes* in `CreateFile`.

*hTemplateFile*  
Il file di modello. Visualizzare *hTemplateFile* in `CreateFile`.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Le chiamate [CreateFile](/windows/desktop/api/fileapi/nf-fileapi-createfilea) per creare o aprire il file.

##  <a name="flush"></a>  CAtlFile::Flush

Chiamare questo metodo per cancellare il buffer per il file e causare tutti i dati memorizzati nel buffer da scrivere nel file.

```
HRESULT Flush() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Le chiamate [FlushFileBuffers](/windows/desktop/api/fileapi/nf-fileapi-flushfilebuffers) lo scaricamento di dati memorizzati nel buffer nel file.

##  <a name="getoverlappedresult"></a>  CAtlFile::GetOverlappedResult

Chiamare questo metodo per ottenere i risultati di un'operazione sovrapposta sul file.

```
HRESULT GetOverlappedResult(
    LPOVERLAPPED pOverlapped,
    DWORD& dwBytesTransferred,
    BOOL bWait) throw();
```

### <a name="parameters"></a>Parametri

*pOverlapped*  
La struttura sovrapposta. Visualizzare *lpOverlapped* nelle [GetOverlappedResult](/windows/desktop/api/ioapiset/nf-ioapiset-getoverlappedresult) nel SDK di Windows.

*dwBytesTransferred*  
I byte trasferiti. Visualizzare *lpNumberOfBytesTransferred* in `GetOverlappedResult`.

*bWait*  
L'opzione di attesa. Visualizzare *bWait* in `GetOverlappedResult`.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Le chiamate [GetOverlappedResult](/windows/desktop/api/ioapiset/nf-ioapiset-getoverlappedresult) per ottenere i risultati di un'operazione sovrapposta sul file.

##  <a name="getposition"></a>  CAtlFile::GetPosition

Chiamare questo metodo per ottenere la posizione corrente del puntatore di file.

```
HRESULT GetPosition(ULONGLONG& nPos) const throw();
```

### <a name="parameters"></a>Parametri

*nPos*  
La posizione in byte.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Le chiamate [SetFilePointer](/windows/desktop/api/fileapi/nf-fileapi-setfilepointer) per ottenere la posizione corrente del puntatore di file.

##  <a name="getsize"></a>  CAtlFile::GetSize

Chiamare questo metodo per ottenere la dimensione in byte del file.

```
HRESULT GetSize(ULONGLONG& nLen) const throw();
```

### <a name="parameters"></a>Parametri

*nLen*  
Il numero di byte nel file.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Le chiamate [GetFileSize](/windows/desktop/api/fileapi/nf-fileapi-getfilesize) per ottenere la dimensione in byte del file.

##  <a name="lockrange"></a>  CAtlFile::LockRange

Chiamare questo metodo per bloccare un'area nel file per impedire l'accesso di altri processi.

```
HRESULT LockRange(ULONGLONG nPos, ULONGLONG nCount) throw();
```

### <a name="parameters"></a>Parametri

*nPos*  
La posizione nel file in cui deve iniziare il blocco.

*nCount*  
La lunghezza dell'intervallo di byte da bloccare.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Le chiamate [era](/windows/desktop/api/fileapi/nf-fileapi-lockfile) bloccare un'area nel file. Il blocco di byte in un file impedisce l'accesso a tali byte da altri processi. È possibile bloccare più di un'area di un file, ma non le aree di sovrapposizione sono consentite. Quando si sblocca un'area, usando [CAtlFile::UnlockRange](#unlockrange), l'intervallo di byte deve corrispondere esattamente all'area in cui è stato bloccato in precedenza. `LockRange` non unisce aree adiacenti; Se due aree bloccate sono adiacenti, è necessario sbloccare ognuno separatamente.

##  <a name="m_ptm"></a>  CAtlFile::m_pTM

Puntatore a un oggetto `CAtlTransactionManager`.

```
CAtlTransactionManager* m_pTM;
```

### <a name="remarks"></a>Note

##  <a name="read"></a>  CAtlFile::Read

Chiamare questo metodo per leggere i dati da un file a partire dalla posizione indicata dal puntatore di file.

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

*pBuffer*  
Puntatore al buffer che riceverà i dati letti dal file.

*nBufSize*  
Dimensioni del buffer, in byte.

*nBytesRead*  
Numero di byte letti.

*pOverlapped*  
La struttura sovrapposta. Visualizzare *lpOverlapped* nelle [ReadFile](/windows/desktop/api/fileapi/nf-fileapi-readfile) nel SDK di Windows.

*pfnCompletionRoutine*  
La routine di completamento. Visualizzare *lpCompletionRoutine* nelle [ReadFileEx](/windows/desktop/api/fileapi/nf-fileapi-readfileex) nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Chiamare le prime tre forme [ReadFile](/windows/desktop/api/fileapi/nf-fileapi-readfile), l'ultimo [ReadFileEx](/windows/desktop/api/fileapi/nf-fileapi-readfileex) per leggere i dati dal file. Uso [CAtlFile::Seek](#seek) per spostare il puntatore del file.

##  <a name="seek"></a>  CAtlFile::Seek

Chiamare questo metodo per spostare il puntatore del file del file.

```
HRESULT Seek(
    LONGLONG nOffset,
    DWORD dwFrom = FILE_CURRENT) throw();
```

### <a name="parameters"></a>Parametri

*nOffset*  
L'offset dal punto di partenza specificato da *dwFrom*.

*dwFrom*  
Il punto di partenza (FILE_BEGIN, FILE_CURRENT o FILE_END).

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Le chiamate [SetFilePointer](/windows/desktop/api/fileapi/nf-fileapi-setfilepointer) per spostare il puntatore del file.

##  <a name="setsize"></a>  CAtlFile::SetSize

Chiamare questo metodo per impostare le dimensioni del file.

```
HRESULT SetSize(ULONGLONG nNewLen) throw();
```

### <a name="parameters"></a>Parametri

*nNewLen*  
La nuova lunghezza del file in byte.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Le chiamate [SetFilePointer](/windows/desktop/api/fileapi/nf-fileapi-setfilepointer) e [SetEndOfFile](/windows/desktop/api/fileapi/nf-fileapi-setendoffile) per impostare le dimensioni del file. In fase di restituzione, il puntatore del file è posizionato alla fine del file.

##  <a name="unlockrange"></a>  CAtlFile::UnlockRange

Chiamare questo metodo per sbloccare un'area del file.

```
HRESULT UnlockRange(ULONGLONG nPos, ULONGLONG nCount) throw();
```

### <a name="parameters"></a>Parametri

*nPos*  
La posizione nel file in cui deve iniziare lo sblocco.

*nCount*  
La lunghezza dell'intervallo di byte da sbloccare.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Le chiamate [UnlockFile](/windows/desktop/api/fileapi/nf-fileapi-unlockfile) per sbloccare un'area del file.

##  <a name="write"></a>  CAtlFile::Write

Chiamare questo metodo per scrivere i dati del file iniziando dalla posizione indicata dal puntatore di file.

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

*pBuffer*  
Buffer contenente i dati da scrivere nel file.

*nBufSize*  
Il numero di byte da trasferire dal buffer.

*pOverlapped*  
La struttura sovrapposta. Visualizzare *lpOverlapped* nelle [WriteFile](/windows/desktop/api/fileapi/nf-fileapi-writefile) nel SDK di Windows.

*pfnCompletionRoutine*  
La routine di completamento. Visualizzare *lpCompletionRoutine* nelle [WriteFileEx](/windows/desktop/api/fileapi/nf-fileapi-writefileex) nel SDK di Windows.

*pnBytesWritten*  
Byte scritti.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Chiamare le prime tre forme [WriteFile](/windows/desktop/api/fileapi/nf-fileapi-writefile), le chiamate ultimo [WriteFileEx](/windows/desktop/api/fileapi/nf-fileapi-writefileex) per scrivere dati nel file. Uso [CAtlFile::Seek](#seek) per spostare il puntatore del file.

## <a name="see-also"></a>Vedere anche

[Esempio di testo scorrevole](../../visual-cpp-samples.md)   
[Panoramica della classe](../../atl/atl-class-overview.md)   
[Classe CHandle](../../atl/reference/chandle-class.md)

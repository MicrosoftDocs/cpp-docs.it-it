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
ms.openlocfilehash: f440476db3618c24f0fd1cfbfe028c959517a607
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50642271"
---
# <a name="catltemporaryfile-class"></a>Classe CAtlTemporaryFile

Questa classe fornisce metodi per la creazione e utilizzo di un file temporaneo.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CAtlTemporaryFile
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile)|Costruttore.|
|[CAtlTemporaryFile:: ~ CAtlTemporaryFile](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlTemporaryFile::Close](#close)|Chiamare questo metodo per chiudere un file temporaneo e uno eliminarne il contenuto o di memorizzarli sotto il nome del file specificato.|
|[CAtlTemporaryFile::Create](#create)|Chiamare questo metodo per creare un file temporaneo.|
|[CAtlTemporaryFile::Flush](#flush)|Chiamare questo metodo per forzare tutti i dati rimanenti nel buffer di file da scrivere nel file temporaneo.|
|[CAtlTemporaryFile::GetPosition](#getposition)|Chiamare questo metodo per ottenere la posizione corrente del puntatore di file.|
|[CAtlTemporaryFile::GetSize](#getsize)|Chiamare questo metodo per ottenere la dimensione in byte del file temporaneo.|
|[CAtlTemporaryFile::HandsOff](#handsoff)|Chiamare questo metodo per annullare l'associazione di file dal `CAtlTemporaryFile` oggetto.|
|[CAtlTemporaryFile::HandsOn](#handson)|Chiamare questo metodo per aprire un file temporaneo esistente e posizionare il puntatore alla fine del file.|
|[CAtlTemporaryFile::LockRange](#lockrange)|Chiamare questo metodo per bloccare un'area nel file per impedire l'accesso di altri processi.|
|[CAtlTemporaryFile::Read](#read)|Chiamare questo metodo per leggere i dati dal file temporaneo iniziando in corrispondenza della posizione indicata dal puntatore di file.|
|[CAtlTemporaryFile::Seek](#seek)|Chiamare questo metodo per spostare il puntatore del file del file temporaneo.|
|[CAtlTemporaryFile::SetSize](#setsize)|Chiamare questo metodo per impostare le dimensioni del file temporaneo.|
|[CAtlTemporaryFile::TempFileName](#tempfilename)|Chiamare questo metodo per restituire il nome del file temporaneo.|
|[CAtlTemporaryFile::UnlockRange](#unlockrange)|Chiamare questo metodo per sbloccare un'area del file temporaneo.|
|[CAtlTemporaryFile::Write](#write)|Chiamare questo metodo per scrivere i dati per il file temporaneo, iniziando in corrispondenza della posizione indicata dal puntatore di file.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlTemporaryFile::operator HANDLE](#operator_handle)|Restituisce un handle per il file temporaneo.|

## <a name="remarks"></a>Note

`CAtlTemporaryFile` Consente di creare e usare un file temporaneo. Il file viene automaticamente denominato aperto, chiuso ed eliminato. Se il contenuto del file è necessario dopo la chiusura del file, possono essere salvati in un nuovo file con il nome specificato.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlfile.h

## <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).

##  <a name="catltemporaryfile"></a>  CAtlTemporaryFile:: CAtlTemporaryFile

Costruttore.

```
CAtlTemporaryFile() throw();
```

### <a name="remarks"></a>Note

Un file non venga effettivamente aperto fino a quando non viene effettuata una chiamata a [CAtlTemporaryFile::Create](#create).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#73](../../atl/codesnippet/cpp/catltemporaryfile-class_1.cpp)]

##  <a name="dtor"></a>  CAtlTemporaryFile:: ~ CAtlTemporaryFile

Distruttore.

```
~CAtlTemporaryFile() throw();
```

### <a name="remarks"></a>Note

Le chiamate del distruttore [CAtlTemporaryFile::Close](#close).

##  <a name="close"></a>  CAtlTemporaryFile::Close

Chiamare questo metodo per chiudere un file temporaneo e uno eliminarne il contenuto o di memorizzarli sotto il nome del file specificato.

```
HRESULT Close(LPCTSTR szNewName = NULL) throw();
```

### <a name="parameters"></a>Parametri

*szNewName*<br/>
Il nome del nuovo file archiviare il contenuto del file temporaneo in. Se questo argomento è NULL, il contenuto del file temporaneo viene eliminato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).

##  <a name="create"></a>  CAtlTemporaryFile::Create

Chiamare questo metodo per creare un file temporaneo.

```
HRESULT Create(LPCTSTR pszDir = NULL, DWORD dwDesiredAccess = GENERIC_WRITE) throw();
```

### <a name="parameters"></a>Parametri

*pszDir*<br/>
Il percorso per il file temporaneo. Se NULL, si tratta [GetTempPath](/windows/desktop/api/fileapi/nf-fileapi-gettemppatha) verrà chiamato per assegnare un percorso.

*dwDesiredAccess*<br/>
L'accesso desiderato. Visualizzare *dwDesiredAccess* nelle [CreateFile](/windows/desktop/api/fileapi/nf-fileapi-createfilea) nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).

##  <a name="flush"></a>  CAtlTemporaryFile::Flush

Chiamare questo metodo per forzare tutti i dati rimanenti nel buffer di file da scrivere nel file temporaneo.

```
HRESULT Flush() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Simile a [CAtlTemporaryFile::HandsOff](#handsoff), ad eccezione del fatto che il file non viene chiuso.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).

##  <a name="getposition"></a>  CAtlTemporaryFile::GetPosition

Chiamare questo metodo per ottenere la posizione corrente del puntatore di file.

```
HRESULT GetPosition(ULONGLONG& nPos) const throw();
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
La posizione in byte.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Per modificare la posizione del puntatore di file, usare [CAtlTemporaryFile::Seek](#seek).

##  <a name="getsize"></a>  CAtlTemporaryFile::GetSize

Chiamare questo metodo per ottenere la dimensione in byte del file temporaneo.

```
HRESULT GetSize(ULONGLONG& nLen) const throw();
```

### <a name="parameters"></a>Parametri

*nLen*<br/>
Il numero di byte nel file.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

##  <a name="handsoff"></a>  CAtlTemporaryFile::HandsOff

Chiamare questo metodo per annullare l'associazione di file dal `CAtlTemporaryFile` oggetto.

```
HRESULT HandsOff() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

`HandsOff` e [CAtlTemporaryFile::HandsOn](#handson) consentono di dissociare il file dall'oggetto e si ricollega se necessario. `HandsOff` verrà forzano i dati rimanenti nel buffer di file da scrivere nel file temporaneo e quindi chiudere il file. Se si desidera chiudere ed eliminare definitivamente il file o se si vuole chiudere e mantenere il contenuto del file con un nome specificato, usare [CAtlTemporaryFile::Close](#close).

##  <a name="handson"></a>  CAtlTemporaryFile::HandsOn

Chiamare questo metodo per aprire un file temporaneo esistente e posizionare il puntatore alla fine del file.

```
HRESULT HandsOn() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

[CAtlTemporaryFile::HandsOff](#handsoff) e `HandsOn` consentono di dissociare il file dall'oggetto e si ricollega se necessario.

##  <a name="lockrange"></a>  CAtlTemporaryFile::LockRange

Chiamare questo metodo per bloccare un'area nel file temporaneo per impedire l'accesso di altri processi.

```
HRESULT LockRange(ULONGLONG nPos, ULONGLONG nCount) throw();
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
La posizione nel file in cui deve iniziare il blocco.

*nCount*<br/>
La lunghezza dell'intervallo di byte da bloccare.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Il blocco di byte in un file impedisce l'accesso a tali byte da altri processi. È possibile bloccare più di un'area di un file, ma non le aree di sovrapposizione sono consentite. Per sbloccare correttamente un'area, usare [CAtlTemporaryFile::UnlockRange](#unlockrange), assicurando l'intervallo di byte corrisponde esattamente all'area di bloccato in precedenza. `LockRange` non unisce aree adiacenti; Se due aree bloccate sono adiacenti, è necessario sbloccare ognuno separatamente.

##  <a name="operator_handle"></a>  CAtlTemporaryFile::operator HANDLE

Restituisce un handle per il file temporaneo.

```
operator HANDLE() throw();
```

##  <a name="read"></a>  CAtlTemporaryFile::Read

Chiamare questo metodo per leggere i dati dal file temporaneo iniziando in corrispondenza della posizione indicata dal puntatore di file.

```
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

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Le chiamate [CAtlFile::Read](../../atl/reference/catlfile-class.md#read). Per modificare la posizione del puntatore del file, chiamare [CAtlTemporaryFile::Seek](#seek).

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).

##  <a name="seek"></a>  CAtlTemporaryFile::Seek

Chiamare questo metodo per spostare il puntatore del file del file temporaneo.

```
HRESULT Seek(LONGLONG nOffset, DWORD dwFrom = FILE_CURRENT) throw();
```

### <a name="parameters"></a>Parametri

*nOffset*<br/>
Offset, in byte, dal punto di partenza specificato da *dwFrom.*

*dwFrom*<br/>
Il punto di partenza (FILE_BEGIN, FILE_CURRENT o FILE_END).

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Le chiamate [CAtlFile::Seek](../../atl/reference/catlfile-class.md#seek). Per ottenere la posizione corrente del puntatore di file, chiamare [CAtlTemporaryFile::GetPosition](#getposition).

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).

##  <a name="setsize"></a>  CAtlTemporaryFile::SetSize

Chiamare questo metodo per impostare le dimensioni del file temporaneo.

```
HRESULT SetSize(ULONGLONG nNewLen) throw();
```

### <a name="parameters"></a>Parametri

*nNewLen*<br/>
La nuova lunghezza del file in byte.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Le chiamate [CAtlFile::SetSize](../../atl/reference/catlfile-class.md#setsize). In fase di restituzione, il puntatore del file è posizionato alla fine del file.

##  <a name="tempfilename"></a>  CAtlTemporaryFile::TempFileName

Chiamare questo metodo per restituire il nome del file temporaneo.

```
LPCTSTR TempFileName() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il LPCTSTR che punta al nome del file.

### <a name="remarks"></a>Note

Il nome del file viene generato in [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile) con una chiamata ai [GetTempFile](/windows/desktop/api/fileapi/nf-fileapi-gettempfilenamea)funzione Windows SDK. L'estensione del file sarà sempre "TFR" per il file temporaneo.

##  <a name="unlockrange"></a>  CAtlTemporaryFile::UnlockRange

Chiamare questo metodo per sbloccare un'area del file temporaneo.

```
HRESULT UnlockRange(ULONGLONG nPos, ULONGLONG nCount) throw();
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
La posizione nel file in cui deve iniziare lo sblocco.

*nCount*<br/>
La lunghezza dell'intervallo di byte da sbloccare.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Le chiamate [CAtlFile::UnlockRange](../../atl/reference/catlfile-class.md#unlockrange).

##  <a name="write"></a>  CAtlTemporaryFile::Write

Chiamare questo metodo per scrivere i dati per il file temporaneo, iniziando in corrispondenza della posizione indicata dal puntatore di file.

```
HRESULT Write(
    LPCVOID pBuffer,
    DWORD nBufSize,
    DWORD* pnBytesWritten = NULL) throw();
```

### <a name="parameters"></a>Parametri

*pBuffer*<br/>
Buffer contenente i dati da scrivere nel file.

*nBufSize*<br/>
Il numero di byte da trasferire dal buffer.

*pnBytesWritten*<br/>
Numero di byte scritti.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Le chiamate [CAtlFile::Write](../../atl/reference/catlfile-class.md#write).

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classe CAtlFile](../../atl/reference/catlfile-class.md)

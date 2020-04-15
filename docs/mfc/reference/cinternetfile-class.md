---
title: Classe CInternetFile
ms.date: 11/04/2016
f1_keywords:
- CInternetFile
- AFXINET/CInternetFile
- AFXINET/CInternetFile::CInternetFile
- AFXINET/CInternetFile::Abort
- AFXINET/CInternetFile::Close
- AFXINET/CInternetFile::Flush
- AFXINET/CInternetFile::GetLength
- AFXINET/CInternetFile::Read
- AFXINET/CInternetFile::ReadString
- AFXINET/CInternetFile::Seek
- AFXINET/CInternetFile::SetReadBufferSize
- AFXINET/CInternetFile::SetWriteBufferSize
- AFXINET/CInternetFile::Write
- AFXINET/CInternetFile::WriteString
- AFXINET/CInternetFile::m_hFile
helpviewer_keywords:
- CInternetFile [MFC], CInternetFile
- CInternetFile [MFC], Abort
- CInternetFile [MFC], Close
- CInternetFile [MFC], Flush
- CInternetFile [MFC], GetLength
- CInternetFile [MFC], Read
- CInternetFile [MFC], ReadString
- CInternetFile [MFC], Seek
- CInternetFile [MFC], SetReadBufferSize
- CInternetFile [MFC], SetWriteBufferSize
- CInternetFile [MFC], Write
- CInternetFile [MFC], WriteString
- CInternetFile [MFC], m_hFile
ms.assetid: 96935681-ee71-4a8d-9783-5abc7b3e6f10
ms.openlocfilehash: e3f1a7167f5464423754951764c4441513197841
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372393"
---
# <a name="cinternetfile-class"></a>Classe CInternetFile

Consente l'accesso ai file su sistemi remoti che utilizzano protocolli Internet.

## <a name="syntax"></a>Sintassi

```
class CInternetFile : public CStdioFile
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[FileCInternet::CInternetFile](#cinternetfile)|Costruisce un oggetto `CInternetFile`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInternetFile::Abort](#abort)|Chiude il file ignorando tutti gli avvisi e gli errori.|
|[FileCInternet::Chiudi](#close)|Chiude un `CInternetFile` e libera le sue risorse.|
|[CInternetFile::Flush](#flush)|Scarica il contenuto del buffer di scrittura e verifica che i dati in memoria vengano scritti nel computer di destinazione.|
|[CInternetFile::GetLength](#getlength)|Restituisce la dimensione del file.|
|[CInternetFile::Lettura](#read)|Legge il numero di byte specificati.|
|[CInternetFile::ReadString](#readstring)|Legge un flusso di caratteri.|
|[CInternetFile::Seek](#seek)|Riposiziona il puntatore in un file aperto.|
|[FileCInternet::SetReadBufferSize](#setreadbuffersize)|Imposta la dimensione del buffer in cui verranno letti i dati.|
|[FileCInternet::SetWriteBufferSize](#setwritebuffersize)|Imposta la dimensione del buffer in cui verranno scritti i dati.|
|[CInternetFile::Scrittura](#write)|Scrive il numero di byte specificati.|
|[CInternetFile::WriteString](#writestring)|Scrive una stringa con terminazione null in un file.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInternetFile::operatore HINTERNET](#operator_hinternet)|Un operatore di cast per un handle Internet.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CInternetFile::m_hFile](#m_hfile)|Un handle per un file.|

## <a name="remarks"></a>Osservazioni

Fornisce una classe base per le classi di file [CHttpFile](../../mfc/reference/chttpfile-class.md) e [CGopherFile.](../../mfc/reference/cgopherfile-class.md) Non si `CInternetFile` crea mai direttamente un oggetto. Creare invece un oggetto di una delle relative classi derivate chiamando [CGopherConnection::OpenFile](../../mfc/reference/cgopherconnection-class.md#openfile) o [CHttpConnection::OpenRequest](../../mfc/reference/chttpconnection-class.md#openrequest). È inoltre possibile `CInternetFile` creare un oggetto chiamando [CFtpConnection::OpenFile](../../mfc/reference/cftpconnection-class.md#openfile).

Le `CInternetFile` funzioni `Open` `LockRange`membro `UnlockRange`, `Duplicate` , e `CInternetFile`non vengono implementate per . Se si chiamano queste `CInternetFile` funzioni su un oggetto, si otterrà un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

Per ulteriori informazioni `CInternetFile` sul funzionamento con le altre classi Internet MFC, vedere l'articolo [Programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[CStdioFile](../../mfc/reference/cstdiofile-class.md)

`CInternetFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet.h

## <a name="cinternetfileabort"></a><a name="abort"></a>CInternetFile::Abort

Chiude il file associato a questo oggetto e rende il file non disponibile per la lettura o la scrittura.

```
virtual void Abort();
```

### <a name="remarks"></a>Osservazioni

Se il file non è stato chiuso prima di distruggere l'oggetto, il distruttore lo chiude per te.

Quando si gestiscono `Abort` le eccezioni, differisce da [Close](#close) in due modi importanti. In primo `Abort` luogo, la funzione non genera un'eccezione in caso di errori perché ignora gli errori. In `Abort` secondo luogo, non **ASSERT** se il file non è stato aperto o è stato chiuso in precedenza.

## <a name="cinternetfilecinternetfile"></a><a name="cinternetfile"></a>FileCInternet::CInternetFile

Questa funzione membro viene `CInternetFile` chiamata quando viene creato un oggetto.

```
CInternetFile(
    HINTERNET hFile,
    LPCTSTR pstrFileName,
    CInternetConnection* pConnection,
    BOOL bReadMode);

CInternetFile(
    HINTERNET hFile,
    HINTERNET hSession,
    LPCTSTR pstrFileName,
    LPCTSTR pstrServer,
    DWORD_PTR dwContext,
    BOOL bReadMode);
```

### <a name="parameters"></a>Parametri

*hFile (File)*<br/>
Handle per un file Internet.

*pstrNomeFile*<br/>
Puntatore a una stringa contenente il nome del file.

*pConnection*<br/>
Puntatore a un oggetto [CInternetConnection.](../../mfc/reference/cinternetconnection-class.md)

*bModalitàLettura*<br/>
Indica se il file è di sola lettura.

*hSessione*<br/>
Handle per una sessione Internet.

*pstrServer (informazioni in base al server utente)*<br/>
Puntatore a una stringa contenente il nome del server.

*dwContext*<br/>
Identificatore di `CInternetFile` contesto per l'oggetto. Per altre informazioni sull'identificatore di contesto, vedere Nozioni di base su [WinInet.See WinInet Basics](../../mfc/wininet-basics.md) for more information about the context identifier.

### <a name="remarks"></a>Osservazioni

Non si `CInternetFile` crea mai direttamente un oggetto. Creare invece un oggetto di una delle relative classi derivate chiamando [CGopherConnection::OpenFile](../../mfc/reference/cgopherconnection-class.md#openfile) o [CHttpConnection::OpenRequest](../../mfc/reference/chttpconnection-class.md#openrequest). È inoltre possibile `CInternetFile` creare un oggetto chiamando [CFtpConnection::OpenFile](../../mfc/reference/cftpconnection-class.md#openfile).

## <a name="cinternetfileclose"></a><a name="close"></a>FileCInternet::Chiudi

Chiude un `CInternetFile` e libera una qualsiasi delle sue risorse.

```
virtual void Close();
```

### <a name="remarks"></a>Osservazioni

Se il file è stato aperto per la scrittura, è presente una chiamata implicita a [Flush](#flush) per garantire che tutti i dati memorizzati nel buffer vengano scritti nell'host. È necessario `Close` chiamare quando si è finito di utilizzare un file.

## <a name="cinternetfileflush"></a><a name="flush"></a>CInternetFile::Flush

Chiamare questa funzione membro per scaricare il contenuto del buffer di scrittura.

```
virtual void Flush();
```

### <a name="remarks"></a>Osservazioni

Utilizzare `Flush` per garantire che tutti i dati in memoria siano stati effettivamente scritti nel computer di destinazione e per assicurare che la transazione con la macchina host sia stata completata. `Flush`è efficace `CInternetFile` solo su oggetti aperti per la scrittura.

## <a name="cinternetfilegetlength"></a><a name="getlength"></a>CInternetFile::GetLength

Restituisce la dimensione del file.

```
virtual ULONGLONG GetLength() const;
```

## <a name="cinternetfilem_hfile"></a><a name="m_hfile"></a>CInternetFile::m_hFile

Handle per il file associato a questo oggetto.

```
HINTERNET m_hFile;
```

## <a name="cinternetfileoperator-hinternet"></a><a name="operator_hinternet"></a>CInternetFile::operatore HINTERNET

Utilizzare questo operatore per ottenere l'handle di Windows per la sessione Internet corrente.

```
operator HINTERNET() const;
```

## <a name="cinternetfileread"></a><a name="read"></a>CInternetFile::Lettura

Chiamare questa funzione membro per leggere nella memoria specificata, a partire da *lpvBuf*, il numero di byte specificato, *nCount*.

```
virtual UINT Read(
    void* lpBuf,
    UINT nCount);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Puntatore a un indirizzo di memoria in cui vengono letti i dati del file.

*nConteggio*<br/>
Numero di byte da scrivere.

### <a name="return-value"></a>Valore restituito

Numero di byte trasferiti nel buffer. Il valore restituito può essere minore di *nCount* se è stata raggiunta la fine del file.

### <a name="remarks"></a>Osservazioni

La funzione restituisce il numero di byte effettivamente letti, ovvero un numero che può essere minore di *nCount* se il file termina. Se si verifica un errore durante la lettura del file, la funzione genera un [CInternetException](../../mfc/reference/cinternetexception-class.md) oggetto che descrive l'errore. Si noti che la lettura oltre la fine del file non viene considerata un errore e pertanto non verrà generata alcuna eccezione.

Per garantire che tutti i dati vengano `CInternetFile::Read` recuperati, un'applicazione deve continuare a chiamare il metodo fino a quando il metodo restituisce zero.

## <a name="cinternetfilereadstring"></a><a name="readstring"></a>CInternetFile::ReadString

Chiamare questa funzione membro per leggere un flusso di caratteri fino a trovare un carattere di nuova riga.

```
virtual BOOL ReadString(CString& rString);

virtual LPTSTR ReadString(
    LPTSTR pstr,
    UINT nMax);
```

### <a name="parameters"></a>Parametri

*pstr*<br/>
Puntatore a una stringa che riceverà la riga in fase di lettura.

*Nmax*<br/>
Numero massimo di caratteri da leggere.

*rStringa*<br/>
Un riferimento all'oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che riceve la riga di lettura.

### <a name="return-value"></a>Valore restituito

Puntatore al buffer contenente i dati semplici recuperati dall'oggetto [CInternetFile.](../../mfc/reference/cinternetfile-class.md) Indipendentemente dal tipo di dati del buffer passato a questo metodo, non esegue alcuna modifica sui dati (ad esempio, la conversione in Unicode), pertanto è necessario eseguire il mapping dei dati restituiti alla struttura prevista, come se venisse restituito il tipo **void.** <strong>\*</strong>

NULL se è stata raggiunta la fine del file senza leggere alcun dato; o, se booleano, FALSE se è stata raggiunta la fine del file senza leggere alcun dato.

### <a name="remarks"></a>Osservazioni

La funzione inserisce la riga risultante nella memoria a cui fa riferimento il parametro *pstr.* Interrompe la lettura dei caratteri quando raggiunge il numero massimo di caratteri, specificato da *nMax*. Il buffer riceve sempre un carattere di terminazione null.

Se si `ReadString` chiama senza prima chiamare [SetReadBufferSize](#setreadbuffersize), si otterrà un buffer di 4096 byte.

## <a name="cinternetfileseek"></a><a name="seek"></a>CInternetFile::Seek

Chiamare questa funzione membro per riposizionare il puntatore in un file aperto in precedenza.

```
virtual ULONGLONG Seek(
    LONGLONG lOffset,
    UINT nFrom);
```

### <a name="parameters"></a>Parametri

*lOffset*<br/>
Offset in byte per spostare il puntatore di lettura/scrittura nel file.

*nDa*<br/>
Riferimento relativo per l'offset. Deve essere uno dei valori seguenti: 

- `CFile::begin`Spostare il puntatore del file *lOff* byte avanti dall'inizio del file.

- `CFile::current`Spostare il puntatore del file *lOff* byte dalla posizione corrente nel file.

- `CFile::end`Spostare il puntatore del file *lOff* byte dalla fine del file. *lOff* deve essere negativo per cercare nel file esistente; valori positivi cercheranno oltre la fine del file.

### <a name="return-value"></a>Valore restituito

Il nuovo offset di byte dall'inizio del file se la posizione richiesta è valida; in caso contrario, il valore non è definito e viene generata un [CInternetException](../../mfc/reference/cinternetexception-class.md) oggetto.

### <a name="remarks"></a>Osservazioni

La `Seek` funzione consente l'accesso casuale al contenuto di un file spostando il puntatore una quantità specificata, assolutamente o relativamente. Nessun dato viene effettivamente letto durante la ricerca.

In questo momento, una chiamata a questa funzione `CHttpFile` membro è supportata solo per i dati associati a oggetti. Non è supportato per le richieste FTP o gopher. Se si `Seek` chiama uno di questi servizi non supportati, passerà nuovamente al codice di errore Win32 ERROR_INTERNET_INVALID_OPERATION.

Quando un file viene aperto, il puntatore del file si trova all'offset 0, all'inizio del file.

> [!NOTE]
> L'utilizzo `Seek` può causare una chiamata implicita a [Flush](#flush).

### <a name="example"></a>Esempio

  Vedere l'esempio per l'implementazione della classe base ( [CFile::Seek](../../mfc/reference/cfile-class.md#seek)).

## <a name="cinternetfilesetreadbuffersize"></a><a name="setreadbuffersize"></a>FileCInternet::SetReadBufferSize

Chiamare questa funzione membro per impostare la dimensione `CInternetFile`del buffer di lettura temporaneo utilizzato da un -oggetto derivato.

```
BOOL SetReadBufferSize(UINT nReadSize);
```

### <a name="parameters"></a>Parametri

*nReadSize (Dimensioni in stato di lettura)*<br/>
Dimensione desiderata del buffer in byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) può essere chiamata per determinare la causa dell'errore.

### <a name="remarks"></a>Osservazioni

Le API WinInet sottostanti non eseguono il buffering, pertanto scegliere una dimensione del buffer che consenta all'applicazione di leggere i dati in modo efficiente, indipendentemente dalla quantità di dati da leggere. Se ogni chiamata a [Read](#read) normalmente coinvolge un oggetto di dati di grandi dimensioni (ad esempio, quattro o più kilobyte), non è necessario un buffer. Tuttavia, se `Read` si chiama per ottenere piccoli blocchi di dati o se si utilizza [ReadString](#readstring) per leggere singole righe alla volta, un buffer di lettura migliora le prestazioni dell'applicazione.

Per impostazione `CInternetFile` predefinita, un oggetto non fornisce alcun buffer per la lettura. Se si chiama questa funzione membro, è necessario assicurarsi che il file è stato aperto per l'accesso in lettura.

È possibile aumentare la dimensione del buffer in qualsiasi momento, ma la riduzione del buffer non avrà alcun effetto. Se si chiama [ReadString](#readstring) senza prima chiamare `SetReadBufferSize`, si otterrà un buffer di 4096 byte.

## <a name="cinternetfilesetwritebuffersize"></a><a name="setwritebuffersize"></a>FileCInternet::SetWriteBufferSize

Chiamare questa funzione membro per impostare la dimensione `CInternetFile`del buffer di scrittura temporaneo utilizzato da un oggetto derivato.

```
BOOL SetWriteBufferSize(UINT nWriteSize);
```

### <a name="parameters"></a>Parametri

*nWriteSize (Dimensioni)Scrittura (Informazioni in stato*<br/>
Dimensioni del buffer in byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) può essere chiamata per determinare la causa dell'errore.

### <a name="remarks"></a>Osservazioni

Le API WinInet sottostanti non eseguono il buffering, pertanto scegli una dimensione del buffer che consenta all'applicazione di scrivere i dati in modo efficiente indipendentemente dalla quantità di dati da scrivere. Se ogni chiamata a [Write](#write) normalmente coinvolge una grande quantità di dati (ad esempio, quattro o più kilobyte alla volta), non è necessario un buffer. Tuttavia, se si chiama [Write](#write) per scrivere piccoli blocchi di dati, un buffer di scrittura migliora le prestazioni dell'applicazione.

Per impostazione `CInternetFile` predefinita, un oggetto non fornisce alcun buffer per la scrittura. Se si chiama questa funzione membro, è necessario assicurarsi che il file è stato aperto per l'accesso in scrittura. È possibile modificare la dimensione del buffer di scrittura in qualsiasi momento, ma in questo modo viene eseguito una chiamata implicita a [Flush](#flush).

## <a name="cinternetfilewrite"></a><a name="write"></a>CInternetFile::Scrittura

Chiamare questa funzione membro per scrivere nella memoria specificata, *lpvBuf*, il numero di byte specificato, *nCount*.

```
virtual void Write(
    const void* lpBuf,
    UINT nCount);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Puntatore al primo byte da scrivere.

*nConteggio*<br/>
Specifica il numero di byte da scrivere.

### <a name="remarks"></a>Osservazioni

Se si verifica un errore durante la scrittura dei dati, la funzione genera un [CInternetException](../../mfc/reference/cinternetexception-class.md) oggetto che descrive l'errore.

## <a name="cinternetfilewritestring"></a><a name="writestring"></a>CInternetFile::WriteString

Questa funzione scrive una stringa con terminazione null nel file associato.

```
virtual void WriteString(LPCTSTR pstr);
```

### <a name="parameters"></a>Parametri

*pstr*<br/>
Puntatore a una stringa contenente il contenuto da scrivere.

### <a name="remarks"></a>Osservazioni

Se si verifica un errore durante la scrittura dei dati, la funzione genera un [CInternetException](../../mfc/reference/cinternetexception-class.md) oggetto che descrive l'errore.

## <a name="see-also"></a>Vedere anche

[Classe CStdioFile](../../mfc/reference/cstdiofile-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)

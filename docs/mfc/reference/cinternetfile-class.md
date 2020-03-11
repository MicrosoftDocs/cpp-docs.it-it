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
ms.openlocfilehash: 68a0a0f35d1a1f4519401080f9f207bf76c87079
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78890785"
---
# <a name="cinternetfile-class"></a>Classe CInternetFile

Consente l'accesso a file in sistemi remoti che utilizzano protocolli Internet.

## <a name="syntax"></a>Sintassi

```
class CInternetFile : public CStdioFile
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CInternetFile:: CInternetFile](#cinternetfile)|Costruisce un oggetto `CInternetFile`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInternetFile:: Abort](#abort)|Chiude il file ignorando tutti gli avvisi e gli errori.|
|[CInternetFile:: Close](#close)|Chiude un `CInternetFile` e ne libera le risorse.|
|[CInternetFile:: Flush](#flush)|Scarica il contenuto del buffer di scrittura e verifica che i dati in memoria vengano scritti nel computer di destinazione.|
|[CInternetFile:: GetLength](#getlength)|Restituisce la dimensione del file.|
|[CInternetFile:: Read](#read)|Legge il numero di byte specificati.|
|[CInternetFile:: ReadString](#readstring)|Legge un flusso di caratteri.|
|[CInternetFile:: Seek](#seek)|Riposiziona il puntatore in un file aperto.|
|[CInternetFile:: SetReadBufferSize](#setreadbuffersize)|Imposta la dimensione del buffer in cui verranno letti i dati.|
|[CInternetFile:: SetWriteBufferSize](#setwritebuffersize)|Imposta la dimensione del buffer in cui verranno scritti i dati.|
|[CInternetFile:: Write](#write)|Scrive il numero di byte specificati.|
|[CInternetFile:: WriteString](#writestring)|Scrive una stringa con terminazione null in un file.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInternetFile:: operator HINTERNET](#operator_hinternet)|Operatore di cast per un handle Internet.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CInternetFile:: m_hFile](#m_hfile)|Handle per un file.|

## <a name="remarks"></a>Osservazioni

Fornisce una classe base per le classi di file [CHttpFile](../../mfc/reference/chttpfile-class.md) e [CGopherFile](../../mfc/reference/cgopherfile-class.md) . Non è mai possibile creare direttamente un oggetto `CInternetFile`. In alternativa, creare un oggetto di una delle relative classi derivate chiamando [CGopherConnection:: OpenFile](../../mfc/reference/cgopherconnection-class.md#openfile) o [CHttpConnection:: OpenRequest](../../mfc/reference/chttpconnection-class.md#openrequest). È anche possibile creare un oggetto `CInternetFile` chiamando [CFtpConnection:: OpenFile](../../mfc/reference/cftpconnection-class.md#openfile).

Le funzioni membro `CInternetFile` `Open`, `LockRange`, `UnlockRange`e `Duplicate` non sono implementate per `CInternetFile`. Se si chiamano queste funzioni su un oggetto `CInternetFile`, si otterrà un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

Per ulteriori informazioni sul funzionamento di `CInternetFile` con le altre classi Internet MFC, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[CStdioFile](../../mfc/reference/cstdiofile-class.md)

`CInternetFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXINET. h

##  <a name="abort"></a>CInternetFile:: Abort

Chiude il file associato a questo oggetto e rende non disponibile il file per la lettura o la scrittura.

```
virtual void Abort();
```

### <a name="remarks"></a>Osservazioni

Se il file non è stato chiuso prima dell'eliminazione dell'oggetto, il distruttore lo chiuderà.

Quando si gestiscono le eccezioni, `Abort` differisce da [Close](#close) in due modi importanti. In primo luogo, la funzione `Abort` non genera un'eccezione per gli errori perché ignora gli errori. In secondo luogo, `Abort` non **dichiara** se il file non è stato aperto o è stato chiuso in precedenza.

##  <a name="cinternetfile"></a>CInternetFile:: CInternetFile

Questa funzione membro viene chiamata quando viene creato un oggetto `CInternetFile`.

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

*hFile*<br/>
Handle per un file Internet.

*pstrFileName*<br/>
Puntatore a una stringa che contiene il nome file.

*pConnection*<br/>
Puntatore a un oggetto [CInternetConnection](../../mfc/reference/cinternetconnection-class.md) .

*bReadMode*<br/>
Indica se il file è di sola lettura.

*hSession*<br/>
Handle per una sessione Internet.

*pstrServer*<br/>
Puntatore a una stringa che contiene il nome del server.

*dwContext*<br/>
Identificatore di contesto per l'oggetto `CInternetFile`. Per ulteriori informazioni sull'identificatore di contesto, vedere le [nozioni di base di WinInet](../../mfc/wininet-basics.md) .

### <a name="remarks"></a>Osservazioni

Non è mai possibile creare direttamente un oggetto `CInternetFile`. In alternativa, creare un oggetto di una delle relative classi derivate chiamando [CGopherConnection:: OpenFile](../../mfc/reference/cgopherconnection-class.md#openfile) o [CHttpConnection:: OpenRequest](../../mfc/reference/chttpconnection-class.md#openrequest). È anche possibile creare un oggetto `CInternetFile` chiamando [CFtpConnection:: OpenFile](../../mfc/reference/cftpconnection-class.md#openfile).

##  <a name="close"></a>CInternetFile:: Close

Chiude un `CInternetFile` e libera le relative risorse.

```
virtual void Close();
```

### <a name="remarks"></a>Osservazioni

Se il file è stato aperto per la scrittura, esiste una chiamata implicita a [Flush](#flush) per garantire che tutti i dati memorizzati nel buffer vengano scritti nell'host. Al termine dell'utilizzo di un file, è necessario chiamare `Close`.

##  <a name="flush"></a>CInternetFile:: Flush

Chiamare questa funzione membro per scaricare il contenuto del buffer di scrittura.

```
virtual void Flush();
```

### <a name="remarks"></a>Osservazioni

Usare `Flush` per assicurarsi che tutti i dati in memoria siano stati effettivamente scritti nel computer di destinazione e per garantire che la transazione con il computer host sia stata completata. `Flush` è efficace solo per `CInternetFile` oggetti aperti per la scrittura.

##  <a name="getlength"></a>CInternetFile:: GetLength

Restituisce la dimensione del file.

```
virtual ULONGLONG GetLength() const;
```

##  <a name="m_hfile"></a>CInternetFile:: m_hFile

Handle per il file associato all'oggetto.

```
HINTERNET m_hFile;
```

##  <a name="operator_hinternet"></a>CInternetFile:: operator HINTERNET

Utilizzare questo operatore per ottenere l'handle di Windows per la sessione Internet corrente.

```
operator HINTERNET() const;
```

##  <a name="read"></a>CInternetFile:: Read

Chiamare questa funzione membro per leggere nella memoria specificata, a partire da *lpvBuf*, il numero di byte specificato, *nCount*.

```
virtual UINT Read(
    void* lpBuf,
    UINT nCount);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Puntatore a un indirizzo di memoria in cui vengono letti i dati del file.

*nCount*<br/>
Numero di byte da scrivere.

### <a name="return-value"></a>Valore restituito

Numero di byte trasferiti nel buffer. Il valore restituito può essere minore di *nCount* se è stata raggiunta la fine del file.

### <a name="remarks"></a>Osservazioni

La funzione restituisce il numero di byte effettivamente letti, ovvero un numero che può essere minore di *nCount* se il file termina. Se si verifica un errore durante la lettura del file, la funzione genera un oggetto [CInternetException](../../mfc/reference/cinternetexception-class.md) che descrive l'errore. Si noti che la lettura oltre la fine del file non viene considerata un errore e pertanto non verrà generata alcuna eccezione.

Per assicurarsi che tutti i dati vengano recuperati, un'applicazione deve continuare a chiamare il metodo `CInternetFile::Read` finché il metodo non restituisce zero.

##  <a name="readstring"></a>CInternetFile:: ReadString

Chiamare questa funzione membro per leggere un flusso di caratteri finché non viene trovato un carattere di nuova riga.

```
virtual BOOL ReadString(CString& rString);

virtual LPTSTR ReadString(
    LPTSTR pstr,
    UINT nMax);
```

### <a name="parameters"></a>Parametri

*PSTR*<br/>
Puntatore a una stringa che riceverà la riga da leggere.

*nMax*<br/>
Numero massimo di caratteri da leggere.

*rString*<br/>
Riferimento all'oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che riceve la riga di lettura.

### <a name="return-value"></a>Valore restituito

Puntatore al buffer che contiene i dati semplici recuperati dall'oggetto [CInternetFile](../../mfc/reference/cinternetfile-class.md) . Indipendentemente dal tipo di dati del buffer passato a questo metodo, non esegue alcuna manipolazione sui dati (ad esempio, la conversione in Unicode), pertanto è necessario eseguire il mapping dei dati restituiti alla struttura prevista, come se venisse restituito il tipo **void** <strong>\*</strong> .

NULL se è stata raggiunta la fine del file senza leggere alcun dato; o, se booleano, FALSE se è stata raggiunta la fine del file senza leggere i dati.

### <a name="remarks"></a>Osservazioni

La funzione posiziona la riga risultante nella memoria a cui fa riferimento il parametro *pstr* . Interrompe la lettura dei caratteri quando raggiunge il numero massimo di caratteri, specificato da *nmax*. Il buffer riceve sempre un carattere di terminazione null.

Se si chiama `ReadString` senza prima chiamare [SetReadBufferSize](#setreadbuffersize), si otterrà un buffer di 4096 byte.

##  <a name="seek"></a>CInternetFile:: Seek

Chiamare questa funzione membro per riposizionare il puntatore in un file aperto in precedenza.

```
virtual ULONGLONG Seek(
    LONGLONG lOffset,
    UINT nFrom);
```

### <a name="parameters"></a>Parametri

*lOffset*<br/>
Offset in byte per spostare il puntatore di lettura/scrittura nel file.

*NDA*<br/>
Riferimento relativo per l'offset. Deve essere uno dei valori seguenti:

- `CFile::begin` spostare i byte del puntatore del file *Loff* in avanti dall'inizio del file.

- `CFile::current` spostare il puntatore del file *Loff* i byte dalla posizione corrente nel file.

- `CFile::end` spostare i byte del puntatore del file *Loff* alla fine del file. *Loff* deve essere negativo per cercare nel file esistente. i valori positivi cercheranno oltre la fine del file.

### <a name="return-value"></a>Valore restituito

Nuovo offset di byte dall'inizio del file se la posizione richiesta è valida. in caso contrario, il valore non è definito e viene generato un oggetto [CInternetException](../../mfc/reference/cinternetexception-class.md) .

### <a name="remarks"></a>Osservazioni

La funzione `Seek` consente l'accesso casuale al contenuto di un file spostando il puntatore a un importo specificato, in modo assoluto o relativo. Nessun dato è effettivamente letto durante la ricerca.

A questo punto, una chiamata a questa funzione membro è supportata solo per i dati associati a oggetti `CHttpFile`. Non è supportata per le richieste FTP o gopher. Se si chiama `Seek` per uno di questi servizi non supportati, viene restituito il codice di errore Win32 ERROR_INTERNET_INVALID_OPERATION.

Quando un file viene aperto, il puntatore del file si trova in corrispondenza dell'offset 0, ovvero l'inizio del file.

> [!NOTE]
>  L'uso di `Seek` può causare la [cancellazione](#flush)di una chiamata implicita.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo all'implementazione della classe di base ( [CFile:: Seek](../../mfc/reference/cfile-class.md#seek)).

##  <a name="setreadbuffersize"></a>CInternetFile:: SetReadBufferSize

Chiamare questa funzione membro per impostare la dimensione del buffer di lettura temporaneo utilizzato da un oggetto derivato da `CInternetFile`.

```
BOOL SetReadBufferSize(UINT nReadSize);
```

### <a name="parameters"></a>Parametri

*nReadSize*<br/>
Dimensione desiderata del buffer in byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, è possibile chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la cause dell'errore.

### <a name="remarks"></a>Osservazioni

Le API WinInet sottostanti non eseguono il buffering, quindi scegliere una dimensione del buffer che consenta all'applicazione di leggere i dati in modo efficiente, indipendentemente dalla quantità di dati da leggere. Se ogni chiamata a [Read](#read) prevede normalmente un aount di dati di grandi dimensioni (ad esempio, quattro o più kilobyte), non dovrebbe essere necessario un buffer. Tuttavia, se si chiama `Read` per ottenere piccoli blocchi di dati o se si usa [ReadString](#readstring) per leggere singole righe alla volta, un buffer di lettura migliora le prestazioni dell'applicazione.

Per impostazione predefinita, un oggetto `CInternetFile` non fornisce alcun buffer per la lettura. Se si chiama questa funzione membro, è necessario assicurarsi che il file sia stato aperto per l'accesso in lettura.

È possibile aumentare le dimensioni del buffer in qualsiasi momento, ma la compattazione del buffer non avrà alcun effetto. Se si chiama [ReadString](#readstring) senza prima chiamare `SetReadBufferSize`, si otterrà un buffer di 4096 byte.

##  <a name="setwritebuffersize"></a>CInternetFile:: SetWriteBufferSize

Chiamare questa funzione membro per impostare la dimensione del buffer di scrittura temporaneo utilizzato da un oggetto derivato da `CInternetFile`.

```
BOOL SetWriteBufferSize(UINT nWriteSize);
```

### <a name="parameters"></a>Parametri

*nWriteSize*<br/>
Dimensioni del buffer in byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, è possibile chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la cause dell'errore.

### <a name="remarks"></a>Osservazioni

Le API WinInet sottostanti non eseguono il buffering, quindi scegliere una dimensione del buffer che consenta all'applicazione di scrivere i dati in modo efficiente indipendentemente dalla quantità di dati da scrivere. Se ogni chiamata a [Write](#write) prevede normalmente una grande quantità di dati (ad esempio, quattro o più kilobyte alla volta), non è necessario un buffer. Tuttavia, se si chiama [Write](#write) per scrivere piccoli blocchi di dati, un buffer di scrittura migliora le prestazioni dell'applicazione.

Per impostazione predefinita, un oggetto `CInternetFile` non fornisce alcun buffer per la scrittura. Se si chiama questa funzione membro, è necessario assicurarsi che il file sia stato aperto per l'accesso in scrittura. È possibile modificare la dimensione del buffer di scrittura in qualsiasi momento, ma in questo modo si crea una chiamata implicita a [Flush](#flush).

##  <a name="write"></a>CInternetFile:: Write

Chiamare questa funzione membro per scrivere nella memoria specificata, *lpvBuf*, il numero di byte specificato, *nCount*.

```
virtual void Write(
    const void* lpBuf,
    UINT nCount);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Puntatore al primo byte da scrivere.

*nCount*<br/>
Specifica il numero di byte da scrivere.

### <a name="remarks"></a>Osservazioni

Se si verifica un errore durante la scrittura dei dati, la funzione genera un oggetto [CInternetException](../../mfc/reference/cinternetexception-class.md) che descrive l'errore.

##  <a name="writestring"></a>CInternetFile:: WriteString

Questa funzione scrive una stringa con terminazione null nel file associato.

```
virtual void WriteString(LPCTSTR pstr);
```

### <a name="parameters"></a>Parametri

*PSTR*<br/>
Puntatore a una stringa che contiene il contenuto da scrivere.

### <a name="remarks"></a>Osservazioni

Se si verifica un errore durante la scrittura dei dati, la funzione genera un oggetto [CInternetException](../../mfc/reference/cinternetexception-class.md) che descrive l'errore.

## <a name="see-also"></a>Vedere anche

[Classe CStdioFile](../../mfc/reference/cstdiofile-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)

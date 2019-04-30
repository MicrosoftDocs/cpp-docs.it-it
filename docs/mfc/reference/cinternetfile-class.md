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
ms.openlocfilehash: 65bc36856e253d086cc430a600daa9255e21ea75
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62405742"
---
# <a name="cinternetfile-class"></a>Classe CInternetFile

Consente l'accesso ai file nei sistemi remoti che utilizzano protocolli Internet.

## <a name="syntax"></a>Sintassi

```
class CInternetFile : public CStdioFile
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CInternetFile::CInternetFile](#cinternetfile)|Costruisce un oggetto `CInternetFile`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInternetFile::Abort](#abort)|Chiude il file, ignorando tutti gli errori e avvisi.|
|[CInternetFile::Close](#close)|Chiude un `CInternetFile` e libera le risorse.|
|[CInternetFile::Flush](#flush)|Scarica il contenuto del buffer di scrittura e garantisce che i dati in memoria vengono scritti nel computer di destinazione.|
|[CInternetFile::GetLength](#getlength)|Restituisce le dimensioni del file.|
|[CInternetFile::Read](#read)|Legge il numero di byte specificati.|
|[CInternetFile::ReadString](#readstring)|Legge un flusso di caratteri.|
|[CInternetFile::Seek](#seek)|Riposiziona il puntatore del mouse in un file aperto.|
|[CInternetFile::SetReadBufferSize](#setreadbuffersize)|Imposta le dimensioni del buffer in cui verranno letti i dati.|
|[CInternetFile::SetWriteBufferSize](#setwritebuffersize)|Imposta le dimensioni del buffer in cui verranno scritti i dati.|
|[CInternetFile::Write](#write)|Scrive il numero di byte specificati.|
|[CInternetFile::WriteString](#writestring)|Scrive una stringa con terminazione null di un file.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInternetFile::operator HINTERNET](#operator_hinternet)|Un operatore di cast per un handle di Internet.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CInternetFile::m_hFile](#m_hfile)|Handle per un file.|

## <a name="remarks"></a>Note

Fornisce una classe base per il [CHttpFile](../../mfc/reference/chttpfile-class.md) e [CGopherFile](../../mfc/reference/cgopherfile-class.md) le classi di file. È non creare mai un `CInternetFile` direttamente l'oggetto. In alternativa, creare un oggetto di una delle relative classi derivate tramite la chiamata [CGopherConnection:: OpenFile](../../mfc/reference/cgopherconnection-class.md#openfile) oppure [CHttpConnection:: OpenRequest](../../mfc/reference/chttpconnection-class.md#openrequest). È anche possibile creare un `CInternetFile` chiamando [CFtpConnection:: OpenFile](../../mfc/reference/cftpconnection-class.md#openfile).

Il `CInternetFile` funzioni membro `Open`, `LockRange`, `UnlockRange`, e `Duplicate` non sono state implementate `CInternetFile`. Se si chiamano queste funzioni su un `CInternetFile` dell'oggetto, si otterrà un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

Per altre informazioni su come `CInternetFile` funziona con le altre classi MFC Internet, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[CStdioFile](../../mfc/reference/cstdiofile-class.md)

`CInternetFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet. h

##  <a name="abort"></a>  CInternetFile::Abort

Chiude il file associato all'oggetto e rende non disponibile per la lettura o scrittura del file.

```
virtual void Abort();
```

### <a name="remarks"></a>Note

Se il file non è stata chiusa prima di eliminarlo definitivamente l'oggetto, il distruttore viene chiusa automaticamente.

Quando la gestione delle eccezioni, `Abort` è diverso da [Chiudi](#close) due importanti differenze. Prima di tutto la `Abort` funzione non genera un'eccezione in caso di errori perché ignora gli errori. Secondo, `Abort` non esiste **ASSERT** se il file non è stato aperto o è stata chiusa in precedenza.

##  <a name="cinternetfile"></a>  CInternetFile::CInternetFile

Questa funzione membro viene chiamata quando un `CInternetFile` oggetto viene creato.

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
Handle per un file di Internet.

*pstrFileName*<br/>
Un puntatore a una stringa contenente il nome del file.

*pConnection*<br/>
Un puntatore a un [CInternetConnection](../../mfc/reference/cinternetconnection-class.md) oggetto.

*bReadMode*<br/>
Indica se il file è di sola lettura.

*hSession*<br/>
Handle a una sessione di Internet.

*pstrServer*<br/>
Un puntatore a una stringa contenente il nome del server.

*dwContext*<br/>
L'identificatore di contesto per il `CInternetFile` oggetto. Visualizzare [nozioni di base di WinInet](../../mfc/wininet-basics.md) per altre informazioni sull'identificatore di contesto.

### <a name="remarks"></a>Note

È non creare mai un `CInternetFile` direttamente l'oggetto. In alternativa, creare un oggetto di una delle relative classi derivate tramite la chiamata [CGopherConnection:: OpenFile](../../mfc/reference/cgopherconnection-class.md#openfile) oppure [CHttpConnection:: OpenRequest](../../mfc/reference/chttpconnection-class.md#openrequest). È anche possibile creare un `CInternetFile` chiamando [CFtpConnection:: OpenFile](../../mfc/reference/cftpconnection-class.md#openfile).

##  <a name="close"></a>  CInternetFile::Close

Chiude un `CInternetFile` e libera le relative risorse.

```
virtual void Close();
```

### <a name="remarks"></a>Note

Se il file è stato aperto per la scrittura, vi è una chiamata implicita a [Flush](#flush) per garantire che tutti i dati memorizzati nel buffer viene scritto nell'host. È necessario chiamare `Close` dopo averli completati usando un file.

##  <a name="flush"></a>  CInternetFile::Flush

Chiamare questa funzione membro per scaricare il contenuto del buffer di scrittura.

```
virtual void Flush();
```

### <a name="remarks"></a>Note

Usare `Flush` per garantire che tutti i dati in memoria effettivamente scritti nel computer di destinazione e per garantire la transazione con il computer host è stata completata. `Flush` solo ha effetto su `CInternetFile` oggetti aperto per la scrittura.

##  <a name="getlength"></a>  CInternetFile::GetLength

Restituisce le dimensioni del file.

```
virtual ULONGLONG GetLength() const;
```

##  <a name="m_hfile"></a>  CInternetFile::m_hFile

Handle per il file associato all'oggetto.

```
HINTERNET m_hFile;
```

##  <a name="operator_hinternet"></a>  CInternetFile::operator HINTERNET

Utilizzare questo operatore per ottenere l'handle di Windows per la sessione corrente di Internet.

```
operator HINTERNET() const;
```

##  <a name="read"></a>  CInternetFile::Read

Chiamare questa funzione membro da leggere nella memoria specificata, iniziando in corrispondenza *lpvBuf*, il numero specificato di byte *nCount*.

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

Numero di byte trasferiti nel buffer. Il valore restituito può essere minore *nCount* se è stata raggiunta la fine del file.

### <a name="remarks"></a>Note

La funzione restituisce il numero di byte effettivamente letti, ovvero un numero che può essere minore *nCount* se il file viene interrotta. Se si verifica un errore durante la lettura del file, la funzione genera un [CInternetException](../../mfc/reference/cinternetexception-class.md) oggetto che descrive l'errore. Si noti che la lettura oltre la fine del file non viene considerata un errore e pertanto non verrà generata alcuna eccezione.

Per garantire il recupero di tutti i dati, un'applicazione deve continuare a chiamare il `CInternetFile::Read` metodo fino a quando il metodo restituisce zero.

##  <a name="readstring"></a>  CInternetFile::ReadString

Chiamare questa funzione membro per leggere un flusso di caratteri fino a quando non viene trovato un carattere di nuova riga.

```
virtual BOOL ReadString(CString& rString);

virtual LPTSTR ReadString(
    LPTSTR pstr,
    UINT nMax);
```

### <a name="parameters"></a>Parametri

*pstr*<br/>
Un puntatore a una stringa che riceverà la riga da leggere.

*nMax*<br/>
Il numero massimo di caratteri da leggere.

*rString*<br/>
Un riferimento per la [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto che riceve la riga letta.

### <a name="return-value"></a>Valore restituito

Un puntatore al buffer contenente dati normali recuperati dal [CInternetFile](../../mfc/reference/cinternetfile-class.md) oggetto. Indipendentemente dal tipo di dati del buffer passato a questo metodo, eventuali modifiche non viene eseguita sui dati (ad esempio, la conversione in Unicode), pertanto è necessario eseguire il mapping dei dati restituiti nella struttura ci si aspetta, come se il **void** <strong>\*</strong> tipo sono stati restituiti.

NULL se è stata raggiunta la fine del file senza dover leggere tutti i dati; In alternativa, se è stato raggiunto il valore boolean, FALSE se la fine del file senza dover leggere tutti i dati.

### <a name="remarks"></a>Note

La funzione inserisce la riga risulta nella memoria di cui fa riferimento il *pstr* parametro. Interrompe la lettura di caratteri quando raggiunge il numero massimo di caratteri, specificato da *nMax*. Il buffer riceve sempre un carattere di terminazione null.

Se si chiama `ReadString` senza prima chiamare [SetReadBufferSize](#setreadbuffersize), si otterrà un buffer di 4096 byte.

##  <a name="seek"></a>  CInternetFile::Seek

Chiamare questa funzione membro per riposizionare il puntatore del mouse in un file aperto in precedenza.

```
virtual ULONGLONG Seek(
    LONGLONG lOffset,
    UINT nFrom);
```

### <a name="parameters"></a>Parametri

*lOffset*<br/>
Offset in byte, per spostare il puntatore di lettura/scrittura nel file.

*nFrom*<br/>
Riferimento relativo per l'offset. Deve essere uno dei valori seguenti:

- `CFile::begin` Spostare il puntatore del file *lOff* inoltrare byte dall'inizio del file.

- `CFile::current` Spostare il puntatore del file *lOff* byte dalla posizione corrente nel file.

- `CFile::end` Spostare il puntatore del file *lOff* byte dalla fine del file. *lOff* deve essere negativo per eseguire la ricerca esistente del file; positivo valori verranno ricerca oltre la fine del file.

### <a name="return-value"></a>Valore restituito

L'offset dall'inizio del file se la posizione richiesta è valida; nuova in byte in caso contrario, il valore è definito e una [CInternetException](../../mfc/reference/cinternetexception-class.md) oggetto viene generata un'eccezione.

### <a name="remarks"></a>Note

Il `Seek` funzione consente ad accesso casuale al contenuto di un file spostando il puntatore una determinata quantità, in modo assoluto o relativo. Durante la ricerca viene effettivamente letto alcun dato.

A questo punto, una chiamata a questa funzione membro è supportata solo per i dati associati `CHttpFile` oggetti. Non è supportato per le richieste FTP o gopher. Se si chiama `Seek` per uno di questi servizi non supportati, passerà nuovamente al codice di errore Win32 ERROR_INTERNET_INVALID_OPERATION.

Quando si apre un file, il puntatore del file è in corrispondenza dell'offset 0, l'inizio del file.

> [!NOTE]
>  Usando `Seek` potrebbe essere una chiamata implicita a [Flush](#flush).

### <a name="example"></a>Esempio

  Vedere l'esempio di implementazione della classe base ( [CFile::Seek](../../mfc/reference/cfile-class.md#seek)).

##  <a name="setreadbuffersize"></a>  CInternetFile::SetReadBufferSize

Chiamare questa funzione membro per impostare le dimensioni del buffer di lettura temporaneo utilizzato da un `CInternetFile`-oggetto derivato.

```
BOOL SetReadBufferSize(UINT nReadSize);
```

### <a name="parameters"></a>Parametri

*nReadSize*<br/>
Dimensione desiderata del buffer in byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.

### <a name="remarks"></a>Note

APIs WinInet sottostanti non eseguire la memorizzazione nel buffer, quindi scegliere una dimensione del buffer che consente all'applicazione di leggere i dati in modo efficiente, indipendentemente dalla quantità di dati da leggere. Se ogni chiamata a [lettura](#read) implica in genere un aount grandi di dati (ad esempio, quattro o più kilobyte), non è necessario un buffer. Tuttavia, se si chiama `Read` per ottenere piccoli blocchi di dati, oppure se si utilizza [ReadString](#readstring) per leggere una nuova riga alla volta, un buffer di lettura consente di migliorare le prestazioni dell'applicazione.

Per impostazione predefinita, un `CInternetFile` oggetto non sono disponibili eventuali buffer per la lettura. Se si chiama questa funzione membro, è necessario assicurarsi che il file è stato aperto per l'accesso in lettura.

È possibile aumentare le dimensioni del buffer in qualsiasi momento, ma la compattazione del buffer non ha alcun effetto. Se si chiama [ReadString](#readstring) senza prima chiamare `SetReadBufferSize`, si otterrà un buffer di 4096 byte.

##  <a name="setwritebuffersize"></a>  CInternetFile::SetWriteBufferSize

Chiamare questa funzione membro per impostare le dimensioni del buffer di scrittura temporanea usato da un `CInternetFile`-oggetto derivato.

```
BOOL SetWriteBufferSize(UINT nWriteSize);
```

### <a name="parameters"></a>Parametri

*nWriteSize*<br/>
Dimensioni del buffer in byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.

### <a name="remarks"></a>Note

Sottostante APIs WinInet non eseguono la memorizzazione nel buffer, quindi scegliere una dimensione del buffer che consente all'applicazione di scrivere dati in modo efficiente anche la quantità di dati da scrivere. Se ogni chiamata a [scrivere](#write) implica in genere una grande quantità di dati (ad esempio, quattro o più kilobyte alla volta), non è necessario un buffer. Tuttavia, se si chiama [scrivere](#write) per scrivere piccoli blocchi di dati, un buffer di scrittura migliora le prestazioni dell'applicazione.

Per impostazione predefinita, un `CInternetFile` oggetto non sono disponibili eventuali buffer per la scrittura. Se si chiama questa funzione membro, è necessario assicurarsi che il file è stato aperto per l'accesso in scrittura. È possibile modificare le dimensioni del buffer di scrittura in qualsiasi momento, ma in caso contrario, una chiamata implicita a [Flush](#flush).

##  <a name="write"></a>  CInternetFile::Write

Chiamare questa funzione membro da scrivere nella memoria specificata, *lpvBuf*, il numero specificato di byte *nCount*.

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

### <a name="remarks"></a>Note

Se si verifica un errore durante la scrittura dei dati, la funzione genera un [CInternetException](../../mfc/reference/cinternetexception-class.md) oggetto che descrive l'errore.

##  <a name="writestring"></a>  CInternetFile::WriteString

Questa funzione scrive una stringa con terminazione null per il file associato.

```
virtual void WriteString(LPCTSTR pstr);
```

### <a name="parameters"></a>Parametri

*pstr*<br/>
Un puntatore a una stringa contenente il contenuto da scrivere.

### <a name="remarks"></a>Note

Se si verifica un errore durante la scrittura dei dati, la funzione genera un [CInternetException](../../mfc/reference/cinternetexception-class.md) oggetto che descrive l'errore.

## <a name="see-also"></a>Vedere anche

[Classe CStdioFile](../../mfc/reference/cstdiofile-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)

---
title: Classe CGopherFileFind
ms.date: 11/04/2016
f1_keywords:
- CGopherFileFind
- AFXINET/CGopherFileFind
- AFXINET/CGopherFileFind::CGopherFileFind
- AFXINET/CGopherFileFind::FindFile
- AFXINET/CGopherFileFind::FindNextFile
- AFXINET/CGopherFileFind::GetCreationTime
- AFXINET/CGopherFileFind::GetLastAccessTime
- AFXINET/CGopherFileFind::GetLastWriteTime
- AFXINET/CGopherFileFind::GetLength
- AFXINET/CGopherFileFind::GetLocator
- AFXINET/CGopherFileFind::GetScreenName
- AFXINET/CGopherFileFind::IsDots
helpviewer_keywords:
- CGopherFileFind [MFC], CGopherFileFind
- CGopherFileFind [MFC], FindFile
- CGopherFileFind [MFC], FindNextFile
- CGopherFileFind [MFC], GetCreationTime
- CGopherFileFind [MFC], GetLastAccessTime
- CGopherFileFind [MFC], GetLastWriteTime
- CGopherFileFind [MFC], GetLength
- CGopherFileFind [MFC], GetLocator
- CGopherFileFind [MFC], GetScreenName
- CGopherFileFind [MFC], IsDots
ms.assetid: 8465a979-6323-496d-ab4b-e81383fb999d
ms.openlocfilehash: 55c40fc04934f00ccb541a01cce611d9532bee1a
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78875786"
---
# <a name="cgopherfilefind-class"></a>Classe CGopherFileFind

Facilita le ricerche di file su Internet dei server gopher.

> [!NOTE]
>  Le classi `CGopherConnection`, `CGopherFile`, `CGopherFileFind`, `CGopherLocator` e i relativi membri sono state deprecate perché non funzionano sulla piattaforma Windows XP, ma continueranno a funzionare su piattaforme precedenti.

## <a name="syntax"></a>Sintassi

```
class CGopherFileFind : public CFileFind
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CGopherFileFind:: CGopherFileFind](#cgopherfilefind)|Costruisce un oggetto `CGopherFileFind`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CGopherFileFind:: FindFile](#findfile)|Trova un file in un server gopher.|
|[CGopherFileFind:: FindNextFile](#findnextfile)|Continua una ricerca di file da una chiamata precedente a [FindFile](#findfile).|
|[CGopherFileFind:: GetCreationTime](#getcreationtime)|Ottiene l'ora di creazione del file specificato.|
|[CGopherFileFind:: GetLastAccessTime](#getlastaccesstime)|Ottiene l'ora dell'ultimo accesso al file specificato.|
|[CGopherFileFind:: GetLastWriteTime](#getlastwritetime)|Ottiene l'ora dell'ultima scrittura nel file specificato.|
|[CGopherFileFind:: GetLength](#getlength)|Ottiene la lunghezza, in byte, del file trovato.|
|[CGopherFileFind:: GetLocator](#getlocator)|Ottenere un oggetto `CGopherLocator`.|
|[CGopherFileFind:: getscreenname](#getscreenname)|Ottiene il nome di una schermata gopher.|
|[CGopherFileFind:: punti](#isdots)|Verifica la directory corrente e i marcatori della directory padre durante l'iterazione dei file.|

## <a name="remarks"></a>Osservazioni

`CGopherFileFind` include funzioni membro che iniziano una ricerca, individuano un file e restituiscono un URL di file.

Altre classi MFC progettate per Internet e la ricerca di file locali includono [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md) e [CFileFind](../../mfc/reference/cfilefind-class.md). Insieme a `CGopherFileFind`, queste classi forniscono un meccanismo semplice che consente all'utente di trovare file specifici, indipendentemente dal protocollo server, dal tipo di file o dal percorso, ovvero un computer locale o un server remoto. Si noti che non esiste alcuna classe MFC per la ricerca nei server HTTP, perché HTTP non supporta la manipolazione diretta dei file richiesta dalle ricerche.

> [!NOTE]
> `CGopherFileFind` non supporta le seguenti funzioni membro della relativa classe di base [CFileFind](../../mfc/reference/cfilefind-class.md):

- [GetRoot](../../mfc/reference/cfilefind-class.md#getroot)

- [GetFileName](../../mfc/reference/cfilefind-class.md#getfilename)

- [GetFilePath](../../mfc/reference/cfilefind-class.md#getfilepath)

- [GetFileTitle](../../mfc/reference/cfilefind-class.md#getfiletitle)

- [GetFileURL](../../mfc/reference/cfilefind-class.md#getfileurl)

Inoltre, [quando viene usato](../../mfc/reference/cfilefind-class.md#isdots) con `CGopherFileFind`, la funzione membro `CFileFind` è sempre false.

Per ulteriori informazioni sull'utilizzo di `CGopherFileFind` e delle altre classi WinInet, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFileFind](../../mfc/reference/cfilefind-class.md)

`CGopherFileFind`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXINET. h

##  <a name="cgopherfilefind"></a>CGopherFileFind:: CGopherFileFind

Questa funzione membro viene chiamata per costruire un oggetto `CGopherFileFind`.

```
explicit CGopherFileFind(
    CGopherConnection* pConnection,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*pConnection*<br/>
Puntatore a un oggetto [CGopherConnection](../../mfc/reference/cgopherconnection-class.md) .

*dwContext*<br/>
Identificatore di contesto per l'operazione. Per ulteriori informazioni su *dwContext*, vedere la **sezione Osservazioni** .

### <a name="remarks"></a>Osservazioni

Il valore predefinito per *dwContext* viene inviato da MFC all'oggetto `CGopherFileFind` dall'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) che ha creato l'oggetto `CGopherFileFind`. Quando si costruisce un oggetto `CGopherFileFind`, è possibile eseguire l'override dell'impostazione predefinita per impostare l'identificatore di contesto su un valore a scelta. L'identificatore di contesto viene restituito a [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato nell'oggetto con cui viene identificato. Per ulteriori informazioni sull'identificatore di contesto, vedere l'articolo [primo passaggio per Internet: WinInet](../../mfc/wininet-basics.md) .

##  <a name="findfile"></a>CGopherFileFind:: FindFile

Chiamare questa funzione membro per trovare un file gopher.

```
virtual BOOL FindFile(
    CGopherLocator& refLocator,
    LPCTSTR pstrString,
    DWORD dwFlags = INTERNET_FLAG_RELOAD);

virtual BOOL FindFile(
    LPCTSTR pstrString,
    DWORD dwFlags = INTERNET_FLAG_RELOAD);
```

### <a name="parameters"></a>Parametri

*refLocator*<br/>
Riferimento a un oggetto [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) .

*pstrString*<br/>
Puntatore a una stringa che contiene il nome file.

*dwFlags*<br/>
Flag che descrivono come gestire questa sessione. I flag validi sono:

- INTERNET_FLAG_RELOAD recuperare i dati dal server remoto anche se sono memorizzati nella cache locale.

- INTERNET_FLAG_DONT_CACHE non memorizzano nella cache i dati, in locale o in qualsiasi gateway.

- INTERNET_FLAG_SECURE richiedere transazioni sicure in transito con Secure Sockets Layer o PCT. Questo flag è applicabile solo alle richieste HTTP.

- INTERNET_FLAG_USE_EXISTING se possibile, riutilizzare le connessioni esistenti al server per nuove richieste di `FindFile`, anziché creare una nuova sessione per ogni richiesta.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Per ottenere informazioni estese sull'errore, chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror).

### <a name="remarks"></a>Osservazioni

Dopo aver chiamato `FindFile` per recuperare il primo oggetto Gopher, è possibile chiamare [FindNextFile](#findnextfile) per recuperare i file Gopher successivi.

##  <a name="findnextfile"></a>CGopherFileFind:: FindNextFile

Chiamare questa funzione membro per continuare la ricerca di file iniziata con una chiamata a [CGopherFileFind:: FindFile](#findfile).

```
virtual BOOL FindNextFile();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se sono presenti più file; zero se il file trovato è l'ultimo nella directory o se si è verificato un errore. Per ottenere informazioni estese sull'errore, chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror). Se il file trovato è l'ultimo file nella directory o se non è possibile trovare file corrispondenti, la funzione `GetLastError` restituisce ERROR_NO_MORE_FILES.

##  <a name="getcreationtime"></a>CGopherFileFind:: GetCreationTime

Ottiene l'ora di creazione per il file corrente.

```
virtual BOOL GetCreationTime(FILETIME* pTimeStamp) const;
virtual BOOL GetCreationTime(CTime& refTime) const;
```

### <a name="parameters"></a>Parametri

*pTimeStamp*<br/>
Puntatore a una struttura [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) contenente l'ora di creazione del file.

*refTime*<br/>
Riferimento a un oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) .

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; 0 in caso di esito negativo. `GetCreationTime` restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo oggetto `CGopherFileFind`.

### <a name="remarks"></a>Osservazioni

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetCreationTime`.

> [!NOTE]
>  Non tutti i file System usano la stessa semantica per implementare il timestamp restituito da questa funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni timestamp se il file system o il server sottostante non supporta la conservazione dell'attributo time. Per informazioni sui formati di ora, vedere la struttura [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) . In alcuni sistemi operativi, l'ora restituita è nel fuso orario locale al computer in cui si trova il file. Per ulteriori informazioni, vedere l'API Win32 [FileTimeToLocalFileTime](/windows/win32/api/fileapi/nf-fileapi-filetimetolocalfiletime) .

##  <a name="getlastaccesstime"></a>CGopherFileFind:: GetLastAccessTime

Ottiene l'ora dell'ultimo accesso al file specificato.

```
virtual BOOL GetLastAccessTime(CTime& refTime) const;
virtual BOOL GetLastAccessTime(FILETIME* pTimeStamp) const;
```

### <a name="parameters"></a>Parametri

*refTime*<br/>
Riferimento a un oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) .

*pTimeStamp*<br/>
Puntatore a una struttura [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) che contiene l'ora dell'ultimo accesso al file.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; 0 in caso di esito negativo. `GetLastAccessTime` restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo oggetto `CGopherFileFind`.

### <a name="remarks"></a>Osservazioni

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetLastAccessTime`.

> [!NOTE]
>  Non tutti i file System usano la stessa semantica per implementare il timestamp restituito da questa funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni timestamp se il file system o il server sottostante non supporta la conservazione dell'attributo time. Per informazioni sui formati di ora, vedere la struttura [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) . In alcuni sistemi operativi, l'ora restituita è nel fuso orario locale al computer in cui si trova il file. Per ulteriori informazioni, vedere l'API Win32 [FileTimeToLocalFileTime](/windows/win32/api/fileapi/nf-fileapi-filetimetolocalfiletime) .

##  <a name="getlastwritetime"></a>CGopherFileFind:: GetLastWriteTime

Ottiene l'ora dell'Ultima modifica apportata al file.

```
virtual BOOL GetLastWriteTime(FILETIME* pTimeStamp) const;
virtual BOOL GetLastWriteTime(CTime& refTime) const;
```

### <a name="parameters"></a>Parametri

*pTimeStamp*<br/>
Puntatore a una struttura [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) contenente l'ora dell'ultima scrittura nel file.

*refTime*<br/>
Riferimento a un oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) .

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; 0 in caso di esito negativo. `GetLastWriteTime` restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo oggetto `CGopherFileFind`.

### <a name="remarks"></a>Osservazioni

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetLastWriteTime`.

> [!NOTE]
>  Non tutti i file System usano la stessa semantica per implementare il timestamp restituito da questa funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni timestamp se il file system o il server sottostante non supporta la conservazione dell'attributo time. Per informazioni sui formati di ora, vedere la struttura [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) . In alcuni sistemi operativi, l'ora restituita è nel fuso orario locale al computer in cui si trova il file. Per ulteriori informazioni, vedere l'API Win32 [FileTimeToLocalFileTime](/windows/win32/api/fileapi/nf-fileapi-filetimetolocalfiletime) .

##  <a name="getlength"></a>CGopherFileFind:: GetLength

Chiamare questa funzione membro per ottenere la lunghezza, in byte, del file trovato.

```
virtual ULONGLONG GetLength() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza, in byte, del file trovato.

### <a name="remarks"></a>Osservazioni

`GetLength` usa la struttura Win32 [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) per ottenere il valore delle dimensioni del file in byte.

> [!NOTE]
>  A partire da MFC 7,0, `GetLength` supporta i tipi Integer a 64 bit. Il codice precedentemente esistente compilato con la versione più recente della libreria può generare avvisi di troncamento.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFile:: GetLength](../../mfc/reference/cfile-class.md#getlength) (implementazione della classe base).

##  <a name="getlocator"></a>CGopherFileFind:: GetLocator

Chiamare questa funzione membro per ottenere l'oggetto [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) usato da [FindFile](#findfile) per trovare il file gopher.

```
CGopherLocator GetLocator() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `CGopherLocator` .

##  <a name="getscreenname"></a>CGopherFileFind:: getscreenname

Chiamare questa funzione membro per ottenere il nome della schermata gopher.

```
CString GetScreenName() const;
```

### <a name="return-value"></a>Valore restituito

Nome della schermata gopher.

##  <a name="isdots"></a>CGopherFileFind:: punti

Verifica la directory corrente e i marcatori della directory padre durante l'iterazione dei file.

```
virtual BOOL IsDots() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il nome del file trovato è "." o "..", che indica che il file trovato è effettivamente una directory. In caso contrario, 0

### <a name="remarks"></a>Osservazioni

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsDots`.

## <a name="see-also"></a>Vedere anche

[Classe CFileFind](../../mfc/reference/cfilefind-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CFtpFileFind](../../mfc/reference/cftpfilefind-class.md)<br/>
[Classe CFileFind](../../mfc/reference/cfilefind-class.md)<br/>
[Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)<br/>
[Classe CGopherFile](../../mfc/reference/cgopherfile-class.md)<br/>
[Classe CHttpFile](../../mfc/reference/chttpfile-class.md)

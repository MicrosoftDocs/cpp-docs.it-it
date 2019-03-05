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
ms.openlocfilehash: c1157b3583e266a09840f710b46766ffc4f31b5e
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57269695"
---
# <a name="cgopherfilefind-class"></a>Classe CGopherFileFind

Facilita le ricerche di file su Internet dei server gopher.

> [!NOTE]
>  Le classi `CGopherConnection`, `CGopherFile`, `CGopherFileFind`, `CGopherLocator` e i relativi membri sono stati deprecati perché non funzionano nella piattaforma Windows XP, ma continueranno a funzionare in piattaforme precedenti.

## <a name="syntax"></a>Sintassi

```
class CGopherFileFind : public CFileFind
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CGopherFileFind::CGopherFileFind](#cgopherfilefind)|Costruisce un oggetto `CGopherFileFind`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CGopherFileFind::FindFile](#findfile)|Trova un file in un server gopher.|
|[CGopherFileFind::FindNextFile](#findnextfile)|Continua la ricerca di file da una chiamata precedente a [FindFile](#findfile).|
|[CGopherFileFind::GetCreationTime](#getcreationtime)|Ottiene l'ora di creazione del file specificato.|
|[CGopherFileFind::GetLastAccessTime](#getlastaccesstime)|Ottiene l'ora di che ultimo accesso al file specificato.|
|[CGopherFileFind::GetLastWriteTime](#getlastwritetime)|Ottiene l'ora che ultima scrittura nel file specificato.|
|[CGopherFileFind::GetLength](#getlength)|Ottiene la lunghezza del file trovato, in byte.|
|[CGopherFileFind::GetLocator](#getlocator)|Ottenere un `CGopherLocator` oggetto.|
|[CGopherFileFind::GetScreenName](#getscreenname)|Ottiene il nome di una schermata gopher.|
|[CGopherFileFind::IsDots](#isdots)|Verifica se i marcatori di directory di corrente directory e padre durante lo scorrimento dei file.|

## <a name="remarks"></a>Note

`CGopherFileFind` include funzioni membro che iniziano una ricerca, individuare un file e restituiscono l'URL del file.

Altre classi MFC progettati per eseguire la ricerca di file locale e Internet includono [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md) e [CFileFind](../../mfc/reference/cfilefind-class.md). Insieme a `CGopherFileFind`, queste classi forniscono un meccanismo semplice per l'utente trovare i file specifici, indipendentemente dal protocollo del server, il tipo di file o alla posizione (un computer locale o un server remoto.) Si noti che non vi sia nessuna classe MFC per la ricerca basata su HTTP (server) poiché HTTP non supporta la manipolazione di file dirette richiesta dalle ricerche.

> [!NOTE]
> `CGopherFileFind` non supporta le seguenti funzioni membro della relativa classe di base [CFileFind](../../mfc/reference/cfilefind-class.md):

- [GetRoot](../../mfc/reference/cfilefind-class.md#getroot)

- [GetFileName](../../mfc/reference/cfilefind-class.md#getfilename)

- [GetFilePath](../../mfc/reference/cfilefind-class.md#getfilepath)

- [GetFileTitle](../../mfc/reference/cfilefind-class.md#getfiletitle)

- [GetFileURL](../../mfc/reference/cfilefind-class.md#getfileurl)

Inoltre, quando usato con `CGopherFileFind`, il `CFileFind` funzione membro [IsDots](../../mfc/reference/cfilefind-class.md#isdots) sia sempre FALSE.

Per altre informazioni su come usare `CGopherFileFind` e le altre classi WinInet, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFileFind](../../mfc/reference/cfilefind-class.md)

`CGopherFileFind`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet. h

##  <a name="cgopherfilefind"></a>  CGopherFileFind::CGopherFileFind

Questa funzione membro viene chiamata per costruire un `CGopherFileFind` oggetto.

```
explicit CGopherFileFind(
    CGopherConnection* pConnection,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*pConnection*<br/>
Un puntatore a un [CGopherConnection](../../mfc/reference/cgopherconnection-class.md) oggetto.

*dwContext*<br/>
L'identificatore di contesto per l'operazione. Visualizzare **osservazioni** per altre informazioni sui *dwContext*.

### <a name="remarks"></a>Note

Il valore predefinito per *dwContext* inviato da MFC per il `CGopherFileFind` dell'oggetto dal [CInternetSession](../../mfc/reference/cinternetsession-class.md) dell'oggetto che ha creato il `CGopherFileFind` oggetto. Quando si costruisce un `CGopherFileFind` dell'oggetto, è possibile sostituire il valore predefinito per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto viene restituito al [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'oggetto con cui viene identificato. Vedere l'articolo [Internet primi passaggi: WinInet](../../mfc/wininet-basics.md) per altre informazioni sull'identificatore di contesto.

##  <a name="findfile"></a>  CGopherFileFind::FindFile

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
Un riferimento a un [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) oggetto.

*pstrString*<br/>
Un puntatore a una stringa contenente il nome del file.

*dwFlags*<br/>
Flag che descrivono come gestire questa sessione. I flag validi sono:

- INTERNET_FLAG_RELOAD ottenere i dati dal server remoto, anche se è in locale viene memorizzato nella cache.

- INTERNET_FLAG_DONT_CACHE nella cache i dati, sia localmente che in tutti i gateway.

- INTERNET_FLAG_SECURE richiedere transazioni sicure in transito con Secure Sockets Layer o PCT. Questo flag è applicabile a solo le richieste HTTP.

- INTERNET_FLAG_USE_EXISTING se possibile, riusare le connessioni esistenti nel server per il nuovo `FindFile` richieste, invece di crearne una nuova sessione per ogni richiesta.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Per ottenere informazioni sull'errore, chiamare la funzione Win32 [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360).

### <a name="remarks"></a>Note

Dopo avere chiamato `FindFile` per recuperare il primo oggetto gopher, è possibile chiamare [FindNextFile](#findnextfile) per recuperare i file successivi gopher.

##  <a name="findnextfile"></a>  CGopherFileFind::FindNextFile

Chiamare questa funzione membro per continuare la ricerca di file iniziata con una chiamata a [CGopherFileFind:: FindFile](#findfile).

```
virtual BOOL FindNextFile();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se sono presenti più file; zero se il file è stato trovato è l'ultimo nella directory o se si è verificato un errore. Per ottenere informazioni sull'errore, chiamare la funzione Win32 [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360). Se il file è stato trovato l'ultimo file nella directory o se non corrisponde ad alcuna sono disponibili i file, il `GetLastError` funzione restituisce ERROR_NO_MORE_FILES.

##  <a name="getcreationtime"></a>  CGopherFileFind::GetCreationTime

Ottiene l'ora di creazione per il file corrente.

```
virtual BOOL GetCreationTime(FILETIME* pTimeStamp) const;
virtual BOOL GetCreationTime(CTime& refTime) const;
```

### <a name="parameters"></a>Parametri

*pTimeStamp*<br/>
Un puntatore a un [FILETIME](/windows/desktop/api/minwinbase/ns-minwinbase-filetime) struttura che contiene l'ora di creazione del file.

*refTime*<br/>
Un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo. 0 se ha esito negativo. `GetCreationTime` Restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo `CGopherFileFind` oggetto.

### <a name="remarks"></a>Note

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetCreationTime`.

> [!NOTE]
>  Non tutti i sistemi di file utilizzano la stessa semantica per implementare il timestamp restituito da questa funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni di indicatore di data e ora, se il file system o server sottostante non supporta l'attributo ora. Vedere le [Win32_FIND_DATA](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) struttura per informazioni sui formati di ora. In alcuni sistemi operativi, l'ora restituita è nel periodo di tempo sono state zona locale nel computer si trova il file. Vedere Win32 [FileTimeToLocalFileTime](/windows/desktop/api/fileapi/nf-fileapi-filetimetolocalfiletime) API per altre informazioni.

##  <a name="getlastaccesstime"></a>  CGopherFileFind::GetLastAccessTime

Ottiene l'ora di che ultimo accesso al file specificato.

```
virtual BOOL GetLastAccessTime(CTime& refTime) const;
virtual BOOL GetLastAccessTime(FILETIME* pTimeStamp) const;
```

### <a name="parameters"></a>Parametri

*refTime*<br/>
Un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto.

*pTimeStamp*<br/>
Un puntatore a un [FILETIME](/windows/desktop/api/minwinbase/ns-minwinbase-filetime) struttura che contiene l'ora dell'ultimo accesso al file.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo. 0 se ha esito negativo. `GetLastAccessTime` Restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo `CGopherFileFind` oggetto.

### <a name="remarks"></a>Note

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetLastAccessTime`.

> [!NOTE]
>  Non tutti i sistemi di file utilizzano la stessa semantica per implementare il timestamp restituito da questa funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni di indicatore di data e ora, se il file system o server sottostante non supporta l'attributo ora. Vedere le [Win32_FIND_DATA](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) struttura per informazioni sui formati di ora. In alcuni sistemi operativi, l'ora restituita è nel periodo di tempo sono state zona locale nel computer si trova il file. Vedere Win32 [FileTimeToLocalFileTime](/windows/desktop/api/fileapi/nf-fileapi-filetimetolocalfiletime) API per altre informazioni.

##  <a name="getlastwritetime"></a>  CGopherFileFind::GetLastWriteTime

Ottiene l'ultima volta il file è stato modificato.

```
virtual BOOL GetLastWriteTime(FILETIME* pTimeStamp) const;
virtual BOOL GetLastWriteTime(CTime& refTime) const;
```

### <a name="parameters"></a>Parametri

*pTimeStamp*<br/>
Un puntatore a un [FILETIME](/windows/desktop/api/minwinbase/ns-minwinbase-filetime) struttura che contiene l'ora ultima scrittura di file.

*refTime*<br/>
Un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo. 0 se ha esito negativo. `GetLastWriteTime` Restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo `CGopherFileFind` oggetto.

### <a name="remarks"></a>Note

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetLastWriteTime`.

> [!NOTE]
>  Non tutti i sistemi di file utilizzano la stessa semantica per implementare il timestamp restituito da questa funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni di indicatore di data e ora, se il file system o server sottostante non supporta l'attributo ora. Vedere le [Win32_FIND_DATA](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) struttura per informazioni sui formati di ora. In alcuni sistemi operativi, l'ora restituita è nel periodo di tempo sono state zona locale nel computer si trova il file. Vedere Win32 [FileTimeToLocalFileTime](/windows/desktop/api/fileapi/nf-fileapi-filetimetolocalfiletime) API per altre informazioni.

##  <a name="getlength"></a>  CGopherFileFind::GetLength

Chiamare questa funzione membro per ottenere la lunghezza, espressa in byte, del file trovato.

```
virtual ULONGLONG GetLength() const;
```

### <a name="return-value"></a>Valore restituito

La lunghezza, espressa in byte, del file trovato.

### <a name="remarks"></a>Note

`GetLength` Usa la struttura Win32 [WIN32_FIND_DATA](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) per ottenere il valore delle dimensioni del file in byte.

> [!NOTE]
>  A partire da MFC 7.0, `GetLength` supporta i tipi integer a 64 bit. Codice esistente precedentemente creato con questa versione più recente della libreria può generare degli avvisi di troncamento.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFile::GetLength](../../mfc/reference/cfile-class.md#getlength) (implementazione della classe base).

##  <a name="getlocator"></a>  CGopherFileFind::GetLocator

Chiamare questa funzione membro per ottenere il [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) dell'oggetto che [FindFile](#findfile) viene utilizzato per trovare il file gopher.

```
CGopherLocator GetLocator() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `CGopherLocator`.

##  <a name="getscreenname"></a>  CGopherFileFind::GetScreenName

Chiamare questa funzione membro per ottenere il nome della schermata gopher.

```
CString GetScreenName() const;
```

### <a name="return-value"></a>Valore restituito

Il nome della schermata gopher.

##  <a name="isdots"></a>  CGopherFileFind::IsDots

Verifica se i marcatori di directory di corrente directory e padre durante lo scorrimento dei file.

```
virtual BOOL IsDots() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il file trovato con il nome "."o"..", che indica che il file trovato è effettivamente una directory. In caso contrario 0.

### <a name="remarks"></a>Note

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsDots`.

## <a name="see-also"></a>Vedere anche

[Classe CFileFind](../../mfc/reference/cfilefind-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CFtpFileFind](../../mfc/reference/cftpfilefind-class.md)<br/>
[Classe CFileFind](../../mfc/reference/cfilefind-class.md)<br/>
[Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)<br/>
[Classe CGopherFile](../../mfc/reference/cgopherfile-class.md)<br/>
[Classe CHttpFile](../../mfc/reference/chttpfile-class.md)

---
title: Classe CFtpFileFind
ms.date: 11/04/2016
f1_keywords:
- CFtpFileFind
- AFXINET/CFtpFileFind
- AFXINET/CFtpFileFind::CFtpFileFind
- AFXINET/CFtpFileFind::FindFile
- AFXINET/CFtpFileFind::FindNextFile
- AFXINET/CFtpFileFind::GetFileURL
helpviewer_keywords:
- CFtpFileFind [MFC], CFtpFileFind
- CFtpFileFind [MFC], FindFile
- CFtpFileFind [MFC], FindNextFile
- CFtpFileFind [MFC], GetFileURL
ms.assetid: 9667cf01-657f-4b11-b9db-f11e5a7b4e4c
ms.openlocfilehash: 2f4a394e29be135cac95edf6f504d8b066f53414
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69506242"
---
# <a name="cftpfilefind-class"></a>Classe CFtpFileFind

Facilita le ricerche di file su Internet dei server FTP.

## <a name="syntax"></a>Sintassi

```
class CFtpFileFind : public CFileFind
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CFtpFileFind::CFtpFileFind](#cftpfilefind)|Costruisce un oggetto `CFtpFileFind`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CFtpFileFind::FindFile](#findfile)|Trova un file in un server FTP.|
|[CFtpFileFind::FindNextFile](#findnextfile)|Continua una ricerca di file da una chiamata precedente a [FindFile](#findfile).|
|[CFtpFileFind::GetFileURL](#getfileurl)|Ottiene l'URL, incluso il percorso, del file trovato.|

## <a name="remarks"></a>Note

`CFtpFileFind`include funzioni membro che iniziano una ricerca, individuano un file e restituiscono l'URL o altre informazioni descrittive sul file.

Altre classi MFC progettate per Internet e la ricerca di file locali includono [CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md) e [CFileFind](../../mfc/reference/cfilefind-class.md). Insieme a `CFtpFileFind`, queste classi forniscono un meccanismo trasparente che consente al client di trovare file specifici, indipendentemente dal protocollo server o dal tipo di file (un computer locale o un server remoto). Si noti che non esiste alcuna classe MFC per la ricerca nei server HTTP, perché HTTP non supporta la manipolazione diretta dei file necessari per le ricerche.

Per ulteriori informazioni sull'utilizzo `CFtpFileFind` di e sulle altre classi WinInet, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="example"></a>Esempio

Nel codice seguente viene illustrato come enumerare tutti i file nella directory corrente del server FTP.

[!code-cpp[NVC_MFCWinInet#8](../../mfc/codesnippet/cpp/cftpfilefind-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFileFind](../../mfc/reference/cfilefind-class.md)

`CFtpFileFind`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXINET. h

##  <a name="cftpfilefind"></a>CFtpFileFind:: CFtpFileFind

Questa funzione membro viene chiamata per costruire un `CFtpFileFind` oggetto.

```
explicit CFtpFileFind(
    CFtpConnection* pConnection,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*pConnection*<br/>
Puntatore a un oggetto `CFtpConnection` . È possibile ottenere una connessione FTP chiamando [CInternetSession:: GetFtpConnection](../../mfc/reference/cinternetsession-class.md#getftpconnection).

*dwContext*<br/>
Identificatore di contesto per l' `CFtpFileFind` oggetto. Per ulteriori informazioni su questo parametro, vedere la **sezione Osservazioni** .

### <a name="remarks"></a>Note

Il valore predefinito per *dwContext* viene inviato da MFC all' `CFtpFileFind` oggetto dall'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) che ha creato l' `CFtpFileFind` oggetto. È possibile eseguire l'override dell'impostazione predefinita per impostare l'identificatore di contesto su un valore a scelta. L'identificatore di contesto viene restituito a [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato nell'oggetto con cui viene identificato. Vedere l'articolo [primi passaggi per Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

### <a name="example"></a>Esempio

  Vedere l'esempio nella panoramica della classe riportata in precedenza in questo argomento.

##  <a name="findfile"></a>  CFtpFileFind::FindFile

Chiamare questa funzione membro per trovare un file FTP.

```
virtual BOOL FindFile(
    LPCTSTR pstrName = NULL,
    DWORD dwFlags = INTERNET_FLAG_RELOAD);
```

### <a name="parameters"></a>Parametri

*pstrName*<br/>
Puntatore a una stringa che contiene il nome del file da trovare. Se è NULL, la chiamata eseguirà una ricerca con caratteri jolly (*).

*dwFlags*<br/>
Flag che descrivono come gestire questa sessione. Questi flag possono essere combinati con l'operatore OR bit&#124;per bit () e sono i seguenti:

- INTERNET_FLAG_RELOAD ottiene i dati dalla rete anche se vengono memorizzati localmente nella cache. Si tratta del flag predefinito.

- INTERNET_FLAG_DONT_CACHE non memorizzano nella cache i dati, in locale o in qualsiasi gateway.

- INTERNET_FLAG_RAW_DATA esegue l'override dell'impostazione predefinita per restituire i dati non elaborati (strutture [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) per FTP).

- INTERNET_FLAG_SECURE protegge le transazioni in transito con Secure Sockets Layer o PCT. Questo flag è applicabile solo alle richieste HTTP.

- INTERNET_FLAG_EXISTING_CONNECT se possibile, riutilizzare le connessioni esistenti al server per le `FindFile` nuove richieste anziché creare una nuova sessione per ogni richiesta.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Per ottenere informazioni estese sull'errore, chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror).

### <a name="remarks"></a>Note

Dopo aver `FindFile` chiamato per recuperare il primo file FTP, è possibile chiamare [FindNextFile](#findnextfile) per recuperare i file FTP successivi.

### <a name="example"></a>Esempio

  Vedere l'esempio precedente in questo argomento.

##  <a name="findnextfile"></a>  CFtpFileFind::FindNextFile

Chiamare questa funzione membro per continuare una ricerca di file iniziata con una chiamata alla funzione membro [FindFile](#findfile) .

```
virtual BOOL FindNextFile();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se sono presenti più file; zero se il file trovato è l'ultimo nella directory o se si è verificato un errore. Per ottenere informazioni estese sull'errore, chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror). Se il file trovato è l'ultimo file nella directory o se non è possibile trovare file corrispondenti, la `GetLastError` funzione restituisce ERROR_NO_MORE_FILES.

### <a name="remarks"></a>Note

È necessario chiamare questa funzione almeno una volta prima di chiamare qualsiasi funzione Attribute (vedere [CFileFind:: FindNextFile](../../mfc/reference/cfilefind-class.md#findnextfile)).

`FindNextFile`esegue il wrapping della funzione Win32 [FindNextFile](/windows/win32/api/fileapi/nf-fileapi-findnextfilew).

### <a name="example"></a>Esempio

  Vedere l'esempio precedente in questo argomento.

##  <a name="getfileurl"></a>  CFtpFileFind::GetFileURL

Chiamare questa funzione membro per ottenere l'URL del file specificato.

```
CString GetFileURL() const;
```

### <a name="return-value"></a>Valore restituito

Il file e il percorso dell'URL (Universal Resource Locator).

### <a name="remarks"></a>Note

`GetFileURL`è simile alla funzione membro [CFileFind::](../../mfc/reference/cfilefind-class.md#getfilepath)filePath, ad eccezione del fatto che restituisce l'URL nel `ftp://moose/dir/file.txt`formato.

## <a name="see-also"></a>Vedere anche

[Classe CFileFind](../../mfc/reference/cfilefind-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md)<br/>
[Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)<br/>
[Classe CGopherFile](../../mfc/reference/cgopherfile-class.md)<br/>
[Classe CHttpFile](../../mfc/reference/chttpfile-class.md)

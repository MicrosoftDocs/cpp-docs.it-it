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
ms.openlocfilehash: 72d1eb147f8d7387a04f25cc008cc4d4638ba691
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50548226"
---
# <a name="cftpfilefind-class"></a>Classe CFtpFileFind

Facilita le ricerche di file su Internet dei server FTP.

## <a name="syntax"></a>Sintassi

```
class CFtpFileFind : public CFileFind
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFtpFileFind::CFtpFileFind](#cftpfilefind)|Costruisce un oggetto `CFtpFileFind`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFtpFileFind:: FindFile](#findfile)|Trova un file in un server FTP.|
|[CFtpFileFind:: FindNextFile](#findnextfile)|Continua la ricerca di file da una chiamata precedente a [FindFile](#findfile).|
|[CFtpFileFind::GetFileURL](#getfileurl)|Ottiene l'URL, incluso il percorso, del file trovato.|

## <a name="remarks"></a>Note

`CFtpFileFind` include funzioni membro che iniziano una ricerca, individuare un file e restituiscono l'URL o altre informazioni descrittive sul file.

Altre classi MFC progettati per eseguire la ricerca di file locale e Internet includono [CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md) e [CFileFind](../../mfc/reference/cfilefind-class.md). Insieme a `CFtpFileFind`, queste classi forniscono un meccanismo semplice per il client trovare il file specifici, indipendentemente dal server di tipo di protocollo o un file (un computer locale o un server remoto). Si noti che non vi sia nessuna classe MFC per la ricerca basata su HTTP (server) poiché HTTP non supporta la manipolazione di file dirette necessaria per le ricerche.

Per altre informazioni su come usare `CFtpFileFind` e le altre classi WinInet, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="example"></a>Esempio

Il codice seguente viene illustrato come enumerare tutti i file nella directory corrente del server FTP.

[!code-cpp[NVC_MFCWinInet#8](../../mfc/codesnippet/cpp/cftpfilefind-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFileFind](../../mfc/reference/cfilefind-class.md)

`CFtpFileFind`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet. h

##  <a name="cftpfilefind"></a>  CFtpFileFind::CFtpFileFind

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
L'identificatore di contesto per il `CFtpFileFind` oggetto. Visualizzare **osservazioni** per altre informazioni su questo parametro.

### <a name="remarks"></a>Note

Il valore predefinito per *dwContext* inviato da MFC per il `CFtpFileFind` dell'oggetto dal [CInternetSession](../../mfc/reference/cinternetsession-class.md) dell'oggetto che ha creato il `CFtpFileFind` oggetto. È possibile sostituire il valore predefinito per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto viene restituito al [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'oggetto con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per altre informazioni sull'identificatore di contesto.

### <a name="example"></a>Esempio

  Vedere l'esempio preliminari sulla classe più indietro in questo argomento.

##  <a name="findfile"></a>  CFtpFileFind:: FindFile

Chiamare questa funzione membro per trovare un file con FTP.

```
virtual BOOL FindFile(
    LPCTSTR pstrName = NULL,
    DWORD dwFlags = INTERNET_FLAG_RELOAD);
```

### <a name="parameters"></a>Parametri

*pstrName*<br/>
Un puntatore a una stringa contenente il nome del file da trovare. Se NULL, la chiamata eseguirà una ricerca con caratteri jolly (*).

*dwFlags*<br/>
Flag che descrivono come gestire questa sessione. Questi flag possono essere combinati con l'operatore OR bit per bit (&#124;) e sono i seguenti:

- INTERNET_FLAG_RELOAD ottenere i dati dalla rete, anche se è in locale viene memorizzato nella cache. Questo è il flag predefinito.

- INTERNET_FLAG_DONT_CACHE nella cache i dati, sia localmente che in tutti i gateway.

- INTERNET_FLAG_RAW_DATA sostituire il valore predefinito per restituire i dati non elaborati ( [WIN32_FIND_DATA](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) strutture per FTP).

- INTERNET_FLAG_SECURE protegge le transazioni in transito con SSL (Secure Sockets Layer) o PCT. Questo flag è applicabile a solo le richieste HTTP.

- INTERNET_FLAG_EXISTING_CONNECT se possibile, riusare le connessioni esistenti nel server per il nuovo `FindFile` richieste invece di crearne una nuova sessione per ogni richiesta.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Per ottenere informazioni sull'errore, chiamare la funzione Win32 [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360).

### <a name="remarks"></a>Note

Dopo avere chiamato `FindFile` per recuperare il primo file FTP, è possibile chiamare [FindNextFile](#findnextfile) per recuperare i file successivi FTP.

### <a name="example"></a>Esempio

  Vedere l'esempio precedente in questo argomento.

##  <a name="findnextfile"></a>  CFtpFileFind:: FindNextFile

Chiamare questa funzione membro per continuare la ricerca di file iniziata con una chiamata ai [FindFile](#findfile) funzione membro.

```
virtual BOOL FindNextFile();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se sono presenti più file; zero se il file è stato trovato è l'ultimo nella directory o se si è verificato un errore. Per ottenere informazioni sull'errore, chiamare la funzione Win32 [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360). Se il file è stato trovato l'ultimo file nella directory o se non corrisponde ad alcuna sono disponibili i file, il `GetLastError` funzione restituisce ERROR_NO_MORE_FILES.

### <a name="remarks"></a>Note

È necessario chiamare questa funzione almeno una volta prima di chiamare qualsiasi funzione di attributo (vedere [CFileFind::FindNextFile](../../mfc/reference/cfilefind-class.md#findnextfile)).

`FindNextFile` esegue il wrapping della funzione Win32 [FindNextFile](/windows/desktop/api/fileapi/nf-fileapi-findnextfilea).

### <a name="example"></a>Esempio

  Vedere l'esempio più indietro in questo argomento.

##  <a name="getfileurl"></a>  CFtpFileFind::GetFileURL

Chiamare questa funzione membro per ottenere l'URL del file specificato.

```
CString GetFileURL() const;
```

### <a name="return-value"></a>Valore restituito

Il file e percorso di Universal Resource Locator (URL).

### <a name="remarks"></a>Note

`GetFileURL` è simile alla funzione membro [CFileFind::GetFilePath](../../mfc/reference/cfilefind-class.md#getfilepath), ad eccezione del fatto che restituisce l'URL nel formato `ftp://moose/dir/file.txt`.

## <a name="see-also"></a>Vedere anche

[Classe CFileFind](../../mfc/reference/cfilefind-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md)<br/>
[Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)<br/>
[Classe CGopherFile](../../mfc/reference/cgopherfile-class.md)<br/>
[Classe CHttpFile](../../mfc/reference/chttpfile-class.md)

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
ms.openlocfilehash: cf4afb4a683c2d0cf5f2977107d02ee300a53cb0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373747"
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
|[Ricerca FileC::CFtpFileFind](#cftpfilefind)|Costruisce un oggetto `CFtpFileFind`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFtpFileFind::FindFile](#findfile)|Trova un file su un server FTP.|
|[FileCFtpFileFind::FindNextFile](#findnextfile)|Continua una ricerca di file da una chiamata precedente a [FindFile](#findfile).|
|[CFtpFileFind::GetFileURL](#getfileurl)|Ottiene l'URL, incluso il percorso, del file trovato.|

## <a name="remarks"></a>Osservazioni

`CFtpFileFind`include funzioni membro che iniziano una ricerca, individuano un file e restituiscono l'URL o altre informazioni descrittive sul file.

Altre classi MFC progettate per Internet e i file locali in cui viene eseguita la ricerca includono [CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md) e [CFileFind](../../mfc/reference/cfilefind-class.md). Insieme `CFtpFileFind`a , queste classi forniscono un meccanismo semplice per il client per trovare file specifici, indipendentemente dal protocollo del server o dal tipo di file (un computer locale o un server remoto). Si noti che non esiste alcuna classe MFC per la ricerca nei server HTTP perché HTTP non supporta la modifica diretta dei file necessaria per le ricerche.

Per ulteriori informazioni sull'utilizzo `CFtpFileFind` e sulle altre classi WinInet, vedere l'articolo [Programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="example"></a>Esempio

Nel codice riportato di seguito viene illustrato come enumerare tutti i file nella directory corrente del server FTP.

[!code-cpp[NVC_MFCWinInet#8](../../mfc/codesnippet/cpp/cftpfilefind-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFileFind](../../mfc/reference/cfilefind-class.md)

`CFtpFileFind`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet.h

## <a name="cftpfilefindcftpfilefind"></a><a name="cftpfilefind"></a>Ricerca FileC::CFtpFileFind

Questa funzione membro viene `CFtpFileFind` chiamata per costruire un oggetto.

```
explicit CFtpFileFind(
    CFtpConnection* pConnection,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*pConnection*<br/>
Puntatore a un oggetto `CFtpConnection`. È possibile ottenere una connessione FTP chiamando [CInternetSession::GetFtpConnection](../../mfc/reference/cinternetsession-class.md#getftpconnection).

*dwContext*<br/>
Identificatore di `CFtpFileFind` contesto per l'oggetto. Per ulteriori informazioni su questo parametro, vedere **Osservazioni.**

### <a name="remarks"></a>Osservazioni

Il valore predefinito per *dwContext* viene `CFtpFileFind` inviato da MFC all'oggetto `CFtpFileFind` dall'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) che ha creato l'oggetto. È possibile eseguire l'override dell'impostazione predefinita per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto viene restituito a [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato sull'oggetto con cui è identificato. Vedere l'articolo [Internet First Steps: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

### <a name="example"></a>Esempio

  Vedere l'esempio nei cenni preliminari sulla classe più indietro in questo argomento.

## <a name="cftpfilefindfindfile"></a><a name="findfile"></a>CFtpFileFind::FindFile

Chiamare questa funzione membro per trovare un file FTP.

```
virtual BOOL FindFile(
    LPCTSTR pstrName = NULL,
    DWORD dwFlags = INTERNET_FLAG_RELOAD);
```

### <a name="parameters"></a>Parametri

*pstrName (nome di database)*<br/>
Puntatore a una stringa contenente il nome del file da trovare. Se NULL, la chiamata eseguirà una ricerca con caratteri jolly (.).

*dwFlags*<br/>
Flag che descrivono come gestire questa sessione. Questi flag possono essere combinati con l'operatore OR bit per bit (&#124;) e sono i seguenti:

- INTERNET_FLAG_RELOAD Ottenere i dati dalla rete anche se è memorizzato nella cache locale. Questo è il flag predefinito.

- INTERNET_FLAG_DONT_CACHE Non memorizzare nella cache i dati, localmente o in alcun gateway.

- INTERNET_FLAG_RAW_DATA Ignora impostazione predefinita per restituire i dati non elaborati [(strutture WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) per FTP).

- INTERNET_FLAG_SECURE protegge le transazioni in transito con Secure Sockets Layer o PCT. Questo flag è applicabile solo alle richieste HTTP.

- INTERNET_FLAG_EXISTING_CONNECT Se possibile, riutilizzare le connessioni `FindFile` esistenti al server per le nuove richieste anziché creare una nuova sessione per ogni richiesta.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Per ottenere informazioni estese sull'errore, chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror).

### <a name="remarks"></a>Osservazioni

Dopo `FindFile` aver chiamato per recuperare il primo file FTP, è possibile chiamare [FindNextFile](#findnextfile) per recuperare i file FTP successivi.

### <a name="example"></a>Esempio

  Vedere l'esempio precedente in questo argomento.

## <a name="cftpfilefindfindnextfile"></a><a name="findnextfile"></a>FileCFtpFileFind::FindNextFile

Chiamare questa funzione membro per continuare una ricerca di file iniziata con una chiamata alla funzione membro [FindFile.Call](#findfile) this member function to continue a file search begun with a call to the FindFile member function.

```
virtual BOOL FindNextFile();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se sono presenti più file; zero se il file trovato è l'ultimo nella directory o se si è verificato un errore. Per ottenere informazioni estese sull'errore, chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror). Se il file trovato è l'ultimo file nella directory o `GetLastError` se non è possibile trovare file corrispondenti, la funzione restituisce ERROR_NO_MORE_FILES.

### <a name="remarks"></a>Osservazioni

È necessario chiamare questa funzione almeno una volta prima di chiamare qualsiasi funzione di attributo (vedere [CFileFind::FindNextFile](../../mfc/reference/cfilefind-class.md#findnextfile)).

`FindNextFile`esegue il wrapping della funzione Win32 [FindNextFile](/windows/win32/api/fileapi/nf-fileapi-findnextfilew).

### <a name="example"></a>Esempio

  Vedere l'esempio precedente in questo argomento.

## <a name="cftpfilefindgetfileurl"></a><a name="getfileurl"></a>CFtpFileFind::GetFileURL

Chiamare questa funzione membro per ottenere l'URL del file specificato.

```
CString GetFileURL() const;
```

### <a name="return-value"></a>Valore restituito

Il file e il percorso dell'URL (Universal Resource Locator).

### <a name="remarks"></a>Osservazioni

`GetFileURL`è simile alla funzione membro [CFileFind::GetFilePath](../../mfc/reference/cfilefind-class.md#getfilepath), con la `ftp://moose/dir/file.txt`differenza che restituisce l'URL nel formato .

## <a name="see-also"></a>Vedere anche

[Classe CFileFind](../../mfc/reference/cfilefind-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md)<br/>
[Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)<br/>
[Classe CGopherFile](../../mfc/reference/cgopherfile-class.md)<br/>
[Classe CHttpFile](../../mfc/reference/chttpfile-class.md)

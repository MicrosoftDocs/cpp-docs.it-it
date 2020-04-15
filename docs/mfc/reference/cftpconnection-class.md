---
title: Classe CFtpConnection
ms.date: 08/29/2019
f1_keywords:
- CFtpConnection
- AFXINET/CFtpConnection
- AFXINET/CFtpConnection::CFtpConnection
- AFXINET/CFtpConnection::Command
- AFXINET/CFtpConnection::CreateDirectory
- AFXINET/CFtpConnection::GetCurrentDirectory
- AFXINET/CFtpConnection::GetCurrentDirectoryAsURL
- AFXINET/CFtpConnection::GetFile
- AFXINET/CFtpConnection::OpenFile
- AFXINET/CFtpConnection::PutFile
- AFXINET/CFtpConnection::Remove
- AFXINET/CFtpConnection::RemoveDirectory
- AFXINET/CFtpConnection::Rename
- AFXINET/CFtpConnection::SetCurrentDirectory
helpviewer_keywords:
- CFtpConnection [MFC], CFtpConnection
- CFtpConnection [MFC], Command
- CFtpConnection [MFC], CreateDirectory
- CFtpConnection [MFC], GetCurrentDirectory
- CFtpConnection [MFC], GetCurrentDirectoryAsURL
- CFtpConnection [MFC], GetFile
- CFtpConnection [MFC], OpenFile
- CFtpConnection [MFC], PutFile
- CFtpConnection [MFC], Remove
- CFtpConnection [MFC], RemoveDirectory
- CFtpConnection [MFC], Rename
- CFtpConnection [MFC], SetCurrentDirectory
ms.assetid: 5e3a0501-8893-49cf-a3d5-0628d8d6b936
ms.openlocfilehash: a1fe516869aa98cc291597211eee175ef591e45d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373769"
---
# <a name="cftpconnection-class"></a>Classe CFtpConnection

Gestisce la connessione FTP a un server Internet e consente la manipolazione diretta di directory e file su tale server.

## <a name="syntax"></a>Sintassi

```
class CFtpConnection : public CInternetConnection
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFtpConnection::CFtpConnection](#cftpconnection)|Costruisce un oggetto `CFtpConnection`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFtpConnection::Comando](#command)|Invia un comando direttamente a un server FTP.|
|[CFtpConnection::CreateDirectory](#createdirectory)|Crea una directory sul server.|
|[CFtpConnection::GetCurrentDirectory](#getcurrentdirectory)|Ottiene la directory corrente per questa connessione.|
|[CFtpConnection::GetCurrentDirectoryAsURL](#getcurrentdirectoryasurl)|Ottiene la directory corrente per questa connessione come URL.|
|[CFtpConnection::GetFile](#getfile)|Ottiene un file dal server connesso|
|[CFtpConnection::OpenFile](#openfile)|Apre un file sul server connesso.|
|[CFtpConnection::PutFile](#putfile)|Inserisce un file sul server.|
|[CFtpConnection::Rimuovi](#remove)|Rimuove un file dal server.|
|[CFtpConnection::RemoveDirectory](#removedirectory)|Rimuove la directory specificata dal server.|
|[CFtpConnection::Rinomina](#rename)|Rinomina un file sul server.|
|[CFtpConnection::SetCurrentDirectory](#setcurrentdirectory)|Imposta la directory FTP corrente.|

## <a name="remarks"></a>Osservazioni

FTP è uno dei tre servizi Internet riconosciuti dalle classi WinInet MFC.

Per comunicare con un server Internet FTP, è innanzitutto necessario creare `CFtpConnection` un'istanza di [CInternetSession](../../mfc/reference/cinternetsession-class.md), quindi creare un oggetto . Non si `CFtpConnection` crea mai direttamente un oggetto; chiamare invece [CInternetSession::GetFtpConnection](../../mfc/reference/cinternetsession-class.md#getftpconnection), `CFtpConnection` che crea l'oggetto e restituisce un puntatore a esso .

Per ulteriori informazioni `CFtpConnection` sul funzionamento con le altre classi Internet MFC, vedere l'articolo [Programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md). Per ulteriori informazioni sulla comunicazione con gli altri due servizi supportati, HTTP e gopher, vedere le classi [CHttpConnection](../../mfc/reference/chttpconnection-class.md) e [CGopherConnection](../../mfc/reference/cgopherconnection-class.md).

## <a name="example"></a>Esempio

  Vedere l'esempio nella panoramica della classe [CFtpFileFind.See](../../mfc/reference/cftpfilefind-class.md) the example in the CFtpFileFind class overview.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CInternetConnection](../../mfc/reference/cinternetconnection-class.md)

`CFtpConnection`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet.h

## <a name="cftpconnectioncftpconnection"></a><a name="cftpconnection"></a>CFtpConnection::CFtpConnection

Questa funzione membro viene `CFtpConnection` chiamata per costruire un oggetto.

```
CFtpConnection(
    CInternetSession* pSession,
    HINTERNET hConnected,
    LPCTSTR pstrServer,
    DWORD_PTR dwContext);

CFtpConnection(
    CInternetSession* pSession,
    LPCTSTR pstrServer,
    LPCTSTR pstrUserName = NULL,
    LPCTSTR pstrPassword = NULL,
    DWORD_PTR dwContext = 0,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,
    BOOL bPassive = FALSE);
```

### <a name="parameters"></a>Parametri

*pSessione*<br/>
Puntatore all'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) correlato.

*hCollegato*<br/>
Handle di Windows della sessione Internet corrente.

*pstrServer (informazioni in base al server utente)*<br/>
Puntatore a una stringa contenente il nome del server FTP.

*dwContext*<br/>
Identificatore di contesto per l'operazione. *dwContext* identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback). Il valore predefinito è 1; Tuttavia, è possibile assegnare in modo esplicito un ID di contesto specifico per l'operazione. L'oggetto e le operazioni eseguite verranno associati a tale ID di contesto.

*pstrUserName (nome di applicazione)*<br/>
Puntatore a una stringa con terminazione null che specifica il nome dell'utente per l'accesso. Se NULL, il valore predefinito è anonimo.

*pstrPassword (informazioni in base alla proprietà di un*<br/>
Puntatore a una stringa con terminazione null che specifica la password da utilizzare per l'accesso. Se sia *pstrPassword* che *pstrUserName* sono NULL, la password anonima predefinita è il nome di posta elettronica dell'utente. Se *pstrPassword* è NULL (o una stringa vuota) ma *pstrUserName* non è NULL, viene utilizzata una password vuota. Nella tabella seguente viene descritto il comportamento per le quattro possibili impostazioni di *pstrUserName* e *pstrPassword*:

|*pstrUserName (nome di applicazione)*|*pstrPassword (informazioni in base alla proprietà di un*|Nome utente inviato al server FTP|Password inviata al server FTP|
|--------------------|--------------------|---------------------------------|---------------------------------|
|NULL o " "|NULL o " "|"anonimo"|Nome e-mail dell'utente|
|Stringa non NULL|NULL o " "|*pstrUserName (nome di applicazione)*|" "|
|Stringa NULL non NULL|ERRORE|ERRORE||
|Stringa non NULL|Stringa non NULL|*pstrUserName (nome di applicazione)*|*pstrPassword (informazioni in base alla proprietà di un*|

*nPorta*<br/>
Numero che identifica la porta TCP/IP da utilizzare sul server.

*bPassivo*<br/>
Specifica la modalità passiva o attiva per questa sessione FTP. Se impostato su TRUE, imposta l'API *Win32 dwFlag su* INTERNET_FLAG_PASSIVE.

### <a name="remarks"></a>Osservazioni

Non si `CFtpConnection` crea mai direttamente un oggetto. Chiamare invece [CInternetSession::GetFtpConnection](../../mfc/reference/cinternetsession-class.md#getftpconnection), `CFptConnection` che crea l'oggetto .

## <a name="cftpconnectioncommand"></a><a name="command"></a>CFtpConnection::Comando

Invia un comando direttamente a un server FTP.

```
CInternetFile* Command(
    LPCTSTR pszCommand,
    CmdResponseType eResponse = CmdRespNone,
    DWORD dwFlags = FTP_TRANSFER_TYPE_BINARY,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*pszCommand (comando pszCommand)*<br/>
Puntatore a una stringa contenente il comando da inviare.

*eResponse*<br/>
Specifica se è prevista una risposta dal server FTP. I possibili valori sono i seguenti:

- `CmdRespNone`Non è prevista alcuna risposta.
- `CmdRespRead`È prevista una risposta.
- `CmdRespWrite`Non utilizzato.

CmdResponseType è un membro di CFtpConnection, definito in *afxinet.h*.

*dwFlags*<br/>
Valore contenente i flag che controllano questa funzione. Per un elenco completo, vedere [FTPCommand](/windows/win32/api/wininet/nf-wininet-ftpcommandw).

*dwContext*<br/>
Puntatore a un valore contenente un valore definito dall'applicazione usato per identificare il contesto dell'applicazione nei callback.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità della funzione [FTPCommand,](/windows/win32/api/wininet/nf-wininet-ftpcommandw) come descritto in Windows SDK.

Se si verifica un errore, MFC genera un'eccezione di tipo [CInternetException](../../mfc/reference/cinternetexception-class.md).

## <a name="cftpconnectioncreatedirectory"></a><a name="createdirectory"></a>CFtpConnection::CreateDirectory

Chiamare questa funzione membro per creare una directory sul server connesso.

```
BOOL CreateDirectory(LPCTSTR pstrDirName);
```

### <a name="parameters"></a>Parametri

*pstrDirName (nome di pstrDir)*<br/>
Puntatore a una stringa contenente il nome della directory da creare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione di Windows [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) può essere chiamata per determinare la causa dell'errore.

### <a name="remarks"></a>Osservazioni

Utilizzare `GetCurrentDirectory` per determinare la directory di lavoro corrente per questa connessione al server. Non presupporre che il sistema remoto sia connesso alla directory radice.

Il `pstrDirName` parametro può essere un nome file parzialmente o completo relativo alla directory corrente. È possibile\\utilizzare una barra rovesciata () o una barra (/) come separatore di directory per entrambi i nomi. `CreateDirectory`converte i separatori dei nomi di directory nei caratteri appropriati prima che vengano utilizzati.

## <a name="cftpconnectiongetcurrentdirectory"></a><a name="getcurrentdirectory"></a>CFtpConnection::GetCurrentDirectory

Chiamare questa funzione membro per ottenere il nome della directory corrente.

```
BOOL GetCurrentDirectory(CString& strDirName) const;

BOOL GetCurrentDirectory(
    LPTSTR pstrDirName,
    LPDWORD lpdwLen) const;
```

### <a name="parameters"></a>Parametri

*strDirName (nome di dominio)*<br/>
Un riferimento a una stringa che riceverà il nome della directory.

*pstrDirName (nome di pstrDir)*<br/>
Puntatore a una stringa che riceverà il nome della directory.

*lpdwLen*<br/>
Puntatore a un DWORD che contiene le seguenti informazioni:

|||
|-|-|
|All'ingresso|Dimensione del buffer a cui fa riferimento *pstrDirName*.|
|Al ritorno|Numero di caratteri archiviati in *pstrDirName*. Se la funzione membro ha esito negativo e ERROR_INSUFFICIENT_BUFFER viene restituito, *lpdwLen* contiene il numero di byte che l'applicazione deve allocare per ricevere la stringa.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) può essere chiamata per determinare la causa dell'errore.

### <a name="remarks"></a>Osservazioni

Per ottenere il nome della directory come URL, chiamare [GetCurrentDirectoryAsURL](#getcurrentdirectoryasurl).

I parametri *pstrDirName* o *strDirName* possono essere nomi di file parzialmente qualificati relativi alla directory corrente o completi. È possibile\\utilizzare una barra rovesciata () o una barra (/) come separatore di directory per entrambi i nomi. `GetCurrentDirectory`converte i separatori dei nomi di directory nei caratteri appropriati prima che vengano utilizzati.

## <a name="cftpconnectiongetcurrentdirectoryasurl"></a><a name="getcurrentdirectoryasurl"></a>CFtpConnection::GetCurrentDirectoryAsURL

Chiamare questa funzione membro per ottenere il nome della directory corrente come URL.

```
BOOL GetCurrentDirectoryAsURL(CString& strDirName) const;

BOOL GetCurrentDirectoryAsURL(
    LPTSTR pstrName,
    LPDWORD lpdwLen) const;
```

### <a name="parameters"></a>Parametri

*strDirName (nome di dominio)*<br/>
Un riferimento a una stringa che riceverà il nome della directory.

*pstrDirName (nome di pstrDir)*<br/>
Puntatore a una stringa che riceverà il nome della directory.

*lpdwLen*<br/>
Puntatore a un DWORD che contiene le seguenti informazioni:

|||
|-|-|
|All'ingresso|Dimensione del buffer a cui fa riferimento *pstrDirName*.|
|Al ritorno|Numero di caratteri archiviati in *pstrDirName*. Se la funzione membro ha esito negativo e ERROR_INSUFFICIENT_BUFFER viene restituito, *lpdwLen* contiene il numero di byte che l'applicazione deve allocare per ricevere la stringa.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) può essere chiamata per determinare la causa dell'errore.

### <a name="remarks"></a>Osservazioni

`GetCurrentDirectoryAsURL`si comporta come [GetCurrentDirectory](#getcurrentdirectory)

Il parametro *strDirName* può essere un nome di file parzialmente qualificato relativo alla directory corrente o completo. È possibile\\utilizzare una barra rovesciata () o una barra (/) come separatore di directory per entrambi i nomi. `GetCurrentDirectoryAsURL`converte i separatori dei nomi di directory nei caratteri appropriati prima che vengano utilizzati.

## <a name="cftpconnectiongetfile"></a><a name="getfile"></a>CFtpConnection::GetFile

Chiamare questa funzione membro per ottenere un file da un server FTP e archiviarlo nel computer locale.

```
BOOL GetFile(
    LPCTSTR pstrRemoteFile,
    LPCTSTR pstrLocalFile,
    BOOL bFailIfExists = TRUE,
    DWORD dwAttributes = FILE_ATTRIBUTE_NORMAL,
    DWORD dwFlags = FTP_TRANSFER_TYPE_BINARY,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*pstrRemoteFile (file pstr*<br/>
Puntatore a una stringa con terminazione null contenente il nome di un file da recuperare dal server FTP.

*pstrLocalFile (file pstrLocalFile)*<br/>
Puntatore a una stringa con terminazione null contenente il nome del file da creare nel sistema locale.

*bFailIfExists (Exists)*<br/>
Indica se il nome del file può essere già utilizzato da un file esistente. Se il nome file locale esiste già `GetFile` e questo parametro è TRUE, ha esito negativo. In `GetFile` caso contrario, cancellerà la copia esistente del file.

*dwAttributi*<br/>
Indica gli attributi del file. Può trattarsi di qualsiasi combinazione dei seguenti flag FILE_ATTRIBUTE_.

- FILE_ATTRIBUTE_ARCHIVE Il file è un file di archivio. Le applicazioni utilizzano questo attributo per contrassegnare i file per il backup o la rimozione.

- FILE_ATTRIBUTE_COMPRESSED Il file o la directory è compresso. Per un file, la compressione indica che tutti i dati nel file sono compressi. Per una directory, la compressione è l'impostazione predefinita per i file e le sottodirectory appena creati.

- FILE_ATTRIBUTE_DIRECTORY Il file è una directory.

- FILE_ATTRIBUTE_NORMAL Il file non dispone di altri attributi impostati. Questo attributo è valido solo se utilizzato da solo. Tutti gli altri attributi di file eseguono l'override FILE_ATTRIBUTE_NORMAL:

- FILE_ATTRIBUTE_HIDDEN Il file è nascosto. Non deve essere incluso in un elenco di directory ordinario.

- FILE_ATTRIBUTE_READONLY Il file è di sola lettura. Le applicazioni possono leggere il file ma non possono scrivervi o eliminarlo.

- FILE_ATTRIBUTE_SYSTEM Il file fa parte o viene utilizzato esclusivamente dal sistema operativo.

- FILE_ATTRIBUTE_TEMPORARY Il file viene utilizzato per l'archiviazione temporanea. Le applicazioni devono scrivere nel file solo se assolutamente necessario. La maggior parte dei dati del file rimane in memoria senza essere scaricata sul supporto perché il file verrà presto eliminato.

*dwFlags*<br/>
Specifica le condizioni in cui si verifica il trasferimento. Questo parametro può essere uno qualsiasi dei valori *dwFlags* descritti in [FtpGetFile](/windows/win32/api/wininet/nf-wininet-ftpgetfilew) in Windows SDK.

*dwContext*<br/>
Identificatore di contesto per il recupero del file. Vedere **Osservazioni** per ulteriori informazioni su *dwContext*.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) può essere chiamata per determinare la causa dell'errore.

### <a name="remarks"></a>Osservazioni

`GetFile`è una routine di alto livello che gestisce tutto l'overhead associato alla lettura di un file da un server FTP e all'archiviazione in locale. Le applicazioni che recuperano solo i dati dei file `OpenFile` o che richiedono uno stretto controllo sul trasferimento di file devono utilizzare e [CInternetFile::Read](../../mfc/reference/cinternetfile-class.md#read) invece.

Se *dwFlags* è FILE_TRANSFER_TYPE_ASCII, la conversione dei dati del file converte anche i caratteri di controllo e formattazione in equivalenti di Windows. Il trasferimento predefinito è la modalità binaria, in cui il file viene scaricato nello stesso formato in cui è memorizzato sul server.

Sia *pstrRemoteFile che* *pstrLocalFile* possono essere nomi di file parzialmente qualificati relativi alla directory corrente o completi. È possibile\\utilizzare una barra rovesciata () o una barra (/) come separatore di directory per entrambi i nomi. `GetFile`converte i separatori dei nomi di directory nei caratteri appropriati prima che vengano utilizzati.

Eseguire l'override di *dwContext* predefinito per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto è `CFtpConnection` associato a questa operazione specifica dell'oggetto creato dal relativo [oggetto CInternetSession.](../../mfc/reference/cinternetsession-class.md) Il valore viene restituito a [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui viene identificato. Vedere l'articolo [Internet First Steps: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

## <a name="cftpconnectionopenfile"></a><a name="openfile"></a>CFtpConnection::OpenFile

Chiamare questa funzione membro per aprire un file che si trova su un server FTP per la lettura o la scrittura.

```
CInternetFile* OpenFile(
    LPCTSTR pstrFileName,
    DWORD dwAccess = GENERIC_READ,
    DWORD dwFlags = FTP_TRANSFER_TYPE_BINARY,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*pstrNomeFile*<br/>
Puntatore a una stringa contenente il nome del file da aprire.

*dwAccess (accesso dwAccess)*<br/>
Determina la modalità di accesso al file. Può essere GENERIC_READ o GENERIC_WRITE, ma non entrambi.

*dwFlags*<br/>
Specifica le condizioni in cui si verificano i trasferimenti successivi. Può trattarsi di una delle seguenti costanti di FTP_TRANSFER_:

- FTP_TRANSFER_TYPE_ASCII Il metodo di trasferimento del file tramite FTP ASCII (tipo A). Converte le informazioni di controllo e formattazione in equivalenti locali.

- FTP_TRANSFER_TYPE_BINARY Il file trasferisce i dati utilizzando il metodo di trasferimento Immagine (Tipo I) di FTP. Il file trasferisce i dati esattamente come esistono, senza modifiche. Questo è il metodo di trasferimento predefinito.

*dwContext*<br/>
Identificatore di contesto per l'apertura del file. Vedere **Osservazioni** per ulteriori informazioni su *dwContext*.

### <a name="return-value"></a>Valore restituito

Puntatore a un [CInternetFile](../../mfc/reference/cinternetfile-class.md) oggetto.

### <a name="remarks"></a>Osservazioni

`OpenFile`deve essere utilizzato nelle seguenti situazioni:

- Un'applicazione contiene dati che devono essere inviati e creati come file sul server FTP, ma tali dati non si trovano in un file locale. Una `OpenFile` volta aperto un file, l'applicazione utilizza [CInternetFile::Write](../../mfc/reference/cinternetfile-class.md#write) per inviare i dati del file FTP al server.

- Un'applicazione deve recuperare un file dal server e inserirlo nella memoria controllata dall'applicazione, anziché scriverlo su disco. L'applicazione utilizza [CInternetFile::Read](../../mfc/reference/cinternetfile-class.md#read) dopo aver utilizzato `OpenFile` per aprire il file.

- Un'applicazione richiede un ottimo livello di controllo su un trasferimento di file. Ad esempio, l'applicazione potrebbe voler visualizzare un controllo di stato indicare lo stato di avanzamento dello stato di trasferimento di file durante il download di un file.

Dopo `OpenFile` la chiamata `CInternetConnection::Close`e fino alla chiamata , l'applicazione può chiamare solo `CInternetConnection::Close` [CInternetFile::Read](../../mfc/reference/cinternetfile-class.md#read), [CInternetFile::Write](../../mfc/reference/cinternetfile-class.md#write), o [CFtpFileFind::FindFile](../../mfc/reference/cftpfilefind-class.md#findfile). Le chiamate ad altre funzioni FTP per la stessa sessione FTP avranno esito negativo e impostare il codice di errore su FTP_ETRANSFER_IN_PROGRESS.

Il parametro *pstrFileName* può essere un nome file parzialmente qualificato relativo alla directory corrente o completo. È possibile\\utilizzare una barra rovesciata () o una barra (/) come separatore di directory per entrambi i nomi. `OpenFile`converte i separatori dei nomi di directory nei caratteri appropriati prima di utilizzarlo.

Eseguire l'override di *dwContext* predefinito per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto è `CFtpConnection` associato a questa operazione specifica dell'oggetto creato dal relativo [oggetto CInternetSession.](../../mfc/reference/cinternetsession-class.md) Il valore viene restituito a [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui viene identificato. Vedere l'articolo [Internet First Steps: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

## <a name="cftpconnectionputfile"></a><a name="putfile"></a>CFtpConnection::PutFile

Chiamare questa funzione membro per archiviare un file su un server FTP.

```
BOOL PutFile(
    LPCTSTR pstrLocalFile,
    LPCTSTR pstrRemoteFile,
    DWORD dwFlags = FTP_TRANSFER_TYPE_BINARY,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*pstrLocalFile (file pstrLocalFile)*<br/>
Puntatore a una stringa contenente il nome del file da inviare dal sistema locale.

*pstrRemoteFile (file pstr*<br/>
Puntatore a una stringa contenente il nome del file da creare sul server FTP.

*dwFlags*<br/>
Specifica le condizioni in cui avviene il trasferimento del file. Può essere una delle costanti FTP_TRANSFER_ , descritte in [OpenFile](#openfile).

*dwContext*<br/>
Identificatore di contesto per l'inserimento del file. Vedere **Osservazioni** per ulteriori informazioni su *dwContext*.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) può essere chiamata per determinare la causa dell'errore.

### <a name="remarks"></a>Osservazioni

`PutFile`è una routine di alto livello che gestisce tutte le operazioni associate all'archiviazione di un file su un server FTP. Le applicazioni che inviano solo dati o che richiedono un maggiore controllo sul trasferimento di file devono utilizzare [OpenFile](#openfile) e [CInternetFile::Write](../../mfc/reference/cinternetfile-class.md#write).

Esegue l'override dell'impostazione predefinita `dwContext` per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto è `CFtpConnection` associato a questa operazione specifica dell'oggetto creato dal relativo [oggetto CInternetSession.](../../mfc/reference/cinternetsession-class.md) Il valore viene restituito a [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui viene identificato. Vedere l'articolo [Internet First Steps: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

## <a name="cftpconnectionremove"></a><a name="remove"></a>CFtpConnection::Rimuovi

Chiamare questa funzione membro per eliminare il file specificato dal server connesso.

```
BOOL Remove(LPCTSTR pstrFileName);
```

### <a name="parameters"></a>Parametri

*pstrNomeFile*<br/>
Puntatore a una stringa contenente il nome del file da rimuovere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) può essere chiamata per determinare la causa dell'errore.

### <a name="remarks"></a>Osservazioni

Il parametro *pstrFileName* può essere un nome file parzialmente qualificato relativo alla directory corrente o completo. È possibile\\utilizzare una barra rovesciata () o una barra (/) come separatore di directory per entrambi i nomi. La `Remove` funzione converte i separatori dei nomi di directory nei caratteri appropriati prima che vengano utilizzati.

## <a name="cftpconnectionremovedirectory"></a><a name="removedirectory"></a>CFtpConnection::RemoveDirectory

Chiamare questa funzione membro per rimuovere la directory specificata dal server connesso.

```
BOOL RemoveDirectory(LPCTSTR pstrDirName);
```

### <a name="parameters"></a>Parametri

*pstrDirName (nome di pstrDir)*<br/>
Puntatore a una stringa contenente la directory da rimuovere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) può essere chiamata per determinare la causa dell'errore.

### <a name="remarks"></a>Osservazioni

Utilizzare [GetCurrentDirectory](#getcurrentdirectory) per determinare la directory di lavoro corrente del server. Non presupporre che il sistema remoto sia connesso alla directory radice.

Il parametro *pstrDirName* può essere un nome file parzialmente o completo relativo alla directory corrente. È possibile\\utilizzare una barra rovesciata () o una barra (/) come separatore di directory per entrambi i nomi. `RemoveDirectory`converte i separatori dei nomi di directory nei caratteri appropriati prima che vengano utilizzati.

## <a name="cftpconnectionrename"></a><a name="rename"></a>CFtpConnection::Rinomina

Chiamare questa funzione membro per rinominare il file specificato sul server connesso.

```
BOOL Rename(
    LPCTSTR pstrExisting,
    LPCTSTR pstrNew);
```

### <a name="parameters"></a>Parametri

*pstrEsistente*<br/>
Puntatore a una stringa contenente il nome corrente del file da rinominare.

*pstrNuovo*<br/>
Puntatore a una stringa contenente il nuovo nome del file.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) può essere chiamata per determinare la causa dell'errore.

### <a name="remarks"></a>Osservazioni

I parametri *pstrExisting* e *pstrNew* possono essere un nome file parzialmente qualificato relativo alla directory corrente o completo. È possibile\\utilizzare una barra rovesciata () o una barra (/) come separatore di directory per entrambi i nomi. `Rename`converte i separatori dei nomi di directory nei caratteri appropriati prima che vengano utilizzati.

## <a name="cftpconnectionsetcurrentdirectory"></a><a name="setcurrentdirectory"></a>CFtpConnection::SetCurrentDirectory

Chiamare questa funzione membro per passare a una directory diversa sul server FTP.

```
BOOL SetCurrentDirectory(LPCTSTR pstrDirName);
```

### <a name="parameters"></a>Parametri

*pstrDirName (nome di pstrDir)*<br/>
Puntatore a una stringa contenente il nome della directory.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) può essere chiamata per determinare la causa dell'errore.

### <a name="remarks"></a>Osservazioni

Il parametro *pstrDirName* può essere un nome file parzialmente o completo relativo alla directory corrente. È possibile\\utilizzare una barra rovesciata () o una barra (/) come separatore di directory per entrambi i nomi. `SetCurrentDirectory`converte i separatori dei nomi di directory nei caratteri appropriati prima che vengano utilizzati.

Utilizzare [GetCurrentDirectory](#getcurrentdirectory) per determinare la directory di lavoro corrente di un server FTP. Non presupporre che il sistema remoto sia connesso alla directory radice.

## <a name="see-also"></a>Vedere anche

[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Classe CInternetSession](../../mfc/reference/cinternetsession-class.md)

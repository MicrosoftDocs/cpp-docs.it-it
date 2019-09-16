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
ms.openlocfilehash: 94ee4cb938ee061470282eb2f08a94d83c908805
ms.sourcegitcommit: e10a5feea193c249ddc5a6faba48e7c6d8784e73
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/30/2019
ms.locfileid: "70177276"
---
# <a name="cftpconnection-class"></a>Classe CFtpConnection

Gestisce la connessione FTP a un server Internet e consente la modifica diretta delle directory e dei file in tale server.

## <a name="syntax"></a>Sintassi

```
class CFtpConnection : public CInternetConnection
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CFtpConnection::CFtpConnection](#cftpconnection)|Costruisce un oggetto `CFtpConnection`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Comando CFtpConnection::](#command)|Invia un comando direttamente a un server FTP.|
|[CFtpConnection::CreateDirectory](#createdirectory)|Crea una directory nel server.|
|[CFtpConnection:: GetCurrentDirectory](#getcurrentdirectory)|Ottiene la directory corrente per questa connessione.|
|[CFtpConnection:: GetCurrentDirectoryAsURL](#getcurrentdirectoryasurl)|Ottiene la directory corrente per questa connessione come URL.|
|[CFtpConnection::GetFile](#getfile)|Ottiene un file dal server connesso|
|[CFtpConnection:: OpenFile](#openfile)|Apre un file nel server connesso.|
|[CFtpConnection::PutFile](#putfile)|Inserisce un file nel server.|
|[CFtpConnection::Remove](#remove)|Rimuove un file dal server.|
|[CFtpConnection::RemoveDirectory](#removedirectory)|Rimuove la directory specificata dal server.|
|[CFtpConnection:: Rename](#rename)|Rinomina un file nel server.|
|[CFtpConnection::SetCurrentDirectory](#setcurrentdirectory)|Imposta la directory FTP corrente.|

## <a name="remarks"></a>Note

FTP è uno dei tre servizi Internet riconosciuti dalle classi WinInet di MFC.

Per comunicare con un server Internet FTP, è innanzitutto necessario creare un'istanza di [CInternetSession](../../mfc/reference/cinternetsession-class.md), quindi creare un `CFtpConnection` oggetto. Non si crea mai `CFtpConnection` direttamente un oggetto, ma si chiama [CInternetSession:: GetFtpConnection](../../mfc/reference/cinternetsession-class.md#getftpconnection), che crea `CFtpConnection` l'oggetto e restituisce un puntatore a tale oggetto.

Per ulteriori informazioni sul `CFtpConnection` funzionamento con le altre classi Internet MFC, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md). Per ulteriori informazioni sulla comunicazione con gli altri due servizi supportati, HTTP e gopher, vedere le classi [CHttpConnection](../../mfc/reference/chttpconnection-class.md) e [CGopherConnection](../../mfc/reference/cgopherconnection-class.md).

## <a name="example"></a>Esempio

  Vedere l'esempio nella panoramica della classe [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md) .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CInternetConnection](../../mfc/reference/cinternetconnection-class.md)

`CFtpConnection`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXINET. h

##  <a name="cftpconnection"></a>CFtpConnection:: CFtpConnection

Questa funzione membro viene chiamata per costruire un `CFtpConnection` oggetto.

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

*pSession*<br/>
Puntatore all'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) correlato.

*hConnected*<br/>
Handle di Windows della sessione Internet corrente.

*pstrServer*<br/>
Puntatore a una stringa che contiene il nome del server FTP.

*dwContext*<br/>
Identificatore di contesto per l'operazione. *dwContext* identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback). Il valore predefinito è 1. Tuttavia, è possibile assegnare in modo esplicito un ID contesto specifico per l'operazione. L'oggetto e tutte le operazioni che verranno associate a tale ID di contesto.

*pstrUserName*<br/>
Puntatore a una stringa con terminazione null che specifica il nome dell'utente a cui accedere. Se NULL, il valore predefinito è anonimo.

*pstrPassword*<br/>
Puntatore a una stringa con terminazione null che specifica la password da utilizzare per l'accesso. Se *pstrPassword* e *PSTRUSERNAME* sono entrambi null, la password anonima predefinita corrisponde al nome di posta elettronica dell'utente. Se *pstrPassword* è null (o una stringa vuota) ma *PSTRUSERNAME* non è null, viene utilizzata una password vuota. La tabella seguente descrive il comportamento per le quattro impostazioni possibili di *pstrUserName* e *pstrPassword*:

|*pstrUserName*|*pstrPassword*|Nome utente inviato al server FTP|Password inviata al server FTP|
|--------------------|--------------------|---------------------------------|---------------------------------|
|NULL o ""|NULL o ""|Anonimo|Nome di posta elettronica dell'utente|
|Stringa non NULL|NULL o ""|*pstrUserName*|" "|
|Stringa NULL non NULL|ERROR|ERROR||
|Stringa non NULL|Stringa non NULL|*pstrUserName*|*pstrPassword*|

*nPort*<br/>
Numero che identifica la porta TCP/IP da utilizzare nel server.

*bPassive*<br/>
Specifica la modalità passiva o attiva per questa sessione FTP. Se impostato su TRUE, imposta l'API Win32 *dwFlag* su INTERNET_FLAG_PASSIVE.

### <a name="remarks"></a>Note

Non è mai possibile `CFtpConnection` creare direttamente un oggetto. Chiamare invece [CInternetSession:: GetFtpConnection](../../mfc/reference/cinternetsession-class.md#getftpconnection), che consente di creare `CFptConnection` l'oggetto.

##  <a name="command"></a>Comando CFtpConnection::

Invia un comando direttamente a un server FTP.

```
CInternetFile* Command(
    LPCTSTR pszCommand,
    CmdResponseType eResponse = CmdRespNone,
    DWORD dwFlags = FTP_TRANSFER_TYPE_BINARY,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*pszCommand*<br/>
Puntatore a una stringa contenente il comando da inviare.

*eResponse*<br/>
Specifica se è prevista una risposta dal server FTP. Il valore può essere uno dei seguenti:

- `CmdRespNone`Non è prevista alcuna risposta.
- `CmdRespRead`È prevista una risposta.
- `CmdRespWrite`Non utilizzato.

CmdResponseType è un membro di CFtpConnection, definito in *AFXINET. h*.

*dwFlags*<br/>
Valore contenente i flag che controllano questa funzione. Per un elenco completo, vedere [FtpCommand](/windows/win32/api/wininet/nf-wininet-ftpcommandw).

*dwContext*<br/>
Puntatore a un valore contenente un valore definito dall'applicazione usato per identificare il contesto dell'applicazione nei callback.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro emula la funzionalità della funzione [FtpCommand](/windows/win32/api/wininet/nf-wininet-ftpcommandw) , come descritto nell'Windows SDK.

Se si verifica un errore, MFC genera un'eccezione di tipo [CInternetException](../../mfc/reference/cinternetexception-class.md).

##  <a name="createdirectory"></a>  CFtpConnection::CreateDirectory

Chiamare questa funzione membro per creare una directory nel server connesso.

```
BOOL CreateDirectory(LPCTSTR pstrDirName);
```

### <a name="parameters"></a>Parametri

*pstrDirName*<br/>
Puntatore a una stringa che contiene il nome della directory da creare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, è possibile chiamare la funzione di Windows [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la cause dell'errore.

### <a name="remarks"></a>Note

Usare `GetCurrentDirectory` per determinare la directory di lavoro corrente per questa connessione al server. Non presupporre che il sistema remoto sia connesso alla directory radice.

Il `pstrDirName` parametro può essere un nome di file parzialmente o completo relativo alla directory corrente. Una barra rovesciata (\\) o una barra (/) può essere utilizzata come separatore di directory per entrambi i nomi. `CreateDirectory`converte i separatori dei nomi di directory nei caratteri appropriati prima di utilizzarli.

##  <a name="getcurrentdirectory"></a>CFtpConnection:: GetCurrentDirectory

Chiamare questa funzione membro per ottenere il nome della directory corrente.

```
BOOL GetCurrentDirectory(CString& strDirName) const;

BOOL GetCurrentDirectory(
    LPTSTR pstrDirName,
    LPDWORD lpdwLen) const;
```

### <a name="parameters"></a>Parametri

*strDirName*<br/>
Riferimento a una stringa che riceverà il nome della directory.

*pstrDirName*<br/>
Puntatore a una stringa che riceverà il nome della directory.

*lpdwLen*<br/>
Puntatore a un valore DWORD che contiene le informazioni seguenti:

|||
|-|-|
|All'immissione|Dimensioni del buffer a cui fa riferimento *pstrDirName*.|
|Al ritorno|Numero di caratteri archiviati in *pstrDirName*. Se la funzione membro ha esito negativo e viene restituito ERROR_INSUFFICIENT_BUFFER, *lpdwLen* contiene il numero di byte che l'applicazione deve allocare per poter ricevere la stringa.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, è possibile chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la cause dell'errore.

### <a name="remarks"></a>Note

Per ottenere invece il nome di directory come URL, chiamare [GetCurrentDirectoryAsURL](#getcurrentdirectoryasurl).

I parametri *pstrDirName* o *strDirName* possono essere nomi file parzialmente qualificati rispetto alla directory corrente o completi. Una barra rovesciata (\\) o una barra (/) può essere utilizzata come separatore di directory per entrambi i nomi. `GetCurrentDirectory`converte i separatori dei nomi di directory nei caratteri appropriati prima di utilizzarli.

##  <a name="getcurrentdirectoryasurl"></a>CFtpConnection:: GetCurrentDirectoryAsURL

Chiamare questa funzione membro per ottenere il nome della directory corrente come URL.

```
BOOL GetCurrentDirectoryAsURL(CString& strDirName) const;

BOOL GetCurrentDirectoryAsURL(
    LPTSTR pstrName,
    LPDWORD lpdwLen) const;
```

### <a name="parameters"></a>Parametri

*strDirName*<br/>
Riferimento a una stringa che riceverà il nome della directory.

*pstrDirName*<br/>
Puntatore a una stringa che riceverà il nome della directory.

*lpdwLen*<br/>
Puntatore a un valore DWORD che contiene le informazioni seguenti:

|||
|-|-|
|All'immissione|Dimensioni del buffer a cui fa riferimento *pstrDirName*.|
|Al ritorno|Numero di caratteri archiviati in *pstrDirName*. Se la funzione membro ha esito negativo e viene restituito ERROR_INSUFFICIENT_BUFFER, *lpdwLen* contiene il numero di byte che l'applicazione deve allocare per poter ricevere la stringa.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, è possibile chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la cause dell'errore.

### <a name="remarks"></a>Note

`GetCurrentDirectoryAsURL`si comporta allo stesso modo di [GetCurrentDirectory](#getcurrentdirectory)

Il parametro *strDirName* può essere costituito da nomi file parzialmente qualificati rispetto alla directory corrente o completi. Una barra rovesciata (\\) o una barra (/) può essere utilizzata come separatore di directory per entrambi i nomi. `GetCurrentDirectoryAsURL`converte i separatori dei nomi di directory nei caratteri appropriati prima di utilizzarli.

##  <a name="getfile"></a>CFtpConnection:: GetFile

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

*pstrRemoteFile*<br/>
Puntatore a una stringa con terminazione null che contiene il nome di un file da recuperare dal server FTP.

*pstrLocalFile*<br/>
Puntatore a una stringa con terminazione null che contiene il nome del file da creare nel sistema locale.

*bFailIfExists*<br/>
Indica se il nome del file può essere già utilizzato da un file esistente. Se il nome del file locale esiste già e questo parametro è true, `GetFile` ha esito negativo. In caso `GetFile` contrario, cancellerà la copia esistente del file.

*dwAttributes*<br/>
Indica gli attributi del file. Può trattarsi di qualsiasi combinazione dei flag FILE_ATTRIBUTE_ * seguenti.

- FILE_ATTRIBUTE_ARCHIVE il file è un file di archivio. Le applicazioni utilizzano questo attributo per contrassegnare i file per il backup o la rimozione.

- FILE_ATTRIBUTE_COMPRESSED il file o la directory è compressa. Per un file, la compressione indica che tutti i dati nel file sono compressi. Per una directory, la compressione è l'impostazione predefinita per i file e le sottodirectory appena creati.

- FILE_ATTRIBUTE_DIRECTORY il file è una directory.

- FILE_ATTRIBUTE_NORMAL il file non dispone di altri attributi impostati. Questo attributo è valido solo se usato da solo. Tutti gli altri attributi di file eseguono l'override di FILE_ATTRIBUTE_NORMAL:

- FILE_ATTRIBUTE_HIDDEN il file è nascosto. Non deve essere incluso in un elenco di directory ordinarie.

- FILE_ATTRIBUTE_READONLY il file è di sola lettura. Le applicazioni possono leggere il file ma non possono scrivervi o eliminarlo.

- FILE_ATTRIBUTE_SYSTEM il file fa parte di o viene usato esclusivamente dal sistema operativo.

- FILE_ATTRIBUTE_TEMPORARY il file viene usato per l'archiviazione temporanea. Le applicazioni devono scrivere nel file solo se assolutamente necessario. La maggior parte dei dati del file rimane in memoria senza essere scaricata nei supporti perché il file verrà eliminato a breve.

*dwFlags*<br/>
Specifica le condizioni in base alle quali viene eseguito il trasferimento. Questo parametro può essere uno qualsiasi dei valori *dwFlags* descritti in [FtpGetFile](/windows/win32/api/wininet/nf-wininet-ftpgetfilew) nel Windows SDK.

*dwContext*<br/>
Identificatore di contesto per il recupero del file. Per ulteriori informazioni su *dwContext*, vedere la **sezione Osservazioni** .

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, è possibile chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la cause dell'errore.

### <a name="remarks"></a>Note

`GetFile`è una routine di alto livello che gestisce tutto il sovraccarico associato alla lettura di un file da un server FTP e all'archiviazione locale. Le applicazioni che recuperano solo i dati dei file o che richiedono un controllo di chiusura sul trasferimento `OpenFile` di file devono usare e [CInternetFile:: Read](../../mfc/reference/cinternetfile-class.md#read) .

Se *dwFlags* è FILE_TRANSFER_TYPE_ASCII, la conversione dei dati del file converte anche i caratteri di controllo e formattazione in equivalenti di Windows. Il trasferimento predefinito è la modalità binaria, in cui il file viene scaricato nello stesso formato archiviato nel server.

Sia *pstrRemoteFile* che *pstrLocalFile* possono essere nomi file parzialmente qualificati rispetto alla directory corrente o completi. Una barra rovesciata (\\) o una barra (/) può essere utilizzata come separatore di directory per entrambi i nomi. `GetFile`converte i separatori dei nomi di directory nei caratteri appropriati prima di utilizzarli.

Eseguire l'override dell'impostazione predefinita *dwContext* per impostare l'identificatore di contesto su un valore a scelta. L'identificatore di contesto è associato a questa operazione specifica dell' `CFtpConnection` oggetto creato dall'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) . Il valore viene restituito a [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui viene identificato. Vedere l'articolo [primi passaggi per Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

##  <a name="openfile"></a>CFtpConnection:: OpenFile

Chiamare questa funzione membro per aprire un file che si trova in un server FTP per la lettura o la scrittura.

```
CInternetFile* OpenFile(
    LPCTSTR pstrFileName,
    DWORD dwAccess = GENERIC_READ,
    DWORD dwFlags = FTP_TRANSFER_TYPE_BINARY,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*pstrFileName*<br/>
Puntatore a una stringa che contiene il nome del file da aprire.

*dwAccess*<br/>
Determina il modo in cui verrà eseguito l'accesso al file. Può essere GENERIC_READ o GENERIC_WRITE, ma non entrambi.

*dwFlags*<br/>
Specifica le condizioni in cui si verificano i trasferimenti successivi. Può essere una delle seguenti costanti FTP_TRANSFER_ *:

- FTP_TRANSFER_TYPE_ASCII i trasferimenti di file usando il metodo di trasferimento FTP ASCII (Type A). Converte le informazioni di controllo e formattazione negli equivalenti locali.

- FTP_TRANSFER_TYPE_BINARY il file trasferisce i dati usando il metodo di trasferimento di immagini (Type I) di FTP. Il file trasferisce i dati esattamente come esistono, senza alcuna modifica. Si tratta del metodo di trasferimento predefinito.

*dwContext*<br/>
Identificatore di contesto per l'apertura del file. Per ulteriori informazioni su *dwContext*, vedere la **sezione Osservazioni** .

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CInternetFile](../../mfc/reference/cinternetfile-class.md) .

### <a name="remarks"></a>Note

`OpenFile`deve essere usato nelle situazioni seguenti:

- Un'applicazione dispone di dati che devono essere inviati e creati come file sul server FTP, ma tali dati non si trova in un file locale. Una `OpenFile` volta aperto un file, l'applicazione usa [CInternetFile:: Write](../../mfc/reference/cinternetfile-class.md#write) per inviare i dati del file FTP al server.

- Un'applicazione deve recuperare un file dal server e inserirlo nella memoria controllata dall'applicazione, anziché scriverlo su disco. L'applicazione usa [CInternetFile:: Read](../../mfc/reference/cinternetfile-class.md#read) dopo l' `OpenFile` uso di per aprire il file.

- Per un'applicazione è necessario un livello di controllo preciso su un trasferimento di file. Ad esempio, l'applicazione potrebbe voler visualizzare un controllo dello stato di avanzamento indica lo stato di avanzamento dello stato di trasferimento file durante il download di un file.

Dopo la chiamata a `OpenFile` e fino a quando non viene chiamata `CInternetConnection::Close`, l'applicazione può chiamare solo [CInternetFile::Read](../../mfc/reference/cinternetfile-class.md#read), [CInternetFile::Write](../../mfc/reference/cinternetfile-class.md#write), `CInternetConnection::Close` o [CFtpFileFind::FindFile](../../mfc/reference/cftpfilefind-class.md#findfile). Le chiamate ad altre funzioni FTP per la stessa sessione FTP avranno esito negativo e imposteranno il codice di errore su FTP_ETRANSFER_IN_PROGRESS.

Il parametro *pstrFileName* può essere un nome di file parzialmente qualificato rispetto alla directory corrente o completo. Una barra rovesciata (\\) o una barra (/) può essere utilizzata come separatore di directory per entrambi i nomi. `OpenFile`converte i separatori dei nomi di directory nei caratteri appropriati prima di utilizzarlo.

Eseguire l'override dell'impostazione predefinita *dwContext* per impostare l'identificatore di contesto su un valore a scelta. L'identificatore di contesto è associato a questa operazione specifica dell' `CFtpConnection` oggetto creato dall'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) . Il valore viene restituito a [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui viene identificato. Vedere l'articolo [primi passaggi per Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

##  <a name="putfile"></a>CFtpConnection::P utFile

Chiamare questa funzione membro per archiviare un file in un server FTP.

```
BOOL PutFile(
    LPCTSTR pstrLocalFile,
    LPCTSTR pstrRemoteFile,
    DWORD dwFlags = FTP_TRANSFER_TYPE_BINARY,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*pstrLocalFile*<br/>
Puntatore a una stringa che contiene il nome del file da inviare dal sistema locale.

*pstrRemoteFile*<br/>
Puntatore a una stringa contenente il nome del file da creare nel server FTP.

*dwFlags*<br/>
Specifica le condizioni in base alle quali viene eseguito il trasferimento del file. Può essere una qualsiasi delle costanti FTP_TRANSFER_ * descritte in [OpenFile](#openfile).

*dwContext*<br/>
Identificatore di contesto per il posizionamento del file. Per ulteriori informazioni su *dwContext*, vedere la **sezione Osservazioni** .

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, è possibile chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la cause dell'errore.

### <a name="remarks"></a>Note

`PutFile`è una routine di alto livello che gestisce tutte le operazioni associate all'archiviazione di un file in un server FTP. Le applicazioni che inviano solo dati o che richiedono un controllo più stretto sul trasferimento di file devono usare [OpenFile](#openfile) e [CInternetFile:: Write](../../mfc/reference/cinternetfile-class.md#write).

Esegue l'override dell'impostazione predefinita `dwContext` per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto è associato a questa operazione specifica dell' `CFtpConnection` oggetto creato dall'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) . Il valore viene restituito a [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui viene identificato. Vedere l'articolo [primi passaggi per Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

##  <a name="remove"></a>CFtpConnection:: Remove

Chiamare questa funzione membro per eliminare il file specificato dal server connesso.

```
BOOL Remove(LPCTSTR pstrFileName);
```

### <a name="parameters"></a>Parametri

*pstrFileName*<br/>
Puntatore a una stringa contenente il nome file da rimuovere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, è possibile chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la cause dell'errore.

### <a name="remarks"></a>Note

Il parametro *pstrFileName* può essere un nome di file parzialmente qualificato rispetto alla directory corrente o completo. Una barra rovesciata (\\) o una barra (/) può essere utilizzata come separatore di directory per entrambi i nomi. La `Remove` funzione converte i separatori dei nomi di directory nei caratteri appropriati prima di utilizzarli.

##  <a name="removedirectory"></a>  CFtpConnection::RemoveDirectory

Chiamare questa funzione membro per rimuovere la directory specificata dal server connesso.

```
BOOL RemoveDirectory(LPCTSTR pstrDirName);
```

### <a name="parameters"></a>Parametri

*pstrDirName*<br/>
Puntatore a una stringa contenente la directory da rimuovere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, è possibile chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la cause dell'errore.

### <a name="remarks"></a>Note

Usare [GetCurrentDirectory](#getcurrentdirectory) per determinare la directory di lavoro corrente del server. Non presupporre che il sistema remoto sia connesso alla directory radice.

Il parametro *pstrDirName* può essere un nome di file parzialmente o completo relativo alla directory corrente. Una barra rovesciata (\\) o una barra (/) può essere utilizzata come separatore di directory per entrambi i nomi. `RemoveDirectory`converte i separatori dei nomi di directory nei caratteri appropriati prima di utilizzarli.

##  <a name="rename"></a>CFtpConnection:: Rename

Chiamare questa funzione membro per rinominare il file specificato nel server connesso.

```
BOOL Rename(
    LPCTSTR pstrExisting,
    LPCTSTR pstrNew);
```

### <a name="parameters"></a>Parametri

*pstrExisting*<br/>
Puntatore a una stringa contenente il nome corrente del file da rinominare.

*pstrNew*<br/>
Puntatore a una stringa che contiene il nuovo nome del file.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, è possibile chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la cause dell'errore.

### <a name="remarks"></a>Note

I parametri *pstrExisting* e *pstrNew* possono essere un nome di file parzialmente qualificato rispetto alla directory corrente o completo. Una barra rovesciata (\\) o una barra (/) può essere utilizzata come separatore di directory per entrambi i nomi. `Rename`converte i separatori dei nomi di directory nei caratteri appropriati prima di utilizzarli.

##  <a name="setcurrentdirectory"></a>CFtpConnection:: SetCurrentDirectory

Chiamare questa funzione membro per passare a una directory diversa sul server FTP.

```
BOOL SetCurrentDirectory(LPCTSTR pstrDirName);
```

### <a name="parameters"></a>Parametri

*pstrDirName*<br/>
Puntatore a una stringa che contiene il nome della directory.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, è possibile chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la cause dell'errore.

### <a name="remarks"></a>Note

Il parametro *pstrDirName* può essere un nome di file parzialmente o completo relativo alla directory corrente. Una barra rovesciata (\\) o una barra (/) può essere utilizzata come separatore di directory per entrambi i nomi. `SetCurrentDirectory`converte i separatori dei nomi di directory nei caratteri appropriati prima di utilizzarli.

Utilizzare [GetCurrentDirectory](#getcurrentdirectory) per determinare la directory di lavoro corrente di un server FTP. Non presupporre che il sistema remoto sia connesso alla directory radice.

## <a name="see-also"></a>Vedere anche

[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Classe CInternetSession](../../mfc/reference/cinternetsession-class.md)

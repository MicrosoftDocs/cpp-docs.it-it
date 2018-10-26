---
title: Classe CFtpConnection | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4b3e340f00170eb8351cb66e816cbaa7dc76fbd6
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50075541"
---
# <a name="cftpconnection-class"></a>Classe CFtpConnection

Gestisce la connessione FTP a un server Internet e consentirne un'elaborazione diretta delle directory e file in tale server.

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
|[CFtpConnection::Command](#command)|Invia un comando direttamente a un server FTP.|
|[CFtpConnection::CreateDirectory](#createdirectory)|Crea una directory nel server.|
|[CFtpConnection:: GetCurrentDirectory](#getcurrentdirectory)|Ottiene la directory corrente per questa connessione.|
|[CFtpConnection:: Getcurrentdirectoryasurl](#getcurrentdirectoryasurl)|Ottiene la directory corrente per questa connessione sotto forma di URL.|
|[CFtpConnection::GetFile](#getfile)|Ottiene un file dal server connesso|
|[CFtpConnection:: OpenFile](#openfile)|Apre un file nel server connesso.|
|[CFtpConnection::PutFile](#putfile)|Inserisce un file nel server.|
|[CFtpConnection:: Remove](#remove)|Rimuove un file dal server.|
|[CFtpConnection::RemoveDirectory](#removedirectory)|Rimuove la directory specificata dal server.|
|[CFtpConnection::Rename](#rename)|Rinomina un file nel server.|
|[CFtpConnection:: SetCurrentDirectory](#setcurrentdirectory)|Imposta la directory FTP corrente.|

## <a name="remarks"></a>Note

FTP è uno dei tre servizi Internet riconosciuti dalle classi WinInet MFC.

Per comunicare con un server FTP Internet, è innanzitutto necessario creare un'istanza di [CInternetSession](../../mfc/reference/cinternetsession-class.md), quindi creare un `CFtpConnection` oggetto. È non creare mai una `CFtpConnection` direttamente l'oggetto; piuttosto, chiamare [CInternetSession:: GetFtpConnection](../../mfc/reference/cinternetsession-class.md#getftpconnection), che consente di creare il `CFtpConnection` specificato e restituisce un puntatore a esso.

Per altre informazioni su come `CFtpConnection` funziona con le altre classi MFC Internet, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md). Per altre informazioni sulla comunicazione con gli altri due supportati servizi, HTTP e gopher, vedere le classi [CHttpConnection](../../mfc/reference/chttpconnection-class.md) e [CGopherConnection](../../mfc/reference/cgopherconnection-class.md).

## <a name="example"></a>Esempio

  Vedere l'esempio nel [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md) Cenni preliminari sulla classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CInternetConnection](../../mfc/reference/cinternetconnection-class.md)

`CFtpConnection`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet. h

##  <a name="cftpconnection"></a>  CFtpConnection::CFtpConnection

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
Un puntatore all'oggetto correlato [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto.

*hConnected*<br/>
L'handle di Windows della sessione corrente di Internet.

*pstrServer*<br/>
Un puntatore a una stringa contenente il nome del server FTP.

*dwContext*<br/>
L'identificatore di contesto per l'operazione. *dwContext* identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback). Il valore predefinito è impostato su 1. Tuttavia, è possibile assegnare in modo esplicito un ID di contesto specifico per l'operazione. L'oggetto e qualsiasi lavoro che svolto da associare con tale ID del contesto.

*pstrUserName*<br/>
Puntatore a una stringa con terminazione null che specifica il nome dell'utente per l'accesso. Se NULL, il valore predefinito è anonymous.

*pstrPassword*<br/>
Un puntatore a una stringa con terminazione null che specifica la password da utilizzare per l'accesso. Se entrambe *pstrPassword* e *pstrUserName* sono NULL, la password anonima predefinita è il nome dell'utente tramite posta elettronica. Se *pstrPassword* è NULL (o una stringa vuota), ma *pstrUserName* non è NULL, viene usata una password vuota. La tabella seguente descrive il comportamento per le quattro possibili impostazioni di *pstrUserName* e *pstrPassword*:

|*pstrUserName*|*pstrPassword*|Nome utente inviato al server FTP|Password inviati al server FTP|
|--------------------|--------------------|---------------------------------|---------------------------------|
|NULL o ""|NULL o ""|"anonymous"|Nome messaggio di posta elettronica dell'utente|
|Stringa non NULL|NULL o ""|*pstrUserName*|" "|
|Stringa Non NULL a NULL|ERRORE|ERRORE||
|Stringa non NULL|Stringa non NULL|*pstrUserName*|*pstrPassword*|

*nPort*<br/>
Numero che identifica la porta TCP/IP da usare nel server.

*bPassive*<br/>
Specifica la modalità passiva o attiva per questa sessione FTP. Se impostato su TRUE, imposta l'API Win32 *dwFlag* a INTERNET_FLAG_PASSIVE.

### <a name="remarks"></a>Note

È non creare mai un `CFtpConnection` direttamente l'oggetto. Chiamare invece [CInternetSession:: GetFtpConnection](../../mfc/reference/cinternetsession-class.md#getftpconnection), che consente di creare il `CFptConnection` oggetto.

##  <a name="command"></a>  CFtpConnection::Command

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
Determina se è prevista una risposta dal server FTP. Il valore può essere uno dei seguenti:

- `CmdRespNone` È prevista alcuna risposta.

- `CmdRespRead` È prevista una risposta.

*dwFlags*<br/>
Valore contenente i flag che controllano questa funzione. Per un elenco completo, vedere [FTPCommand](/windows/desktop/api/wininet/nf-wininet-ftpcommanda).

*dwContext*<br/>
Puntatore a un valore contenente un valore definito dall'applicazione usato per identificare il contesto dell'applicazione nei callback.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro emula la funzionalità dei [FTPCommand](/windows/desktop/api/wininet/nf-wininet-ftpcommanda) funzionare, come descritto nel SDK di Windows.

Se si verifica un errore, MFC genera un'eccezione di tipo [CInternetException](../../mfc/reference/cinternetexception-class.md).

##  <a name="createdirectory"></a>  CFtpConnection::CreateDirectory

Chiamare questa funzione membro per creare una directory nel server connesso.

```
BOOL CreateDirectory(LPCTSTR pstrDirName);
```

### <a name="parameters"></a>Parametri

*pstrDirName*<br/>
Un puntatore a una stringa contenente il nome della directory da creare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione di Windows [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.

### <a name="remarks"></a>Note

Usare `GetCurrentDirectory` per determinare la directory di lavoro corrente per questa connessione al server. Non presupporre che il sistema remoto sia connesso è nella directory radice.

Il `pstrDirName` parametro può essere un parzialmente o un nome file completo relativo alla directory corrente. Una barra rovesciata (\\) o barra (/) può essere utilizzata come separatore di directory per il nome. `CreateDirectory` traduce i separatori di nome di directory in caratteri appropriati prima che vengano utilizzate.

##  <a name="getcurrentdirectory"></a>  CFtpConnection:: GetCurrentDirectory

Chiamare questa funzione membro per ottenere il nome della directory corrente.

```
BOOL GetCurrentDirectory(CString& strDirName) const;

BOOL GetCurrentDirectory(
    LPTSTR pstrDirName,
    LPDWORD lpdwLen) const;
```

### <a name="parameters"></a>Parametri

*strDirName*<br/>
Un riferimento a una stringa che riceverà il nome della directory.

*pstrDirName*<br/>
Un puntatore a una stringa che riceverà il nome della directory.

*lpdwLen*<br/>
Un puntatore a un valore DWORD che contiene le informazioni seguenti:

|||
|-|-|
|In ingresso|Le dimensioni del buffer fa *pstrDirName*.|
|In fase di restituzione|Il numero di caratteri archiviati a *pstrDirName*. Se la funzione membro non riesce e viene restituito ERROR_INSUFFICIENT_BUFFER *lpdwLen* contiene il numero di byte che l'applicazione deve allocare per ricevere la stringa.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.

### <a name="remarks"></a>Note

Per ottenere invece il nome della directory come un URL, chiamare [GetCurrentDirectoryAsURL](#getcurrentdirectoryasurl).

I parametri *pstrDirName* oppure *strDirName* possono essere entrambi nomi parzialmente qualificati di file relativo alla directory corrente o in modo completo. Una barra rovesciata (\\) o barra (/) può essere utilizzata come separatore di directory per il nome. `GetCurrentDirectory` traduce i separatori di nome di directory in caratteri appropriati prima che vengano utilizzate.

##  <a name="getcurrentdirectoryasurl"></a>  CFtpConnection:: Getcurrentdirectoryasurl

Chiamare questa funzione membro per ottenere il nome della directory corrente sotto forma di URL.

```
BOOL GetCurrentDirectoryAsURL(CString& strDirName) const;

BOOL GetCurrentDirectoryAsURL(
    LPTSTR pstrName,
    LPDWORD lpdwLen) const;
```

### <a name="parameters"></a>Parametri

*strDirName*<br/>
Un riferimento a una stringa che riceverà il nome della directory.

*pstrDirName*<br/>
Un puntatore a una stringa che riceverà il nome della directory.

*lpdwLen*<br/>
Un puntatore a un valore DWORD che contiene le informazioni seguenti:

|||
|-|-|
|In ingresso|Le dimensioni del buffer fa *pstrDirName*.|
|In fase di restituzione|Il numero di caratteri archiviati a *pstrDirName*. Se la funzione membro non riesce e viene restituito ERROR_INSUFFICIENT_BUFFER *lpdwLen* contiene il numero di byte che l'applicazione deve allocare per ricevere la stringa.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.

### <a name="remarks"></a>Note

`GetCurrentDirectoryAsURL` si comporta come [GetCurrentDirectory](#getcurrentdirectory)

Il parametro *strDirName* possono essere entrambi nomi parzialmente qualificati di file relativo alla directory corrente o in modo completo. Una barra rovesciata (\\) o barra (/) può essere utilizzata come separatore di directory per il nome. `GetCurrentDirectoryAsURL` traduce i separatori di nome di directory in caratteri appropriati prima che vengano utilizzate.

##  <a name="getfile"></a>  CFtpConnection::GetFile

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
Un puntatore a una stringa con terminazione null che contiene il nome di un file da recuperare dal server FTP.

*pstrLocalFile*<br/>
Un puntatore a una stringa con terminazione null che contiene il nome del file da creare nel sistema locale.

*bFailIfExists*<br/>
Indica se il nome del file potrebbe essere già utilizzato da un file esistente. Se esiste già il nome del file locale e questo parametro è TRUE, `GetFile` ha esito negativo. In caso contrario, `GetFile` cancellerà la copia esistente del file.

*dwAttributes*<br/>
Indica gli attributi del file. Può trattarsi di qualsiasi combinazione dei flag seguenti FILE_ATTRIBUTE_ *.

- FILE_ATTRIBUTE_ARCHIVE il file è un file di archivio. Le applicazioni usano questo attributo per contrassegnare i file per il backup o la rimozione.

- FILE_ATTRIBUTE_COMPRESSED file o della directory è compresso. Per un file, la compressione significa che tutti i dati nel file vengono compressi. Per una directory, la compressione è il valore predefinito per nuovi file creati e le sottodirectory.

- FILE_ATTRIBUTE_DIRECTORY il file è una directory.

- Il file FILE_ATTRIBUTE_NORMAL non possiede altri attributi impostato. Questo attributo è valido solo se usato da solo. Tutti gli altri attributi di file di eseguire l'override FILE_ATTRIBUTE_NORMAL:

- FILE_ATTRIBUTE_HIDDEN il file è nascosto. Non è devono essere inclusi in un elenco delle directory standard.

- FILE_ATTRIBUTE_READONLY il file è di sola lettura. Le applicazioni possono leggere il file, ma non è possibile scrivervi oppure eliminarlo.

- FILE_ATTRIBUTE_SYSTEM il file fa parte di o viene utilizzato esclusivamente dal sistema operativo.

- FILE_ATTRIBUTE_TEMPORARY il file viene usato per l'archiviazione temporanea. Le applicazioni devono scrivere nel file solo se assolutamente necessario. La maggior parte dei dati del file rimane in memoria senza viene scaricata il supporto perché il file verrà presto eliminato.

*dwFlags*<br/>
Specifica le condizioni in cui si verifica il trasferimento. Questo parametro può essere uno qualsiasi dei *dwFlags* i valori descritti nella [FtpGetFile](/windows/desktop/api/wininet/nf-wininet-ftpgetfilea) nel SDK di Windows.

*dwContext*<br/>
L'identificatore di contesto per il recupero di file. Visualizzare **osservazioni** per altre informazioni sui *dwContext*.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.

### <a name="remarks"></a>Note

`GetFile` è una routine di alto livello che provvede a tutto l'overhead associato alla lettura di un file da un server FTP e archiviandolo in locale. Le applicazioni che recuperano solo i dati dei file, o che richiedono Chiudi controllare il trasferimento di file, devono usare `OpenFile` e [CInternetFile:: Read](../../mfc/reference/cinternetfile-class.md#read) invece.

Se *dwFlags* FILE_TRANSFER_TYPE_ASCII, conversione dei dati dei file anche converte controllo e formattazione dei caratteri agli equivalenti di Windows. Il trasferimento predefinito è la modalità binaria, in cui viene scaricato il file nello stesso formato archiviati nel server.

Entrambe *pstrRemoteFile* e *pstrLocalFile* possono essere entrambi nomi parzialmente qualificati di file relativo alla directory corrente o in modo completo. Una barra rovesciata (\\) o barra (/) può essere utilizzata come separatore di directory per il nome. `GetFile` traduce i separatori di nome di directory in caratteri appropriati prima che vengano utilizzate.

Eseguire l'override di *dwContext* predefinito per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto è associato a questa specifica operazione dei `CFtpConnection` oggetto creato dal relativo [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto. Viene restituito il valore per [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per altre informazioni sull'identificatore di contesto.

##  <a name="openfile"></a>  CFtpConnection:: OpenFile

Chiamare questa funzione membro per aprire un file che si trova in un server FTP per la lettura o scrittura.

```
CInternetFile* OpenFile(
    LPCTSTR pstrFileName,
    DWORD dwAccess = GENERIC_READ,
    DWORD dwFlags = FTP_TRANSFER_TYPE_BINARY,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*pstrFileName*<br/>
Un puntatore a una stringa contenente il nome del file da aprire.

*dwAccess*<br/>
Determina come il file sarà accessibile. Può essere GENERIC_READ o GENERIC_WRITE, ma non entrambi.

*dwFlags*<br/>
Specifica le condizioni in cui si verificano trasferimenti successive. Ciò può essere uno delle seguenti costanti FTP_TRANSFER_ *:

- FTP_TRANSFER_TYPE_ASCII il file di trasferimento viene eseguito tramite il metodo di trasferimento FTP ASCII (tipo di oggetto). Converte controllo e informazioni di formattazione a equivalenti in locale.

- FTP_TRANSFER_TYPE_BINARY file trasferisce i dati usando il metodo di trasferimento di immagine FTP's (tipo di ricerca per categorie). I dati vengono trasferiti i file così come è presente, senza modifiche. Questo è il metodo di trasferimento predefinito.

*dwContext*<br/>
L'identificatore di contesto per l'apertura del file. Visualizzare **osservazioni** per altre informazioni sui *dwContext*.

### <a name="return-value"></a>Valore restituito

Un puntatore a un [CInternetFile](../../mfc/reference/cinternetfile-class.md) oggetto.

### <a name="remarks"></a>Note

`OpenFile` deve essere usato nelle situazioni seguenti:

- Un'applicazione dispone di dati che devono essere inviato e crearlo come file nel server FTP, ma i dati non più in un file locale. Una volta `OpenFile` apre un file, l'applicazione utilizza [CInternetFile::Write](../../mfc/reference/cinternetfile-class.md#write) per inviare i dati di file FTP al server.

- Un'applicazione deve recuperare un file dal server e posizionarlo in memoria controllato dall'applicazione, invece di scrittura sul disco. L'applicazione utilizza [CInternetFile:: Read](../../mfc/reference/cinternetfile-class.md#read) dopo aver usato `OpenFile` per aprire il file.

- Un'applicazione richiede un elevato livello di controllo sul trasferimento di file. Ad esempio, l'applicazione desideri visualizzare uno stato di avanzamento controllo indicano lo stato di avanzamento dello stato di trasferimento di file durante il download di un file.

Dopo avere chiamato `OpenFile` e fino a quando la chiamata `CInternetConnection::Close`, l'applicazione può chiamare solo [CInternetFile:: Read](../../mfc/reference/cinternetfile-class.md#read), [CInternetFile::Write](../../mfc/reference/cinternetfile-class.md#write), `CInternetConnection::Close`, o [ CFtpFileFind:: FindFile](../../mfc/reference/cftpfilefind-class.md#findfile). Le chiamate ad altre funzioni FTP per la stessa sessione FTP avrà esito negativo e impostare il codice di errore per FTP_ETRANSFER_IN_PROGRESS.

Il *pstrFileName* parametro può essere un nome parzialmente qualificato completo o relativo alla directory corrente. Una barra rovesciata (\\) o barra (/) può essere utilizzata come separatore di directory per il nome. `OpenFile` traduce i separatori di nome di directory in caratteri appropriati prima di poterla usare.

Eseguire l'override di *dwContext* predefinito per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto è associato a questa specifica operazione dei `CFtpConnection` oggetto creato dal relativo [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto. Viene restituito il valore per [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per altre informazioni sull'identificatore di contesto.

##  <a name="putfile"></a>  CFtpConnection::PutFile

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
Un puntatore a una stringa contenente il nome del file da inviare dal sistema locale.

*pstrRemoteFile*<br/>
Un puntatore a una stringa contenente il nome del file da creare sul server FTP.

*dwFlags*<br/>
Specifica le condizioni in cui si verifica il trasferimento del file. Può essere una delle costanti FTP_TRANSFER_ * descritto nella [OpenFile](#openfile).

*dwContext*<br/>
L'identificatore di contesto per posizionare il file. Visualizzare **osservazioni** per altre informazioni sui *dwContext*.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.

### <a name="remarks"></a>Note

`PutFile` è una routine di alto livello che gestisce tutte le operazioni associate con l'archiviazione di un file in un server FTP. Le applicazioni che solo invio dei dati, o che richiedono un maggiore controllo sul trasferimento di file, devono usare [OpenFile](#openfile) e [CInternetFile::Write](../../mfc/reference/cinternetfile-class.md#write).

Esegue l'override dell'impostazione predefinita `dwContext` per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto è associato a questa specifica operazione dei `CFtpConnection` oggetto creato dal relativo [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto. Viene restituito il valore per [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per altre informazioni sull'identificatore di contesto.

##  <a name="remove"></a>  CFtpConnection:: Remove

Chiamare questa funzione membro per eliminare il file specificato dal server connesso.

```
BOOL Remove(LPCTSTR pstrFileName);
```

### <a name="parameters"></a>Parametri

*pstrFileName*<br/>
Un puntatore a una stringa contenente il nome del file da rimuovere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.

### <a name="remarks"></a>Note

Il *pstrFileName* parametro può essere un nome parzialmente qualificato completo o relativo alla directory corrente. Una barra rovesciata (\\) o barra (/) può essere utilizzata come separatore di directory per il nome. Il `Remove` funzione converte i separatori di nome di directory in caratteri appropriati prima che vengano utilizzate.

##  <a name="removedirectory"></a>  CFtpConnection::RemoveDirectory

Chiamare questa funzione membro per rimuovere la directory specificata dal server connesso.

```
BOOL RemoveDirectory(LPCTSTR pstrDirName);
```

### <a name="parameters"></a>Parametri

*pstrDirName*<br/>
Un puntatore a una stringa che contiene la directory da rimuovere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.

### <a name="remarks"></a>Note

Uso [GetCurrentDirectory](#getcurrentdirectory) per determinare la directory di lavoro corrente del server. Non presupporre che il sistema remoto sia connesso è nella directory radice.

Il *pstrDirName* parametro possa essere entrambi un nome parziale o completo relativo alla directory corrente. Una barra rovesciata (\\) o barra (/) può essere utilizzata come separatore di directory per il nome. `RemoveDirectory` traduce i separatori di nome di directory in caratteri appropriati prima che vengano utilizzate.

##  <a name="rename"></a>  CFtpConnection::Rename

Chiamare questa funzione membro per rinominare il file specificato nel server connesso.

```
BOOL Rename(
    LPCTSTR pstrExisting,
    LPCTSTR pstrNew);
```

### <a name="parameters"></a>Parametri

*pstrExisting*<br/>
Un puntatore a una stringa contenente il nome corrente del file da rinominare.

*pstrNew*<br/>
Un puntatore a una stringa contenente il nome del file nuovo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.

### <a name="remarks"></a>Note

Il *pstrExisting* e *pstrNew* parametri possono essere un nome parzialmente qualificato completo o relativo alla directory corrente. Una barra rovesciata (\\) o barra (/) può essere utilizzata come separatore di directory per il nome. `Rename` traduce i separatori di nome di directory in caratteri appropriati prima che vengano utilizzate.

##  <a name="setcurrentdirectory"></a>  CFtpConnection:: SetCurrentDirectory

Chiamare questa funzione membro per modificare in una directory diversa sul server FTP.

```
BOOL SetCurrentDirectory(LPCTSTR pstrDirName);
```

### <a name="parameters"></a>Parametri

*pstrDirName*<br/>
Un puntatore a una stringa contenente il nome della directory.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.

### <a name="remarks"></a>Note

Il *pstrDirName* parametro possa essere entrambi un nome parziale o completo relativo alla directory corrente. Una barra rovesciata (\\) o barra (/) può essere utilizzata come separatore di directory per il nome. `SetCurrentDirectory` traduce i separatori di nome di directory in caratteri appropriati prima che vengano utilizzate.

Uso [GetCurrentDirectory](#getcurrentdirectory) per determinare la directory di lavoro corrente del server FTP. Non presupporre che il sistema remoto sia connesso è nella directory radice.

## <a name="see-also"></a>Vedere anche

[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)<br/>
[Classe CInternetSession](../../mfc/reference/cinternetsession-class.md)

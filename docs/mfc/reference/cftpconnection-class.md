---
title: Classe CFtpConnection | Documenti Microsoft
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
ms.openlocfilehash: f43df1cb610c785688db982be2ddc4a19cf140b2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cftpconnection-class"></a>Classe CFtpConnection
Gestisce la connessione FTP a un server Internet e consente la modifica diretta delle directory e file in tale server.  
  
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
|[CFtpConnection:: Getcurrentdirectoryasurl](#getcurrentdirectoryasurl)|Ottiene la directory corrente per la connessione come URL.|  
|[CFtpConnection::GetFile](#getfile)|Ottiene un file dal server connesso|  
|[CFtpConnection:: OpenFile](#openfile)|Apre un file nel server connesso.|  
|[CFtpConnection::PutFile](#putfile)|Inserisce un file nel server.|  
|[CFtpConnection:: Remove](#remove)|Rimuove un file dal server.|  
|[CFtpConnection::RemoveDirectory](#removedirectory)|Rimuove la directory specificata dal server.|  
|[CFtpConnection::Rename](#rename)|Rinomina un file nel server.|  
|[CFtpConnection:: SetCurrentDirectory](#setcurrentdirectory)|Imposta la directory FTP corrente.|  
  
## <a name="remarks"></a>Note  
 FTP è uno dei tre servizi Internet riconosciuti dalle classi WinInet MFC.  
  
 Per comunicare con un server FTP Internet, è innanzitutto necessario creare un'istanza di [CInternetSession](../../mfc/reference/cinternetsession-class.md)e quindi creare un `CFtpConnection` oggetto. Non creare mai un `CFtpConnection` oggetto direttamente; invece chiamare [CInternetSession:: GetFtpConnection](../../mfc/reference/cinternetsession-class.md#getftpconnection), che consente di creare il `CFtpConnection` dell'oggetto e restituisce un puntatore a esso.  
  
 Per ulteriori informazioni su come `CFtpConnection` funziona con le altre classi MFC Internet, vedere l'articolo [Internet programmazione con WinInet](../../mfc/win32-internet-extensions-wininet.md). Per ulteriori informazioni sulla comunicazione con gli altri due supportati servizi, HTTP e gopher, vedere le classi [CHttpConnection](../../mfc/reference/chttpconnection-class.md) e [CGopherConnection](../../mfc/reference/cgopherconnection-class.md).  
  
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
 `pSession`  
 Puntatore all'oggetto correlato [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto.  
  
 `hConnected`  
 Handle della finestra della sessione corrente di Internet.  
  
 `pstrServer`  
 Un puntatore a una stringa contenente il nome del server FTP.  
  
 `dwContext`  
 L'identificatore di contesto per l'operazione. `dwContext` Identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback). Il valore predefinito è impostato su 1. Tuttavia, è possibile assegnare in modo esplicito un ID di contesto specifico per l'operazione. L'oggetto e qualsiasi lavoro che svolto verrà associati all'ID di contesto.  
  
 `pstrUserName`  
 Puntatore a una stringa con terminazione null che specifica il nome dell'utente per l'accesso. Se **NULL**, il valore predefinito è anonimo.  
  
 `pstrPassword`  
 Un puntatore a una stringa con terminazione null che specifica la password da utilizzare per l'accesso. Se entrambi `pstrPassword` e `pstrUserName` sono **NULL**, la password utente anonimo predefinito è il nome di posta elettronica dell'utente. Se `pstrPassword` è **NULL** (o una stringa vuota) ma `pstrUserName` non **NULL**, viene utilizzata una password vuota. Nella tabella seguente vengono descritti il comportamento per le quattro possibili impostazioni di `pstrUserName` e `pstrPassword`:  
  
|`pstrUserName`|`pstrPassword`|Nome utente inviato al server FTP|Password inviata al server FTP|  
|--------------------|--------------------|---------------------------------|---------------------------------|  
|**NULL** o ""|**NULL** o ""|"anonymous"|Nome di posta elettronica dell'utente|  
|Non- **NULL** stringa|**NULL** o ""|`pstrUserName`|" "|  
|**NULL** diverso da **NULL** stringa|**ERRORE**|**ERRORE**||  
|Non- **NULL** stringa|Non- **NULL** stringa|`pstrUserName`|`pstrPassword`|  
  
 `nPort`  
 Numero che identifica la porta TCP/IP da utilizzare nel server.  
  
 `bPassive`  
 Specifica la modalità passiva o attiva per la sessione FTP. Se impostato su **TRUE**, imposta l'API Win32 `dwFlag` a **INTERNET_FLAG_PASSIVE**.  
  
### <a name="remarks"></a>Note  
 Non creare mai un `CFtpConnection` direttamente l'oggetto. Chiamare invece [CInternetSession:: GetFtpConnection](../../mfc/reference/cinternetsession-class.md#getftpconnection), che consente di creare il **CFptConnection** oggetto.  
  
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
 `pszCommand`  
 Puntatore a una stringa contenente il comando da inviare.  
  
 *eResponse*  
 Determina se è prevista una risposta dal server FTP. Il valore può essere uno dei seguenti:  
  
- **CmdRespNone** è prevista alcuna risposta.  
  
- **Cmdrespnone** è prevista una risposta.  
  
 `dwFlags`  
 Valore contenente i flag che controllano questa funzione. Per un elenco completo, vedere [FTPCommand](http://msdn.microsoft.com/library/windows/desktop/aa384133).  
  
 `dwContext`  
 Puntatore a un valore contenente un valore definito dall'applicazione usato per identificare il contesto dell'applicazione nei callback.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità del [FTPCommand](http://msdn.microsoft.com/library/windows/desktop/aa384133) funzione, come descritto in Windows SDK.  
  
 Se si verifica un errore, MFC genera un'eccezione di tipo [CInternetException](../../mfc/reference/cinternetexception-class.md).  
  
##  <a name="createdirectory"></a>  CFtpConnection::CreateDirectory  
 Chiamare questa funzione membro per creare una directory nel server connesso.  
  
```  
BOOL CreateDirectory(LPCTSTR pstrDirName);
```  
  
### <a name="parameters"></a>Parametri  
 `pstrDirName`  
 Un puntatore a una stringa contenente il nome della directory da creare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Windows [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.  
  
### <a name="remarks"></a>Note  
 Utilizzare `GetCurrentDirectory` per determinare la directory di lavoro corrente per la connessione al server. Non presupporre che il sistema remoto sia connesso è la directory radice.  
  
 Il `pstrDirName` parametro può essere un parzialmente o un nome di file completo relativo alla directory corrente. Una barra rovesciata (\\) o barra rovesciata (/) può essere utilizzato come separatore di directory per dei nomi. `CreateDirectory` traduce i separatori di nome di directory per i caratteri appropriati prima che vengano utilizzate.  
  
##  <a name="getcurrentdirectory"></a>  CFtpConnection:: GetCurrentDirectory  
 Chiamare questa funzione membro per ottenere il nome della directory corrente.  
  
```  
BOOL GetCurrentDirectory(CString& strDirName) const;  
  
BOOL GetCurrentDirectory(
    LPTSTR pstrDirName,  
    LPDWORD lpdwLen) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `strDirName`  
 Un riferimento a una stringa che riceverà il nome della directory.  
  
 `pstrDirName`  
 Un puntatore a una stringa che riceverà il nome della directory.  
  
 `lpdwLen`  
 Un puntatore a un valore DWORD che contiene le informazioni seguenti:  
  
|||  
|-|-|  
|In ingresso|Le dimensioni del buffer a cui fa riferimento `pstrDirName`.|  
|In fase di restituzione|Il numero di caratteri archiviati a `pstrDirName`. Se la funzione membro non riesce e viene restituito ERROR_INSUFFICIENT_BUFFER, quindi `lpdwLen` contiene il numero di byte che l'applicazione deve allocare per ricevere la stringa.|  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.  
  
### <a name="remarks"></a>Note  
 Per ottenere il nome della directory come URL, invece, chiamare [GetCurrentDirectoryAsURL](#getcurrentdirectoryasurl).  
  
 I parametri `pstrDirName` o `strDirName` possono essere entrambi parzialmente qualificati i nomi di file relativo alla directory corrente o completo. Una barra rovesciata (\\) o barra rovesciata (/) può essere utilizzato come separatore di directory per dei nomi. `GetCurrentDirectory` traduce i separatori di nome di directory per i caratteri appropriati prima che vengano utilizzate.  
  
##  <a name="getcurrentdirectoryasurl"></a>  CFtpConnection:: Getcurrentdirectoryasurl  
 Chiamare questa funzione membro per ottenere il nome della directory corrente come URL.  
  
```  
BOOL GetCurrentDirectoryAsURL(CString& strDirName) const;  
  
BOOL GetCurrentDirectoryAsURL(
    LPTSTR pstrName,  
    LPDWORD lpdwLen) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `strDirName`  
 Un riferimento a una stringa che riceverà il nome della directory.  
  
 `pstrDirName`  
 Un puntatore a una stringa che riceverà il nome della directory.  
  
 `lpdwLen`  
 Un puntatore a un valore DWORD che contiene le informazioni seguenti:  
  
|||  
|-|-|  
|In ingresso|Le dimensioni del buffer a cui fa riferimento `pstrDirName`.|  
|In fase di restituzione|Il numero di caratteri archiviati a `pstrDirName`. Se la funzione membro non riesce e viene restituito ERROR_INSUFFICIENT_BUFFER, quindi `lpdwLen` contiene il numero di byte che l'applicazione deve allocare per ricevere la stringa.|  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.  
  
### <a name="remarks"></a>Note  
 `GetCurrentDirectoryAsURL` si comporta come [GetCurrentDirectory](#getcurrentdirectory)  
  
 Il parametro `strDirName` possono essere entrambi parzialmente qualificati i nomi di file relativo alla directory corrente o completo. Una barra rovesciata (\\) o barra rovesciata (/) può essere utilizzato come separatore di directory per dei nomi. `GetCurrentDirectoryAsURL` traduce i separatori di nome di directory per i caratteri appropriati prima che vengano utilizzate.  
  
##  <a name="getfile"></a>  CFtpConnection::GetFile  
 Chiamare questa funzione membro per ottenere un file da un server FTP e di archiviarla nel computer locale.  
  
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
 `pstrRemoteFile`  
 Un puntatore a una stringa con terminazione null contenente il nome di un file da recuperare dal server FTP.  
  
 `pstrLocalFile`  
 Un puntatore a una stringa con terminazione null contenente il nome del file da creare nel sistema locale.  
  
 *bFailIfExists*  
 Indica se il nome del file potrebbe essere già utilizzato da un file esistente. Se il nome del file locale esiste già, e questo parametro è **TRUE**, `GetFile` ha esito negativo. In caso contrario, `GetFile` cancellerà la copia esistente del file.  
  
 `dwAttributes`  
 Indica gli attributi del file. Può trattarsi di qualsiasi combinazione dei flag seguenti FILE_ATTRIBUTE_ *.  
  
-   FILE_ATTRIBUTE_ARCHIVE il file è un file di archivio. Le applicazioni utilizzano questo attributo per contrassegnare i file di backup o la rimozione.  
  
-   FILE_ATTRIBUTE_COMPRESSED il file o la directory è compresso. Per un file, la compressione significa che tutti i dati nel file vengono compressi. Per una directory, la compressione è il valore predefinito per il file appena creato e le sottodirectory.  
  
-   FILE_ATTRIBUTE_DIRECTORY il file è una directory.  
  
-   Il file FILE_ATTRIBUTE_NORMAL non possiede altri attributi impostato. Questo attributo è valido solo se utilizzato da solo. Tutti gli altri attributi di file di eseguire l'override FILE_ATTRIBUTE_NORMAL:  
  
-   FILE_ATTRIBUTE_HIDDEN il file è nascosto. Non è devono essere inclusi in un elenco delle directory standard.  
  
-   FILE_ATTRIBUTE_READONLY il file è di sola lettura. Applicazioni possono leggere il file ma non è possibile scrivere o eliminarlo.  
  
-   FILE_ATTRIBUTE_SYSTEM il file fa parte di o viene utilizzato esclusivamente dal sistema operativo.  
  
-   FILE_ATTRIBUTE_TEMPORARY il file è utilizzato per l'archiviazione temporanea. Le applicazioni devono scrivere nel file solo se strettamente necessario. La maggior parte dei dati dei file rimane in memoria senza il supporto viene scaricata perché il file verrà presto eliminato.  
  
 `dwFlags`  
 Specifica le condizioni in cui si verifica il trasferimento. Questo parametro può essere uno qualsiasi del `dwFlags` valori descritti [FtpGetFile](http://msdn.microsoft.com/library/windows/desktop/aa384157) in Windows SDK.  
  
 `dwContext`  
 L'identificatore di contesto per il recupero di file. Vedere **osservazioni** per ulteriori informazioni su `dwContext`.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.  
  
### <a name="remarks"></a>Note  
 `GetFile` è una routine di alto livello che gestisce l'intera l'overhead associato alla lettura di un file da un server FTP e archiviare i dati in locale. Le applicazioni che recuperano solo i dati di file o che richiedono stretto controllo sul trasferimento di file, devono utilizzare `OpenFile` e [CInternetFile:: Read](../../mfc/reference/cinternetfile-class.md#read) invece.  
  
 Se `dwFlags` FILE_TRANSFER_TYPE_ASCII, conversione dei dati dei file anche converte controllo e la formattazione di caratteri da equivalenti di Windows. Il trasferimento predefinito è la modalità binaria, in cui viene scaricato il file nello stesso formato archiviato nel server.  
  
 Entrambi `pstrRemoteFile` e `pstrLocalFile` possono essere entrambi parzialmente qualificati i nomi di file relativo alla directory corrente o completo. Una barra rovesciata (\\) o barra rovesciata (/) può essere utilizzato come separatore di directory per dei nomi. `GetFile` traduce i separatori di nome di directory per i caratteri appropriati prima che vengano utilizzate.  
  
 Esegue l'override dell'impostazione predefinita `dwContext` per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto è associato a questa operazione specifica del `CFtpConnection` oggetto creato dal relativo [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto. Viene restituito il valore di [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.  
  
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
 `pstrFileName`  
 Un puntatore a una stringa contenente il nome del file da aprire.  
  
 *dwAccess*  
 Determina la modalità di accesso nel file. È possibile GENERIC_READ o GENERIC_WRITE, ma non entrambi.  
  
 `dwFlags`  
 Specifica le condizioni in cui si verificano trasferimenti successivi. Può trattarsi di una delle seguenti costanti FTP_TRANSFER_ *:  
  
-   Il file FTP_TRANSFER_TYPE_ASCII trasferisce utilizzando il metodo di trasferimento FTP ASCII (tipo di oggetto). Controllo converte e informazioni di formattazione a equivalenti locale.  
  
-   FTP_TRANSFER_TYPE_BINARY il file di dati vengono trasferiti utilizzando il metodo di trasferimento immagine FTP's (tipo I). I dati di trasferimenti file esattamente come se esistono, senza modifiche. Questo è il metodo di trasferimento predefinito.  
  
 `dwContext`  
 L'identificatore di contesto per l'apertura del file. Vedere **osservazioni** per ulteriori informazioni su `dwContext`.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CInternetFile](../../mfc/reference/cinternetfile-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 `OpenFile` deve essere utilizzato nelle situazioni seguenti:  
  
-   Un'applicazione dispone di dati che devono essere inviato e crearlo come file sul server FTP, ma che i dati non sono presente in un file locale. Una volta `OpenFile` apre un file, l'applicazione utilizza [CInternetFile::Write](../../mfc/reference/cinternetfile-class.md#write) per inviare i dati di file FTP al server.  
  
-   Un'applicazione deve recuperare un file dal server e inserirlo nella memoria controllato di applicazioni, invece di scrittura su disco. L'applicazione utilizza [CInternetFile:: Read](../../mfc/reference/cinternetfile-class.md#read) dopo l'utilizzo di `OpenFile` per aprire il file.  
  
-   Un'applicazione richiede un elevato livello di controllo su un trasferimento di file. Ad esempio, l'applicazione desideri visualizzare un indicatore di stato controllo indicano lo stato di avanzamento dello stato di trasferimento di file durante il download di un file.  
  
 Dopo la chiamata `OpenFile` e fino a quando la chiamata **CInternetConnection::Close**, l'applicazione può chiamare solo [CInternetFile:: Read](../../mfc/reference/cinternetfile-class.md#read), [CInternetFile::Write](../../mfc/reference/cinternetfile-class.md#write), **CInternetConnection::Close**, o [CFtpFileFind:: FindFile](../../mfc/reference/cftpfilefind-class.md#findfile). Le chiamate ad altre funzioni FTP per la stessa sessione FTP avrà esito negativo e impostare il codice di errore FTP_ETRANSFER_IN_PROGRESS.  
  
 Il `pstrFileName` parametro può essere un nome parziale completo o relativo alla directory corrente. Una barra rovesciata (\\) o barra rovesciata (/) può essere utilizzato come separatore di directory per dei nomi. `OpenFile` traduce i separatori di nome di directory per i caratteri appropriati prima di utilizzarlo.  
  
 Esegue l'override dell'impostazione predefinita `dwContext` per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto è associato a questa operazione specifica del `CFtpConnection` oggetto creato dal relativo [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto. Viene restituito il valore di [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.  
  
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
 `pstrLocalFile`  
 Un puntatore a una stringa contenente il nome del file da inviare dal sistema locale.  
  
 `pstrRemoteFile`  
 Un puntatore a una stringa contenente il nome del file da creare sul server FTP.  
  
 `dwFlags`  
 Specifica le condizioni in cui si verifica il trasferimento del file. Può essere una delle costanti FTP_TRANSFER_ * descritte in [OpenFile](#openfile).  
  
 `dwContext`  
 L'identificatore di contesto per l'inserimento del file. Vedere **osservazioni** per ulteriori informazioni su `dwContext`.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.  
  
### <a name="remarks"></a>Note  
 `PutFile` è una routine di alto livello che gestisce tutte le operazioni associate alla memorizzazione di un file in un server FTP. Le applicazioni che solo inviare i dati o che richiedono un maggiore controllo sul trasferimento di file, devono utilizzare [OpenFile](#openfile) e [CInternetFile::Write](../../mfc/reference/cinternetfile-class.md#write).  
  
 Esegue l'override dell'impostazione predefinita `dwContext` per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto è associato a questa operazione specifica del `CFtpConnection` oggetto creato dal relativo [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto. Viene restituito il valore di [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.  
  
##  <a name="remove"></a>  CFtpConnection:: Remove  
 Chiamare questa funzione membro per eliminare il file specificato dal server connesso.  
  
```  
BOOL Remove(LPCTSTR pstrFileName);
```  
  
### <a name="parameters"></a>Parametri  
 `pstrFileName`  
 Un puntatore a una stringa contenente il nome di file da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.  
  
### <a name="remarks"></a>Note  
 Il `pstrFileName` parametro può essere un nome parziale completo o relativo alla directory corrente. Una barra rovesciata (\\) o barra rovesciata (/) può essere utilizzato come separatore di directory per dei nomi. Il **rimuovere** funzione converte i separatori di nome di directory per i caratteri appropriati prima che vengano utilizzate.  
  
##  <a name="removedirectory"></a>  CFtpConnection::RemoveDirectory  
 Chiamare questa funzione membro per rimuovere la directory specificata dal server connesso.  
  
```  
BOOL RemoveDirectory(LPCTSTR pstrDirName);
```  
  
### <a name="parameters"></a>Parametri  
 `pstrDirName`  
 Un puntatore a una stringa contenente la directory da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.  
  
### <a name="remarks"></a>Note  
 Utilizzare [GetCurrentDirectory](#getcurrentdirectory) per determinare la directory di lavoro corrente del server. Non presupporre che il sistema remoto sia connesso è la directory radice.  
  
 Il `pstrDirName` parametro può essere un nome file parziale o completo relativo alla directory corrente. Una barra rovesciata (\\) o barra rovesciata (/) può essere utilizzato come separatore di directory per dei nomi. `RemoveDirectory` traduce i separatori di nome di directory per i caratteri appropriati prima che vengano utilizzate.  
  
##  <a name="rename"></a>  CFtpConnection::Rename  
 Chiamare questa funzione membro per rinominare il file specificato nel server connesso.  
  
```  
BOOL Rename(
    LPCTSTR pstrExisting,  
    LPCTSTR pstrNew);
```  
  
### <a name="parameters"></a>Parametri  
 `pstrExisting`  
 Un puntatore a una stringa contenente il nome corrente del file da rinominare.  
  
 `pstrNew`  
 Un puntatore a una stringa contenente il nome del file nuovo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.  
  
### <a name="remarks"></a>Note  
 Il `pstrExisting` e `pstrNew` parametri possono essere un nome parziale completo o relativo alla directory corrente. Una barra rovesciata (\\) o barra rovesciata (/) può essere utilizzato come separatore di directory per dei nomi. **Rinominare** converte i separatori di nome di directory per i caratteri appropriati prima che vengano utilizzate.  
  
##  <a name="setcurrentdirectory"></a>  CFtpConnection:: SetCurrentDirectory  
 Chiamare questa funzione membro per passare a una directory diversa sul server FTP.  
  
```  
BOOL SetCurrentDirectory(LPCTSTR pstrDirName);
```  
  
### <a name="parameters"></a>Parametri  
 `pstrDirName`  
 Un puntatore a una stringa contenente il nome della directory.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.  
  
### <a name="remarks"></a>Note  
 Il `pstrDirName` parametro può essere un nome file parziale o completo relativo alla directory corrente. Una barra rovesciata (\\) o barra rovesciata (/) può essere utilizzato come separatore di directory per dei nomi. `SetCurrentDirectory` traduce i separatori di nome di directory per i caratteri appropriati prima che vengano utilizzate.  
  
 Utilizzare [GetCurrentDirectory](#getcurrentdirectory) per determinare la directory di lavoro corrente del server FTP. Non presupporre che il sistema remoto sia connesso è la directory radice.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)   
 [Classe CInternetSession](../../mfc/reference/cinternetsession-class.md)

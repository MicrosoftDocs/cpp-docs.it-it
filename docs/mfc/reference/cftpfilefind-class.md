---
title: Classe CFtpFileFind | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CFtpFileFind
dev_langs:
- C++
helpviewer_keywords:
- CFtpFileFind class
- file searches [C++]
ms.assetid: 9667cf01-657f-4b11-b9db-f11e5a7b4e4c
caps.latest.revision: 23
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 6e84282cc2f22e813ea44318d497c7e32e3280d8
ms.lasthandoff: 02/24/2017

---
# <a name="cftpfilefind-class"></a>CFtpFileFind (classe)
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
|[CFtpFileFind:: FindNextFile](#findnextfile)|Continua la ricerca di file da una precedente chiamata a [FindFile](#findfile).|  
|[CFtpFileFind::GetFileURL](#getfileurl)|Ottiene l'URL, percorso, del file trovato.|  
  
## <a name="remarks"></a>Note  
 `CFtpFileFind`incluse le funzioni membro che iniziano una ricerca, individuare un file e restituisce l'URL o altre informazioni descrittive sul file.  
  
 Altre classi MFC progettati per eseguire la ricerca di file locale e Internet includono [CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md) e [CFileFind](../../mfc/reference/cfilefind-class.md). Insieme a `CFtpFileFind`, queste classi forniscono un meccanismo semplice per trovare il tipo di protocollo o un file (un computer locale o un server remoto) specifici file, indipendentemente dal server al client. Si noti che non esiste alcuna classe MFC per la ricerca sui server HTTP HTTP supporta la modifica diretta di file necessaria per le ricerche.  
  
 Per ulteriori informazioni su come usare `CFtpFileFind` e le altre classi WinInet, vedere l'articolo [Internet programmazione con WinInet](../../mfc/win32-internet-extensions-wininet.md).  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene illustrato come enumerare tutti i file nella directory corrente del server FTP.  
  
 [!code-cpp[NVC_MFCWinInet n.&8;](../../mfc/codesnippet/cpp/cftpfilefind-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFileFind](../../mfc/reference/cfilefind-class.md)  
  
 `CFtpFileFind`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxinet. h  
  
##  <a name="a-namecftpfilefinda--cftpfilefindcftpfilefind"></a><a name="cftpfilefind"></a>CFtpFileFind::CFtpFileFind  
 Questa funzione membro viene chiamata per costruire un `CFtpFileFind` oggetto.  
  
```  
explicit CFtpFileFind(
    CFtpConnection* pConnection,  
    DWORD_PTR dwContext = 1);
```  
  
### <a name="parameters"></a>Parametri  
 `pConnection`  
 Un puntatore a un `CFtpConnection` oggetto. È possibile ottenere una connessione FTP chiamando [CInternetSession:: GetFtpConnection](../../mfc/reference/cinternetsession-class.md#getftpconnection).  
  
 `dwContext`  
 Identificatore di contesto per il `CFtpFileFind` oggetto. Vedere **osservazioni** per ulteriori informazioni su questo parametro.  
  
### <a name="remarks"></a>Note  
 Il valore predefinito per `dwContext` viene inviato da MFC per la `CFtpFileFind` dell'oggetto dal [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto creato il `CFtpFileFind` oggetto. È possibile sostituire il valore predefinito per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto viene restituito al [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'oggetto con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio nella panoramica della classe in precedenza in questo argomento.  
  
##  <a name="a-namefindfilea--cftpfilefindfindfile"></a><a name="findfile"></a>CFtpFileFind:: FindFile  
 Chiamare questa funzione membro per trovare un file FTP.  
  
```  
virtual BOOL FindFile(
    LPCTSTR pstrName = NULL,  
    DWORD dwFlags = INTERNET_FLAG_RELOAD);
```  
  
### <a name="parameters"></a>Parametri  
 `pstrName`  
 Un puntatore a una stringa contenente il nome del file da trovare. Se **NULL**, la chiamata verrà eseguita una ricerca con caratteri jolly (*).  
  
 `dwFlags`  
 Flag che descrivono come gestire la sessione. Questi flag possono essere combinati con l'operatore OR bit per bit (|) e sono i seguenti:  
  
-   INTERNET_FLAG_RELOAD ottenere i dati dalla rete, anche se viene memorizzato localmente. Questo è il flag predefinito.  
  
-   INTERNET_FLAG_DONT_CACHE nella cache i dati in locale o in tutti i gateway.  
  
-   INTERNET_FLAG_RAW_DATA sostituire il valore predefinito per restituire i dati non elaborati ( [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) strutture per FTP).  
  
-   INTERNET_FLAG_SECURE protegge le transazioni in transito con SSL (Secure Sockets Layer) o PERC. Questo flag riguarda solo le richieste HTTP.  
  
-   INTERNET_FLAG_EXISTING_CONNECT se possibile, è possibile riutilizzare le connessioni esistenti al server per i nuovi **FindFile** richieste invece di creare una nuova sessione per ogni richiesta.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Per ottenere ulteriori informazioni sull'errore, chiamare la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### <a name="remarks"></a>Note  
 Dopo la chiamata **FindFile** per recuperare il primo file FTP, è possibile chiamare [FindNextFile](#findnextfile) per recuperare i file successivi FTP.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio precedente in questo argomento.  
  
##  <a name="a-namefindnextfilea--cftpfilefindfindnextfile"></a><a name="findnextfile"></a>CFtpFileFind:: FindNextFile  
 Chiamare questa funzione membro per continuare la ricerca di file iniziata con una chiamata al [FindFile](#findfile) funzione membro.  
  
```  
virtual BOOL FindNextFile();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se sono presenti più file; zero se il file trovato è quella più recente nella directory o se si è verificato un errore. Per ottenere ulteriori informazioni sull'errore, chiamare la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360). Se il file è l'ultimo file nella directory, oppure se nessuna corrispondenza file sono disponibile, il `GetLastError` funzione restituisce ERROR_NO_MORE_FILES.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare questa funzione almeno una volta prima di chiamare qualsiasi funzione di attributo (vedere [CFileFind::FindNextFile](../../mfc/reference/cfilefind-class.md#findnextfile)).  
  
 `FindNextFile`esegue il wrapping della funzione Win32 [FindNextFile](http://msdn.microsoft.com/library/windows/desktop/aa364428).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio in precedenza in questo argomento.  
  
##  <a name="a-namegetfileurla--cftpfilefindgetfileurl"></a><a name="getfileurl"></a>CFtpFileFind::GetFileURL  
 Chiamare questa funzione membro per ottenere l'URL del file specificato.  
  
```  
CString GetFileURL() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 I file e percorso di Universal Resource Locator (URL).  
  
### <a name="remarks"></a>Note  
 `GetFileURL`è simile alla funzione membro [CFileFind::GetFilePath](../../mfc/reference/cfilefind-class.md#getfilepath), ad eccezione del fatto che restituisce l'URL nel formato `ftp://moose/dir/file.txt`.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CFileFind](../../mfc/reference/cfilefind-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md)   
 [CInternetFile (classe)](../../mfc/reference/cinternetfile-class.md)   
 [CGopherFile (classe)](../../mfc/reference/cgopherfile-class.md)   
 [Classe CHttpFile](../../mfc/reference/chttpfile-class.md)


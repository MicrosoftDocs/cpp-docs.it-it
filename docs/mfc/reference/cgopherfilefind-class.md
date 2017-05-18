---
title: Classe CGopherFileFind | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CGopherFileFind class
- file searches [C++]
ms.assetid: 8465a979-6323-496d-ab4b-e81383fb999d
caps.latest.revision: 21
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 93f30e83369ad1bff7222f26d0782eed11e73f66
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cgopherfilefind-class"></a>Classe CGopherFileFind
Facilita le ricerche di file su Internet dei server gopher.  
  
> [!NOTE]
>  Le classi `CGopherConnection`, `CGopherFile`, `CGopherFileFind`, `CGopherLocator` e i relativi membri sono stati deprecati in quanto non funzionano nella piattaforma Windows XP, ma continuano a funzionare su piattaforme precedenti.  
  
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
|[CGopherFileFind:: FindFile](#findfile)|Trova un file in un server gopher.|  
|[CGopherFileFind:: FindNextFile](#findnextfile)|Continua la ricerca di file da una precedente chiamata a [FindFile](#findfile).|  
|[CGopherFileFind::GetCreationTime](#getcreationtime)|Ottiene l'ora di creazione del file specificato.|  
|[CGopherFileFind::GetLastAccessTime](#getlastaccesstime)|Ottiene l'ora di che ultimo accesso al file specificato.|  
|[CGopherFileFind::GetLastWriteTime](#getlastwritetime)|Ottiene l'ora che ultima scrittura nel file specificato.|  
|[CGopherFileFind::GetLength](#getlength)|Ottiene la lunghezza del file trovato, in byte.|  
|[CGopherFileFind:: GetLocator](#getlocator)|Ottenere un `CGopherLocator` oggetto.|  
|[CGopherFileFind::GetScreenName](#getscreenname)|Ottiene il nome di una schermata gopher.|  
|[CGopherFileFind::IsDots](#isdots)|Test per i marcatori correnti per directory padre e directory durante l'iterazione tramite file.|  
  
## <a name="remarks"></a>Note  
 `CGopherFileFind`incluse le funzioni membro che iniziano una ricerca, individuare un file e URL del file restituiscono.  
  
 Altre classi MFC progettati per eseguire la ricerca di file locale e Internet includono [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md) e [CFileFind](../../mfc/reference/cfilefind-class.md). Insieme a `CGopherFileFind`, queste classi forniscono un meccanismo semplice per l'utente trovare i file specifici, indipendentemente dal protocollo di server, tipo di file o percorso (un computer locale o un server remoto.) Si noti che non esiste alcuna classe MFC per la ricerca sui server HTTP HTTP supporta la modifica diretta di file necessaria per le ricerche.  
  
> [!NOTE]
> `CGopherFileFind`non supporta le seguenti funzioni membro della relativa classe base [CFileFind](../../mfc/reference/cfilefind-class.md):  
  
- [GetRoot](../../mfc/reference/cfilefind-class.md#getroot)  
  
- [GetFileName](../../mfc/reference/cfilefind-class.md#getfilename)  
  
- [GetFilePath](../../mfc/reference/cfilefind-class.md#getfilepath)  
  
- [GetFileTitle](../../mfc/reference/cfilefind-class.md#getfiletitle)  
  
- [GetFileURL](../../mfc/reference/cfilefind-class.md#getfileurl)  
  
 Inoltre, se utilizzato con `CGopherFileFind`, `CFileFind` funzione membro [IsDots](../../mfc/reference/cfilefind-class.md#isdots) è sempre **FALSE**.  
  
 Per ulteriori informazioni su come usare `CGopherFileFind` e le altre classi WinInet, vedere l'articolo [Internet programmazione con WinInet](../../mfc/win32-internet-extensions-wininet.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFileFind](../../mfc/reference/cfilefind-class.md)  
  
 `CGopherFileFind`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxinet. h  
  
##  <a name="cgopherfilefind"></a>CGopherFileFind::CGopherFileFind  
 Questa funzione membro viene chiamata per costruire un `CGopherFileFind` oggetto.  
  
```  
explicit CGopherFileFind(
    CGopherConnection* pConnection,  
    DWORD_PTR dwContext = 1);
```  
  
### <a name="parameters"></a>Parametri  
 `pConnection`  
 Un puntatore a un [CGopherConnection](../../mfc/reference/cgopherconnection-class.md) oggetto.  
  
 `dwContext`  
 L'identificatore di contesto per l'operazione. Vedere **osservazioni** per ulteriori informazioni su `dwContext`.  
  
### <a name="remarks"></a>Note  
 Il valore predefinito per `dwContext` viene inviato da MFC per la `CGopherFileFind` dell'oggetto dal [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto creato il `CGopherFileFind` oggetto. Quando si crea un `CGopherFileFind` dell'oggetto, è possibile sostituire il valore predefinito per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto viene restituito al [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'oggetto con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.  
  
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
 `refLocator`  
 Un riferimento a un [oggetto CGopherLocator](../../mfc/reference/cgopherlocator-class.md) oggetto.  
  
 *pstrString*  
 Un puntatore a una stringa contenente il nome del file.  
  
 `dwFlags`  
 Flag che descrivono come gestire la sessione. I flag validi sono:  
  
-   INTERNET_FLAG_RELOAD ottenere i dati dal server remoto, anche se viene memorizzato localmente.  
  
-   INTERNET_FLAG_DONT_CACHE nella cache i dati in locale o in tutti i gateway.  
  
-   Richiesta INTERNET_FLAG_SECURE transazioni protette in transito con Secure Sockets Layer o PERC. Questo flag riguarda solo le richieste HTTP.  
  
-   INTERNET_FLAG_USE_EXISTING se possibile, è possibile riutilizzare le connessioni esistenti al server per i nuovi **FindFile** richieste, invece di creare una nuova sessione per ogni richiesta.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Per ottenere ulteriori informazioni sull'errore, chiamare la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### <a name="remarks"></a>Note  
 Dopo la chiamata **FindFile** per recuperare il primo oggetto gopher, è possibile chiamare [FindNextFile](#findnextfile) per recuperare i file successivi gopher.  
  
##  <a name="findnextfile"></a>CGopherFileFind:: FindNextFile  
 Chiamare questa funzione membro per continuare la ricerca di file iniziata con una chiamata a [CGopherFileFind:: FindFile](#findfile).  
  
```  
virtual BOOL FindNextFile();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se sono presenti più file; zero se il file trovato è quella più recente nella directory o se si è verificato un errore. Per ottenere ulteriori informazioni sull'errore, chiamare la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360). Se il file è l'ultimo file nella directory, oppure se nessuna corrispondenza file sono disponibile, il `GetLastError` funzione restituisce ERROR_NO_MORE_FILES.  
  
##  <a name="getcreationtime"></a>CGopherFileFind::GetCreationTime  
 Ottiene l'ora di creazione per il file corrente.  
  
```  
virtual BOOL GetCreationTime(FILETIME* pTimeStamp) const;  
virtual BOOL GetCreationTime(CTime& refTime) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pTimeStamp`  
 Un puntatore a un [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) struttura contenente l'ora di creazione del file.  
  
 `refTime`  
 Un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. 0 se ha esito negativo. `GetCreationTime`Restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo `CGopherFileFind` oggetto.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetCreationTime`.  
  
> [!NOTE]
>  Non tutti i sistemi di file utilizzano la stessa semantica per implementare il timestamp restituito da questa funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni indicatore data e ora, se il file system o server sottostante non supporta l'attributo ora. Vedere il [Win32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura per informazioni sui formati di ora. In alcuni sistemi operativi, l'ora restituita è nel periodo di tempo sono state zona locale al computer si trova il file. Vedere Win32 [FileTimeToLocalFileTime](http://msdn.microsoft.com/library/windows/desktop/ms724277) API per ulteriori informazioni.  
  
##  <a name="getlastaccesstime"></a>CGopherFileFind::GetLastAccessTime  
 Ottiene l'ora di che ultimo accesso al file specificato.  
  
```  
virtual BOOL GetLastAccessTime(CTime& refTime) const;  
virtual BOOL GetLastAccessTime(FILETIME* pTimeStamp) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `refTime`  
 Un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto.  
  
 `pTimeStamp`  
 Un puntatore a un [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) struttura contenente l'ora dell'ultimo accesso al file.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. 0 se ha esito negativo. `GetLastAccessTime`Restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo `CGopherFileFind` oggetto.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetLastAccessTime`.  
  
> [!NOTE]
>  Non tutti i sistemi di file utilizzano la stessa semantica per implementare il timestamp restituito da questa funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni indicatore data e ora, se il file system o server sottostante non supporta l'attributo ora. Vedere il [Win32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura per informazioni sui formati di ora. In alcuni sistemi operativi, l'ora restituita è nel periodo di tempo sono state zona locale al computer si trova il file. Vedere Win32 [FileTimeToLocalFileTime](http://msdn.microsoft.com/library/windows/desktop/ms724277) API per ulteriori informazioni.  
  
##  <a name="getlastwritetime"></a>CGopherFileFind::GetLastWriteTime  
 Ottiene l'ora ultima modifica del file.  
  
```  
virtual BOOL GetLastWriteTime(FILETIME* pTimeStamp) const;  
virtual BOOL GetLastWriteTime(CTime& refTime) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pTimeStamp`  
 Un puntatore a un [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) struttura contenente l'ora ultima scrittura di file.  
  
 `refTime`  
 Un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. 0 se ha esito negativo. `GetLastWriteTime`Restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo `CGopherFileFind` oggetto.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetLastWriteTime`.  
  
> [!NOTE]
>  Non tutti i sistemi di file utilizzano la stessa semantica per implementare il timestamp restituito da questa funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni indicatore data e ora, se il file system o server sottostante non supporta l'attributo ora. Vedere il [Win32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura per informazioni sui formati di ora. In alcuni sistemi operativi, l'ora restituita è nel periodo di tempo sono state zona locale al computer si trova il file. Vedere Win32 [FileTimeToLocalFileTime](http://msdn.microsoft.com/library/windows/desktop/ms724277) API per ulteriori informazioni.  
  
##  <a name="getlength"></a>CGopherFileFind::GetLength  
 Chiamare questa funzione membro per ottenere la lunghezza in byte, del file trovato.  
  
```  
virtual ULONGLONG GetLength() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Lunghezza in byte, del file trovato.  
  
### <a name="remarks"></a>Note  
 `GetLength`Usa la struttura Win32 [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) per ottenere il valore delle dimensioni del file in byte.  
  
> [!NOTE]
>  A partire da MFC 7.0, `GetLength` supporta i tipi integer a 64 bit. Codice esistente in precedenza compilato con la versione più recente della libreria potrebbero gli avvisi di troncamento.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFile::GetLength](../../mfc/reference/cfile-class.md#getlength) (implementazione della classe base).  
  
##  <a name="getlocator"></a>CGopherFileFind:: GetLocator  
 Chiamare questa funzione membro per ottenere il [oggetto CGopherLocator](../../mfc/reference/cgopherlocator-class.md) oggetto [FindFile](#findfile) viene utilizzato per trovare il file gopher.  
  
```  
CGopherLocator GetLocator() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CGopherLocator`.  
  
##  <a name="getscreenname"></a>CGopherFileFind::GetScreenName  
 Chiamare questa funzione membro per ottenere il nome della schermata gopher.  
  
```  
CString GetScreenName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nome della schermata gopher.  
  
##  <a name="isdots"></a>CGopherFileFind::IsDots  
 Test per i marcatori correnti per directory padre e directory durante l'iterazione tramite file.  
  
```  
virtual BOOL IsDots() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il file trovato è il nome "."o"...", che indica che il file trovato è in realtà una directory. In caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsDots`.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CFileFind](../../mfc/reference/cfilefind-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFtpFileFind (classe)](../../mfc/reference/cftpfilefind-class.md)   
 [Classe CFileFind](../../mfc/reference/cfilefind-class.md)   
 [CInternetFile (classe)](../../mfc/reference/cinternetfile-class.md)   
 [CGopherFile (classe)](../../mfc/reference/cgopherfile-class.md)   
 [Classe CHttpFile](../../mfc/reference/chttpfile-class.md)


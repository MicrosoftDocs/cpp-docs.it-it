---
title: Classe CFileFind | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CFileFind
- AFX/CFileFind
- AFX/CFileFind::CFileFind
- AFX/CFileFind::Close
- AFX/CFileFind::FindFile
- AFX/CFileFind::FindNextFile
- AFX/CFileFind::GetCreationTime
- AFX/CFileFind::GetFileName
- AFX/CFileFind::GetFilePath
- AFX/CFileFind::GetFileTitle
- AFX/CFileFind::GetFileURL
- AFX/CFileFind::GetLastAccessTime
- AFX/CFileFind::GetLastWriteTime
- AFX/CFileFind::GetLength
- AFX/CFileFind::GetRoot
- AFX/CFileFind::IsArchived
- AFX/CFileFind::IsCompressed
- AFX/CFileFind::IsDirectory
- AFX/CFileFind::IsDots
- AFX/CFileFind::IsHidden
- AFX/CFileFind::IsNormal
- AFX/CFileFind::IsReadOnly
- AFX/CFileFind::IsSystem
- AFX/CFileFind::IsTemporary
- AFX/CFileFind::MatchesMask
- AFX/CFileFind::CloseContext
- AFX/CFileFind::m_pTM
dev_langs:
- C++
helpviewer_keywords:
- CFileFind [MFC], CFileFind
- CFileFind [MFC], Close
- CFileFind [MFC], FindFile
- CFileFind [MFC], FindNextFile
- CFileFind [MFC], GetCreationTime
- CFileFind [MFC], GetFileName
- CFileFind [MFC], GetFilePath
- CFileFind [MFC], GetFileTitle
- CFileFind [MFC], GetFileURL
- CFileFind [MFC], GetLastAccessTime
- CFileFind [MFC], GetLastWriteTime
- CFileFind [MFC], GetLength
- CFileFind [MFC], GetRoot
- CFileFind [MFC], IsArchived
- CFileFind [MFC], IsCompressed
- CFileFind [MFC], IsDirectory
- CFileFind [MFC], IsDots
- CFileFind [MFC], IsHidden
- CFileFind [MFC], IsNormal
- CFileFind [MFC], IsReadOnly
- CFileFind [MFC], IsSystem
- CFileFind [MFC], IsTemporary
- CFileFind [MFC], MatchesMask
- CFileFind [MFC], CloseContext
- CFileFind [MFC], m_pTM
ms.assetid: 9990068c-b023-4114-9580-a50182d15240
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e890e59896d1f69264ab479168385cf2a05d9fb7
ms.sourcegitcommit: 9239c52c05e5cd19b6a72005372179587a47a8e4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2018
---
# <a name="cfilefind-class"></a>Classe CFileFind
Esegue le ricerche di file locale e costituisce la classe base per [CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md) e [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md), che eseguono ricerche di file su Internet.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CFileFind : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileFind::CFileFind](#cfilefind)|Costruisce un oggetto `CFileFind`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileFind::Close](#close)|Chiude la richiesta di ricerca.|  
|[CFileFind::FindFile](#findfile)|Ricerca in una directory per un nome file specificato.|  
|[CFileFind::FindNextFile](#findnextfile)|Continua la ricerca di file da una precedente chiamata a [FindFile](#findfile).|  
|[CFileFind::GetCreationTime](#getcreationtime)|Ottiene l'ora di creazione del file.|  
|[CFileFind::GetFileName](#getfilename)|Ottiene il nome, inclusa l'estensione, del file trovato|  
|[CFileFind::GetFilePath](#getfilepath)|Ottiene il percorso completo del file trovato.|  
|[CFileFind::GetFileTitle](#getfiletitle)|Ottiene il titolo del file trovato. Il titolo non include l'estensione.|  
|[CFileFind::GetFileURL](#getfileurl)|Ottiene l'URL, incluso il percorso di file, del file trovato.|  
|[CFileFind::GetLastAccessTime](#getlastaccesstime)|Ottiene l'ora dell'ultimo accesso al file.|  
|[CFileFind::GetLastWriteTime](#getlastwritetime)|Ottiene l'ora, il file ultimo è stato modificato e salvato.|  
|[CFileFind::GetLength](#getlength)|Ottiene la lunghezza del file trovato, in byte.|  
|[CFileFind::GetRoot](#getroot)|Ottiene la directory radice del file trovato.|  
|[CFileFind::IsArchived](#isarchived)|Determina se è archiviato il file trovato.|  
|[CFileFind::IsCompressed](#iscompressed)|Determina se il file trovato è compresso.|  
|[CFileFind::IsDirectory](#isdirectory)|Determina se il file trovato è una directory.|  
|[CFileFind::IsDots](#isdots)|Determina se il nome del file trovato con il nome "."o"...", che indica che è una directory.|  
|[CFileFind::IsHidden](#ishidden)|Determina se il file trovato è nascosto.|  
|[CFileFind::IsNormal](#isnormal)|Determina se il file trovato è normale (in altre parole, non possiede altri attributi).|  
|[CFileFind::IsReadOnly](#isreadonly)|Determina se il file trovato è di sola lettura.|  
|[CFileFind::IsSystem](#issystem)|Determina se il file trovato è un file di sistema.|  
|[CFileFind::IsTemporary](#istemporary)|Determina se il file trovato è temporaneo.|  
|[CFileFind::MatchesMask](#matchesmask)|Indica gli attributi di file desiderato del file da trovare.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileFind::CloseContext](#closecontext)|Chiude il file specificato dall'handle di ricerca corrente.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CFileFind::m_pTM](#m_ptm)|Puntatore a un oggetto `CAtlTransactionManager`.|  
  
## <a name="remarks"></a>Note  
 `CFileFind` include funzioni membro che avviare una ricerca, individuare un file e restituiscono il titolo, nome o percorso del file. Per ricerche su Internet, la funzione membro [GetFileURL](#getfileurl) restituisce l'URL del file.  
  
 `CFileFind` la classe base per altre due classi MFC consente di cercare i tipi di server specifico: `CGopherFileFind` funziona in modo specifico con server gopher, e `CFtpFileFind` funziona in modo specifico con i server FTP. Insieme, queste tre classi forniscono un meccanismo semplice per il client trovare i file, indipendentemente dal protocollo del server, il tipo di file o percorso, in un computer locale o un server remoto.  
  
 Il codice seguente permette di enumerare tutti i file nella directory corrente, il nome di ogni file di stampa:  
  
 [!code-cpp[NVC_MFCFiles#31](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_1.cpp)]  
  
 Per semplificare l'esempio, questo codice Usa la libreria Standard C++ `cout` classe. Il `cout` riga può essere sostituita con una chiamata a `CListBox::AddString`, ad esempio, in un programma con un'interfaccia utente grafica.  
  
 Per ulteriori informazioni su come usare `CFileFind` e le altre classi WinInet, vedere l'articolo [Internet programmazione con WinInet](../../mfc/win32-internet-extensions-wininet.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CFileFind`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="cfilefind"></a>  CFileFind::CFileFind  
 Questa funzione membro viene chiamata quando un `CFileFind` oggetto viene costruito.  
  
```  
CFileFind();  
CFileFind(CAtlTransactionManager* pTM);
```  
  
### <a name="parameters"></a>Parametri  
 `pTM`  
 Puntatore all'oggetto CAtlTransactionManager  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind:: GetFileName](#getfilename).  
  
##  <a name="close"></a>  CFileFind::Close  
 Chiamare questa funzione membro per terminare la ricerca, ripristinare il contesto e rilascia tutte le risorse.  
  
```  
void Close();
```  
  
### <a name="remarks"></a>Note  
 Dopo la chiamata **Chiudi**, non è necessario creare un nuovo `CFileFind` istanza prima di chiamare [FindFile](#findfile) per iniziare una nuova ricerca.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind:: GetFileName](#getfilename).  
  
##  <a name="closecontext"></a>  CFileFind::CloseContext  
 Chiude il file specificato dall'handle di ricerca corrente.  
  
```  
virtual void CloseContext();
```  
  
### <a name="remarks"></a>Note  
 Chiude il file specificato dal valore corrente di handle di ricerca. Eseguire l'override di questa funzione per modificare il comportamento predefinito.  
  
 È necessario chiamare il [FindFile](#findfile) o [FindNextFile](#findnextfile) funzioni almeno una volta per recuperare un handle di ricerca valida. Il **FindFile** e `FindNextFile` utilizzano l'handle di ricerca per individuare i file con nomi che corrispondano al nome specificato.  
  
##  <a name="findfile"></a>  CFileFind::FindFile  
 Chiamare questa funzione membro per aprire un file da cercare.  
  
```  
virtual BOOL FindFile(
    LPCTSTR pstrName = NULL,  
    DWORD dwUnused = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `pstrName`  
 Un puntatore a una stringa contenente il nome del file da trovare. Se si passa **NULL** per `pstrName`, **FindFile** un carattere jolly (*.\*) ricerca.  
  
 *dwUnused*  
 Riservato per rendere **FindFile** polimorfico con le classi derivate. Deve essere 0.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Per ottenere informazioni dettagliate sull'errore, chiamare la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### <a name="remarks"></a>Note  
 Dopo la chiamata **FindFile** per avviare la ricerca di file, chiamare [FindNextFile](#findnextfile) per recuperare i file successivi. È necessario chiamare `FindNextFile` almeno una volta prima di chiamare qualsiasi dell'attributo seguente funzioni membro:  
  
- [GetCreationTime](#getcreationtime)  
  
- [GetFileName](#getfilename)  
  
- [GetFileTitle](#getfiletitle)  
  
- [GetFilePath](#getfilepath)  
  
- [GetFileURL](#getfileurl)  
  
- [GetLastAccessTime](#getlastaccesstime)  
  
- [GetLastWriteTime](#getlastwritetime)  
  
- [GetLength](#getlength)  
  
- [GetRoot](#getroot)  
  
- [IsArchived](#isarchived)  
  
- [IsCompressed](#iscompressed)  
  
- [IsDirectory](#isdirectory)  
  
- [IsDots](#isdots)  
  
- [IsHidden](#ishidden)  
  
- [IsNormal](#isnormal)  
  
- [IsReadOnly](#isreadonly)  
  
- [IsSystem](#issystem)  
  
- [IsTemporary](#istemporary)  
  
- [MatchesMask](#matchesmask)  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind::IsDirectory](#isdirectory).  
  
##  <a name="findnextfile"></a>  CFileFind::FindNextFile  
 Chiamare questa funzione membro per continuare la ricerca di file da una precedente chiamata a [FindFile](#findfile).  
  
```  
virtual BOOL FindNextFile();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se sono presenti più file; zero se il file trovato è l'ultimo nella directory o se si è verificato un errore. Per ottenere informazioni dettagliate sull'errore, chiamare la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360). Se il file trovato è l'ultimo file nella directory o se non corrisponde ad alcuna file sono disponibili, il `GetLastError` funzione restituisce ERROR_NO_MORE_FILES.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare `FindNextFile` almeno una volta prima di chiamare qualsiasi dell'attributo seguente funzioni membro:  
  
- [GetCreationTime](#getcreationtime)  
  
- [GetFileName](#getfilename)  
  
- [GetFileTitle](#getfiletitle)  
  
- [GetFilePath](#getfilepath)  
  
- [GetFileURL](#getfileurl)  
  
- [GetLastAccessTime](#getlastaccesstime)  
  
- [GetLastWriteTime](#getlastwritetime)  
  
- [GetLength](#getlength)  
  
- [GetRoot](#getroot)  
  
- [IsArchived](#isarchived)  
  
- [IsCompressed](#iscompressed)  
  
- [IsDirectory](#isdirectory)  
  
- [IsDots](#isdots)  
  
- [IsHidden](#ishidden)  
  
- [IsNormal](#isnormal)  
  
- [IsReadOnly](#isreadonly)  
  
- [IsSystem](#issystem)  
  
- [IsTemporary](#istemporary)  
  
- [MatchesMask](#matchesmask)  
  
 `FindNextFile` esegue il wrapping la funzione Win32 [FindNextFile](http://msdn.microsoft.com/library/windows/desktop/aa364428).  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind::IsDirectory](#isdirectory).  
  
##  <a name="getcreationtime"></a>  CFileFind::GetCreationTime  
 Chiamare questa funzione membro per ottenere l'ora di che creazione del file specificato.  
  
```  
virtual BOOL GetCreationTime(FILETIME* pTimeStamp) const;  
virtual BOOL GetCreationTime(CTime& refTime) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pTimeStamp`  
 Un puntatore a un [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) struttura che contiene l'ora di creazione del file.  
  
 `refTime`  
 Un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. 0 in caso contrario. `GetCreationTime` Restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo `CFileFind` oggetto.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetCreationTime`.  
  
> [!NOTE]
>  Non tutti i sistemi di file utilizzano la stessa semantica per implementare il timestamp restituito dalla funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni indicatore data e ora, se il file system o un server sottostante non supporta l'attributo ora. Vedere il [Win32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura per informazioni sui formati di ora. In alcuni sistemi di operazione, l'ora restituita è nel periodo di tempo zona locale al computer sono stati si trova il file. Vedere Win32 [FileTimeToLocalFileTime](http://msdn.microsoft.com/library/windows/desktop/ms724277) API per altre informazioni.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind:: GetLength](#getlength).  
  
##  <a name="getfilename"></a>  CFileFind::GetFileName  
 Chiamare questa funzione membro per ottenere il nome del file trovato.  
  
```  
virtual CString GetFileName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nome del file trovato più di recente.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare GetFileName.  
  
 `GetFileName` è uno dei tre `CFileFind` funzioni membro che restituiscono un tipo di nome file. Nell'elenco seguente vengono descritti i tre e come variano:  
  
- `GetFileName` Restituisce il nome del file, inclusa l'estensione. Ad esempio, la chiamata `GetFileName` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il nome del file `myfile.txt`.  
  
- [GetFilePath](#getfilepath) restituisce l'intero percorso del file. Ad esempio, la chiamata `GetFilePath` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il percorso del file `c:\myhtml\myfile.txt`.  
  
- [GetFileTitle](#getfiletitle) restituisce il nome del file, esclusa l'estensione del file. Ad esempio, la chiamata `GetFileTitle` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il nome del file `myfile`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles#32](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_2.cpp)]  
  
##  <a name="getfilepath"></a>  CFileFind::GetFilePath  
 Chiamare questa funzione membro per ottenere il percorso completo del file specificato.  
  
```  
virtual CString GetFilePath() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il percorso del file specificato.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetFilePath`.  
  
 `GetFilePath` è uno dei tre `CFileFind` funzioni membro che restituiscono un tipo di nome file. Nell'elenco seguente vengono descritti i tre e come variano:  
  
- [GetFileName](#getfilename) restituisce il nome del file, inclusa l'estensione. Ad esempio, la chiamata `GetFileName` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il nome del file `myfile.txt`.  
  
- `GetFilePath` Restituisce l'intero percorso del file. Ad esempio, la chiamata `GetFilePath` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il percorso del file `c:\myhtml\myfile.txt`.  
  
- [GetFileTitle](#getfiletitle) restituisce il nome del file, esclusa l'estensione del file. Ad esempio, la chiamata `GetFileTitle` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il nome del file `myfile`.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind:: GetFileName](#getfilename).  
  
##  <a name="getfiletitle"></a>  CFileFind::GetFileTitle  
 Chiamare questa funzione membro per ottenere il titolo del file trovato.  
  
```  
virtual CString GetFileTitle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il titolo del file.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetFileTitle`.  
  
 `GetFileTitle` è uno dei tre `CFileFind` funzioni membro che restituiscono un tipo di nome file. Nell'elenco seguente vengono descritti i tre e come variano:  
  
- [GetFileName](#getfilename) restituisce il nome del file, inclusa l'estensione. Ad esempio, la chiamata `GetFileName` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il nome del file `myfile.txt`.  
  
- [GetFilePath](#getfilepath) restituisce l'intero percorso del file. Ad esempio, la chiamata `GetFilePath` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il percorso del file `c:\myhtml\myfile.txt`.  
  
- `GetFileTitle` Restituisce il nome del file, esclusa l'estensione del file. Ad esempio, la chiamata `GetFileTitle` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il nome del file `myfile`.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind:: GetFileName](#getfilename).  
  
##  <a name="getfileurl"></a>  CFileFind::GetFileURL  
 Chiamare questa funzione membro per recuperare l'URL specificato.  
  
```  
virtual CString GetFileURL() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'URL completo.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetFileURL`.  
  
 `GetFileURL` è simile alla funzione membro [GetFilePath](#getfilepath), ad eccezione del fatto che restituisce l'URL nel formato `file://path`. Ad esempio, la chiamata `GetFileURL` per ottenere l'URL completo per `myfile.txt` restituisce l'URL `file://c:\myhtml\myfile.txt`.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind:: GetFileName](#getfilename).  
  
##  <a name="getlastaccesstime"></a>  CFileFind::GetLastAccessTime  
 Chiamare questa funzione membro per ottenere l'ora di ultimo accesso al file specificato.  
  
```  
virtual BOOL GetLastAccessTime(CTime& refTime) const;  
virtual BOOL GetLastAccessTime(FILETIME* pTimeStamp) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `refTime`  
 Un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto.  
  
 `pTimeStamp`  
 Un puntatore a un [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) struttura che contiene l'ora dell'ultimo accesso al file.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. 0 in caso contrario. `GetLastAccessTime` Restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo `CFileFind` oggetto.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetLastAccessTime`.  
  
> [!NOTE]
>  Non tutti i sistemi di file utilizzano la stessa semantica per implementare il timestamp restituito dalla funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni indicatore data e ora, se il file system o un server sottostante non supporta l'attributo ora. Vedere il [Win32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura per informazioni sui formati di ora. In alcuni sistemi di operazione, l'ora restituita è nel periodo di tempo zona locale al computer sono stati si trova il file. Vedere Win32 [FileTimeToLocalFileTime](http://msdn.microsoft.com/library/windows/desktop/ms724277) API per altre informazioni.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind:: GetLength](#getlength).  
  
##  <a name="getlastwritetime"></a>  CFileFind::GetLastWriteTime  
 Chiamare questa funzione membro per ottenere l'ultima volta il file è stato modificato.  
  
```  
virtual BOOL GetLastWriteTime(FILETIME* pTimeStamp) const;  
virtual BOOL GetLastWriteTime(CTime& refTime) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pTimeStamp`  
 Un puntatore a un [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) struttura che contiene l'ora dell'ultima modifica per il file.  
  
 `refTime`  
 Un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. 0 in caso contrario. `GetLastWriteTime` Restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo `CFileFind` oggetto.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetLastWriteTime`.  
  
> [!NOTE]
>  Non tutti i sistemi di file utilizzano la stessa semantica per implementare il timestamp restituito dalla funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni indicatore data e ora, se il file system o un server sottostante non supporta l'attributo ora. Vedere il [Win32_Find_Data](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura per informazioni sui formati di ora. In alcuni sistemi di operazione, l'ora restituita è nel periodo di tempo zona locale al computer sono stati si trova il file. Vedere Win32 [FileTimeToLocalFileTime](http://msdn.microsoft.com/library/windows/desktop/ms724277) API per altre informazioni.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind:: GetLength](#getlength).  
  
##  <a name="getlength"></a>  CFileFind::GetLength  
 Chiamare questa funzione membro per ottenere la lunghezza del file trovato, in byte.  
  
```  
ULONGLONG GetLength() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza del file trovato, in byte.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetLength`.  
  
 `GetLength` Usa la struttura di Win32 [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) per ottenere e restituire il valore delle dimensioni del file, in byte.  
  
> [!NOTE]
>  A partire da MFC 7.0 `GetLength` supporta i tipi integer a 64 bit. In precedenza esistente codice compilato con la versione più recente della libreria potrebbero gli avvisi di troncamento.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles#33](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_3.cpp)]  
  
##  <a name="getroot"></a>  CFileFind::GetRoot  
 Chiamare questa funzione membro per ottenere la radice del file trovato.  
  
```  
virtual CString GetRoot() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La radice della ricerca active.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetRoot`.  
  
 Questa funzione membro restituisce l'identificatore di unità e il nome di percorso utilizzato per avviare una ricerca. Ad esempio, la chiamata [FindFile](#findfile) con `*.dat` comporta `GetRoot` restituendo una stringa vuota. Il passaggio di un percorso, ad esempio `c:\windows\system\*.dll`a **FindFile** risultati `GetRoot` restituzione `c:\windows\system\`.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind:: GetFileName](#getfilename).  
  
##  <a name="isarchived"></a>  CFileFind::IsArchived  
 Chiamare questa funzione membro per determinare se è archiviato il file trovato.  
  
```  
BOOL IsArchived() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Applicazioni contrassegnare un file di archivio, che deve essere eseguito il backup o eliminato, con FILE_ATTRIBUTE_ARCHIVE, un attributo di file identificato nel [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura.  
  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsArchived`.  
  
 Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo degli attributi di file.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind:: GetLength](#getlength).  
  
##  <a name="iscompressed"></a>  CFileFind::IsCompressed  
 Chiamare questa funzione membro per determinare se il file trovato è compresso.  
  
```  
BOOL IsCompressed() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un file compresso è contrassegnato con FILE_ATTRIBUTE_COMPRESSED, un attributo di file identificati nel [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura. Per un file, questo attributo indica che tutti i dati nel file vengono compressi. Per una directory, questo attributo indica che la compressione è il valore predefinito per il file appena creato e le sottodirectory.  
  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsCompressed`.  
  
 Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo degli attributi di file.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind:: GetLength](#getlength).  
  
##  <a name="isdirectory"></a>  CFileFind::IsDirectory  
 Chiamare questa funzione membro per determinare se il file trovato è una directory.  
  
```  
BOOL IsDirectory() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un file che è una directory è contrassegnato con FILE_ATTRIBUTE_DIRECTORY un attributo di file identificato nel [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura.  
  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsDirectory`.  
  
 Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo degli attributi di file.  
  
### <a name="example"></a>Esempio  
 Il programma di piccole dimensioni dei ricorsione ogni directory nell'unità C:\ e stampa il nome della directory.  
  
 [!code-cpp[NVC_MFCFiles#34](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_4.cpp)]  
  
##  <a name="isdots"></a>  CFileFind::IsDots  
 Chiamare questa funzione membro per verificare se i marcatori di directory padre e di directory correnti durante l'iterazione di file.  
  
```  
virtual BOOL IsDots() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il file trovato con il nome "."o"...", che indica che il file trovato è in realtà una directory. In caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsDots`.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind::IsDirectory](#isdirectory).  
  
##  <a name="ishidden"></a>  CFileFind::IsHidden  
 Chiamare questa funzione membro per determinare se il file trovato è nascosto.  
  
```  
BOOL IsHidden() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 File nascosti, che sono contrassegnati con FILE_ATTRIBUTE_HIDDEN, un attributo di file identificati nel [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura. Un file nascosto non è incluso in un elenco delle directory standard.  
  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsHidden`.  
  
 Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo degli attributi di file.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind:: GetLength](#getlength).  
  
##  <a name="isnormal"></a>  CFileFind::IsNormal  
 Chiamare questa funzione membro per determinare se il file trovato è un normale file.  
  
```  
BOOL IsNormal() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 I file contrassegnati con FILE_ATTRIBUTE_NORMAL, un attributo di file identificati nel [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura. Un file normale non possiede altri attributi impostato. Tutti gli altri attributi di file eseguire l'override di questo attributo.  
  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsNormal`.  
  
 Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo degli attributi di file.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind:: GetLength](#getlength).  
  
##  <a name="isreadonly"></a>  CFileFind::IsReadOnly  
 Chiamare questa funzione membro per determinare se il file trovato è di sola lettura.  
  
```  
BOOL IsReadOnly() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un file di sola lettura è contrassegnato con FILE_ATTRIBUTE_READONLY, un attributo di file identificati nel [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura. Applicazioni possono leggere tali file, ma non è possibile scrivere o eliminarlo.  
  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsReadOnly`.  
  
 Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo degli attributi di file.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind:: GetLength](#getlength).  
  
##  <a name="issystem"></a>  CFileFind::IsSystem  
 Chiamare questa funzione membro per determinare se il file trovato è un file di sistema.  
  
```  
BOOL IsSystem() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un file di sistema è contrassegnato con FILE_ATTRIBUTE_SYSTEM, un attributo di file identificati nel [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura. Fa parte di un file di sistema, o viene utilizzato esclusivamente dal sistema operativo.  
  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsSystem`.  
  
 Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo degli attributi di file.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind:: GetLength](#getlength).  
  
##  <a name="istemporary"></a>  CFileFind::IsTemporary  
 Chiamare questa funzione membro per determinare se il file trovato è un file temporaneo.  
  
```  
BOOL IsTemporary() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un file temporaneo è contrassegnato con FILE_ATTRIBUTE_TEMPORARY, un attributo di file identificati nel [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura. Un file temporaneo viene utilizzato per l'archiviazione temporanea. Le applicazioni devono scrivere nel file solo se strettamente necessario. La maggior parte dei dati dei file rimane in memoria senza il supporto viene scaricata perché il file verrà presto eliminato.  
  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsTemporary`.  
  
 Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo degli attributi di file.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFileFind:: GetLength](#getlength).  
  
##  <a name="m_ptm"></a>  CFileFind::m_pTM  
 Puntatore a un oggetto `CAtlTransactionManager`.  
  
```  
CAtlTransactionManager* m_pTM;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="matchesmask"></a>  CFileFind::MatchesMask  
 Chiamare questa funzione membro per verificare gli attributi di file nel file trovato.  
  
```  
virtual BOOL MatchesMask(DWORD dwMask) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `dwMask`  
 Specifica uno o più attributi di file, identificati nel [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura, per il file trovato. Per eseguire una ricerca per più attributi, utilizzare l'operatore OR (&#124;) (operatore). È accettabile qualsiasi combinazione dei seguenti attributi:  
  
-   FILE_ATTRIBUTE_ARCHIVE il file è un file di archivio. Le applicazioni utilizzano questo attributo per contrassegnare i file di backup o la rimozione.  
  
-   FILE_ATTRIBUTE_COMPRESSED il file o la directory è compresso. Per un file, ciò significa che tutti i dati nel file vengono compressi. Per una directory, ciò significa che la compressione è il valore predefinito per il file appena creato e le sottodirectory.  
  
-   FILE_ATTRIBUTE_DIRECTORY il file è una directory.  
  
-   Il file FILE_ATTRIBUTE_NORMAL non possiede altri attributi impostato. Questo attributo è valido solo se utilizzato da solo. Tutti gli altri attributi di file eseguire l'override di questo attributo.  
  
-   FILE_ATTRIBUTE_HIDDEN il file è nascosto. Non è devono essere inclusi in un elenco delle directory standard.  
  
-   FILE_ATTRIBUTE_READONLY il file è di sola lettura. Applicazioni possono leggere il file ma non è possibile scrivere o eliminarlo.  
  
-   FILE_ATTRIBUTE_SYSTEM il file fa parte di o viene utilizzato esclusivamente dal sistema operativo.  
  
-   FILE_ATTRIBUTE_TEMPORARY il file è utilizzato per l'archiviazione temporanea. Le applicazioni devono scrivere nel file solo se strettamente necessario. La maggior parte dei dati dei file rimane in memoria senza il supporto viene scaricata perché il file verrà presto eliminato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Per ottenere informazioni dettagliate sull'errore, chiamare la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `MatchesMask`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles#35](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_5.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFtpFileFind (classe)](../../mfc/reference/cftpfilefind-class.md)   
 [Classe CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md)   
 [CInternetFile (classe)](../../mfc/reference/cinternetfile-class.md)   
 [CGopherFile (classe)](../../mfc/reference/cgopherfile-class.md)   
 [Classe CHttpFile](../../mfc/reference/chttpfile-class.md)

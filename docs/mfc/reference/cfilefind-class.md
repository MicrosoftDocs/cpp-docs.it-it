---
title: Classe CFileFind | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CFileFind
dev_langs:
- C++
helpviewer_keywords:
- files [C++], finding
- Internet files [C++], finding
- CFileFind class
- URLs [C++], searching for
- local files
- local files, searching for
ms.assetid: 9990068c-b023-4114-9580-a50182d15240
caps.latest.revision: 22
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
ms.openlocfilehash: d7e6500dfc0ff24f35dd021a54080eb7ba7f1655
ms.lasthandoff: 02/24/2017

---
# <a name="cfilefind-class"></a>Classe CFileFind
Esegue ricerche di file locali ed è la classe base per [CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md) e [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md), che eseguono ricerche di file su Internet.  
  
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
|[CFileFind::FindFile](#findfile)|Cerca in una directory per un nome file specificato.|  
|[CFileFind::FindNextFile](#findnextfile)|Continua la ricerca di file da una precedente chiamata a [FindFile](#findfile).|  
|[CFileFind::GetCreationTime](#getcreationtime)|Ottiene l'ora che di creazione del file.|  
|[CFileFind:: GetFileName](#getfilename)|Ottiene il nome, inclusa l'estensione, del file trovato|  
|[CFileFind::GetFilePath](#getfilepath)|Ottiene il percorso completo del file trovato.|  
|[CFileFind::GetFileTitle](#getfiletitle)|Ottiene il titolo del file trovato. Il titolo non include l'estensione.|  
|[CFileFind::GetFileURL](#getfileurl)|Ottiene l'URL, incluso il percorso del file, del file trovato.|  
|[CFileFind::GetLastAccessTime](#getlastaccesstime)|Ottiene l'ora dell'ultimo accesso al file.|  
|[CFileFind::GetLastWriteTime](#getlastwritetime)|Ottiene l'ora il file ultimo è stato modificato e salvato.|  
|[CFileFind:: GetLength](#getlength)|Ottiene la lunghezza del file trovato, in byte.|  
|[CFileFind::GetRoot](#getroot)|Ottiene la directory radice del file trovato.|  
|[CFileFind::IsArchived](#isarchived)|Determina se viene archiviato il file trovato.|  
|[CFileFind::IsCompressed](#iscompressed)|Determina se il file trovato è compresso.|  
|[CFileFind::IsDirectory](#isdirectory)|Determina se il file trovato è una directory.|  
|[CFileFind::IsDots](#isdots)|Determina se il nome del file trovato con il nome "."o"...", che indica che è una directory.|  
|[CFileFind::IsHidden](#ishidden)|Determina se il file trovato è nascosto.|  
|[CFileFind::IsNormal](#isnormal)|Determina se il file trovato è normale (in altre parole, non possiede altri attributi).|  
|[CFileFind::IsReadOnly](#isreadonly)|Determina se il file trovato è di sola lettura.|  
|[CFileFind::IsSystem](#issystem)|Determina se il file trovato un file di sistema.|  
|[CFileFind::IsTemporary](#istemporary)|Determina se il file trovato è temporaneo.|  
|[CFileFind::MatchesMask](#matchesmask)|Indica gli attributi di file desiderato del file da trovare.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileFind::CloseContext](#closecontext)|Chiude il file specificato dall'handle di ricerca corrente.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileFind::m_pTM](#m_ptm)|Puntatore a un oggetto `CAtlTransactionManager`.|  
  
## <a name="remarks"></a>Note  
 `CFileFind`incluse le funzioni membro che iniziano una ricerca, individuare un file e restituiscono il titolo, nome o percorso del file. Per ricerche su Internet, la funzione membro [GetFileURL](#getfileurl) restituisce l'URL del file.  
  
 `CFileFind`è la classe base per altre due classi MFC progettata per cercare i tipi di server specifico: `CGopherFileFind` funziona in modo specifico con i server gopher, e `CFtpFileFind` funziona in modo specifico con i server FTP. Insieme, queste tre classi forniscono un meccanismo semplice per il client trovare i file, indipendentemente dal protocollo del server, il tipo di file o percorso, in un computer locale o un server remoto.  
  
 Il codice seguente verrà enumerati tutti i file nella directory corrente, il nome di ogni file di stampa:  
  
 [!code-cpp[NVC_MFCFiles&#31;](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_1.cpp)]  
  
 Per semplificare l'esempio, questo codice utilizza la libreria Standard C++ `cout` (classe). Il `cout` riga può essere sostituita con una chiamata a `CListBox::AddString`, ad esempio, in un programma con un'interfaccia utente grafica.  
  
 Per ulteriori informazioni su come usare `CFileFind` e le altre classi WinInet, vedere l'articolo [Internet programmazione con WinInet](../../mfc/win32-internet-extensions-wininet.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CFileFind`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="a-namecfilefinda--cfilefindcfilefind"></a><a name="cfilefind"></a>CFileFind::CFileFind  
 Questa funzione membro viene chiamata quando un `CFileFind` oggetto viene costruito.  
  
```  
CFileFind();  
CFileFind(CAtlTransactionManager* pTM);
```  
  
### <a name="parameters"></a>Parametri  
 `pTM`  
 Puntatore all'oggetto CAtlTransactionManager  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileFind:: GetFileName](#getfilename).  
  
##  <a name="a-nameclosea--cfilefindclose"></a><a name="close"></a>CFileFind::Close  
 Chiamare questa funzione membro per terminare la ricerca, ripristinare il contesto e rilasciare tutte le risorse.  
  
```  
void Close();
```  
  
### <a name="remarks"></a>Note  
 Dopo la chiamata **Chiudi**, non è necessario creare un nuovo `CFileFind` istanza prima di chiamare [FindFile](#findfile) per iniziare una nuova ricerca.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileFind:: GetFileName](#getfilename).  
  
##  <a name="a-nameclosecontexta--cfilefindclosecontext"></a><a name="closecontext"></a>CFileFind::CloseContext  
 Chiude il file specificato dall'handle di ricerca corrente.  
  
```  
virtual void CloseContext();
```  
  
### <a name="remarks"></a>Note  
 Chiude il file specificato dal valore corrente dell'handle di ricerca. Eseguire l'override di questa funzione per modificare il comportamento predefinito.  
  
 È necessario chiamare il [FindFile](#findfile) o [FindNextFile](#findnextfile) funzioni almeno una volta per recuperare un handle di ricerca valida. Il **FindFile** e `FindNextFile` utilizzano l'handle di ricerca per individuare i file con nomi che corrispondano al nome specificato.  
  
##  <a name="a-namefindfilea--cfilefindfindfile"></a><a name="findfile"></a>CFileFind::FindFile  
 Chiamare questa funzione membro per aprire un file da cercare.  
  
```  
virtual BOOL FindFile(
    LPCTSTR pstrName = NULL,  
    DWORD dwUnused = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `pstrName`  
 Un puntatore a una stringa contenente il nome del file da trovare. Se si passa **NULL** per `pstrName`, **FindFile** viene un carattere jolly (*.\*) ricerca.  
  
 *dwUnused*  
 Riservato per rendere **FindFile** polimorfico con le classi derivate. Deve essere 0.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Per ottenere ulteriori informazioni sull'errore, chiamare la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
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
  Vedere l'esempio per [CFileFind::IsDirectory](#isdirectory).  
  
##  <a name="a-namefindnextfilea--cfilefindfindnextfile"></a><a name="findnextfile"></a>CFileFind::FindNextFile  
 Chiamare questa funzione membro per continuare la ricerca di file da una precedente chiamata a [FindFile](#findfile).  
  
```  
virtual BOOL FindNextFile();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se sono presenti più file; zero se il file trovato è quella più recente nella directory o se si è verificato un errore. Per ottenere ulteriori informazioni sull'errore, chiamare la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360). Se il file è l'ultimo file nella directory, oppure se nessuna corrispondenza file sono disponibile, il `GetLastError` funzione restituisce ERROR_NO_MORE_FILES.  
  
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
  
 `FindNextFile`esegue il wrapping della funzione Win32 [FindNextFile](http://msdn.microsoft.com/library/windows/desktop/aa364428).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileFind::IsDirectory](#isdirectory).  
  
##  <a name="a-namegetcreationtimea--cfilefindgetcreationtime"></a><a name="getcreationtime"></a>CFileFind::GetCreationTime  
 Chiamare questa funzione membro per ottenere l'ora di creazione del file specificato.  
  
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
 Diverso da zero se ha esito positivo. 0 se ha esito negativo. `GetCreationTime`Restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo `CFileFind` oggetto.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetCreationTime`.  
  
> [!NOTE]
>  Non tutti i sistemi di file utilizzano la stessa semantica per implementare il timestamp restituito da questa funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni indicatore data e ora, se il file system o server sottostante non supporta l'attributo ora. Vedere il [Win32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura per informazioni sui formati di ora. In alcuni sistemi di operazione, l'ora restituita è nel periodo di tempo sono state zona locale al computer si trova il file. Vedere Win32 [FileTimeToLocalFileTime](http://msdn.microsoft.com/library/windows/desktop/ms724277) API per ulteriori informazioni.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileFind:: GetLength](#getlength).  
  
##  <a name="a-namegetfilenamea--cfilefindgetfilename"></a><a name="getfilename"></a>CFileFind:: GetFileName  
 Chiamare questa funzione membro per ottenere il nome del file trovato.  
  
```  
virtual CString GetFileName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nome del file trovato più di recente.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare GetFileName.  
  
 `GetFileName`è uno dei tre `CFileFind` funzioni membro che restituiscono alcuni formati del nome del file. Nell'elenco seguente vengono descritti i tre e come variano:  
  
- `GetFileName`Restituisce il nome del file, inclusa l'estensione. Ad esempio, la chiamata `GetFileName` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il nome del file `myfile.txt`.  
  
- [GetFilePath](#getfilepath) restituisce il percorso completo del file. Ad esempio, la chiamata `GetFilePath` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il percorso del file `c:\myhtml\myfile.txt`.  
  
- [GetFileTitle](#getfiletitle) restituisce il nome del file, esclusa l'estensione del file. Ad esempio, la chiamata `GetFileTitle` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il nome del file `myfile`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles n.&32;](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_2.cpp)]  
  
##  <a name="a-namegetfilepatha--cfilefindgetfilepath"></a><a name="getfilepath"></a>CFileFind::GetFilePath  
 Chiamare questa funzione membro per ottenere il percorso completo del file specificato.  
  
```  
virtual CString GetFilePath() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il percorso del file specificato.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetFilePath`.  
  
 `GetFilePath`è uno dei tre `CFileFind` funzioni membro che restituiscono alcuni formati del nome del file. Nell'elenco seguente vengono descritti i tre e come variano:  
  
- [GetFileName](#getfilename) restituisce il nome del file, inclusa l'estensione. Ad esempio, la chiamata `GetFileName` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il nome del file `myfile.txt`.  
  
- `GetFilePath`Restituisce l'intero percorso del file. Ad esempio, la chiamata `GetFilePath` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il percorso del file `c:\myhtml\myfile.txt`.  
  
- [GetFileTitle](#getfiletitle) restituisce il nome del file, esclusa l'estensione del file. Ad esempio, la chiamata `GetFileTitle` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il nome del file `myfile`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileFind:: GetFileName](#getfilename).  
  
##  <a name="a-namegetfiletitlea--cfilefindgetfiletitle"></a><a name="getfiletitle"></a>CFileFind::GetFileTitle  
 Chiamare questa funzione membro per il titolo del file trovato.  
  
```  
virtual CString GetFileTitle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il titolo del file.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetFileTitle`.  
  
 `GetFileTitle`è uno dei tre `CFileFind` funzioni membro che restituiscono alcuni formati del nome del file. Nell'elenco seguente vengono descritti i tre e come variano:  
  
- [GetFileName](#getfilename) restituisce il nome del file, inclusa l'estensione. Ad esempio, la chiamata `GetFileName` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il nome del file `myfile.txt`.  
  
- [GetFilePath](#getfilepath) restituisce il percorso completo del file. Ad esempio, la chiamata `GetFilePath` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il percorso del file `c:\myhtml\myfile.txt`.  
  
- `GetFileTitle`Restituisce il nome del file, esclusa l'estensione del file. Ad esempio, la chiamata `GetFileTitle` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il nome del file `myfile`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileFind:: GetFileName](#getfilename).  
  
##  <a name="a-namegetfileurla--cfilefindgetfileurl"></a><a name="getfileurl"></a>CFileFind::GetFileURL  
 Chiamare questa funzione membro per recuperare l'URL specificato.  
  
```  
virtual CString GetFileURL() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'URL completo.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetFileURL`.  
  
 `GetFileURL`è simile alla funzione membro [GetFilePath](#getfilepath), ad eccezione del fatto che restituisce l'URL nel formato `file://path`. Ad esempio, la chiamata `GetFileURL` per ottenere l'URL completo per `myfile.txt` restituisce l'URL `file://c:\myhtml\myfile.txt`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileFind:: GetFileName](#getfilename).  
  
##  <a name="a-namegetlastaccesstimea--cfilefindgetlastaccesstime"></a><a name="getlastaccesstime"></a>CFileFind::GetLastAccessTime  
 Chiamare questa funzione membro per ottenere l'ora di ultimo accesso al file specificato.  
  
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
 Diverso da zero se ha esito positivo. 0 se ha esito negativo. `GetLastAccessTime`Restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo `CFileFind` oggetto.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetLastAccessTime`.  
  
> [!NOTE]
>  Non tutti i sistemi di file utilizzano la stessa semantica per implementare il timestamp restituito da questa funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni indicatore data e ora, se il file system o server sottostante non supporta l'attributo ora. Vedere il [Win32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura per informazioni sui formati di ora. In alcuni sistemi di operazione, l'ora restituita è nel periodo di tempo sono state zona locale al computer si trova il file. Vedere Win32 [FileTimeToLocalFileTime](http://msdn.microsoft.com/library/windows/desktop/ms724277) API per ulteriori informazioni.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileFind:: GetLength](#getlength).  
  
##  <a name="a-namegetlastwritetimea--cfilefindgetlastwritetime"></a><a name="getlastwritetime"></a>CFileFind::GetLastWriteTime  
 Chiamare questa funzione membro per ottenere l'ultima modifica del file.  
  
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
 Diverso da zero se ha esito positivo. 0 se ha esito negativo. `GetLastWriteTime`Restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo `CFileFind` oggetto.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetLastWriteTime`.  
  
> [!NOTE]
>  Non tutti i sistemi di file utilizzano la stessa semantica per implementare il timestamp restituito da questa funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni indicatore data e ora, se il file system o server sottostante non supporta l'attributo ora. Vedere il [Win32_Find_Data](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura per informazioni sui formati di ora. In alcuni sistemi di operazione, l'ora restituita è nel periodo di tempo sono state zona locale al computer si trova il file. Vedere Win32 [FileTimeToLocalFileTime](http://msdn.microsoft.com/library/windows/desktop/ms724277) API per ulteriori informazioni.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileFind:: GetLength](#getlength).  
  
##  <a name="a-namegetlengtha--cfilefindgetlength"></a><a name="getlength"></a>CFileFind:: GetLength  
 Chiamare questa funzione membro per recuperare la lunghezza del file trovato, in byte.  
  
```  
ULONGLONG GetLength() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza del file trovato, in byte.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetLength`.  
  
 `GetLength`Usa la struttura Win32 [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) per ottenere e restituire il valore delle dimensioni del file, in byte.  
  
> [!NOTE]
>  A partire da MFC 7.0, `GetLength` supporta i tipi integer a 64 bit. In precedenza esistente codice compilato con la versione più recente della libreria potrebbero gli avvisi di troncamento.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles n.&33;](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_3.cpp)]  
  
##  <a name="a-namegetroota--cfilefindgetroot"></a><a name="getroot"></a>CFileFind::GetRoot  
 Chiamare questa funzione membro per ottenere la radice del file trovato.  
  
```  
virtual CString GetRoot() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La radice della ricerca active.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetRoot`.  
  
 Questa funzione membro restituisce l'identificatore di unità e il percorso utilizzato per avviare una ricerca. Ad esempio, la chiamata [FindFile](#findfile) con `*.dat` comporta `GetRoot` restituendo una stringa vuota. Il passaggio di un percorso, ad esempio `c:\windows\system\*.dll`in **FindFile** risultati `GetRoot` restituzione `c:\windows\system\`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileFind:: GetFileName](#getfilename).  
  
##  <a name="a-nameisarchiveda--cfilefindisarchived"></a><a name="isarchived"></a>CFileFind::IsArchived  
 Chiamare questa funzione membro per determinare se è archiviato il file trovato.  
  
```  
BOOL IsArchived() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Applicazioni contrassegnare un file di archivio, viene eseguito il backup o la rimozione, con FILE_ATTRIBUTE_ARCHIVE, identificato un attributo di file di [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura.  
  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsArchived`.  
  
 Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo di attributi di file.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileFind:: GetLength](#getlength).  
  
##  <a name="a-nameiscompresseda--cfilefindiscompressed"></a><a name="iscompressed"></a>CFileFind::IsCompressed  
 Chiamare questa funzione membro per determinare se il file trovato è compresso.  
  
```  
BOOL IsCompressed() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un file compresso è contrassegnato con FILE_ATTRIBUTE_COMPRESSED, un attributo di file identificata la [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura. Per un file, questo attributo indica che tutti i dati nel file vengono compressi. Per una directory, questo attributo indica che la compressione è il valore predefinito per i file appena creati e le sottodirectory.  
  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsCompressed`.  
  
 Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo di attributi di file.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileFind:: GetLength](#getlength).  
  
##  <a name="a-nameisdirectorya--cfilefindisdirectory"></a><a name="isdirectory"></a>CFileFind::IsDirectory  
 Chiamare questa funzione membro per determinare se il file trovato è una directory.  
  
```  
BOOL IsDirectory() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un file che è una directory viene contrassegnato con FILE_ATTRIBUTE_DIRECTORY un attributo di file identificato nel [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura.  
  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsDirectory`.  
  
 Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo di attributi di file.  
  
### <a name="example"></a>Esempio  
 Questo piccolo programma scorre tutte le directory dell'unità C:\ e viene stampato il nome della directory.  
  
 [!code-cpp[NVC_MFCFiles&#34;](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_4.cpp)]  
  
##  <a name="a-nameisdotsa--cfilefindisdots"></a><a name="isdots"></a>CFileFind::IsDots  
 Chiamare questa funzione membro per verificare se i marcatori di directory padre e di directory correnti durante l'iterazione tramite file.  
  
```  
virtual BOOL IsDots() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il file trovato è il nome "."o"...", che indica che il file trovato è in realtà una directory. In caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsDots`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileFind::IsDirectory](#isdirectory).  
  
##  <a name="a-nameishiddena--cfilefindishidden"></a><a name="ishidden"></a>CFileFind::IsHidden  
 Chiamare questa funzione membro per determinare se il file trovato è nascosto.  
  
```  
BOOL IsHidden() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 File nascosti, che sono contrassegnati con FILE_ATTRIBUTE_HIDDEN, un attributo di file identificato nel [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura. Un file nascosto non è incluso in un elenco delle directory standard.  
  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsHidden`.  
  
 Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo di attributi di file.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileFind:: GetLength](#getlength).  
  
##  <a name="a-nameisnormala--cfilefindisnormal"></a><a name="isnormal"></a>CFileFind::IsNormal  
 Chiamare questa funzione membro per determinare se il file trovato è un file normale.  
  
```  
BOOL IsNormal() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 I file contrassegnati con FILE_ATTRIBUTE_NORMAL, un attributo di file identificato nel [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura. Un file normale non possiede altri attributi impostato. Tutti gli altri attributi di file eseguire l'override di questo attributo.  
  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsNormal`.  
  
 Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo di attributi di file.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileFind:: GetLength](#getlength).  
  
##  <a name="a-nameisreadonlya--cfilefindisreadonly"></a><a name="isreadonly"></a>CFileFind::IsReadOnly  
 Chiamare questa funzione membro per determinare se il file trovato è di sola lettura.  
  
```  
BOOL IsReadOnly() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un file di sola lettura viene contrassegnato con FILE_ATTRIBUTE_READONLY, un attributo di file identificata la [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura. Applicazioni possono leggere tali file, ma non può scrivere o eliminarlo.  
  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsReadOnly`.  
  
 Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo di attributi di file.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileFind:: GetLength](#getlength).  
  
##  <a name="a-nameissystema--cfilefindissystem"></a><a name="issystem"></a>CFileFind::IsSystem  
 Chiamare questa funzione membro per determinare se il file trovato è un file di sistema.  
  
```  
BOOL IsSystem() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un file di sistema è contrassegnato con FILE_ATTRIBUTE_SYSTEM, un attributo di file identificato nel [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura. Fa parte di un file di sistema o viene utilizzato esclusivamente dal sistema operativo.  
  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsSystem`.  
  
 Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo di attributi di file.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileFind:: GetLength](#getlength).  
  
##  <a name="a-nameistemporarya--cfilefindistemporary"></a><a name="istemporary"></a>CFileFind::IsTemporary  
 Chiamare questa funzione membro per determinare se il file trovato è un file temporaneo.  
  
```  
BOOL IsTemporary() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un file temporaneo viene contrassegnato con FILE_ATTRIBUTE_TEMPORARY, un attributo di file identificata la [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura. Un file temporaneo viene utilizzato per l'archiviazione temporanea. Le applicazioni devono scrivere nel file solo se assolutamente necessario. La maggior parte dei dati del file rimane in memoria senza essere scaricate nel supporto di perché il file verrà presto eliminato.  
  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsTemporary`.  
  
 Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo di attributi di file.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileFind:: GetLength](#getlength).  
  
##  <a name="a-namemptma--cfilefindmptm"></a><a name="m_ptm"></a>CFileFind::m_pTM  
 Puntatore a un oggetto `CAtlTransactionManager`.  
  
```  
CAtlTransactionManager* m_pTM;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namematchesmaska--cfilefindmatchesmask"></a><a name="matchesmask"></a>CFileFind::MatchesMask  
 Chiamare questa funzione membro per verificare gli attributi del file nel file trovato.  
  
```  
virtual BOOL MatchesMask(DWORD dwMask) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `dwMask`  
 Specifica uno o più attributi di file, identificati nel [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) struttura, per il file trovato. Per cercare più attributi, utilizzare l'operatore OR bit per bit (operatore) (|). È accettabile qualsiasi combinazione dei seguenti attributi:  
  
-   FILE_ATTRIBUTE_ARCHIVE il file è un file di archivio. Le applicazioni utilizzano questo attributo per contrassegnare i file di backup o la rimozione.  
  
-   FILE_ATTRIBUTE_COMPRESSED il file o la directory viene compresso. Per un file, ciò significa che tutti i dati nel file vengono compressi. Per una directory, ciò significa che la compressione è il valore predefinito per i file appena creati e le sottodirectory.  
  
-   FILE_ATTRIBUTE_DIRECTORY il file è una directory.  
  
-   FILE_ATTRIBUTE_NORMAL il file non dispone di altri attributi impostato. Questo attributo è valido solo se utilizzato da solo. Tutti gli altri attributi di file eseguire l'override di questo attributo.  
  
-   FILE_ATTRIBUTE_HIDDEN il file è nascosto. Non è devono essere inclusi in un elenco delle directory standard.  
  
-   FILE_ATTRIBUTE_READONLY il file è di sola lettura. Le applicazioni possono leggere il file ma non è la scrittura o eliminarlo.  
  
-   FILE_ATTRIBUTE_SYSTEM il file fa parte di o viene utilizzato esclusivamente dal sistema operativo.  
  
-   FILE_ATTRIBUTE_TEMPORARY il file è utilizzato per l'archiviazione temporanea. Le applicazioni devono scrivere nel file solo se assolutamente necessario. La maggior parte dei dati del file rimane in memoria senza essere scaricate nel supporto di perché il file verrà presto eliminato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Per ottenere ulteriori informazioni sull'errore, chiamare la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `MatchesMask`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles&#35;](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_5.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFtpFileFind (classe)](../../mfc/reference/cftpfilefind-class.md)   
 [Classe CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md)   
 [CInternetFile (classe)](../../mfc/reference/cinternetfile-class.md)   
 [CGopherFile (classe)](../../mfc/reference/cgopherfile-class.md)   
 [Classe CHttpFile](../../mfc/reference/chttpfile-class.md)


---
title: Classe CFileFind
ms.date: 11/04/2016
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
ms.openlocfilehash: 5534b61b3c588c79c0120f1a5bc8064b5a605e8a
ms.sourcegitcommit: ecf274bcfe3a977c48745aaa243e5e731f1fdc5f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2019
ms.locfileid: "66503786"
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
|[CFileFind::FindNextFile](#findnextfile)|Continua la ricerca di file da una chiamata precedente a [FindFile](#findfile).|
|[CFileFind::GetCreationTime](#getcreationtime)|Ottiene l'ora di creazione del file.|
|[CFileFind::GetFileName](#getfilename)|Ottiene il nome, inclusa l'estensione, del file trovato|
|[CFileFind::GetFilePath](#getfilepath)|Ottiene il percorso completo del file trovato.|
|[CFileFind::GetFileTitle](#getfiletitle)|Ottiene il titolo del file trovato. Il titolo non include l'estensione.|
|[CFileFind::GetFileURL](#getfileurl)|Ottiene l'URL, incluso il percorso del file, del file trovato.|
|[CFileFind::GetLastAccessTime](#getlastaccesstime)|Ottiene l'ora dell'ultimo accesso al file.|
|[CFileFind::GetLastWriteTime](#getlastwritetime)|Ottiene l'ora il file ultimo è stato modificato e salvato.|
|[CFileFind::GetLength](#getlength)|Ottiene la lunghezza del file trovato, in byte.|
|[CFileFind::GetRoot](#getroot)|Ottiene la directory radice del file trovato.|
|[CFileFind::IsArchived](#isarchived)|Determina se viene archiviato il file trovato.|
|[CFileFind::IsCompressed](#iscompressed)|Determina se il file trovato è compresso.|
|[CFileFind::IsDirectory](#isdirectory)|Determina se il file trovato è una directory.|
|[CFileFind::IsDots](#isdots)|Determina se il nome del file trovato con il nome "."o"..", che indica che è una directory.|
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

|Nome|Descrizione|
|----------|-----------------|
|[CFileFind::m_pTM](#m_ptm)|Puntatore a un oggetto `CAtlTransactionManager`.|

## <a name="remarks"></a>Note

`CFileFind` include funzioni membro che iniziano una ricerca, individuare un file e restituiscono il titolo, nome o percorso del file. Per ricerche su Internet, la funzione membro [GetFileURL](#getfileurl) restituisce l'URL del file.

`CFileFind` è la classe base per due altre classi MFC progettata per cercare i tipi di server specifico: `CGopherFileFind` funziona in modo specifico con i server gopher, e `CFtpFileFind` funziona in modo specifico con i server FTP. Insieme, queste tre classi forniscono un meccanismo senza problemi per il client trovare i file, indipendentemente dal protocollo del server, il tipo di file o percorso, in un computer locale o un server remoto.

Il codice seguente permette di enumerare tutti i file nella directory corrente, stampandone il nome di ogni file:

[!code-cpp[NVC_MFCFiles#31](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_1.cpp)]

Per semplificare l'esempio, questo codice Usa la libreria Standard C++ `cout` classe. Il `cout` riga può essere sostituita con una chiamata a `CListBox::AddString`, ad esempio, in un programma con un'interfaccia utente grafica.

Per altre informazioni su come usare `CFileFind` e le altre classi WinInet, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

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

*pTM*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFileFind:: GetFileName](#getfilename).

##  <a name="close"></a>  CFileFind::Close

Chiamare questa funzione membro per terminare la ricerca, ripristinare il contesto e rilascia tutte le risorse.

```
void Close();
```

### <a name="remarks"></a>Note

Dopo avere chiamato `Close`, non è necessario creare un nuovo `CFileFind` istanza prima di chiamare [FindFile](#findfile) per iniziare una nuova ricerca.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFileFind:: GetFileName](#getfilename).

##  <a name="closecontext"></a>  CFileFind::CloseContext

Chiude il file specificato dall'handle di ricerca corrente.

```
virtual void CloseContext();
```

### <a name="remarks"></a>Note

Chiude il file specificato dal valore corrente dell'handle di ricerca. Eseguire l'override di questa funzione per modificare il comportamento predefinito.

È necessario chiamare il [FindFile](#findfile) oppure [FindNextFile](#findnextfile) funzioni almeno una volta per recuperare un handle di ricerca valida. Il `FindFile` e `FindNextFile` funzioni utilizzano l'handle di ricerca per individuare i file con nomi che corrispondono a un determinato nome.

##  <a name="findfile"></a>  CFileFind::FindFile

Chiamare questa funzione membro per aprire un file da cercare.

```
virtual BOOL FindFile(
    LPCTSTR pstrName = NULL,
    DWORD dwUnused = 0);
```

### <a name="parameters"></a>Parametri

*pstrName*<br/>
Un puntatore a una stringa contenente il nome del file da trovare. Se viene passato NULL per *pstrName*, `FindFile` viene un carattere jolly (*.\*) ricerca.

*dwUnused*<br/>
Riservato per rendere `FindFile` polimorfico con le classi derivate. Deve essere 0.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Per ottenere informazioni sull'errore, chiamare la funzione Win32 [GetLastError](/windows/desktop/api/errhandlingapi/nf-errhandlingapi-getlasterror).

### <a name="remarks"></a>Note

Dopo avere chiamato `FindFile` per avviare la ricerca di file, chiamare [FindNextFile](#findnextfile) per recuperare i file successivi. È necessario chiamare `FindNextFile` almeno una volta prima di chiamare qualsiasi di questo attributo funzioni membro:

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

  Vedere l'esempio relativo [CFileFind::IsDirectory](#isdirectory).

##  <a name="findnextfile"></a>  CFileFind::FindNextFile

Chiamare questa funzione membro per continuare la ricerca di file da una chiamata precedente a [FindFile](#findfile).

```
virtual BOOL FindNextFile();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se sono presenti più file; zero se il file è stato trovato è l'ultimo nella directory o se si è verificato un errore. Per ottenere informazioni sull'errore, chiamare la funzione Win32 [GetLastError](/windows/desktop/api/errhandlingapi/nf-errhandlingapi-getlasterror). Se il file è stato trovato l'ultimo file nella directory o se non corrisponde ad alcuna sono disponibili i file, il `GetLastError` funzione restituisce ERROR_NO_MORE_FILES.

### <a name="remarks"></a>Note

È necessario chiamare `FindNextFile` almeno una volta prima di chiamare qualsiasi di questo attributo funzioni membro:

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

`FindNextFile` esegue il wrapping della funzione Win32 [FindNextFile](/windows/desktop/api/fileapi/nf-fileapi-findnextfilea).

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFileFind::IsDirectory](#isdirectory).

##  <a name="getcreationtime"></a>  CFileFind::GetCreationTime

Chiamare questa funzione membro per ottenere l'ora di creazione del file specificato.

```
virtual BOOL GetCreationTime(FILETIME* pTimeStamp) const;
virtual BOOL GetCreationTime(CTime& refTime) const;
```

### <a name="parameters"></a>Parametri

*pTimeStamp*<br/>
Un puntatore a un [FILETIME](/windows/desktop/api/minwinbase/ns-minwinbase-filetime) struttura che contiene l'ora di creazione del file.

*refTime*<br/>
Un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo. 0 se ha esito negativo. `GetCreationTime` Restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo `CFileFind` oggetto.

### <a name="remarks"></a>Note

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetCreationTime`.

> [!NOTE]
>  Non tutti i sistemi di file utilizzano la stessa semantica per implementare il timestamp restituito da questa funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni di indicatore di data e ora, se il file system o server sottostante non supporta l'attributo ora. Vedere le [Win32_FIND_DATA](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) struttura per informazioni sui formati di ora. In alcuni sistemi di operazione, l'ora restituita è nel periodo di tempo sono state zona locale nel computer si trova il file. Vedere Win32 [FileTimeToLocalFileTime](/windows/desktop/api/fileapi/nf-fileapi-filetimetolocalfiletime) API per altre informazioni.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFileFind:: GetLength](#getlength).

##  <a name="getfilename"></a>  CFileFind::GetFileName

Chiamare questa funzione membro per ottenere il nome del file trovato.

```
virtual CString GetFileName() const;
```

### <a name="return-value"></a>Valore restituito

Il nome del file di recente trovato.

### <a name="remarks"></a>Note

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare GetFileName.

`GetFileName` è uno dei tre `CFileFind` funzioni membro che restituiscono un tipo del nome del file. Nell'elenco seguente descrive i tre e come essi variano in base:

- `GetFileName` Restituisce il nome del file, inclusa l'estensione. Ad esempio, chiamando `GetFileName` per generare un messaggio utente sul file *c:\myhtml\myfile.txt* restituisce il nome file *MyFile*.

- [GetFilePath](#getfilepath) restituisce l'intero percorso del file. Ad esempio, chiamando `GetFilePath` per generare un messaggio utente sul file *c:\myhtml\myfile.txt* restituisce il percorso del file *c:\myhtml\myfile.txt*.

- [GetFileTitle](#getfiletitle) restituisce il nome del file, esclusa l'estensione di file. Ad esempio, chiamando `GetFileTitle` per generare un messaggio utente sul file *c:\myhtml\myfile.txt* restituisce il nome del file *myfile*.

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

`GetFilePath` è uno dei tre `CFileFind` funzioni membro che restituiscono un tipo del nome del file. Nell'elenco seguente descrive i tre e come essi variano in base:

- [GetFileName](#getfilename) restituisce il nome del file, inclusa l'estensione. Ad esempio, chiamando `GetFileName` per generare un messaggio utente sul file *c:\myhtml\myfile.txt* restituisce il nome file *MyFile*.

- `GetFilePath` Restituisce l'intero percorso del file. Ad esempio, chiamando `GetFilePath` per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il percorso del file `c:\myhtml\myfile.txt`.

- [GetFileTitle](#getfiletitle) restituisce il nome del file, esclusa l'estensione di file. Ad esempio, chiamando `GetFileTitle` per generare un messaggio utente sul file *c:\myhtml\myfile.txt* restituisce il nome del file *myfile*.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFileFind:: GetFileName](#getfilename).

##  <a name="getfiletitle"></a>  CFileFind::GetFileTitle

Chiamare questa funzione membro per ottenere il titolo del file trovato.

```
virtual CString GetFileTitle() const;
```

### <a name="return-value"></a>Valore restituito

Il titolo del file.

### <a name="remarks"></a>Note

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetFileTitle`.

`GetFileTitle` è uno dei tre `CFileFind` funzioni membro che restituiscono un tipo del nome del file. Nell'elenco seguente descrive i tre e come essi variano in base:

- [GetFileName](#getfilename) restituisce il nome del file, inclusa l'estensione. Ad esempio, chiamando `GetFileName` per generare un messaggio utente sul file *c:\myhtml\myfile.txt* restituisce il nome file *MyFile*.

- [GetFilePath](#getfilepath) restituisce l'intero percorso del file. Ad esempio, chiamando `GetFilePath` per generare un messaggio utente sul file *c:\myhtml\myfile.txt* restituisce il percorso del file *c:\myhtml\myfile.txt*.

- `GetFileTitle` Restituisce il nome del file, esclusa l'estensione di file. Ad esempio, chiamando `GetFileTitle` per generare un messaggio utente sul file *c:\myhtml\myfile.txt* restituisce il nome del file *myfile*.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFileFind:: GetFileName](#getfilename).

##  <a name="getfileurl"></a>  CFileFind::GetFileURL

Chiamare questa funzione membro per recuperare l'URL specificato.

```
virtual CString GetFileURL() const;
```

### <a name="return-value"></a>Valore restituito

L'URL completo.

### <a name="remarks"></a>Note

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetFileURL`.

`GetFileURL` è simile alla funzione membro [GetFilePath](#getfilepath), ad eccezione del fatto che restituisce l'URL nel formato `file://path`. Ad esempio, chiamando `GetFileURL` per ottenere l'URL completo *MyFile. txt* restituisce l'URL `file://c:\myhtml\myfile.txt`.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFileFind:: GetFileName](#getfilename).

##  <a name="getlastaccesstime"></a>  CFileFind::GetLastAccessTime

Chiamare questa funzione membro per ottenere l'ora di ultimo accesso al file specificato.

```
virtual BOOL GetLastAccessTime(CTime& refTime) const;
virtual BOOL GetLastAccessTime(FILETIME* pTimeStamp) const;
```

### <a name="parameters"></a>Parametri

*refTime*<br/>
Un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto.

*pTimeStamp*<br/>
Un puntatore a un [FILETIME](/windows/desktop/api/minwinbase/ns-minwinbase-filetime) struttura che contiene l'ora dell'ultimo accesso al file.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo. 0 se ha esito negativo. `GetLastAccessTime` Restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo `CFileFind` oggetto.

### <a name="remarks"></a>Note

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetLastAccessTime`.

> [!NOTE]
>  Non tutti i sistemi di file utilizzano la stessa semantica per implementare il timestamp restituito da questa funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni di indicatore di data e ora, se il file system o server sottostante non supporta l'attributo ora. Vedere le [Win32_FIND_DATA](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) struttura per informazioni sui formati di ora. In alcuni sistemi di operazione, l'ora restituita è nel periodo di tempo sono state zona locale nel computer si trova il file. Vedere Win32 [FileTimeToLocalFileTime](/windows/desktop/api/fileapi/nf-fileapi-filetimetolocalfiletime) API per altre informazioni.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFileFind:: GetLength](#getlength).

##  <a name="getlastwritetime"></a>  CFileFind::GetLastWriteTime

Chiamare questa funzione membro per ottenere l'ultima volta il file è stato modificato.

```
virtual BOOL GetLastWriteTime(FILETIME* pTimeStamp) const;
virtual BOOL GetLastWriteTime(CTime& refTime) const;
```

### <a name="parameters"></a>Parametri

*pTimeStamp*<br/>
Un puntatore a un [FILETIME](/windows/desktop/api/minwinbase/ns-minwinbase-filetime) struttura che contiene l'ora ultima scrittura di file.

*refTime*<br/>
Un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo. 0 se ha esito negativo. `GetLastWriteTime` Restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo `CFileFind` oggetto.

### <a name="remarks"></a>Note

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetLastWriteTime`.

> [!NOTE]
>  Non tutti i sistemi di file utilizzano la stessa semantica per implementare il timestamp restituito da questa funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni di indicatore di data e ora, se il file system o server sottostante non supporta l'attributo ora. Vedere le [Win32_Find_Data](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) struttura per informazioni sui formati di ora. In alcuni sistemi di operazione, l'ora restituita è nel periodo di tempo sono state zona locale nel computer si trova il file. Vedere Win32 [FileTimeToLocalFileTime](/windows/desktop/api/fileapi/nf-fileapi-filetimetolocalfiletime) API per altre informazioni.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFileFind:: GetLength](#getlength).

##  <a name="getlength"></a>  CFileFind::GetLength

Chiamare questa funzione membro per ottenere la lunghezza del file trovato, in byte.

```
ULONGLONG GetLength() const;
```

### <a name="return-value"></a>Valore restituito

La lunghezza del file trovato, in byte.

### <a name="remarks"></a>Note

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetLength`.

`GetLength` Usa la struttura Win32 [WIN32_FIND_DATA](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) per ottenere e restituire il valore delle dimensioni del file, in byte.

> [!NOTE]
>  A partire da MFC 7.0, `GetLength` supporta i tipi integer a 64 bit. In precedenza il codice esistente creato con questa versione più recente della libreria può generare degli avvisi di troncamento.

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

Questa funzione membro restituisce il nome di percorso usato per avviare la ricerca e l'identificatore di unità. Ad esempio, chiamando [FindFile](#findfile) con `*.dat` comporta `GetRoot` restituendo una stringa vuota. Si passa un percorso, ad esempio `c:\windows\system\*.dll`, in `FindFile` risultati `GetRoot` restituzione `c:\windows\system\`.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFileFind:: GetFileName](#getfilename).

##  <a name="isarchived"></a>  CFileFind::IsArchived

Chiamare questa funzione membro per determinare se è archiviato il file trovato.

```
BOOL IsArchived() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Le applicazioni contrassegnare un file di archivio, che è stato eseguito il backup o la rimozione, con FILE_ATTRIBUTE_ARCHIVE, un attributo di file identificato nel [WIN32_FIND_DATA](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) struttura.

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsArchived`.

Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo degli attributi file.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFileFind:: GetLength](#getlength).

##  <a name="iscompressed"></a>  CFileFind::IsCompressed

Chiamare questa funzione membro per determinare se il file trovato è compresso.

```
BOOL IsCompressed() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Un file compresso è contrassegnato con FILE_ATTRIBUTE_COMPRESSED, un attributo di file identificati nel [WIN32_FIND_DATA](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) struttura. Per un file, questo attributo indica che tutti i dati nel file vengono compressi. Per una directory, questo attributo indica che la compressione è il valore predefinito per nuovi file creati e le sottodirectory.

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsCompressed`.

Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo degli attributi file.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFileFind:: GetLength](#getlength).

##  <a name="isdirectory"></a>  CFileFind::IsDirectory

Chiamare questa funzione membro per determinare se il file trovato è una directory.

```
BOOL IsDirectory() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Un file che è una directory viene contrassegnato con FILE_ATTRIBUTE_DIRECTORY un attributo di file identificato nel [WIN32_FIND_DATA](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) struttura.

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsDirectory`.

Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo degli attributi file.

### <a name="example"></a>Esempio

Questo piccolo programma dei ricorsione tutte le directory nell'unità C:\ e stampa il nome della directory.

[!code-cpp[NVC_MFCFiles#34](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_4.cpp)]

##  <a name="isdots"></a>  CFileFind::IsDots

Chiamare questa funzione membro per verificare se i marcatori di directory padre e di directory correnti durante lo scorrimento dei file.

```
virtual BOOL IsDots() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il file trovato con il nome "."o"..", che indica che il file trovato è effettivamente una directory. In caso contrario 0.

### <a name="remarks"></a>Note

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsDots`.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFileFind::IsDirectory](#isdirectory).

##  <a name="ishidden"></a>  CFileFind::IsHidden

Chiamare questa funzione membro per determinare se il file trovato è nascosto.

```
BOOL IsHidden() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

I file nascosti, che sono contrassegnati con FILE_ATTRIBUTE_HIDDEN, un attributo di file identificati nel [WIN32_FIND_DATA](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) struttura. Un file nascosto non è incluso in un elenco delle directory standard.

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsHidden`.

Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo degli attributi file.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFileFind:: GetLength](#getlength).

##  <a name="isnormal"></a>  CFileFind::IsNormal

Chiamare questa funzione membro per determinare se il file trovato è un file normale.

```
BOOL IsNormal() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

I file contrassegnati con FILE_ATTRIBUTE_NORMAL, un attributo di file identificati nel [WIN32_FIND_DATA](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) struttura. Un file normale non possiede altri attributi impostato. Tutti gli altri attributi di file eseguire l'override di questo attributo.

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsNormal`.

Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo degli attributi file.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFileFind:: GetLength](#getlength).

##  <a name="isreadonly"></a>  CFileFind::IsReadOnly

Chiamare questa funzione membro per determinare se il file trovato è di sola lettura.

```
BOOL IsReadOnly() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Un file di sola lettura è contrassegnato con FILE_ATTRIBUTE_READONLY, un attributo di file identificati nel [WIN32_FIND_DATA](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) struttura. Le applicazioni possono leggere un file di questo tipo, ma non scrivervi o eliminarlo.

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsReadOnly`.

Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo degli attributi file.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFileFind:: GetLength](#getlength).

##  <a name="issystem"></a>  CFileFind::IsSystem

Chiamare questa funzione membro per determinare se il file trovato è un file di sistema.

```
BOOL IsSystem() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Un file system è contrassegnato con FILE_ATTRIBUTE_SYSTEM, un attributo di file identificati nel [WIN32_FIND_DATA](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) struttura. Fa parte di un file di sistema o viene utilizzato esclusivamente dal sistema operativo.

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsSystem`.

Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo degli attributi file.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFileFind:: GetLength](#getlength).

##  <a name="istemporary"></a>  CFileFind::IsTemporary

Chiamare questa funzione membro per determinare se il file trovato è un file temporaneo.

```
BOOL IsTemporary() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Un file temporaneo è contrassegnato con FILE_ATTRIBUTE_TEMPORARY, un attributo di file identificati nel [WIN32_FIND_DATA](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) struttura. Un file temporaneo viene utilizzato per l'archiviazione temporanea. Le applicazioni devono scrivere nel file solo se assolutamente necessario. La maggior parte dei dati del file rimane in memoria senza viene scaricata il supporto perché il file verrà presto eliminato.

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsTemporary`.

Vedere la funzione membro [MatchesMask](#matchesmask) per un elenco completo degli attributi file.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFileFind:: GetLength](#getlength).

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

*dwMask*<br/>
Specifica uno o più attributi di file, identificati nel [WIN32_FIND_DATA](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) struttura, per il file trovato. Per cercare più attributi, usare l'operatore OR bit per bit (&#124;) operatore. È accettabile qualsiasi combinazione dei seguenti attributi:

- FILE_ATTRIBUTE_ARCHIVE il file è un file di archivio. Le applicazioni usano questo attributo per contrassegnare i file per il backup o la rimozione.

- FILE_ATTRIBUTE_COMPRESSED file o della directory è compresso. Per un file, ciò significa che tutti i dati nel file vengono compressi. Per una directory, ciò significa che la compressione è il valore predefinito per nuovi file creati e le sottodirectory.

- FILE_ATTRIBUTE_DIRECTORY il file è una directory.

- Il file FILE_ATTRIBUTE_NORMAL non possiede altri attributi impostato. Questo attributo è valido solo se usato da solo. Tutti gli altri attributi di file eseguire l'override di questo attributo.

- FILE_ATTRIBUTE_HIDDEN il file è nascosto. Non è devono essere inclusi in un elenco delle directory standard.

- FILE_ATTRIBUTE_READONLY il file è di sola lettura. Le applicazioni possono leggere il file, ma non è possibile scrivervi oppure eliminarlo.

- FILE_ATTRIBUTE_SYSTEM il file fa parte di o viene utilizzato esclusivamente dal sistema operativo.

- FILE_ATTRIBUTE_TEMPORARY il file viene usato per l'archiviazione temporanea. Le applicazioni devono scrivere nel file solo se assolutamente necessario. La maggior parte dei dati del file rimane in memoria senza viene scaricata il supporto perché il file verrà presto eliminato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Per ottenere informazioni sull'errore, chiamare la funzione Win32 [GetLastError](/windows/desktop/api/errhandlingapi/nf-errhandlingapi-getlasterror).

### <a name="remarks"></a>Note

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `MatchesMask`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#35](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_5.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CFtpFileFind](../../mfc/reference/cftpfilefind-class.md)<br/>
[Classe CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md)<br/>
[Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)<br/>
[Classe CGopherFile](../../mfc/reference/cgopherfile-class.md)<br/>
[Classe CHttpFile](../../mfc/reference/chttpfile-class.md)

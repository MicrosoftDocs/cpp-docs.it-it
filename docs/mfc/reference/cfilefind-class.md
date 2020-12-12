---
description: 'Altre informazioni su: classe CFileFind'
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
ms.openlocfilehash: d47c45ac86386a6748ca212c569aeef568ca2a8a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97184504"
---
# <a name="cfilefind-class"></a>Classe CFileFind

Esegue ricerche di file locali ed è la classe di base per [CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md) e [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md), che eseguono ricerche di file su Internet.

## <a name="syntax"></a>Sintassi

```
class CFileFind : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CFileFind:: CFileFind](#cfilefind)|Costruisce un oggetto `CFileFind`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CFileFind:: Close](#close)|Chiude la richiesta di ricerca.|
|[CFileFind:: FindFile](#findfile)|Cerca un nome file specificato in una directory.|
|[CFileFind:: FindNextFile](#findnextfile)|Continua una ricerca di file da una chiamata precedente a [FindFile](#findfile).|
|[CFileFind:: GetCreationTime](#getcreationtime)|Ottiene l'ora di creazione del file.|
|[CFileFind:: GetFileName](#getfilename)|Ottiene il nome, inclusa l'estensione, del file trovato.|
|[CFileFind:: FilePath](#getfilepath)|Ottiene l'intero percorso del file trovato.|
|[CFileFind:: GetFileTitle](#getfiletitle)|Ottiene il titolo del file trovato. Il titolo non include l'estensione.|
|[CFileFind:: GetFileURL](#getfileurl)|Ottiene l'URL, incluso il percorso del file, del file trovato.|
|[CFileFind:: GetLastAccessTime](#getlastaccesstime)|Ottiene l'ora dell'ultimo accesso al file.|
|[CFileFind:: GetLastWriteTime](#getlastwritetime)|Ottiene l'ora dell'Ultima modifica e del salvataggio del file.|
|[CFileFind:: GetLength](#getlength)|Ottiene la lunghezza, in byte, del file trovato.|
|[CFileFind:: GetRoot](#getroot)|Ottiene la directory radice del file trovato.|
|[CFileFind:: inarchived](#isarchived)|Determina se il file trovato è archiviato.|
|[CFileFind:: compresso](#iscompressed)|Determina se il file trovato è compresso.|
|[CFileFind:: directory](#isdirectory)|Determina se il file trovato è una directory.|
|[CFileFind:: punti](#isdots)|Determina se il nome del file trovato ha il nome "." o "..", che indica che è in realtà una directory.|
|[CFileFind:: Hidden](#ishidden)|Determina se il file trovato è nascosto.|
|[CFileFind:: unnormal](#isnormal)|Determina se il file trovato è normale (in altre parole, non ha altri attributi).|
|[CFileFind:: IsReadOnly](#isreadonly)|Determina se il file trovato è di sola lettura.|
|[CFileFind:: System](#issystem)|Determina se il file trovato è un file di sistema.|
|[CFileFind:: untemporary](#istemporary)|Determina se il file trovato è temporaneo.|
|[CFileFind:: MatchesMask](#matchesmask)|Indica gli attributi file desiderati del file da trovare.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CFileFind:: CloseContext](#closecontext)|Chiude il file specificato dall'handle di ricerca corrente.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CFileFind:: m_pTM](#m_ptm)|Puntatore a un oggetto `CAtlTransactionManager`.|

## <a name="remarks"></a>Commenti

`CFileFind` include funzioni membro che iniziano una ricerca, individuano un file e restituiscono il titolo, il nome o il percorso del file. Per le ricerche Internet, la funzione membro [GetFileURL](#getfileurl) restituisce l'URL del file.

`CFileFind` è la classe di base per altre due classi MFC progettate per la ricerca di particolari tipi di server: `CGopherFileFind` funziona in modo specifico con i server gopher e `CFtpFileFind` funziona in modo specifico con i server FTP. Insieme, queste tre classi forniscono un meccanismo trasparente che consente al client di trovare i file, indipendentemente dal protocollo server, dal tipo di file o dal percorso, in un computer locale o in un server remoto.

Il codice seguente enumera tutti i file nella directory corrente, stampando il nome di ogni file:

[!code-cpp[NVC_MFCFiles#31](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_1.cpp)]

Per semplificare l'esempio, questo codice usa la classe della libreria standard C++ `cout` . La `cout` riga può essere sostituita con una chiamata a `CListBox::AddString` , ad esempio, in un programma con un'interfaccia utente grafica.

Per ulteriori informazioni sull'utilizzo di `CFileFind` e sulle altre classi WinInet, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CFileFind`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="cfilefindcfilefind"></a><a name="cfilefind"></a> CFileFind:: CFileFind

Questa funzione membro viene chiamata quando `CFileFind` viene costruito un oggetto.

```
CFileFind();
CFileFind(CAtlTransactionManager* pTM);
```

### <a name="parameters"></a>Parametri

*pTM*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: GetFileName](#getfilename).

## <a name="cfilefindclose"></a><a name="close"></a> CFileFind:: Close

Chiamare questa funzione membro per terminare la ricerca, reimpostare il contesto e rilasciare tutte le risorse.

```cpp
void Close();
```

### <a name="remarks"></a>Commenti

Dopo aver chiamato `Close` , non è necessario creare una nuova `CFileFind` istanza prima di chiamare [FindFile](#findfile) per iniziare una nuova ricerca.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: GetFileName](#getfilename).

## <a name="cfilefindclosecontext"></a><a name="closecontext"></a> CFileFind:: CloseContext

Chiude il file specificato dall'handle di ricerca corrente.

```
virtual void CloseContext();
```

### <a name="remarks"></a>Commenti

Chiude il file specificato dal valore corrente dell'handle di ricerca. Eseguire l'override di questa funzione per modificare il comportamento predefinito.

È necessario chiamare le funzioni [FindFile](#findfile) o [FindNextFile](#findnextfile) almeno una volta per recuperare un handle di ricerca valido. Le `FindFile` `FindNextFile` funzioni e usano l'handle di ricerca per individuare i file i cui nomi corrispondono a un determinato nome.

## <a name="cfilefindfindfile"></a><a name="findfile"></a> CFileFind:: FindFile

Chiamare questa funzione membro per aprire una ricerca di file.

```
virtual BOOL FindFile(
    LPCTSTR pstrName = NULL,
    DWORD dwUnused = 0);
```

### <a name="parameters"></a>Parametri

*pstrName*<br/>
Puntatore a una stringa che contiene il nome del file da trovare. Se si passa NULL per *pstrName*, `FindFile` esegue una ricerca con caratteri jolly (*. \* ).

*dwUnused*<br/>
Riservato per rendere `FindFile` polimorfico con le classi derivate. Deve essere 0.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Per ottenere informazioni estese sull'errore, chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror).

### <a name="remarks"></a>Commenti

Dopo avere chiamato `FindFile` per iniziare la ricerca del file, chiamare [FindNextFile](#findnextfile) per recuperare i file successivi. È necessario chiamare almeno `FindNextFile` una volta prima di chiamare una delle funzioni membro di attributo seguenti:

- [GetCreationTime](#getcreationtime)

- [GetFileName](#getfilename)

- [GetFileTitle](#getfiletitle)

- [GetFilePath](#getfilepath)

- [GetFileURL](#getfileurl)

- [GetLastAccessTime](#getlastaccesstime)

- [GetLastWriteTime](#getlastwritetime)

- [GetLength](#getlength)

- [GetRoot](#getroot)

- [Archivio di](#isarchived)

- [IsCompressed](#iscompressed)

- [IsDirectory](#isdirectory)

- [Puntini](#isdots)

- [IsHidden](#ishidden)

- [Normale](#isnormal)

- [IsReadOnly](#isreadonly)

- [IsSystem](#issystem)

- [IsTemporary](#istemporary)

- [MatchesMask](#matchesmask)

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: directory](#isdirectory).

## <a name="cfilefindfindnextfile"></a><a name="findnextfile"></a> CFileFind:: FindNextFile

Chiamare questa funzione membro per continuare la ricerca di un file da una chiamata precedente a [FindFile](#findfile).

```
virtual BOOL FindNextFile();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se sono presenti più file; zero se il file trovato è l'ultimo nella directory o se si è verificato un errore. Per ottenere informazioni estese sull'errore, chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror). Se il file trovato è l'ultimo file nella directory o se non è possibile trovare file corrispondenti, la `GetLastError` funzione restituisce ERROR_NO_MORE_FILES.

### <a name="remarks"></a>Commenti

È necessario chiamare almeno `FindNextFile` una volta prima di chiamare una delle funzioni membro di attributo seguenti:

- [GetCreationTime](#getcreationtime)

- [GetFileName](#getfilename)

- [GetFileTitle](#getfiletitle)

- [GetFilePath](#getfilepath)

- [GetFileURL](#getfileurl)

- [GetLastAccessTime](#getlastaccesstime)

- [GetLastWriteTime](#getlastwritetime)

- [GetLength](#getlength)

- [GetRoot](#getroot)

- [Archivio di](#isarchived)

- [IsCompressed](#iscompressed)

- [IsDirectory](#isdirectory)

- [Puntini](#isdots)

- [IsHidden](#ishidden)

- [Normale](#isnormal)

- [IsReadOnly](#isreadonly)

- [IsSystem](#issystem)

- [IsTemporary](#istemporary)

- [MatchesMask](#matchesmask)

`FindNextFile` esegue il wrapping della funzione Win32 [FindNextFile](/windows/win32/api/fileapi/nf-fileapi-findnextfilew).

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: directory](#isdirectory).

## <a name="cfilefindgetcreationtime"></a><a name="getcreationtime"></a> CFileFind:: GetCreationTime

Chiamare questa funzione membro per ottenere l'ora di creazione del file specificato.

```
virtual BOOL GetCreationTime(FILETIME* pTimeStamp) const;
virtual BOOL GetCreationTime(CTime& refTime) const;
```

### <a name="parameters"></a>Parametri

*pTimeStamp*<br/>
Puntatore a una struttura [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) contenente l'ora di creazione del file.

*refTime*<br/>
Riferimento a un oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) .

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; 0 in caso di esito negativo. `GetCreationTime` restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo `CFileFind` oggetto.

### <a name="remarks"></a>Commenti

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetCreationTime` .

> [!NOTE]
> Non tutti i file System usano la stessa semantica per implementare il timestamp restituito da questa funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni timestamp se il file system o il server sottostante non supporta la conservazione dell'attributo time. Per informazioni sui formati di ora, vedere la struttura [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) . In alcuni sistemi operativi, l'ora restituita è nel fuso orario locale al computer in cui si trova il file. Per ulteriori informazioni, vedere l'API Win32 [FileTimeToLocalFileTime](/windows/win32/api/fileapi/nf-fileapi-filetimetolocalfiletime) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: GetLength](#getlength).

## <a name="cfilefindgetfilename"></a><a name="getfilename"></a> CFileFind:: GetFileName

Chiamare questa funzione membro per ottenere il nome del file trovato.

```
virtual CString GetFileName() const;
```

### <a name="return-value"></a>Valore restituito

Nome del file trovato più di recente.

### <a name="remarks"></a>Commenti

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare GetFileName.

`GetFileName` è una delle tre `CFileFind` funzioni membro che restituiscono un formato del nome file. Nell'elenco seguente vengono descritti i tre e il modo in cui variano:

- `GetFileName` Restituisce il nome del file, inclusa l'estensione. Ad esempio, `GetFileName` la chiamata a per generare un messaggio utente sul file *c:\myhtml\myfile.txt* restituisce il nome del file *myfile.txt*.

- [FilePath](#getfilepath) restituisce l'intero percorso del file. Ad esempio, `GetFilePath` la chiamata a per generare un messaggio utente sul file *c:\myhtml\myfile.txt* restituisce il percorso del file *c:\myhtml\myfile.txt*.

- [GetFileTitle](#getfiletitle) restituisce il nome del file, esclusa l'estensione di file. Ad esempio, `GetFileTitle` la chiamata a per generare un messaggio utente sul file *c:\myhtml\myfile.txt* restituisce il titolo file MyFile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#32](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_2.cpp)]

## <a name="cfilefindgetfilepath"></a><a name="getfilepath"></a> CFileFind:: FilePath

Chiamare questa funzione membro per ottenere il percorso completo del file specificato.

```
virtual CString GetFilePath() const;
```

### <a name="return-value"></a>Valore restituito

Percorso del file specificato.

### <a name="remarks"></a>Commenti

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetFilePath` .

`GetFilePath` è una delle tre `CFileFind` funzioni membro che restituiscono un formato del nome file. Nell'elenco seguente vengono descritti i tre e il modo in cui variano:

- [GetFileName](#getfilename) restituisce il nome del file, inclusa l'estensione. Ad esempio, `GetFileName` la chiamata a per generare un messaggio utente sul file *c:\myhtml\myfile.txt* restituisce il nome del file *myfile.txt*.

- `GetFilePath` Restituisce l'intero percorso del file. Ad esempio, `GetFilePath` la chiamata a per generare un messaggio utente sul file `c:\myhtml\myfile.txt` restituisce il percorso del file `c:\myhtml\myfile.txt` .

- [GetFileTitle](#getfiletitle) restituisce il nome del file, esclusa l'estensione di file. Ad esempio, `GetFileTitle` la chiamata a per generare un messaggio utente sul file *c:\myhtml\myfile.txt* restituisce il titolo file MyFile.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: GetFileName](#getfilename).

## <a name="cfilefindgetfiletitle"></a><a name="getfiletitle"></a> CFileFind:: GetFileTitle

Chiamare questa funzione membro per ottenere il titolo del file trovato.

```
virtual CString GetFileTitle() const;
```

### <a name="return-value"></a>Valore restituito

Titolo del file.

### <a name="remarks"></a>Commenti

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetFileTitle` .

`GetFileTitle` è una delle tre `CFileFind` funzioni membro che restituiscono un formato del nome file. Nell'elenco seguente vengono descritti i tre e il modo in cui variano:

- [GetFileName](#getfilename) restituisce il nome del file, inclusa l'estensione. Ad esempio, `GetFileName` la chiamata a per generare un messaggio utente sul file *c:\myhtml\myfile.txt* restituisce il nome del file *myfile.txt*.

- [FilePath](#getfilepath) restituisce l'intero percorso del file. Ad esempio, `GetFilePath` la chiamata a per generare un messaggio utente sul file *c:\myhtml\myfile.txt* restituisce il percorso del file *c:\myhtml\myfile.txt*.

- `GetFileTitle` Restituisce il nome del file, esclusa l'estensione di file. Ad esempio, `GetFileTitle` la chiamata a per generare un messaggio utente sul file *c:\myhtml\myfile.txt* restituisce il titolo file MyFile.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: GetFileName](#getfilename).

## <a name="cfilefindgetfileurl"></a><a name="getfileurl"></a> CFileFind:: GetFileURL

Chiamare questa funzione membro per recuperare l'URL specificato.

```
virtual CString GetFileURL() const;
```

### <a name="return-value"></a>Valore restituito

URL completo.

### <a name="remarks"></a>Commenti

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetFileURL` .

`GetFileURL` è simile alla funzione membro [filePath](#getfilepath), ad eccezione del fatto che restituisce l'URL nel formato `file://path` . Ad esempio, la chiamata `GetFileURL` a per ottenere l'URL completo per *myfile.txt* restituisce l'URL `file://c:\myhtml\myfile.txt` .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: GetFileName](#getfilename).

## <a name="cfilefindgetlastaccesstime"></a><a name="getlastaccesstime"></a> CFileFind:: GetLastAccessTime

Chiamare questa funzione membro per ottenere l'ora dell'ultimo accesso al file specificato.

```
virtual BOOL GetLastAccessTime(CTime& refTime) const;
virtual BOOL GetLastAccessTime(FILETIME* pTimeStamp) const;
```

### <a name="parameters"></a>Parametri

*refTime*<br/>
Riferimento a un oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) .

*pTimeStamp*<br/>
Puntatore a una struttura [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) che contiene l'ora dell'ultimo accesso al file.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; 0 in caso di esito negativo. `GetLastAccessTime` restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo `CFileFind` oggetto.

### <a name="remarks"></a>Commenti

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetLastAccessTime` .

> [!NOTE]
> Non tutti i file System usano la stessa semantica per implementare il timestamp restituito da questa funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni timestamp se il file system o il server sottostante non supporta la conservazione dell'attributo time. Per informazioni sui formati di ora, vedere la struttura [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) . In alcuni sistemi operativi, l'ora restituita è nel fuso orario locale al computer in cui si trova il file. Per ulteriori informazioni, vedere l'API Win32 [FileTimeToLocalFileTime](/windows/win32/api/fileapi/nf-fileapi-filetimetolocalfiletime) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: GetLength](#getlength).

## <a name="cfilefindgetlastwritetime"></a><a name="getlastwritetime"></a> CFileFind:: GetLastWriteTime

Chiamare questa funzione membro per ottenere la data e l'ora dell'Ultima modifica del file.

```
virtual BOOL GetLastWriteTime(FILETIME* pTimeStamp) const;
virtual BOOL GetLastWriteTime(CTime& refTime) const;
```

### <a name="parameters"></a>Parametri

*pTimeStamp*<br/>
Puntatore a una struttura [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) contenente l'ora dell'ultima scrittura nel file.

*refTime*<br/>
Riferimento a un oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) .

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; 0 in caso di esito negativo. `GetLastWriteTime` restituisce 0 solo se [FindNextFile](#findnextfile) non è mai stato chiamato su questo `CFileFind` oggetto.

### <a name="remarks"></a>Commenti

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetLastWriteTime` .

> [!NOTE]
> Non tutti i file System usano la stessa semantica per implementare il timestamp restituito da questa funzione. Questa funzione può restituire lo stesso valore restituito da altre funzioni timestamp se il file system o il server sottostante non supporta la conservazione dell'attributo time. Per informazioni sui formati di ora, vedere la struttura [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) . In alcuni sistemi operativi, l'ora restituita è nel fuso orario locale al computer in cui si trova il file. Per ulteriori informazioni, vedere l'API Win32 [FileTimeToLocalFileTime](/windows/win32/api/fileapi/nf-fileapi-filetimetolocalfiletime) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: GetLength](#getlength).

## <a name="cfilefindgetlength"></a><a name="getlength"></a> CFileFind:: GetLength

Chiamare questa funzione membro per ottenere la lunghezza, in byte, del file trovato.

```
ULONGLONG GetLength() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza in byte del file trovato.

### <a name="remarks"></a>Commenti

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetLength` .

`GetLength` Usa la struttura Win32 [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) per ottenere e restituire il valore delle dimensioni del file, in byte.

> [!NOTE]
> A partire da MFC 7,0, `GetLength` supporta i tipi Integer a 64 bit. Il codice precedentemente esistente compilato con la versione più recente della libreria può generare avvisi di troncamento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#33](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_3.cpp)]

## <a name="cfilefindgetroot"></a><a name="getroot"></a> CFileFind:: GetRoot

Chiamare questa funzione membro per ottenere la radice del file trovato.

```
virtual CString GetRoot() const;
```

### <a name="return-value"></a>Valore restituito

Radice della ricerca attiva.

### <a name="remarks"></a>Commenti

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `GetRoot` .

Questa funzione membro restituisce l'identificatore di unità e il nome percorso usati per avviare una ricerca. Ad esempio, la chiamata a [FindFile](#findfile) con restituisce `*.dat` `GetRoot` una stringa vuota. Passaggio di un percorso, ad esempio `c:\windows\system\*.dll` , ai `FindFile` Risultati `GetRoot` restituiti `c:\windows\system\` .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: GetFileName](#getfilename).

## <a name="cfilefindisarchived"></a><a name="isarchived"></a> CFileFind:: inarchived

Chiamare questa funzione membro per determinare se il file trovato è archiviato.

```
BOOL IsArchived() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Le applicazioni contrassegnano un file di archivio, di cui eseguire il backup o la rimozione, con FILE_ATTRIBUTE_ARCHIVE un attributo di file identificato nella struttura di [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) .

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsArchived` .

Per un elenco completo degli attributi di file, vedere la funzione membro [MatchesMask](#matchesmask) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: GetLength](#getlength).

## <a name="cfilefindiscompressed"></a><a name="iscompressed"></a> CFileFind:: compresso

Chiamare questa funzione membro per determinare se il file trovato è compresso.

```
BOOL IsCompressed() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Un file compresso è contrassegnato con FILE_ATTRIBUTE_COMPRESSED, un attributo di file identificato nella struttura di [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) . Per un file, questo attributo indica che tutti i dati nel file sono compressi. Per una directory, questo attributo indica che la compressione è l'impostazione predefinita per i file e le sottodirectory appena creati.

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsCompressed` .

Per un elenco completo degli attributi di file, vedere la funzione membro [MatchesMask](#matchesmask) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: GetLength](#getlength).

## <a name="cfilefindisdirectory"></a><a name="isdirectory"></a> CFileFind:: directory

Chiamare questa funzione membro per determinare se il file trovato è una directory.

```
BOOL IsDirectory() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Un file che corrisponde a una directory è contrassegnato con FILE_ATTRIBUTE_DIRECTORY un attributo di file identificato nella struttura di [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) .

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsDirectory` .

Per un elenco completo degli attributi di file, vedere la funzione membro [MatchesMask](#matchesmask) .

### <a name="example"></a>Esempio

Questo piccolo programma rimaledisce ogni directory in C:\ unità e stampa il nome della directory.

[!code-cpp[NVC_MFCFiles#34](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_4.cpp)]

## <a name="cfilefindisdots"></a><a name="isdots"></a> CFileFind:: punti

Chiamare questa funzione membro per verificare la directory corrente e i marcatori della directory padre durante l'iterazione dei file.

```
virtual BOOL IsDots() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il nome del file trovato è "." o "..", che indica che il file trovato è effettivamente una directory. In caso contrario, 0

### <a name="remarks"></a>Commenti

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsDots` .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: directory](#isdirectory).

## <a name="cfilefindishidden"></a><a name="ishidden"></a> CFileFind:: Hidden

Chiamare questa funzione membro per determinare se il file trovato è nascosto.

```
BOOL IsHidden() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

I file nascosti, contrassegnati con FILE_ATTRIBUTE_HIDDEN, un attributo di file identificato nella struttura di [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) . Un file nascosto non è incluso in un elenco di directory ordinarie.

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsHidden` .

Per un elenco completo degli attributi di file, vedere la funzione membro [MatchesMask](#matchesmask) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: GetLength](#getlength).

## <a name="cfilefindisnormal"></a><a name="isnormal"></a> CFileFind:: unnormal

Chiamare questa funzione membro per determinare se il file trovato è un file normale.

```
BOOL IsNormal() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

File contrassegnati con FILE_ATTRIBUTE_NORMAL, un attributo di file identificato nella struttura di [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) . Un file normale non dispone di altri attributi impostati. Tutti gli altri attributi di file eseguono l'override di questo attributo.

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsNormal` .

Per un elenco completo degli attributi di file, vedere la funzione membro [MatchesMask](#matchesmask) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: GetLength](#getlength).

## <a name="cfilefindisreadonly"></a><a name="isreadonly"></a> CFileFind:: IsReadOnly

Chiamare questa funzione membro per determinare se il file trovato è di sola lettura.

```
BOOL IsReadOnly() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Un file di sola lettura è contrassegnato con FILE_ATTRIBUTE_READONLY, un attributo di file identificato nella struttura di [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) . Le applicazioni possono leggere un file di questo tipo, ma non possono scrivervi o eliminarlo.

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsReadOnly` .

Per un elenco completo degli attributi di file, vedere la funzione membro [MatchesMask](#matchesmask) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: GetLength](#getlength).

## <a name="cfilefindissystem"></a><a name="issystem"></a> CFileFind:: System

Chiamare questa funzione membro per determinare se il file trovato è un file di sistema.

```
BOOL IsSystem() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Un file di sistema è contrassegnato con FILE_ATTRIBUTE_SYSTEM,, un attributo di file identificato nella struttura di [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) . Un file di sistema fa parte di o viene usato esclusivamente dal sistema operativo.

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsSystem` .

Per un elenco completo degli attributi di file, vedere la funzione membro [MatchesMask](#matchesmask) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: GetLength](#getlength).

## <a name="cfilefindistemporary"></a><a name="istemporary"></a> CFileFind:: untemporary

Chiamare questa funzione membro per determinare se il file trovato è un file temporaneo.

```
BOOL IsTemporary() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Un file temporaneo è contrassegnato con FILE_ATTRIBUTE_TEMPORARY, un attributo di file identificato nella struttura di [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) . Per l'archiviazione temporanea viene usato un file temporaneo. Le applicazioni devono scrivere nel file solo se assolutamente necessario. La maggior parte dei dati del file rimane in memoria senza essere scaricata nei supporti perché il file verrà eliminato a breve.

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `IsTemporary` .

Per un elenco completo degli attributi di file, vedere la funzione membro [MatchesMask](#matchesmask) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFileFind:: GetLength](#getlength).

## <a name="cfilefindm_ptm"></a><a name="m_ptm"></a> CFileFind:: m_pTM

Puntatore a un oggetto `CAtlTransactionManager`.

```
CAtlTransactionManager* m_pTM;
```

### <a name="remarks"></a>Commenti

## <a name="cfilefindmatchesmask"></a><a name="matchesmask"></a> CFileFind:: MatchesMask

Chiamare questa funzione membro per testare gli attributi del file nel file trovato.

```
virtual BOOL MatchesMask(DWORD dwMask) const;
```

### <a name="parameters"></a>Parametri

*dwMask*<br/>
Specifica uno o più attributi di file, identificati nella struttura [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) , per il file trovato. Per cercare più attributi, usare l'operatore OR bit per bit (&#124;). È accettabile qualsiasi combinazione degli attributi seguenti:

- FILE_ATTRIBUTE_ARCHIVE il file è un file di archivio. Le applicazioni utilizzano questo attributo per contrassegnare i file per il backup o la rimozione.

- FILE_ATTRIBUTE_COMPRESSED la compressione del file o della directory. Per un file, ciò significa che tutti i dati nel file sono compressi. Per una directory, ciò significa che la compressione è l'impostazione predefinita per i file e le sottodirectory appena creati.

- FILE_ATTRIBUTE_DIRECTORY il file è una directory.

- FILE_ATTRIBUTE_NORMAL il file non dispone di altri attributi impostati. Questo attributo è valido solo se usato da solo. Tutti gli altri attributi di file eseguono l'override di questo attributo.

- FILE_ATTRIBUTE_HIDDEN il file è nascosto. Non deve essere incluso in un elenco di directory ordinarie.

- FILE_ATTRIBUTE_READONLY il file è di sola lettura. Le applicazioni possono leggere il file ma non possono scrivervi o eliminarlo.

- FILE_ATTRIBUTE_SYSTEM il file fa parte di o viene usato esclusivamente dal sistema operativo.

- FILE_ATTRIBUTE_TEMPORARY il file viene usato per l'archiviazione temporanea. Le applicazioni devono scrivere nel file solo se assolutamente necessario. La maggior parte dei dati del file rimane in memoria senza essere scaricata nei supporti perché il file verrà eliminato a breve.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Per ottenere informazioni estese sull'errore, chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror).

### <a name="remarks"></a>Commenti

È necessario chiamare [FindNextFile](#findnextfile) almeno una volta prima di chiamare `MatchesMask` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#35](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_5.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CFtpFileFind](../../mfc/reference/cftpfilefind-class.md)<br/>
[Classe CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md)<br/>
[Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)<br/>
[Classe CGopherFile](../../mfc/reference/cgopherfile-class.md)<br/>
[Classe CHttpFile](../../mfc/reference/chttpfile-class.md)

---
title: Classe CFile
ms.date: 06/12/2018
f1_keywords:
- CFile
- AFX/CFile
- AFX/CFile::CFile
- AFX/CFile::Abort
- AFX/CFile::Close
- AFX/CFile::Duplicate
- AFX/CFile::Flush
- AFX/CFile::GetFileName
- AFX/CFile::GetFilePath
- AFX/CFile::GetFileTitle
- AFX/CFile::GetLength
- AFX/CFile::GetPosition
- AFX/CFile::GetStatus
- AFX/CFile::LockRange
- AFX/CFile::Open
- AFX/CFile::Read
- AFX/CFile::Remove
- AFX/CFile::Rename
- AFX/CFile::Seek
- AFX/CFile::SeekToBegin
- AFX/CFile::SeekToEnd
- AFX/CFile::SetFilePath
- AFX/CFile::SetLength
- AFX/CFile::SetStatus
- AFX/CFile::UnlockRange
- AFX/CFile::Write
- AFX/CFile::hFileNull
- AFX/CFile::m_hFile
- AFX/CFile::m_pTM
helpviewer_keywords:
- CFile [MFC], CFile
- CFile [MFC], Abort
- CFile [MFC], Close
- CFile [MFC], Duplicate
- CFile [MFC], Flush
- CFile [MFC], GetFileName
- CFile [MFC], GetFilePath
- CFile [MFC], GetFileTitle
- CFile [MFC], GetLength
- CFile [MFC], GetPosition
- CFile [MFC], GetStatus
- CFile [MFC], LockRange
- CFile [MFC], Open
- CFile [MFC], Read
- CFile [MFC], Remove
- CFile [MFC], Rename
- CFile [MFC], Seek
- CFile [MFC], SeekToBegin
- CFile [MFC], SeekToEnd
- CFile [MFC], SetFilePath
- CFile [MFC], SetLength
- CFile [MFC], SetStatus
- CFile [MFC], UnlockRange
- CFile [MFC], Write
- CFile [MFC], hFileNull
- CFile [MFC], m_hFile
- CFile [MFC], m_pTM
ms.assetid: b2eb5757-d499-4e67-b044-dd7d1abaa0f8
ms.openlocfilehash: dc0e6f75f4794b94d6e94d77f2e427b9c1df9f06
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50644145"
---
# <a name="cfile-class"></a>Classe CFile

Classe di base per le classi di file MFC.

## <a name="syntax"></a>Sintassi

```
class CFile : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFile::CFile](#cfile)|Costruisce un `CFile` oggetto da un handle di file o percorso.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFile:: Abort](#abort)|Chiude un file ignorando tutti gli errori e avvisi.|
|[CFile::Close](#close)|Chiude un file ed elimina l'oggetto.|
|[CFile::Duplicate](#duplicate)|Costruisce un oggetto duplicato basato su questo file.|
|[CFile::Flush](#flush)|Scarica tutti i dati ancora da scrivere.|
|[CFile::GetFileName](#getfilename)|Recupera il nome del file del file selezionato.|
|[CFile::GetFilePath](#getfilepath)|Recupera il percorso completo del file del file selezionato.|
|[CFile::GetFileTitle](#getfiletitle)|Recupera il titolo del file selezionato.|
|[CFile::GetLength](#getlength)|Recupera la lunghezza del file.|
|[CFile::GetPosition](#getposition)|Recupera il puntatore del file corrente.|
|[CFile:: GetStatus](#getstatus)|Recupera lo stato del file aperto o in quella statica, recupera lo stato del file specificato (funzione virtuale statico).|
|[CFile::LockRange](#lockrange)|Blocca un intervallo di byte in un file.|
|[CFile::Open](#open)|Apre in modo sicuro un file con un'opzione di test di errore.|
|[CFile:: Read](#read)|Operazioni di lettura dei dati (non memorizzato nel buffer) da un file nella posizione corrente del file.|
|[CFile::Remove](#remove)|Elimina il file specificato (funzione statica).|
|[CFile::Rename](#rename)|Rinomina il file specificato (funzione statica).|
|[CFile::Seek](#seek)|Posiziona il puntatore del file corrente.|
|[CFile::SeekToBegin](#seektobegin)|Posiziona il puntatore del file corrente all'inizio del file.|
|[CFile::SeekToEnd](#seektoend)|Posiziona il puntatore del file corrente alla fine del file.|
|[CFile::SetFilePath](#setfilepath)|Imposta il percorso completo del file selezionato.|
|[CFile::SetLength](#setlength)|La lunghezza del file viene modificato.|
|[CFile::SetStatus](#setstatus)|Imposta lo stato del file specificato (funzione virtuale statico).|
|[CFile::UnlockRange](#unlockrange)|Sblocca un intervallo di byte in un file.|
|[CFile::Write](#write)|Scrive i dati (non memorizzato nel buffer) in un file per la posizione corrente del file.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFile::operator HANDLE](#operator_handle)|Un handle per un `CFile` oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFile::hFileNull](#hfilenull)|Determina se il `CFile` oggetto dispone di un handle valido.|
|[CFile::m_hFile](#m_hfile)|In genere contiene l'handle di file del sistema operativo.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CFile::m_pTM](#m_ptm)|Puntatore a `CAtlTransactionManager` oggetto.|

## <a name="remarks"></a>Note

Fornisce direttamente servizi di input/output su disco non memorizzato nel buffer e binario e indirettamente supporta file di testo e file di memoria tramite le relative classi derivate. `CFile` funziona in combinazione con il `CArchive` classe per supportare la serializzazione di oggetti di Microsoft Foundation Class.

La relazione gerarchica tra questa classe e le relative classi derivate consente al programma eseguire operazioni su tutti gli oggetti file tramite oggetto polimorfico `CFile` interfaccia. Un file di memoria, ad esempio, si comporta come un file su disco.

Usare `CFile` e le relative classi derivate per i/o disco per utilizzo generico. Usare `ofstream` o di altre classi iostream Microsoft per il testo formattato inviati a un file su disco.

In genere, un file su disco viene aperto automaticamente nella `CFile` costruzione e distruzione chiusa in. Funzioni membro statiche consentano di interrogare lo stato di un file senza aprire il file.

Per altre informazioni sull'uso `CFile`, vedere gli articoli [file in MFC](../../mfc/files-in-mfc.md) e [gestione File](../../c-runtime-library/file-handling.md) nel *Run-Time Library Reference*.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

##  <a name="abort"></a>  CFile:: Abort

Chiude il file associato all'oggetto e rende non disponibile per la lettura o scrittura del file.

```
virtual void Abort();
```

### <a name="remarks"></a>Note

Se il file non è stata chiusa prima di eliminarlo definitivamente l'oggetto, il distruttore viene chiusa automaticamente.

Quando la gestione delle eccezioni, `CFile::Abort` differisce da `CFile::Close` due importanti differenze. Prima di tutto, il `Abort` funzione non genererà un'eccezione in caso di errori perché gli errori vengono ignorati da `Abort`. Secondo, `Abort` non fornirà **ASSERT** se il file non è stato aperto o è stata chiusa in precedenza.

Se è stata usata **nuove** allocare il `CFile` oggetto sull'heap, è necessario eliminarlo dopo la chiusura del file. `Abort` imposta `m_hFile` a `CFile::hFileNull`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#5](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_1.cpp)]

##  <a name="cfile"></a>  CFile::CFile

Costruisce e inizializza un oggetto `CFile`.

```
CFile();
CFile(CAtlTransactionManager* pTM);
CFile(HANDLE hFile);

CFile(
LPCTSTR lpszFileName,
UINT nOpenFlags);

CFile(
LPCTSTR lpszFileName,
UINT nOpenFlags,
CAtlTransactionManager* pTM);
```

### <a name="parameters"></a>Parametri

*oggetto hFile*<br/>
Handle di un file da aggiungere all'oggetto `CFile`.

*lpszFileName*<br/>
Percorso completo o relativo di un file da aggiungere all'oggetto `CFile`.

*nOpenFlags*<br/>
Combinazione bit per bit (OR) di opzioni di accesso per il file specificato. Per le possibili opzioni, vedere la sezione Note.

*pTM*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="remarks"></a>Note

Le cinque tabelle seguenti elencano le possibili opzioni per la *nOpenFlags* parametro.

Scegliere una sola delle seguenti opzioni relative alla modalità di accesso al file. La modalità predefinita è `CFile::modeRead`, che prevede la sola lettura.

|Valore|Descrizione|
|-----------|-----------------|
|`CFile::modeRead`|Richiede l'accesso in sola lettura.|
|`CFile::modeWrite`|Richiede l'accesso in sola scrittura.|
|`CFile::modeReadWrite`|Richiede l'accesso in lettura e scrittura.|

Scegliere una delle opzioni seguenti relative alla modalità carattere.

|Valore|Descrizione|
|-----------|-----------------|
|`CFile::typeBinary`|Imposta la modalità binaria (solo per le classi derivate).|
|`CFile::typeText`|Imposta la modalità testo con un'elaborazione speciale per le coppie di ritorno a capo con avanzamento di riga (usato in solo le classi derivate).|
|`CFile::typeUnicode`|Imposta la modalità Unicode (solo per le classi derivate). Il testo viene scritto nel file in formato Unicode quando l'applicazione viene compilata in una configurazione Unicode. Nessun BOM viene scritto nel file.|

Scegliere una sola delle seguenti opzioni relative alla modalità di condivisione del file. La modalità di condivisione file predefinita è `CFile::shareExclusive`, che è esclusiva.

|Valore|Descrizione|
|-----------|-----------------|
|`CFile::shareDenyNone`|Nessuna restrizione alla condivisione.|
|`CFile::shareDenyRead`|Nega l'accesso in lettura a tutti gli altri utenti.|
|`CFile::shareDenyWrite`|Nega l'accesso in scrittura a tutti gli altri utenti.|
|`CFile::shareExclusive`|Nega l'accesso in lettura e scrittura a tutti gli altri utenti.|

Scegliere la prima delle seguenti opzioni relative alla modalità di creazione del file oppure entrambe. La modalità di creazione predefinita è `CFile::modeNoTruncate`, che prevede l'apertura di un file esistente.

|Valore|Descrizione|
|-----------|-----------------|
|`CFile::modeCreate`|Crea un nuovo file se non esiste alcun file. Se il file esiste già, è sovrascritto e impostare inizialmente a lunghezza zero.|
|`CFile::modeNoTruncate`|Crea un nuovo file se non ne esiste uno, in caso contrario il file viene aggiunto all'oggetto `CFile`.|

Scegliere le opzioni di memorizzazione nella cache del file come descritto. Per impostazione predefinita, il sistema usa uno schema di memorizzazione nella cache generico, non disponibile come opzione.

|Valore|Descrizione|
|-----------|-----------------|
|`CFile::osNoBuffer`|Il sistema non usa una cache intermedia per il file. Questa opzione annulla le due opzioni seguenti.|
|`CFile::osRandomAccess`|La cache dei file viene ottimizzata per l'accesso casuale. Non usare questa opzione e l'opzione per la scansione sequenziale.|
|`CFile::osSequentialScan`|La cache dei file viene ottimizzata per l'accesso sequenziale. Non usare questa opzione e l'opzione per l'accesso casuale.|
|`CFile::osWriteThrough`|Le operazioni di scrittura vengono eseguite senza ritardo.|

Scegliere l'opzione di sicurezza seguente per evitare che l'handle di file venga ereditato. Per impostazione predefinita, l'handle di file può essere usato da tutti i nuovi processi figlio.

|Valore|Descrizione|
|-----------|-----------------|
|`CFile::modeNoInherit`|Evita l'uso dell'handle di file da parte di qualsiasi processo figlio.|

Il costruttore predefinito inizializza i membri, ma non aggiunge un file all'oggetto `CFile`. Dopo aver usato questo costruttore, usare il [CFile::Open](#open) per aprire un file e associarlo al `CFile` oggetto.

Il costruttore con un parametro inizializza i membri e aggiunge un file esistente all'oggetto `CFile`.

Il costruttore con due parametri inizializza i membri e prova ad aprire il file specificato. Se il costruttore apre correttamente il file specificato, il file viene aggiunto all'oggetto `CFile`. In caso contrario, questo costruttore genera un puntatore a un oggetto `CInvalidArgException`. Per altre informazioni su come gestire le eccezioni, vedere [eccezioni](../../mfc/exception-handling-in-mfc.md).

Se un oggetto `CFile` apre correttamente un file specificato, il file verrà chiuso automaticamente quando l'oggetto `CFile` viene eliminato. In alternativa, è necessario chiudere esplicitamente il file quando non è più allegato all'oggetto `CFile`.

### <a name="example"></a>Esempio

L'esempio di codice illustra come usare un oggetto `CFile`.

[!code-cpp[NVC_MFCFiles#4](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_2.cpp)]

##  <a name="close"></a>  CFile::Close

Chiude il file associato all'oggetto e rende non disponibile per la lettura o scrittura del file.

```
virtual void Close();
```

### <a name="remarks"></a>Note

Se il file non è stata chiusa prima di eliminarlo definitivamente l'oggetto, il distruttore viene chiusa automaticamente.

Se è stata usata **nuove** allocare il `CFile` oggetto sull'heap, è necessario eliminarlo dopo la chiusura del file. `Close` imposta `m_hFile` a `CFile::hFileNull`.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CFile::CFile](#cfile).

##  <a name="duplicate"></a>  CFile::Duplicate

Crea un duplicato `CFile` oggetto per un determinato file.

```
virtual CFile* Duplicate() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore a un duplicato `CFile` oggetto.

### <a name="remarks"></a>Note

Ciò equivale alla funzione runtime C `_dup`.

##  <a name="flush"></a>  CFile::Flush

Forza i dati rimanenti nel buffer di file da scrivere nel file.

```
virtual void Flush();
```

### <a name="remarks"></a>Note

L'uso di `Flush` non garantisce dello scaricamento di `CArchive` buffer. Se si usa un archivio, chiamare [CArchive::Flush](../../mfc/reference/carchive-class.md#flush) prima.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CFile::SetFilePath](#setfilepath).

##  <a name="getfilename"></a>  CFile::GetFileName

Chiamare questa funzione membro per recuperare il nome di un file specificato.

```
virtual CString GetFileName() const;
```

### <a name="return-value"></a>Valore restituito

Nome del file.

### <a name="remarks"></a>Note

Ad esempio, quando si chiama `GetFileName` per generare un messaggio per l'utente sul file `c:\windows\write\myfile.wri`, il nome del file `myfile.wri`, viene restituito.

Per restituire l'intero percorso del file, incluso il nome, chiamare [GetFilePath](#getfilepath). Per restituire il titolo del file ( `myfile`), chiamare [GetFileTitle](#getfiletitle).

### <a name="example"></a>Esempio

Questo frammento di codice viene aperto il sistema. File INI nella directory di WINDOWS. Se viene trovato, nell'esempio consente di stampare il nome e percorso e il titolo, come illustrato nella sezione Output:

[!code-cpp[NVC_MFCFiles#6](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_3.cpp)]

##  <a name="getfilepath"></a>  CFile::GetFilePath

Chiamare questa funzione membro per recuperare il percorso completo di un file specificato.

```
virtual CString GetFilePath() const;
```

### <a name="return-value"></a>Valore restituito

Il percorso completo del file specificato.

### <a name="remarks"></a>Note

Ad esempio, quando si chiama `GetFilePath` per generare un messaggio per l'utente sul file `c:\windows\write\myfile.wri`, il percorso del file, `c:\windows\write\myfile.wri`, viene restituito.

Per restituire solo il nome del file (`myfile.wri`), chiamare [GetFileName](#getfilename). Per restituire il titolo del file (`myfile`), chiamare [GetFileTitle](#getfiletitle).

### <a name="example"></a>Esempio

Vedere l'esempio relativo [GetFileName](#getfilename).

##  <a name="getfiletitle"></a>  CFile::GetFileTitle

Chiamare questa funzione membro per recuperare il titolo di file (il nome visualizzato) per il file.

```
virtual CString GetFileTitle() const;
```

### <a name="return-value"></a>Valore restituito

Il titolo del file sottostante.

### <a name="remarks"></a>Note

Questo metodo chiama [GetFileTitle](/windows/desktop/api/commdlg/nf-commdlg-getfiletitlea) per recuperare il titolo del file. Se l'operazione riesce, il metodo restituisce la stringa che usa il sistema per visualizzare il nome del file per l'utente. In caso contrario, il metodo viene chiamato [PathFindFileName](/windows/desktop/api/shlwapi/nf-shlwapi-pathfindfilenamea) per recuperare il nome di file (inclusa l'estensione file) del file sottostante. Di conseguenza, l'estensione di file non sempre essere incluso nella stringa del titolo del file restituito. Per altre informazioni, vedere [GetFileTitle](/windows/desktop/api/commdlg/nf-commdlg-getfiletitlea) e [PathFindFileName](/windows/desktop/api/shlwapi/nf-shlwapi-pathfindfilenamea) nel SDK di Windows.

Per restituire l'intero percorso del file, incluso il nome, chiamare [GetFilePath](#getfilepath). Per restituire solo il nome del file, chiamare [GetFileName](#getfilename).

### <a name="example"></a>Esempio

Vedere l'esempio relativo [GetFileName](#getfilename).

##  <a name="getlength"></a>  CFile::GetLength

Ottiene la lunghezza di logica corrente di file in byte.

```
virtual ULONGLONG GetLength() const;
```

### <a name="return-value"></a>Valore restituito

La lunghezza del file.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#7](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_4.cpp)]

##  <a name="getposition"></a>  CFile::GetPosition

Ottiene il valore corrente del puntatore del file, che può essere usato nelle chiamate successive a `Seek`.

```
virtual ULONGLONG GetPosition() const;
```

### <a name="return-value"></a>Valore restituito

Il puntatore del file.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#8](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_5.cpp)]

##  <a name="getstatus"></a>  CFile:: GetStatus

Questo metodo recupera informazioni sullo stato relative a un determinato `CFile` istanza dell'oggetto o un percorso file specificato.

```
BOOL GetStatus(CFileStatus& rStatus) const;

static BOOL PASCAL GetStatus(
    LPCTSTR lpszFileName,
    CFileStatus& rStatus,
    CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*rStatus*<br/>
Un riferimento a una fornita dall'utente `CFileStatus` struttura che riceverà le informazioni sullo stato. Il `CFileStatus` struttura presenta i campi seguenti:

- `CTime m_ctime` La data e ora di creazione del file.

- `CTime m_mtime` Data e ora che dell'ultima modifica apportata al file.

- `CTime m_atime` La data e ora che dell'ultimo accesso al file per la lettura.

- `ULONGLONG m_size` Le dimensioni logiche del file in byte, come segnalato dal comando DIR.

- `BYTE m_attribute` Byte del file di attributo.

- `char m_szFullName[_MAX_PATH]` Il nome di file assoluto nel set di caratteri di Windows.

*lpszFileName*<br/>
Vale a dire una stringa di caratteri di Windows imposta il percorso del file desiderato. Il percorso può essere assoluto o relativo, o può contenere un nome di percorso di rete.

*pTM*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="return-value"></a>Valore restituito

TRUE se le informazioni sullo stato per il file specificato sono state ottenute; in caso contrario, FALSE.

### <a name="remarks"></a>Note

La versione non statici di `GetStatus` recupera le informazioni sullo stato del file aperto associato con il determinato `CFile` oggetto.  La versione statica di `GetStatus` Ottiene lo stato del file da un percorso file specificato senza dover aprire il file. Ciò è utile per i diritti di accesso e l'esistenza di un file di test.

Il `m_attribute` membro del `CFileStatus` struttura fa riferimento al set di attributi di file. Il `CFile` classe fornisce il **attributo** enumerazione digitare in modo che è possibile specificare gli attributi di file simbolicamente:

```
enum Attribute {
    normal =    0x00,
    readOnly =  0x01,
    hidden =    0x02,
    system =    0x04,
    volume =    0x08,
    directory = 0x10,
    archive =   0x20
    };
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#10](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_6.cpp)]

##  <a name="hfilenull"></a>  CFile::hFileNull

Determina la presenza di un handle di file valido per il `CFile` oggetto.

```
static AFX_DATA const HANDLE hFileNull;
```

### <a name="remarks"></a>Note

Questa costante viene utilizzata per determinare se il `CFile` oggetto dispone di un handle di file valido.

L'esempio seguente illustra questa operazione:

[!code-cpp[NVC_MFCFiles#22](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_7.cpp)]

##  <a name="lockrange"></a>  CFile::LockRange

Blocca un intervallo di byte in un file aperto, generare un'eccezione se il file è già bloccato.

```
virtual void LockRange(
    ULONGLONG dwPos,
    ULONGLONG dwCount);
```

### <a name="parameters"></a>Parametri

*dwPos*<br/>
Offset dei byte dell'inizio dell'intervallo di byte da bloccare.

*dwCount*<br/>
Il numero di byte nell'intervallo da bloccare.

### <a name="remarks"></a>Note

Il blocco di byte in un file impedisce l'accesso a tali byte da altri processi. È possibile bloccare più di un'area di un file, ma non le aree di sovrapposizione sono consentite.

Quando si sblocca l'area, utilizzando il `UnlockRange` funzione membro, l'intervallo di byte deve corrispondere esattamente all'area in cui è stato bloccato in precedenza. Il `LockRange` funzione non unisce aree adiacenti; se due aree bloccate sono adiacenti, è necessario sbloccare separatamente ogni area.

> [!NOTE]
>  Questa funzione non è disponibile per il `CMemFile`-classe derivata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#12](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_8.cpp)]

##  <a name="m_hfile"></a>  CFile::m_hFile

Contiene l'handle di file del sistema operativo per un file aperto.

```
HANDLE m_hFile;
```

### <a name="remarks"></a>Note

`m_hFile` è una variabile pubblica di tipo UINT. Contiene `CFile::hFileNull` (un indicatore di funzionamento sistema-indipendente dal file vuoto) se l'handle non è stato assegnato.

Uso di `m_hFile` non è consigliato perché il significato del membro dipende dalla classe derivata. `m_hFile` diventa un membro pubblico per facilitare il supporto non polimorfici utilizza la classe.

##  <a name="m_ptm"></a>  CFile::m_pTM

Puntatore a un oggetto `CAtlTransactionManager`.

```
CAtlTransactionManager* m_pTM;
```

### <a name="remarks"></a>Note

##  <a name="open"></a>  CFile::Open

Di overload. `Open` è progettato per l'uso con il valore predefinito `CFile` costruttore.

```
virtual BOOL Open(
    LPCTSTR lpszFileName,
    UINT nOpenFlags,
    CFileException* pError = NULL);

virtual BOOL Open(
    LPCTSTR lpszFileName,
    UINT nOpenFlags,
    CAtlTransactionManager* pTM,
    CFileException* pError = NULL);
```

### <a name="parameters"></a>Parametri

*lpszFileName*<br/>
Stringa che rappresenta il percorso del file desiderato. Il percorso può essere relativo, assoluto o un nome di rete (UNC).

*nOpenFlags*<br/>
UINT che definisce la modalità di condivisione e l'accesso del file. Specifica l'azione da intraprendere quando si apre il file. È possibile combinare le opzioni con OR bit per bit ( **&#124;** ) operatore. L'autorizzazione di un accesso e una condivisione di opzione sono necessarie; il `modeCreate` e `modeNoInherit` modalità sono facoltative. Vedere le [CFile](#cfile) costruttore per un elenco delle opzioni relative alla modalità.

*pError*<br/>
Un puntatore a un oggetto eccezione di file esistente che verrà visualizzato lo stato di un'operazione non riuscita.

*pTM*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha avuto esito positivo; l'apertura in caso contrario 0. Il *pError* parametro è significativo solo se viene restituito 0.

### <a name="remarks"></a>Note

Le due funzioni formano un metodo per l'apertura di un file in cui un errore di una condizione normale, prevista "sicuro".

Mentre il `CFile` costruttore genera un'eccezione in una condizione di errore `Open` restituirà FALSE per le condizioni di errore. `Open` grado di inizializzare una [CFileException](../../mfc/reference/cfileexception-class.md) oggetto per descrivere l'errore, tuttavia. Se non viene fornita il *pError* parametro, o se viene passato NULL per *pError*, `Open` restituirà FALSE e non generano un `CFileException`. Se si passa un puntatore a un oggetto esistente `CFileException`, e `Open` rileva un errore, la funzione viene riempito con informazioni che descrivono tale errore. Nessuno dei due case faranno `Open` genera un'eccezione.

La tabella seguente descrive i possibili risultati di `Open`.

|`pError`|Errore rilevato|Valore restituito|Contenuto CFileException|
|--------------|------------------------|------------------|----------------------------|
|NULL|No|true|N/D|
|PTR per `CFileException`|No|true|non modificato|
|NULL|Yes|false|N/D|
|PTR per `CFileException`|Yes|false|inizializzato per la descrizione errore|

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#13](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_9.cpp)]

[!code-cpp[NVC_MFCFiles#14](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_10.cpp)]

##  <a name="operator_handle"></a>  CFile::operator HANDLE

Utilizzare questo operatore per passare un handle per un `CFile` dell'oggetto, ad esempio per le funzioni [ReadFileEx](/windows/desktop/api/fileapi/nf-fileapi-readfileex) e [GetFileTime](/windows/desktop/api/fileapi/nf-fileapi-getfiletime) che prevede un `HANDLE`.

```
operator HANDLE() const;
```

##  <a name="read"></a>  CFile:: Read

Legge i dati in un buffer dal file di cui è associato il `CFile` oggetto.

```
virtual UINT Read(
    void* lpBuf,
    UINT nCount);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Puntatore al buffer fornito dall'utente che sta per ricevere i dati letti dal file.

*nCount*<br/>
Il numero massimo di byte da leggere dal file. Per i file modalità testo, le coppie di ritorno a capo con avanzamento di riga vengono conteggiate come caratteri singoli.

### <a name="return-value"></a>Valore restituito

Numero di byte trasferiti nel buffer. Si noti che per tutti i `CFile` classi, il valore restituito può essere minore di *nCount* se è stata raggiunta la fine del file.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#15](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_11.cpp)]

Per un altro esempio, vedere [CFile::Open](#open).

##  <a name="remove"></a>  CFile::Remove

Questa funzione statica Elimina il file specificato dal percorso.

```
static void PASCAL Remove(
    LPCTSTR lpszFileName,
    CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*lpszFileName*<br/>
Stringa che rappresenta il percorso del file desiderato. Il percorso può essere assoluto o relativo e può contenere un nome di rete.

*pTM*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="remarks"></a>Note

Una directory non consente la rimozione.

Il `Remove` funzione membro genera un'eccezione se il file connesso è aperto o se il file non può essere rimosso. Ciò equivale al comando CANC.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#17](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_12.cpp)]

##  <a name="rename"></a>  CFile::Rename

Questa funzione statica Rinomina il file specificato.

```
static void PASCAL Rename(
    LPCTSTR lpszOldName,
    LPCTSTR lpszNewName,
    CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*lpszOldName*<br/>
Il percorso precedente.

*lpszNewName*<br/>
Il nuovo percorso.

*pTM*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="remarks"></a>Note

Impossibile rinominare directory. Ciò equivale al comando REN.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#18](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_13.cpp)]

##  <a name="seek"></a>  CFile::Seek

Riposiziona il puntatore del file in un file aperto.

```
virtual ULONGLONG Seek(
LONGLONG lOff,
UINT nFrom);
```

### <a name="parameters"></a>Parametri

*lOff*<br/>
Numero di byte per spostare il puntatore del file. I valori positivi spostano il puntatore del file verso la fine del file. i valori negativi spostano il puntatore del file verso l'inizio del file.

*NDA*<br/>
Posizione per ricercare da. Vedere la sezione Osservazioni per i valori possibili.

### <a name="return-value"></a>Valore restituito

La posizione del puntatore del file se il metodo ha esito positivo; in caso contrario, il valore restituito è indefinito e un puntatore a un `CFileException` viene generata un'eccezione.

### <a name="remarks"></a>Note

Nella tabella seguente sono elencati i valori possibili per il *NDA* parametro.

|Valore|Descrizione|
|-----------|-----------------|
|`CFile::begin`|Ricerca dall'inizio del file.|
|`CFile::current`|Ricerca dalla posizione corrente del puntatore del file.|
|`CFile::end`|Ricerca dalla fine del file.|

Quando viene aperto un file, il puntatore del file è posizionato in corrispondenza di 0, l'inizio del file.

È possibile impostare il puntatore del file in una posizione oltre la fine di un file. Se in questo caso, le dimensioni del file aumentano fino a quando non scrivere nel file.

Il gestore di eccezioni per questo metodo è necessario eliminare l'oggetto eccezione dopo l'eccezione viene elaborata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#9](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_14.cpp)]

##  <a name="seektobegin"></a>  CFile::SeekToBegin

Imposta il valore del puntatore del file all'inizio del file.

```
void SeekToBegin();
```

### <a name="remarks"></a>Note

`SeekToBegin()` è equivalente a `Seek( 0L, CFile::begin )`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#19](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_15.cpp)]

##  <a name="seektoend"></a>  CFile::SeekToEnd

Imposta il valore del puntatore del file nell'estremità finale logica del file.

```
ULONGLONG SeekToEnd();
```

### <a name="return-value"></a>Valore restituito

Lunghezza, in byte, del file.

### <a name="remarks"></a>Note

`SeekToEnd()` è equivalente a `CFile::Seek( 0L, CFile::end )`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#19](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_15.cpp)]

##  <a name="setfilepath"></a>  CFile::SetFilePath

Chiamare questa funzione per specificare il percorso del file. ad esempio, se il percorso di un file non è disponibile quando un [CFile](../../mfc/reference/cfile-class.md) costruito, chiamare `SetFilePath` specificarla.

```
virtual void SetFilePath(LPCTSTR lpszNewName);
```

### <a name="parameters"></a>Parametri

*lpszNewName*<br/>
Puntatore a una stringa che specifica il nuovo percorso.

### <a name="remarks"></a>Note

> [!NOTE]
> `SetFilePath` non aprire il file o creare il file. è sufficiente associa il `CFile` oggetto con un nome di percorso, che può quindi essere usato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#20](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_16.cpp)]

##  <a name="setlength"></a>  CFile::SetLength

Chiamare questa funzione per modificare la lunghezza del file.

```
virtual void SetLength(ULONGLONG dwNewLen);
```

### <a name="parameters"></a>Parametri

*dwNewLen*<br/>
Lunghezza desiderata del file in byte. Questo valore può essere maggiore o minore della lunghezza corrente del file. Il file verrà estesa o troncato come appropriato.

### <a name="remarks"></a>Note

> [!NOTE]
>  Con `CMemFile`, questa funzione è stato possibile generare un `CMemoryException` oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#11](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_17.cpp)]

##  <a name="setstatus"></a>  CFile::SetStatus

Imposta lo stato del file associato a questo percorso del file.

```
static void PASCAL SetStatus(
    LPCTSTR lpszFileName,
    const CFileStatus& status,
    CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*lpszFileName*<br/>
Stringa che rappresenta il percorso del file desiderato. Il percorso può essere assoluto o relativo e può contenere un nome di rete.

*status*<br/>
Buffer contenente le nuove informazioni di stato. Chiamare il `GetStatus` funzione di membro per precompilare il `CFileStatus` struttura con i valori correnti, quindi apportare le modifiche in base alle esigenze. Se un valore è 0, l'elemento di stato corrispondente non viene aggiornata. Vedere le [GetStatus](#getstatus) funzione di membro per una descrizione del `CFileStatus` struttura.

*pTM*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="remarks"></a>Note

Per impostare l'intervallo, modificare il `m_mtime` campo *stato*.

Si noti che quando si effettua una chiamata a `SetStatus` durante un tentativo di modificare solo gli attributi del file e il `m_mtime` membro della struttura dello stato di file è diverso da zero, gli attributi vengano inoltre influenzati (modificando l'ora timbro può avere effetti collaterali su gli attributi). Se si desidera modificare solo gli attributi del file, impostare innanzitutto le `m_mtime` membro della struttura dello stato di file da zero e quindi effettuare una chiamata a `SetStatus`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#21](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_18.cpp)]

##  <a name="unlockrange"></a>  CFile::UnlockRange

Sblocca un intervallo di byte in un file aperto.

```
virtual void UnlockRange(
    ULONGLONG dwPos,
    ULONGLONG dwCount);
```

### <a name="parameters"></a>Parametri

*dwPos*<br/>
Offset dei byte dell'inizio dell'intervallo di byte da sbloccare.

*dwCount*<br/>
Il numero di byte nell'intervallo da sbloccare.

### <a name="remarks"></a>Note

Vedere la descrizione della [LockRange](#lockrange) funzione membro per i dettagli.

> [!NOTE]
>  Questa funzione non è disponibile per il `CMemFile`-classe derivata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#12](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_8.cpp)]

##  <a name="write"></a>  CFile::Write

Scrive i dati da un buffer per il file associato il `CFile` oggetto.

```
virtual void Write(
    const void* lpBuf,
    UINT nCount);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Un puntatore al buffer fornito dall'utente che contiene i dati da scrivere nel file.

*nCount*<br/>
Il numero di byte da trasferire dal buffer. Per i file modalità testo, le coppie di ritorno a capo con avanzamento di riga vengono conteggiate come caratteri singoli.

### <a name="remarks"></a>Note

`Write` genera un'eccezione in risposta a diverse condizioni, tra cui la condizione di disco pieno.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#16](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_19.cpp)]

Inoltre, vedere gli esempi relativi [CFile::CFile](#cfile) e [CFile::Open](#open).

## <a name="see-also"></a>Vedere anche

[Esempio MFC DRAWCLI](../../visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CStdioFile](../../mfc/reference/cstdiofile-class.md)<br/>
[Classe CMemFile](../../mfc/reference/cmemfile-class.md)

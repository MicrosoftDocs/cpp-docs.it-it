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
ms.openlocfilehash: a9161764f6c8646766a73add01c25cce5619ad19
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79418706"
---
# <a name="cfile-class"></a>Classe CFile

Classe di base per le classi di file MFC.

## <a name="syntax"></a>Sintassi

```
class CFile : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFile:: CFile](#cfile)|Costruisce un oggetto `CFile` da un percorso o un handle di file.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFile:: Abort](#abort)|Chiude un file ignorando tutti gli avvisi e gli errori.|
|[CFile:: Close](#close)|Chiude un file ed Elimina l'oggetto.|
|[CFile::D uplica](#duplicate)|Costruisce un oggetto duplicato in base a questo file.|
|[CFile:: Flush](#flush)|Scarica i dati ancora da scrivere.|
|[CFile:: GetFileName](#getfilename)|Recupera il nome del file selezionato.|
|[CFile:: FilePath](#getfilepath)|Recupera il percorso completo del file selezionato.|
|[CFile:: GetFileTitle](#getfiletitle)|Recupera il titolo del file selezionato.|
|[CFile:: GetLength](#getlength)|Recupera la lunghezza del file.|
|[CFile:: GetPosition](#getposition)|Recupera il puntatore del file corrente.|
|[CFile:: GetStatus](#getstatus)|Recupera lo stato del file aperto oppure, nella versione statica, recupera lo stato del file specificato (funzione virtuale, statica).|
|[CFile:: LockRange](#lockrange)|Blocca un intervallo di byte in un file.|
|[CFile:: Open](#open)|Apre in modo sicuro un file con un'opzione di test degli errori.|
|[CFile:: Read](#read)|Legge (senza buffer) i dati da un file nella posizione corrente del file.|
|[CFile:: Remove](#remove)|Elimina il file specificato (funzione statica).|
|[CFile:: Rename](#rename)|Rinomina il file specificato (funzione statica).|
|[CFile:: Seek](#seek)|Posiziona il puntatore del file corrente.|
|[CFile:: SeekToBegin](#seektobegin)|Posiziona il puntatore del file corrente all'inizio del file.|
|[CFile:: SeekToEnd](#seektoend)|Posiziona il puntatore del file corrente alla fine del file.|
|[CFile:: FilePath](#setfilepath)|Imposta il percorso file completo del file selezionato.|
|[CFile:: selength](#setlength)|Modifica la lunghezza del file.|
|[CFile:: sestatus](#setstatus)|Imposta lo stato del file specificato (statico, funzione virtuale).|
|[CFile:: UnlockRange](#unlockrange)|Sblocca un intervallo di byte in un file.|
|[CFile:: Write](#write)|Scrive (senza buffer) i dati in un file nella posizione corrente del file.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[HANDLE CFile:: operator](#operator_handle)|Handle per un oggetto `CFile`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFile:: hFileNull](#hfilenull)|Determina se l'oggetto `CFile` dispone di un handle valido.|
|[CFile:: m_hFile](#m_hfile)|Contiene in genere l'handle di file del sistema operativo.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CFile:: m_pTM](#m_ptm)|Puntatore all'oggetto `CAtlTransactionManager`.|

## <a name="remarks"></a>Osservazioni

Fornisce direttamente servizi di input/output su disco non memorizzati nel buffer e supporta indirettamente file di testo e file di memoria tramite le classi derivate. `CFile` funziona insieme alla classe `CArchive` per supportare la serializzazione di oggetti Microsoft Foundation Class.

La relazione gerarchica tra questa classe e le relative classi derivate consente al programma di operare su tutti gli oggetti file tramite l'interfaccia `CFile` polimorfica. Un file di memoria, ad esempio, si comporta come un file su disco.

Utilizzare `CFile` e le classi derivate per l'I/O su disco per utilizzo generico. Utilizzare `ofstream` o altre classi Microsoft `iostream` per il testo formattato inviato a un file su disco.

In genere, un file su disco viene aperto automaticamente in `CFile` costruzione e chiuso in modo non distruttivo. Le funzioni membro statiche consentono di interrogare lo stato di un file senza aprire il file.

Per ulteriori informazioni sull'utilizzo di `CFile`, vedere gli articoli [file in MFC](../../mfc/files-in-mfc.md) e [gestione dei file](../../c-runtime-library/file-handling.md) in riferimenti alla libreria di *Runtime*.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

##  <a name="abort"></a>CFile:: Abort

Chiude il file associato a questo oggetto e rende non disponibile il file per la lettura o la scrittura.

```
virtual void Abort();
```

### <a name="remarks"></a>Osservazioni

Se il file non è stato chiuso prima dell'eliminazione dell'oggetto, il distruttore lo chiuderà.

Quando si gestiscono le eccezioni, `CFile::Abort` differisce da `CFile::Close` in due modi importanti. In primo luogo, la funzione `Abort` non genererà un'eccezione in caso di errori, poiché gli errori vengono ignorati da `Abort`. In secondo luogo, `Abort` non **asserirà** se il file non è stato aperto oppure è stato chiuso in precedenza.

Se è stato usato **New** per allocare l'oggetto `CFile` nell'heap, è necessario eliminarlo dopo la chiusura del file. `Abort` imposta `m_hFile` `CFile::hFileNull`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#5](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_1.cpp)]

##  <a name="cfile"></a>CFile:: CFile

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

*hFile*<br/>
Handle di un file da aggiungere all'oggetto `CFile`.

*lpszFileName*<br/>
Percorso completo o relativo di un file da aggiungere all'oggetto `CFile`.

*nOpenFlags*<br/>
Combinazione bit per bit (OR) di opzioni di accesso per il file specificato. Per le possibili opzioni, vedere la sezione Note.

*pTM*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="remarks"></a>Osservazioni

Nelle cinque tabelle seguenti sono elencate le opzioni possibili per il parametro *nOpenFlags* .

Scegliere una sola delle seguenti opzioni relative alla modalità di accesso al file. La modalità predefinita è `CFile::modeRead`, che prevede la sola lettura.

|valore|Descrizione|
|-----------|-----------------|
|`CFile::modeRead`|Richiede l'accesso in sola lettura.|
|`CFile::modeWrite`|Richiede l'accesso in sola scrittura.|
|`CFile::modeReadWrite`|Richiede l'accesso in lettura e scrittura.|

Scegliere una delle opzioni seguenti relative alla modalità carattere.

|valore|Descrizione|
|-----------|-----------------|
|`CFile::typeBinary`|Imposta la modalità binaria (solo per le classi derivate).|
|`CFile::typeText`|Imposta la modalità testo con elaborazione speciale per le coppie ritorno a capo/avanzamento riga (utilizzate solo nelle classi derivate).|
|`CFile::typeUnicode`|Imposta la modalità Unicode (solo per le classi derivate). Il testo viene scritto nel file in formato Unicode quando l'applicazione viene compilata in una configurazione Unicode. Nessun BOM viene scritto nel file.|

Scegliere una sola delle seguenti opzioni relative alla modalità di condivisione del file. La modalità di condivisione file predefinita è `CFile::shareExclusive`, che è esclusiva.

|valore|Descrizione|
|-----------|-----------------|
|`CFile::shareDenyNone`|Nessuna restrizione alla condivisione.|
|`CFile::shareDenyRead`|Nega l'accesso in lettura a tutti gli altri utenti.|
|`CFile::shareDenyWrite`|Nega l'accesso in scrittura a tutti gli altri utenti.|
|`CFile::shareExclusive`|Nega l'accesso in lettura e scrittura a tutti gli altri utenti.|

Scegliere la prima delle seguenti opzioni relative alla modalità di creazione del file oppure entrambe. La modalità di creazione predefinita è `CFile::modeNoTruncate`, che prevede l'apertura di un file esistente.

|valore|Descrizione|
|-----------|-----------------|
|`CFile::modeCreate`|Crea un nuovo file se non esiste alcun file. Se il file esiste già, viene sovrascritto e inizialmente impostato su una lunghezza pari a zero.|
|`CFile::modeNoTruncate`|Crea un nuovo file se non esiste alcun file; in caso contrario, se il file esiste già, viene collegato all'oggetto `CFile`.|

Scegliere le opzioni di memorizzazione nella cache del file come descritto. Per impostazione predefinita, il sistema usa uno schema di memorizzazione nella cache di uso generico che non è disponibile come opzione.

|valore|Descrizione|
|-----------|-----------------|
|`CFile::osNoBuffer`|Il sistema non usa una cache intermedia per il file. Questa opzione annulla le due opzioni seguenti.|
|`CFile::osRandomAccess`|La cache dei file viene ottimizzata per l'accesso casuale. Non usare questa opzione e l'opzione di analisi sequenziale.|
|`CFile::osSequentialScan`|La cache dei file viene ottimizzata per l'accesso sequenziale. Non usare questa opzione e l'opzione di accesso casuale.|
|`CFile::osWriteThrough`|Le operazioni di scrittura vengono eseguite senza ritardo.|

Scegliere l'opzione di sicurezza seguente per evitare che l'handle di file venga ereditato. Per impostazione predefinita, l'handle di file può essere usato da tutti i nuovi processi figlio.

|valore|Descrizione|
|-----------|-----------------|
|`CFile::modeNoInherit`|Evita l'uso dell'handle di file da parte di qualsiasi processo figlio.|

Il costruttore predefinito inizializza i membri ma non alleghi un file all'oggetto `CFile`. Dopo aver utilizzato questo costruttore, utilizzare il metodo [CFile:: Open](#open) per aprire un file e collegarlo all'oggetto `CFile`.

Il costruttore con un parametro inizializza i membri e aggiunge un file esistente all'oggetto `CFile`.

Il costruttore con due parametri inizializza i membri e prova ad aprire il file specificato. Se il costruttore apre correttamente il file specificato, il file viene aggiunto all'oggetto `CFile`. In caso contrario, questo costruttore genera un puntatore a un oggetto `CInvalidArgException`. Per ulteriori informazioni sulla gestione delle eccezioni, vedere [eccezioni](../../mfc/exception-handling-in-mfc.md).

Se un oggetto `CFile` apre correttamente un file specificato, il file verrà chiuso automaticamente quando l'oggetto `CFile` viene eliminato definitivamente. in caso contrario, è necessario chiudere in modo esplicito il file dopo che non è più collegato all'oggetto `CFile`.

### <a name="example"></a>Esempio

L'esempio di codice illustra come usare un oggetto `CFile`.

[!code-cpp[NVC_MFCFiles#4](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_2.cpp)]

##  <a name="close"></a>CFile:: Close

Chiude il file associato a questo oggetto e rende non disponibile il file per la lettura o la scrittura.

```
virtual void Close();
```

### <a name="remarks"></a>Osservazioni

Se il file non è stato chiuso prima dell'eliminazione dell'oggetto, il distruttore lo chiuderà.

Se è stato usato **New** per allocare l'oggetto `CFile` nell'heap, è necessario eliminarlo dopo la chiusura del file. `Close` imposta `m_hFile` `CFile::hFileNull`.

### <a name="example"></a>Esempio

Vedere l'esempio per [CFile:: CFile](#cfile).

##  <a name="duplicate"></a>CFile::D uplica

Costruisce un oggetto `CFile` duplicato per un file specificato.

```
virtual CFile* Duplicate() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CFile` duplicato.

### <a name="remarks"></a>Osservazioni

Questa funzione è equivalente alla funzione di runtime del linguaggio C `_dup`.

##  <a name="flush"></a>CFile:: Flush

Impone la scrittura nel file di tutti i dati rimanenti nel buffer di file.

```
virtual void Flush();
```

### <a name="remarks"></a>Osservazioni

L'uso di `Flush` non garantisce lo svuotamento dei buffer di `CArchive`. Se si usa un archivio, chiamare prima [CArchive:: Flush](../../mfc/reference/carchive-class.md#flush) .

### <a name="example"></a>Esempio

Vedere l'esempio per [CFile:: FilePath](#setfilepath).

##  <a name="getfilename"></a>CFile:: GetFileName

Chiamare questa funzione membro per recuperare il nome di un file specificato.

```
virtual CString GetFileName() const;
```

### <a name="return-value"></a>Valore restituito

Nome del file.

### <a name="remarks"></a>Osservazioni

Ad esempio, quando si chiama `GetFileName` per generare un messaggio per l'utente sul file `c:\windows\write\myfile.wri`, viene restituito il nome del file, `myfile.wri`.

Per restituire l'intero percorso del file, incluso il nome, chiamare [filePath](#getfilepath). Per restituire il titolo del file (`myfile`), chiamare [GetFileTitle](#getfiletitle).

### <a name="example"></a>Esempio

Questo frammento di codice apre il sistema. File INI nella directory WINDOWS. Se viene trovato, nell'esempio vengono stampati il nome e il percorso e il titolo, come illustrato in output:

[!code-cpp[NVC_MFCFiles#6](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_3.cpp)]

##  <a name="getfilepath"></a>CFile:: FilePath

Chiamare questa funzione membro per recuperare il percorso completo di un file specificato.

```
virtual CString GetFilePath() const;
```

### <a name="return-value"></a>Valore restituito

Percorso completo del file specificato.

### <a name="remarks"></a>Osservazioni

Ad esempio, quando si chiama `GetFilePath` per generare un messaggio per l'utente sul file `c:\windows\write\myfile.wri`, viene restituito il percorso del file, `c:\windows\write\myfile.wri`.

Per restituire solo il nome del file (`myfile.wri`), chiamare [GetFileName](#getfilename). Per restituire il titolo del file (`myfile`), chiamare [GetFileTitle](#getfiletitle).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [GetFileName](#getfilename).

##  <a name="getfiletitle"></a>CFile:: GetFileTitle

Chiamare questa funzione membro per recuperare il titolo del file (il nome visualizzato) per il file.

```
virtual CString GetFileTitle() const;
```

### <a name="return-value"></a>Valore restituito

Titolo del file sottostante.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama [GetFileTitle](/windows/win32/api/commdlg/nf-commdlg-getfiletitlew) per recuperare il titolo del file. In caso di esito positivo, il metodo restituisce la stringa che il sistema utilizzerebbe per visualizzare il nome del file all'utente. In caso contrario, il metodo chiama [PathFindFileName](/windows/win32/api/shlwapi/nf-shlwapi-pathfindfilenamew) per recuperare il nome file (inclusa l'estensione di file) del file sottostante. Ciò significa che l'estensione di file non è sempre inclusa nella stringa del titolo del file restituita. Per ulteriori informazioni, vedere [GetFileTitle](/windows/win32/api/commdlg/nf-commdlg-getfiletitlew) e [PathFindFileName](/windows/win32/api/shlwapi/nf-shlwapi-pathfindfilenamew) nel Windows SDK.

Per restituire l'intero percorso del file, incluso il nome, chiamare [filePath](#getfilepath). Per restituire solo il nome del file, chiamare [GetFileName](#getfilename).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [GetFileName](#getfilename).

##  <a name="getlength"></a>CFile:: GetLength

Ottiene la lunghezza logica corrente del file in byte.

```
virtual ULONGLONG GetLength() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza del file.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#7](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_4.cpp)]

##  <a name="getposition"></a>CFile:: GetPosition

Ottiene il valore corrente del puntatore del file, che può essere utilizzato nelle chiamate successive a `Seek`.

```
virtual ULONGLONG GetPosition() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore del file.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#8](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_5.cpp)]

##  <a name="getstatus"></a>CFile:: GetStatus

Questo metodo recupera le informazioni sullo stato relative a una determinata istanza dell'oggetto `CFile` o a un percorso di file specificato.

```
BOOL GetStatus(CFileStatus& rStatus) const;

static BOOL PASCAL GetStatus(
    LPCTSTR lpszFileName,
    CFileStatus& rStatus,
    CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*rStatus*<br/>
Riferimento a una struttura di `CFileStatus` fornita dall'utente che riceverà le informazioni sullo stato. La struttura `CFileStatus` presenta i campi seguenti:

- `CTime m_ctime` la data e l'ora di creazione del file.

- `CTime m_mtime` la data e l'ora dell'Ultima modifica apportata al file.

- `CTime m_atime` la data e l'ora dell'ultimo accesso al file per la lettura.

- `ULONGLONG m_size` la dimensione logica del file in byte, come indicato dal comando DIR.

- `BYTE m_attribute` l'attributo byte del file.

- `char m_szFullName[_MAX_PATH]` il nome file assoluto nel set di caratteri di Windows.

*lpszFileName*<br/>
Stringa del set di caratteri di Windows che rappresenta il percorso del file desiderato. Il percorso può essere relativo o assoluto oppure può contenere un nome di percorso di rete.

*pTM*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="return-value"></a>Valore restituito

TRUE se le informazioni sullo stato per il file specificato sono state ottenute correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

La versione non statica di `GetStatus` recupera le informazioni sullo stato del file aperto associato all'oggetto `CFile` specificato.  La versione statica di `GetStatus` ottiene lo stato del file da un percorso di file specificato senza aprire effettivamente il file. Questa versione è utile per verificare l'esistenza e i diritti di accesso di un file.

Il membro `m_attribute` della struttura `CFileStatus` fa riferimento al set di attributi di file. La classe `CFile` fornisce il tipo di enumerazione **attribute** , in modo che gli attributi di file possano essere specificati simbolicamente:

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

##  <a name="hfilenull"></a>CFile:: hFileNull

Determina la presenza di un handle di file valido per l'oggetto `CFile`.

```
static AFX_DATA const HANDLE hFileNull;
```

### <a name="remarks"></a>Osservazioni

Questa costante viene utilizzata per determinare se l'oggetto `CFile` dispone di un handle di file valido.

Nell'esempio seguente viene illustrata questa operazione:

[!code-cpp[NVC_MFCFiles#22](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_7.cpp)]

##  <a name="lockrange"></a>CFile:: LockRange

Blocca un intervallo di byte in un file aperto, generando un'eccezione se il file è già bloccato.

```
virtual void LockRange(
    ULONGLONG dwPos,
    ULONGLONG dwCount);
```

### <a name="parameters"></a>Parametri

*dwPos*<br/>
Offset di byte dell'inizio dell'intervallo di byte da bloccare.

*dwCount*<br/>
Numero di byte nell'intervallo da bloccare.

### <a name="remarks"></a>Osservazioni

Il blocco di byte in un file impedisce l'accesso a tali byte da altri processi. È possibile bloccare più di un'area di un file, ma non sono consentite aree sovrapposte.

Quando si sblocca l'area usando la funzione membro `UnlockRange`, l'intervallo di byte deve corrispondere esattamente all'area bloccata in precedenza. La funzione `LockRange` non unisce aree adiacenti. Se due aree bloccate sono adiacenti, è necessario sbloccare ogni area separatamente.

> [!NOTE]
>  Questa funzione non è disponibile per la classe derivata da `CMemFile`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#12](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_8.cpp)]

##  <a name="m_hfile"></a>CFile:: m_hFile

Contiene l'handle di file del sistema operativo per un file aperto.

```
HANDLE m_hFile;
```

### <a name="remarks"></a>Osservazioni

`m_hFile` è una variabile pubblica di tipo UINT. Contiene `CFile::hFileNull`, un indicatore di file vuoto indipendente dal sistema operativo, se l'handle non è stato assegnato.

L'uso di `m_hFile` non è consigliato, perché il significato del membro dipende dalla classe derivata. `m_hFile` viene reso un membro pubblico per praticità nel supportare l'uso di nonpolymorphic della classe.

##  <a name="m_ptm"></a>CFile:: m_pTM

Puntatore a un oggetto `CAtlTransactionManager`.

```
CAtlTransactionManager* m_pTM;
```

### <a name="remarks"></a>Osservazioni

##  <a name="open"></a>CFile:: Open

Di overload. `Open` è progettato per l'uso con il costruttore di `CFile` predefinito.

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
Stringa che contiene il percorso del file desiderato. Il percorso può essere relativo, assoluto o un nome di rete (UNC).

*nOpenFlags*<br/>
UINT che definisce la modalità di accesso e condivisione del file. Specifica l'azione da intraprendere quando si apre il file. È possibile combinare le opzioni usando l'operatore OR bit per **&#124;** bit (). Sono necessarie un'autorizzazione di accesso e un'opzione di condivisione; le modalità `modeCreate` e `modeNoInherit` sono facoltative. Per un elenco delle opzioni della modalità, vedere il costruttore [CFile](#cfile) .

*pError*<br/>
Puntatore a un oggetto di eccezione del file esistente che riceverà lo stato di un'operazione non riuscita.

*pTM*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'apertura ha avuto esito positivo; in caso contrario, 0. Il parametro *perror* è significativo solo se viene restituito 0.

### <a name="remarks"></a>Osservazioni

Le due funzioni `Open` sono metodi "sicuri" per l'apertura di un file, in cui un errore è una condizione normale e prevista.

Mentre il costruttore `CFile` genera un'eccezione in una condizione di errore, `Open` restituisce FALSE per le condizioni di errore. `Open` possibile comunque inizializzare un oggetto [CFileException](../../mfc/reference/cfileexception-class.md) per descrivere l'errore. Se non si specifica il parametro *perror* o se si passa null per *perror*, `Open` restituisce false e non genera una `CFileException`. Se si passa un puntatore a un `CFileException`esistente e `Open` rileva un errore, la funzione le riempie con informazioni che descrivono l'errore. in entrambi i casi, `Open` non genera un'eccezione.

Nella tabella seguente vengono descritti i possibili risultati di `Open`.

|`pError`|Errore rilevato|Valore restituito|Contenuto di CFileexception|
|--------------|------------------------|------------------|----------------------------|
|NULL|No|TRUE|n/d|
|PTR per `CFileException`|No|TRUE|non modificato|
|NULL|Sì|FALSE|n/d|
|PTR per `CFileException`|Sì|FALSE|inizializzato per descrivere l'errore|

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#13](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_9.cpp)]

[!code-cpp[NVC_MFCFiles#14](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_10.cpp)]

##  <a name="operator_handle"></a>HANDLE CFile:: operator

Utilizzare questo operatore per passare un handle a un oggetto `CFile` a funzioni quali [ReadFileEx](/windows/win32/api/fileapi/nf-fileapi-readfileex) e [GetFileTime ha provocato](/windows/win32/api/fileapi/nf-fileapi-getfiletime) che prevedono una `HANDLE`.

```
operator HANDLE() const;
```

##  <a name="read"></a>CFile:: Read

Legge i dati in un buffer dal file associato all'oggetto `CFile`.

```
virtual UINT Read(
    void* lpBuf,
    UINT nCount);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Puntatore al buffer fornito dall'utente che deve ricevere i dati letti dal file.

*nCount*<br/>
Numero massimo di byte da leggere dal file. Per i file in modalità testo, le coppie ritorno a capo e avanzamento riga vengono conteggiate come singoli caratteri.

### <a name="return-value"></a>Valore restituito

Numero di byte trasferiti nel buffer. Per tutte le classi `CFile`, il valore restituito può essere minore di *nCount* se è stata raggiunta la fine del file.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#15](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_11.cpp)]

Per un altro esempio, vedere [CFile:: Open](#open).

##  <a name="remove"></a>CFile:: Remove

Questa funzione statica Elimina il file specificato dal percorso.

```
static void PASCAL Remove(
    LPCTSTR lpszFileName,
    CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*lpszFileName*<br/>
Stringa che rappresenta il percorso del file desiderato. Il percorso può essere relativo o assoluto e può contenere un nome di rete.

*pTM*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="remarks"></a>Osservazioni

`Remove` non rimuoverà una directory.

La funzione membro `Remove` genera un'eccezione se il file connesso è aperto o se il file non può essere rimosso. Questa funzione è equivalente al comando DEL DEL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#17](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_12.cpp)]

##  <a name="rename"></a>CFile:: Rename

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
Nuovo percorso.

*pTM*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="remarks"></a>Osservazioni

Non è possibile rinominare le directory. Questa funzione è equivalente al comando REN.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#18](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_13.cpp)]

##  <a name="seek"></a>CFile:: Seek

Riposiziona il puntatore del file in un file aperto.

```
virtual ULONGLONG Seek(
LONGLONG lOff,
UINT nFrom);
```

### <a name="parameters"></a>Parametri

*lOff*<br/>
Numero di byte per spostare il puntatore del file. I valori positivi spostano il puntatore del file verso la fine del file; i valori negativi spostano il puntatore del file verso l'inizio del file.

*NDA*<br/>
Posizione da cui eseguire la ricerca. Per i valori possibili, vedere la sezione Osservazioni.

### <a name="return-value"></a>Valore restituito

Posizione del puntatore del file se il metodo ha avuto esito positivo; in caso contrario, il valore restituito non è definito e viene generato un puntatore a un'eccezione `CFileException`.

### <a name="remarks"></a>Osservazioni

Nella tabella seguente sono elencati i valori possibili per il parametro *NDA* .

|valore|Descrizione|
|-----------|-----------------|
|`CFile::begin`|Ricerca dall'inizio del file.|
|`CFile::current`|Cerca dalla posizione corrente del puntatore del file.|
|`CFile::end`|Ricerca alla fine del file.|

Quando un file viene aperto, il puntatore del file è posizionato su 0, l'inizio del file.

È possibile impostare il puntatore del file su una posizione oltre la fine di un file. In tal caso, le dimensioni del file non aumenteranno fino a quando non si scrive nel file.

Il gestore di eccezioni per questo metodo deve eliminare l'oggetto eccezione dopo che l'eccezione è stata elaborata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#9](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_14.cpp)]

##  <a name="seektobegin"></a>CFile:: SeekToBegin

Imposta il valore del puntatore del file all'inizio del file.

```
void SeekToBegin();
```

### <a name="remarks"></a>Osservazioni

`SeekToBegin()` equivale a: `Seek( 0L, CFile::begin )`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#19](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_15.cpp)]

##  <a name="seektoend"></a>CFile:: SeekToEnd

Imposta il valore del puntatore del file alla fine logica del file.

```
ULONGLONG SeekToEnd();
```

### <a name="return-value"></a>Valore restituito

Lunghezza, in byte, del file.

### <a name="remarks"></a>Osservazioni

`SeekToEnd()` equivale a: `CFile::Seek( 0L, CFile::end )`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#19](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_15.cpp)]

##  <a name="setfilepath"></a>CFile:: FilePath

Chiamare questa funzione per specificare il percorso del file. Se, ad esempio, il percorso di un file non è disponibile quando viene costruito un oggetto [CFile](../../mfc/reference/cfile-class.md) , chiamare `SetFilePath` per fornirlo.

```
virtual void SetFilePath(LPCTSTR lpszNewName);
```

### <a name="parameters"></a>Parametri

*lpszNewName*<br/>
Puntatore a una stringa che specifica il nuovo percorso.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> `SetFilePath` non apre il file o crea il file; associa semplicemente l'oggetto `CFile` con un nome di percorso, che può quindi essere utilizzato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#20](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_16.cpp)]

##  <a name="setlength"></a>CFile:: selength

Chiamare questa funzione per modificare la lunghezza del file.

```
virtual void SetLength(ULONGLONG dwNewLen);
```

### <a name="parameters"></a>Parametri

*dwNewLen*<br/>
Lunghezza desiderata in byte del file. Questo valore può essere maggiore o minore della lunghezza corrente del file. Il file verrà esteso o troncato in base alle esigenze.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Con `CMemFile`, questa funzione può generare un oggetto `CMemoryException`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#11](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_17.cpp)]

##  <a name="setstatus"></a>CFile:: sestatus

Imposta lo stato del file associato a questo percorso del file.

```
static void PASCAL SetStatus(
    LPCTSTR lpszFileName,
    const CFileStatus& status,
    CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*lpszFileName*<br/>
Stringa che rappresenta il percorso del file desiderato. Il percorso può essere relativo o assoluto e può contenere un nome di rete.

*Stato*<br/>
Buffer contenente le nuove informazioni sullo stato. Chiamare la funzione membro `GetStatus` per precompilare la struttura `CFileStatus` con i valori correnti, quindi apportare le modifiche necessarie. Se un valore è 0, l'elemento di stato corrispondente non viene aggiornato. Per una descrizione della struttura `CFileStatus`, vedere la funzione membro [GetStatus](#getstatus) .

*pTM*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="remarks"></a>Osservazioni

Per impostare l'ora, modificare il campo `m_mtime` dello *stato*.

Quando si effettua una chiamata a `SetStatus` in un tentativo di modificare solo gli attributi del file e il membro `m_mtime` della struttura di stato del file è diverso da zero, è possibile che gli attributi siano interessati (la modifica del timestamp potrebbe avere effetti collaterali sugli attributi). Se si desidera modificare solo gli attributi del file, impostare prima di tutto il membro `m_mtime` della struttura dello stato del file su zero e quindi effettuare una chiamata a `SetStatus`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#21](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_18.cpp)]

##  <a name="unlockrange"></a>CFile:: UnlockRange

Sblocca un intervallo di byte in un file aperto.

```
virtual void UnlockRange(
    ULONGLONG dwPos,
    ULONGLONG dwCount);
```

### <a name="parameters"></a>Parametri

*dwPos*<br/>
Offset di byte dell'inizio dell'intervallo di byte da sbloccare.

*dwCount*<br/>
Numero di byte nell'intervallo da sbloccare.

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere la descrizione della funzione membro [LockRange](#lockrange) .

> [!NOTE]
>  Questa funzione non è disponibile per la classe derivata da `CMemFile`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#12](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_8.cpp)]

##  <a name="write"></a>CFile:: Write

Scrive i dati da un buffer nel file associato all'oggetto `CFile`.

```
virtual void Write(
    const void* lpBuf,
    UINT nCount);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Puntatore al buffer fornito dall'utente che contiene i dati da scrivere nel file.

*nCount*<br/>
Numero di byte da trasferire dal buffer. Per i file in modalità testo, le coppie ritorno a capo e avanzamento riga vengono conteggiate come singoli caratteri.

### <a name="remarks"></a>Osservazioni

`Write` genera un'eccezione in risposta a diverse condizioni, inclusa la condizione disco-completo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#16](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_19.cpp)]

Vedere anche gli esempi per [CFile:: CFile](#cfile) e [CFile:: Open](#open).

## <a name="see-also"></a>Vedere anche

[DRAWCLI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CStdioFile](../../mfc/reference/cstdiofile-class.md)<br/>
[Classe CMemFile](../../mfc/reference/cmemfile-class.md)

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
ms.openlocfilehash: 53afaf7732811e25729944eb71130a88e4f17a87
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81755008"
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
|[File::CFile](#cfile)|Costruisce un `CFile` oggetto da un percorso o da un handle di file.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[File CFile::Abort](#abort)|Chiude un file ignorando tutti gli avvisi e gli errori.|
|[File::Chiudi](#close)|Chiude un file ed elimina l'oggetto.|
|[CFile::Duplicica](#duplicate)|Costruisce un oggetto duplicato basato su questo file.|
|[CFile::Flush](#flush)|Scarica tutti i dati ancora da scrivere.|
|[CFile::GetFileName](#getfilename)|Recupera il nome del file selezionato.|
|[CFile::GetFilePath](#getfilepath)|Recupera il percorso completo del file selezionato.|
|[CFile::GetFileTitle](#getfiletitle)|Recupera il titolo del file selezionato.|
|[CFile::GetLength](#getlength)|Recupera la lunghezza del file.|
|[CFile::GetPosition](#getposition)|Recupera il puntatore del file corrente.|
|[File::GetStatus](#getstatus)|Recupera lo stato del file aperto o nella versione statica recupera lo stato del file specificato (statica, funzione virtuale).|
|[CFile::LockRange](#lockrange)|Blocca un intervallo di byte in un file.|
|[FileC::Aperto](#open)|Apre in modo sicuro un file con un'opzione di test degli errori.|
|[CFile::Lettura](#read)|Legge (senza buffer) i dati da un file nella posizione corrente del file.|
|[FileC::Rimuovere](#remove)|Elimina il file specificato (funzione statica).|
|[CFile::Rinomina](#rename)|Rinomina il file specificato (funzione statica).|
|[File::Seek](#seek)|Posiziona il puntatore del file corrente.|
|[File::SeekToBegin](#seektobegin)|Posiziona il puntatore del file corrente all'inizio del file.|
|[FileC::SeekToEnd](#seektoend)|Posiziona il puntatore del file corrente alla fine del file.|
|[CFile::SetFilePath](#setfilepath)|Imposta il percorso completo del file selezionato.|
|[CFile::SetLength](#setlength)|Modifica la lunghezza del file.|
|[CFile::SetStatus](#setstatus)|Imposta lo stato del file specificato (funzione statica virtuale).|
|[CFile::UnlockRange](#unlockrange)|Sblocca un intervallo di byte in un file.|
|[CFile::Scrittura](#write)|Scrive (senza buffer) i dati in un file nella posizione corrente del file.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFile::operatorE HANDLE](#operator_handle)|Handle per `CFile` un oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[File::hFileNull](#hfilenull)|Determina se `CFile` l'oggetto dispone di un handle valido.|
|[File::m_hFile](#m_hfile)|Di solito contiene l'handle di file del sistema operativo.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[FileC::m_pTM](#m_ptm)|Puntatore all'oggetto `CAtlTransactionManager`.|

## <a name="remarks"></a>Osservazioni

Fornisce direttamente servizi di input/output del disco binario senza buffer e supporta indirettamente file di testo e file di memoria tramite le classi derivate. `CFile`funziona in combinazione `CArchive` con la classe per supportare la serializzazione di Microsoft Foundation Class oggetti.

La relazione gerarchica tra questa classe e le relative classi derivate consente `CFile` al programma di operare su tutti gli oggetti file tramite l'interfaccia polimorfica. Un file di memoria, ad esempio, si comporta come un file su disco.

Utilizzare `CFile` e le relative classi derivate per l'I/O su disco generico. Utilizzare `ofstream` o `iostream` altre classi Microsoft per il testo formattato inviato a un file su disco.

Normalmente, un file su `CFile` disco viene aperto automaticamente durante la costruzione e chiuso alla distruzione. Le funzioni membro statiche consentono di interrogare lo stato di un file senza aprire il file.

Per ulteriori informazioni `CFile`sull'utilizzo di , vedere gli articoli [File in MFC](../../mfc/files-in-mfc.md) e Gestione [file](../../c-runtime-library/file-handling.md) in Riferimenti alla libreria di *runtime*.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="cfileabort"></a><a name="abort"></a>File CFile::Abort

Chiude il file associato a questo oggetto e rende il file non disponibile per la lettura o la scrittura.

```
virtual void Abort();
```

### <a name="remarks"></a>Osservazioni

Se il file non è stato chiuso prima di distruggere l'oggetto, il distruttore lo chiude per te.

Quando si gestiscono `CFile::Abort` le `CFile::Close` eccezioni, differisce da in due modi importanti. In primo `Abort` luogo, la funzione non genererà un'eccezione `Abort`in caso di errori, poiché gli errori vengono ignorati da . In `Abort` secondo luogo, non **ASSERT** se il file non è stato aperto o è stato chiuso in precedenza.

Se è **new** stato utilizzato `CFile` new per allocare l'oggetto nell'heap, è necessario eliminarlo dopo la chiusura del file. `Abort`impostato `m_hFile` `CFile::hFileNull`su .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#5](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_1.cpp)]

## <a name="cfilecfile"></a><a name="cfile"></a>File::CFile

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

*hFile (File)*<br/>
Handle di un file da aggiungere all'oggetto `CFile`.

*lpszNomefileName (nome file)*<br/>
Percorso completo o relativo di un file da aggiungere all'oggetto `CFile`.

*nOpenFlags (in elenco)*<br/>
Combinazione bit per bit (OR) di opzioni di accesso per il file specificato. Per le possibili opzioni, vedere la sezione Note.

*Ptm*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="remarks"></a>Osservazioni

Nelle cinque tabelle seguenti sono elencate le opzioni possibili per il parametro *nOpenFlags.*

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
|`CFile::typeText`|Imposta la modalità testo con elaborazione speciale per le coppie ritorno a capo-linea (utilizzato solo nelle classi derivate).|
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
|`CFile::modeCreate`|Crea un nuovo file se non esiste alcun file. Se il file esiste già, viene sovrascritto e inizialmente impostato su lunghezza zero.|
|`CFile::modeNoTruncate`|Crea un nuovo file se non esiste alcun file; in caso contrario, se il file esiste `CFile` già, viene collegato all'oggetto.|

Scegliere le opzioni di memorizzazione nella cache del file come descritto. Per impostazione predefinita, il sistema utilizza uno schema di memorizzazione nella cache generico che non è disponibile come opzione.

|valore|Descrizione|
|-----------|-----------------|
|`CFile::osNoBuffer`|Il sistema non utilizza una cache intermedia per il file. Questa opzione annulla le due opzioni seguenti.|
|`CFile::osRandomAccess`|La cache dei file viene ottimizzata per l'accesso casuale. Non utilizzare sia questa opzione che l'opzione di scansione sequenziale.|
|`CFile::osSequentialScan`|La cache dei file viene ottimizzata per l'accesso sequenziale. Non utilizzare sia questa opzione che l'opzione di accesso casuale.|
|`CFile::osWriteThrough`|Le operazioni di scrittura vengono eseguite senza indugio.|

Scegliere l'opzione di sicurezza seguente per evitare che l'handle di file venga ereditato. Per impostazione predefinita, l'handle di file può essere usato da tutti i nuovi processi figlio.

|valore|Descrizione|
|-----------|-----------------|
|`CFile::modeNoInherit`|Evita l'uso dell'handle di file da parte di qualsiasi processo figlio.|

Il costruttore predefinito inizializza i membri ma `CFile` non associa un file all'oggetto. Dopo aver utilizzato questo costruttore, utilizzare il [CFile::Open](#open) `CFile` metodo per aprire un file e associarlo all'oggetto.

Il costruttore con un parametro inizializza i membri e aggiunge un file esistente all'oggetto `CFile`.

Il costruttore con due parametri inizializza i membri e prova ad aprire il file specificato. Se il costruttore apre correttamente il file specificato, il file viene aggiunto all'oggetto `CFile`. In caso contrario, questo costruttore genera un puntatore a un oggetto `CInvalidArgException`. Per ulteriori informazioni su come gestire le eccezioni, vedere [Eccezioni](../../mfc/exception-handling-in-mfc.md).

Se `CFile` un oggetto apre correttamente un file specificato, `CFile` lo chiuderà automaticamente quando l'oggetto viene eliminato; in caso contrario, è necessario chiudere in modo `CFile` esplicito il file dopo che non è più associato all'oggetto.

### <a name="example"></a>Esempio

L'esempio di codice illustra come usare un oggetto `CFile`.

[!code-cpp[NVC_MFCFiles#4](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_2.cpp)]

## <a name="cfileclose"></a><a name="close"></a>File::Chiudi

Chiude il file associato a questo oggetto e rende il file non disponibile per la lettura o la scrittura.

```
virtual void Close();
```

### <a name="remarks"></a>Osservazioni

Se il file non è stato chiuso prima di distruggere l'oggetto, il distruttore lo chiude per te.

Se è **new** stato utilizzato `CFile` new per allocare l'oggetto nell'heap, è necessario eliminarlo dopo la chiusura del file. `Close`impostato `m_hFile` `CFile::hFileNull`su .

### <a name="example"></a>Esempio

Vedere l'esempio per [CFile::CFile](#cfile).

## <a name="cfileduplicate"></a><a name="duplicate"></a>CFile::Duplicica

Costruisce un `CFile` oggetto duplicato per un determinato file.

```
virtual CFile* Duplicate() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a `CFile` un oggetto duplicato.

### <a name="remarks"></a>Osservazioni

Questa funzione è equivalente alla funzione `_dup`di runtime del linguaggio C .

## <a name="cfileflush"></a><a name="flush"></a>CFile::Flush

Forza la scrittura nel file dei dati rimanenti nel buffer del file.

```
virtual void Flush();
```

### <a name="remarks"></a>Osservazioni

L'utilizzo `Flush` di non garantisce `CArchive` lo svuotamento dei buffer. Se si utilizza un archivio, chiamare prima [CArchive::Flush.](../../mfc/reference/carchive-class.md#flush)

### <a name="example"></a>Esempio

Vedere l'esempio per [CFile::SetFilePath](#setfilepath).

## <a name="cfilegetfilename"></a><a name="getfilename"></a>CFile::GetFileName

Chiamare questa funzione membro per recuperare il nome di un file specificato.

```
virtual CString GetFileName() const;
```

### <a name="return-value"></a>Valore restituito

Nome del file.

### <a name="remarks"></a>Osservazioni

Ad esempio, quando `GetFileName` si chiama per generare `c:\windows\write\myfile.wri`un messaggio `myfile.wri`all'utente sul file , viene restituito il nome del file, .

Per restituire l'intero percorso del file, incluso il nome, chiamare [GetFilePath](#getfilepath). Per restituire il titolo `myfile`del file ( ), chiamare [GetFileTitle](#getfiletitle).

### <a name="example"></a>Esempio

Questo frammento di codice apre il sistema. INI nella directory WINDOWS. Se trovato, l'esempio stamperà il nome e il percorso e il titolo, come mostrato in Output:

[!code-cpp[NVC_MFCFiles#6](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_3.cpp)]

## <a name="cfilegetfilepath"></a><a name="getfilepath"></a>CFile::GetFilePath

Chiamare questa funzione membro per recuperare il percorso completo di un file specificato.

```
virtual CString GetFilePath() const;
```

### <a name="return-value"></a>Valore restituito

Percorso completo del file specificato.

### <a name="remarks"></a>Osservazioni

Ad esempio, quando `GetFilePath` si chiama per generare `c:\windows\write\myfile.wri`un messaggio all'utente sul file , viene restituito il percorso del file, `c:\windows\write\myfile.wri`.

Per restituire solo il nome`myfile.wri`del file ( ), chiamare [GetFileName](#getfilename). Per restituire il titolo`myfile`del file ( ), chiamare [GetFileTitle](#getfiletitle).

### <a name="example"></a>Esempio

Vedere l'esempio per [GetFileName](#getfilename).

## <a name="cfilegetfiletitle"></a><a name="getfiletitle"></a>CFile::GetFileTitle

Chiamare questa funzione membro per recuperare il titolo del file (il nome visualizzato) per il file.

```
virtual CString GetFileTitle() const;
```

### <a name="return-value"></a>Valore restituito

Titolo del file sottostante.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama [GetFileTitle](/windows/win32/api/commdlg/nf-commdlg-getfiletitlew) per recuperare il titolo del file. In caso di esito positivo, il metodo restituisce la stringa che il sistema utilizzerebbe per visualizzare il nome del file all'utente. In caso contrario, il metodo chiama [PathFindFileName](/windows/win32/api/shlwapi/nf-shlwapi-pathfindfilenamew) per recuperare il nome del file (inclusa l'estensione del file) del file sottostante. Ciò significa che l'estensione del file non è sempre inclusa nella stringa del titolo del file restituito. Per ulteriori informazioni, vedere [GetFileTitle](/windows/win32/api/commdlg/nf-commdlg-getfiletitlew) e [PathFindFileName](/windows/win32/api/shlwapi/nf-shlwapi-pathfindfilenamew) in Windows SDK.

Per restituire l'intero percorso del file, incluso il nome, chiamare [GetFilePath](#getfilepath). Per restituire solo il nome del file, chiamare [GetFileName](#getfilename).

### <a name="example"></a>Esempio

Vedere l'esempio per [GetFileName](#getfilename).

## <a name="cfilegetlength"></a><a name="getlength"></a>CFile::GetLength

Ottiene la lunghezza logica corrente del file in byte.

```
virtual ULONGLONG GetLength() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza del file.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#7](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_4.cpp)]

## <a name="cfilegetposition"></a><a name="getposition"></a>CFile::GetPosition

Ottiene il valore corrente del puntatore al file, `Seek`che può essere utilizzato nelle chiamate successive a .

```
virtual ULONGLONG GetPosition() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al file.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#8](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_5.cpp)]

## <a name="cfilegetstatus"></a><a name="getstatus"></a>File::GetStatus

Questo metodo recupera le informazioni `CFile` sullo stato relative a una determinata istanza dell'oggetto o a un percorso di file specificato.

```
BOOL GetStatus(CFileStatus& rStatus) const;

static BOOL PASCAL GetStatus(
    LPCTSTR lpszFileName,
    CFileStatus& rStatus,
    CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*rStatus (informazioni in stato di in*<br/>
Riferimento a una struttura `CFileStatus` fornita dall'utente che riceverà le informazioni sullo stato. La `CFileStatus` struttura ha i seguenti campi:

- `CTime m_ctime`Data e ora di creazione del file.

- `CTime m_mtime`Data e ora dell'ultima modifica del file.

- `CTime m_atime`Data e ora dell'ultimo accesso al file per la lettura.

- `ULONGLONG m_size`Dimensione logica del file in byte, come riportato dal comando DIR.

- `BYTE m_attribute`Byte dell'attributo del file.

- `char m_szFullName[_MAX_PATH]`Nome file assoluto nel set di caratteri di Windows.

*lpszNomefileName (nome file)*<br/>
Una stringa nel set di caratteri di Windows che è il percorso del file desiderato. Il percorso può essere relativo o assoluto oppure può contenere un nome di percorso di rete.

*Ptm*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="return-value"></a>Valore restituito

TRUESe le informazioni sullo stato per il file specificato viene ottenuto correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

La versione non `GetStatus` statica di recupera le informazioni sullo `CFile` stato del file aperto associato all'oggetto specificato.  La versione `GetStatus` statica di ottiene lo stato del file da un determinato percorso di file senza aprire effettivamente il file. Questa versione è utile per verificare l'esistenza e i diritti di accesso di un file.

Il `m_attribute` membro `CFileStatus` della struttura fa riferimento al set di attributi di file. La `CFile` classe fornisce il tipo di enumerazione **Attribute** in modo che gli attributi di file possano essere specificati simbolicamente:

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

## <a name="cfilehfilenull"></a><a name="hfilenull"></a>File::hFileNull

Determina la presenza di un `CFile` handle di file valido per l'oggetto.

```
static AFX_DATA const HANDLE hFileNull;
```

### <a name="remarks"></a>Osservazioni

Questa costante viene utilizzata `CFile` per determinare se l'oggetto dispone di un handle di file valido.

Nell'esempio seguente viene illustrata questa operazione:The following example demonstrates this operation:

[!code-cpp[NVC_MFCFiles#22](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_7.cpp)]

## <a name="cfilelockrange"></a><a name="lockrange"></a>CFile::LockRange

Blocca un intervallo di byte in un file aperto, generando un'eccezione se il file è già bloccato.

```
virtual void LockRange(
    ULONGLONG dwPos,
    ULONGLONG dwCount);
```

### <a name="parameters"></a>Parametri

*dwPos*<br/>
Offset di byte dell'inizio dell'intervallo di byte da bloccare.

*dwCount (conta informazioni su dwCount)*<br/>
Numero di byte nell'intervallo da bloccare.

### <a name="remarks"></a>Osservazioni

Il blocco di byte in un file impedisce l'accesso a tali byte da altri processi. È possibile bloccare più aree di un file, ma non sono consentite aree sovrapposte.

Quando si sblocca `UnlockRange` l'area utilizzando la funzione membro, l'intervallo di byte deve corrispondere esattamente all'area che è stata bloccata in precedenza. La `LockRange` funzione non unisce aree adiacenti. Se due regioni bloccate sono adiacenti, è necessario sbloccare ogni regione separatamente.

> [!NOTE]
> Questa funzione non è `CMemFile`disponibile per la classe derivata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#12](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_8.cpp)]

## <a name="cfilem_hfile"></a><a name="m_hfile"></a>File::m_hFile

Contiene l'handle di file del sistema operativo per un file aperto.

```
HANDLE m_hFile;
```

### <a name="remarks"></a>Osservazioni

`m_hFile`è una variabile pubblica di tipo UINT. Contiene `CFile::hFileNull`, un indicatore di file vuoto indipendente dal sistema operativo, se l'handle non è stato assegnato.

L'uso di `m_hFile` non è consigliato, perché il significato del membro dipende dalla classe derivata. `m_hFile`è fatto un membro pubblico per comodità nel sostenere l'uso non polimorfico della classe.

## <a name="cfilem_ptm"></a><a name="m_ptm"></a>FileC::m_pTM

Puntatore a un oggetto `CAtlTransactionManager`.

```
CAtlTransactionManager* m_pTM;
```

### <a name="remarks"></a>Osservazioni

## <a name="cfileopen"></a><a name="open"></a>FileC::Aperto

Di overload. `Open`è progettato per `CFile` l'utilizzo con il costruttore predefinito.

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

*lpszNomefileName (nome file)*<br/>
Stringa contenente il percorso del file desiderato. Il percorso può essere relativo, assoluto o un nome di rete (UNC).

*nOpenFlags (in elenco)*<br/>
Oggetto UINT che definisce la modalità di condivisione e accesso del file. Specifica l'azione da eseguire all'apertura del file. È possibile combinare le opzioni utilizzando l'operatore OR bit per bit ( **&#124;** ). Sono necessarie un'autorizzazione di accesso e un'opzione di condivisione; le `modeCreate` `modeNoInherit` modalità e sono facoltative. Vedere il [CFile](#cfile) costruttore per un elenco di opzioni di modalità.

*pError*<br/>
Puntatore a un oggetto eccezione file esistente che riceverà lo stato di un'operazione non riuscita.

*Ptm*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'apertura ha esito positivo; in caso contrario 0. Il *pError* parametro è significativo solo se viene restituito 0.

### <a name="remarks"></a>Osservazioni

Le `Open` due funzioni sono metodi "sicuri" per l'apertura di un file, in cui un errore è una condizione normale prevista.

Mentre `CFile` il costruttore genera un'eccezione in una condizione di errore, `Open` restituisce FALSE per le condizioni di errore. `Open`può comunque inizializzare un oggetto [CFileException](../../mfc/reference/cfileexception-class.md) per descrivere l'errore. Se non si specifica il parametro *pError* o se `Open` si passa NULL per `CFileException` *pError*, restituisce FALSE e non genera un valore . Se si passa un `CFileException`puntatore `Open` a un oggetto esistente e si verifica un errore, la funzione lo riempie con informazioni che descrivono tale errore. `Open`non genera un'eccezione in entrambi i casi.

Nella tabella seguente vengono descritti `Open`i possibili risultati di .

|`pError`|Errore rilevato|Valore restituito|Contenuto di CFileException|
|--------------|------------------------|------------------|----------------------------|
|NULL|No|TRUE|n/d|
|ptr a`CFileException`|No|TRUE|non modificato|
|NULL|Sì|FALSE|n/d|
|ptr a`CFileException`|Sì|FALSE|inizializzato per descrivere l'errore|

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#13](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_9.cpp)]

[!code-cpp[NVC_MFCFiles#14](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_10.cpp)]

## <a name="cfileoperator-handle"></a><a name="operator_handle"></a>CFile::operatorE HANDLE

Utilizzare questo operatore per `CFile` passare un handle a un oggetto a funzioni `HANDLE`quali [ReadFileEx](/windows/win32/api/fileapi/nf-fileapi-readfileex) e [GetFileTime](/windows/win32/api/fileapi/nf-fileapi-getfiletime) che prevedono un oggetto .

```
operator HANDLE() const;
```

## <a name="cfileread"></a><a name="read"></a>CFile::Lettura

Legge i dati in un buffer `CFile` dal file associato all'oggetto.

```
virtual UINT Read(
    void* lpBuf,
    UINT nCount);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Puntatore al buffer fornito dall'utente che deve ricevere i dati letti dal file.

*nConteggio*<br/>
Numero massimo di byte da leggere dal file. Per i file in modalità testo, le coppie ritorno a capo-avanzamento riga vengono conteggiate come caratteri singoli.

### <a name="return-value"></a>Valore restituito

Numero di byte trasferiti nel buffer. Per `CFile` tutte le classi, il valore restituito può essere minore di *nCount* se è stata raggiunta la fine del file.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#15](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_11.cpp)]

Per un altro esempio, vedere [CFile::Open](#open).

## <a name="cfileremove"></a><a name="remove"></a>FileC::Rimuovere

Questa funzione statica elimina il file specificato dal percorso.

```
static void PASCAL Remove(
    LPCTSTR lpszFileName,
    CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*lpszNomefileName (nome file)*<br/>
Stringa che è il percorso del file desiderato. Il percorso può essere relativo o assoluto e può contenere un nome di rete.

*Ptm*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="remarks"></a>Osservazioni

`Remove`non rimuoverà una directory.

La `Remove` funzione membro genera un'eccezione se il file connesso è aperto o se il file non può essere rimosso. Questa funzione è equivalente al comando DEL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#17](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_12.cpp)]

## <a name="cfilerename"></a><a name="rename"></a>CFile::Rinomina

Questa funzione statica rinomina il file specificato.

```
static void PASCAL Rename(
    LPCTSTR lpszOldName,
    LPCTSTR lpszNewName,
    CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*lpszOldName (nome dall'altro)*<br/>
Il vecchio percorso.

*lpszNewName (nome di un oggetto spznewnamesio)*<br/>
Nuovo percorso.

*Ptm*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="remarks"></a>Osservazioni

Le directory non possono essere rinominate. Questa funzione è equivalente al comando REN.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#18](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_13.cpp)]

## <a name="cfileseek"></a><a name="seek"></a>File::Seek

Riposiziona il puntatore del file in un file aperto.

```
virtual ULONGLONG Seek(
LONGLONG lOff,
UINT nFrom);
```

### <a name="parameters"></a>Parametri

*lOff (Disattivato)*<br/>
Numero di byte per spostare il puntatore del file. I valori positivi spostano il puntatore del file verso la fine del file; i valori negativi spostano il puntatore del file verso l'inizio del file.

*nDa*<br/>
Posizione da cui cercare. Vedere la sezione Osservazioni per i valori possibili.

### <a name="return-value"></a>Valore restituito

Posizione del puntatore del file se il metodo ha esito positivo; in caso contrario, il valore restituito `CFileException` non è definito e viene generato un puntatore a un'eccezione.

### <a name="remarks"></a>Osservazioni

Nella tabella seguente sono elencati i valori possibili per il parametro *nFrom.*

|valore|Descrizione|
|-----------|-----------------|
|`CFile::begin`|Cercare dall'inizio del file.|
|`CFile::current`|Cercare dalla posizione corrente del puntatore del file.|
|`CFile::end`|Cercare dalla fine del file.|

Quando un file viene aperto, il puntatore del file è posizionato a 0, l'inizio del file.

È possibile impostare il puntatore del file su una posizione oltre la fine di un file. In tal caso, la dimensione del file non aumenta fino a quando non si scrive nel file.

Il gestore di eccezioni per questo metodo deve eliminare l'oggetto eccezione dopo l'elaborazione dell'eccezione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#9](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_14.cpp)]

## <a name="cfileseektobegin"></a><a name="seektobegin"></a>File::SeekToBegin

Imposta il valore del puntatore del file all'inizio del file.

```cpp
void SeekToBegin();
```

### <a name="remarks"></a>Osservazioni

`SeekToBegin()` equivale a: `Seek( 0L, CFile::begin )`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#19](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_15.cpp)]

## <a name="cfileseektoend"></a><a name="seektoend"></a>FileC::SeekToEnd

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

## <a name="cfilesetfilepath"></a><a name="setfilepath"></a>CFile::SetFilePath

Chiamare questa funzione per specificare il percorso del file. Ad esempio, se il percorso di un file non è disponibile `SetFilePath` quando viene costruito un [CFile](../../mfc/reference/cfile-class.md) oggetto, chiamare per fornirlo.

```
virtual void SetFilePath(LPCTSTR lpszNewName);
```

### <a name="parameters"></a>Parametri

*lpszNewName (nome di un oggetto spznewnamesio)*<br/>
Puntatore a una stringa che specifica il nuovo percorso.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> `SetFilePath`non apre il file o crea il file; associa semplicemente l'oggetto `CFile` a un nome di percorso, che può quindi essere utilizzato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#20](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_16.cpp)]

## <a name="cfilesetlength"></a><a name="setlength"></a>CFile::SetLength

Chiamare questa funzione per modificare la lunghezza del file.

```
virtual void SetLength(ULONGLONG dwNewLen);
```

### <a name="parameters"></a>Parametri

*dwNewLen*<br/>
Lunghezza desiderata del file in byte. Questo valore può essere maggiore o minore della lunghezza corrente del file. Il file verrà esteso o troncato in base alle esigenze.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Con `CMemFile`, questa funzione `CMemoryException` potrebbe generare un oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#11](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_17.cpp)]

## <a name="cfilesetstatus"></a><a name="setstatus"></a>CFile::SetStatus

Imposta lo stato del file associato a questo percorso di file.

```
static void PASCAL SetStatus(
    LPCTSTR lpszFileName,
    const CFileStatus& status,
    CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*lpszNomefileName (nome file)*<br/>
Stringa che è il percorso del file desiderato. Il percorso può essere relativo o assoluto e può contenere un nome di rete.

*Stato*<br/>
Buffer contenente le nuove informazioni sullo stato. Chiamare `GetStatus` la funzione membro `CFileStatus` per precompilare la struttura con i valori correnti, quindi apportare le modifiche necessarie. Se un valore è 0, l'elemento di stato corrispondente non viene aggiornato. Vedere la funzione membro [GetStatus](#getstatus) `CFileStatus` per una descrizione della struttura.

*Ptm*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="remarks"></a>Osservazioni

Per impostare l'ora, modificare il `m_mtime` campo di *stato*.

Quando si effettua `SetStatus` una chiamata a nel tentativo di modificare `m_mtime` solo gli attributi del file e il membro della struttura di stato del file è diverso da zero, gli attributi possono anche essere interessati (la modifica del timestamp può avere effetti collaterali sugli attributi). Se si desidera modificare solo gli attributi del `m_mtime` file, impostare prima il membro della `SetStatus`struttura di stato del file su zero e quindi effettuare una chiamata a .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#21](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_18.cpp)]

## <a name="cfileunlockrange"></a><a name="unlockrange"></a>CFile::UnlockRange

Sblocca un intervallo di byte in un file aperto.

```
virtual void UnlockRange(
    ULONGLONG dwPos,
    ULONGLONG dwCount);
```

### <a name="parameters"></a>Parametri

*dwPos*<br/>
Offset di byte dell'inizio dell'intervallo di byte da sbloccare.

*dwCount (conta informazioni su dwCount)*<br/>
Numero di byte nell'intervallo da sbloccare.

### <a name="remarks"></a>Osservazioni

Vedere la descrizione della funzione membro [LockRange](#lockrange) per informazioni dettagliate.

> [!NOTE]
> Questa funzione non è `CMemFile`disponibile per la classe derivata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#12](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_8.cpp)]

## <a name="cfilewrite"></a><a name="write"></a>CFile::Scrittura

Scrive i dati da un buffer `CFile` nel file associato all'oggetto.

```
virtual void Write(
    const void* lpBuf,
    UINT nCount);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Puntatore al buffer fornito dall'utente che contiene i dati da scrivere nel file.

*nConteggio*<br/>
Numero di byte da trasferire dal buffer. Per i file in modalità testo, le coppie ritorno a capo-avanzamento riga vengono conteggiate come caratteri singoli.

### <a name="remarks"></a>Osservazioni

`Write`genera un'eccezione in risposta a diverse condizioni, inclusa la condizione del disco-pieno.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#16](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_19.cpp)]

Vedere anche gli esempi per [CFile::CFile](#cfile) e [CFile::Open](#open).

## <a name="see-also"></a>Vedere anche

[Esempio MFC DRAWCLI](../../overview/visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CStdioFile](../../mfc/reference/cstdiofile-class.md)<br/>
[Classe CMemFile](../../mfc/reference/cmemfile-class.md)

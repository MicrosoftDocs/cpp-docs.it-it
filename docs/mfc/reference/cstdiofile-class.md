---
title: Classe CStdioFile
ms.date: 08/29/2019
f1_keywords:
- CStdioFile
- AFX/CStdioFile
- AFX/CStdioFile::CStdioFile
- AFX/CStdioFile::Open
- AFX/CStdioFile::ReadString
- AFX/CStdioFile::Seek
- AFX/CStdioFile::WriteString
- AFX/CStdioFile::m_pStream
helpviewer_keywords:
- CStdioFile [MFC], CStdioFile
- CStdioFile [MFC], Open
- CStdioFile [MFC], ReadString
- CStdioFile [MFC], Seek
- CStdioFile [MFC], WriteString
- CStdioFile [MFC], m_pStream
ms.assetid: 88c2274c-4f0e-4327-882a-557ba4b3ae15
ms.openlocfilehash: 80ee65aa339a38b3d8434bc4c7cb977e263f037b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366008"
---
# <a name="cstdiofile-class"></a>Classe CStdioFile

Rappresenta un file di flusso di runtime del linguaggio C aperto dalla funzione di runtime [fopen](../../c-runtime-library/reference/fopen-wfopen.md).

## <a name="syntax"></a>Sintassi

```
class CStdioFile : public CFile
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[FileCStdio::CStdioFile](#cstdiofile)|Costruisce un `CStdioFile` oggetto da un puntatore a un percorso o a un file.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStdioFile::Open](#open)|Di overload. Open è progettato per `CStdioFile` l'utilizzo con il costruttore predefinito (override [CFile::Open](../../mfc/reference/cfile-class.md#open)).|
|[CStdioFile::StringaLettura](#readstring)|Legge una singola riga di testo.|
|[FileCStdioFile::Seek](#seek)|Posiziona il puntatore del file corrente.|
|[FileCStdioFile::WriteString](#writestring)|Scrive una singola riga di testo.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStdioFile::m_pStream](#m_pstream)|Contiene un puntatore a un file aperto.|

## <a name="remarks"></a>Osservazioni

I file di flusso vengono memorizzati nel buffer e possono essere aperti in modalità testo (impostazione predefinita) o in modalità binaria.

La modalità testo fornisce un'elaborazione speciale per le coppie ritorno a capo-avanzamento riga. Quando si scrive un carattere di avanzamento riga (nuova riga) (0x0A) in un oggetto in modalità `CStdioFile` testo, la coppia di byte (0x0D, 0x0A) viene inviata al file. Quando si legge, la coppia di byte (0x0D, 0x0A) viene convertita in un singolo byte 0x0A.

Le funzioni [CFile](../../mfc/reference/cfile-class.md) [Duplicate](../../mfc/reference/cfile-class.md#duplicate), [LockRange](../../mfc/reference/cfile-class.md#lockrange)e `CStdioFile` [UnlockRange](../../mfc/reference/cfile-class.md#unlockrange) non sono supportate per .

Se si chiamano queste `CStdioFile`funzioni su un oggetto , si otterrà un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

Per ulteriori informazioni `CStdioFile`sull'utilizzo di , vedere gli articoli [File in MFC](../../mfc/files-in-mfc.md) e Gestione [file](../../c-runtime-library/file-handling.md) in Riferimenti alla libreria di *runtime*.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

`CStdioFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="cstdiofilecstdiofile"></a><a name="cstdiofile"></a>FileCStdio::CStdioFile

Costruisce e inizializza un oggetto `CStdioFile`.

```
CStdioFile();
CStdioFile(CAtlTransactionManager* pTM);
CStdioFile(FILE* pOpenStream);

CStdioFile(
    LPCTSTR lpszFileName,
    UINT nOpenFlags);

CStdioFile(
    LPCTSTR lpszFileName,
    UINT nOpenFlags,
    CAtlTransactionManager* pTM);
```

### <a name="parameters"></a>Parametri

*pOpenStream (corso)*<br/>
Specifica il puntatore del file restituito da una chiamata alla funzione di runtime del linguaggio C [fopen](../../c-runtime-library/reference/fopen-wfopen.md).

*lpszNomefileName (nome file)*<br/>
Specifica una stringa che è il percorso del file desiderato. Il percorso può essere relativo o assoluto.

*nOpenFlags (in elenco)*<br/>
Specifica le opzioni per la creazione di file, la condivisione dei file e le modalità di accesso ai file. È possibile specificare più opzioni utilizzando **|** l'operatore OR bit per bit ( ).

È necessaria un'opzione per la modalità di accesso ai file; altre modalità sono facoltative. Vedere [CFile::CFile](../../mfc/reference/cfile-class.md#cfile) per un elenco di opzioni di modalità e altri flag. In MFC versione 3.0 e successive, i flag di condivisione sono consentiti.

*Ptm*<br/>
Puntatore all'oggetto CAtlTransactionManager.

### <a name="remarks"></a>Osservazioni

Il costruttore predefinito non associa `CStdioFile` un file all'oggetto. Quando si utilizza questo costruttore, è necessario utilizzare `CStdioFile::Open` il `CStdioFile` metodo per aprire un file e associarlo all'oggetto.

Il costruttore a parametro singolo associa `CStdioFile` un flusso di file aperto all'oggetto. I valori consentiti per i puntatori includono i puntatori predefiniti del file di input/output *stdin*, *stdout*o *stderr*.

Il costruttore a `CStdioFile` due parametri crea un oggetto e apre il file corrispondente con il percorso specificato.

Se si passa NULL per *pOpenStream* o *lpszFileName*, il costruttore genera un' `CInvalidArgException*`eccezione .

Se il file non può essere aperto `CFileException*`o creato, il costruttore genera un' eccezione .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#37](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_1.cpp)]

## <a name="cstdiofilem_pstream"></a><a name="m_pstream"></a>CStdioFile::m_pStream

Il `m_pStream` membro dati è il puntatore a un file aperto `fopen`restituito dalla funzione di runtime del linguaggio C .

```
FILE* m_pStream;
```

### <a name="remarks"></a>Osservazioni

È NULL se il file non è mai stato aperto o è stato chiuso.

## <a name="cstdiofileopen"></a><a name="open"></a>CStdioFile::Open

Di overload. Open è progettato per `CStdioFile` l'utilizzo con il costruttore predefinito.

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
Stringa che è il percorso del file desiderato. Il percorso può essere relativo o assoluto.

*nOpenFlags (in elenco)*<br/>
Modalità di condivisione e accesso. Specifica l'azione da eseguire all'apertura del file. È possibile combinare le opzioni utilizzando l'operatore OR bit per bit (&#124;). Sono necessarie un'autorizzazione di accesso e un'opzione di condivisione; le modalità modeCreate e modeNoInherit sono facoltative.

*pError*<br/>
Puntatore a un oggetto eccezione file esistente che riceverà lo stato di un'operazione non riuscita.

*Ptm*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cstdiofilereadstring"></a><a name="readstring"></a>CStdioFile::StringaLettura

Legge i dati di testo in un buffer, fino a un limite `CStdioFile` di *nMax*-1 caratteri, dal file associato all'oggetto.

```
virtual LPTSTR ReadString(
    LPTSTR lpsz,
    UINT nMax);

virtual BOOL ReadString(CString& rString);
```

### <a name="parameters"></a>Parametri

*lpsz*<br/>
Specifica un puntatore a un buffer fornito dall'utente che riceverà una stringa di testo con terminazione null.

*Nmax*<br/>
Specifica il numero massimo di caratteri da leggere, senza contare il carattere di terminazione null.

*rStringa*<br/>
Un riferimento `CString` a un oggetto che conterrà la stringa quando la funzione restituisce.

### <a name="return-value"></a>Valore restituito

Puntatore al buffer contenente i dati di testo. NULL se è stata raggiunta la fine del file senza leggere alcun dato; o se booleano, FALSE se è stata raggiunta la fine del file senza leggere alcun dato.

### <a name="remarks"></a>Osservazioni

La lettura viene interrotta dal primo carattere di nuova riga. Se, in questo caso, sono stati letti meno di *nMax*-1 caratteri, un carattere di nuova riga viene archiviato nel buffer. In entrambi i casi viene aggiunto un carattere null (''0').

[CFile::Read](../../mfc/reference/cfile-class.md#read) è disponibile anche per l'input in modalità testo, ma non termina in una coppia di avanzamento riga ritorno a capo.

> [!NOTE]
> La `CString` versione di questa `'\n'` funzione rimuove il se presente; la versione LPTSTR non lo fa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#38](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_2.cpp)]

## <a name="cstdiofileseek"></a><a name="seek"></a>FileCStdioFile::Seek

Riposiziona il puntatore in un file aperto in precedenza.

```
virtual ULONGLONG Seek(
    LONGLONG lOff,
    UINT nFrom);
```

### <a name="parameters"></a>Parametri

*lOff (Disattivato)*<br/>
Numero di byte per spostare il puntatore.

*nDa*<br/>
Modalità di movimento del puntatore. Deve essere uno dei valori seguenti: 

- `CFile::begin`: sposta il puntatore del file *lOff* byte avanti dall'inizio del file.

- `CFile::current`: sposta il puntatore del file *lOff* byte dalla posizione corrente nel file.

- `CFile::end`: sposta il puntatore del file *lOff* byte dalla fine del file. Si noti che *lOff* deve essere negativo per cercare nel file esistente; valori positivi cercheranno oltre la fine del file.

### <a name="return-value"></a>Valore restituito

Se la posizione richiesta `Seek` è valida, restituisce il nuovo offset di byte dall'inizio del file. In caso contrario, il `CFileException` valore restituito non è definito e viene generato un oggetto.

### <a name="remarks"></a>Osservazioni

La `Seek` funzione consente l'accesso casuale al contenuto di un file spostando il puntatore una quantità specificata, assolutamente o relativamente. Nessun dato viene effettivamente letto durante la ricerca. Se la posizione richiesta è maggiore della dimensione del file, la lunghezza del file verrà estesa a tale posizione e non verrà generata alcuna eccezione.

Quando un file viene aperto, il puntatore del file viene posizionato in corrispondenza dell'offset 0, all'inizio del file.

Questa implementazione di `Seek` è basata sulla funzione `fseek`della libreria di runtime (CRT, Run-Time Library). Ci sono diversi limiti `Seek` per l'utilizzo di su flussi aperti in modalità testo. Per ulteriori informazioni, vedere [fseek, _fseeki64](../../c-runtime-library/reference/fseek-fseeki64.md).

### <a name="example"></a>Esempio

Nell'esempio seguente viene `Seek` illustrato come utilizzare per spostare il `cfile` puntatore 1000 byte dall'inizio del file. Si `Seek` noti che non legge i dati, pertanto è necessario chiamare successivamente [CStdioFile::ReadString](#readstring) per leggere i dati.

[!code-cpp[NVC_MFCFiles#39](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_3.cpp)]

## <a name="cstdiofilewritestring"></a><a name="writestring"></a>FileCStdioFile::WriteString

Scrive i dati da un buffer `CStdioFile` nel file associato all'oggetto.

```
virtual void WriteString(LPCTSTR lpsz);
```

### <a name="parameters"></a>Parametri

*lpsz*<br/>
Specifica un puntatore a un buffer che contiene una stringa con terminazione null.

### <a name="remarks"></a>Osservazioni

Il carattere di `\0`terminazione null ( ) non viene scritto nel file. Questo metodo scrive i caratteri di nuova riga in *lpsz* nel file come coppia di avanzamento riga di ritorno a capo.

Se si desidera scrivere dati che non sono con `CStdioFile::Write` terminazione null in un file, utilizzare o [CFile::Write](../../mfc/reference/cfile-class.md#write).

Questo metodo genera `CInvalidArgException*` un if si specifica NULL per il *lpsz* parametro.

Questo metodo genera `CFileException*` un in risposta agli errori del file system.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#40](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[CFile::Duplicica](../../mfc/reference/cfile-class.md#duplicate)<br/>
[CFile::LockRange](../../mfc/reference/cfile-class.md#lockrange)<br/>
[CFile::UnlockRange](../../mfc/reference/cfile-class.md#unlockrange)<br/>
[Classe CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md)

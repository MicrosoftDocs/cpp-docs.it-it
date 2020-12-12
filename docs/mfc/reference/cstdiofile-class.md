---
description: 'Altre informazioni su: classe CStdioFile'
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
ms.openlocfilehash: 9eda9054026635fd986cc5555d6f3260422438d1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318624"
---
# <a name="cstdiofile-class"></a>Classe CStdioFile

Rappresenta un file di flusso della fase di esecuzione del linguaggio C aperto dalla funzione di runtime [fopen](../../c-runtime-library/reference/fopen-wfopen.md).

## <a name="syntax"></a>Sintassi

```
class CStdioFile : public CFile
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CStdioFile:: CStdioFile](#cstdiofile)|Costruisce un `CStdioFile` oggetto da un puntatore a un percorso o a un file.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CStdioFile:: Open](#open)|Di overload. Open è progettato per l'uso con il `CStdioFile` costruttore predefinito (esegue l'override di [CFile:: Open](../../mfc/reference/cfile-class.md#open)).|
|[CStdioFile:: ReadString](#readstring)|Legge una singola riga di testo.|
|[CStdioFile:: Seek](#seek)|Posiziona il puntatore del file corrente.|
|[CStdioFile:: WriteString](#writestring)|Scrive una singola riga di testo.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CStdioFile:: m_pStream](#m_pstream)|Contiene un puntatore a un file aperto.|

## <a name="remarks"></a>Commenti

I file di flusso vengono memorizzati nel buffer e possono essere aperti in modalità testo (impostazione predefinita) o in modalità binaria.

La modalità testo fornisce un'elaborazione speciale per le coppie ritorno a capo/avanzamento riga. Quando si scrive un carattere di avanzamento riga (0x0A) in un oggetto in modalità testo `CStdioFile` , la coppia di byte (0x0D, 0x0A) viene inviata al file. Quando si esegue la lettura, la coppia di byte (0x0D, 0x0A) viene convertita in un singolo byte 0x0A.

Le [](../../mfc/reference/cfile-class.md) funzioni CFile [duplicate](../../mfc/reference/cfile-class.md#duplicate), [LockRange](../../mfc/reference/cfile-class.md#lockrange)e [UnlockRange](../../mfc/reference/cfile-class.md#unlockrange) non sono supportate per `CStdioFile` .

Se si chiamano queste funzioni su un `CStdioFile` , si otterrà un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

Per ulteriori informazioni sull'utilizzo di `CStdioFile` , vedere gli articoli [file in MFC](../../mfc/files-in-mfc.md) e [gestione dei file](../../c-runtime-library/file-handling.md) in riferimenti alla libreria di *Runtime*.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

`CStdioFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="cstdiofilecstdiofile"></a><a name="cstdiofile"></a> CStdioFile:: CStdioFile

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

*pOpenStream*<br/>
Specifica il puntatore del file restituito da una chiamata alla funzione di runtime del linguaggio C [fopen](../../c-runtime-library/reference/fopen-wfopen.md).

*lpszFileName*<br/>
Specifica una stringa che rappresenta il percorso del file desiderato. Il percorso può essere relativo o assoluto.

*nOpenFlags*<br/>
Specifica le opzioni per la creazione di file, la condivisione di file e le modalità di accesso ai file. È possibile specificare più opzioni usando l'operatore OR bit per bit ( **|** ).

È necessaria un'opzione per la modalità di accesso ai file. altre modalità sono facoltative. Per un elenco di opzioni di modalità e altri flag, vedere [CFile:: CFile](../../mfc/reference/cfile-class.md#cfile) . In MFC versione 3,0 e successive, i flag di condivisione sono consentiti.

*pTM*<br/>
Puntatore all'oggetto all'CAtlTransactionManager.

### <a name="remarks"></a>Commenti

Il costruttore predefinito non connette un file all' `CStdioFile` oggetto. Quando si utilizza questo costruttore, è necessario utilizzare il `CStdioFile::Open` metodo per aprire un file e collegarlo all' `CStdioFile` oggetto.

Il costruttore a parametro singolo connette un flusso di file aperto all' `CStdioFile` oggetto. I valori di puntatore consentiti includono i puntatori del file di input/output predefiniti *stdin*, *stdout* o *stderr*.

Il costruttore a due parametri crea un `CStdioFile` oggetto e apre il file corrispondente con il percorso specificato.

Se si passa NULL sia per *pOpenStream* che per *lpszFileName*, il costruttore genera un'eccezione `CInvalidArgException*` .

Se il file non può essere aperto o creato, il costruttore genera un'eccezione `CFileException*` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#37](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_1.cpp)]

## <a name="cstdiofilem_pstream"></a><a name="m_pstream"></a> CStdioFile:: m_pStream

Il `m_pStream` membro dati è il puntatore a un file aperto restituito dalla funzione di runtime del linguaggio C `fopen` .

```
FILE* m_pStream;
```

### <a name="remarks"></a>Commenti

È NULL se il file non è mai stato aperto o è stato chiuso.

## <a name="cstdiofileopen"></a><a name="open"></a> CStdioFile:: Open

Di overload. Open è progettato per essere utilizzato con il `CStdioFile` costruttore predefinito.

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
Stringa che rappresenta il percorso del file desiderato. Il percorso può essere relativo o assoluto.

*nOpenFlags*<br/>
Modalità di condivisione e accesso. Specifica l'azione da intraprendere quando si apre il file. È possibile combinare le opzioni usando l'operatore OR bit per bit (&#124;). Sono necessarie un'autorizzazione di accesso e un'opzione di condivisione; le modalità modeCreate e modeNoInherit sono facoltative.

*pError*<br/>
Puntatore a un oggetto di eccezione del file esistente che riceverà lo stato di un'operazione non riuscita.

*pTM*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

## <a name="cstdiofilereadstring"></a><a name="readstring"></a> CStdioFile:: ReadString

Legge i dati di testo in un buffer, fino a un limite di *nmax*-1 caratteri, dal file associato all' `CStdioFile` oggetto.

```
virtual LPTSTR ReadString(
    LPTSTR lpsz,
    UINT nMax);

virtual BOOL ReadString(CString& rString);
```

### <a name="parameters"></a>Parametri

*lpsz*<br/>
Specifica un puntatore a un buffer fornito dall'utente che riceverà una stringa di testo con terminazione null.

*nMax*<br/>
Specifica il numero massimo di caratteri da leggere, senza contare il carattere null di terminazione.

*rString*<br/>
Riferimento a un `CString` oggetto che conterrà la stringa quando la funzione restituisce un valore.

### <a name="return-value"></a>Valore restituito

Puntatore al buffer che contiene i dati di testo. NULL se è stata raggiunta la fine del file senza leggere alcun dato; o se booleano, FALSE se è stata raggiunta la fine del file senza leggere i dati.

### <a name="remarks"></a>Commenti

La lettura viene arrestata dal primo carattere di nuova riga. Se, in questo caso, sono stati letti meno di *nmax*-1, un carattere di nuova riga viene archiviato nel buffer. In entrambi i casi viene aggiunto un carattere null (' \ 0').

[CFile:: Read](../../mfc/reference/cfile-class.md#read) è disponibile anche per l'input in modalità testo, ma non termina in una coppia di feed di ritorno a capo/avanzamento riga.

> [!NOTE]
> La `CString` versione di questa funzione rimuove l'oggetto `'\n'` se presente. la versione di LPTSTR non è disponibile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#38](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_2.cpp)]

## <a name="cstdiofileseek"></a><a name="seek"></a> CStdioFile:: Seek

Riposiziona il puntatore in un file aperto in precedenza.

```
virtual ULONGLONG Seek(
    LONGLONG lOff,
    UINT nFrom);
```

### <a name="parameters"></a>Parametri

*lOff*<br/>
Numero di byte per spostare il puntatore.

*NDA*<br/>
Modalità di spostamento del puntatore. Deve essere uno dei valori seguenti: 

- `CFile::begin`: Spostare il puntatore del file *Loff* byte in avanti dall'inizio del file.

- `CFile::current`: Spostare il puntatore del file *Loff* i byte dalla posizione corrente nel file.

- `CFile::end`: Spostare il puntatore del file *Loff* i byte dalla fine del file. Si noti che *Loff* deve essere negativo per cercare nel file esistente. i valori positivi cercheranno oltre la fine del file.

### <a name="return-value"></a>Valore restituito

Se la posizione richiesta è valida, `Seek` restituisce il nuovo offset di byte a partire dall'inizio del file. In caso contrario, il valore restituito non è definito e `CFileException` viene generato un oggetto.

### <a name="remarks"></a>Commenti

La `Seek` funzione consente l'accesso casuale al contenuto di un file spostando il puntatore a una quantità specificata, assolutamente o relativamente. Nessun dato è effettivamente letto durante la ricerca. Se la posizione richiesta è maggiore della dimensione del file, la lunghezza del file verrà estesa a tale posizione e non verrà generata alcuna eccezione.

Quando un file viene aperto, il puntatore del file viene posizionato in corrispondenza dell'offset 0, ovvero l'inizio del file.

Questa implementazione di `Seek` è basata sulla funzione libreria Run-Time (CRT) `fseek` . Esistono diversi limiti per l'utilizzo di `Seek` sui flussi aperti in modalità testo. Per ulteriori informazioni, vedere [fseek, _fseeki64](../../c-runtime-library/reference/fseek-fseeki64.md).

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare `Seek` per spostare il puntatore 1000 byte dall'inizio del `cfile` file. Si noti che non `Seek` legge i dati, quindi è necessario chiamare [CStdioFile:: ReadString](#readstring) per leggere i dati.

[!code-cpp[NVC_MFCFiles#39](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_3.cpp)]

## <a name="cstdiofilewritestring"></a><a name="writestring"></a> CStdioFile:: WriteString

Scrive i dati da un buffer nel file associato all' `CStdioFile` oggetto.

```
virtual void WriteString(LPCTSTR lpsz);
```

### <a name="parameters"></a>Parametri

*lpsz*<br/>
Specifica un puntatore a un buffer che contiene una stringa con terminazione null.

### <a name="remarks"></a>Commenti

Il carattere null di terminazione ( `\0` ) non viene scritto nel file. Questo metodo scrive caratteri di nuova riga in *lpsz* nel file come coppia ritorno a capo/avanzamento riga.

Se si desidera scrivere dati con terminazione null in un file, utilizzare `CStdioFile::Write` o [CFile:: Write](../../mfc/reference/cfile-class.md#write).

Questo metodo genera un'eccezione `CInvalidArgException*` se si specifica null per il parametro *lpsz* .

Questo metodo genera un'eccezione `CFileException*` in risposta a errori di file System.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#40](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[CFile::D uplica](../../mfc/reference/cfile-class.md#duplicate)<br/>
[CFile:: LockRange](../../mfc/reference/cfile-class.md#lockrange)<br/>
[CFile:: UnlockRange](../../mfc/reference/cfile-class.md#unlockrange)<br/>
[Classe CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md)

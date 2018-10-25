---
title: Classe CStdioFile | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CStdioFile
- AFX/CStdioFile
- AFX/CStdioFile::CStdioFile
- AFX/CStdioFile::Open
- AFX/CStdioFile::ReadString
- AFX/CStdioFile::Seek
- AFX/CStdioFile::WriteString
- AFX/CStdioFile::m_pStream
dev_langs:
- C++
helpviewer_keywords:
- CStdioFile [MFC], CStdioFile
- CStdioFile [MFC], Open
- CStdioFile [MFC], ReadString
- CStdioFile [MFC], Seek
- CStdioFile [MFC], WriteString
- CStdioFile [MFC], m_pStream
ms.assetid: 88c2274c-4f0e-4327-882a-557ba4b3ae15
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 180e84cb20b8ad4a401480aced9320a4ceb180f6
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50083048"
---
# <a name="cstdiofile-class"></a>Classe CStdioFile

Rappresenta un file di flusso di runtime C come aperto dalla funzione di runtime [fopen](../../c-runtime-library/reference/fopen-wfopen.md).

## <a name="syntax"></a>Sintassi

```
class CStdioFile : public CFile
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStdioFile::CStdioFile](#cstdiofile)|Costruisce un `CStdioFile` oggetto da un puntatore di file o percorso.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStdioFile::Open](#open)|Di overload. Open è progettato per l'uso con il valore predefinito `CStdioFile` costruttore (esegue l'override [CFile::Open](../../mfc/reference/cfile-class.md#open)).|
|[CStdioFile::ReadString](#readstring)|Legge una singola riga di testo.|
|[CStdioFile::Seek](#seek)|Posiziona il puntatore del file corrente.|
|[CStdioFile::WriteString](#writestring)|Scrive una singola riga di testo.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStdioFile::m_pStream](#m_pstream)|Contiene un puntatore a un file aperto.|

## <a name="remarks"></a>Note

Stream file vengono memorizzati nel buffer e possono essere aperti in modalità testo (impostazione predefinita) o in modalità binaria.

La modalità testo offre un'elaborazione speciale per le coppie di ritorno a capo con avanzamento di riga. Quando si scrive una nuova riga (0x0A) di caratteri da una modalità testo `CStdioFile` (oggetto), la coppia di byte (, 0x0D 0x0A) viene inviato al file. Quando si leggono, la coppia di byte (, 0x0D 0x0A) viene convertita in un singolo byte 0x0A.

Il [CFile](../../mfc/reference/cfile-class.md) funzioni [duplicato](../../mfc/reference/cfile-class.md#duplicate), [LockRange](../../mfc/reference/cfile-class.md#lockrange), e [UnlockRange](../../mfc/reference/cfile-class.md#unlockrange) non sono supportati per `CStdioFile`.

Se si chiamano queste funzioni su un `CStdioFile`, si otterrà un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

Per altre informazioni sull'uso `CStdioFile`, vedere gli articoli [file in MFC](../../mfc/files-in-mfc.md) e [gestione File](../../c-runtime-library/file-handling.md) nel *Run-Time Library Reference*.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

`CStdioFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

##  <a name="cstdiofile"></a>  CStdioFile::CStdioFile

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
Specifica il puntatore del file restituito da una chiamata alla funzione runtime C [fopen](../../c-runtime-library/reference/fopen-wfopen.md).

*lpszFileName*<br/>
Specifica una stringa che rappresenta il percorso del file desiderato. Il percorso può essere relativo o assoluto.

*nOpenFlags*<br/>
Specifica le opzioni per la creazione di file, la condivisione di file e modalità di accesso ai file. È possibile specificare più opzioni tramite l'operatore OR bit per bit ( **|** ) operatore.

Un'opzione di modalità accesso file è obbligatoria. altre modalità sono facoltativi. Visualizzare [CFile::CFile](../../mfc/reference/cfile-class.md#cfile) per un elenco di opzioni di modalità e altri flag. In MFC 3.0 e versioni successive, i flag di condivisione sono consentiti.

*pTM*<br/>
Puntatore all'oggetto CAtlTransactionManager.

### <a name="remarks"></a>Note

Il costruttore predefinito non allega un file per il `CStdioFile` oggetto. Quando si utilizza questo costruttore, è necessario usare il `CStdioFile::Open` metodo per aprire un file e associarlo al `CStdioFile` oggetto.

Il costruttore di parametro singolo associa un flusso di file aperti per la `CStdioFile` oggetto. Consentiti i valori di puntatore includono i puntatori di file di input/output predefiniti *stdin*, *stdout*, o *stderr*.

Il costruttore due parametri crea una `CStdioFile` dell'oggetto e apre il file corrispondente con il percorso specificato.

Se viene passato NULL per uno *pOpenStream* oppure *lpszFileName*, il costruttore genera un `CInvalidArgException*`.

Se il file non può essere aperto o creato, il costruttore genera un `CFileException*`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#37](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_1.cpp)]

##  <a name="m_pstream"></a>  CStdioFile::m_pStream

Il `m_pStream` membro dati è il puntatore a un file aperto così come viene restituito dalla funzione di runtime C `fopen`.

```
FILE* m_pStream;
```

### <a name="remarks"></a>Note

È NULL se il file non è mai stato aperto o è stata chiusa.

##  <a name="open"></a>  CStdioFile::Open

Di overload. Open è progettato per l'uso con il valore predefinito `CStdioFile` costruttore.

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
Modalità di condivisione e l'accesso. Specifica l'azione da intraprendere quando si apre il file. È possibile combinare le opzioni con OR bit per bit (&#124;) operatore. L'autorizzazione di un accesso e una condivisione di opzione sono necessarie; le modalità modeCreate e modeNoInherit sono facoltative.

*pError*<br/>
Un puntatore a un oggetto eccezione di file esistente che verrà visualizzato lo stato di un'operazione non riuscita.

*pTM*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="readstring"></a>  CStdioFile::ReadString

Legge i dati di testo in un buffer, fino a un limite di *nMax*-1 caratteri, dal file di cui è associato il `CStdioFile` oggetto.

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
Specifica il numero massimo di caratteri da leggere, senza contare il carattere di terminazione null.

*rString*<br/>
Un riferimento a un `CString` che conterrà la stringa quando la funzione restituisce.

### <a name="return-value"></a>Valore restituito

Un puntatore al buffer che contiene i dati di testo. NULL se è stata raggiunta la fine del file senza dover leggere tutti i dati; o se è stato raggiunto il valore boolean, FALSE se la fine del file senza dover leggere tutti i dati.

### <a name="remarks"></a>Note

La lettura è stata arrestata dal primo carattere di nuova riga. Se, in tal caso, un numero minore rispetto *nMax*-1 caratteri sono stati letti, un carattere di nuova riga verrà archiviato nel buffer. In entrambi i casi viene aggiunto un carattere null ('\0').

[CFile:: Read](../../mfc/reference/cfile-class.md#read) è disponibile anche per l'input in modalità testo, ma non termina con una coppia di ritorno a capo con avanzamento di riga.

> [!NOTE]
>  Il `CString` versione di questa funzione rimuove il `'\n'` se presente; la versione LPTSTR non avviene.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#38](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_2.cpp)]

##  <a name="seek"></a>  CStdioFile::Seek

Riposiziona il puntatore del mouse in un file aperto in precedenza.

```
virtual ULONGLONG Seek(
    LONGLONG lOff,
    UINT nFrom);
```

### <a name="parameters"></a>Parametri

*lOff*<br/>
Numero di byte per spostare il puntatore.

*NDA*<br/>
Modalità di spostamento di puntatore. Deve essere uno dei valori seguenti:

- `CFile::begin`: Spostare il puntatore del file *lOff* inoltrare byte dall'inizio del file.

- `CFile::current`: Spostare il puntatore del file *lOff* byte dalla posizione corrente nel file.

- `CFile::end`: Spostare il puntatore del file *lOff* byte dalla fine del file. Si noti che *lOff* deve essere negativo per eseguire la ricerca esistente del file; positivo valori verranno ricerca oltre la fine del file.

### <a name="return-value"></a>Valore restituito

Se la posizione richiesta può essere eseguita, `Seek` restituisce il nuovo offset di byte dall'inizio del file. In caso contrario, il valore restituito è indefinito e un `CFileException` oggetto viene generata un'eccezione.

### <a name="remarks"></a>Note

Il `Seek` funzione consente ad accesso casuale al contenuto di un file spostando il puntatore una determinata quantità, in modo assoluto o relativo. Durante la ricerca viene effettivamente letto alcun dato. Se la posizione richiesta è maggiore della dimensione del file, verrà estesa la lunghezza del file in tale posizione e non verrà generata alcuna eccezione.

Quando viene aperto un file, il puntatore del file è posizionato in corrispondenza dell'offset 0, l'inizio del file.

Questa implementazione di `Seek` si basa sulla funzione della libreria Run-Time (CRT) `fseek`. Sono previsti limiti diversi per l'utilizzo di `Seek` sui flussi aperti in modalità testo. Per altre informazioni, vedere [fseek, fseeki64](../../c-runtime-library/reference/fseek-fseeki64.md).

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare `Seek` per spostare il puntatore di 1000 byte dall'inizio del `cfile` file. Si noti che `Seek` non legge i dati, è necessario chiamare successivamente [CStdioFile::ReadString](#readstring) per leggere i dati.

[!code-cpp[NVC_MFCFiles#39](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_3.cpp)]

##  <a name="writestring"></a>  CStdioFile::WriteString

Scrive i dati da un buffer per il file associato il `CStdioFile` oggetto.

```
virtual void WriteString(LPCTSTR lpsz);
```

### <a name="parameters"></a>Parametri

*lpsz*<br/>
Specifica un puntatore a un buffer che contiene una stringa con terminazione null.

### <a name="remarks"></a>Note

Il carattere null di terminazione ( `\0`) non viene scritta nel file. Questo metodo scrive caratteri di nuova riga *lpsz* al file come una coppia di ritorno a capo/avanzamento riga.

Se si desidera scrivere i dati che non sono con terminazione null a un file, usare `CStdioFile::Write` oppure [CFile::Write](../../mfc/reference/cfile-class.md#write).

Questo metodo genera un `CInvalidArgException*` se si specifica NULL per il *lpsz* parametro.

Questo metodo genera un `CFileException*` in risposta a errori del file system.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#40](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[CFile::Duplicate](../../mfc/reference/cfile-class.md#duplicate)<br/>
[CFile::LockRange](../../mfc/reference/cfile-class.md#lockrange)<br/>
[CFile::UnlockRange](../../mfc/reference/cfile-class.md#unlockrange)<br/>
[Classe CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md)

---
title: Classe CFileException
ms.date: 06/09/2020
f1_keywords:
- CFileException
- AFX/CFileException
- AFX/CFileException::CFileException
- AFX/CFileException::ErrnoToException
- AFX/CFileException::GetErrorMessage
- AFX/CFileException::OsErrorToException
- AFX/CFileException::ThrowErrno
- AFX/CFileException::ThrowOsError
- AFX/CFileException::m_cause
- AFX/CFileException::m_lOsError
- AFX/CFileException::m_strFileName
helpviewer_keywords:
- CFileException [MFC], CFileException
- CFileException [MFC], ErrnoToException
- CFileException [MFC], GetErrorMessage
- CFileException [MFC], OsErrorToException
- CFileException [MFC], ThrowErrno
- CFileException [MFC], ThrowOsError
- CFileException [MFC], m_cause
- CFileException [MFC], m_lOsError
- CFileException [MFC], m_strFileName
ms.assetid: f6491bb9-bfbc-42fd-a952-b33f9b62323f
ms.openlocfilehash: f58ba02862e9c0f0c0c0d24797be939276ca8035
ms.sourcegitcommit: 8167c67d76de58a7c2df3b4dcbf3d53e3b151b77
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/10/2020
ms.locfileid: "84664339"
---
# <a name="cfileexception-class"></a>Classe CFileException

Rappresenta una condizione di eccezione correlata al file.

## <a name="syntax"></a>Sintassi

```
class CFileException : public CException
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFileexception:: CFileexception](#cfileexception)|Costruisce un oggetto `CFileException`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFileexception:: ErrnoToException](#errnotoexception)|Restituisce il codice che corrisponde a un numero di errore in fase di esecuzione.|
|[CFileexception:: GetErrorMessage](#geterrormessage)|Recupera il messaggio che descrive un'eccezione.|
|[CFileexception:: OsErrorToException](#oserrortoexception)|Restituisce un codice di motivo corrispondente a un codice di errore del sistema operativo.|
|[CFileexception:: ThrowErrno](#throwerrno)|Genera un'eccezione di file in base a un numero di errore di Runtime.|
|[CFileexception:: ThrowOsError](#throwoserror)|Genera un'eccezione di file in base a un numero di errore del sistema operativo.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFileexception:: m_cause](#m_cause)|Contiene codice portabile corrispondente alla provocazione dell'eccezione.|
|[CFileexception:: m_lOsError](#m_loserror)|Contiene il numero di errore del sistema operativo correlato.|
|[CFileexception:: m_strFileName](#m_strfilename)|Contiene il nome del file per questa eccezione.|

## <a name="remarks"></a>Osservazioni

La `CFileException` classe include i membri dati pubblici che contengono il codice di origine portabile e il numero di errore specifico del sistema operativo. La classe fornisce anche funzioni membro statiche per la generazione di eccezioni di file e per la restituzione di codici di causa sia per gli errori del sistema operativo sia per gli errori di run-time C.

`CFileException`gli oggetti vengono costruiti e generati nelle `CFile` funzioni membro e nelle funzioni membro delle classi derivate. È possibile accedere a questi oggetti nell'ambito di un'espressione **catch** . Per la portabilità, utilizzare solo il codice causa per ottenere il motivo di un'eccezione. Per ulteriori informazioni sulle eccezioni, vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

`CFileException`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="cfileexceptioncfileexception"></a><a name="cfileexception"></a>CFileexception:: CFileexception

Costruisce un `CFileException` oggetto che archivia il codice di origine e il codice del sistema operativo nell'oggetto.

```
CFileException(
    int cause = CFileException::none,
    LONG lOsError = -1,
    LPCTSTR lpszArchiveName = NULL);
```

### <a name="parameters"></a>Parametri

*causa*<br/>
Variabile di tipo enumerata che indica il motivo dell'eccezione. Per un elenco dei valori possibili, vedere [CFileException:: m_cause](#m_cause) .

*lOsError*<br/>
Motivo specifico del sistema operativo per l'eccezione, se disponibile. Il parametro *lOsError* fornisce ulteriori informazioni rispetto a *cause* .

*lpszArchiveName*<br/>
Punta a una stringa contenente il nome dell'oggetto che ha `CFile` causato l'eccezione.

### <a name="remarks"></a>Osservazioni

Non usare direttamente questo costruttore, bensì chiamare la funzione globale [AfxThrowFileException](exception-processing.md#afxthrowfileexception).

> [!NOTE]
> La variabile *lOsError* si applica solo `CFile` agli `CStdioFile` oggetti e. La `CMemFile` classe non gestisce questo codice di errore.

## <a name="cfileexceptionerrnotoexception"></a><a name="errnotoexception"></a>CFileexception:: ErrnoToException

Converte un valore di errore della libreria di runtime specificato in un `CFileException` valore di errore enumerato.

```
static int PASCAL ErrnoToException(int nErrno);
```

### <a name="parameters"></a>Parametri

*nErrno*<br/>
Codice di errore integer come definito nel file di inclusione della fase di esecuzione ERRNO. H.

### <a name="return-value"></a>Valore restituito

Valore enumerato che corrisponde a un valore di errore della libreria di runtime specificato.

### <a name="remarks"></a>Osservazioni

Per un elenco dei valori enumerati possibili, vedere [CFileException:: m_cause](#m_cause) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#26](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_1.cpp)]

## <a name="cfileexceptiongeterrormessage"></a><a name="geterrormessage"></a>CFileexception:: GetErrorMessage

Recupera il testo che descrive un'eccezione.

```
virtual BOOL GetErrorMessage(
    LPTSTR lpszError,
    UINT nMaxError,
    PUINT pnHelpContext = NULL) const;
```

### <a name="parameters"></a>Parametri

*lpszError*<br/>
[in, out] Puntatore a un buffer che riceve un messaggio di errore.

*nMaxError*<br/>
in Numero massimo di caratteri che il buffer specificato può memorizzare. Questo include il carattere null di terminazione.

*pnHelpContext*<br/>
[in, out] Puntatore a un Unsigned Integer che riceve l'ID del contesto della guida. Se `NULL` , non viene restituito alcun ID.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha avuto esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se il buffer specificato è troppo piccolo, il messaggio di errore viene troncato.

### <a name="example"></a>Esempio

Nell'esempio seguente viene utilizzato `CFileException::GetErrorMessage`:

[!code-cpp[NVC_MFCExceptions#22](../../mfc/codesnippet/cpp/cfileexception-class_2.cpp)]

## <a name="cfileexceptionm_cause"></a><a name="m_cause"></a>CFileexception:: m_cause

Contiene valori definiti da un tipo enumerato `CFileException`.

```
int m_cause;
```

### <a name="remarks"></a>Osservazioni

Questo membro dati è una variabile pubblica di tipo **int**. Gli enumeratori e i relativi significati sono i seguenti:

| Errore | Valore e significato |
|--|--|
| `CFileException::none` |    0: nessun errore. |
| `CFileException::genericException` |    1: errore non specificato. |
| `CFileException::fileNotFound` |    2: file non trovato. |
| `CFileException::badPath` |    3: tutto o parte del percorso non valido. |
| `CFileException::tooManyOpenFiles` |    4: numero consentito di file aperti superato. |
| `CFileException::accessDenied` |    5: impossibile accedere al file. |
| `CFileException::invalidFile` |    6: tentativo di usare un handle di file non valido. |
| `CFileException::removeCurrentDir` |    7: impossibile eliminare la directory di lavoro corrente. |
| `CFileException::directoryFull` |    8: non ci sono più voci di directory. |
| `CFileException::badSeek` |    9: errore durante un tentativo di impostazione del puntatore del file. |
| `CFileException::hardIO` |    10: errore hardware. |
| `CFileException::sharingViolation` |    11: SHARE.EXE non era caricato o un'area condivisa era bloccata. |
| `CFileException::lockViolation` |    12: tentativo di bloccare un'area già bloccata. |
| `CFileException::diskFull` | 13: il disco è pieno. |
| `CFileException::endOfFile` | 14: è stata raggiunta la fine del file. |

    > [!NOTE]
    >  These `CFileException` cause enumerators are distinct from the `CArchiveException` cause enumerators.

    > [!NOTE]
    > `CArchiveException::generic` is deprecated. Use `genericException` instead. If **generic** is used in an application and built with /clr, the resulting syntax errors are not easy to decipher.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#30](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_3.cpp)]

## <a name="cfileexceptionm_loserror"></a><a name="m_loserror"></a>CFileexception:: m_lOsError

Contiene il codice di errore del sistema operativo per questa eccezione.

```
LONG m_lOsError;
```

### <a name="remarks"></a>Osservazioni

Per un elenco dei codici di errore, vedere il manuale tecnico del sistema operativo. Questo membro dati è una variabile pubblica di tipo LONG.

## <a name="cfileexceptionm_strfilename"></a><a name="m_strfilename"></a>CFileexception:: m_strFileName

Contiene il nome del file per questa condizione di eccezione.

```
CString m_strFileName;
```

## <a name="cfileexceptionoserrortoexception"></a><a name="oserrortoexception"></a>CFileexception:: OsErrorToException

Restituisce un enumeratore che corrisponde a un valore *lOsError* specificato. Se il codice di errore è sconosciuto, la funzione restituisce `CFileException::generic` .

```
static int PASCAL OsErrorToException(LONG lOsError);
```

### <a name="parameters"></a>Parametri

*lOsError*<br/>
Codice di errore specifico del sistema operativo.

### <a name="return-value"></a>Valore restituito

Valore enumerato che corrisponde a un valore di errore del sistema operativo specificato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#27](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_4.cpp)]

## <a name="cfileexceptionthrowerrno"></a><a name="throwerrno"></a>CFileexception:: ThrowErrno

Costruisce un `CFileException` oggetto corrispondente a un valore *nErrno* specificato, quindi genera l'eccezione.

```
static void PASCAL ThrowErrno(int nErrno, LPCTSTR lpszFileName = NULL);
```

### <a name="parameters"></a>Parametri

*nErrno*<br/>
Codice di errore integer come definito nel file di inclusione della fase di esecuzione ERRNO. H.

*lpszFileName*<br/>
Puntatore alla stringa che contiene il nome del file che ha causato l'eccezione, se disponibile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#28](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_5.cpp)]

## <a name="cfileexceptionthrowoserror"></a><a name="throwoserror"></a>CFileexception:: ThrowOsError

Genera un oggetto `CFileException` corrispondente a un valore *lOsError* specificato. Se il codice di errore è sconosciuto, la funzione genera un'eccezione codificata come `CFileException::generic` .

```
static void PASCAL ThrowOsError(LONG lOsError, LPCTSTR lpszFileName = NULL);
```

### <a name="parameters"></a>Parametri

*lOsError*<br/>
Codice di errore specifico del sistema operativo.

*lpszFileName*<br/>
Puntatore alla stringa che contiene il nome del file che ha causato l'eccezione, se disponibile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#29](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_6.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Elaborazione delle eccezioni](../../mfc/reference/exception-processing.md)

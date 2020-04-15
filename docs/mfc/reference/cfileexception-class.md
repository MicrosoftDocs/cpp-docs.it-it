---
title: Classe CFileException
ms.date: 11/04/2016
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
ms.openlocfilehash: 2d1025ca33d5641982ba52f1ac539db85df3bfd5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373888"
---
# <a name="cfileexception-class"></a>Classe CFileException

Rappresenta una condizione di eccezione correlata al file.

## <a name="syntax"></a>Sintassi

```
class CFileException : public CException
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFileException::CFileException](#cfileexception)|Costruisce un oggetto `CFileException`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFileException::ErrnoToException](#errnotoexception)|Restituisce il codice della causa corrispondente a un numero di errore di run-time.|
|[CFileException::GetErrorMessage](#geterrormessage)|Recupera il messaggio che descrive un'eccezione.|
|[CFileException::OsErrorToException](#oserrortoexception)|Restituisce un codice causa corrispondente a un codice di errore del sistema operativo.|
|[CFileException::ThrowErrno](#throwerrno)|Genera un'eccezione di file in base a un numero di errore di runtime.|
|[CFileException::ThrowOsError](#throwoserror)|Genera un'eccezione di file in base a un numero di errore del sistema operativo.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFileException::m_cause](#m_cause)|Contiene codice portabile corrispondente alla causa dell'eccezione.|
|[CFileException::m_lOsError](#m_loserror)|Contiene il numero di errore del sistema operativo correlato.|
|[CFileException::m_strFileName](#m_strfilename)|Contiene il nome del file per questa eccezione.|

## <a name="remarks"></a>Osservazioni

La `CFileException` classe include membri dati pubblici che contengono il codice della causa portabile e il numero di errore specifico del sistema operativo. La classe fornisce inoltre funzioni membro statiche per la generazione di eccezioni di file e per la restituzione di codici di causa sia per gli errori del sistema operativo che per gli errori di runtime del linguaggio C.

`CFileException`Gli oggetti vengono `CFile` costruiti e generati nelle funzioni membro e nelle funzioni membro delle classi derivate. È possibile accedere a questi oggetti nell'ambito di un'espressione **CATCH.** Per la portabilità, usare solo il codice causa per ottenere il motivo di un'eccezione. Per ulteriori informazioni sulle eccezioni, vedere l'articolo [Gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CEccezione](../../mfc/reference/cexception-class.md)

`CFileException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="cfileexceptioncfileexception"></a><a name="cfileexception"></a>CFileException::CFileException

Costruisce un `CFileException` oggetto che archivia il codice causa e il codice del sistema operativo nell'oggetto.

```
CFileException(
    int cause = CFileException::none,
    LONG lOsError = -1,
    LPCTSTR lpszArchiveName = NULL);
```

### <a name="parameters"></a>Parametri

*Causa*<br/>
Variabile di tipo enumerato che indica il motivo dell'eccezione. Vedere [CFileException::m_cause](#m_cause) per un elenco dei valori possibili.

*LOsErrore*<br/>
Motivo specifico del sistema operativo per l'eccezione, se disponibile. Il *lOsError* parametro fornisce più informazioni rispetto *alla causa.*

*lpszArchiveName (nome d'archivio)*<br/>
Punta a una stringa contenente `CFile` il nome dell'oggetto che causa l'eccezione.

### <a name="remarks"></a>Osservazioni

Non utilizzare questo costruttore direttamente, ma chiamare la funzione globale [AfxThrowFileException](exception-processing.md#afxthrowfileexception).

> [!NOTE]
> La variabile *lOsError* `CFile` si `CStdioFile` applica solo a e gli oggetti. La `CMemFile` classe non gestisce questo codice di errore.

## <a name="cfileexceptionerrnotoexception"></a><a name="errnotoexception"></a>CFileException::ErrnoToException

Converte un determinato valore di errore `CFileException` della libreria di runtime in un valore di errore enumerato.

```
static int PASCAL ErrnoToException(int nErrno);
```

### <a name="parameters"></a>Parametri

*nErrno*<br/>
Un codice di errore di tipo integer come definito nel file di inclusione di runtime ERRNO. H.

### <a name="return-value"></a>Valore restituito

Valore enumerato che corrisponde a un determinato valore di errore della libreria di runtime.

### <a name="remarks"></a>Osservazioni

Vedere [CFileException::m_cause](#m_cause) per un elenco dei possibili valori enumerati.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#26](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_1.cpp)]

## <a name="cfileexceptiongeterrormessage"></a><a name="geterrormessage"></a>CFileException::GetErrorMessage

Recupera il testo che descrive un'eccezione.

```
virtual BOOL GetErrorMessage(
    LPTSTR lpszError,
    UINT nMaxError,
    PUINT pnHelpContext = NULL) const;
```

### <a name="parameters"></a>Parametri

*Errore lpsz*<br/>
[in, out] Puntatore a un buffer che riceve un messaggio di errore.

*nMaxErrore*<br/>
[in] Numero massimo di caratteri che il buffer specificato può contenere. Ciò include il carattere di terminazione null.

*PnHelpContext*<br/>
[in, out] Puntatore a un intero senza segno che riceve l'ID di contesto della Guida. Se `NULL`, non viene restituito alcun ID.

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se il buffer specificato è troppo piccolo, il messaggio di errore viene troncato.

### <a name="example"></a>Esempio

Nell'esempio seguente viene utilizzato `CFileException::GetErrorMessage`:

[!code-cpp[NVC_MFCExceptions#22](../../mfc/codesnippet/cpp/cfileexception-class_2.cpp)]

## <a name="cfileexceptionm_cause"></a><a name="m_cause"></a>CFileException::m_cause

Contiene valori definiti da un tipo enumerato `CFileException`.

```
int m_cause;
```

### <a name="remarks"></a>Osservazioni

Questo membro dati è una variabile pubblica di tipo **int**. Gli enumeratori e i relativi significati sono i seguenti:

- `CFileException::none`0: Non si è verificato alcun errore.

- `CFileException::genericException`1: Si è verificato un errore non specificato.

- `CFileException::fileNotFound`2: Impossibile individuare il file.

- `CFileException::badPath`3: Tutto o parte del percorso non è valido.

- `CFileException::tooManyOpenFiles`4: Il numero consentito di file aperti è stato superato.

- `CFileException::accessDenied`5: Impossibile accedere al file.

- `CFileException::invalidFile`6: Si è verificato un tentativo di utilizzare un handle di file non valido.

- `CFileException::removeCurrentDir`7: La directory di lavoro corrente non può essere rimossa.

- `CFileException::directoryFull`8: Non ci sono più voci di directory.

- `CFileException::badSeek`9: Si è verificato un errore durante il tentativo di impostare il puntatore del file.

- `CFileException::hardIO`10: Si è verificato un errore hardware.

- `CFileException::sharingViolation`11: CONDIVIDI. EXE non è stato caricato o un'area condivisa è stata bloccata.

- `CFileException::lockViolation`12: Si è verificato un tentativo di bloccare un'area che era già bloccata.

- `CFileException::diskFull`14: Il disco è pieno.

- `CFileException::endOfFile`15: È stata raggiunta la fine del file.

    > [!NOTE]
    >  Questi enumeratori di causa `CFileException` sono diversi dagli enumeratori di causa `CArchiveException`.

    > [!NOTE]
    > `CArchiveException::generic` è stato deprecato. Usare invece `genericException`. Se **generic** viene utilizzato in un'applicazione e compilato con /clr, gli errori di sintassi risultanti non sono facili da decifrare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#30](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_3.cpp)]

## <a name="cfileexceptionm_loserror"></a><a name="m_loserror"></a>CFileException::m_lOsError

Contiene il codice di errore del sistema operativo per questa eccezione.

```
LONG m_lOsError;
```

### <a name="remarks"></a>Osservazioni

Consultare il manuale tecnico del sistema operativo per un elenco dei codici di errore. Questo membro dati è una variabile pubblica di tipo LONG.

## <a name="cfileexceptionm_strfilename"></a><a name="m_strfilename"></a>CFileException::m_strFileName

Contiene il nome del file per questa condizione di eccezione.

```
CString m_strFileName;
```

## <a name="cfileexceptionoserrortoexception"></a><a name="oserrortoexception"></a>CFileException::OsErrorToException

Restituisce un enumeratore che corrisponde a un valore *lOsError* specificato. Se il codice di errore è `CFileException::generic`sconosciuto, la funzione restituisce .

```
static int PASCAL OsErrorToException(LONG lOsError);
```

### <a name="parameters"></a>Parametri

*LOsErrore*<br/>
Codice di errore specifico del sistema operativo.

### <a name="return-value"></a>Valore restituito

Valore enumerato che corrisponde a un determinato valore di errore del sistema operativo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#27](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_4.cpp)]

## <a name="cfileexceptionthrowerrno"></a><a name="throwerrno"></a>CFileException::ThrowErrno

Costruisce un `CFileException` oggetto corrispondente a un determinato *valore nErrno,* quindi genera l'eccezione.

```
static void PASCAL ThrowErrno(int nErrno, LPCTSTR lpszFileName = NULL);
```

### <a name="parameters"></a>Parametri

*nErrno*<br/>
Un codice di errore di tipo integer come definito nel file di inclusione di runtime ERRNO. H.

*lpszNomefileName (nome file)*<br/>
Puntatore alla stringa contenente il nome del file che ha causato l'eccezione, se disponibile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#28](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_5.cpp)]

## <a name="cfileexceptionthrowoserror"></a><a name="throwoserror"></a>CFileException::ThrowOsError

Genera un `CFileException` corrispondente a un valore *lOsError* specificato. Se il codice di errore è sconosciuto, la `CFileException::generic`funzione genera un'eccezione codificata come .

```
static void PASCAL ThrowOsError(LONG lOsError, LPCTSTR lpszFileName = NULL);
```

### <a name="parameters"></a>Parametri

*LOsErrore*<br/>
Codice di errore specifico del sistema operativo.

*lpszNomefileName (nome file)*<br/>
Puntatore alla stringa contenente il nome del file che ha causato l'eccezione, se disponibile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#29](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_6.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Elaborazione delle eccezioni](../../mfc/reference/exception-processing.md)

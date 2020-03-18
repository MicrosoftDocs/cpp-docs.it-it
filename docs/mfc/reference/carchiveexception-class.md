---
title: Classe CArchiveException
ms.date: 11/04/2016
f1_keywords:
- CArchiveException
- AFX/CArchiveException
- AFX/CArchiveException::CArchiveException
- AFX/CArchiveException::m_cause
- AFX/CArchiveException::m_strFileName
helpviewer_keywords:
- CArchiveException [MFC], CArchiveException
- CArchiveException [MFC], m_cause
- CArchiveException [MFC], m_strFileName
ms.assetid: da31a127-e86c-41d1-b0b6-bed0865b1b49
ms.openlocfilehash: 731735bccf9225e67d82b1fe90336c92a630b368
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79420652"
---
# <a name="carchiveexception-class"></a>Classe CArchiveException

Rappresenta una condizione di eccezione di serializzazione

## <a name="syntax"></a>Sintassi

```
class CArchiveException : public CException
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CArchiveException:: CArchiveException](#carchiveexception)|Costruisce un oggetto `CArchiveException`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CArchiveException:: m_cause](#m_cause)|Indica la provocazione dell'eccezione.|
|[CArchiveException:: m_strFileName](#m_strfilename)|Specifica il nome del file per questa condizione di eccezione.|

## <a name="remarks"></a>Osservazioni

La classe `CArchiveException` include un membro dati pubblico che indica la ragione dell'eccezione.

`CArchiveException` oggetti vengono costruiti e generati all'interno di funzioni membro [CArchive](../../mfc/reference/carchive-class.md) . È possibile accedere a questi oggetti nell'ambito di un'espressione **catch** . Il codice di motivo è indipendente dal sistema operativo. Per ulteriori informazioni sull'elaborazione delle eccezioni, vedere [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

`CArchiveException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

##  <a name="carchiveexception"></a>CArchiveException:: CArchiveException

Costruisce un oggetto `CArchiveException`, archiviando il valore di *cause* nell'oggetto.

```
CArchiveException(
    int cause = CArchiveException::none,
    LPCTSTR lpszArchiveName = NULL);
```

### <a name="parameters"></a>Parametri

*cause*<br/>
Variabile di tipo enumerata che indica il motivo dell'eccezione. Per un elenco degli enumeratori, vedere il membro dati [m_cause](#m_cause) .

*lpszArchiveName*<br/>
Punta a una stringa contenente il nome dell'oggetto `CArchive` che ha causato l'eccezione.

### <a name="remarks"></a>Osservazioni

È possibile creare un oggetto `CArchiveException` nell'heap e generarlo autonomamente o lasciare che la funzione globale [AfxThrowArchiveException](../../mfc/reference/exception-processing.md#afxthrowarchiveexception) lo gestisca per l'utente.

Non usare direttamente questo costruttore. chiamare invece la funzione globale `AfxThrowArchiveException`.

##  <a name="m_cause"></a>CArchiveException:: m_cause

Specifica la ragione dell'eccezione.

```
int m_cause;
```

### <a name="remarks"></a>Osservazioni

Questo membro dati è una variabile pubblica di tipo **int**. I relativi valori vengono definiti da un `CArchiveException` tipo enumerato. Di seguito sono elencati gli enumeratori e i relativi significati:

- `CArchiveException::none` non si è verificato alcun errore.

- `CArchiveException::genericException` errore non specificato.

- `CArchiveException::readOnly` ha tentato di scrivere in un archivio aperto per il caricamento.

- `CArchiveException::endOfFile` ha raggiunto la fine del file durante la lettura di un oggetto.

- `CArchiveException::writeOnly` ha tentato di leggere da un archivio aperto per l'archiviazione.

- `CArchiveException::badIndex` formato di file non valido.

- `CArchiveException::badClass` ha tentato di leggere un oggetto in un oggetto di tipo errato.

- `CArchiveException::badSchema` ha tentato di leggere un oggetto con una versione diversa della classe.

    > [!NOTE]
    >  Questi enumeratori di causa `CArchiveException` sono diversi dagli enumeratori di causa `CFileException`.

    > [!NOTE]
    > `CArchiveException::generic` è stato deprecato. Usare invece `genericException`. Se l'opzione **Generic** viene utilizzata in un'applicazione e compilata con/CLR, saranno presenti errori di sintassi che non sono facili da decifrare.

##  <a name="m_strfilename"></a>CArchiveException:: m_strFileName

Specifica il nome del file per questa condizione di eccezione.

```
CString m_strFileName;
```

## <a name="see-also"></a>Vedere anche

[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CArchive](../../mfc/reference/carchive-class.md)<br/>
[AfxThrowArchiveException](../../mfc/reference/exception-processing.md#afxthrowarchiveexception)<br/>
[Elaborazione delle eccezioni](../../mfc/reference/exception-processing.md)

---
description: 'Altre informazioni su: classe CArchiveException'
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
ms.openlocfilehash: ce8355583e0a7a3fd8a382873a0e4b2a1ea91b83
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97185401"
---
# <a name="carchiveexception-class"></a>Classe CArchiveException

Rappresenta una condizione di eccezione di serializzazione

## <a name="syntax"></a>Sintassi

```
class CArchiveException : public CException
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CArchiveException:: CArchiveException](#carchiveexception)|Costruisce un oggetto `CArchiveException`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CArchiveException:: m_cause](#m_cause)|Indica la provocazione dell'eccezione.|
|[CArchiveException:: m_strFileName](#m_strfilename)|Specifica il nome del file per questa condizione di eccezione.|

## <a name="remarks"></a>Commenti

La `CArchiveException` classe include un membro dati pubblico che indica la ragione dell'eccezione.

`CArchiveException` gli oggetti vengono costruiti e generati all'interno delle funzioni membro [CArchive](../../mfc/reference/carchive-class.md) . È possibile accedere a questi oggetti nell'ambito di un'espressione **catch** . Il codice di motivo è indipendente dal sistema operativo. Per ulteriori informazioni sull'elaborazione delle eccezioni, vedere [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

`CArchiveException`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="carchiveexceptioncarchiveexception"></a><a name="carchiveexception"></a> CArchiveException:: CArchiveException

Costruisce un `CArchiveException` oggetto, archiviando il valore di *cause* nell'oggetto.

```
CArchiveException(
    int cause = CArchiveException::none,
    LPCTSTR lpszArchiveName = NULL);
```

### <a name="parameters"></a>Parametri

*cause*<br/>
Variabile di tipo enumerata che indica il motivo dell'eccezione. Per un elenco degli enumeratori, vedere il membro dati [m_cause](#m_cause) .

*lpszArchiveName*<br/>
Punta a una stringa contenente il nome dell'oggetto che ha `CArchive` causato l'eccezione.

### <a name="remarks"></a>Commenti

È possibile creare un `CArchiveException` oggetto nell'heap e generarlo autonomamente o lasciare che la funzione globale [AfxThrowArchiveException](../../mfc/reference/exception-processing.md#afxthrowarchiveexception) lo gestisca per l'utente.

Non usare direttamente questo costruttore. chiamare invece la funzione globale `AfxThrowArchiveException` .

## <a name="carchiveexceptionm_cause"></a><a name="m_cause"></a> CArchiveException:: m_cause

Specifica la ragione dell'eccezione.

```
int m_cause;
```

### <a name="remarks"></a>Commenti

Questo membro dati è una variabile pubblica di tipo **`int`** . I valori sono definiti da un `CArchiveException` tipo enumerato. Di seguito sono elencati gli enumeratori e i relativi significati:

- `CArchiveException::none` Non si è verificato alcun errore.

- `CArchiveException::genericException` Errore non specificato.

- `CArchiveException::readOnly` Tentativo di scrittura in un archivio aperto per il caricamento.

- `CArchiveException::endOfFile` Raggiunta la fine del file durante la lettura di un oggetto.

- `CArchiveException::writeOnly` Si è tentato di leggere da un archivio aperto per l'archiviazione.

- `CArchiveException::badIndex` Formato di file non valido.

- `CArchiveException::badClass` Tentativo di lettura di un oggetto in un oggetto di tipo non corretto.

- `CArchiveException::badSchema` Si è tentato di leggere un oggetto con una versione diversa della classe.

    > [!NOTE]
    >  Questi enumeratori di causa `CArchiveException` sono diversi dagli enumeratori di causa `CFileException`.

    > [!NOTE]
    > L'oggetto `CArchiveException::generic` è deprecato. Usare invece `genericException`. Se l'opzione **Generic** viene utilizzata in un'applicazione e compilata con/CLR, saranno presenti errori di sintassi che non sono facili da decifrare.

## <a name="carchiveexceptionm_strfilename"></a><a name="m_strfilename"></a> CArchiveException:: m_strFileName

Specifica il nome del file per questa condizione di eccezione.

```
CString m_strFileName;
```

## <a name="see-also"></a>Vedi anche

[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CArchive (classe)](../../mfc/reference/carchive-class.md)<br/>
[AfxThrowArchiveException](../../mfc/reference/exception-processing.md#afxthrowarchiveexception)<br/>
[Elaborazione delle eccezioni](../../mfc/reference/exception-processing.md)

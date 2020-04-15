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
ms.openlocfilehash: ad2a9d8c5b4466a04b5a88fcce7679911bf1b81a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377006"
---
# <a name="carchiveexception-class"></a>Classe CArchiveException

Rappresenta una condizione di eccezione di serializzazione

## <a name="syntax"></a>Sintassi

```
class CArchiveException : public CException
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CArchiveException::CArchiveException](#carchiveexception)|Costruisce un oggetto `CArchiveException`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CArchiveException::m_cause](#m_cause)|Indica la causa dell'eccezione.|
|[CArchiveException::m_strFileName](#m_strfilename)|Specifica il nome del file per questa condizione di eccezione.|

## <a name="remarks"></a>Osservazioni

La `CArchiveException` classe include un membro dati pubblico che indica la causa dell'eccezione.

`CArchiveException`gli oggetti vengono costruiti e generati all'interno delle funzioni membro [CArchive.](../../mfc/reference/carchive-class.md) È possibile accedere a questi oggetti nell'ambito di un'espressione **CATCH.** Il codice causa è indipendente dal sistema operativo. Per ulteriori informazioni sull'elaborazione delle eccezioni, vedere [Gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CEccezione](../../mfc/reference/cexception-class.md)

`CArchiveException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="carchiveexceptioncarchiveexception"></a><a name="carchiveexception"></a>CArchiveException::CArchiveException

Costruisce un `CArchiveException` oggetto, archiviando il valore della *causa* nell'oggetto.

```
CArchiveException(
    int cause = CArchiveException::none,
    LPCTSTR lpszArchiveName = NULL);
```

### <a name="parameters"></a>Parametri

*Causa*<br/>
Variabile di tipo enumerato che indica il motivo dell'eccezione. Per un elenco degli enumeratori, vedere il membro dati [m_cause.](#m_cause)

*lpszArchiveName (nome d'archivio)*<br/>
Punta a una stringa contenente `CArchive` il nome dell'oggetto che causa l'eccezione.

### <a name="remarks"></a>Osservazioni

È possibile `CArchiveException` creare un oggetto nell'heap e generarlo manualmente o lasciare che la funzione globale [AfxThrowArchiveException](../../mfc/reference/exception-processing.md#afxthrowarchiveexception) sene occupi automaticamente.

Non utilizzare direttamente questo costruttore; chiamare invece la `AfxThrowArchiveException`funzione globale .

## <a name="carchiveexceptionm_cause"></a><a name="m_cause"></a>CArchiveException::m_cause

Specifica la causa dell'eccezione.

```
int m_cause;
```

### <a name="remarks"></a>Osservazioni

Questo membro dati è una variabile pubblica di tipo **int**. I valori sono `CArchiveException` definiti da un tipo enumerato. Di seguito sono elencati gli enumeratori e i relativi significati:

- `CArchiveException::none`Non si è verificato alcun errore.

- `CArchiveException::genericException`Errore non specificato.

- `CArchiveException::readOnly`Ho cercato di scrivere in un archivio aperto per il caricamento.

- `CArchiveException::endOfFile`Raggiunto la fine del file durante la lettura di un oggetto.

- `CArchiveException::writeOnly`Ho cercato di leggere da un archivio aperto per l'archiviazione.

- `CArchiveException::badIndex`Formato di file non valido.

- `CArchiveException::badClass`Tentativo di leggere un oggetto in un oggetto di tipo errato.

- `CArchiveException::badSchema`È stato provato a leggere un oggetto con una versione diversa della classe.

    > [!NOTE]
    >  Questi enumeratori di causa `CArchiveException` sono diversi dagli enumeratori di causa `CFileException`.

    > [!NOTE]
    > `CArchiveException::generic` è stato deprecato. Usare invece `genericException`. Se **generic** viene utilizzato in un'applicazione e compilato con /clr, saranno presenti errori di sintassi facili da decifrare.

## <a name="carchiveexceptionm_strfilename"></a><a name="m_strfilename"></a>CArchiveException::m_strFileName

Specifica il nome del file per questa condizione di eccezione.

```
CString m_strFileName;
```

## <a name="see-also"></a>Vedere anche

[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CArchive](../../mfc/reference/carchive-class.md)<br/>
[AfxThrowArchiveException](../../mfc/reference/exception-processing.md#afxthrowarchiveexception)<br/>
[Elaborazione delle eccezioni](../../mfc/reference/exception-processing.md)

---
title: Classe CDaoException
ms.date: 09/17/2019
f1_keywords:
- CDaoException
- AFXDAO/CDaoException
- AFXDAO/CDaoException::CDaoException
- AFXDAO/CDaoException::GetErrorCount
- AFXDAO/CDaoException::GetErrorInfo
- AFXDAO/CDaoException::m_nAfxDaoError
- AFXDAO/CDaoException::m_pErrorInfo
- AFXDAO/CDaoException::m_scode
helpviewer_keywords:
- CDaoException [MFC], CDaoException
- CDaoException [MFC], GetErrorCount
- CDaoException [MFC], GetErrorInfo
- CDaoException [MFC], m_nAfxDaoError
- CDaoException [MFC], m_pErrorInfo
- CDaoException [MFC], m_scode
ms.assetid: b2b01fa9-7ce2-42a1-842e-40f13dc50da4
ms.openlocfilehash: 935d7870d68554d702e2ad762e83343cb518b2b8
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754736"
---
# <a name="cdaoexception-class"></a>Classe CDaoException

Rappresenta una condizione di eccezione generata da classi di database MFC basate su oggetti DAO (Data Access Object). DAO 3.6 è la versione finale ed è considerata obsoleta.

## <a name="syntax"></a>Sintassi

```
class CDaoException : public CException
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoException::CDaoException](#cdaoexception)|Costruisce un oggetto `CDaoException`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoException::GetErrorCount](#geterrorcount)|Restituisce il numero di errori nell'insieme Errors del motore di database.|
|[CDaoException::GetErrorInfo](#geterrorinfo)|Restituisce informazioni sull'errore relative a un particolare oggetto errore nell'insieme Errors.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoException::m_nAfxDaoError](#m_nafxdaoerror)|Contiene un codice di errore esteso per qualsiasi errore nelle classi DAO MFC.|
|[CDaoException::m_pErrorInfo](#m_perrorinfo)|Puntatore a un [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) oggetto che contiene informazioni su un DAO oggetto errore.|
|[CDaoException::m_scode](#m_scode)|Valore [SCODE](#m_scode) associato all'errore.|

## <a name="remarks"></a>Osservazioni

La classe include membri dati pubblici che è possibile utilizzare per determinare la causa dell'eccezione. `CDaoException`gli oggetti vengono costruiti e generati dalle funzioni membro delle classi di database DAO.

> [!NOTE]
> Le classi di database DAO sono distinte dalle classi di database MFC basate su ODBC (Open Database Connectivity). Tutti i nomi delle classi di database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO. In generale, le classi MFC basate su DAO sono più in grado rispetto alle classi MFC basate su ODBC; le classi basate su DAO possono accedere ai dati, anche tramite driver ODBC, tramite il proprio motore di database. Le classi basate su DAO supportano anche le operazioni DDL (Data Definition Language), ad esempio l'aggiunta di tabelle tramite le classi, senza dover chiamare direttamente DAO. Per informazioni sulle eccezioni generate dalle classi ODBC, vedere [CDBException](../../mfc/reference/cdbexception-class.md).

È possibile accedere agli oggetti eccezione nell'ambito di un'espressione [CATCH.](../../mfc/reference/exception-processing.md#catch) È anche `CDaoException` possibile generare oggetti dal proprio codice con la funzione globale [AfxThrowDaoException.You](../../mfc/reference/exception-processing.md#afxthrowdaoexception) can also throw objects from your own code with the AfxThrowDaoException global function.

In MFC, tutti gli errori DAO sono `CDaoException`espressi come eccezioni, di tipo . Quando si intercetta un'eccezione di `CDaoException` questo tipo, è possibile utilizzare le funzioni membro per recuperare informazioni da qualsiasi oggetto errore DAO archiviato nella raccolta Errors del motore di database. Quando si verifica ogni errore, uno o più oggetti errore vengono inseriti nell'insieme Errors. (In genere la raccolta contiene un solo oggetto errore; se si utilizza un'origine dati ODBC, è più probabile ottenere più oggetti errore.) Quando un'altra operazione DAO genera un errore, la raccolta Errors viene cancellata e il nuovo oggetto error viene inserito nell'insieme Errors. Le operazioni DAO che non generano un errore non hanno alcun effetto sull'insieme Errors.

Per i codici di errore DAO, vedere il file DAOERR. H. Per informazioni correlate, vedere l'argomento "Errori di accesso ai dati modificabili" nella Guida in linea di DAO.

Per ulteriori informazioni sulla gestione delle `CDaoException` eccezioni in generale o sugli oggetti, vedere gli articoli [Gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md) ed [Eccezioni: eccezioni di database](../../mfc/exceptions-database-exceptions.md). Il secondo articolo contiene codice di esempio che illustra la gestione delle eccezioni in DAO.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CEccezione](../../mfc/reference/cexception-class.md)

`CDaoException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="cdaoexceptioncdaoexception"></a><a name="cdaoexception"></a>CDaoException::CDaoException

Costruisce un oggetto `CDaoException`.

```
CDaoException();
```

### <a name="remarks"></a>Osservazioni

In genere, il framework crea oggetti eccezione quando il codice genera un'eccezione. Raramente è necessario costruire un oggetto eccezione in modo esplicito. Se si desidera `CDaoException` generare un dal proprio codice, chiamare la funzione globale [AfxThrowDaoException](../../mfc/reference/exception-processing.md#afxthrowdaoexception).

Tuttavia, è possibile creare in modo esplicito un oggetto eccezione se si effettuano chiamate dirette a DAO tramite i puntatori a interfaccia DAO incapsulati dalle classi MFC. In tal caso, potrebbe essere necessario recuperare le informazioni sull'errore da DAO. Si supponga che si verifichi un errore in DAO quando si chiama un metodo DAO tramite l'interfaccia DAODatabases all'insieme Databases di un'area di lavoro.

##### <a name="to-retrieve-the-dao-error-information"></a>Per recuperare le informazioni sull'errore DAO

1. Costruire `CDaoException` un oggetto.

1. Chiamare la funzione membro [GetErrorCount](#geterrorcount) dell'oggetto eccezione per determinare il numero di oggetti errore presenti nell'insieme Errors del motore di database. (In genere solo uno, a meno che non si utilizza un'origine dati ODBC.)

1. Chiamare la funzione membro [GetErrorInfo](#geterrorinfo) dell'oggetto eccezione per recuperare un oggetto errore specifico alla volta, in base all'indice nella raccolta, tramite l'oggetto eccezione. Considerare l'oggetto eccezione come un proxy per un oggetto errore DAO.

1. Esaminare la struttura [Corrente CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) restituita `GetErrorInfo` nel membro dati [m_pErrorInfo.](#m_perrorinfo) I relativi membri forniscono informazioni sull'errore DAO.

1. Nel caso di un'origine dati ODBC, ripetere i passaggi 3 e 4 in base alle esigenze, per altri oggetti di errore.

1. Se l'oggetto eccezione è stato costruito nell'heap, eliminarlo con l'operatore **delete** al termine dell'operazione.

Per ulteriori informazioni sulla gestione degli errori nelle classi DAO MFC, vedere l'articolo [Eccezioni: eccezioni di database](../../mfc/exceptions-database-exceptions.md).

## <a name="cdaoexceptiongeterrorcount"></a><a name="geterrorcount"></a>CDaoException::GetErrorCount

Chiamare questa funzione membro per recuperare il numero di oggetti errore DAO nell'insieme Errors del motore di database.

```
short GetErrorCount();
```

### <a name="return-value"></a>Valore restituito

Numero di oggetti errore DAO nell'insieme Errors del motore di database.

### <a name="remarks"></a>Osservazioni

Queste informazioni sono utili per scorrere l'insieme Errors per recuperare ognuno o più oggetti errore DAO nella raccolta. Per recuperare un oggetto errore in base all'indice o al numero di errore DAO, chiamare la funzione membro [GetErrorInfo.](#geterrorinfo)

> [!NOTE]
> In genere è presente un solo oggetto errore nell'insieme Errors. Se si utilizza un'origine dati ODBC, tuttavia, potrebbe essere presente più di uno.

## <a name="cdaoexceptiongeterrorinfo"></a><a name="geterrorinfo"></a>CDaoException::GetErrorInfo

Restituisce informazioni sull'errore relative a un particolare oggetto errore nell'insieme Errors.

```cpp
void GetErrorInfo(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice delle informazioni sull'errore nell'insieme Errors del motore di database, per la ricerca in base all'indice.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro per ottenere i seguenti tipi di informazioni sull'eccezione:

- Codice di errore

- Source (Sorgente)

- Descrizione

- File della Guida

- Contesto della Guida

`GetErrorInfo`memorizza le informazioni nel `m_pErrorInfo` membro dati dell'oggetto eccezione. Per una breve descrizione delle informazioni restituite, vedere [m_pErrorInfo](#m_perrorinfo). Se si intercetta un'eccezione di tipo `CDaoException` generato da MFC, il `m_pErrorInfo` membro sarà già compilato. Se si sceglie di chiamare direttamente DAO, è `GetErrorInfo` necessario chiamare `m_pErrorInfo`manualmente la funzione membro dell'oggetto eccezione per compilare . Per una descrizione più dettagliata, vedere il [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) struttura.

Per informazioni sulle eccezioni DAO e sul codice di esempio, vedere l'articolo [Eccezioni: eccezioni di database](../../mfc/exceptions-database-exceptions.md).

## <a name="cdaoexceptionm_nafxdaoerror"></a><a name="m_nafxdaoerror"></a>CDaoException::m_nAfxDaoError

Contiene un codice di errore esteso MFC.

### <a name="remarks"></a>Osservazioni

Questo codice viene fornito nei casi in cui un componente specifico delle classi DAO MFC ha eretto.

I valori possibili sono:

- NO_AFX_DAO_ERROR L'operazione più recente non ha generato un errore esteso MFC. Tuttavia, l'operazione potrebbe aver prodotto altri errori da DAO o OLE, pertanto è necessario controllare [m_pErrorInfo](#m_perrorinfo) ed [eventualmente m_scode](#m_scode).

- AFX_DAO_ERROR_ENGINE_INITIALIZATION MFC non è riuscito a inizializzare il modulo di gestione di database Microsoft Jet. OLE potrebbe non essere stato inizializzato o potrebbe essere stato impossibile creare un'istanza dell'oggetto motore di database DAO. Questi problemi di solito suggeriscono una cattiva installazione di DAO o OLE.

- AFX_DAO_ERROR_DFX_BIND Un indirizzo utilizzato in una chiamata di funzione DFX (Record Field Exchange) DAO non esiste o non è valido (l'indirizzo non è stato utilizzato per associare i dati). È possibile che sia stato passato un indirizzo non valido in una chiamata DFX o che l'indirizzo sia diventato non valido tra le operazioni DFX.

- AFX_DAO_ERROR_OBJECT_NOT_OPEN Si è tentato di aprire un recordset basato su un oggetto querydef o tabledef che non era in uno stato aperto.

## <a name="cdaoexceptionm_perrorinfo"></a><a name="m_perrorinfo"></a>CDaoException::m_pErrorInfo

Contiene un puntatore a una `CDaoErrorInfo` struttura che fornisce informazioni sull'oggetto errore DAO recuperato per l'ultima volta chiamando [GetErrorInfo](#geterrorinfo).

### <a name="remarks"></a>Osservazioni

Questo oggetto contiene le seguenti informazioni:

|CDaoErrorInfo (membro)|Informazioni|Significato|
|--------------------------|-----------------|-------------|
|`m_lErrorCode`|Codice di errore|Il codice di errore DAO|
|`m_strSource`|Source (Sorgente)|Il nome dell'oggetto o dell'applicazione che ha generato originariamente l'errore|
|`m_strDescription`|Descrizione|Stringa descrittiva associata all'errore|
|`m_strHelpFile`|File della Guida|Percorso di un file della Guida di Windows in cui l'utente può ottenere informazioni sul problema|
|`m_lHelpContext`|Contesto della Guida|ID di contesto per un argomento nel file della Guida di DAO|

Per informazioni dettagliate sulle `CDaoErrorInfo` informazioni contenute nell'oggetto, vedere il [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) struttura.

## <a name="cdaoexceptionm_scode"></a><a name="m_scode"></a>CDaoException::m_scode

Contiene un valore `SCODE` di tipo che descrive l'errore.

### <a name="remarks"></a>Osservazioni

Questo è un codice OLE. Raramente sarà necessario utilizzare questo valore perché, in quasi tutti i casi, informazioni più `CDaoException` specifiche sugli errori MFC o DAO sono disponibili negli altri membri dati.

Per informazioni su SCODE, vedere l'argomento Struttura dei codici di [errore OLE](/windows/win32/com/structure-of-com-error-codes) in Windows SDK. Il tipo di dati SCODE esegue il mapping al tipo di dati HRESULT.

## <a name="see-also"></a>Vedere anche

[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CException](../../mfc/reference/cexception-class.md)

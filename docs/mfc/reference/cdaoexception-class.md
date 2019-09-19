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
ms.openlocfilehash: 262c9b75771611dc04938fa5d9f58c3f7e5fc2ef
ms.sourcegitcommit: 2f96e2fda591d7b1b28842b2ea24e6297bcc3622
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2019
ms.locfileid: "71096124"
---
# <a name="cdaoexception-class"></a>Classe CDaoException

Rappresenta una condizione di eccezione generata da classi di database MFC basate su oggetti DAO (Data Access Object).
DAO 3,6 è la versione finale ed è considerata obsoleta.

## <a name="syntax"></a>Sintassi

```
class CDaoException : public CException
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CDaoException:: CDaoException](#cdaoexception)|Costruisce un oggetto `CDaoException`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoException:: GetErrorCount](#geterrorcount)|Restituisce il numero di errori nella raccolta di errori del motore di database.|
|[CDaoException:: GetErrorInfo](#geterrorinfo)|Restituisce informazioni sull'errore relative a un particolare oggetto Error nella raccolta Errors.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|DESCRIZIONE|
|----------|-----------------|
|[CDaoException::m_nAfxDaoError](#m_nafxdaoerror)|Contiene un codice di errore esteso per qualsiasi errore nelle classi DAO MFC.|
|[CDaoException:: m_pErrorInfo](#m_perrorinfo)|Puntatore a un oggetto [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) che contiene informazioni su un oggetto errore DAO.|
|[CDaoException:: m_scode](#m_scode)|Valore [SCODE](#m_scode) associato all'errore.|

## <a name="remarks"></a>Note

La classe include membri dati pubblici che è possibile usare per determinare la ragione dell'eccezione. `CDaoException`gli oggetti vengono costruiti e generati dalle funzioni membro delle classi di database DAO.

> [!NOTE]
>  Le classi di database DAO sono diverse dalle classi di database MFC basate su Open Database Connectivity (ODBC). Tutti i nomi delle classi di database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO. In generale, le classi MFC basate su DAO sono più idonee delle classi MFC basate su ODBC. le classi basate su DAO possono accedere ai dati, inclusi i driver ODBC, tramite il proprio motore di database. Le classi basate su DAO supportano anche operazioni DDL (Data Definition Language), ad esempio l'aggiunta di tabelle tramite le classi, senza la necessità di chiamare direttamente DAO. Per informazioni sulle eccezioni generate dalle classi ODBC, vedere [CDBException](../../mfc/reference/cdbexception-class.md).

È possibile accedere agli oggetti eccezione nell'ambito di un'espressione [catch](../../mfc/reference/exception-processing.md#catch) . È anche possibile generare `CDaoException` oggetti dal proprio codice con la funzione globale [AfxThrowDaoException](../../mfc/reference/exception-processing.md#afxthrowdaoexception) .

In MFC tutti gli errori DAO sono espressi come eccezioni di tipo `CDaoException`. Quando si intercetta un'eccezione di questo tipo, è possibile utilizzare `CDaoException` le funzioni membro per recuperare informazioni da qualsiasi oggetto errore DAO archiviato nella raccolta di errori del motore di database. Quando si verifica ogni errore, uno o più oggetti Error vengono inseriti nella raccolta Errors. Generalmente la raccolta contiene un solo oggetto Error. Se si utilizza un'origine dati ODBC, è più probabile che si ottengano più oggetti Error. Quando un'altra operazione DAO genera un errore, la raccolta Errors viene cancellata e il nuovo oggetto Error viene inserito nella raccolta Errors. Le operazioni DAO che non generano un errore non hanno effetto sulla raccolta di errori.

Per i codici di errore DAO, vedere il file DAOERR. H. Per informazioni correlate, vedere l'argomento "errori di accesso ai dati intercettabili" nella Guida di DAO.

Per ulteriori informazioni sulla gestione delle eccezioni in generale o sugli `CDaoException` oggetti, vedere gli articoli [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md) ed [eccezioni: Eccezioni](../../mfc/exceptions-database-exceptions.md)del database. Il secondo articolo contiene codice di esempio che illustra la gestione delle eccezioni in DAO.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

`CDaoException`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

##  <a name="cdaoexception"></a>CDaoException:: CDaoException

Costruisce un oggetto `CDaoException`.

```
CDaoException();
```

### <a name="remarks"></a>Note

In genere, il Framework crea oggetti eccezione quando il codice genera un'eccezione. Raramente è necessario costruire un oggetto eccezione in modo esplicito. Se si vuole generare una `CDaoException` dal proprio codice, chiamare la funzione globale [AfxThrowDaoException](../../mfc/reference/exception-processing.md#afxthrowdaoexception).

Tuttavia, potrebbe essere necessario creare in modo esplicito un oggetto eccezione se si effettuano chiamate dirette a DAO tramite i puntatori dell'interfaccia DAO che le classi MFC incapsulano. In tal caso, potrebbe essere necessario recuperare le informazioni sull'errore da DAO. Si supponga che si verifichi un errore in DAO quando si chiama un metodo DAO tramite l'interfaccia DAODatabases per la raccolta di database di un'area di lavoro.

##### <a name="to-retrieve-the-dao-error-information"></a>Per recuperare le informazioni sull'errore DAO

1. Costruisce `CDaoException` un oggetto.

1. Chiamare la funzione membro [GetErrorCount](#geterrorcount) dell'oggetto Exception per determinare il numero di oggetti Error presenti nella raccolta di errori del motore di database. (In genere solo uno, a meno che non si usi un'origine dati ODBC).

1. Chiamare la funzione membro [GetErrorInfo](#geterrorinfo) dell'oggetto Exception per recuperare un oggetto errore specifico alla volta, in base all'indice nella raccolta, tramite l'oggetto Exception. È possibile considerare l'oggetto eccezione come un proxy per un oggetto errore DAO.

1. Esaminare la `GetErrorInfo` struttura [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) corrente restituita nel membro dati [m_pErrorInfo](#m_perrorinfo) . I membri forniscono informazioni sull'errore DAO.

1. Nel caso di un'origine dati ODBC, ripetere i passaggi 3 e 4 in base alle esigenze, per altri oggetti Error.

1. Se è stato creato l'oggetto eccezione nell'heap, eliminarlo con l'operatore **Delete** al termine.

Per ulteriori informazioni sulla gestione degli errori nelle classi DAO MFC, vedere l'articolo [eccezioni: Eccezioni](../../mfc/exceptions-database-exceptions.md)del database.

##  <a name="geterrorcount"></a>CDaoException:: GetErrorCount

Chiamare questa funzione membro per recuperare il numero di oggetti errore DAO nella raccolta di errori del motore di database.

```
short GetErrorCount();
```

### <a name="return-value"></a>Valore restituito

Numero di oggetti di errore DAO nella raccolta di errori del motore di database.

### <a name="remarks"></a>Note

Queste informazioni sono utili per il ciclo della raccolta Errors per recuperare tutti gli oggetti di errore DAO nella raccolta. Per recuperare un oggetto Error in base all'indice o al numero di errore DAO, chiamare la funzione membro [GetErrorInfo](#geterrorinfo) .

> [!NOTE]
>  In genere è presente un solo oggetto Error nella raccolta Errors. Se si utilizza un'origine dati ODBC, tuttavia, potrebbero essere presenti più di uno.

##  <a name="geterrorinfo"></a>CDaoException:: GetErrorInfo

Restituisce informazioni sull'errore relative a un particolare oggetto Error nella raccolta Errors.

```
void GetErrorInfo(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice delle informazioni sull'errore nella raccolta di errori del motore di database per la ricerca in base all'indice.

### <a name="remarks"></a>Note

Chiamare questa funzione membro per ottenere i seguenti tipi di informazioni sull'eccezione:

- Codice di errore

- Source

- Descrizione

- File della Guida

- Contesto della Guida

`GetErrorInfo`Archivia le informazioni nel membro `m_pErrorInfo` dati dell'oggetto Exception. Per una breve descrizione delle informazioni restituite, vedere [m_pErrorInfo](#m_perrorinfo). Se si intercetta un'eccezione di tipo `CDaoException` generata da MFC, il `m_pErrorInfo` membro sarà già compilato. Se si sceglie di chiamare direttamente DAO, è necessario chiamare manualmente la funzione `GetErrorInfo` membro dell'oggetto eccezione per il riempimento. `m_pErrorInfo` Per una descrizione più dettagliata, vedere la struttura [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) .

Per informazioni sulle eccezioni DAO e il codice di esempio, vedere l' [articolo eccezioni: Eccezioni](../../mfc/exceptions-database-exceptions.md)del database.

##  <a name="m_nafxdaoerror"></a>CDaoException:: m_nAfxDaoError

Contiene un codice di errore esteso MFC.

### <a name="remarks"></a>Note

Questo codice viene fornito nei casi in cui si è verificato un errore in un componente specifico delle classi DAO MFC.

I valori possibili sono:

- NO_AFX_DAO_ERROR l'operazione più recente non ha generato un errore esteso MFC. Tuttavia, l'operazione potrebbe avere generato altri errori da DAO o OLE, quindi è consigliabile controllare [m_pErrorInfo](#m_perrorinfo) ed eventualmente [m_scode](#m_scode).

- AFX_DAO_ERROR_ENGINE_INITIALIZATION MFC non è riuscito a inizializzare il motore di database di Microsoft Jet. OLE potrebbe non essere stato inizializzato o potrebbe non essere stato possibile creare un'istanza dell'oggetto motore di database DAO. Questi problemi in genere suggeriscono un'installazione errata di DAO o OLE.

- AFX_DAO_ERROR_DFX_BIND un indirizzo utilizzato in una chiamata di funzione di scambio di campi di record DAO (DFX) non esiste o non è valido (l'indirizzo non è stato utilizzato per l'associazione dei dati). È possibile che sia stato passato un indirizzo errato in una chiamata a DFX oppure che l'indirizzo non sia più valido tra le operazioni di DFX.

- AFX_DAO_ERROR_OBJECT_NOT_OPEN si è tentato di aprire un recordset basato su un oggetto QueryDef o un oggetto TableDef che non si trovava in uno stato aperto.

##  <a name="m_perrorinfo"></a>CDaoException:: m_pErrorInfo

Contiene un puntatore a una `CDaoErrorInfo` struttura che fornisce informazioni sull'oggetto errore DAO recuperato dall'ultima volta chiamando [GetErrorInfo](#geterrorinfo).

### <a name="remarks"></a>Note

Questo oggetto contiene le informazioni seguenti:

|Membro CDaoErrorInfo|Informazioni|Significato|
|--------------------------|-----------------|-------------|
|`m_lErrorCode`|Codice di errore|Codice di errore DAO|
|`m_strSource`|Source|Nome dell'oggetto o dell'applicazione che ha generato in origine l'errore.|
|`m_strDescription`|DESCRIZIONE|Stringa descrittiva associata all'errore.|
|`m_strHelpFile`|File della Guida|Percorso di un file della Guida di Windows in cui l'utente può ottenere informazioni sul problema|
|`m_lHelpContext`|Contesto della Guida|ID del contesto per un argomento nel file della Guida DAO|

Per dettagli completi sulle informazioni contenute nell' `CDaoErrorInfo` oggetto, vedere la struttura [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) .

##  <a name="m_scode"></a>CDaoException:: m_scode

Contiene un valore di tipo `SCODE` che descrive l'errore.

### <a name="remarks"></a>Note

Si tratta di un codice OLE. Raramente è necessario usare questo valore perché, in quasi tutti i casi, sono disponibili informazioni più specifiche sugli errori MFC o DAO negli altri `CDaoException` membri dati.

Per informazioni su SCODE, vedere l'argomento relativo alla [struttura dei codici di errore OLE](/windows/win32/com/structure-of-com-error-codes) nel Windows SDK. Il tipo di dati SCODE viene mappato al tipo di dati HRESULT.

## <a name="see-also"></a>Vedere anche

[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CException](../../mfc/reference/cexception-class.md)

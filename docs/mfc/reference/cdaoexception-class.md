---
title: Classe CDaoException
ms.date: 11/04/2016
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
ms.openlocfilehash: 8d49291c51f66ee837f9b31a2ade390cec48c51a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62399804"
---
# <a name="cdaoexception-class"></a>Classe CDaoException

Rappresenta una condizione di eccezione generata da classi di database MFC basate su oggetti DAO (Data Access Object).

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
|[CDaoException::GetErrorCount](#geterrorcount)|Restituisce il numero di errori nella raccolta di errori del motore di database.|
|[CDaoException::GetErrorInfo](#geterrorinfo)|Restituisce informazioni sull'errore relative a un oggetto di errore specifico nella raccolta di errori.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoException::m_nAfxDaoError](#m_nafxdaoerror)|Contiene un codice di errore esteso per eventuali errori nelle classi DAO MFC.|
|[CDaoException::m_pErrorInfo](#m_perrorinfo)|Un puntatore a un [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) oggetto che contiene informazioni su un oggetto error DAO.|
|[CDaoException::m_scode](#m_scode)|Il [SCODE](#m_scode) valore associato all'errore.|

## <a name="remarks"></a>Note

La classe include i membri dati pubblici, che è possibile usare per determinare la causa dell'eccezione. `CDaoException` gli oggetti vengono costruiti e generati dalle funzioni membro delle classi database DAO.

> [!NOTE]
>  Le classi database DAO sono diverse dalle classi di database MFC basate su Open Database Connectivity (ODBC). Tutti i nomi delle classi database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO. In generale, le classi MFC basate su DAO sono più in grado di supportare rispetto alle classi MFC basate su ODBC; le classi basate su DAO possono accedere ai dati, incluso il servizio tramite i driver ODBC, tramite i propri motore di database. Le classi basate su DAO supportano anche operazioni di Data Definition Language (DDL), ad esempio l'aggiunta di tabelle tramite le classi, senza la necessità di chiamare direttamente DAO. Per informazioni sulle eccezioni generate dalle classi ODBC, vedere [CDBException](../../mfc/reference/cdbexception-class.md).

È possibile accedere agli oggetti eccezione all'interno dell'ambito di una [CATCH](../../mfc/reference/exception-processing.md#catch) espressione. È anche possibile generare `CDaoException` oggetti dal codice con il [AfxThrowDaoException](../../mfc/reference/exception-processing.md#afxthrowdaoexception) funzione globale.

In MFC, tutti gli errori DAO sono espressi come eccezioni, di tipo `CDaoException`. Quando si intercetta un'eccezione di questo tipo, è possibile usare `CDaoException` funzioni membro per recuperare informazioni da tutti gli oggetti errore DAO memorizzati nella raccolta di errori del motore di database. Come si verifica ogni errore, uno o più oggetti di errore vengono inseriti nella raccolta di errori. (In genere la raccolta contiene un solo oggetto di errore, se si usa un'origine dati ODBC, si hanno più probabilità di ottenere più oggetti di errore). Quando un'altra operazione di DAO genera un errore, la raccolta di errori viene cancellata e il nuovo oggetto errore viene inserito nella raccolta di errori. Operazioni di DAO non generano un errore non hanno effetto nella raccolta di errori.

Per i codici di errore DAO, vedere il file DAOERR. H. Per informazioni correlate, vedere l'argomento "Dati accesso errori intercettabili" nella Guida di DAO.

Per altre informazioni sulla gestione delle eccezioni in generali o sta `CDaoException` oggetti, vedere gli articoli [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md) e [alle eccezioni: Le eccezioni del database](../../mfc/exceptions-database-exceptions.md). Il secondo articolo contiene codice di esempio che illustra la gestione delle eccezioni in DAO.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

`CDaoException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

##  <a name="cdaoexception"></a>  CDaoException::CDaoException

Costruisce un oggetto `CDaoException`.

```
CDaoException();
```

### <a name="remarks"></a>Note

In genere, il framework crea oggetti eccezione quando il codice genera un'eccezione. Raramente è necessario costruire in modo esplicito un oggetto eccezione. Se si vuole generare una `CDaoException` dal codice, chiamare la funzione globale [AfxThrowDaoException](../../mfc/reference/exception-processing.md#afxthrowdaoexception).

Tuttavia, è possibile creare in modo esplicito un oggetto eccezione, se si effettuano chiamate dirette a DAO tramite i puntatori di interfaccia DAO che incapsulano le classi MFC. In tal caso, si potrebbe essere necessario recuperare le informazioni sull'errore da DAO. Si supponga che si verifica un errore in DAO quando si chiama un metodo DAO tramite l'interfaccia DAODatabases alla raccolta di database dell'area di lavoro.

##### <a name="to-retrieve-the-dao-error-information"></a>Per recuperare le informazioni sull'errore DAO

1. Costruire un `CDaoException` oggetto.

1. Chiamare l'oggetto dell'eccezione [GetErrorCount](#geterrorcount) funzione membro per determinare il numero di oggetti errore presenti nella raccolta di errori del motore di database. (In genere solo uno, a meno che non si usa un'origine dati ODBC.)

1. Chiamare l'oggetto dell'eccezione [GetErrorInfo](#geterrorinfo) funzione membro per recuperare un oggetto di errore specifico in un momento, in base all'indice nella raccolta, tramite l'oggetto eccezione. L'oggetto eccezione può essere considerato come un proxy per un oggetto error DAO.

1. Esaminare l'oggetto corrente [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) struttura `GetErrorInfo` restituisce il [m_pErrorInfo](#m_perrorinfo) (membro dati). I suoi membri forniscono informazioni sull'errore DAO.

1. Nel caso di un'origine dati ODBC, ripetere i passaggi 3 e 4 in base alle esigenze, per più oggetti di errore.

1. Se è stato costruito l'oggetto eccezione sull'heap, eliminarlo con il **eliminare** operatore al termine.

Per altre informazioni sulla gestione degli errori nelle classi DAO MFC, vedere l'articolo [alle eccezioni: Le eccezioni del database](../../mfc/exceptions-database-exceptions.md).

##  <a name="geterrorcount"></a>  CDaoException:: GetErrorCount

Chiamare questa funzione membro per recuperare il numero di oggetti errore DAO nella raccolta di errori del motore di database.

```
short GetErrorCount();
```

### <a name="return-value"></a>Valore restituito

Il numero di oggetti errore DAO nella raccolta di errori del motore di database.

### <a name="remarks"></a>Note

Queste informazioni sono utili per eseguire i cicli attraverso la raccolta di errori per recuperare tutti gli oggetti uno o più DAO errore nella raccolta. Per recuperare un oggetto di errore in base all'indice o al numero di errore DAO, chiamare il [GetErrorInfo](#geterrorinfo) funzione membro.

> [!NOTE]
>  In genere è presente un solo oggetto di errore nella raccolta di errori. Se si lavora con un'origine dati ODBC, tuttavia, potrebbe esserci più di uno.

##  <a name="geterrorinfo"></a>  CDaoException:: GetErrorInfo

Restituisce informazioni sull'errore relative a un oggetto di errore specifico nella raccolta di errori.

```
void GetErrorInfo(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
L'indice di informazioni sull'errore nella raccolta di errori del motore di database, per la ricerca in base all'indice.

### <a name="remarks"></a>Note

Chiamare questa funzione membro per ottenere i seguenti tipi di informazioni sull'eccezione:

- Codice di errore

- Source

- Descrizione

- File della Guida

- Contesto della Guida

`GetErrorInfo` Archivia le informazioni in dell'oggetto eccezione `m_pErrorInfo` (membro dati). Per una breve descrizione delle informazioni restituite, vedere [m_pErrorInfo](#m_perrorinfo). Se si intercetta un'eccezione di tipo `CDaoException` generate da MFC, la `m_pErrorInfo` membro è già specificato. Se si sceglie di chiamare direttamente DAO, è necessario chiamare l'oggetto dell'eccezione `GetErrorInfo` funzione membro personale per riempire `m_pErrorInfo`. Per una descrizione più dettagliata, vedere la [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) struttura.

Per informazioni sulle eccezioni di DAO ed esempio di codice, vedere l'articolo [alle eccezioni: Le eccezioni del database](../../mfc/exceptions-database-exceptions.md).

##  <a name="m_nafxdaoerror"></a>  CDaoException::m_nAfxDaoError

Contiene un codice di errore esteso di MFC.

### <a name="remarks"></a>Note

Questo codice viene fornito nei casi in cui è sbagliato un componente specifico delle classi DAO MFC.

I possibili valori sono:

- L'operazione più recente non ha restituito un MFC NO_AFX_DAO_ERROR errore esteso. Tuttavia, l'operazione potrebbe hanno prodotto altri errori da OLE, o DAO, è consigliabile controllare [m_pErrorInfo](#m_perrorinfo) ed eventualmente [m_scode](#m_scode).

- AFX_DAO_ERROR_ENGINE_INITIALIZATION MFC non è riuscito a inizializzare il motore di database Microsoft Jet. OLE potrebbe non essere riuscita a inizializzare o sarebbe stato possibile creare un'istanza dell'oggetto del motore di database DAO. Questi problemi in genere consigliabile un'installazione non corretta di DAO o OLE.

- AFX_DAO_ERROR_DFX_BIND un indirizzo utilizzato in una chiamata di funzione DAO campi di record (DFX) di exchange non esiste o non è valido (l'indirizzo non è stato usato per associare i dati). Sono stati passati un indirizzo non valido in una chiamata DFX o l'indirizzo potrebbe diventare non valido tra le operazioni di DFX.

- AFX_DAO_ERROR_OBJECT_NOT_OPEN si è tentato di aprire un recordset in base a un oggetto querydef o un oggetto tabledef che non era in stato aperto.

##  <a name="m_perrorinfo"></a>  CDaoException::m_pErrorInfo

Contiene un puntatore a un `CDaoErrorInfo` struttura che fornisce informazioni sull'oggetto errore DAO ultimo recuperati chiamando [GetErrorInfo](#geterrorinfo).

### <a name="remarks"></a>Note

Questo oggetto contiene le informazioni seguenti:

|Membro CDaoErrorInfo|Informazioni|Significato|
|--------------------------|-----------------|-------------|
|`m_lErrorCode`|Codice di errore|Il codice di errore DAO|
|`m_strSource`|Source|Il nome dell'oggetto o applicazione che ha generato l'errore|
|`m_strDescription`|Descrizione|Una stringa descrittiva associata all'errore|
|`m_strHelpFile`|File della Guida|Un percorso di un file della Guida di Windows in cui l'utente può ottenere informazioni sul problema|
|`m_lHelpContext`|Contesto della Guida|ID contesto per un argomento nel file della Guida in linea di DAO|

Per informazioni dettagliate sulle informazioni contenute nel `CDaoErrorInfo` oggetti, vedere la [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) struttura.

##  <a name="m_scode"></a>  CDaoException::m_scode

Contiene un valore di tipo `SCODE` che descrive l'errore.

### <a name="remarks"></a>Note

Questo è un codice OLE. Raramente è necessario utilizzare questo valore perché, in quasi tutti i casi, è disponibile anche in altro più specifiche informazioni sugli errori MFC o DAO `CDaoException` membri dati.

Per informazioni su SCODE, vedere l'argomento [Structure of OLE Error Codes](/windows/desktop/com/structure-of-com-error-codes) nel SDK di Windows. Il tipo di dati SCODE esegue il mapping al tipo di dati HRESULT.

## <a name="see-also"></a>Vedere anche

[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CException](../../mfc/reference/cexception-class.md)

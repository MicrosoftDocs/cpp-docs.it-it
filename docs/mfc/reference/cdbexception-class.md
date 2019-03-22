---
title: Classe CDBException
ms.date: 11/04/2016
f1_keywords:
- CDBException
- AFXDB/CDBException
- AFXDB/CDBException::m_nRetCode
- AFXDB/CDBException::m_strError
- AFXDB/CDBException::m_strStateNativeOrigin
helpviewer_keywords:
- CDBException [MFC], m_nRetCode
- CDBException [MFC], m_strError
- CDBException [MFC], m_strStateNativeOrigin
ms.assetid: eb9e1119-89f5-49a7-b9d4-b91cee1ccc82
ms.openlocfilehash: 755b89635eedd7808f900dc63cd3039845db1dd3
ms.sourcegitcommit: c1f646c8b72f330fa8cf5ddb0f8f261ba10d16f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2019
ms.locfileid: "58328532"
---
# <a name="cdbexception-class"></a>Classe CDBException

Rappresenta una condizione di eccezione generata da classi di database.

## <a name="syntax"></a>Sintassi

```
class CDBException : public CException
```

## <a name="members"></a>Membri

### <a name="public-data-members"></a>Membri dati pubblici

|nome|Descrizione|
|----------|-----------------|
|[CDBException::m_nRetCode](#m_nretcode)|Contiene un codice restituito Open Database Connectivity (ODBC), di tipo RETCODE.|
|[CDBException::m_strError](#m_strerror)|Contiene una stringa che descrive l'errore in termini di caratteri alfanumerici.|
|[CDBException::m_strStateNativeOrigin](#m_strstatenativeorigin)|Contiene una stringa che descrive l'errore in termini di codici di errore restituito da ODBC.|

## <a name="remarks"></a>Note

La classe include due membri dati pubblici, che è possibile usare per determinare la causa dell'eccezione o per visualizzare un messaggio di testo che descrive l'eccezione. `CDBException` gli oggetti vengono costruiti e generati dalle funzioni membro delle classi di database.

> [!NOTE]
>  Questa classe è una delle classi di Open Database Connectivity (ODBC) di MFC. Se si usa invece le classi di oggetti DAO (Data Access) più recente, usare [CDaoException](../../mfc/reference/cdaoexception-class.md) invece. Tutti i nomi delle classi DAO hanno "CDao" come prefisso. Per altre informazioni, vedere l'articolo [Panoramica: Programmazione di database](../../data/data-access-programming-mfc-atl.md).

Le eccezioni sono i casi di esecuzione anomala che coinvolgono le condizioni esterni al controllo del programma, ad esempio l'origine dati o errori dei / o di rete. Gli errori che si aspetterebbe di vedere durante il normale funzionamento dell'esecuzione del programma non sono in genere considerati eccezioni.

È possibile accedere a questi oggetti nell'ambito di una **CATCH** espressione. È anche possibile generare `CDBException` oggetti dal codice con il `AfxThrowDBException` funzione globale.

Per altre informazioni sulla gestione delle eccezioni in generali o sta `CDBException` oggetti, vedere gli articoli [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md) e [alle eccezioni: Le eccezioni del database](../../mfc/exceptions-database-exceptions.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

`CDBException`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

##  <a name="m_nretcode"></a>  CDBException::m_nRetCode

Contiene un codice di errore ODBC typu RETCODE restituito da una funzione di interfaccia API ODBC programmazione dell'applicazione.

### <a name="remarks"></a>Note

Questo tipo include i codici di SQL con prefisso definiti da ODBC e codici con prefisso AFX_SQL definiti dalle classi di database. Per un `CDBException`, questo membro conterrà uno dei valori seguenti:

- AFX_SQL_ERROR_API_CONFORMANCE il driver per un `CDatabase::OpenEx` o `CDatabase::Open` chiamata non corrisponde al livello di conformità API ODBC richiesto 1 (SQL_OAC_LEVEL1).

- AFX_SQL_ERROR_CONNECT_FAIL connessione all'origine dati non riuscita. È stato passato un valore NULL`CDatabase` puntatore al costruttore del recordset e il successivo tentativo di creare una connessione basata su `GetDefaultConnect` non è riuscita.

- AFX_SQL_ERROR_DATA_TRUNCATED sono richieste più dati di archiviazione per aver fornito. Per informazioni su come aumentare l'archiviazione dei dati forniti per `CString` oppure `CByteArray` tipi di dati, vedere la `nMaxLength` argomento per [RFX_Text](record-field-exchange-functions.md#rfx_text) e [RFX_Binary](record-field-exchange-functions.md#rfx_binary) sotto "macro e Globals."

- Chiamata A AFX_SQL_ERROR_DYNASET_NOT_SUPPORTED a `CRecordset::Open` dynaset richiesta non è riuscita. I dynaset non sono supportati dal driver.

- AFX_SQL_ERROR_EMPTY_COLUMN_LIST si è tentato di aprire una tabella (o è stato assegnato non è stato identificato come una chiamata di routine oppure **selezionare** istruzione), ma non sono presenti colonne identificate in campi di record (RFX) di exchange alle chiamate di funzione il `DoFieldExchange` eseguire l'override.

- Il tipo di un RFX AFX_SQL_ERROR_FIELD_SCHEMA_MISMATCH funzionare nel `DoFieldExchange` override non è compatibile con il tipo di dati di colonna nel set di record.

- AFX_SQL_ERROR_ILLEGAL_MODE è chiamato `CRecordset::Update` senza chiamare in precedenza `CRecordset::AddNew` o `CRecordset::Edit`.

- Non è stato possibile soddisfare AFX_SQL_ERROR_LOCK_MODE_NOT_SUPPORTED la richiesta di blocco di record per l'aggiornamento, perché il driver ODBC non supporta il blocco.

- AFX_SQL_ERROR_MULTIPLE_ROWS_AFFECTED è chiamato `CRecordset::Update` o `Delete` per una tabella senza chiave univoca e modificare più record.

- AFX_SQL_ERROR_NO_CURRENT_RECORD si è tentato di modificare o eliminare un record eliminato in precedenza. È necessario scorrere verso un nuovo record corrente dopo l'eliminazione.

- AFX_SQL_ERROR_NO_POSITIONED_UPDATES non è stato possibile soddisfare la richiesta per dynaset perché il driver ODBC non supporta gli aggiornamenti posizionati.

- AFX_SQL_ERROR_NO_ROWS_AFFECTED è chiamato `CRecordset::Update` o `Delete`, ma all'inizio dell'operazione non è stato possibile trovare il record.

- AFX_SQL_ERROR_ODBC_LOAD_FAILED un tentativo di caricare il file ODBC. DLL non è riuscita. Windows non è stato trovato o non è riuscito a caricare la DLL. Questo errore è irreversibile.

- Non è stato possibile soddisfare la richiesta per dynaset perché è necessario un driver ODBC 2 conforme a livello AFX_SQL_ERROR_ODBC_V2_REQUIRED.

- AFX_SQL_ERROR_RECORDSET_FORWARD_ONLY un tentativo di scorrimento non è riuscita perché l'origine dati non supporta lo scorrimento all'indietro.

- Chiamata A AFX_SQL_ERROR_SNAPSHOT_NOT_SUPPORTED a `CRecordset::Open` richiede uno snapshot non è riuscita. Gli snapshot non sono supportati dal driver. (Ciò può verificarsi solo quando la libreria di cursori ODBC ODBCCURS. DLL non è presenta).

- AFX_SQL_ERROR_SQL_CONFORMANCE il driver per un `CDatabase::OpenEx` o `CDatabase::Open` chiamata non è conforme al livello di conformità SQL ODBC richiesto "Minimo" (SQL_OSC_MINIMUM).

- Driver ODBC AFX_SQL_ERROR_SQL_NO_TOTAL è non è possibile specificare le dimensioni totali di un `CLongBinary` valore dei dati. Probabilmente l'operazione non riuscita perché non è stato possibile preallocato un blocco di memoria globale.

- AFX_SQL_ERROR_RECORDSET_READONLY si è tentato di aggiornare un recordset di sola lettura o l'origine dati è di sola lettura. Nessuna operazione di aggiornamento possono essere eseguita con il recordset o `CDatabase` oggetto è associato.

- SQL_ERROR Function non riuscita. Il messaggio di errore restituito dalla funzione ODBC `SQLError` viene archiviato nel `m_strError` (membro dati).

- SQL_INVALID_HANDLE Function non riuscita a causa di un handle di ambiente non valido, un handle di connessione o un handle di istruzione. Ciò indica un errore di programmazione. Nessuna informazione aggiuntiva è disponibile la funzione ODBC `SQLError`.

I codici di SQL con prefisso sono definiti da ODBC. I codici di prefisso "AFX" sono definiti in AFXDB. H, disponibili in MFC\Include.

##  <a name="m_strerror"></a>  CDBException::m_strError

Contiene una stringa che descrive l'errore che ha causato l'eccezione.

### <a name="remarks"></a>Note

La stringa viene descritto l'errore in termini di caratteri alfanumerici. Per altre informazioni ed esempi, vedere `m_strStateNativeOrigin`.

##  <a name="m_strstatenativeorigin"></a>  CDBException::m_strStateNativeOrigin

Contiene una stringa che descrive l'errore che ha causato l'eccezione.

### <a name="remarks"></a>Note

Il formato della stringa è il modulo "stato: % s, nativo: % ld, origine: % s", in cui i codici di formato, in ordine, vengono sostituiti dai valori che descrivono:

- Il valore SQLSTATE, una stringa con terminazione null che contiene un codice di errore di cinque caratteri restituiti nella *szSqlState* parametro della funzione ODBC `SQLError`. I valori SQLSTATE sono elencati nell'appendice a [codici di errore ODBC](/previous-versions/windows/desktop/ms714687(v=vs.85)), nella *riferimento per programmatori ODBC*. Esempio: "S0022".

- Il codice di errore nativo, specifico per l'origine dati, restituito nella *pfNativeError* parametro del `SQLError` (funzione). Esempio: 207.

- Il testo del messaggio di errore restituito nel *szErrorMsg* parametro del `SQLError` (funzione). Questo messaggio è costituito da diversi nomi tra parentesi quadre. Come un errore viene passato dalla relativa origine all'utente, ogni componente ODBC (origine dati, driver, gestione Driver) aggiunge il proprio nome. Queste informazioni consentono di individuare l'origine dell'errore. Esempio: [Microsoft] [Driver ODBC di SQL Server] [SQL Server]

Il framework interpreta la stringa di errore e inserisce i relativi componenti in `m_strStateNativeOrigin`; se `m_strStateNativeOrigin` contiene informazioni per più di un errore, gli errori sono separati da caratteri di nuova riga. Il framework inserisce il testo dell'errore alfanumerici in `m_strError`.

Per altre informazioni sui codici di usato per effettuare questa stringa, vedere la [SQLError](/previous-versions/windows/desktop/ms716312(v=vs.85)) funzionare nel *riferimento per programmatori ODBC*.

### <a name="example"></a>Esempio

  Da ODBC: "Stato: S0022, nativo: 207, origine:\[Microsoft]\[Driver ODBC di SQL Server]\[SQL Server] nome della colonna non valido 'ColName'"

In `m_strStateNativeOrigin`: "Stato: S0022, nativo: 207, origine:\[Microsoft]\[Driver ODBC SQL Server]\[SQL Server]"

In `m_strError`: "Nome colonna non valido 'ColName'"

## <a name="see-also"></a>Vedere anche

[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDatabase](../../mfc/reference/cdatabase-class.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)<br/>
[Classe CFieldExchange](../../mfc/reference/cfieldexchange-class.md)<br/>
[CRecordset::Update](../../mfc/reference/crecordset-class.md#update)<br/>
[CRecordset::Delete](../../mfc/reference/crecordset-class.md#delete)<br/>
[Classe CException](../../mfc/reference/cexception-class.md)

---
description: 'Altre informazioni su: classe CDBException'
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
ms.openlocfilehash: 8e337cc0f66a4a281de07ba3839895096e8021d0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97222125"
---
# <a name="cdbexception-class"></a>Classe CDBException

Rappresenta una condizione di eccezione generata da classi di database.

## <a name="syntax"></a>Sintassi

```
class CDBException : public CException
```

## <a name="members"></a>Members

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CDBException:: m_nRetCode](#m_nretcode)|Contiene un codice restituito Open Database Connectivity (ODBC), di tipo RETCODE.|
|[CDBException:: m_strError](#m_strerror)|Contiene una stringa che descrive l'errore in termini alfanumerici.|
|[CDBException:: m_strStateNativeOrigin](#m_strstatenativeorigin)|Contiene una stringa che descrive l'errore in termini di codici di errore restituiti da ODBC.|

## <a name="remarks"></a>Commenti

La classe include due membri dati pubblici che è possibile usare per determinare la cause dell'eccezione o per visualizzare un messaggio di testo che descrive l'eccezione. `CDBException` gli oggetti vengono costruiti e generati dalle funzioni membro delle classi di database.

> [!NOTE]
> Questa classe è una delle classi ODBC (Open Database Connectivity) di MFC. Se invece si utilizzano le classi DAO (Data Access Objects) più recenti, utilizzare [CDaoException](../../mfc/reference/cdaoexception-class.md) . Tutti i nomi di classe DAO hanno "CDao" come prefisso. Per ulteriori informazioni, vedere l'articolo [Cenni preliminari sulla programmazione di database](../../data/data-access-programming-mfc-atl.md).

Le eccezioni sono casi di esecuzione anomala che coinvolgono condizioni al di fuori del controllo del programma, ad esempio l'origine dati o gli errori di I/O di rete. Gli errori che potrebbero verificarsi nel normale corso dell'esecuzione del programma non sono in genere considerati eccezioni.

È possibile accedere a questi oggetti nell'ambito di un'espressione **catch** . È anche possibile generare `CDBException` oggetti dal proprio codice con la `AfxThrowDBException` funzione globale.

Per ulteriori informazioni sulla gestione delle eccezioni in generale o sugli `CDBException` oggetti, vedere gli articoli [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md) ed [eccezioni: eccezioni di database](../../mfc/exceptions-database-exceptions.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

`CDBException`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="cdbexceptionm_nretcode"></a><a name="m_nretcode"></a> CDBException:: m_nRetCode

Contiene un codice di errore ODBC di tipo RETCODE restituito da una funzione ODBC Application Programming Interface (API).

### <a name="remarks"></a>Commenti

Questo tipo include i codici con prefisso SQL definiti da ODBC e i codici con prefisso AFX_SQL definiti dalle classi di database. Per un oggetto `CDBException` , questo membro conterrà uno dei valori seguenti:

- AFX_SQL_ERROR_API_CONFORMANCE il driver per una `CDatabase::OpenEx` chiamata o non è `CDatabase::Open` conforme al livello di conformità 1 dell'API ODBC richiesto (SQL_OAC_LEVEL1).

- Impossibile connettersi all'origine dati AFX_SQL_ERROR_CONNECT_FAIL. È stato passato un `CDatabase` puntatore null al costruttore del recordset e il tentativo successivo di creare una connessione basata su `GetDefaultConnect` non è riuscito.

- AFX_SQL_ERROR_DATA_TRUNCATED sono stati richiesti più dati del previsto per l'archiviazione. Per informazioni sull'aumento dell'archiviazione dati fornita per `CString` i `CByteArray` tipi di dati o, vedere l' `nMaxLength` argomento relativo a [RFX_Text](record-field-exchange-functions.md#rfx_text) e [RFX_Binary](record-field-exchange-functions.md#rfx_binary) in "macro e Globals".

- AFX_SQL_ERROR_DYNASET_NOT_SUPPORTED una chiamata alla `CRecordset::Open` richiesta di un dynaset non riuscita. I dynaset non sono supportati dal driver.

- AFX_SQL_ERROR_EMPTY_COLUMN_LIST si è tentato di aprire una tabella (o non è stato possibile identificare come chiamata di routine o istruzione **Select** ) ma non è stata identificata alcuna colonna nelle chiamate di funzione RFX (record Field Exchange) nell' `DoFieldExchange` override.

- AFX_SQL_ERROR_FIELD_SCHEMA_MISMATCH il tipo di una funzione RFX nella `DoFieldExchange` sostituzione non è compatibile con il tipo di dati della colonna nel recordset.

- AFX_SQL_ERROR_ILLEGAL_MODE è stato chiamato `CRecordset::Update` senza chiamare in precedenza `CRecordset::AddNew` o `CRecordset::Edit` .

- AFX_SQL_ERROR_LOCK_MODE_NOT_SUPPORTED la richiesta di blocco dei record per l'aggiornamento non è stata soddisfatta perché il driver ODBC non supporta il blocco.

- AFX_SQL_ERROR_MULTIPLE_ROWS_AFFECTED è stato chiamato `CRecordset::Update` o `Delete` per una tabella senza chiave univoca e sono stati modificati più record.

- AFX_SQL_ERROR_NO_CURRENT_RECORD si è tentato di modificare o eliminare un record eliminato in precedenza. È necessario scorrere fino a un nuovo record corrente dopo un'eliminazione.

- AFX_SQL_ERROR_NO_POSITIONED_UPDATES non è stato possibile soddisfare la richiesta di un dynaset perché il driver ODBC non supporta gli aggiornamenti posizionati.

- AFX_SQL_ERROR_NO_ROWS_AFFECTED è `CRecordset::Update` stato chiamato o `Delete` , ma all'inizio dell'operazione il record non può più essere trovato.

- AFX_SQL_ERROR_ODBC_LOAD_FAILED un tentativo di caricamento del ODBC.DLL non riuscito. Impossibile trovare o caricare la DLL. Questo errore è irreversibile.

- AFX_SQL_ERROR_ODBC_V2_REQUIRED non è stato possibile soddisfare la richiesta di un dynaset perché è necessario un driver ODBC conforme a livello 2.

- AFX_SQL_ERROR_RECORDSET_FORWARD_ONLY un tentativo di scorrimento non è riuscito perché l'origine dati non supporta lo scorrimento a ritroso.

- AFX_SQL_ERROR_SNAPSHOT_NOT_SUPPORTED una chiamata a la `CRecordset::Open` richiesta di uno snapshot non è riuscita. Gli snapshot non sono supportati dal driver. Questo problema si verifica solo quando la libreria di cursori ODBC ODBCCURS.DLL non è presente.

- AFX_SQL_ERROR_SQL_CONFORMANCE il driver per una `CDatabase::OpenEx` chiamata o non è `CDatabase::Open` conforme al livello di conformità SQL ODBC obbligatorio "Minimum" (SQL_OSC_MINIMUM).

- AFX_SQL_ERROR_SQL_NO_TOTAL il driver ODBC non è stato in grado di specificare la dimensione totale di un `CLongBinary` valore di dati. L'operazione probabilmente non è riuscita perché non è stato possibile preallocare un blocco di memoria globale.

- AFX_SQL_ERROR_RECORDSET_READONLY si è tentato di aggiornare un recordset di sola lettura oppure l'origine dati è di sola lettura. Non è possibile eseguire operazioni di aggiornamento con il recordset o l' `CDatabase` oggetto a cui è associato.

- SQL_ERROR funzione non riuscita. Il messaggio di errore restituito dalla funzione ODBC `SQLError` viene archiviato nel `m_strError` membro dati.

- SQL_INVALID_HANDLE funzione non riuscita a causa di un handle di ambiente, un handle di connessione o un handle di istruzione non valido. Ciò indica un errore di programmazione. Non sono disponibili informazioni aggiuntive dalla funzione ODBC `SQLError` .

I codici con prefisso SQL sono definiti da ODBC. I codici con prefisso AFX sono definiti in AFXDB. H, disponibile in MFC\INCLUDE.

## <a name="cdbexceptionm_strerror"></a><a name="m_strerror"></a> CDBException:: m_strError

Contiene una stringa che descrive l'errore che ha causato l'eccezione.

### <a name="remarks"></a>Commenti

La stringa descrive l'errore in termini alfanumerici. Per informazioni più dettagliate e un esempio, vedere `m_strStateNativeOrigin` .

## <a name="cdbexceptionm_strstatenativeorigin"></a><a name="m_strstatenativeorigin"></a> CDBException:: m_strStateNativeOrigin

Contiene una stringa che descrive l'errore che ha causato l'eccezione.

### <a name="remarks"></a>Commenti

Il formato della stringa è "stato:% s, nativo:% LD, origine:% s", in cui i codici di formato vengono sostituiti da valori che descrivono:

- SQLSTATE, una stringa a terminazione null che contiene un codice di errore di cinque caratteri restituito nel parametro *szSqlState* della funzione ODBC `SQLError` . I valori SQLSTATE sono elencati nell'Appendice A, [codici di errore ODBC](/sql/odbc/reference/appendixes/appendix-a-odbc-error-codes), in *ODBC Programmer ' s Reference*. Esempio: "S0022".

- Codice di errore nativo, specifico dell'origine dati, restituito nel parametro *pfNativeError* della `SQLError` funzione. Esempio: 207.

- Testo del messaggio di errore restituito nel parametro *szErrorMsg* della `SQLError` funzione. Questo messaggio è costituito da diversi nomi racchiusi tra parentesi. Quando viene passato un errore dall'origine all'utente, ogni componente ODBC (origine dati, driver, gestione driver) aggiunge il proprio nome. Queste informazioni consentono di individuare l'origine dell'errore. Esempio: [Microsoft] [driver ODBC SQL Server] [SQL Server]

Il Framework interpreta la stringa di errore e inserisce i componenti in `m_strStateNativeOrigin` . Se `m_strStateNativeOrigin` contiene informazioni per più errori, gli errori sono separati da una nuova riga. Il framework inserisce il testo di errore alfanumerico in `m_strError` .

Per ulteriori informazioni sui codici utilizzati per creare la stringa, vedere la funzione [SQLError](/sql/odbc/reference/syntax/sqlerror-function) in *ODBC Programmer ' s Reference*.

### <a name="example"></a>Esempio

Da ODBC: "state: S0022, Native: 207, Origin: \[ Microsoft] \[ ODBC SQL Server Driver] \[ SQL Server] nome di colonna non valido ' colname '"

In `m_strStateNativeOrigin` : "state: S0022, Native: 207, Origin: \[ Microsoft] \[ ODBC SQL Server Driver] \[ SQL Server]"

In `m_strError` : "il nome di colonna ' colname ' non è valido

## <a name="see-also"></a>Vedi anche

[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CDatabase (classe)](../../mfc/reference/cdatabase-class.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)<br/>
[Classe CFieldExchange](../../mfc/reference/cfieldexchange-class.md)<br/>
[CRecordset:: Update](../../mfc/reference/crecordset-class.md#update)<br/>
[CRecordset::D Elimina](../../mfc/reference/crecordset-class.md#delete)<br/>
[Classe CException](../../mfc/reference/cexception-class.md)

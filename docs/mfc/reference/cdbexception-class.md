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
ms.openlocfilehash: 1ab7daeb3af55c92985c951c632b1d4050681474
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321899"
---
# <a name="cdbexception-class"></a>Classe CDBException

Rappresenta una condizione di eccezione generata da classi di database.

## <a name="syntax"></a>Sintassi

```
class CDBException : public CException
```

## <a name="members"></a>Membri

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDBException::m_nRetCode](#m_nretcode)|Contiene un codice restituito ODBC (Open Database Connectivity), di tipo RETCODE.|
|[CDBException::m_strError](#m_strerror)|Contiene una stringa che descrive l'errore in termini alfanumerici.|
|[CDBException::m_strStateNativeOrigin](#m_strstatenativeorigin)|Contiene una stringa che descrive l'errore in termini di codici di errore restituiti da ODBC.|

## <a name="remarks"></a>Osservazioni

La classe include due membri dati pubblici che è possibile utilizzare per determinare la causa dell'eccezione o per visualizzare un messaggio di testo che descrive l'eccezione. `CDBException`gli oggetti vengono costruiti e generati dalle funzioni membro delle classi di database.

> [!NOTE]
> Questa classe è una delle classi ODBC (Open Database Connectivity) di MFC. Se invece si utilizzano le classi DAO (Data Access Objects) più recenti, utilizzare [invece CDaoException.](../../mfc/reference/cdaoexception-class.md) Tutti i nomi di classe DAO hanno "CDao" come prefisso. Per ulteriori informazioni, vedere l'articolo [Panoramica: Programmazione di database](../../data/data-access-programming-mfc-atl.md).

Le eccezioni sono casi di esecuzione anomala che coinvolgono condizioni esterne al controllo del programma, ad esempio errori di I/O di rete o origine dati. Gli errori che ci si potrebbe aspettare di vedere nel normale corso di esecuzione del programma non sono in genere considerati eccezioni.

È possibile accedere a questi oggetti nell'ambito di un'espressione **CATCH.** È anche `CDBException` possibile generare oggetti `AfxThrowDBException` dal proprio codice con la funzione globale.

Per ulteriori informazioni sulla gestione delle `CDBException` eccezioni in generale o sugli oggetti, vedere gli articoli [Gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md) ed [Eccezioni: eccezioni di database](../../mfc/exceptions-database-exceptions.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CEccezione](../../mfc/reference/cexception-class.md)

`CDBException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="cdbexceptionm_nretcode"></a><a name="m_nretcode"></a>CDBException::m_nRetCode

Contiene un codice di errore ODBC di tipo RETCODE restituito da una funzione API (Application Programming Interface) ODBC.

### <a name="remarks"></a>Osservazioni

Questo tipo include codici con prefisso SQL definiti da ODBC e codici con prefisso AFX_SQL definiti dalle classi di database. Per `CDBException`un oggetto , questo membro conterrà uno dei seguenti valori:

- AFX_SQL_ERROR_API_CONFORMANCE Il driver `CDatabase::OpenEx` `CDatabase::Open` per un o una chiamata non è conforme al livello di conformità 1 (SQL_OAC_LEVEL1) dell'API ODBC richiesto (SQL_OAC_LEVEL1).

- AFX_SQL_ERROR_CONNECT_FAIL connessione all'origine dati non riuscita. È stato`CDatabase` passato un puntatore NULL al costruttore del `GetDefaultConnect` recordset e il tentativo successivo di creare una connessione basata su non riuscito.

- AFX_SQL_ERROR_DATA_TRUNCATED Hai richiesto più dati di quanti ti sia stato fornito di spazio di archiviazione. Per informazioni sull'aumento `CString` dell'archiviazione dei `CByteArray` `nMaxLength` dati o dei tipi di dati forniti, vedere l'argomento per [RFX_Text](record-field-exchange-functions.md#rfx_text) e [RFX_Binary](record-field-exchange-functions.md#rfx_binary) in "Macro e globali".

- AFX_SQL_ERROR_DYNASET_NOT_SUPPORTED Una `CRecordset::Open` chiamata alla richiesta di un dynaset non è riuscita. I dynaset non sono supportati dal driver.

- AFX_SQL_ERROR_EMPTY_COLUMN_LIST Si è tentato di aprire una tabella (o ciò che è stato fornito non è stato possibile essere identificato `DoFieldExchange` come una chiamata di procedura o un'istruzione **SELECT)** ma non sono presenti colonne identificate nelle chiamate di funzione RFX (Record Field Exchange) nell'override.

- AFX_SQL_ERROR_FIELD_SCHEMA_MISMATCH Il tipo di una `DoFieldExchange` funzione RFX nella sostituzione non è compatibile con il tipo di dati della colonna nel recordset.

- AFX_SQL_ERROR_ILLEGAL_MODE È `CRecordset::Update` stato `CRecordset::AddNew` chiamato `CRecordset::Edit`senza chiamare in precedenza o .

- AFX_SQL_ERROR_LOCK_MODE_NOT_SUPPORTED Impossibile soddisfare la richiesta di blocco dei record per l'aggiornamento perché il driver ODBC non supporta il blocco.

- AFX_SQL_ERROR_MULTIPLE_ROWS_AFFECTED È `CRecordset::Update` `Delete` stato chiamato o per una tabella senza chiave univoca e sono stati modificati più record.

- AFX_SQL_ERROR_NO_CURRENT_RECORD Si è tentato di modificare o eliminare un record eliminato in precedenza. È necessario scorrere fino a un nuovo record corrente dopo un'eliminazione.

- AFX_SQL_ERROR_NO_POSITIONED_UPDATES Impossibile soddisfare la richiesta di un dynaset perché il driver ODBC non supporta gli aggiornamenti posizionati.

- AFX_SQL_ERROR_NO_ROWS_AFFECTED È `CRecordset::Update` `Delete`stato chiamato o , ma all'inizio dell'operazione il record non è più stato trovato.

- AFX_SQL_ERROR_ODBC_LOAD_FAILED Un tentativo di caricare il ODBC. DLL non riuscita; Impossibile trovare o caricare questa DLL. Questo errore è irreversibile.

- AFX_SQL_ERROR_ODBC_V2_REQUIRED Impossibile soddisfare la richiesta di un dynaset perché è necessario un driver ODBC conforme al livello 2.

- AFX_SQL_ERROR_RECORDSET_FORWARD_ONLY Un tentativo di scorrimento non è riuscito perché l'origine dati non supporta lo scorrimento all'indietro.

- AFX_SQL_ERROR_SNAPSHOT_NOT_SUPPORTED Una `CRecordset::Open` chiamata alla richiesta di uno snapshot non è riuscita. Le istantanee non sono supportate dal driver. (Ciò deve verificarsi solo quando la libreria di cursori ODBC ODBCCURS. DLL non è presente.)

- AFX_SQL_ERROR_SQL_CONFORMANCE il driver `CDatabase::OpenEx` `CDatabase::Open` per una chiamata o non è conforme al livello di conformità ODBC SQL richiesto "Minimum" (SQL_OSC_MINIMUM).

- AFX_SQL_ERROR_SQL_NO_TOTAL il driver ODBC non è stato `CLongBinary` in grado di specificare la dimensione totale di un valore di dati. Probabilmente l'operazione non è riuscita perché non è stato possibile preallocare un blocco di memoria globale.

- AFX_SQL_ERROR_RECORDSET_READONLY Si è tentato di aggiornare un recordset di sola lettura oppure l'origine dati è di sola lettura. Non è possibile eseguire alcuna `CDatabase` operazione di aggiornamento con il recordset o l'oggetto a cui è associato.

- Funzione SQL_ERROR non riuscita. Il messaggio di errore restituito `SQLError` dalla funzione `m_strError` ODBC viene archiviato nel membro dati.

- SQL_INVALID_HANDLE funzione non riuscita a causa di un handle di ambiente non valido, handle di connessione o handle di istruzione. Ciò indica un errore di programmazione. Nessuna informazione aggiuntiva `SQLError`disponibile dalla funzione ODBC .

I codici con prefisso SQL sono definiti da ODBC. I codici con prefisso AFX sono definiti in AFXDB. H, che si trova in MFC-INCLUDE.

## <a name="cdbexceptionm_strerror"></a><a name="m_strerror"></a>CDBException::m_strError

Contiene una stringa che descrive l'errore che ha causato l'eccezione.

### <a name="remarks"></a>Osservazioni

La stringa descrive l'errore in termini alfanumerici. Per informazioni più dettagliate e `m_strStateNativeOrigin`un esempio, vedere .

## <a name="cdbexceptionm_strstatenativeorigin"></a><a name="m_strstatenativeorigin"></a>CDBException::m_strStateNativeOrigin

Contiene una stringa che descrive l'errore che ha causato l'eccezione.

### <a name="remarks"></a>Osservazioni

La stringa ha il formato "State:%s,Native:%ld,Origin:%s", in cui i codici di formato, nell'ordine, vengono sostituiti da valori che descrivono:

- SQLSTATE, una stringa con terminazione null contenente un codice di errore di cinque caratteri `SQLError`restituito nel parametro *szSqlState* della funzione ODBC. I valori SQLSTATE sono elencati nell'Appendice A, Codici di [errore ODBC](/sql/odbc/reference/appendixes/appendix-a-odbc-error-codes), in *ODBC Programmer's Reference*. Esempio: "S0022".

- Il codice di errore nativo, specifico dell'origine dati, restituito `SQLError` nel parametro *pfNativeError* della funzione. Esempio: 207.

- Testo del messaggio di errore restituito nel parametro `SQLError` *szErrorMsg* della funzione. Questo messaggio è costituito da diversi nomi tra parentesi quadre. Quando un errore viene passato dall'origine all'utente, ogni componente ODBC (origine dati, driver, Gestione Driver) aggiunge il proprio nome. Queste informazioni consentono di individuare l'origine dell'errore. Esempio: [Microsoft][Driver ODBC di SQL Server][SQL Server]

Il framework interpreta la stringa di `m_strStateNativeOrigin`errore e inserisce i relativi componenti in ; se `m_strStateNativeOrigin` contiene informazioni per più di un errore, gli errori sono separati da newline. Il framework inserisce il `m_strError`testo dell'errore alfanumerico in .

Per ulteriori informazioni sui codici utilizzati per creare questa stringa, vedere la funzione [SQLError](/sql/odbc/reference/syntax/sqlerror-function) in *ODBC Programmer's Reference*.

### <a name="example"></a>Esempio

Da ODBC:\["Stato:S0022,Native:207,Origine:\[Microsoft] Driver\[ODBC SQL Server] SQL Server] Nome di colonna non valido 'ColName'"

In `m_strStateNativeOrigin`:\["Stato:S0022,Native:207,Origine:\[Microsoft] ODBC\[Driver SQL Server] SQL Server]"

In `m_strError`: "Nome di colonna non valido 'ColName'"

## <a name="see-also"></a>Vedere anche

[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDatabase](../../mfc/reference/cdatabase-class.md)<br/>
[CRecordset (classe)](../../mfc/reference/crecordset-class.md)<br/>
[Classe CFieldExchange](../../mfc/reference/cfieldexchange-class.md)<br/>
[CRecordset::Aggiornamento](../../mfc/reference/crecordset-class.md#update)<br/>
[CRecordset::Delete](../../mfc/reference/crecordset-class.md#delete)<br/>
[Classe CException](../../mfc/reference/cexception-class.md)

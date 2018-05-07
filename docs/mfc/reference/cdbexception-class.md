---
title: Classe CDBException | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDBException
- AFXDB/CDBException
- AFXDB/CDBException::m_nRetCode
- AFXDB/CDBException::m_strError
- AFXDB/CDBException::m_strStateNativeOrigin
dev_langs:
- C++
helpviewer_keywords:
- CDBException [MFC], m_nRetCode
- CDBException [MFC], m_strError
- CDBException [MFC], m_strStateNativeOrigin
ms.assetid: eb9e1119-89f5-49a7-b9d4-b91cee1ccc82
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 824ac88326042eb55ecb9667c39331d1ab5464e7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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
|[CDBException::m_nRetCode](#m_nretcode)|Contiene un codice restituito Open Database Connectivity (ODBC), di tipo **RETCODE**.|  
|[CDBException::m_strError](#m_strerror)|Contiene una stringa che descrive l'errore in termini di caratteri alfanumerici.|  
|[CDBException::m_strStateNativeOrigin](#m_strstatenativeorigin)|Contiene una stringa che descrive l'errore in termini di codici di errore restituito da ODBC.|  
  
## <a name="remarks"></a>Note  
 La classe include due membri dati pubblici, che è possibile utilizzare per determinare la causa dell'eccezione o per visualizzare un messaggio di testo che descrive l'eccezione. `CDBException` gli oggetti vengono costruiti e generati dalle funzioni membro delle classi di database.  
  
> [!NOTE]
>  Questa classe è una delle classi MFC Open Database Connectivity (ODBC). Se si utilizza invece le classi di oggetti DAO (Data Access) più recenti, utilizzare [CDaoException](../../mfc/reference/cdaoexception-class.md) invece. Tutti i nomi delle classi DAO sono "CDao" come prefisso. Per ulteriori informazioni, vedere l'articolo [Panoramica: programmazione di Database](../../data/data-access-programming-mfc-atl.md).  
  
 Le eccezioni sono casi di esecuzione anomala che includono condizioni esterne al controllo del programma, ad esempio l'origine dati o errori dei / o di rete. Gli errori che si prevede di vedere durante il normale funzionamento dell'esecuzione del programma non sono in genere considerati eccezioni.  
  
 È possibile accedere a questi oggetti all'interno dell'ambito di un **CATCH** espressione. È anche possibile generare `CDBException` oggetti dal codice con il `AfxThrowDBException` funzione globale.  
  
 Per ulteriori informazioni sulla gestione delle eccezioni in generale o sulle `CDBException` degli oggetti, vedere gli articoli [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md) e [eccezioni: eccezioni di Database](../../mfc/exceptions-database-exceptions.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CDBException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  
  
##  <a name="m_nretcode"></a>  CDBException::m_nRetCode  
 Contiene un codice di errore di tipo ODBC **RETCODE** restituito da un'applicazione ODBC funzione (API) di interfaccia di programmazione.  
  
### <a name="remarks"></a>Note  
 Questo tipo include i codici SQL con prefisso definiti da ODBC e codici preceduto AFX_SQL definiti dalle classi di database. Per un `CDBException`, questo membro conterrà uno dei valori seguenti:  
  
- **AFX_SQL_ERROR_API_CONFORMANCE** il driver per un `CDatabase::OpenEx` oppure `CDatabase::Open` chiamata non è conforme a livello di conformità di API ODBC richiesto 1 ( **SQL_OAC_LEVEL1**).  
  
- **AFX_SQL_ERROR_CONNECT_FAIL** connessione all'origine dati non è riuscita. È passato un **NULL** `CDatabase` puntatore al costruttore del recordset e il successivo tentativo di creare una connessione in base a `GetDefaultConnect` non riuscita.  
  
- **AFX_SQL_ERROR_DATA_TRUNCATED** richiesto più dati di archiviazione per aver fornito. Per informazioni su come aumentare l'archiviazione di dati specificato per `CString` o `CByteArray` tipi di dati, vedere il `nMaxLength` argomento per [RFX_Text](record-field-exchange-functions.md#rfx_text) e [RFX_Binary](record-field-exchange-functions.md#rfx_binary) in "macro e Globals."  
  
- **AFX_SQL_ERROR_DYNASET_NOT_SUPPORTED** una chiamata a `CRecordset::Open` che richiede un dynaset non è riuscita. I dynaset non sono supportati dal driver.  
  
- **AFX_SQL_ERROR_EMPTY_COLUMN_LIST** si è tentato di aprire una tabella (o è stato assegnato non può essere identificato come una chiamata di routine o **selezionare** istruzione), ma non sono presenti colonne identificate in campi di record (RFX) funzione chiama nel `DoFieldExchange` eseguire l'override.  
  
- **AFX_SQL_ERROR_FIELD_SCHEMA_MISMATCH** il tipo di una funzione RFX nel `DoFieldExchange` override non è compatibile con il tipo di dati di colonna del recordset.  
  
- **AFX_SQL_ERROR_ILLEGAL_MODE** è stata chiamata `CRecordset::Update` senza precedentemente chiamato `CRecordset::AddNew` o `CRecordset::Edit`.  
  
- **AFX_SQL_ERROR_LOCK_MODE_NOT_SUPPORTED** Impossibile soddisfare la richiesta di blocco di record per l'aggiornamento perché il driver ODBC non supporta il blocco.  
  
- **AFX_SQL_ERROR_MULTIPLE_ROWS_AFFECTED** è stata chiamata `CRecordset::Update` oppure **eliminare** per una tabella senza chiave univoca e modificare più record.  
  
- **AFX_SQL_ERROR_NO_CURRENT_RECORD** si è tentato di modificare o eliminare un record eliminato in precedenza. È necessario scorrere verso un nuovo record corrente dopo l'eliminazione.  
  
- **AFX_SQL_ERROR_NO_POSITIONED_UPDATES** la richiesta per dynaset potrebbe non verranno soddisfatte perché il driver ODBC non supporta gli aggiornamenti posizionati.  
  
- **AFX_SQL_ERROR_NO_ROWS_AFFECTED** è stata chiamata `CRecordset::Update` oppure **eliminare**, ma quando è iniziata l'operazione non è stato possibile trovare il record.  
  
- **AFX_SQL_ERROR_ODBC_LOAD_FAILED** un tentativo di caricare ODBC. DLL non è riuscita. Windows non è stato trovato o non è stato possibile caricare la DLL. Questo errore è irreversibile.  
  
- **AFX_SQL_ERROR_ODBC_V2_REQUIRED** Impossibile soddisfare la richiesta per dynaset perché è necessario un driver ODBC conformi a 2 livelli.  
  
- **AFX_SQL_ERROR_RECORDSET_FORWARD_ONLY** un tentativo di scorrimento non è riuscita perché l'origine dati non supporta lo scorrimento all'indietro.  
  
- **AFX_SQL_ERROR_SNAPSHOT_NOT_SUPPORTED** una chiamata a `CRecordset::Open` richiesta di uno snapshot non è riuscita. Gli snapshot non sono supportati dal driver. (Questo deve verificarsi solo quando la libreria di cursori ODBC ODBCCURS. DLL non è presente).  
  
- **AFX_SQL_ERROR_SQL_CONFORMANCE** il driver per un `CDatabase::OpenEx` oppure `CDatabase::Open` chiamata non è conforme al livello di conformità SQL ODBC richiesto "Minimo" ( **SQL_OSC_MINIMUM**).  
  
- **AFX_SQL_ERROR_SQL_NO_TOTAL** driver ODBC di stato non è possibile specificare le dimensioni totali di un `CLongBinary` valore dei dati. Probabilmente l'operazione non riuscita perché non è stato possibile preallocato un blocco di memoria globale.  
  
- **AFX_SQL_ERROR_RECORDSET_READONLY** si è tentato di aggiornare un recordset di sola lettura o l'origine dati è di sola lettura. Nessuna operazione di aggiornamento possono essere eseguita con il recordset o `CDatabase` oggetto è associato.  
  
- **SQL_ERROR** funzione non riuscita. Il messaggio di errore restituito dalla funzione ODBC **SQLError** viene archiviato nel **m_strError** (membro dati).  
  
- **SQL_INVALID_HANDLE** funzione non riuscita a causa di un handle di ambiente non valido, un handle di connessione o un handle di istruzione. Ciò indica un errore di programmazione. Nessuna informazione aggiuntiva è disponibile la funzione ODBC **SQLError**.  
  
 I codici di con prefisso SQL sono definiti da ODBC. I codici di prefisso "AFX" sono definiti in AFXDB. H, trovato in MFC\Include.  
  
##  <a name="m_strerror"></a>  CDBException::m_strError  
 Contiene una stringa che descrive l'errore che ha causato l'eccezione.  
  
### <a name="remarks"></a>Note  
 La stringa viene descritto l'errore in termini di caratteri alfanumerici. Per ulteriori informazioni ed esempi, vedere **m_strStateNativeOrigin**.  
  
##  <a name="m_strstatenativeorigin"></a>  CDBException::m_strStateNativeOrigin  
 Contiene una stringa che descrive l'errore che ha causato l'eccezione.  
  
### <a name="remarks"></a>Note  
 La stringa è di formato "stato: % s, nativo: % ld, origine: % s", in cui i codici di formato, in ordine, vengono sostituiti da valori che descrivono:  
  
-   Il **SQLSTATE**, contenente un codice di errore di cinque caratteri restituito in una stringa con terminazione null di *szSqlState* parametro della funzione ODBC **SQLError**. **SQLSTATE** i valori sono elencati nell'appendice A, [codici di errore ODBC](https://msdn.microsoft.com/library/ms714687.aspx)nella *riferimento per programmatori ODBC*. Esempio: "S0022".  
  
-   Il codice di errore nativo, specifico dell'origine dati, restituito nel *pfNativeError* parametro del **SQLError** (funzione). Esempio: 207.  
  
-   Il testo del messaggio di errore restituito nel *szErrorMsg* parametro del **SQLError** (funzione). Questo messaggio è costituito da diversi nomi tra parentesi. Come un errore viene passato dall'origine all'utente, ogni componente ODBC (origine dati, driver, Driver Manager) aggiunge il proprio nome. Queste informazioni consentono di individuare l'origine dell'errore. Esempio: [Microsoft] [Driver ODBC SQL Server] [SQL Server]  
  
 Il framework interpreta la stringa di errore e inserisce i relativi componenti in **m_strStateNativeOrigin**; se **m_strStateNativeOrigin** contiene informazioni per più di un errore, gli errori sono separati da caratteri di nuova riga. Il framework inserisce il testo dell'errore alfanumerico in **m_strError**.  
  
 Per ulteriori informazioni sui codici di utilizzati per creare questa stringa, vedere il [SQLError](https://msdn.microsoft.com/library/ms716312.aspx) funzionare nel *riferimento per programmatori ODBC*.  
  
### <a name="example"></a>Esempio  
  Da ODBC: "Stato: S0022, nativo: 207, origine: [Microsoft] [Driver ODBC SQL Server] il nome di colonna non valido [SQL Server] 'ColName'"  
  
 In **m_strStateNativeOrigin**: "stato: S0022, nativo: 207, origine: [Microsoft] [Driver ODBC SQL Server] [SQL Server]"  
  
 In **m_strError**: "nome di colonna non valido 'ColName'"  
  
## <a name="see-also"></a>Vedere anche  
 [CException (classe)](../../mfc/reference/cexception-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDatabase (classe)](../../mfc/reference/cdatabase-class.md)   
 [Classe CRecordset](../../mfc/reference/crecordset-class.md)   
 [Classe CFieldExchange](../../mfc/reference/cfieldexchange-class.md)   
 [CRecordset:: Update](../../mfc/reference/crecordset-class.md#update)   
 [CRecordset::Delete](../../mfc/reference/crecordset-class.md#delete)   
 [Classe CException](../../mfc/reference/cexception-class.md)

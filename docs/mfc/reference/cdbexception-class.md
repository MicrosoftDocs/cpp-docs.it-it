---
title: Classe CDBException | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDBException
dev_langs:
- C++
helpviewer_keywords:
- CDBException class
- exceptions [C++], database
- database exceptions [C++]
- ODBC classes [C++], exceptions
- errors [C++], database
ms.assetid: eb9e1119-89f5-49a7-b9d4-b91cee1ccc82
caps.latest.revision: 23
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: fc3bf7be273bf509dd1ee79fb42e69050070e830
ms.lasthandoff: 02/24/2017

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
 La classe include due membri dati pubblici, che è possibile utilizzare per determinare la causa dell'eccezione o per visualizzare un messaggio di testo che descrive l'eccezione. `CDBException`gli oggetti vengono costruiti e generati dalle funzioni membro delle classi di database.  
  
> [!NOTE]
>  Questa classe è una delle classi MFC Open Database Connectivity (ODBC). Se si utilizza invece le classi di oggetti DAO (Data Access) più recenti, utilizzare [CDaoException](../../mfc/reference/cdaoexception-class.md) invece. Tutti i nomi delle classi DAO sono "CDao" come prefisso. Per ulteriori informazioni, vedere l'articolo [Panoramica: programmazione di Database](../../data/data-access-programming-mfc-atl.md).  
  
 Le eccezioni sono casi di esecuzione anomala relative condizioni esterne al controllo del programma, ad esempio l'origine dati o di errori dei / o di rete. Gli errori che si aspetterebbe di vedere durante il normale funzionamento dell'esecuzione del programma non sono in genere considerati eccezioni.  
  
 È possibile accedere a questi oggetti nell'ambito di un **CATCH** espressione. È anche possibile generare `CDBException` oggetti dal codice con il `AfxThrowDBException` funzione globale.  
  
 Per ulteriori informazioni sulla gestione delle eccezioni in generale o sta `CDBException` oggetti, vedere gli articoli [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md) e [eccezioni: eccezioni di Database](../../mfc/exceptions-database-exceptions.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CDBException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  
  
##  <a name="a-namemnretcodea--cdbexceptionmnretcode"></a><a name="m_nretcode"></a>CDBException::m_nRetCode  
 Contiene un codice di errore ODBC di tipo **RETCODE** restituito da un'applicazione ODBC funzione interfaccia API di programmazione.  
  
### <a name="remarks"></a>Note  
 Questo tipo rientrano prefisso SQL codici definiti da ODBC e con prefisso AFX_SQL definiti dalle classi di database. Per un `CDBException`, questo membro conterrà uno dei valori seguenti:  
  
- **AFX_SQL_ERROR_API_CONFORMANCE** il driver per un `CDatabase::OpenEx` o `CDatabase::Open` chiamata non è conforme al livello di conformità di API ODBC richiesto 1 ( **SQL_OAC_LEVEL1**).  
  
- **AFX_SQL_ERROR_CONNECT_FAIL** Impossibile stabilire la connessione all'origine dati. È passato un **NULL** `CDatabase` puntatore al costruttore del recordset e il successivo tentativo di creare una connessione in base a `GetDefaultConnect` non riuscita.  
  
- **AFX_SQL_ERROR_DATA_TRUNCATED** richiesto più dati di archiviazione per aver fornito. Per informazioni su come aumentare l'archiviazione di dati forniti per `CString` o `CByteArray` tipi di dati, vedere il `nMaxLength` argomento per [RFX_Text](http://msdn.microsoft.com/library/de3c7581-d26c-40cb-81f3-c492ef4809f6) e [RFX_Binary](http://msdn.microsoft.com/library/908ff945-3ad0-43a1-9932-cdcdc8b14915) in "Macro e funzioni globali".  
  
- **AFX_SQL_ERROR_DYNASET_NOT_SUPPORTED** una chiamata a `CRecordset::Open` che richiede un dynaset non riuscita. I dynaset non sono supportati dal driver.  
  
- **AFX_SQL_ERROR_EMPTY_COLUMN_LIST** si è tentato di aprire una tabella (o è stato assegnato non può essere identificato come una chiamata di procedura o **selezionare** istruzione), ma non sono presenti colonne identificate in campi di record (RFX) exchange alle chiamate di funzione di `DoFieldExchange` eseguire l'override.  
  
- **AFX_SQL_ERROR_FIELD_SCHEMA_MISMATCH** il tipo di una funzione RFX nel `DoFieldExchange` sostituzione non è compatibile con il tipo di dati di colonna del recordset.  
  
- **AFX_SQL_ERROR_ILLEGAL_MODE** è stato chiamato `CRecordset::Update` senza chiamare in precedenza `CRecordset::AddNew` o `CRecordset::Edit`.  
  
- **AFX_SQL_ERROR_LOCK_MODE_NOT_SUPPORTED** Impossibile soddisfare la richiesta di blocco di record per l'aggiornamento perché il driver ODBC non supporta il blocco.  
  
- **AFX_SQL_ERROR_MULTIPLE_ROWS_AFFECTED** è stato chiamato `CRecordset::Update` o **eliminare** per una tabella senza chiave univoca e modificare più record.  
  
- **AFX_SQL_ERROR_NO_CURRENT_RECORD** si è tentato di modificare o eliminare un record eliminato in precedenza. È necessario scorrere verso un nuovo record corrente dopo l'eliminazione.  
  
- **AFX_SQL_ERROR_NO_POSITIONED_UPDATES** la richiesta per dynaset Impossibile soddisfare perché il driver ODBC non supporta gli aggiornamenti posizionati.  
  
- **AFX_SQL_ERROR_NO_ROWS_AFFECTED** è stato chiamato `CRecordset::Update` o **eliminare**, ma all'inizio dell'operazione non è stato possibile trovare il record.  
  
- **AFX_SQL_ERROR_ODBC_LOAD_FAILED** tentativo di caricare ODBC. DLL non è riuscita. Windows non è stato trovato o non è riuscito a caricare la DLL. Questo errore è irreversibile.  
  
- **AFX_SQL_ERROR_ODBC_V2_REQUIRED** Impossibile soddisfare la richiesta di un dynaset perché è necessario un driver ODBC conforme a 2 livelli.  
  
- **AFX_SQL_ERROR_RECORDSET_FORWARD_ONLY** un tentativo di scorrere ha esito negativo perché l'origine dati non supporta lo scorrimento all'indietro.  
  
- **AFX_SQL_ERROR_SNAPSHOT_NOT_SUPPORTED** una chiamata a `CRecordset::Open` la richiesta di uno snapshot non riuscita. Gli snapshot non sono supportati dal driver. (Ciò avvenga solo quando la libreria di cursori ODBC â €"ODBCCURS. DLL â €"non è presente).  
  
- **AFX_SQL_ERROR_SQL_CONFORMANCE** il driver per un `CDatabase::OpenEx` o `CDatabase::Open` chiamata non è conforme al livello di conformità SQL ODBC richiesto "Minimo" ( **SQL_OSC_MINIMUM**).  
  
- **AFX_SQL_ERROR_SQL_NO_TOTAL** : Impossibile specificare le dimensioni totali del driver ODBC di un `CLongBinary` valore dei dati. Probabilmente l'operazione non riuscita perché non è stato possibile preassegnato un blocco di memoria globale.  
  
- **AFX_SQL_ERROR_RECORDSET_READONLY** si è tentato di aggiornare un recordset di sola lettura o l'origine dati è di sola lettura. Con il recordset possono essere eseguita alcuna operazione di aggiornamento o `CDatabase` oggetto è associato.  
  
- **SQL_ERROR** funzione non riuscita. Il messaggio di errore restituito dalla funzione ODBC **SQLError** viene archiviato nel **m_strError** (membro dati).  
  
- **SQL_INVALID_HANDLE** funzione non riuscita a causa di un handle di ambiente non valido, un handle di connessione o un handle di istruzione. Ciò indica un errore di programmazione. Nessuna informazione aggiuntiva è disponibile la funzione ODBC **SQLError**.  
  
 I codici con prefisso SQL sono definiti da ODBC. I codici di prefisso "AFX" sono definiti in AFXDB. H, trovato in MFC\Include..  
  
##  <a name="a-namemstrerrora--cdbexceptionmstrerror"></a><a name="m_strerror"></a>CDBException::m_strError  
 Contiene una stringa che descrive l'errore che ha causato l'eccezione.  
  
### <a name="remarks"></a>Note  
 La stringa viene descritto l'errore in termini di caratteri alfanumerici. Per ulteriori informazioni ed esempi, vedere **m_strStateNativeOrigin**.  
  
##  <a name="a-namemstrstatenativeorigina--cdbexceptionmstrstatenativeorigin"></a><a name="m_strstatenativeorigin"></a>CDBException::m_strStateNativeOrigin  
 Contiene una stringa che descrive l'errore che ha causato l'eccezione.  
  
### <a name="remarks"></a>Note  
 La stringa è il modulo "stato: % s, nativo: % ld, origine: % s", in cui i codici di formato, in ordine, vengono sostituiti dai valori che descrivono:  
  
-   Il **SQLSTATE**, contenente un codice di errore di cinque caratteri restituito in una stringa con terminazione null di *szSqlState* parametro della funzione ODBC **SQLError**. **SQLSTATE** i valori vengono elencati nell'appendice A, [codici di errore ODBC](https://msdn.microsoft.com/library/ms714687.aspx), nel *riferimento per programmatori ODBC*. Esempio: "S0022".  
  
-   Il codice di errore nativo, specifico dell'origine dati, restituito nel *pfNativeError* parametro di **SQLError** (funzione). Esempio: 207.  
  
-   Il testo del messaggio di errore restituito nel *szErrorMsg* parametro il **SQLError** (funzione). Questo messaggio è costituito da diversi nomi tra parentesi. Come un errore viene passato dall'origine all'utente, ogni componente ODBC (origine dati, driver, Driver Manager) aggiunge il proprio nome. Queste informazioni consentono di individuare l'origine dell'errore. Esempio: [Microsoft] [Driver ODBC SQL Server] [SQL Server]  
  
 Il framework interpreta la stringa di errore e inserisce i relativi componenti in **m_strStateNativeOrigin**; se **m_strStateNativeOrigin** contiene informazioni per più di un errore, gli errori sono separati da caratteri di nuova riga. Il framework inserisce il testo dell'errore alfanumerico in **m_strError**.  
  
 Per ulteriori informazioni sui codici di utilizzati per creare questa stringa, vedere il [SQLError](https://msdn.microsoft.com/library/ms716312.aspx) in funzione il *riferimento per programmatori ODBC*.  
  
### <a name="example"></a>Esempio  
  ODBC: "Stato: S0022, Native:&207;, origine: [Microsoft] [Driver ODBC SQL Server] nome della colonna non valido [SQL Server] 'ColName'"  
  
 In **m_strStateNativeOrigin**: "stato: S0022, Native:&207;, origine: [Microsoft] [Driver ODBC SQL Server] [SQL Server]"  
  
 In **m_strError**: "nome colonna non valido 'ColName'"  
  
## <a name="see-also"></a>Vedere anche  
 [CException (classe)](../../mfc/reference/cexception-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDatabase (classe)](../../mfc/reference/cdatabase-class.md)   
 [Classe CRecordset](../../mfc/reference/crecordset-class.md)   
 [Classe CFieldExchange](../../mfc/reference/cfieldexchange-class.md)   
 [CRecordset:: Update](../../mfc/reference/crecordset-class.md#update)   
 [CRecordset::Delete](../../mfc/reference/crecordset-class.md#delete)   
 [CException (classe)](../../mfc/reference/cexception-class.md)


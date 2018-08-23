---
title: CDatabase (classe) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDatabase
- AFXDB/CDatabase
- AFXDB/CDatabase::CDatabase
- AFXDB/CDatabase::BeginTrans
- AFXDB/CDatabase::BindParameters
- AFXDB/CDatabase::Cancel
- AFXDB/CDatabase::CanTransact
- AFXDB/CDatabase::CanUpdate
- AFXDB/CDatabase::Close
- AFXDB/CDatabase::CommitTrans
- AFXDB/CDatabase::ExecuteSQL
- AFXDB/CDatabase::GetBookmarkPersistence
- AFXDB/CDatabase::GetConnect
- AFXDB/CDatabase::GetCursorCommitBehavior
- AFXDB/CDatabase::GetCursorRollbackBehavior
- AFXDB/CDatabase::GetDatabaseName
- AFXDB/CDatabase::IsOpen
- AFXDB/CDatabase::OnSetOptions
- AFXDB/CDatabase::Open
- AFXDB/CDatabase::OpenEx
- AFXDB/CDatabase::Rollback
- AFXDB/CDatabase::SetLoginTimeout
- AFXDB/CDatabase::SetQueryTimeout
- AFXDB/CDatabase::m_hdbc
dev_langs:
- C++
helpviewer_keywords:
- CDatabase [MFC], CDatabase
- CDatabase [MFC], BeginTrans
- CDatabase [MFC], BindParameters
- CDatabase [MFC], Cancel
- CDatabase [MFC], CanTransact
- CDatabase [MFC], CanUpdate
- CDatabase [MFC], Close
- CDatabase [MFC], CommitTrans
- CDatabase [MFC], ExecuteSQL
- CDatabase [MFC], GetBookmarkPersistence
- CDatabase [MFC], GetConnect
- CDatabase [MFC], GetCursorCommitBehavior
- CDatabase [MFC], GetCursorRollbackBehavior
- CDatabase [MFC], GetDatabaseName
- CDatabase [MFC], IsOpen
- CDatabase [MFC], OnSetOptions
- CDatabase [MFC], Open
- CDatabase [MFC], OpenEx
- CDatabase [MFC], Rollback
- CDatabase [MFC], SetLoginTimeout
- CDatabase [MFC], SetQueryTimeout
- CDatabase [MFC], m_hdbc
ms.assetid: bd0de70a-e3c3-4441-bcaa-bbf434426ca8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6cb88decfd69fd7fb81667164f651e934ee08775
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42539458"
---
# <a name="cdatabase-class"></a>CDatabase (classe)
Rappresenta una connessione a un'origine dati attraverso la quale è possibile utilizzare l'origine dati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDatabase : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDatabase::CDatabase](#cdatabase)|Costruisce un oggetto `CDatabase`. È necessario inizializzare l'oggetto chiamando `OpenEx` o `Open`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDatabase::BeginTrans](#begintrans)|Avvia una "transazione", ovvero una serie di chiamate reversibile per il `AddNew`, `Edit`, `Delete`, e `Update` funzioni membro della classe `CRecordset` , ovvero sull'origine dati connessa. L'origine dati deve supportare le transazioni per `BeginTrans` abbia effetto.|  
|[CDatabase::BindParameters](#bindparameters)|Consente di associare i parametri prima di chiamare `CDatabase::ExecuteSQL`.|  
|[CDatabase::Cancel](#cancel)|Annulla un'operazione asincrona o un processo da un secondo thread.|  
|[CDatabase::CanTransact](#cantransact)|Restituisce diversi da zero se l'origine dati supporta le transazioni.|  
|[CDatabase::CanUpdate](#canupdate)|Restituisce se diverso da zero la `CDatabase` oggetto è aggiornabile (non solo lettura).|  
|[CDatabase::Close](#close)|Chiude la connessione all'origine dati.|  
|[CDatabase:: CommitTrans](#committrans)|Completa una transazione iniziata da `BeginTrans`. I comandi della transazione che modificano l'origine dati vengono eseguiti.|  
|[CDatabase:: ExecuteSQL](#executesql)|Esegue un'istruzione SQL. Viene restituito alcun record di dati.|  
|[CDatabase:: GetBookmarkPersistence](#getbookmarkpersistence)|Identifica le operazioni tramite la quale la persistenza dei segnalibri in oggetti recordset.|  
|[CDatabase:: Getconnect](#getconnect)|Restituisce la stringa di connessione ODBC utilizzata per la connessione di `CDatabase` oggetto a un'origine dati.|  
|[CDatabase:: GetCursorCommitBehavior](#getcursorcommitbehavior)|Identifica l'effetto del commit di una transazione in un oggetto recordset aperti.|  
|[CDatabase:: GetCursorRollbackBehavior](#getcursorrollbackbehavior)|Identifica l'effetto del rollback di una transazione in un oggetto recordset aperti.|  
|[CDatabase::GetDatabaseName](#getdatabasename)|Restituisce il nome del database attualmente in uso.|  
|[CDatabase::IsOpen](#isopen)|Restituisce se diverso da zero la `CDatabase` è attualmente collegato a un'origine dati.|  
|[CDatabase::OnSetOptions](#onsetoptions)|Chiamato dal framework per impostare le opzioni di connessione standard. L'implementazione predefinita imposta il valore di timeout della query. È possibile stabilire queste opzioni anticipo chiamando `SetQueryTimeout`.|  
|[CDatabase:: Open](#open)|Stabilisce una connessione a un'origine dati (tramite un driver ODBC).|  
|[CDatabase](#openex)|Stabilisce una connessione a un'origine dati (tramite un driver ODBC).|  
|[CDatabase:: rollback](#rollback)|Inverte le modifiche apportate durante la transazione corrente. L'origine dati restituisce lo stato precedente, come definito nel `BeginTrans` chiamata, inalterato.|  
|[CDatabase::SetLoginTimeout](#setlogintimeout)|Imposta il numero di secondi dopo il quale un tentativo di connessione origine dati raggiungerà il timeout.|  
|[CDatabase::SetQueryTimeout](#setquerytimeout)|Set di operazioni di query il numero di secondi dopo il quale database raggiungerà il timeout. Influisce su tutte le successive recordset `Open`, `AddNew`, `Edit`, e `Delete` chiamate.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDatabase:: M_hdbc](#m_hdbc)|Aprire l'handle di connessione Database Connectivity (ODBC) a un'origine dati. Tipo di *HDBC*.|  
  
## <a name="remarks"></a>Note  
 Un'origine dati è un'istanza specifica di dati ospitati da un sistema di gestione di database (DBMS). Ad esempio Microsoft SQL Server, Microsoft Access, dBASE Borland e xBASE. È possibile avere uno o più `CDatabase` oggetti attivi in un momento all'interno dell'applicazione.  
  
> [!NOTE]
>  Se si lavora con le classi di oggetti DAO (Data Access) anziché le classi di Open Database Connectivity (ODBC), usare una classe [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) invece. Per altre informazioni, vedere l'articolo [Overview: programmazione di Database](../../data/data-access-programming-mfc-atl.md).  
  
 Per usare `CDatabase`, creare un `CDatabase` oggetto e chiamare relativo `OpenEx` funzione membro. Verrà aperta una connessione. Quando si creano quindi `CRecordset` gli oggetti per l'uso di origine dati connessa, passare al costruttore di recordset un puntatore ai `CDatabase` oggetto. Al termine dell'utilizzo della connessione, chiamare il `Close` membro funzione ed eliminare definitivamente il `CDatabase` oggetto. `Close` Chiude tutti i recordset che non sia stato precedentemente chiuso.  
  
 Per altre informazioni sulle `CDatabase`, vedere gli articoli [origine dati (ODBC)](../../data/odbc/data-source-odbc.md) e [Panoramica: programmazione di Database](../../data/data-access-programming-mfc-atl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDatabase`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  
  
##  <a name="begintrans"></a>  CDatabase::BeginTrans  
 Chiamare questa funzione membro per avviare una transazione con l'origine dati connessa.  
  
```  
BOOL BeginTrans();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la chiamata ha avuto esito positivo e delle modifiche viene eseguito solo manualmente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Una transazione è costituita da uno o più chiamate per il `AddNew`, `Edit`, `Delete`, e `Update` funzioni membro di un `CRecordset` oggetto. Prima di iniziare una transazione, il `CDatabase` oggetto deve già connessa a origine dati chiamando relativi `OpenEx` o `Open` funzione membro. Per terminare la transazione, chiamare [CommitTrans](#committrans) per accettare tutte le modifiche apportate all'origine dati (e darvi) o chiamare [Rollback](#rollback) per interrompere l'intera transazione. Chiamare `BeginTrans` dopo che è aprire tutti i recordset coinvolti nella transazione e come vicino effettivi aggiornare operazioni possibili.  
  
> [!CAUTION]
>  A seconda del driver ODBC apertura di un recordset prima di chiamare `BeginTrans` può causare problemi quando si chiama `Rollback`. È consigliabile controllare il driver specifico in uso. Ad esempio, quando si usa il driver Microsoft Access incluso in Microsoft ODBC Desktop Driver Pack 3.0, è necessario tenere conto per il requisito del motore di database Jet che non è consigliabile iniziare una transazione in qualsiasi database che dispone di un cursore aperto. Nelle classi di database MFC, un cursore aperto significa che un elemento aperto `CRecordset` oggetto. Per altre informazioni, vedere [68 Nota tecnica](../../mfc/tn068-performing-transactions-with-the-microsoft-access-7-odbc-driver.md).  
  
 `BeginTrans` può anche bloccare i record dei dati nel server, a seconda della concorrenza richiesta e le funzionalità dell'origine dati. Per informazioni sul blocco dei dati, vedere l'articolo [Recordset: blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md).  
  
 Le transazioni definite dall'utente sono illustrate nell'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
 `BeginTrans` Consente di stabilire lo stato in cui la sequenza delle transazioni può essere annullata (invertito). Per stabilire un nuovo stato per operazioni di rollback, commit qualsiasi transazione corrente, quindi chiamare `BeginTrans` nuovamente.  
  
> [!CAUTION]
>  La chiamata `BeginTrans` nuovamente senza chiamare `CommitTrans` o `Rollback` è un errore.  
  
 Chiamare il [CanTransact](#cantransact) funzione membro per determinare se il driver supporta le transazioni per un determinato database. È inoltre necessario chiamare [GetCursorCommitBehavior](#getcursorcommitbehavior) e [GetCursorRollbackBehavior](#getcursorrollbackbehavior) per determinare il supporto per la conservazione del cursore.  
  
 Per altre informazioni sulle transazioni, vedere l'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
### <a name="example"></a>Esempio  
  Vedere l'articolo [transazione: esecuzione di una transazione in un Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).  
  
##  <a name="bindparameters"></a>  CDatabase::BindParameters  
 Eseguire l'override `BindParameters` quando è necessario associare i parametri prima di chiamare [CDatabase:: ExecuteSQL](#executesql).  
  
```  
virtual void BindParameters(HSTMT hstmt);
```  
  
### <a name="parameters"></a>Parametri  
 *HStmt*  
 L'handle di istruzione ODBC per la quale si desidera associare i parametri.  
  
### <a name="remarks"></a>Note  
 Questo approccio è utile quando non è necessario il risultato impostato da una stored procedure.  
  
 Nell'override, chiamare `SQLBindParameters` e relative funzioni ODBC per associare i parametri. MFC chiama l'override prima della chiamata a `ExecuteSQL`. Non è necessario chiamare `SQLPrepare`; `ExecuteSQL` chiamate `SQLExecDirect` ed Elimina le *hstmt*, che viene usato una sola volta.  
  
##  <a name="cancel"></a>  CDatabase::Cancel  
 Chiamare questa funzione membro per richiedere che l'origine dati annullare un'operazione asincrona in corso o un processo da un secondo thread.  
  
```  
void Cancel();
```  
  
### <a name="remarks"></a>Note  
 Si noti che le classi ODBC MFC non utilizzano non più l'elaborazione asincrona; Per eseguire un'operazione asincrona, è necessario chiamare direttamente la funzione API ODBC [SQLSetConnectOption](/previous-versions/windows/desktop/ms713564\(v=vs.85\)). Per altre informazioni, vedere [esecuzione asincrona](/previous-versions/windows/desktop/ms713563\(v=vs.85\)) nel SDK di Windows.  
  
##  <a name="cantransact"></a>  CDatabase::CanTransact  
 Chiamare questa funzione membro per determinare se il database consente di transazioni.  
  
```  
BOOL CanTransact() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se recordset usando questo `CDatabase` oggetto Consenti transazioni; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Per informazioni sulle transazioni, vedere l'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
##  <a name="canupdate"></a>  CDatabase::CanUpdate  
 Chiamare questa funzione membro per determinare se il `CDatabase` oggetto consente aggiornamenti.  
  
```  
BOOL CanUpdate() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il `CDatabase` oggetto consente aggiornamenti; in caso contrario, 0, che indica uno che è passato TRUE *bReadOnly* quando è stata aperta la `CDatabase` oggetto o che l'origine dati stessa è di sola lettura. L'origine dati è di sola lettura se una chiamata alla funzione API ODBC `SQLGetInfo` per SQL_DATASOURCE_READ_ONLY restituisce "y".  
  
### <a name="remarks"></a>Note  
 Non tutti i driver supportano gli aggiornamenti.  
  
##  <a name="cdatabase"></a>  CDatabase::CDatabase  
 Costruisce un oggetto `CDatabase`.  
  
```  
CDatabase();
```  
  
### <a name="remarks"></a>Note  
 Al termine della creazione dell'oggetto, è necessario chiamare relativi `OpenEx` o `Open` funzione membro per stabilire una connessione a un'origine dati specificata.  
  
 Può risultare utile incorporare il `CDatabase` oggetto nella classe del documento.  
  
### <a name="example"></a>Esempio  
 In questo esempio viene illustrato l'utilizzo `CDatabase` in un `CDocument`-classe derivata.  
  
 [!code-cpp[NVC_MFCDatabase#9](../../mfc/codesnippet/cpp/cdatabase-class_1.h)]  
  
 [!code-cpp[NVC_MFCDatabase#10](../../mfc/codesnippet/cpp/cdatabase-class_2.cpp)]  
  
##  <a name="close"></a>  CDatabase::Close  
 Chiamare questa funzione membro, se si vuole disconnettersi da un'origine dati.  
  
```  
virtual void Close();
```  
  
### <a name="remarks"></a>Note  
 È necessario chiudere tutti i recordset associati il `CDatabase` prima di chiamare questa funzione membro dell'oggetto. In quanto `Close` non elimina definitivamente il `CDatabase` dell'oggetto, è possibile riutilizzare l'oggetto aprendo una nuova connessione per la stessa origine dati o un'origine dati diversa.  
  
 Tutte in sospeso `AddNew` o `Edit` istruzioni di recordset utilizzando il database vengono annullate e viene eseguito il rollback di tutte le transazioni in sospeso. Tutti i recordset dipendenti il `CDatabase` oggetto vengono lasciati in uno stato non definito.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDatabase#12](../../mfc/codesnippet/cpp/cdatabase-class_3.cpp)]  
  
##  <a name="committrans"></a>  CDatabase:: CommitTrans  
 Chiamare questa funzione membro dopo il completamento delle transazioni.  
  
```  
BOOL CommitTrans();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se gli aggiornamenti sono stati correttamente eseguito il commit. in caso contrario 0. Se `CommitTrans` ha esito negativo, lo stato dell'origine dati è definito. È necessario archiviare i dati per determinare lo stato.  
  
### <a name="remarks"></a>Note  
 Una transazione è costituito da una serie di chiamate per il `AddNew`, `Edit`, `Delete`, e `Update` funzioni membro di un `CRecordset` oggetto che ha avuto inizio con una chiamata ai [BeginTrans](#begintrans) funzione membro. `CommitTrans` esegue il commit della transazione. Per impostazione predefinita, gli aggiornamenti vengono eseguito il commit immediatamente. la chiamata `BeginTrans` provoca l'impegno degli aggiornamenti per essere rimandate a `CommitTrans` viene chiamato.  
  
 Fino a quando non si chiama `CommitTrans` per terminare una transazione, è possibile chiamare il [Rollback](#rollback) funzione membro per interrompere la transazione e lasciare l'origine dati nello stato originale. Per iniziare una nuova transazione, chiamare `BeginTrans` nuovamente.  
  
 Per altre informazioni sulle transazioni, vedere l'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
### <a name="example"></a>Esempio  
  Vedere l'articolo [transazione: esecuzione di una transazione in un Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).  
  
##  <a name="executesql"></a>  CDatabase:: ExecuteSQL  
 Chiamare questa funzione membro quando è necessario eseguire un comando SQL direttamente.  
  
```  
void ExecuteSQL(LPCTSTR lpszSQL);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszSQL*  
 Puntatore a una stringa con terminazione null che contiene un comando SQL valido per l'esecuzione. È possibile passare un [CString](../../atl-mfc-shared/reference/cstringt-class.md).  
  
### <a name="remarks"></a>Note  
 Creare il comando sotto forma di stringa con terminazione null. `ExecuteSQL` non restituisce i record dei dati. Se si desidera operare su record, usare invece un oggetto recordset.  
  
 La maggior parte dei comandi per un'origine dati vengono inviata tramite oggetti recordset che supportano i comandi per la selezione dei dati, inserimento di nuovi record, l'eliminazione di record e modifica di record. Tuttavia, non tutte le funzionalità ODBC sono direttamente supportata dalle classi di database, pertanto in alcuni casi potrebbe essere necessario effettuare una chiamata diretta di SQL con `ExecuteSQL`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDatabase#13](../../mfc/codesnippet/cpp/cdatabase-class_4.cpp)]  
  
##  <a name="getbookmarkpersistence"></a>  CDatabase:: GetBookmarkPersistence  
 Chiamare questa funzione membro per determinare la persistenza dei segnalibri in un oggetto Recordset dopo determinate operazioni.  
  
```  
DWORD GetBookmarkPersistence() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Maschera di bit che identifica le operazioni tramite cui si ottiene la persistenza dei segnalibri in un oggetto Recordset. Per informazioni dettagliate, vedere la sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 Ad esempio, se si chiama `CRecordset::GetBookmark` e quindi si chiama `CRecordset::Requery`, è possibile che il segnalibro ottenuto da `GetBookmark` non sia più valido. È consigliabile chiamare `GetBookmarkPersistence` prima di chiamare `CRecordset::SetBookmark`.  
  
 Nella tabella seguente sono elencati i valori di maschera di bit che possono essere combinati per il valore restituito di `GetBookmarkPersistence`.  
  
|Valore di maschera di bit|Persistenza del segnalibro|  
|-------------------|--------------------------|  
|SQL_BP_CLOSE|I segnalibri sono validi dopo una `Requery` operazione.|  
|SQL_BP_DELETE|Il segnalibro per una riga è valido dopo una `Delete` operazione in una determinata riga.|  
|SQL_BP_DROP|I segnalibri sono validi dopo una `Close` operazione.|  
|SQL_BP_SCROLL|I segnalibri sono validi dopo qualsiasi `Move` operazione. Indica semplicemente se i segnalibri sono supportati nell'oggetto Recordset, come restituito da `CRecordset::CanBookmark`.|  
|SQL_BP_TRANSACTION|I segnalibri sono validi dopo il commit o il rollback di un'operazione.|  
|SQL_BP_UPDATE|Il segnalibro per una riga è valido dopo un' `Update` operazione in una determinata riga.|  
|SQL_BP_OTHER_HSTMT|I segnalibri associati a un oggetto Recordset sono validi in un secondo oggetto Recordset.|  
  
 Per altre informazioni su questo valore restituito, vedere la funzione API ODBC `SQLGetInfo` nel SDK di Windows. Per altre informazioni sui segnalibri, vedere l'articolo [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).  
  
##  <a name="getconnect"></a>  CDatabase:: Getconnect  
 Chiamare questa funzione membro per recuperare la stringa di connessione utilizzata durante la chiamata a `OpenEx` oppure `Open` connesso il `CDatabase` oggetto a un'origine dati.  
  
```  
const CString GetConnect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **const**[CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene la stringa di connessione se `OpenEx` o `Open` è stato chiamato; in caso contrario, una stringa vuota.  
  
### <a name="remarks"></a>Note  
 Visualizzare [CDatabase:: Open](#open) per una descrizione del modo in cui viene creata la stringa di connessione.  
  
##  <a name="getcursorcommitbehavior"></a>  CDatabase:: GetCursorCommitBehavior  
 Chiamare questa funzione membro per determinare come una [CommitTrans](#committrans) operazione interessa i cursori di oggetti recordset aperti.  
  
```  
int GetCursorCommitBehavior() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che indica l'effetto delle transazioni per gli oggetti recordset aperti. Per informazioni dettagliate, vedere la sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 La tabella seguente elenca i possibili valori restituiti per `GetCursorCommitBehavior` e il relativo effetto sul set di record aperta.  
  
|Valore restituito|Effetto sugli oggetti CRecordset|  
|------------------|----------------------------------|  
|SQL_CB_CLOSE|Chiamare `CRecordset::Requery` subito dopo il commit della transazione.|  
|SQL_CB_DELETE|Chiamare `CRecordset::Close` subito dopo il commit della transazione.|  
|SQL_CB_PRESERVE|In genere procederai `CRecordset` operazioni.|  
  
 Per altre informazioni su questo valore restituito, vedere la funzione API ODBC `SQLGetInfo` nel SDK di Windows. Per altre informazioni sulle transazioni, vedere l'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
##  <a name="getcursorrollbackbehavior"></a>  CDatabase:: GetCursorRollbackBehavior  
 Chiamare questa funzione membro per determinare come una [Rollback](#rollback) operazione interessa i cursori di oggetti recordset aperti.  
  
```  
int GetCursorRollbackBehavior() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che indica l'effetto delle transazioni per gli oggetti recordset aperti. Per informazioni dettagliate, vedere la sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 La tabella seguente elenca i possibili valori restituiti per `GetCursorRollbackBehavior` e il relativo effetto sul set di record aperta.  
  
|Valore restituito|Effetto sugli oggetti CRecordset|  
|------------------|----------------------------------|  
|SQL_CB_CLOSE|Chiamare `CRecordset::Requery` subito dopo il rollback della transazione.|  
|SQL_CB_DELETE|Chiamare `CRecordset::Close` subito dopo il rollback della transazione.|  
|SQL_CB_PRESERVE|In genere procederai `CRecordset` operazioni.|  
  
 Per altre informazioni su questo valore restituito, vedere la funzione API ODBC `SQLGetInfo` nel SDK di Windows. Per altre informazioni sulle transazioni, vedere l'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
##  <a name="getdatabasename"></a>  CDatabase::GetDatabaseName  
 Chiamare questa funzione membro per recuperare il nome del database attualmente connesso (a condizione che l'origine dati definisce un oggetto denominato chiamato "database").  
  
```  
CString GetDatabaseName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene il nome del database se ha esito positivo; in caso contrario, un oggetto vuoto `CString`.  
  
### <a name="remarks"></a>Note  
 Ciò non è lo stesso come il nome di origine dati (DSN) specificato nella `OpenEx` o `Open` chiamare. Che cosa `GetDatabaseName` restituisce dipende da ODBC. In generale, un database è una raccolta di tabelle. Se l'entità ha un nome, `GetDatabaseName` lo restituisce.  
  
 È possibile, ad esempio visualizzare il nome specificato in un'intestazione. Se si verifica un errore durante il recupero del nome da ODBC, `GetDatabaseName` restituisce un oggetto vuoto `CString`.  
  
##  <a name="isopen"></a>  CDatabase::IsOpen  
 Chiamare questa funzione membro per determinare se il `CDatabase` è attualmente collegato a un'origine dati.  
  
```  
BOOL IsOpen() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il `CDatabase` oggetto è attualmente connesso; in caso contrario 0.  
  
##  <a name="m_hdbc"></a>  CDatabase:: M_hdbc  
 Contiene un handle pubblico per una connessione all'origine dati ODBC, ovvero un "handle di connessione".  
  
### <a name="remarks"></a>Note  
 In genere, non si disporrà di alcuna necessità di accedere direttamente a questa variabile membro. Al contrario, il framework consente di allocare l'handle quando si chiama `OpenEx` o `Open`. Il framework consente di deallocare l'handle quando si chiama il **eliminare** operatore sul `CDatabase` oggetto. Si noti che il `Close` funzione membro dealloca l'handle.  
  
 In alcune circostanze, tuttavia, potrebbe essere necessario usare direttamente l'handle. Ad esempio, se è necessario chiamare funzioni API ODBC direttamente anziché tramite la classe `CDatabase`, potrebbe essere necessario un handle di connessione da passare come parametro. Vedere l'esempio di codice seguente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDatabase#15](../../mfc/codesnippet/cpp/cdatabase-class_5.cpp)]  
  
##  <a name="onsetoptions"></a>  CDatabase::OnSetOptions  
 Il framework chiama questa funzione membro durante l'esecuzione diretta di un'istruzione SQL con il `ExecuteSQL` funzione membro.  
  
```  
virtual void OnSetOptions(HSTMT hstmt);
```  
  
### <a name="parameters"></a>Parametri  
 *HStmt*  
 L'handle di istruzione ODBC per i quali vengono impostate le opzioni.  
  
### <a name="remarks"></a>Note  
 `CRecordset::OnSetOptions` inoltre chiama questa funzione membro.  
  
 `OnSetOptions` Imposta il valore di timeout di accesso. Se sono state chiamate precedenti per il `SetQueryTimeout` e la funzione membro, `OnSetOptions` riflette i valori correnti; in caso contrario, imposta i valori predefiniti.  
  
> [!NOTE]
>  Prima di MFC 4.2, `OnSetOptions` anche impostare la modalità di elaborazione per entrambi snychronous o asincrona. A partire da MFC 4.2, tutte le operazioni sono sincrone. Per eseguire un'operazione asincrona, è necessario effettuare una chiamata diretta alla funzione API ODBC `SQLSetPos`.  
  
 Non è necessario eseguire l'override `OnSetOptions` per modificare il valore di timeout. Per personalizzare il valore di timeout di query, chiamare invece `SetQueryTimeout` prima di creare un oggetto recordset. `OnSetOptions` useranno il nuovo valore. I valori impostati si applicano alle successive operazioni in tutti i recordset o chiamate SQL dirette.  
  
 Eseguire l'override `OnSetOptions` se si desidera impostare opzioni aggiuntive. Override deve chiamare la classe di base `OnSetOptions` prima o dopo avere chiamato la funzione API ODBC `SQLSetStmtOption`. Seguire il metodo illustrato nell'implementazione predefinita del framework di `OnSetOptions`.  
  
##  <a name="open"></a>  CDatabase:: Open  
 Chiamare questa funzione membro per inizializzare un oggetto appena costruito `CDatabase` oggetto.  
  
```  
virtual BOOL Open(
    LPCTSTR lpszDSN,  
    BOOL bExclusive = FALSE,  
    BOOL bReadOnly = FALSE,  
    LPCTSTR lpszConnect = _T("ODBC;"),  
    BOOL bUseCursorLib = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszDSN*  
 Specifica un nome dell'origine dati, ovvero un nome registrato con ODBC tramite Amministratore ODBC. Se viene specificato un valore DSN *lpszConnect* (nel formato "DSN =\<origine dati >"), non deve essere specificato nuovamente in *lpszDSN*. In questo caso *lpszDSN* deve essere NULL. In caso contrario, è possibile passare NULL se si vuole presentare all'utente una finestra di dialogo origine dati in cui l'utente può selezionare un'origine dati. Per altre informazioni, vedere la sezione Osservazioni.  
  
 *bExclusive*  
 Non è supportata in questa versione della libreria di classi. Attualmente, un'asserzione non riesce se questo parametro è TRUE. L'origine dati viene sempre aperto come condivisa (non esclusivo).  
  
 *bReadOnly*  
 TRUE se si prevede la connessione sia di sola lettura e per non consentire gli aggiornamenti all'origine dati. Tutti i recordset dipendenti ereditano l'attributo. Il valore predefinito è FALSE.  
  
 *lpszConnect*  
 Specifica una stringa di connessione. La stringa di connessione consente di concatenare informazioni, eventualmente con un nome dell'origine dati, un ID utente valido nel file di dati, una stringa di autenticazione utente, password, se l'origine dati richiede una e altre informazioni. La stringa di connessione intero deve essere preceduta dalla stringa "ODBC". (maiuscole o minuscole). "ODBC"; stringa viene utilizzata per indicare che la connessione a un'origine dati ODBC. si tratta di compatibilità verso l'alto quando le versioni future della libreria di classi potrebbero supportare zdroje dat non ODBC.  
  
 *bUseCursorLib*  
 TRUE se si desidera che la DLL della libreria di cursori ODBC da caricare. La libreria di cursori maschera di alcune funzionalità del driver ODBC sottostante, impedendo così che l'utilizzo di dynaset (se il driver supportarle). I cursori soli supportati se viene caricata la libreria di cursori sono snapshot statici e i cursori forward-only. Il valore predefinito è TRUE. Se si prevede di creare un oggetto recordset direttamente da `CRecordset` senza derivare da essa, non si deve caricare la libreria di cursori.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la connessione viene eseguita correttamente; in caso contrario, 0 se l'utente sceglie annullare quando viene visualizzata una finestra di dialogo che richiede più informazioni di connessione. In tutti gli altri casi, il framework genera un'eccezione.  
  
### <a name="remarks"></a>Note  
 L'oggetto di database deve essere inizializzato prima di usarlo per costruire un oggetto recordset.  
  
> [!NOTE]
>  Chiama il [OpenEx](#openex) funzione membro è il modo migliore per connettersi a un'origine dati e inizializzare l'oggetto di database.  
  
 Se i parametri in di `Open` chiamata non contengono informazioni sufficienti per stabilire la connessione, il driver ODBC apre una finestra di dialogo per ottenere le informazioni necessarie da parte dell'utente. Quando si chiama `Open`, la stringa di connessione, *lpszConnect*, vengono archiviati privatamente nel `CDatabase` dell'oggetto ed è disponibile chiamando il [GetConnect](#getconnect) funzione membro.  
  
 Se si desidera, è possibile aprire una propria finestra di dialogo prima di chiamare `Open` per ottenere informazioni dall'utente, ad esempio una password, quindi aggiungere le informazioni sulla stringa di connessione si passa a `Open`. Oppure è possibile salvare la stringa di connessione passata in modo da poterla riutilizzare alla successiva ora l'applicazione chiama `Open` su un `CDatabase` oggetto.  
  
 È anche possibile usare la stringa di connessione per più livelli di autorizzazione di accesso (ciascuno per una diversa `CDatabase` oggetto) o per comunicare altre informazioni specifiche dell'origine dati. Per altre informazioni sulle stringhe di connessione, vedere il capitolo 5 nel SDK di Windows.  
  
 È possibile che un tentativo di connessione al timeout se, ad esempio, non è disponibile l'host DBMS. Se il tentativo di connessione ha esito negativo, `Open` genera un `CDBException`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDatabase#14](../../mfc/codesnippet/cpp/cdatabase-class_6.cpp)]  
  
##  <a name="openex"></a>  CDatabase  
 Chiamare questa funzione membro per inizializzare un oggetto appena costruito `CDatabase` oggetto.  
  
```  
virtual BOOL OpenEx(
    LPCTSTR lpszConnectString,  
    DWORD dwOptions = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszConnectString*  
 Specifica una stringa di connessione ODBC. Ciò include il nome dell'origine dati, nonché altre informazioni facoltative, ad esempio un ID utente e password. Ad esempio, "DSN = SQLServer_Source; UID = SA; PWD = abc123 "è una stringa di connessione disponibili. Si noti che se viene passato NULL per *lpszConnectString*, una finestra di dialogo origine dati richiederà all'utente di selezionare un'origine dati.  
  
 *dwOptions*  
 Maschera di bit che specifica una combinazione dei valori seguenti. Il valore predefinito è 0, vale a dire che il database verrà aperto come condivisa con accesso in scrittura, la DLL della libreria di cursori ODBC non verrà caricata e la finestra di dialogo di connessione ODBC verrà visualizzato solo se non le informazioni sono sufficienti per stabilire la connessione.  
  
- `CDatabase::openExclusive` Non è supportata in questa versione della libreria di classi. Un'origine dati viene sempre aperto come condivisa (non esclusivo). Attualmente, un'asserzione non riesce se si specifica questa opzione.  
  
- `CDatabase::openReadOnly` Aprire l'origine dati in sola lettura.  
  
- `CDatabase::useCursorLib` Caricare la libreria di cursori ODBC DLL. La libreria di cursori maschera di alcune funzionalità del driver ODBC sottostante, impedendo così che l'utilizzo di dynaset (se il driver supportarle). I cursori soli supportati se viene caricata la libreria di cursori sono snapshot statici e i cursori forward-only. Se si prevede di creare un oggetto recordset direttamente da `CRecordset` senza derivare da essa, non si deve caricare la libreria di cursori.  
  
- `CDatabase::noOdbcDialog` Non visualizzare la finestra di dialogo connessione ODBC, indipendentemente dal fatto che venga fornite sufficienti informazioni di connessione.  
  
- `CDatabase::forceOdbcDialog` Visualizzare sempre la finestra di dialogo di connessione ODBC.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la connessione viene eseguita correttamente; in caso contrario, 0 se l'utente sceglie annullare quando viene visualizzata una finestra di dialogo che richiede più informazioni di connessione. In tutti gli altri casi, il framework genera un'eccezione.  
  
### <a name="remarks"></a>Note  
 L'oggetto di database deve essere inizializzato prima di usarlo per costruire un oggetto recordset.  
  
 Se il *lpszConnectString* parametro di `OpenEx` chiamata non contiene informazioni sufficienti per stabilire la connessione, il driver ODBC apre una finestra di dialogo per ottenere le informazioni necessarie da parte dell'utente, purché tu non abbia impostare `CDatabase::noOdbcDialog` oppure `CDatabase::forceOdbcDialog` nel *dwOptions* parametro. Quando si chiama `OpenEx`, la stringa di connessione, *lpszConnectString*, vengono archiviati privatamente nel `CDatabase` dell'oggetto ed è disponibile chiamando il [GetConnect](#getconnect) funzione membro.  
  
 Se si desidera, è possibile aprire una propria finestra di dialogo prima di chiamare `OpenEx` per ottenere informazioni dall'utente, ad esempio una password e quindi aggiungere le informazioni sulla stringa di connessione si passa a `OpenEx`. Oppure è possibile salvare la stringa di connessione passata in modo da poterla riutilizzare alla successiva ora l'applicazione chiama `OpenEx` su un `CDatabase` oggetto.  
  
 È anche possibile usare la stringa di connessione per più livelli di autorizzazione di accesso (ciascuno per una diversa `CDatabase` oggetto) o per comunicare altre informazioni specifiche dell'origine dati. Per altre informazioni sulle stringhe di connessione, vedere il capitolo 6 nel *riferimento per programmatori ODBC*.  
  
 È possibile che un tentativo di connessione al timeout se, ad esempio, non è disponibile l'host DBMS. Se il tentativo di connessione ha esito negativo, `OpenEx` genera un `CDBException`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDatabase#11](../../mfc/codesnippet/cpp/cdatabase-class_7.cpp)]  
  
##  <a name="rollback"></a>  CDatabase:: rollback  
 Chiamare questa funzione membro per annullare le modifiche apportate durante una transazione.  
  
```  
BOOL Rollback();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la transazione è stata annullata correttamente; in caso contrario 0. Se un `Rollback` chiamata ha esito negativo, l'origine dati e delle transazioni non sono definiti gli stati. Se `Rollback` restituisce 0, è necessario controllare l'origine dati per determinare lo stato.  
  
### <a name="remarks"></a>Note  
 Tutti i `CRecordset` `AddNew`, `Edit`, `Delete`, e `Update` chiamate eseguite dall'ultima [BeginTrans](#begintrans) rollback allo stato esistente al momento della chiamata.  
  
 Dopo una chiamata a `Rollback`, la transazione è in ed è necessario chiamare `BeginTrans` nuovamente per un'altra transazione. Il record corrente prima della chiamata `BeginTrans` diventa il record corrente nuovamente dopo `Rollback`.  
  
 Dopo un rollback, il record corrente prima di eseguire il rollback rimane invariato. Per informazioni dettagliate sullo stato del set di record e l'origine dati dopo un'operazione di rollback, vedere l'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
### <a name="example"></a>Esempio  
  Vedere l'articolo [transazione: esecuzione di una transazione in un Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).  
  
##  <a name="setlogintimeout"></a>  CDatabase::SetLoginTimeout  
 Chiamare questa funzione membro, ovvero prima di chiamare `OpenEx` o `Open` , sostituire il numero predefinito di secondi consentito prima i dati di un tentativo connessione a un'origine verifica il timeout.  
  
```  
void SetLoginTimeout(DWORD dwSeconds);
```  
  
### <a name="parameters"></a>Parametri  
 *dwSeconds*  
 Il numero di secondi consentito prima un tentativo di connessione del timeout.  
  
### <a name="remarks"></a>Note  
 Un tentativo di connessione potrebbe scadere se, ad esempio, non è disponibile nel sistema DBMS. Chiamare `SetLoginTimeout` dopo aver creato il non inizializzata `CDatabase` dell'oggetto, ma prima di chiamare `OpenEx` o `Open`.  
  
 Il valore predefinito per i timeout di accesso è 15 secondi. Non tutte le origini dati supportano la possibilità di specificare un valore di timeout di accesso. Se l'origine dati non supporta i timeout, si ottiene output di traccia, ma non un'eccezione. Un valore pari a 0 indica "infinito".  
  
##  <a name="setquerytimeout"></a>  CDatabase::SetQueryTimeout  
 Chiamare questa funzione membro per sostituire il numero predefinito di secondi consentito prima le operazioni successive sul timeout origine dati connessa.  
  
```  
void SetQueryTimeout(DWORD dwSeconds);
```  
  
### <a name="parameters"></a>Parametri  
 *dwSeconds*  
 Il numero di secondi consentito prima un tentativo di query timeout.  
  
### <a name="remarks"></a>Note  
 Un'operazione potrebbe raggiungere il timeout a causa di problemi di accesso di rete, il tempo di elaborazione di un numero eccessivo di query e così via. Chiamare `SetQueryTimeout` prima dell'apertura del recordset o prima della chiamata del recordset `AddNew`, `Update` o `Delete` funzioni membro, se si desidera modificare il valore di timeout della query. L'impostazione influisce su tutte le successive `Open`, `AddNew`, `Update`, e `Delete` chiamate a tutti i recordset associati a questo `CDatabase` oggetto. La modifica del valore di timeout di query per un oggetto recordset dopo l'apertura, il valore per il recordset rimane invariato. Ad esempio, le successive `Move` operazioni non usano il nuovo valore.  
  
 Il valore predefinito di timeout delle query è 15 secondi. Non tutte le origini dati supportano la possibilità di impostare un valore di timeout della query. Se si imposta un valore di timeout query pari a 0, si verifica alcun timeout. la comunicazione con l'origine dati potrebbe non rispondere. Questo comportamento può essere utile durante lo sviluppo. Se l'origine dati non supporta i timeout, si ottiene output di traccia, ma non un'eccezione.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CObject](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CRecordset](../../mfc/reference/crecordset-class.md)

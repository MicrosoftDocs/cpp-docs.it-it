---
title: CDatabase (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c6aeaa64b0b665449ee9216070cdebbc2632948b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[CDatabase::CDatabase](#cdatabase)|Costruisce un oggetto `CDatabase`. È necessario inizializzare l'oggetto chiamando `OpenEx` o **aprire**.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDatabase::BeginTrans](#begintrans)|Avvia una transazione di"", ovvero una serie di chiamate reversibile per il `AddNew`, **modifica**, **eliminare**, e **aggiornamento** funzioni membro della classe `CRecordset` : sul origine dati connessa. L'origine dati deve supportare le transazioni per **BeginTrans** abbia effetto.|  
|[CDatabase::BindParameters](#bindparameters)|Consente di associare i parametri prima di chiamare `CDatabase::ExecuteSQL`.|  
|[CDatabase::Cancel](#cancel)|Annulla un'operazione asincrona o un processo da un secondo thread.|  
|[CDatabase::CanTransact](#cantransact)|Restituisce zero se l'origine dati supporta le transazioni.|  
|[CDatabase::CanUpdate](#canupdate)|Restituisce zero se la `CDatabase` oggetto è aggiornabile (non solo lettura).|  
|[CDatabase::Close](#close)|Chiude la connessione all'origine dati.|  
|[CDatabase:: CommitTrans](#committrans)|Completa una transazione iniziata da **BeginTrans**. I comandi nella transazione che modificano l'origine dati vengono eseguiti.|  
|[CDatabase:: ExecuteSQL](#executesql)|Esegue un'istruzione SQL. Viene restituito alcun record di dati.|  
|[CDatabase:: GetBookmarkPersistence](#getbookmarkpersistence)|Identifica le operazioni tramite cui persistenza dei segnalibri in oggetti recordset.|  
|[CDatabase::GetConnect](#getconnect)|Restituisce la stringa di connessione ODBC utilizzata per la connessione di `CDatabase` oggetto a un'origine dati.|  
|[CDatabase:: GetCursorCommitBehavior](#getcursorcommitbehavior)|Identifica l'effetto dell'esecuzione del commit di una transazione in un oggetto recordset aperto.|  
|[CDatabase:: GetCursorRollbackBehavior](#getcursorrollbackbehavior)|Identifica l'effetto del rollback di una transazione in un oggetto recordset aperto.|  
|[CDatabase::GetDatabaseName](#getdatabasename)|Restituisce il nome del database attualmente in uso.|  
|[CDatabase::IsOpen](#isopen)|Restituisce zero se la `CDatabase` è attualmente collegato a un'origine dati.|  
|[CDatabase::OnSetOptions](#onsetoptions)|Chiamato dal framework per impostare le opzioni di connessione standard. L'implementazione predefinita imposta il valore di timeout della query. È possibile stabilire queste opzioni anticipatamente chiamando `SetQueryTimeout`.|  
|[CDatabase:: Open](#open)|Stabilisce una connessione a un'origine dati (tramite un driver ODBC).|  
|[:: OpenEx](#openex)|Stabilisce una connessione a un'origine dati (tramite un driver ODBC).|  
|[CDatabase:: rollback](#rollback)|Inverte le modifiche apportate durante la transazione corrente. L'origine dati restituisce lo stato precedente, come definito nel **BeginTrans** chiamata, senza modificata.|  
|[CDatabase::SetLoginTimeout](#setlogintimeout)|Imposta il numero di secondi dopo il quale il timeout di un tentativo di connessione origine dati.|  
|[CDatabase::SetQueryTimeout](#setquerytimeout)|Set di operazioni di query il numero di secondi dopo il database a cui il timeout. Influisce su tutte le successive recordset **aprire**, `AddNew`, **modifica**, e **eliminare** chiamate.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDatabase:: M_hdbc](#m_hdbc)|Aprire l'handle di connessione Database Connectivity (ODBC) a un'origine dati. Tipo **HDBC**.|  
  
## <a name="remarks"></a>Note  
 Un'origine dati è un'istanza specifica di dati ospitati da un sistema di gestione di database (DBMS). Ad esempio Microsoft SQL Server, Microsoft Access, dBASE Borland e xBASE. È possibile avere uno o più `CDatabase` oggetti attivi in un momento nell'applicazione.  
  
> [!NOTE]
>  Se si lavora con le classi di oggetti DAO (Data Access), anziché le classi di Open Database Connectivity (ODBC), utilizzare una classe [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) invece. Per ulteriori informazioni, vedere l'articolo [Panoramica: programmazione di Database](../../data/data-access-programming-mfc-atl.md).  
  
 Per utilizzare `CDatabase`, costruire un `CDatabase` oggetto e chiamare il relativo `OpenEx` funzione membro. Verrà aperta una connessione. Quando si creano quindi `CRecordset` oggetti per l'uso l'origine dati connessa, passare al costruttore del recordset un puntatore al `CDatabase` oggetto. Al termine dell'utilizzo della connessione, chiamare il **Chiudi** membro funzione ed eliminare definitivamente il `CDatabase` oggetto. **Chiudi** chiude tutti i recordset non sia stato precedentemente chiuso.  
  
 Per ulteriori informazioni su `CDatabase`, vedere gli articoli [origine dati (ODBC)](../../data/odbc/data-source-odbc.md) e [Panoramica: programmazione di Database](../../data/data-access-programming-mfc-atl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDatabase`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  
  
##  <a name="begintrans"></a>CDatabase::BeginTrans  
 Chiamare questa funzione membro per iniziare una transazione con l'origine dati connessa.  
  
```  
BOOL BeginTrans();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la chiamata ha avuto esito positivo e delle modifiche viene eseguito solo manualmente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Una transazione è costituita da uno o più chiamate al `AddNew`, **modifica**, **eliminare**, e **aggiornamento** funzioni membro di un `CRecordset` oggetto. Prima di iniziare una transazione, il `CDatabase` oggetto deve già siano stato associato all'origine dati chiamando il relativo `OpenEx` o **aprire** funzione membro. Per terminare la transazione, chiamare [CommitTrans](#committrans) per accettare tutte le modifiche apportate all'origine dati (e procedere) o chiamare [Rollback](#rollback) per interrompere l'intera transazione. Chiamare **BeginTrans** dopo aprire tutti i recordset coinvolti nella transazione e come vicino effettivi operazioni di aggiornamento possibili.  
  
> [!CAUTION]
>  A seconda del driver ODBC apertura di un recordset prima di chiamare **BeginTrans** potrebbe causare problemi quando si chiama **Rollback**. È consigliabile controllare il driver in uso. Ad esempio, quando si utilizza il driver Microsoft Access incluso in Microsoft ODBC Desktop Driver Pack 3.0, è necessario considerare i requisiti del motore di database Jet che non possono iniziare una transazione in qualsiasi database che dispone di un cursore aperto. Nelle classi di database MFC, un cursore aperto significa open `CRecordset` oggetto. Per ulteriori informazioni, vedere [68 Nota tecnica](../../mfc/tn068-performing-transactions-with-the-microsoft-access-7-odbc-driver.md).  
  
 **BeginTrans** possono anche bloccare i record dei dati nel server, a seconda della concorrenza richiesta e le funzionalità dell'origine dati. Per informazioni sul blocco dei dati, vedere l'articolo [Recordset: blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md).  
  
 Transazioni definite dall'utente sono illustrate nell'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
 **BeginTrans** consente di stabilire lo stato in cui la sequenza delle transazioni può essere annullata (invertito). Per creare un nuovo stato per i ripristini, eseguire il commit di qualsiasi transazione corrente, quindi chiamare **BeginTrans** nuovamente.  
  
> [!CAUTION]
>  La chiamata **BeginTrans** nuovamente senza chiamare **CommitTrans** o **Rollback** è un errore.  
  
 Chiamare il [CanTransact](#cantransact) funzione membro per determinare se il driver supporta le transazioni per un determinato database. È inoltre necessario chiamare [GetCursorCommitBehavior](#getcursorcommitbehavior) e [GetCursorRollbackBehavior](#getcursorrollbackbehavior) per determinare il supporto per la conservazione del cursore.  
  
 Per ulteriori informazioni sulle transazioni, vedere l'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
### <a name="example"></a>Esempio  
  Vedere l'articolo [transazione: esecuzione di una transazione in un Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).  
  
##  <a name="bindparameters"></a>CDatabase::BindParameters  
 Eseguire l'override `BindParameters` quando è necessario associare i parametri prima di chiamare [CDatabase:: ExecuteSQL](#executesql).  
  
```  
virtual void BindParameters(HSTMT hstmt);
```  
  
### <a name="parameters"></a>Parametri  
 `hstmt`  
 L'handle di istruzione ODBC per il quale si desidera associare i parametri.  
  
### <a name="remarks"></a>Note  
 Questo approccio è utile quando il risultato non è necessario impostare da una stored procedure.  
  
 Nell'override, chiamare **SQLBindParameters** e le relative funzioni ODBC per associare i parametri. MFC chiama la sostituzione prima della chiamata a `ExecuteSQL`. Non è necessario chiamare **SQLPrepare**; `ExecuteSQL` chiamate **SQLExecDirect** ed Elimina definitivamente il **hstmt**, che viene utilizzata una sola volta.  
  
##  <a name="cancel"></a>CDatabase::Cancel  
 Chiamare questa funzione membro per richiedere che l'origine dati annullare un'operazione asincrona in corso o un processo da un secondo thread.  
  
```  
void Cancel();
```  
  
### <a name="remarks"></a>Note  
 Si noti che le classi ODBC MFC non utilizzano l'elaborazione asincrona; Per eseguire un'operazione asincrona, è necessario chiamare direttamente la funzione API ODBC [SQLSetConnectOption](https://msdn.microsoft.com/library/ms713564.aspx). Per ulteriori informazioni, vedere [esecuzione asincrona](https://msdn.microsoft.com/library/ms713563.aspx) in Windows SDK.  
  
##  <a name="cantransact"></a>CDatabase::CanTransact  
 Chiamare questa funzione membro per determinare se il database consente alle transazioni.  
  
```  
BOOL CanTransact() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se diverso da zero utilizzando questo recordset `CDatabase` oggetto consentire le transazioni; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Per informazioni sulle transazioni, vedere l'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
##  <a name="canupdate"></a>CDatabase::CanUpdate  
 Chiamare questa funzione membro per determinare se il `CDatabase` oggetto consente aggiornamenti.  
  
```  
BOOL CanUpdate() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la `CDatabase` oggetto consente aggiornamenti; in caso contrario, 0, che indica uno che sono stati passati **TRUE** in `bReadOnly` quando aperto il `CDatabase` oggetto o che l'origine dati stessa è di sola lettura. L'origine dati è di sola lettura se una chiamata alla funzione API ODBC **SQLGetInfo** per **SQL_DATASOURCE_READ_ONLY** restituisce "y".  
  
### <a name="remarks"></a>Note  
 Non tutti i driver supportano gli aggiornamenti.  
  
##  <a name="cdatabase"></a>CDatabase::CDatabase  
 Costruisce un oggetto `CDatabase`.  
  
```  
CDatabase();
```  
  
### <a name="remarks"></a>Note  
 Dopo la costruzione dell'oggetto, è necessario chiamare il relativo `OpenEx` o **aprire** funzione membro per stabilire una connessione a un'origine dati specificata.  
  
 È possibile fare in modo da incorporare la `CDatabase` oggetto nella classe del documento.  
  
### <a name="example"></a>Esempio  
 In questo esempio viene illustrato l'utilizzo `CDatabase` in un `CDocument`-classe derivata.  
  
 [!code-cpp[NVC_MFCDatabase#9](../../mfc/codesnippet/cpp/cdatabase-class_1.h)]  
  
 [!code-cpp[NVC_MFCDatabase#10](../../mfc/codesnippet/cpp/cdatabase-class_2.cpp)]  
  
##  <a name="close"></a>CDatabase::Close  
 Chiamare questa funzione membro se si desidera disconnettere da un'origine dati.  
  
```  
virtual void Close();
```  
  
### <a name="remarks"></a>Note  
 È necessario chiudere tutti i recordset associati il `CDatabase` prima di chiamare questa funzione membro dell'oggetto. Poiché **Chiudi** non elimina il `CDatabase` dell'oggetto, è possibile riutilizzare l'oggetto aprendo una nuova connessione per la stessa origine dati o un'origine dati diversa.  
  
 Tutte in sospeso `AddNew` o **modifica** vengono annullate le istruzioni di recordset usando il database e viene eseguito il rollback di tutte le transazioni in sospeso. Tutti i recordset dipendenti il `CDatabase` oggetto vengono lasciati in uno stato non definito.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDatabase#12](../../mfc/codesnippet/cpp/cdatabase-class_3.cpp)]  
  
##  <a name="committrans"></a>CDatabase:: CommitTrans  
 Chiamare questa funzione membro al termine dell'esecuzione di transazioni.  
  
```  
BOOL CommitTrans();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se gli aggiornamenti siano stati correttamente eseguito il commit. in caso contrario 0. Se **CommitTrans** ha esito negativo, lo stato dell'origine dati è definito. È necessario controllare i dati per determinare lo stato.  
  
### <a name="remarks"></a>Note  
 Una transazione è costituita da una serie di chiamate per il `AddNew`, **modifica**, **eliminare**, e **aggiornamento** funzioni membro di un `CRecordset` oggetto che inizia con un chiamata al [BeginTrans](#begintrans) funzione membro. **CommitTrans** il commit della transazione. Per impostazione predefinita, gli aggiornamenti vengano eseguito il commit immediatamente. la chiamata **BeginTrans** provoca l'impegno di aggiornamenti per essere posticipata fino al **CommitTrans** viene chiamato.  
  
 Finché non si chiama **CommitTrans** per terminare una transazione, è possibile chiamare il [Rollback](#rollback) funzione membro per interrompere la transazione e lasciare l'origine dati nello stato originale. Per avviare una nuova transazione, chiamare **BeginTrans** nuovamente.  
  
 Per ulteriori informazioni sulle transazioni, vedere l'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
### <a name="example"></a>Esempio  
  Vedere l'articolo [transazione: esecuzione di una transazione in un Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).  
  
##  <a name="executesql"></a>CDatabase:: ExecuteSQL  
 Chiamare questa funzione membro quando è necessario eseguire un comando SQL direttamente.  
  
```  
void ExecuteSQL(LPCTSTR lpszSQL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszSQL`  
 Puntatore a una stringa con terminazione null che contiene un comando SQL valido per l'esecuzione. È possibile passare un [CString](../../atl-mfc-shared/reference/cstringt-class.md).  
  
### <a name="remarks"></a>Note  
 Creare il comando sotto forma di stringa con terminazione null. `ExecuteSQL`non restituisce i record dei dati. Se si desidera operano sui record, è possibile utilizzare un oggetto recordset.  
  
 La maggior parte dei comandi per un'origine dati vengono inviata tramite oggetti recordset che supportano i comandi per la selezione di dati, inserimento di nuovi record, l'eliminazione di record e la modifica di record. Tuttavia, non tutte le funzionalità ODBC sono direttamente supportata dalle classi di database, pertanto in alcuni casi potrebbe essere necessario effettuare una chiamata diretta di SQL con `ExecuteSQL`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDatabase#13](../../mfc/codesnippet/cpp/cdatabase-class_4.cpp)]  
  
##  <a name="getbookmarkpersistence"></a>CDatabase:: GetBookmarkPersistence  
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
|`SQL_BP_CLOSE`|I segnalibri sono validi dopo una **Requery** operazione.|  
|`SQL_BP_DELETE`|Il segnalibro per una riga è valido dopo un **eliminare** operazione in tale riga.|  
|`SQL_BP_DROP`|I segnalibri sono validi dopo una **Chiudi** operazione.|  
|`SQL_BP_SCROLL`|I segnalibri sono validi dopo qualsiasi **spostare** operazione. Indica semplicemente se i segnalibri sono supportati nell'oggetto Recordset, come restituito da `CRecordset::CanBookmark`.|  
|`SQL_BP_TRANSACTION`|I segnalibri sono validi dopo il commit o il rollback di un'operazione.|  
|`SQL_BP_UPDATE`|Il segnalibro per una riga è valido dopo un **aggiornamento** operazione in tale riga.|  
|`SQL_BP_OTHER_HSTMT`|I segnalibri associati a un oggetto Recordset sono validi in un secondo oggetto Recordset.|  
  
 Per ulteriori informazioni su questo valore restituito, vedere la funzione API ODBC **SQLGetInfo** in Windows SDK. Per ulteriori informazioni sui segnalibri, vedere l'articolo [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).  
  
##  <a name="getconnect"></a>CDatabase::GetConnect  
 Chiamare questa funzione membro per recuperare la stringa di connessione utilizzata durante la chiamata a `OpenEx` o `Open` connesso il `CDatabase` oggetto a un'origine dati.  
  
```  
const CString GetConnect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `const` [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente la stringa di connessione se `OpenEx` o `Open` è stato chiamato; in caso contrario, una stringa vuota.  
  
### <a name="remarks"></a>Note  
 Vedere [CDatabase:: Open](#open) per una descrizione delle modalità di creazione della stringa di connessione.  
  
##  <a name="getcursorcommitbehavior"></a>CDatabase:: GetCursorCommitBehavior  
 Chiamare questa funzione membro per determinare come un [CommitTrans](#committrans) operazione interessa i cursori di oggetti recordset aperto.  
  
```  
int GetCursorCommitBehavior() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che indica l'effetto delle transazioni per gli oggetti recordset aperto. Per informazioni dettagliate, vedere la sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 Nella tabella seguente sono elencati i possibili valori restituiti per `GetCursorCommitBehavior` e il relativo effetto sul set di record aperto.  
  
|Valore restituito|Effetto sugli oggetti CRecordset|  
|------------------|----------------------------------|  
|`SQL_CB_CLOSE`|Chiamare `CRecordset::Requery` subito dopo il commit della transazione.|  
|`SQL_CB_DELETE`|Chiamare `CRecordset::Close` subito dopo il commit della transazione.|  
|`SQL_CB_PRESERVE`|Procedere normalmente con `CRecordset` operazioni.|  
  
 Per ulteriori informazioni su questo valore restituito, vedere la funzione API ODBC **SQLGetInfo** in Windows SDK. Per ulteriori informazioni sulle transazioni, vedere l'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
##  <a name="getcursorrollbackbehavior"></a>CDatabase:: GetCursorRollbackBehavior  
 Chiamare questa funzione membro per determinare come un [Rollback](#rollback) operazione interessa i cursori di oggetti recordset aperto.  
  
```  
int GetCursorRollbackBehavior() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che indica l'effetto delle transazioni per gli oggetti recordset aperto. Per informazioni dettagliate, vedere la sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 Nella tabella seguente sono elencati i possibili valori restituiti per `GetCursorRollbackBehavior` e il relativo effetto sul set di record aperto.  
  
|Valore restituito|Effetto sugli oggetti CRecordset|  
|------------------|----------------------------------|  
|`SQL_CB_CLOSE`|Chiamare `CRecordset::Requery` subito dopo il rollback della transazione.|  
|`SQL_CB_DELETE`|Chiamare `CRecordset::Close` subito dopo il rollback della transazione.|  
|`SQL_CB_PRESERVE`|Procedere normalmente con `CRecordset` operazioni.|  
  
 Per ulteriori informazioni su questo valore restituito, vedere la funzione API ODBC **SQLGetInfo** in Windows SDK. Per ulteriori informazioni sulle transazioni, vedere l'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
##  <a name="getdatabasename"></a>CDatabase::GetDatabaseName  
 Chiamare questa funzione membro per recuperare il nome del database attualmente connesso (a condizione che l'origine dati definisce un oggetto denominato "database").  
  
```  
CString GetDatabaseName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente il nome del database se l'esito positivo; in caso contrario, un oggetto vuoto `CString`.  
  
### <a name="remarks"></a>Note  
 Questo non è lo stesso come il nome di origine dati (DSN) specificato nella `OpenEx` o **aprire** chiamare. Cosa `GetDatabaseName` restituisce dipende da ODBC. In generale, un database è una raccolta di tabelle. Se l'entità disponga di un nome, `GetDatabaseName` restituisce.  
  
 Potrebbe, ad esempio, da visualizzare il nome in un'intestazione. Se si verifica un errore durante il recupero del nome da ODBC, `GetDatabaseName` restituisce un oggetto vuoto **Cstring**.  
  
##  <a name="isopen"></a>CDatabase::IsOpen  
 Chiamare questa funzione membro per determinare se il `CDatabase` è attualmente collegato a un'origine dati.  
  
```  
BOOL IsOpen() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la `CDatabase` oggetto è attualmente connesso; in caso contrario 0.  
  
##  <a name="m_hdbc"></a>CDatabase:: M_hdbc  
 Contiene un handle per una connessione all'origine dati ODBC pubblico, ovvero "handle di connessione".  
  
### <a name="remarks"></a>Note  
 In genere, non si disporrà di alcuna necessità di accedere direttamente a questa variabile membro. Al contrario, il framework consente di allocare l'handle quando si chiama `OpenEx` o **aprire**. Il framework dealloca l'handle quando si chiama il **eliminare** gli operatori di `CDatabase` oggetto. Si noti che il **Chiudi** funzione membro non rilasciare l'handle.  
  
 In alcune circostanze, tuttavia, potrebbe essere necessario utilizzare direttamente l'handle. Ad esempio, se è necessario chiamare funzioni API ODBC direttamente anziché tramite la classe `CDatabase`, potrebbe essere necessario un handle di connessione da passare come parametro. Vedere l'esempio di codice riportato di seguito.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDatabase#15](../../mfc/codesnippet/cpp/cdatabase-class_5.cpp)]  
  
##  <a name="onsetoptions"></a>CDatabase::OnSetOptions  
 Il framework chiama questa funzione membro durante l'esecuzione diretta di un'istruzione SQL con il `ExecuteSQL` funzione membro.  
  
```  
virtual void OnSetOptions(HSTMT hstmt);
```  
  
### <a name="parameters"></a>Parametri  
 `hstmt`  
 L'handle di istruzione ODBC per i quali opzioni sono impostate.  
  
### <a name="remarks"></a>Note  
 `CRecordset::OnSetOptions`Inoltre, chiama questa funzione membro.  
  
 `OnSetOptions`Imposta il valore di timeout di accesso. Se sono state apportate le precedenti chiamate al `SetQueryTimeout` e la funzione membro, `OnSetOptions` riflette i valori correnti; in caso contrario, imposta i valori predefiniti.  
  
> [!NOTE]
>  Prima di MFC 4.2, `OnSetOptions` inoltre impostare la modalità di elaborazione per entrambi snychronous o asincrona. A partire da MFC 4.2, tutte le operazioni sono sincrone. Per eseguire un'operazione asincrona, è necessario effettuare una chiamata diretta alla funzione API ODBC **SQLSetPos**.  
  
 Non è necessario eseguire l'override `OnSetOptions` per modificare il valore di timeout. Per personalizzare il valore di timeout della query, chiamare invece `SetQueryTimeout` prima di creare un oggetto recordset. `OnSetOptions` utilizzeranno il nuovo valore. I valori impostati si applicano alle operazioni successive su tutti i recordset o chiamate SQL dirette.  
  
 Eseguire l'override `OnSetOptions` se si desidera impostare opzioni aggiuntive. L'override deve chiamare la classe di base `OnSetOptions` prima o dopo avere chiamato la funzione API ODBC **SQLSetStmtOption**. Seguire il metodo illustrato nell'implementazione predefinita del framework di `OnSetOptions`.  
  
##  <a name="open"></a>CDatabase:: Open  
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
 `lpszDSN`  
 Specifica un nome origine dati, ovvero un nome registrato con ODBC tramite Amministratore ODBC. Se viene specificato un valore DSN in `lpszConnect` (nel formato "DSN =\<origine dati >"), non deve essere specificato nuovamente `lpszDSN`. In questo caso, `lpszDSN` deve essere **NULL**. In caso contrario, è possibile passare **NULL** se si desidera presentare all'utente una finestra di dialogo origine dati in cui l'utente può selezionare un'origine dati. Per ulteriori informazioni, vedere la sezione Osservazioni.  
  
 `bExclusive`  
 Non è supportata in questa versione della libreria di classi. Attualmente, un errore di asserzione se questo parametro è **TRUE**. L'origine dati viene sempre aperto come condivisa (non esclusivo).  
  
 `bReadOnly`  
 **TRUE** se si prevede la connessione di sola lettura e per impedire l'aggiornamento all'origine dati. Tutti i dipendenti recordset ereditano l'attributo. Il valore predefinito è **FALSE**.  
  
 `lpszConnect`  
 Specifica una stringa di connessione. La stringa di connessione consente di concatenare informazioni, magari con un nome dell'origine dati, un ID utente valido nel file di dati, una stringa di autenticazione utente, password, se l'origine dati richiede una e altre informazioni. La stringa di connessione intero deve essere preceduta dalla stringa "ODBC". (maiuscole o minuscole). "ODBC"; stringa viene utilizzata per indicare che la connessione a un'origine dati ODBC. Ciò avviene per la compatibilità verso l'alto future versioni della libreria di classi potrebbero supportare le origini dati non ODBC.  
  
 `bUseCursorLib`  
 **TRUE** se si desidera che la DLL della libreria di cursori ODBC da caricare. La libreria di cursori nasconde alcune funzionalità del driver ODBC sottostante, impedendo l'utilizzo di dynaset (se il driver supporta li). I cursori soli è supportati se viene caricata la libreria di cursori sono snapshot statici e i cursori forward-only. Il valore predefinito è **TRUE**. Se si prevede di creare un oggetto recordset direttamente da `CRecordset` senza derivare da esso, non deve caricare la libreria di cursori.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la connessione viene eseguita correttamente; in caso contrario, 0 se l'utente sceglie Annulla quando verrà visualizzata una finestra di dialogo per altre informazioni di connessione. In tutti gli altri casi, il framework genera un'eccezione.  
  
### <a name="remarks"></a>Note  
 L'oggetto di database deve essere inizializzata prima che sia possibile utilizzarlo per creare un oggetto recordset.  
  
> [!NOTE]
>  La chiamata di [OpenEx](#openex) funzione membro è il modo migliore per connettersi a un'origine dati e inizializzare l'oggetto di database.  
  
 Se i parametri del **aprire** chiamata non contengono informazioni sufficienti per stabilire la connessione, il driver ODBC verrà visualizzata una finestra di dialogo per ottenere le informazioni necessarie da parte dell'utente. Quando si chiama **aprire**, la stringa di connessione, `lpszConnect`, viene archiviato in locale nel `CDatabase` oggetto ed è disponibile tramite la chiamata di [GetConnect](#getconnect) funzione membro.  
  
 Se si desidera, è possibile aprire la propria finestra di dialogo prima di chiamare **aprire** per ottenere informazioni da parte dell'utente, ad esempio una password, quindi aggiungere tali informazioni alla stringa di connessione si passa a **aprire**. Oppure è possibile salvare la stringa di connessione viene passato in modo da poterla riutilizzare alla successiva ora l'applicazione chiama **aprire** su un `CDatabase` oggetto.  
  
 È inoltre possibile utilizzare la stringa di connessione per più livelli di autorizzazione di accesso (per un altro `CDatabase` oggetto) o fornire altre informazioni specifiche dell'origine dati. Per ulteriori informazioni sulle stringhe di connessione, vedere il capitolo 5 in Windows SDK.  
  
 È possibile che un tentativo di connessione di timeout se, ad esempio, non è disponibile l'host DBMS. Se il tentativo di connessione non riesce, **aprire** genera un `CDBException`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDatabase#14](../../mfc/codesnippet/cpp/cdatabase-class_6.cpp)]  
  
##  <a name="openex"></a>:: OpenEx  
 Chiamare questa funzione membro per inizializzare un oggetto appena costruito `CDatabase` oggetto.  
  
```  
virtual BOOL OpenEx(
    LPCTSTR lpszConnectString,  
    DWORD dwOptions = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszConnectString`  
 Specifica una stringa di connessione ODBC. Ciò include il nome dell'origine dati, nonché altre informazioni facoltative, ad esempio un ID utente e una password. Ad esempio, "DSN = SQLServer_Source; UID = SA; PWD = abc123 "è una stringa di connessione. Si noti che se si passa **NULL** per `lpszConnectString`, una finestra di dialogo origine dati verrà chiesto di selezionare un'origine dati.  
  
 `dwOptions`  
 Maschera di bit che specifica una combinazione dei valori seguenti. Il valore predefinito è 0, vale a dire che il database verrà aperto come condivisa con accesso in scrittura, la DLL della libreria di cursori ODBC non verrà caricata e la finestra di dialogo di connessione ODBC verrà visualizzato solo se non sono disponibili informazioni sufficienti per stabilire la connessione.  
  
- **CDatabase::openExclusive** non supportata in questa versione della libreria di classi. Un'origine dati viene sempre aperto come condivisa (non esclusivo). Attualmente, un'asserzione ha esito negativo se si specifica questa opzione.  
  
- **CDatabase::openReadOnly** aprire l'origine dati in sola lettura.  
  
- **CDatabase:: useCursorLib** caricare la libreria di cursori ODBC DLL. La libreria di cursori nasconde alcune funzionalità del driver ODBC sottostante, impedendo l'utilizzo di dynaset (se il driver supporta li). I cursori soli è supportati se viene caricata la libreria di cursori sono snapshot statici e i cursori forward-only. Se si prevede di creare un oggetto recordset direttamente da `CRecordset` senza derivare da esso, non deve caricare la libreria di cursori.  
  
- **CDatabase::noOdbcDialog** non visualizzati ODBC connessione la finestra di dialogo, indipendentemente dal fatto che vengano fornite sufficienti informazioni di connessione.  
  
- **CDatabase::forceOdbcDialog** sempre visualizzare la finestra di dialogo di connessione ODBC.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la connessione viene eseguita correttamente; in caso contrario, 0 se l'utente sceglie Annulla quando verrà visualizzata una finestra di dialogo per altre informazioni di connessione. In tutti gli altri casi, il framework genera un'eccezione.  
  
### <a name="remarks"></a>Note  
 L'oggetto di database deve essere inizializzata prima che sia possibile utilizzarlo per creare un oggetto recordset.  
  
 Se il `lpszConnectString` parametro il `OpenEx` chiamata non contiene informazioni sufficienti per stabilire la connessione, il driver ODBC verrà visualizzata una finestra di dialogo per ottenere le informazioni necessarie da parte dell'utente, fornito non è stato impostato **CDatabase:: noOdbcDialog** o **CDatabase::forceOdbcDialog** nel `dwOptions` parametro. Quando si chiama `OpenEx`, la stringa di connessione, `lpszConnectString`, viene archiviato in modo privato il `CDatabase` oggetto ed è disponibile chiamando il [GetConnect](#getconnect) funzione membro.  
  
 Se si desidera, è possibile aprire la propria finestra di dialogo prima di chiamare `OpenEx` per ottenere informazioni da parte dell'utente, ad esempio una password e quindi aggiungere tali informazioni alla stringa di connessione si passa a `OpenEx`. Oppure è possibile salvare la stringa di connessione viene passato in modo da poterla riutilizzare alla successiva ora l'applicazione chiama `OpenEx` su un `CDatabase` oggetto.  
  
 È inoltre possibile utilizzare la stringa di connessione per più livelli di autorizzazione di accesso (per un altro `CDatabase` oggetto) o fornire altre informazioni specifiche dell'origine dati. Per ulteriori informazioni sulle stringhe di connessione, vedere il capitolo 6 nel *riferimento per programmatori ODBC*.  
  
 È possibile che un tentativo di connessione di timeout se, ad esempio, non è disponibile l'host DBMS. Se il tentativo di connessione non riesce, `OpenEx` genera un `CDBException`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDatabase#11](../../mfc/codesnippet/cpp/cdatabase-class_7.cpp)]  
  
##  <a name="rollback"></a>CDatabase:: rollback  
 Chiamare questa funzione membro per annullare le modifiche apportate durante una transazione.  
  
```  
BOOL Rollback();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la transazione è stata annullata; in caso contrario 0. Se un **Rollback** chiamata ha esito negativo, l'origine dati e la transazione stati sono definiti. Se **Rollback** restituisce 0, è necessario controllare l'origine dati per determinare lo stato.  
  
### <a name="remarks"></a>Note  
 Tutti `CRecordset` `AddNew`, **modifica**, **eliminare**, e **aggiornamento** chiamate eseguite dall'ultimo [BeginTrans](#begintrans) viene eseguito il rollback lo stato di cui si trovava al momento della chiamata.  
  
 Dopo una chiamata a **Rollback**, la transazione è su ed è necessario chiamare **BeginTrans** nuovamente per un'altra transazione. Il record corrente prima della chiamata **BeginTrans** diventa il record corrente nuovamente dopo **Rollback**.  
  
 Dopo un rollback, il record corrente prima del rollback rimane invariato. Per informazioni dettagliate sullo stato dell'oggetto recordset e l'origine dati dopo un rollback, vedere l'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
### <a name="example"></a>Esempio  
  Vedere l'articolo [transazione: esecuzione di una transazione in un Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).  
  
##  <a name="setlogintimeout"></a>CDatabase::SetLoginTimeout  
 Chiamare questa funzione membro, prima di chiamare `OpenEx` o **aprire** : per il numero predefinito di secondi consentito prima di dati di un tentativo di eseguire l'override timeout connessione di origine.  
  
```  
void SetLoginTimeout(DWORD dwSeconds);
```  
  
### <a name="parameters"></a>Parametri  
 `dwSeconds`  
 Il numero di secondi di attesa prima un tentativo di connessione del timeout.  
  
### <a name="remarks"></a>Note  
 Un tentativo di connessione potrebbe scadere se, ad esempio, non è disponibile nel sistema DBMS. Chiamare **SetLoginTimeout** dopo la costruzione di non inizializzato `CDatabase` oggetto ma prima di chiamare `OpenEx` o **aprire**.  
  
 Il valore predefinito per i timeout di accesso è 15 secondi. Non tutte le origini dati supportano la possibilità di specificare un valore di timeout di accesso. Se l'origine dati non supporta il timeout, ottenere output di traccia, ma non un'eccezione. Un valore pari a 0 indica "infinito".  
  
##  <a name="setquerytimeout"></a>CDatabase::SetQueryTimeout  
 Chiamare questa funzione membro per sostituire il numero predefinito di secondi di attesa prima del timeout di origine dati connessa successive operazioni.  
  
```  
void SetQueryTimeout(DWORD dwSeconds);
```  
  
### <a name="parameters"></a>Parametri  
 `dwSeconds`  
 Il numero di secondi di attesa prima di un tentativo di query timeout.  
  
### <a name="remarks"></a>Note  
 Un'operazione potrebbe essere previsto un timeout a causa di problemi di accesso di rete, il tempo di elaborazione di un numero eccessivo di query e così via. Chiamare `SetQueryTimeout` prima dell'apertura del recordset o prima di chiamare il recordset `AddNew`, **aggiornamento** o **eliminare** funzioni membro, se si desidera modificare il valore di timeout della query. L'impostazione influisce su tutte le successive **aprire**, `AddNew`, **aggiornamento**, e **eliminare** chiamate a tutti i recordset associati a questo `CDatabase` oggetto. Il valore di timeout di query per un oggetto recordset dopo l'apertura non modifica il valore per il recordset. Ad esempio, le successive **spostare** operazioni non utilizzano il nuovo valore.  
  
 Il valore predefinito di timeout delle query è 15 secondi. Non tutte le origini dati supportano la possibilità di impostare un valore di timeout della query. Se si imposta un valore di timeout query pari a 0, si verifica alcun timeout. la comunicazione con l'origine dati potrebbe non rispondere. Questo comportamento può essere utile durante lo sviluppo. Se l'origine dati non supporta il timeout, ottenere output di traccia, ma non un'eccezione.  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CRecordset](../../mfc/reference/crecordset-class.md)

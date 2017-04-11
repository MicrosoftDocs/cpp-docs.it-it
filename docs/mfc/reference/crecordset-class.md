---
title: La classe CRecordset | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CRecordset
- AFXDB/CRecordset
- AFXDB/CRecordset::CRecordset
- AFXDB/CRecordset::AddNew
- AFXDB/CRecordset::CanAppend
- AFXDB/CRecordset::CanBookmark
- AFXDB/CRecordset::Cancel
- AFXDB/CRecordset::CancelUpdate
- AFXDB/CRecordset::CanRestart
- AFXDB/CRecordset::CanScroll
- AFXDB/CRecordset::CanTransact
- AFXDB/CRecordset::CanUpdate
- AFXDB/CRecordset::CheckRowsetError
- AFXDB/CRecordset::Close
- AFXDB/CRecordset::Delete
- AFXDB/CRecordset::DoBulkFieldExchange
- AFXDB/CRecordset::DoFieldExchange
- AFXDB/CRecordset::Edit
- AFXDB/CRecordset::FlushResultSet
- AFXDB/CRecordset::GetBookmark
- AFXDB/CRecordset::GetDefaultConnect
- AFXDB/CRecordset::GetDefaultSQL
- AFXDB/CRecordset::GetFieldValue
- AFXDB/CRecordset::GetODBCFieldCount
- AFXDB/CRecordset::GetODBCFieldInfo
- AFXDB/CRecordset::GetRecordCount
- AFXDB/CRecordset::GetRowsetSize
- AFXDB/CRecordset::GetRowsFetched
- AFXDB/CRecordset::GetRowStatus
- AFXDB/CRecordset::GetSQL
- AFXDB/CRecordset::GetStatus
- AFXDB/CRecordset::GetTableName
- AFXDB/CRecordset::IsBOF
- AFXDB/CRecordset::IsDeleted
- AFXDB/CRecordset::IsEOF
- AFXDB/CRecordset::IsFieldDirty
- AFXDB/CRecordset::IsFieldNull
- AFXDB/CRecordset::IsFieldNullable
- AFXDB/CRecordset::IsOpen
- AFXDB/CRecordset::Move
- AFXDB/CRecordset::MoveFirst
- AFXDB/CRecordset::MoveLast
- AFXDB/CRecordset::MoveNext
- AFXDB/CRecordset::MovePrev
- AFXDB/CRecordset::OnSetOptions
- AFXDB/CRecordset::OnSetUpdateOptions
- AFXDB/CRecordset::Open
- AFXDB/CRecordset::RefreshRowset
- AFXDB/CRecordset::Requery
- AFXDB/CRecordset::SetAbsolutePosition
- AFXDB/CRecordset::SetBookmark
- AFXDB/CRecordset::SetFieldDirty
- AFXDB/CRecordset::SetFieldNull
- AFXDB/CRecordset::SetLockingMode
- AFXDB/CRecordset::SetParamNull
- AFXDB/CRecordset::SetRowsetCursorPosition
- AFXDB/CRecordset::SetRowsetSize
- AFXDB/CRecordset::Update
- AFXDB/CRecordset::m_hstmt
- AFXDB/CRecordset::m_nFields
- AFXDB/CRecordset::m_nParams
- AFXDB/CRecordset::m_pDatabase
- AFXDB/CRecordset::m_strFilter
- AFXDB/CRecordset::m_strSort
dev_langs:
- C++
helpviewer_keywords:
- database records [C++]
- CRecordset class
- ODBC recordsets [C++], CRecordset objects
- sets of records [C++]
ms.assetid: dd89a21d-ef39-4aab-891b-1e373d67c855
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
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: 9271608528699e93fa7b8315f8ef2fdd5ae1e54d
ms.lasthandoff: 04/04/2017

---
# <a name="crecordset-class"></a>Classe CRecordset
Rappresenta un set di record selezionati da un'origine dati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CRecordset : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecordset::CRecordset](#crecordset)|Costruisce un oggetto `CRecordset`. La classe derivata deve fornire un costruttore che chiama questo.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecordset::AddNew](#addnew)|Prepara per l'aggiunta di un nuovo record. Chiamare `Update` per completare l'aggiunta.|  
|[CRecordset::CanAppend](#canappend)|Restituisce zero se è possibile aggiungere nuovi record per il recordset tramite il `AddNew` funzione membro.|  
|[CRecordset:: CanBookmark](#canbookmark)|Restituisce un diverso da zero se il set di record supporta segnalibri.|  
|[CRecordset::Cancel](#cancel)|Annulla un'operazione asincrona o un processo da un secondo thread.|  
|[CRecordset::CancelUpdate](#cancelupdate)|Annulla gli aggiornamenti in sospeso a causa di un `AddNew` o `Edit` operazione.|  
|[CRecordset::CanRestart](#canrestart)|Restituisce se diverso da zero `Requery` può essere chiamato per eseguire nuovamente la query del recordset.|  
|[CRecordset::CanScroll](#canscroll)|Restituisce un diverso da zero se è possibile scorrere i record.|  
|[CRecordset::CanTransact](#cantransact)|Restituisce zero se l'origine dati supporta le transazioni.|  
|[CRecordset::CanUpdate](#canupdate)|Restituisce zero se il recordset può essere aggiornato (è possibile aggiungere, aggiornare o eliminare i record).|  
|[CRecordset::CheckRowsetError](#checkrowseterror)|Chiamato per gestire gli errori generati durante il recupero di massa di record.|  
|[CRecordset:: Close](#close)|Chiude l'oggetto recordset e ODBC **HSTMT** associato.|  
|[CRecordset::Delete](#delete)|Elimina il record corrente dal recordset. È necessario scorrere in modo esplicito a un altro record dopo l'eliminazione.|  
|[CRecordset::DoBulkFieldExchange](#dobulkfieldexchange)|Chiamata eseguita per lo scambio di massa di righe di dati dall'origine dati al recordset. Implementa bulk exchange di campi di record (RFX di massa).|  
|[CRecordset::DoFieldExchange](#dofieldexchange)|Chiamata eseguita per lo scambio di dati (in entrambe le direzioni) tra i membri di dati del campo del recordset e il record corrispondente nell'origine dati. Implementa campi di record (RFX).|  
|[CRecordset::Edit](#edit)|Prepara per le modifiche al record corrente. Chiamare `Update` per completare la modifica.|  
|[CRecordset::FlushResultSet](#flushresultset)|Restituisce diverso da zero se è presente un altro risultato impostato da recuperare, quando si utilizza una query predefinita.|  
|[CRecordset::GetBookmark](#getbookmark)|Assegna il valore del segnalibro di un record per l'oggetto parametro.|  
|[CRecordset:: GetDefaultConnect](#getdefaultconnect)|Chiamato per ottenere la stringa di connessione predefinita.|  
|[CRecordset::GetDefaultSQL](#getdefaultsql)|Chiamato per ottenere la stringa SQL predefinita da eseguire.|  
|[CRecordset:: GetFieldValue](#getfieldvalue)|Restituisce il valore di un campo in un recordset.|  
|[CRecordset::GetODBCFieldCount](#getodbcfieldcount)|Restituisce il numero di campi del recordset.|  
|[CRecordset::GetODBCFieldInfo](#getodbcfieldinfo)|Restituisce i tipi specifici di informazioni sui campi in un recordset.|  
|[CRecordset::GetRecordCount](#getrecordcount)|Restituisce il numero di record del recordset.|  
|[CRecordset::GetRowsetSize](#getrowsetsize)|Restituisce il numero di record da recuperare durante un'operazione di recupero singolo.|  
|[CRecordset::GetRowsFetched](#getrowsfetched)|Restituisce il numero effettivo di righe recuperate durante un'operazione di recupero.|  
|[CRecordset::GetRowStatus](#getrowstatus)|Restituisce lo stato della riga dopo un'operazione di recupero.|  
|[CRecordset::GetSQL](#getsql)|Ottiene la stringa SQL utilizzata per selezionare i record per il recordset.|  
|[CRecordset::GetStatus](#getstatus)|Ottiene lo stato dell'oggetto recordset: l'indice del record corrente e se è stato ottenuto un conteggio finale dei record.|  
|[CRecordset::GetTableName](#gettablename)|Ottiene il nome della tabella su cui è basato il recordset.|  
|[CRecordset::IsBOF](#isbof)|Restituisce un diverso da zero se il recordset è stato posizionato prima del primo record. Non sono presenti record corrente.|  
|[CRecordset::IsDeleted](#isdeleted)|Restituisce zero se il recordset è posizionato su un record eliminato.|  
|[CRecordset::IsEOF](#iseof)|Restituisce un diverso da zero se il recordset è stato posizionato dopo l'ultimo record. Non sono presenti record corrente.|  
|[CRecordset::IsFieldDirty](#isfielddirty)|Restituisce un diverso da zero se il campo specificato nel record corrente è stato modificato.|  
|[CRecordset::IsFieldNull](#isfieldnull)|Restituisce diverso da zero se il campo specificato nel record corrente è null (non ha valore).|  
|[CRecordset::IsFieldNullable](#isfieldnullable)|Restituisce zero se il campo specificato nel record corrente può essere impostato su null (nessun valore con).|  
|[CRecordset::IsOpen](#isopen)|Restituisce se diverso da zero `Open` è stato chiamato in precedenza.|  
|[CRecordset](#move)|Posiziona il recordset in un numero specificato di record del record corrente in entrambe le direzioni.|  
|[CRecordset::MoveFirst](#movefirst)|Posiziona il record corrente sul primo record del recordset. Verificare la presenza di `IsBOF` prima.|  
|[CRecordset::MoveLast](#movelast)|Posiziona il record corrente sull'ultimo record o l'ultimo set di righe. Verificare la presenza di `IsEOF` prima.|  
|[CRecordset::MoveNext](#movenext)|Posiziona il record corrente del record successivo o nel set di righe successivo. Verificare la presenza di `IsEOF` prima.|  
|[CRecordset::MovePrev](#moveprev)|Posiziona il record corrente del record precedente o nel set di righe precedenti. Verificare la presenza di `IsBOF` prima.|  
|[CRecordset::OnSetOptions](#onsetoptions)|Chiamata eseguita per impostare le opzioni (utilizzate nella selezione) per l'istruzione ODBC specificata.|  
|[CRecordset::OnSetUpdateOptions](#onsetupdateoptions)|Chiamata eseguita per impostare le opzioni (usate su update) per l'istruzione ODBC specificata.|  
|[CRecordset:: Open](#open)|Apre il recordset recuperando la tabella o eseguendo la query rappresentata dal recordset.|  
|[CRecordset::RefreshRowset](#refreshrowset)|Aggiorna i dati e lo stato delle righe specificate.|  
|[CRecordset:: Requery](#requery)|Esegue la query del recordset nuovamente per aggiornare il record selezionato.|  
|[CRecordset:: SetAbsolutePosition](#setabsoluteposition)|Posiziona il recordset nel record corrispondente al numero di record specificato.|  
|[CRecordset::SetBookmark](#setbookmark)|Posiziona il recordset del record specificata dal segnalibro.|  
|[CRecordset::SetFieldDirty](#setfielddirty)|Contrassegna il campo specificato nel record corrente, come è stato modificato.|  
|[CRecordset::SetFieldNull](#setfieldnull)|Imposta il valore del campo specificato nel record corrente su null (nessun valore con).|  
|[CRecordset::SetLockingMode](#setlockingmode)|Imposta la modalità di blocco per blocco (predefinito) "ottimistica" o "blocco pessimistico". Determina come i record sono bloccati per gli aggiornamenti.|  
|[CRecordset::SetParamNull](#setparamnull)|Imposta il parametro specificato su null (nessun valore con).|  
|[CRecordset::SetRowsetCursorPosition](#setrowsetcursorposition)|Posiziona il cursore sulla riga del set di righe specificata.|  
|[CRecordset::SetRowsetSize](#setrowsetsize)|Specifica il numero di record da recuperare durante un'operazione di recupero.|  
|[CRecordset:: Update](#update)|Completa un' `AddNew` o `Edit` operazione salvando i dati nuovi o modificati nell'origine dati.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecordset:: M_hstmt](#m_hstmt)|Contiene l'handle di istruzione ODBC per il recordset. Digitare `HSTMT`.|  
|[CRecordset::m_nFields](#m_nfields)|Contiene il numero di membri di dati di campo nel recordset. Digitare `UINT`.|  
|[CRecordset::m_nParams](#m_nparams)|Contiene il numero di membri di dati di parametro nel recordset. Digitare `UINT`.|  
|[CRecordset::m_pDatabase](#m_pdatabase)|Contiene un puntatore al `CDatabase` oggetto attraverso il quale il recordset è connesso a un'origine dati.|  
|[CRecordset:: M_strfilter](#m_strfilter)|Contiene un `CString` che specifica un Structured Query Language (SQL) `WHERE` clausola. Utilizzata come filtro per selezionare solo i record che soddisfano determinati criteri.|  
|[CRecordset::m_strSort](#m_strsort)|Contiene un `CString` che specifica un database SQL `ORDER BY` clausola. Utilizzata per controllare come vengono ordinati i record.|  
  
## <a name="remarks"></a>Note  
 Nota come "Recordset" `CRecordset` gli oggetti vengono utilizzati in genere in due formati: dynaset e snapshot. Dynaset rimane sincronizzato con gli aggiornamenti dei dati apportati da altri utenti. Uno snapshot è una visualizzazione statica dei dati. Ogni modulo rappresenta un set di record stabilita al momento che il recordset è aperto, ma quando si passa a un record in un dynaset, riflette le modifiche apportate successivamente al record, da altri utenti o da altri recordset nell'applicazione.  
  
> [!NOTE]
>  Se si lavora con le classi di oggetti DAO (Data Access), anziché le classi di Open Database Connectivity (ODBC), utilizzare una classe [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) invece. Per ulteriori informazioni, vedere l'articolo [Panoramica: programmazione di Database](../../data/data-access-programming-mfc-atl.md).  
  
 Per utilizzare il tipo di recordset, è in genere derivare una classe recordset specifiche dell'applicazione da `CRecordset`. Recordset selezionare i record da un'origine dati e sarà quindi possibile:  
  
-   Scorrere i record.  
  
-   Aggiornare i record e specificare una modalità di blocco.  
  
-   Filtrare il recordset per vincolare i record vengono selezionati tra quelli disponibili nell'origine dati.  
  
-   Ordinare il recordset.  
  
-   Parametrizzare il recordset per personalizzare la selezione con le informazioni non note fino alla fase di esecuzione.  
  
 Per utilizzare la classe, aprire un database e creare un oggetto recordset, il costruttore si passa un puntatore per il `CDatabase` oggetto. Chiamare quindi il recordset **aprire** funzione membro, in cui è possibile specificare se l'oggetto è di tipo dynaset o uno snapshot. La chiamata **aprire** consente di selezionare dati dall'origine dati. Dopo l'oggetto recordset è aperto, è possibile utilizzare i membri di dati e funzioni membro per scorrere i record e operano su di essi. Le operazioni disponibili variano a seconda se l'oggetto è un dynaset o snapshot, se è aggiornabile o di sola lettura (ciò dipende la funzionalità dell'origine dati Open Database Connectivity (ODBC)), e se è stato implementato il recupero di massa di righe. Per aggiornare i record che possono sono stati modificati o aggiunti dopo la **aprire** chiamare, chiamare l'oggetto **Requery** funzione membro. Chiamare l'oggetto **Chiudi** membro funzione e dopo aver terminato l'eliminazione dell'oggetto.  
  
 In una classe `CRecordset` di classi, campi di record (RFX) o exchange di massa di campi di record (RFX di massa) viene usato per supportare la lettura e aggiornamento dei campi di record.  
  
 Per ulteriori informazioni sullo scambio di campo di record e Recordset, vedere gli articoli [Panoramica: programmazione di Database](../../data/data-access-programming-mfc-atl.md), [Recordset (ODBC)](../../data/odbc/recordset-odbc.md), [Recordset: il recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md), e [trasferimento di campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md). Per una certa attenzione alla dynaset e snapshot, vedere gli articoli [Dynaset](../../data/odbc/dynaset.md) e [Snapshot](../../data/odbc/snapshot.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CRecordset`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  
  
##  <a name="addnew"></a>CRecordset::AddNew  
 Prepara per l'aggiunta di un nuovo record alla tabella.  
  
```  
virtual void AddNew();
```  
  
### <a name="remarks"></a>Note  
 È necessario chiamare il [Requery](#requery) funzione membro per visualizzare il record appena aggiunto. I campi del record sono inizialmente Null. (Nella terminologia dei database, Null significa "Nessun valore having" e non è identico **NULL** in C++.) Per completare l'operazione, è necessario chiamare il [aggiornamento](#update) funzione membro. **Aggiornamento** Salva le modifiche apportate all'origine dati.  
  
> [!NOTE]
>  Se è stato implementato il recupero di massa di righe, non è possibile chiamare `AddNew`. Il risultato sarà un'asserzione non riuscita. Sebbene classe `CRecordset` non fornisce un meccanismo per l'aggiornamento di massa di righe di dati, è possibile scrivere funzioni personalizzate utilizzando la funzione API ODBC **SQLSetPos**. Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 `AddNew`Prepara un record di nuovo e vuoto utilizzando i membri dati di campo del recordset. Dopo aver chiamato `AddNew`, impostare i valori desiderati nei membri dati di campo del recordset. (Non è necessario chiamare il [modifica](#edit) funzione membro per questo scopo, utilizzare **modifica** solo per i record esistenti.) Quando si chiama successivamente **aggiornamento**, modificati i valori nei membri di dati di campo vengono salvati nell'origine dati.  
  
> [!CAUTION]
>  Se si passa a un nuovo record prima di chiamare **aggiornamento**, il nuovo record viene perso e non viene fornito alcun messaggio di avviso.  
  
 Se l'origine dati supporta le transazioni, è possibile rendere il `AddNew` chiamare parte di una transazione. Per ulteriori informazioni sulle transazioni, vedere la classe [CDatabase](../../mfc/reference/cdatabase-class.md). Si noti che è necessario chiamare [CDatabase::BeginTrans](../../mfc/reference/cdatabase-class.md#begintrans) prima di chiamare `AddNew`.  
  
> [!NOTE]
>  Per dynaset, nuovi record vengono aggiunti al recordset, come l'ultimo record. Aggiunta di record non vengono aggiunti agli snapshot; è necessario chiamare **Requery** per aggiornare il recordset.  
  
 Non è consentito chiamare `AddNew` per un oggetto recordset i cui **aprire** funzione membro non è stata chiamata. Oggetto `CDBException` viene generata se si chiama `AddNew` per un oggetto recordset che non può essere aggiunto alla fine. È possibile determinare se il recordset è aggiornabile chiamando [CanAppend](#canappend).  
  
 Per ulteriori informazioni, vedere gli articoli seguenti: [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md), [Recordset: aggiunta, aggiornamento e l'eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md), e [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
### <a name="example"></a>Esempio  
 Vedere l'articolo [transazione: esecuzione di una transazione in un Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).  
  
##  <a name="canappend"></a>CRecordset::CanAppend  
 Determina se il recordset aperto in precedenza consente di aggiungere nuovi record.  
  
```  
BOOL CanAppend() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il recordset consente l'aggiunta di nuovi record; in caso contrario 0. `CanAppend`verrà restituito 0 se è stato aperto il recordset in sola lettura.  
  
##  <a name="canbookmark"></a>CRecordset:: CanBookmark  
 Determina se il recordset consente di contrassegnare i record di utilizzo dei segnalibri.  
  
```  
BOOL CanBookmark() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il set di record supporta segnalibri; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione è indipendente di **CRecordset:: useBookmarks** opzione il `dwOptions` parametro del [aprire](#open) funzione membro. `CanBookmark`indica se il driver ODBC specificato e un cursore tipo di supporto segnalibri. **CRecordset:: useBookmarks** indica se i segnalibri saranno disponibili, fornite sono supportate.  
  
> [!NOTE]
>  I segnalibri non sono supportati nei recordset forward-only.  
  
 Per ulteriori informazioni sui segnalibri e di navigazione del recordset, vedere gli articoli [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md) e [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).  
  
##  <a name="cancel"></a>CRecordset::Cancel  
 Richieste che l'origine dati Annulla un'operazione asincrona in corso o un processo da un secondo thread.  
  
```  
void Cancel();
```  
  
### <a name="remarks"></a>Note  
 Si noti che le classi ODBC MFC non utilizzano l'elaborazione asincrona; Per eseguire un'operazione asincrona, è necessario chiamare direttamente la funzione API ODBC **SQLSetConnectOption**. Per ulteriori informazioni, vedere l'argomento "Esecuzione asincrona delle funzioni" nel *Guida per programmatori ODBC SDK*.  
  
##  <a name="cancelupdate"></a>CRecordset::CancelUpdate  
 Consente di annullare eventuali aggiornamenti, causati da in sospeso un [modifica](#edit) o [AddNew](#addnew) operazione prima di [aggiornamento](#update) viene chiamato.  
  
```  
void CancelUpdate();
```  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Questa funzione membro non è applicabile per i recordset che utilizza righe di massa, poiché non è possibile chiamare tali recordset **modifica**, `AddNew`, o **aggiornamento**. Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Se il controllo dei campi modificati automatico è abilitato, `CancelUpdate` ripristinerà le variabili membro per i valori che avevano prima **modifica** o `AddNew` è stato chiamato; in caso contrario, le modifiche del valore rimarrà. Per impostazione predefinita, il controllo di campo automatico è abilitato quando il recordset è aperto. Per disabilitarlo, è necessario specificare il **CRecordset:: Nodirtyfieldcheck** nel `dwOptions` parametro del [aprire](#open) funzione membro.  
  
 Per ulteriori informazioni sull'aggiornamento dei dati, vedere l'articolo [Recordset: aggiunta, aggiornamento e l'eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md).  
  
##  <a name="canrestart"></a>CRecordset::CanRestart  
 Determina se il recordset consente il riavvio di query (per aggiornare i relativi record) chiamando il **Requery** funzione membro.  
  
```  
BOOL CanRestart() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è consentito requery; in caso contrario 0.  
  
##  <a name="canscroll"></a>CRecordset::CanScroll  
 Determina se il recordset consente lo scorrimento.  
  
```  
BOOL CanScroll() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il recordset consente lo scorrimento; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su lo scorrimento, vedere l'articolo [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).  
  
##  <a name="cantransact"></a>CRecordset::CanTransact  
 Determina se il recordset consente alle transazioni.  
  
```  
BOOL CanTransact() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il recordset consente transazioni. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere l'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
##  <a name="canupdate"></a>CRecordset::CanUpdate  
 Determina se il recordset può essere aggiornato.  
  
```  
BOOL CanUpdate() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il recordset può essere aggiornato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Potrebbe essere un recordset di sola lettura se l'origine dati sottostante è di sola lettura o se è stato specificato **CRecordset** nel `dwOptions` parametro quando il recordset aperto.  
  
##  <a name="checkrowseterror"></a>CRecordset::CheckRowsetError  
 Chiamato per gestire gli errori generati durante il recupero di massa di record.  
  
```  
virtual void CheckRowsetError(RETCODE nRetCode);
```  
  
### <a name="parameters"></a>Parametri  
 `nRetCode`  
 Codice restituito di una funzione API ODBC. Per informazioni dettagliate, vedere la sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro virtuale gestisce gli errori che si verificano quando vengono recuperati i record, ed è utile durante il recupero di massa di righe. Si consiglia di eseguire l'override `CheckRowsetError` per implementare la propria gestione degli errori.  
  
 `CheckRowsetError`viene chiamato automaticamente in un'operazione di spostamento del cursore, ad esempio **aprire**, **Requery**, o qualsiasi **spostare** operazione. Viene passato il valore restituito della funzione API ODBC **SQLExtendedFetch**. Nella tabella seguente sono elencati i valori possibili per il `nRetCode` parametro.  
  
|nRetCode|Descrizione|  
|--------------|-----------------|  
|**SQL_SUCCESS**|Funzione è stata completata correttamente. Nessuna informazione aggiuntiva disponibile.|  
|**SQL_SUCCESS_WITH_INFO**|Funzione è stata completata correttamente, possibilmente con un errore non irreversibile. Informazioni aggiuntive possono essere ottenute chiamando **SQLError**.|  
|**SQL_NO_DATA_FOUND**|Sono state recuperate tutte le righe dal set di risultati.|  
|**SQL_ERROR**|Funzione non riuscita. Informazioni aggiuntive possono essere ottenute chiamando **SQLError**.|  
|**SQL_INVALID_HANDLE**|Funzione non riuscita a causa di un handle di ambiente non valido, un handle di connessione o un handle di istruzione. Ciò indica un errore di programmazione. Nessuna informazione aggiuntiva disponibile da **SQLError**.|  
|`SQL_STILL_EXECUTING`|Una funzione che è stata avviata in modo asincrono è ancora in esecuzione. Si noti che per impostazione predefinita, MFC non verrà mai passare questo valore su `CheckRowsetError`; MFC continuerà chiamata **SQLExtendedFetch** fino a quando non è più restituisce `SQL_STILL_EXECUTING`.|  
  
 Per ulteriori informazioni su **SQLError**, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
##  <a name="close"></a>CRecordset:: Close  
 Chiude il recordset.  
  
```  
virtual void Close();
```  
  
### <a name="remarks"></a>Note  
 ODBC **HSTMT** e tutta la memoria allocato per il recordset framework vengono deallocati. In genere dopo la chiamata **Chiudi**, si elimina l'oggetto recordset C++ se è stato allocato con **nuova**.  
  
 È possibile chiamare **aprire** nuovamente dopo la chiamata **Chiudi**. Ciò consente di riutilizzare l'oggetto recordset. L'alternativa consiste nel chiamare **Requery**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDatabase #17](../../mfc/codesnippet/cpp/crecordset-class_1.cpp)]  
  
##  <a name="crecordset"></a>CRecordset::CRecordset  
 Costruisce un oggetto `CRecordset`.  
  
```  
CRecordset(CDatabase* pDatabase = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pDatabase`  
 Contiene un puntatore a un `CDatabase` oggetto o il valore **NULL**. In caso contrario **NULL** e `CDatabase` dell'oggetto **aprire** funzione membro non è stata chiamata per connetterlo all'origine dati, il recordset tenta di aprirlo automaticamente durante il proprio **aprire** chiamare. Se si passa **NULL**, `CDatabase` oggetto viene costruito e connesso mediante le informazioni di origine dati specificata quando è derivata della classe recordset con ClassWizard.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare `CRecordset` direttamente o derivare una classe specifica dell'applicazione da `CRecordset`. È possibile utilizzare ClassWizard per derivare le classi di recordset.  
  
> [!NOTE]
>  Una classe derivata *deve* fornisce il proprio costruttore. Nel costruttore della classe derivata, chiamare il costruttore `CRecordset::CRecordset`, passando i parametri appropriati lungo.  
  
 Passare **NULL** al costruttore del recordset per avere un `CDatabase` oggetto creato e collegato automaticamente per l'utente. Si tratta di una sintassi abbreviata utile che non richiede la creazione e connessione un `CDatabase` oggetto prima della creazione del recordset.  
  
### <a name="example"></a>Esempio  
 Per ulteriori informazioni, vedere l'articolo [Recordset: dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md).  
  
##  <a name="delete"></a>CRecordset::Delete  
 Elimina il record corrente.  
  
```  
virtual void Delete();
```  
  
### <a name="remarks"></a>Note  
 Dopo un'eliminazione ha esito positivo, i membri dati di campo del recordset vengono impostati su un valore Null e, è necessario chiamare in modo esplicito uno del **spostare** funzioni per spostarsi dal record eliminato. Quando si sposta dal record eliminato, non è possibile tornare a esso. Se l'origine dati supporta le transazioni, è possibile rendere il **eliminare** chiamare parte di una transazione. Per ulteriori informazioni, vedere l'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
> [!NOTE]
>  Se è stato implementato il recupero di massa di righe, non è possibile chiamare **eliminare**. Il risultato sarà un'asserzione non riuscita. Sebbene classe `CRecordset` non fornisce un meccanismo per l'aggiornamento di massa di righe di dati, è possibile scrivere funzioni personalizzate utilizzando la funzione API ODBC **SQLSetPos**. Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
> [!CAUTION]
>  Il recordset deve essere aggiornabile e deve esistere un record valido nel set di record corrente quando si chiama **eliminare**; in caso contrario, si verifica un errore. Ad esempio, se si elimina un record ma non è possibile scorrere a un nuovo record prima di chiamare **eliminare** nuovamente, **eliminare** genera un [CDBException](../../mfc/reference/cdbexception-class.md).  
  
 A differenza di [AddNew](#addnew) e [modifica](#edit), una chiamata a **eliminare** non è seguito da una chiamata a [aggiornamento](#update). Se un **eliminare** chiamata ha esito negativo, i dati del campo membri vengono lasciati invariati.  
  
### <a name="example"></a>Esempio  
 Questo esempio viene illustrato un oggetto recordset creato sul frame di una funzione. Nell'esempio si presuppone l'esistenza di `m_dbCust`, una variabile membro di tipo `CDatabase` già connesso all'origine dati.  
  
 [!code-cpp[NVC_MFCDatabase #18](../../mfc/codesnippet/cpp/crecordset-class_2.cpp)]  
  
##  <a name="dobulkfieldexchange"></a>CRecordset::DoBulkFieldExchange  
 Chiamata eseguita per lo scambio di massa di righe di dati dall'origine dati al recordset. Implementa bulk exchange di campi di record (RFX di massa).  
  
```  
virtual void DoBulkFieldExchange(CFieldExchange* pFX);
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) oggetto. Il framework già avere imposterà l'oggetto per specificare un contesto per l'operazione di scambio di campo.  
  
### <a name="remarks"></a>Note  
 Quando viene implementato il recupero di massa di righe, il framework chiama questa funzione membro per trasferire automaticamente i dati dall'origine dati per l'oggetto recordset. `DoBulkFieldExchange`Inoltre, associa i membri di dati del parametro, se disponibili, per i segnaposto dei parametri nella stringa dell'istruzione SQL per la selezione del recordset.  
  
 Se non è implementato il recupero di massa di righe, il framework chiama [DoFieldExchange](#dofieldexchange). Per implementare il recupero di massa di righe, è necessario specificare il `CRecordset::useMultiRowFetch` opzione del `dwOptions` parametro il [aprire](#open) funzione membro.  
  
> [!NOTE]
> `DoBulkFieldExchange`è disponibile solo se si utilizza una classe derivata da `CRecordset`. Se è stato creato un oggetto recordset direttamente da `CRecordset`, è necessario chiamare il [GetFieldValue](#getfieldvalue) funzione membro per recuperare i dati.  
  
 Scambio di massa di campi di record (RFX di massa) è simile per il trasferimento di campi di record (RFX). Dati vengono trasferiti automaticamente dall'origine dati per l'oggetto recordset. Tuttavia, non è possibile chiamare `AddNew`, **modifica**, **eliminare**, o **aggiornamento** per trasferire le modifiche all'origine dati. Classe `CRecordset` attualmente non fornisce un meccanismo per l'aggiornamento di massa di righe di dati; tuttavia, è possibile scrivere funzioni personalizzate utilizzando la funzione API ODBC **SQLSetPos**.  
  
 Si noti che ClassWizard non supporta exchange di campi di record di massa; Pertanto, è necessario eseguire l'override `DoBulkFieldExchange` manualmente, scrivendo chiamate alle funzioni RFX di massa. Per ulteriori informazioni su queste funzioni, vedere l'argomento [funzioni RFX](../../mfc/reference/record-field-exchange-functions.md).  
  
 Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). Per informazioni correlate, vedere l'articolo [trasferimento di campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).  
  
##  <a name="dofieldexchange"></a>CRecordset::DoFieldExchange  
 Chiamata eseguita per lo scambio di dati (in entrambe le direzioni) tra i membri di dati del campo del recordset e il record corrispondente nell'origine dati. Implementa campi di record (RFX).  
  
```  
virtual void DoFieldExchange(CFieldExchange* pFX);
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) oggetto. Il framework già avere imposterà l'oggetto per specificare un contesto per l'operazione di scambio di campo.  
  
### <a name="remarks"></a>Note  
 Quando non è implementato il recupero di massa di righe, il framework chiama questa funzione membro per scambiare automaticamente i dati tra i membri di dati del campo dell'oggetto recordset e le corrispondenti colonne del record corrente nell'origine dati. `DoFieldExchange`Inoltre, associa i membri di dati del parametro, se disponibili, per i segnaposto dei parametri nella stringa dell'istruzione SQL per la selezione del recordset.  
  
 Se viene implementato il recupero di massa di righe, il framework chiama [DoBulkFieldExchange](#dobulkfieldexchange). Per implementare il recupero di massa di righe, è necessario specificare il `CRecordset::useMultiRowFetch` opzione del `dwOptions` parametro il [aprire](#open) funzione membro.  
  
> [!NOTE]
> `DoFieldExchange`è disponibile solo se si utilizza una classe derivata da `CRecordset`. Se è stato creato un oggetto recordset direttamente da `CRecordset`, è necessario chiamare il [GetFieldValue](#getfieldvalue) funzione membro per recuperare i dati.  
  
 Lo scambio di dati di campo, denominato il trasferimento di campi di record (RFX), funziona in entrambe le direzioni: dal record nell'origine dei dati per l'oggetto recordset e dai membri di dati di campo dell'oggetto recordset ai campi del record nell'origine dati.  
  
 La sola azione che è in genere necessario eseguire per implementare `DoFieldExchange` per il recordset derivato classe consiste nel creare la classe con ClassWizard e specificare i tipi di dati e i nomi dei membri di dati di campo. È anche possibile aggiungere codice a ciò che scrive ClassWizard per specificare i membri dati di parametro o per gestire tutte le colonne associate in modo dinamico. Per ulteriori informazioni, vedere l'articolo [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).  
  
 Quando si dichiara la classe derivata recordset con ClassWizard, la procedura guidata scrive un override di `DoFieldExchange` , che è simile all'esempio seguente:  
  
 [!code-cpp[NVC_MFCDatabase #19](../../mfc/codesnippet/cpp/crecordset-class_3.cpp)]  
  
 Per ulteriori informazioni sulle funzioni RFX, vedere l'argomento [funzioni RFX](../../mfc/reference/record-field-exchange-functions.md).  
  
 Per ulteriori esempi e informazioni dettagliate su `DoFieldExchange`, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md). Per informazioni generali su RFX, vedere l'articolo [Record Field Exchange](../../data/odbc/record-field-exchange-rfx.md).  
  
##  <a name="edit"></a>CRecordset::Edit  
 Consente di apportare modifiche al record corrente.  
  
```  
virtual void Edit();
```  
  
### <a name="remarks"></a>Note  
 Dopo aver chiamato **modifica**, è possibile modificare i membri di dati di campo reimpostando direttamente i relativi valori. L'operazione viene completata quando si chiama successivamente il [aggiornamento](#update) funzione membro per salvare le modifiche nell'origine dati.  
  
> [!NOTE]
>  Se è stato implementato il recupero di massa di righe, non è possibile chiamare **modifica**. Il risultato sarà un'asserzione non riuscita. Sebbene classe `CRecordset` non fornisce un meccanismo per l'aggiornamento di massa di righe di dati, è possibile scrivere funzioni personalizzate utilizzando la funzione API ODBC **SQLSetPos**. Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 **Modifica** Salva i valori dei membri di dati del recordset. Se si chiama **modifica**, apportare modifiche, quindi chiamare **modifica** nuovamente, vengono ripristinati i valori del record di fossero prima del primo **modifica** chiamare.  
  
 In alcuni casi, si desidera aggiornare una colonna, rendendo Null (che non contengono dati). A tale scopo, chiamare [SetFieldNull](#setfieldnull) con un parametro di **TRUE** per contrassegnare il campo Null; in questo modo anche la colonna da aggiornare. Se si desidera un campo per scrivere l'origine dati anche se non è stato modificato il valore, chiamare [SetFieldDirty](#setfielddirty) con un parametro di **TRUE**. Questo procedimento funziona anche se il campo ha valore Null.  
  
 Se l'origine dati supporta le transazioni, è possibile rendere il **modifica** chiamare parte di una transazione. Si noti che è necessario chiamare [CDatabase::BeginTrans](../../mfc/reference/cdatabase-class.md#begintrans) prima di chiamare **modifica** e dopo aver aperto il recordset. Si noti inoltre che la chiamata [CDatabase:: CommitTrans](../../mfc/reference/cdatabase-class.md#committrans) non è un sostituto per chiamare il metodo **aggiornamento** per completare il **modifica** operazione. Per ulteriori informazioni sulle transazioni, vedere la classe [CDatabase](../../mfc/reference/cdatabase-class.md).  
  
 A seconda della modalità di blocco corrente, il record in corso l'aggiornamento potrebbe essere bloccato da **modifica** finché non si chiama **aggiornamento** o scorrimento a un altro record, o potrebbe essere bloccato solo durante il **modifica** chiamare. È possibile modificare la modalità di blocco con [SetLockingMode](#setlockingmode).  
  
 Il valore precedente del record corrente viene ripristinato se si passa a un nuovo record prima di chiamare **aggiornamento**. Oggetto `CDBException` viene generata se si chiama **modifica** per un oggetto recordset non può essere aggiornato o se non sono presenti record corrente.  
  
 Per ulteriori informazioni, vedere gli articoli [transazione (ODBC)](../../data/odbc/transaction-odbc.md) e [Recordset: blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDatabase n. 20](../../mfc/codesnippet/cpp/crecordset-class_4.cpp)]  
  
##  <a name="flushresultset"></a>CRecordset::FlushResultSet  
 Recupera il set successivo di risultati di una query predefinita (stored procedure), se sono presenti più set di risultati.  
  
```  
BOOL FlushResultSet();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se sono presenti più set di risultati da recuperare; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare `FlushResultSet` solo quando si è finito completamente con il cursore nel set di risultati corrente. Si noti che quando si recupera il risultato successivo impostato chiamando `FlushResultSet`, il cursore non è valido in tale set di risultati, è necessario chiamare il [MoveNext](#movenext) funzione membro dopo la chiamata `FlushResultSet`.  
  
 Se una query predefinita viene utilizzato un parametro di output o i parametri di input/output, è necessario chiamare `FlushResultSet` fino a quando non viene restituito `FALSE` (il valore 0), per ottenere questi valori di parametro.  
  
 `FlushResultSet`chiama la funzione API ODBC `SQLMoreResults`. Se `SQLMoreResults` restituisce `SQL_ERROR` o `SQL_INVALID_HANDLE`, quindi `FlushResultSet` genererà un'eccezione. Per ulteriori informazioni su `SQLMoreResults`, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 La stored procedure è necessario aver associato i campi se si desidera chiamare `FlushResultSet`.  
  
### <a name="example"></a>Esempio  
 Il codice seguente si presuppone che `COutParamRecordset` è un `CRecordset`-oggetto derivato in base a una query con un parametro di input e un parametro di output predefinita e con più set di risultati. Si noti la struttura del [DoFieldExchange](#dofieldexchange) eseguire l'override.  
  
 [!code-cpp[NVC_MFCDatabase #21](../../mfc/codesnippet/cpp/crecordset-class_5.cpp)]  
  
 [!code-cpp[N. 22 NVC_MFCDatabase](../../mfc/codesnippet/cpp/crecordset-class_6.cpp)]  
  
##  <a name="getbookmark"></a>CRecordset::GetBookmark  
 Ottiene il valore di segnalibro per il record corrente.  
  
```  
void GetBookmark(CDBVariant& varBookmark);
```  
  
### <a name="parameters"></a>Parametri  
 `varBookmark`  
 Un riferimento a un [CDBVariant](../../mfc/reference/cdbvariant-class.md) oggetto che rappresenta il segnalibro sul record corrente.  
  
### <a name="remarks"></a>Note  
 Per determinare se i segnalibri sono supportati nel recordset, chiamare [CanBookmark](#canbookmark). Per rendere disponibili i segnalibri se sono supportate, è necessario impostare il **CRecordset:: useBookmarks** opzione il `dwOptions` parametro del [aprire](#open) funzione membro.  
  
> [!NOTE]
>  Se i segnalibri non supportato o non disponibile, la chiamata `GetBookmark` genererà un'eccezione. I segnalibri non sono supportati nei recordset forward-only.  
  
 `GetBookmark`Assegna il valore del segnalibro del record corrente da un `CDBVariant` oggetto. Per tornare al record specifico in qualsiasi momento dopo il passaggio a un altro record, chiamare [SetBookmark](#setbookmark) con i corrispondenti `CDBVariant` oggetto.  
  
> [!NOTE]
>  Dopo alcune operazioni di recordset, i segnalibri potrebbero non essere più validi. Ad esempio, se si chiama `GetBookmark` seguito da **Requery**, potrebbe non essere in grado di restituire al record con `SetBookmark`. Chiamare [CDatabase:: GetBookmarkPersistence](../../mfc/reference/cdatabase-class.md#getbookmarkpersistence) per verificare se è possibile chiamare `SetBookmark`.  
  
 Per ulteriori informazioni sui segnalibri e di navigazione del recordset, vedere gli articoli [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md) e [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).  
  
##  <a name="getdefaultconnect"></a>CRecordset:: GetDefaultConnect  
 Chiamato per ottenere la stringa di connessione predefinita.  
  
```  
virtual CString GetDefaultConnect();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` che contiene la stringa di connessione predefinito.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione membro per ottenere la stringa di connessione predefinita per l'origine dati su cui è basato il recordset. ClassWizard implementa questa funzione per l'utente identificando la stessa origine dati che è utilizzare nella creazione guidata classe per ottenere informazioni su tabelle e colonne. Si verrà probabilmente pratico di fare affidamento su questa connessione predefinita durante lo sviluppo dell'applicazione. Ma la connessione predefinita potrebbe non essere appropriata per gli utenti dell'applicazione. Se è questo il caso, reimplementare questa funzione, eliminando la versione di ClassWizard. Per ulteriori informazioni sulle stringhe di connessione, vedere l'articolo [origine dati (ODBC)](../../data/odbc/data-source-odbc.md).  
  
##  <a name="getdefaultsql"></a>CRecordset::GetDefaultSQL  
 Chiamato per ottenere la stringa SQL predefinita da eseguire.  
  
```  
virtual CString GetDefaultSQL();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` che contiene l'istruzione SQL predefinita.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione membro per ottenere l'istruzione SQL predefinita su cui è basato il recordset. Potrebbe trattarsi di un nome di tabella o un database SQL **selezionare** istruzione.  
  
 Definire indirettamente l'istruzione SQL predefinita mediante la dichiarazione della classe recordset con ClassWizard e ClassWizard esegue questa attività per l'utente.  
  
 Se la stringa dell'istruzione SQL è necessario per uso personale, chiamare `GetSQL`, che restituisce l'istruzione SQL utilizzata per selezionare i record del recordset quando è stato aperto. È possibile modificare la stringa SQL predefinita nell'override della classe di `GetDefaultSQL`. Ad esempio, è possibile specificare una chiamata a una query predefinita utilizzando un **CHIAMARE** istruzione. (Si noti, tuttavia, se Modifica `GetDefaultSQL`, è necessario modificare `m_nFields` deve corrispondere al numero di colonne nell'origine dati.)  
  
 Per ulteriori informazioni, vedere l'articolo [Recordset: dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md).  
  
> [!CAUTION]
>  Il nome della tabella sarà vuoto se il framework Impossibile identificare un nome di tabella, se sono stati specificati più nomi di tabella o una **CHIAMARE** istruzione non può essere interpretata. Si noti che quando si utilizza un **CHIAMARE** istruzione, non è necessario inserire uno spazio vuoto tra la parentesi graffa e **CHIAMARE** (parola chiave), né si devono inserire gli spazi vuoti prima della parentesi graffa o prima di **selezionare** parola chiave in un **selezionare** istruzione.  
  
##  <a name="getfieldvalue"></a>CRecordset:: GetFieldValue  
 Recupera i dati dei campi nel record corrente.  
  
```  
void GetFieldValue(
    LPCTSTR lpszName,  
    CDBVariant& varValue,  
    short nFieldType = DEFAULT_FIELD_TYPE);

 
void GetFieldValue(
    short nIndex,  
    CDBVariant& varValue,  
    short nFieldType = DEFAULT_FIELD_TYPE);

 
void GetFieldValue(
    short nIndex,  
    CStringA& strValue);

 
void GetFieldValue(
    short nIndex,  
    CStringW& strValue);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Il nome di un campo.  
  
 *varValu*e  
 Un riferimento a un [CDBVariant](../../mfc/reference/cdbvariant-class.md) oggetto in cui verrà archiviato il valore del campo.  
  
 `nFieldType`  
 Il tipo di dati C ODBC del campo. Utilizzando il valore predefinito, **DEFAULT_FIELD_TYPE**, forza `GetFieldValue` per determinare il tipo di dati C dal tipo di dati SQL, in base alla tabella seguente. In caso contrario, è possibile specificare i dati direttamente digitare o scegliere un tipo di dati compatibile. ad esempio, è possibile archiviare qualsiasi tipo di dati in **SQL_C_CHAR**.  
  
|Tipo di dati C|Tipo di dati SQL|  
|-----------------|-------------------|  
|**SQL_C_BIT**|**SQL_BIT**|  
|**SQL_C_UTINYINT**|**SQL_TINYINT**|  
|**SQL_C_SSHORT**|**SQL_SMALLINT**|  
|**SQL_C_SLONG**|**SQL_INTEGER**|  
|**SQL_C_FLOAT**|**SQL_REAL**|  
|**SQL_C_DOUBLE**|**SQL_FLOATSQL_DOUBLE**|  
|**SQL_C_TIMESTAMP**|**SQL_DATESQL_TIMESQL_TIMESTAMP**|  
|**SQL_C_CHAR**|**SQL_NUMERICSQL_DECIMALSQL_BIGINTSQL_CHARSQL_VARCHARSQL_LONGVARCHAR**|  
|**SQL_C_BINARY**|**SQL_BINARYSQL_VARBINARYSQL_LONGVARBINARY**|  
  
 Per ulteriori informazioni sui tipi di dati ODBC, vedere gli argomenti "Tipi di dati di SQL" e "Tipi di dati C" nell'appendice D la [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `nIndex`  
 Indice in base zero del campo.  
  
 `strValue`  
 Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto in cui verrà archiviato il valore del campo convertito in testo, indipendentemente dal tipo di dati del campo.  
  
### <a name="remarks"></a>Note  
 È possibile cercare un campo in base al nome o in base all'indice. È possibile archiviare il valore del campo in entrambi un `CDBVariant` oggetto o un `CString` oggetto.  
  
 Se è stato implementato il recupero di massa di righe, il record corrente viene sempre posizionato sul primo record in un set di righe. Per utilizzare `GetFieldValue` su un record all'interno di un determinato set di righe, è necessario chiamare prima il [SetRowsetCursorPosition](#setrowsetcursorposition) funzione membro per spostare il cursore alla riga desiderata all'interno di tale set di righe. Chiamare quindi `GetFieldValue` per tale riga. Per implementare il recupero di massa di righe, è necessario specificare il `CRecordset::useMultiRowFetch` opzione del `dwOptions` parametro il [aprire](#open) funzione membro.  
  
 È possibile utilizzare `GetFieldValue` per recuperare i campi in modo dinamico in fase di esecuzione anziché in modo statico associarli in fase di progettazione. Ad esempio, se è stato dichiarato un oggetto recordset direttamente da `CRecordset`, è necessario utilizzare `GetFieldValue` per recuperare i dati di campo; il trasferimento di campi di record (RFX) o exchange di massa di campi di record (RFX di massa), non è implementata.  
  
> [!NOTE]
>  Se si dichiara un oggetto recordset senza la derivazione da `CRecordset`, non ha caricato la libreria di cursori ODBC. La libreria di cursori è necessario disporre di un oggetto recordset almeno una colonna associata. Tuttavia, quando si usa `CRecordset` direttamente, nessuna delle colonne sono associata. Le funzioni membro [:: OpenEx](../../mfc/reference/cdatabase-class.md#openex) e [CDatabase:: Open](../../mfc/reference/cdatabase-class.md#open) controllano se verrà caricata la libreria di cursori.  
  
 `GetFieldValue`chiama la funzione API ODBC **SQLGetData**. Se il driver restituisce il valore **SQL_NO_TOTAL** per la lunghezza effettiva del valore del campo, `GetFieldValue` genera un'eccezione. Per ulteriori informazioni su **SQLGetData**, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente sono illustrate le chiamate a `GetFieldValue` per un oggetto recordset dichiarato direttamente da `CRecordset`.  
  
 [!code-cpp[N. 23 NVC_MFCDatabase](../../mfc/codesnippet/cpp/crecordset-class_7.cpp)]  
  
> [!NOTE]
>  A differenza della classe DAO `CDaoRecordset`, `CRecordset` non esiste un `SetFieldValue` funzione membro. Se si crea un oggetto direttamente da `CRecordset`, è in sola lettura.  
  
 Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
##  <a name="getodbcfieldcount"></a>CRecordset::GetODBCFieldCount  
 Recupera il numero totale di campi dell'oggetto recordset.  
  
```  
short GetODBCFieldCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di campi del recordset.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sulla creazione di recordset, vedere l'articolo [Recordset: creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md).  
  
##  <a name="getodbcfieldinfo"></a>CRecordset::GetODBCFieldInfo  
 Ottiene informazioni sui campi del recordset.  
  
```  
void GetODBCFieldInfo(
    LPCTSTR lpszName,  
    CODBCFieldInfo& fieldinfo);

 
void GetODBCFieldInfo(
    short nIndex,  
    CODBCFieldInfo& fieldinfo);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Il nome di un campo.  
  
 `fieldinfo`  
 Un riferimento a un `CODBCFieldInfo` struttura.  
  
 `nIndex`  
 Indice in base zero del campo.  
  
### <a name="remarks"></a>Note  
 Una versione della funzione consente di cercare un campo in base al nome. L'altra versione consente di cercare un campo in base all'indice.  
  
 Per una descrizione di informazioni restituite, vedere il [CODBCFieldInfo](../../mfc/reference/codbcfieldinfo-structure.md) struttura.  
  
 Per ulteriori informazioni sulla creazione di recordset, vedere l'articolo [Recordset: creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md).  
  
##  <a name="getrecordcount"></a>CRecordset::GetRecordCount  
 Determina le dimensioni dell'oggetto recordset.  
  
```  
long GetRecordCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di record del recordset. 0 se il recordset non contiene record; oppure -1 se non è possibile determinare il numero di record.  
  
### <a name="remarks"></a>Note  
  
> [!CAUTION]
>  Il numero di record è gestito come un "limite massimo," il numero più alto record ancora considerato come l'utente si sposta tra i record. Il numero totale di record è noto solo dopo che l'utente è stato spostato oltre l'ultimo record. Per motivi di prestazioni, il conteggio non viene aggiornato quando si chiama `MoveLast`. Per contare i record, chiamare `MoveNext` ripetutamente finché `IsEOF` restituisce diverso da zero. Aggiunta di un record tramite **CRecordset:AddNew** e **aggiornamento** aumenta il conteggio; l'eliminazione di un record tramite `CRecordset::Delete` riduce il conteggio.  
  
##  <a name="getrowsetsize"></a>CRecordset::GetRowsetSize  
 Ottiene l'impostazione corrente per il numero di righe da recuperare durante un'operazione di recupero specificato.  
  
```  
DWORD GetRowsetSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di righe da recuperare durante un'operazione di recupero specificato.  
  
### <a name="remarks"></a>Note  
 Se si utilizza il recupero di massa di righe, le dimensioni del set di righe predefinito quando si apre il recordset sono 25; in caso contrario, è 1.  
  
 Per implementare il recupero di massa di righe, è necessario specificare la `CRecordset::useMultiRowFetch` opzione la `dwOptions` parametro del [aprire](#open) funzione membro. Per modificare l'impostazione per le dimensioni del set di righe, chiamare [SetRowsetSize](#setrowsetsize).  
  
 Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
##  <a name="getrowsfetched"></a>CRecordset::GetRowsFetched  
 Determina il numero di record effettivamente recuperato dopo un'operazione di recupero.  
  
```  
DWORD GetRowsFetched() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di righe recuperate dall'origine dati dopo un'operazione di recupero specificato.  
  
### <a name="remarks"></a>Note  
 Ciò è utile quando è stato implementato il recupero di massa di righe. La dimensione del set di righe indica in genere il numero di righe da recuperare da un'operazione di recupero; Tuttavia, il numero totale di righe nel recordset interesserà anche il numero di righe verrà recuperato in un set di righe. Ad esempio, se il recordset è 10 record con un'impostazione di dimensioni del set di righe pari a 4, quindi eseguire i cicli di recordset chiamando `MoveNext` comporterà il set di righe finale contenenti solo 2 record.  
  
 Per implementare il recupero di massa di righe, è necessario specificare la `CRecordset::useMultiRowFetch` opzione la `dwOptions` parametro del [aprire](#open) funzione membro. Per specificare le dimensioni del set di righe, chiamare [SetRowsetSize](#setrowsetsize).  
  
 Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[N. 24 NVC_MFCDatabase](../../mfc/codesnippet/cpp/crecordset-class_8.cpp)]  
  
##  <a name="getrowstatus"></a>CRecordset::GetRowStatus  
 Ottiene lo stato di una riga nel set di righe corrente.  
  
```  
WORD GetRowStatus(WORD wRow) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `wRow`  
 Basato su una posizione di una riga nel set di righe corrente. Questo valore può variare da 1 per le dimensioni del set di righe.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di stato per la riga. Per informazioni dettagliate, vedere la sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 `GetRowStatus`Restituisce un valore che indica una qualsiasi modifica nello stato per la riga dall'ultimo recuperati dall'origine dei dati, o che nessuna riga corrispondente a `wRow` è stata recuperata. Nella tabella seguente sono elencati i valori restituiti possibili.  
  
|Valore di stato|Descrizione|  
|------------------|-----------------|  
|`SQL_ROW_SUCCESS`|La riga è invariata.|  
|`SQL_ROW_UPDATED`|La riga è stata aggiornata.|  
|`SQL_ROW_DELETED`|La riga è stata eliminata.|  
|`SQL_ROW_ADDED`|La riga è stata aggiunta.|  
|`SQL_ROW_ERROR`|La riga è Impossibile recuperare i a causa di un errore.|  
|`SQL_ROW_NOROW`|È presente alcuna riga che corrisponde a `wRow`.|  
  
 Per ulteriori informazioni, vedere la funzione API ODBC **SQLExtendedFetch** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getstatus"></a>CRecordset::GetStatus  
 Determina l'indice del record corrente nel recordset e verificato l'ultimo record.  
  
```  
void GetStatus(CRecordsetStatus& rStatus) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `rStatus`  
 Un riferimento a un **CRecordsetStatus** oggetto. Per altre informazioni, vedere la sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 `CRecordset`tenta di tenere traccia dell'indice, ma in alcuni casi si potrebbe non essere possibile. Vedere [GetRecordCount](#getrecordcount) per una spiegazione.  
  
 Il **CRecordsetStatus** struttura ha il formato seguente:  
  
 `struct CRecordsetStatus`  
  
 `{`  
  
 `long m_lCurrentRecord;`  
  
 `BOOL m_bRecordCountFinal;`  
  
 `};`  
  
 I due membri di **CRecordsetStatus** hanno i significati seguenti:  
  
- **m_lCurrentRecord** contiene l'indice in base zero del record corrente del recordset, se noto. Se non è possibile determinare l'indice, questo membro contiene **AFX_CURRENT_RECORD_UNDEFINED** (-2). Se `IsBOF` è **TRUE** vuoto recordset o tentativo di scorrere prima primo record, quindi **m_lCurrentRecord** è impostato su **AFX_CURRENT_RECORD_BOF** (-1). Se su del primo record, quindi è impostata su 0, in secondo luogo registrare 1 e così via.  
  
- **m_bRecordCountFinal** Nonzero se è stato determinato il numero totale di record del recordset. In genere, questo deve essere eseguito a partire dall'inizio del recordset e chiamando `MoveNext` fino a quando non `IsEOF` restituisce diverso da zero. Se questo membro è zero, il record conteggio restituito da `GetRecordCount`, se non -1, è solo un conteggio "limite superiore" dei record.  
  
##  <a name="getsql"></a>CRecordset::GetSQL  
 Chiamare questa funzione membro per ottenere l'istruzione SQL che è stato utilizzato per selezionare i record del recordset quando è stato aperto.  
  
```  
const CString& GetSQL() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **const** fanno riferimento a un `CString` che contiene l'istruzione SQL.  
  
### <a name="remarks"></a>Note  
 In genere si tratterà di un database SQL **selezionare** istruzione. La stringa restituita da `GetSQL` è di sola lettura.  
  
 La stringa restituita da `GetSQL` è in genere è diverso da qualsiasi stringa passati al recordset nel `lpszSQL` parametro per il **aprire** funzione membro. In questo modo il recordset crea un'istruzione SQL completa in base a cui si è passato a **aprire**, specificato con ClassWizard, ciò che è stato specificato nella **m_strFilter** e `m_strSort` membri dati e i parametri è stato specificato. Per informazioni dettagliate su come il recordset crea l'istruzione SQL, vedere l'articolo [Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md).  
  
> [!NOTE]
>  Chiamare questa funzione membro solo dopo la chiamata [aprire](#open).  
  
##  <a name="gettablename"></a>CRecordset::GetTableName  
 Ottiene il nome della tabella di SQL in cui si basa la query del recordset.  
  
```  
const CString& GetTableName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **const** fanno riferimento a un `CString` che contiene la tabella di nome, se quest'ultimo è in base a una tabella; in caso contrario, una stringa vuota.  
  
### <a name="remarks"></a>Note  
 `GetTableName`è valido solo se il recordset è basato su una tabella, non un join di più tabelle o una query predefinita (stored procedure). Il nome è di sola lettura.  
  
> [!NOTE]
>  Chiamare questa funzione membro solo dopo la chiamata [aprire](#open).  
  
##  <a name="isbof"></a>CRecordset::IsBOF  
 Restituisce un diverso da zero se il recordset è stato posizionato prima del primo record. Non sono presenti record corrente.  
  
```  
BOOL IsBOF() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il recordset non contiene record o se è eseguito lo scorrimento all'indietro prima del primo record; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro prima che lo scorrimento di record a record sapere se sono già state completate prima del primo record del recordset. È inoltre possibile utilizzare `IsBOF` insieme a `IsEOF` per determinare se il recordset contiene record o è vuoto. Immediatamente dopo la chiamata **aprire**, se il recordset non contiene record, `IsBOF` restituisce diverso da zero. Quando si apre un recordset con almeno un record, il primo record è il record corrente e `IsBOF` restituisce 0.  
  
 Se il primo record è il record corrente e si chiama `MovePrev`, `IsBOF` verrà successivamente restituito diverso da zero. Se `IsBOF` restituisce diverso da zero e si chiama `MovePrev`, si verifica un errore. Se `IsBOF` restituisce un valore diverso da zero, il record corrente è definito e qualsiasi operazione che richiede un record corrente verrà generato un errore.  
  
### <a name="example"></a>Esempio  
 Questo esempio viene utilizzato `IsBOF` e `IsEOF` per rilevare i limiti di un oggetto recordset, come il codice scorre il recordset in entrambe le direzioni.  
  
 [!code-cpp[NVC_MFCDatabase #25](../../mfc/codesnippet/cpp/crecordset-class_9.cpp)]  
  
##  <a name="isdeleted"></a>CRecordset::IsDeleted  
 Determina se il record corrente è stato eliminato.  
  
```  
BOOL IsDeleted() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il recordset è posizionato su un record eliminato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se si passa a un record e `IsDeleted` restituisce **TRUE** (diverso da zero), quindi è necessario scorrere verso un altro record prima di poter eseguire altre operazioni sul recordset.  
  
 Il risultato di `IsDeleted` dipende da molti fattori, ad esempio il tipo di recordset, se il recordset è aggiornabile, che indica se è specificato il **CRecordset:: Skipdeletedrecords** opzione all'apertura del recordset, se i pacchetti driver eliminare i record e se sono presenti più utenti.  
  
 Per ulteriori informazioni su **CRecordset:: Skipdeletedrecords** e driver di compressione, vedere il [aprire](#open) funzione membro.  
  
> [!NOTE]
>  Se è stato implementato il recupero di massa di righe, non è necessario chiamare `IsDeleted`. Chiamare invece il [GetRowStatus](#getrowstatus) funzione membro. Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
##  <a name="iseof"></a>CRecordset::IsEOF  
 Restituisce un diverso da zero se il recordset è stato posizionato dopo l'ultimo record. Non sono presenti record corrente.  
  
```  
BOOL IsEOF() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il recordset non contiene record o se è eseguito lo scorrimento oltre l'ultimo record; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro durante lo scorrimento di record al record di informazioni se sono stati superati dell'ultimo record del recordset. È inoltre possibile utilizzare `IsEOF` per determinare se il recordset contiene record o è vuoto. Immediatamente dopo la chiamata **aprire**, se il recordset non contiene record, `IsEOF` restituisce diverso da zero. Quando si apre un recordset con almeno un record, il primo record è il record corrente e `IsEOF` restituisce 0.  
  
 Se l'ultimo record è il record corrente quando si chiama `MoveNext`, `IsEOF` verrà successivamente restituito diverso da zero. Se `IsEOF` restituisce diverso da zero e si chiama `MoveNext`, si verifica un errore. Se `IsEOF` restituisce un valore diverso da zero, il record corrente è definito e qualsiasi operazione che richiede un record corrente verrà generato un errore.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [IsBOF](#isbof).  
  
##  <a name="isfielddirty"></a>CRecordset::IsFieldDirty  
 Determina se il membro dati di campo specificato è stato modificato dal [modifica](#edit) o [AddNew](#addnew) è stato chiamato.  
  
```  
BOOL IsFieldDirty(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 `pv`  
 Un puntatore a membro di dati di campo cui si desidera controllare, lo stato o **NULL** per determinare se uno dei campi è dirty.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il membro dati di campo specificato è stato modificato dopo la chiamata `AddNew` o **modifica**; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 In tutti i membri di dati dei campi modificati i dati verranno trasferiti al record nell'origine dati quando il record corrente viene aggiornato da una chiamata al [aggiornamento](#update) funzione membro di `CRecordset` (segue una chiamata a **modifica** o `AddNew`).  
  
> [!NOTE]
>  Questa funzione membro non è applicabile per i recordset che utilizzano il recupero di massa di righe. Se è stato implementato il recupero delle righe di massa, quindi `IsFieldDirty` restituirà sempre **FALSE** e provocherà un'asserzione non riuscita. Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 La chiamata `IsFieldDirty` reimposterà gli effetti delle precedenti chiamate a [SetFieldDirty](#setfielddirty) poiché lo stato del campo modificato viene rivalutato. Nel `AddNew` case, se il valore del campo corrente è diverso dal valore pseudo null, il campo stato è impostato dirty. Nel **modifica** caso, se il valore del campo è diverso dal valore memorizzato nella cache, il campo stato viene impostato come dirty.  
  
 `IsFieldDirty`viene implementata tramite [DoFieldExchange](#dofieldexchange).  
  
 Per ulteriori informazioni sui flag modificato, vedere l'articolo [Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md).  
  
##  <a name="isfieldnull"></a>CRecordset::IsFieldNull  
 Restituisce diverso da zero se il campo specificato nel record corrente è Null (non ha valore).  
  
```  
BOOL IsFieldNull(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 `pv`  
 Un puntatore a membro di dati di campo cui si desidera controllare, lo stato o **NULL** per determinare se i campi sono Null.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il membro dati di campo specificato è contrassegnato come Null. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro per determinare se il membro dati di campo specificato di un recordset è stato contrassegnato come Null. (Nella terminologia dei database, Null significa "Nessun valore having" e non è identico **NULL** in C++.) Se un membro dati di campo è contrassegnato come Null, viene interpretato come una colonna del record corrente per cui è presente alcun valore.  
  
> [!NOTE]
>  Questa funzione membro non è applicabile per i recordset che utilizzano il recupero di massa di righe. Se è stato implementato il recupero delle righe di massa, quindi `IsFieldNull` restituirà sempre **FALSE** e provocherà un'asserzione non riuscita. Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 `IsFieldNull`viene implementata tramite [DoFieldExchange](#dofieldexchange).  
  
##  <a name="isfieldnullable"></a>CRecordset::IsFieldNullable  
 Restituisce zero se il campo specificato nel record corrente può essere impostato su Null (nessun valore con).  
  
```  
BOOL IsFieldNullable(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 `pv`  
 Un puntatore a membro di dati di campo cui si desidera controllare, lo stato o **NULL** per determinare se uno dei campi può essere impostato su un valore Null.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro per determinare se il membro dati di campo specificato è "ammette valori null" (può essere impostata su un valore Null. C++ **NULL** non è uguale a Null, ovvero nella terminologia dei database, come "non having alcun valore").  
  
> [!NOTE]
>  Se è stato implementato il recupero di massa di righe, non è possibile chiamare `IsFieldNullable`. Chiamare invece il [GetODBCFieldInfo](#getodbcfieldinfo) funzione membro per determinare se un campo può essere impostato su un valore Null. Si noti che è sempre possibile chiamare `GetODBCFieldInfo`, indipendentemente dal fatto è stato implementato il recupero di massa di righe. Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Un campo che non può essere Null deve avere un valore. Se si tenta di impostare un un campo su Null quando si aggiunge o aggiorna un record, l'origine dati rifiuta l'aggiunta o aggiornamento, e [aggiornare](#update) genererà un'eccezione. L'eccezione si verifica quando si chiama **aggiornamento**, non quando si chiama [SetFieldNull](#setfieldnull).  
  
 Utilizzando **NULL** per il primo argomento della funzione verrà applicata la funzione solo a **outputColumn** campi, non **param** campi. Ad esempio, la chiamata  
  
 [!code-cpp[N. 26 NVC_MFCDatabase](../../mfc/codesnippet/cpp/crecordset-class_10.cpp)]  
  
 imposterà solo **outputColumn** campi **NULL**; **param** campi non saranno interessati.  
  
 Per lavorare su **param** campi, è necessario fornire l'indirizzo effettivo della persona **param** si desidera utilizzare, ad esempio:  
  
 [!code-cpp[N. 27 NVC_MFCDatabase](../../mfc/codesnippet/cpp/crecordset-class_11.cpp)]  
  
 Ciò significa che non è possibile impostare tutte **param** campi **NULL**, come è possibile con **outputColumn** campi.  
  
 `IsFieldNullable`viene implementata tramite [DoFieldExchange](#dofieldexchange).  
  
##  <a name="isopen"></a>CRecordset::IsOpen  
 Determina se il recordset è già aperto.  
  
```  
BOOL IsOpen() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto recordset [aprire](#open) o [Requery](#requery) funzione membro è stato precedentemente chiamata e il recordset non è stata chiusa; in caso contrario 0.  
  
##  <a name="m_hstmt"></a>CRecordset:: M_hstmt  
 Contiene un handle per la struttura dei dati di istruzione ODBC, di tipo **HSTMT**, associato all'oggetto recordset.  
  
### <a name="remarks"></a>Note  
 Ogni query a un'origine dati ODBC è associato un **HSTMT**.  
  
> [!CAUTION]
>  Non utilizzare **m_hstmt** prima [aprire](#open) è stato chiamato.  
  
 In genere non è necessario accedere il **HSTMT** direttamente, ma potrebbe essere necessario per l'esecuzione diretta delle istruzioni SQL. Il `ExecuteSQL` funzione membro di classe `CDatabase` fornisce un esempio di utilizzo **m_hstmt**.  
  
##  <a name="m_nfields"></a>CRecordset::m_nFields  
 Contiene il numero di membri di dati di campo nella classe recordset. vale a dire il numero di colonne selezionate dal recordset dall'origine dati.  
  
### <a name="remarks"></a>Note  
 È necessario inizializzare il costruttore della classe recordset `m_nFields` con il numero corretto. Se non è stato implementato il recupero di massa di righe, ClassWizard scrive l'inizializzazione per l'utente quando si tenta di dichiarare la classe del recordset. È possibile anche scrivere la manualmente.  
  
 Il framework utilizza questo numero per gestire l'interazione tra i membri di dati di campo e le corrispondenti colonne del record corrente nell'origine dati.  
  
> [!CAUTION]
>  Questo numero deve corrispondere al numero di "colonne di output", registrata nel `DoFieldExchange` o `DoBulkFieldExchange` dopo una chiamata a [SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype) con il parametro **CFieldExchange::outputColumn**.  
  
 È possibile associare le colonne in modo dinamico, come illustrato nell'articolo "Recordset: in modo dinamico le colonne di dati di associazione." Se in tal caso, è necessario aumentare il conteggio in `m_nFields` in modo da riflettere il numero di funzione RFX o RFX di massa chiama il `DoFieldExchange` o `DoBulkFieldExchange` la funzione membro per le colonne associate in modo dinamico.  
  
 Per ulteriori informazioni, vedere gli articoli [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md) e [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
### <a name="example"></a>Esempio  
 Vedere l'articolo [campi di record: utilizzo di RFX](../../data/odbc/record-field-exchange-using-rfx.md).  
  
##  <a name="m_nparams"></a>CRecordset::m_nParams  
 Contiene il numero di membri di dati di parametro nella classe recordset. vale a dire il numero di parametri passati con la query del recordset.  
  
### <a name="remarks"></a>Note  
 Se la classe recordset dispone di alcun membro dati di parametro, è necessario inizializzare il costruttore per la classe `m_nParams` con il numero corretto. Il valore di `m_nParams` valore predefinito è 0. Se si aggiungono membri dati di parametro (che è necessario eseguire manualmente) è necessario aggiungere manualmente un'inizializzazione nel costruttore della classe in modo da riflettere il numero di parametri (che deve essere grande almeno come il numero di ' segnaposto il **m_strFilter** o `m_strSort` stringa).  
  
 Quando Parametrizza la query del recordset, il framework utilizza questo numero.  
  
> [!CAUTION]
>  Questo numero deve corrispondere al numero di "parametri" registrato in `DoFieldExchange` o `DoBulkFieldExchange` dopo una chiamata a [SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype) con un valore del parametro **CFieldExchange::inputParam**, **CFieldExchange::param**, **CFieldExchange::outputParam**, o **CFieldExchange::inoutParam**.  
  
### <a name="example"></a>Esempio  
  Vedere gli articoli [Recordset: applicazione di parametri a un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) e [campi di record: utilizzo di RFX](../../data/odbc/record-field-exchange-using-rfx.md).  
  
##  <a name="m_pdatabase"></a>CRecordset::m_pDatabase  
 Contiene un puntatore al `CDatabase` oggetto attraverso il quale il recordset è connesso a un'origine dati.  
  
### <a name="remarks"></a>Note  
 Questa variabile viene impostata in due modi. In genere, si passa un puntatore a un già connesso `CDatabase` oggetto quando si costruisce l'oggetto recordset. Se si passa **NULL** invece `CRecordset` crea un `CDatabase` dell'oggetto per l'utente e lo connette. In entrambi i casi `CRecordset` contiene il puntatore nella variabile.  
  
 In genere non direttamente occorre utilizzare il puntatore archiviato in **m_pDatabase**. Se si scrive le estensioni personalizzate di `CRecordset`, tuttavia, potrebbe essere necessario utilizzare il puntatore. Ad esempio, potrebbe essere necessario l'indicatore di misura se si genera la propria `CDBException`s. Potrebbe essere necessario se è necessario eseguire un'operazione utilizzando lo stesso `CDatabase` oggetto, ad esempio l'esecuzione di transazioni, l'impostazione dei timeout, o la chiamata di `ExecuteSQL` funzione membro di classe `CDatabase` per eseguire istruzioni SQL direttamente.  
  
##  <a name="m_strfilter"></a>CRecordset:: M_strfilter  
 Dopo la creazione dell'oggetto recordset, ma prima di chiamare il relativo **aprire** membro funzione, utilizzare questo membro dati per archiviare un `CString` contenente un database SQL **in** clausola.  
  
### <a name="remarks"></a>Note  
 Il recordset questa stringa viene utilizzata per vincolare (o filtrare) i record vengono selezionati durante il **aprire** o **Requery** chiamare. Ciò è utile per la selezione di un subset di record, ad esempio "tutti i venditori in base California" ("stato = CA"). La sintassi ODBC SQL per un **dove** clausola  
  
 `WHERE search-condition`  
  
 Si noti che non si include il **dove** parola chiave della stringa. Fornisce il framework.  
  
 È anche possibile parametrizzare la stringa di filtro, inserendo ' segnaposto, dichiarazione di un membro dati del parametro nella classe per ogni segnaposto e passaggio di parametri per il recordset in fase di esecuzione. Ciò consente di costruire il filtro in fase di esecuzione. Per ulteriori informazioni, vedere l'articolo [Recordset: applicazione di parametri a un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).  
  
 Per ulteriori informazioni su SQL **in** clausole, vedere l'articolo [SQL](../../data/odbc/sql.md). Per ulteriori informazioni sulla selezione e filtro dei record, vedere l'articolo [Recordset: applicazione di filtri dei record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[N. 30 NVC_MFCDatabase](../../mfc/codesnippet/cpp/crecordset-class_12.cpp)]  
  
##  <a name="m_strsort"></a>CRecordset::m_strSort  
 Dopo aver creato l'oggetto recordset, ma prima di chiamare il relativo **aprire** membro funzione, utilizzare questo membro dati per archiviare un `CString` contenente un database SQL **ORDER BY** clausola.  
  
### <a name="remarks"></a>Note  
 Il recordset questa stringa viene utilizzata per ordinare i record vengono selezionati durante il **aprire** o **Requery** chiamare. È possibile utilizzare questa funzionalità per ordinare un recordset in una o più colonne. La sintassi ODBC SQL per un **ORDER BY** clausola  
  
 `ORDER BY sort-specification [, sort-specification]...`  
  
 in una specifica di ordinamento è un numero intero o un nome di colonna. È anche possibile specificare l'ordine crescente o decrescente (l'ordine è crescente per impostazione predefinita) aggiungendo "ASC" o "DESC" all'elenco delle colonne nella stringa di ordinamento. I record selezionati sono ordinati in base alla prima colonna elencati, quindi dal secondo e così via. Si potrebbe ad esempio, ordinare un recordset "Customers", il cognome e nome. Il numero di colonne che è possibile elencare dipende dall'origine dati. Per altre informazioni, vedere [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Si noti che non si include il **ORDER BY** parola chiave della stringa. Fornisce il framework.  
  
 Per ulteriori informazioni sulle clausole SQL, vedere l'articolo [SQL](../../data/odbc/sql.md). Per ulteriori informazioni sull'ordinamento dei record, vedere l'articolo [Recordset: ordinamento dei record (ODBC)](../../data/odbc/recordset-sorting-records-odbc.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[N. 31 NVC_MFCDatabase](../../mfc/codesnippet/cpp/crecordset-class_13.cpp)]  
  
##  <a name="move"></a>CRecordset  
 Sposta il puntatore del record corrente all'interno del recordset, in avanti o indietro.  
  
```  
virtual void Move(
    long nRows,  
    WORD wFetchType = SQL_FETCH_RELATIVE);
```  
  
### <a name="parameters"></a>Parametri  
 `nRows`  
 Il numero di righe da spostare in avanti o indietro. I valori positivi spostano in avanti, verso la fine del recordset. I valori negativi spostano all'indietro, verso l'inizio.  
  
 `wFetchType`  
 Determina il set di righe che **spostare** verrà recuperato. Per informazioni dettagliate, vedere la sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 Se si passa un valore pari a 0 per `nRows`, **spostare** aggiorna il record corrente. **Spostare** terminerà qualsiasi corrente `AddNew` o **modifica** modalità che verrà ripristinato il valore del record corrente prima di `AddNew` o **modifica** è stato chiamato.  
  
> [!NOTE]
>  Quando si sposta all'interno di un recordset, è possibile ignorare i record eliminati. Vedere [CRecordset::IsDeleted](#isdeleted) per ulteriori informazioni. Quando si apre un `CRecordset` con il **skipDeletedRecords** impostata, l'opzione **spostare** effettua un'asserzione se il `nRows` parametro è 0. Questo comportamento impedisce l'aggiornamento di righe eliminate da altre applicazioni client utilizzando gli stessi dati. Vedere il `dwOption` parametro [aprire](#open) per una descrizione di **skipDeletedRecords**.  
  
 **Spostare** Riposiziona il recordset dal set di righe. In base ai valori per `nRows` e `wFetchType`, **spostare** recupera il set di righe appropriato e quindi imposta il primo record in tale set di righe del record corrente. Se non è stato implementato il recupero di massa di righe, le dimensioni del set di righe sono sempre 1. Quando si recupera un set di righe, **spostare** chiama direttamente il [CheckRowsetError](#checkrowseterror) funzione membro per gestire eventuali errori dovuti al recupero.  
  
 A seconda dei valori viene passato, **spostare** equivale a altro `CRecordset` funzioni membro. In particolare, il valore di `wFetchType` può indicare una funzione membro che è più intuitiva e spesso il metodo preferito per spostare il record corrente.  
  
 Nella tabella seguente sono elencati i valori possibili per `wFetchType`, il set di righe che **spostare** verrà recuperato in base a `wFetchType` e `nRows`, qualsiasi funzione membro equivalente corrispondente e `wFetchType`.  
  
|wFetchType|Set di righe recuperate|Funzione membro equivalente|  
|----------------|--------------------|--------------------------------|  
|`SQL_FETCH_RELATIVE`(il valore predefinito)|Il set di righe a partire `nRows` le righe della prima riga nel set di righe corrente.||  
|`SQL_FETCH_NEXT`|Il set di righe successivo. `nRows` viene ignorato.|[Metodo MoveNext](#movenext)|  
|`SQL_FETCH_PRIOR`|Il set di righe precedenti. `nRows` viene ignorato.|[MovePrev](#moveprev)|  
|`SQL_FETCH_FIRST`|Il primo set di righe nel recordset. `nRows` viene ignorato.|[Metodo MoveFirst](#movefirst)|  
|`SQL_FETCH_LAST`|L'ultimo intero set di righe nel recordset. `nRows` viene ignorato.|[MoveLast](#movelast)|  
|`SQL_FETCH_ABSOLUTE`|Se `nRows` > 0, il set di righe a partire `nRows` righe dall'inizio del recordset. Se `nRows` < 0,="" the="" rowset="" starting=""> `nRows` righe dalla fine del recordset. Se `nRows` = 0, viene restituita una condizione di inizio del file (BOF).|[SetAbsolutePosition](#setabsoluteposition)|  
|`SQL_FETCH_BOOKMARK`|Il set di righe a partire dalla riga il cui valore segnalibro corrisponde a `nRows`.|[SetBookmark](#setbookmark)|  
  
> [!NOTE]
>  Per i recordset forward-only, **spostare** è valido solo con un valore di `SQL_FETCH_NEXT` per `wFetchType`.  
  
> [!CAUTION]
>  La chiamata **spostare** genera un'eccezione se il recordset non contiene record. Per determinare se il recordset dispone di alcun record, chiamare [IsBOF](#isbof) e [IsEOF](#iseof).  
  
> [!NOTE]
>  Se è eseguito lo scorrimento oltre l'inizio o fine del recordset ( `IsBOF` o `IsEOF` restituisce diverso da zero), la chiamata un **spostare** funzione probabilmente genererà un `CDBException`. Ad esempio, se `IsEOF` restituisce diverso da zero e `IsBOF` non, quindi `MoveNext` genererà un'eccezione, ma `MovePrev` No.  
  
> [!NOTE]
>  Se si chiama **spostare** mentre il record corrente viene aggiornata o aggiunti, gli aggiornamenti vengono persi senza alcun avviso.  
  
 Per ulteriori informazioni sulla navigazione del recordset, vedere gli articoli [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). Per informazioni correlate, vedere la funzione API ODBC **SQLExtendedFetch** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[N. 28 NVC_MFCDatabase](../../mfc/codesnippet/cpp/crecordset-class_14.cpp)]  
  
##  <a name="movefirst"></a>CRecordset::MoveFirst  
 Imposta il primo record nel set di righe prima il record corrente.  
  
```  
void MoveFirst();
```  
  
### <a name="remarks"></a>Note  
 Indipendentemente dal fatto che il recupero di massa di righe è stato implementato, questa sarà sempre il primo record del recordset.  
  
 Non è necessario chiamare **MoveFirst** subito dopo l'apertura del recordset. In quel momento, il primo record (se presente) viene automaticamente il record corrente.  
  
> [!NOTE]
>  Questa funzione membro non è valida per i recordset forward-only.  
  
> [!NOTE]
>  Quando si sposta all'interno di un recordset, è possibile ignorare i record eliminati. Vedere il [IsDeleted](#isdeleted) funzione membro per i dettagli.  
  
> [!CAUTION]
>  Chiamare uno della **spostare** funzioni genera un'eccezione se il recordset non contiene record. Per determinare se il recordset dispone di alcun record, chiamare `IsBOF` e `IsEOF`.  
  
> [!NOTE]
>  Se si chiama uno del **spostare** funzioni mentre il record corrente viene aggiornata o aggiunti, gli aggiornamenti vengono persi senza alcun avviso.  
  
 Per ulteriori informazioni sulla navigazione del recordset, vedere gli articoli [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [IsBOF](#isbof).  
  
##  <a name="movelast"></a>CRecordset::MoveLast  
 Imposta il primo record nel set di righe completo ultimo il record corrente.  
  
```  
void MoveLast();
```  
  
### <a name="remarks"></a>Note  
 Se non è stato implementato il recupero di massa di righe, il recordset ha una dimensione del set di righe pari a 1, pertanto `MoveLast` semplicemente passa all'ultimo record del recordset.  
  
> [!NOTE]
>  Questa funzione membro non è valida per i recordset forward-only.  
  
> [!NOTE]
>  Quando si sposta all'interno di un recordset, è possibile ignorare i record eliminati. Vedere il [IsDeleted](#isdeleted) funzione membro per i dettagli.  
  
> [!CAUTION]
>  Chiamare uno della **spostare** funzioni genera un'eccezione se il recordset non contiene record. Per determinare se il recordset dispone di alcun record, chiamare `IsBOF` e `IsEOF`.  
  
> [!NOTE]
>  Se si chiama uno del **spostare** funzioni mentre il record corrente viene aggiornata o aggiunti, gli aggiornamenti vengono persi senza alcun avviso.  
  
 Per ulteriori informazioni sulla navigazione del recordset, vedere gli articoli [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [IsBOF](#isbof).  
  
##  <a name="movenext"></a>CRecordset::MoveNext  
 Imposta il primo record nel set di righe successivo il record corrente.  
  
```  
void MoveNext();
```  
  
### <a name="remarks"></a>Note  
 Se non è stato implementato il recupero di massa di righe, il recordset ha una dimensione del set di righe pari a 1, pertanto `MoveNext` viene semplicemente spostata al record successivo.  
  
> [!NOTE]
>  Quando si sposta all'interno di un recordset, è possibile ignorare i record eliminati. Vedere il [IsDeleted](#isdeleted) funzione membro per i dettagli.  
  
> [!CAUTION]
>  Chiamare uno della **spostare** funzioni genera un'eccezione se il recordset non contiene record. Per determinare se il recordset dispone di alcun record, chiamare `IsBOF` e `IsEOF`.  
  
> [!NOTE]
>  È inoltre consigliabile chiamare `IsEOF` prima di chiamare `MoveNext`. Ad esempio, se è eseguito lo scorrimento oltre la fine dell'oggetto recordset, `IsEOF` restituirà diverso da zero; una chiamata successiva a `MoveNext` verrebbe generata un'eccezione.  
  
> [!NOTE]
>  Se si chiama uno del **spostare** funzioni mentre il record corrente viene aggiornata o aggiunti, gli aggiornamenti vengono persi senza alcun avviso.  
  
 Per ulteriori informazioni sulla navigazione del recordset, vedere gli articoli [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [IsBOF](#isbof).  
  
##  <a name="moveprev"></a>CRecordset::MovePrev  
 Imposta il primo record nel set di righe precedenti il record corrente.  
  
```  
void MovePrev();
```  
  
### <a name="remarks"></a>Note  
 Se non è stato implementato il recupero di massa di righe, il recordset ha una dimensione del set di righe pari a 1, pertanto `MovePrev` semplicemente passa al record precedente.  
  
> [!NOTE]
>  Questa funzione membro non è valida per i recordset forward-only.  
  
> [!NOTE]
>  Quando si sposta all'interno di un recordset, è possibile ignorare i record eliminati. Vedere il [IsDeleted](#isdeleted) funzione membro per i dettagli.  
  
> [!CAUTION]
>  Chiamare uno della **spostare** funzioni genera un'eccezione se il recordset non contiene record. Per determinare se il recordset dispone di alcun record, chiamare `IsBOF` e `IsEOF`.  
  
> [!NOTE]
>  È inoltre consigliabile chiamare `IsBOF` prima di chiamare `MovePrev`. Ad esempio, se lo scorrimento è stato eseguito prima dell'inizio dell'oggetto recordset, `IsBOF` restituirà diverso da zero; una chiamata successiva a `MovePrev` verrebbe generata un'eccezione.  
  
> [!NOTE]
>  Se si chiama uno del **spostare** funzioni mentre il record corrente viene aggiornata o aggiunti, gli aggiornamenti vengono persi senza alcun avviso.  
  
 Per ulteriori informazioni sulla navigazione del recordset, vedere gli articoli [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [IsBOF](#isbof).  
  
##  <a name="onsetoptions"></a>CRecordset::OnSetOptions  
 Chiamata eseguita per impostare le opzioni (utilizzate nella selezione) per l'istruzione ODBC specificata.  
  
```  
virtual void OnSetOptions(HSTMT hstmt);
```  
  
### <a name="parameters"></a>Parametri  
 `hstmt`  
 Il **HSTMT** dell'istruzione ODBC le cui opzioni devono essere impostate.  
  
### <a name="remarks"></a>Note  
 Chiamare `OnSetOptions` per impostare le opzioni (utilizzate nella selezione) per l'istruzione ODBC specificata. Il framework chiama questa funzione membro per impostare le opzioni iniziali per il recordset. `OnSetOptions`Determina il supporto dell'origine dati per i cursori scorrevoli e per la concorrenza dei cursori e imposta le opzioni del recordset di conseguenza. (Mentre `OnSetOptions` viene utilizzato per operazioni di selezione, `OnSetUpdateOptions` viene utilizzato per operazioni di aggiornamento.)  
  
 Eseguire l'override `OnSetOptions` per impostare le opzioni specifiche del driver o l'origine dati. Ad esempio, se l'origine dati supporta l'apertura per l'accesso esclusivo, è possibile eseguire l'override `OnSetOptions` per sfruttare queste funzionalità.  
  
 Per ulteriori informazioni sui cursori, vedere l'articolo [ODBC](../../data/odbc/odbc-basics.md).  
  
##  <a name="onsetupdateoptions"></a>CRecordset::OnSetUpdateOptions  
 Chiamata eseguita per impostare le opzioni (usate su update) per l'istruzione ODBC specificata.  
  
```  
virtual void OnSetUpdateOptions(HSTMT hstmt);
```  
  
### <a name="parameters"></a>Parametri  
 `hstmt`  
 Il **HSTMT** dell'istruzione ODBC le cui opzioni devono essere impostate.  
  
### <a name="remarks"></a>Note  
 Chiamare `OnSetUpdateOptions` per impostare le opzioni (usate su update) per l'istruzione ODBC specificata. Dopo la creazione di un oggetto HSTMT per aggiornare i record in un recordset, il framework chiama questa funzione membro. (Mentre `OnSetOptions` viene utilizzato per operazioni di selezione, `OnSetUpdateOptions` viene utilizzato per operazioni di aggiornamento.) `OnSetUpdateOptions` determina il supporto dell'origine dati per i cursori scorrevoli e per la concorrenza dei cursori e imposta le opzioni del recordset di conseguenza.  
  
 Eseguire l'override `OnSetUpdateOptions` per impostare le opzioni di un'istruzione ODBC prima di tale istruzione viene utilizzata per accedere a un database.  
  
 Per ulteriori informazioni sui cursori, vedere l'articolo [ODBC](../../data/odbc/odbc-basics.md).  
  
##  <a name="open"></a>CRecordset:: Open  
 Apre il recordset recuperando la tabella o eseguendo la query rappresentata dal recordset.  
  
```  
virtual BOOL Open(
    UINT nOpenType = AFX_DB_USE_DEFAULT_TYPE,  
    LPCTSTR lpszSQL = NULL,  
    DWORD dwOptions = none);
```  
  
### <a name="parameters"></a>Parametri  
 `nOpenType`  
 Accettare il valore predefinito, **AFX_DB_USE_DEFAULT_TYPE**, o utilizzare uno dei seguenti valori di **enum OpenType**:  
  
- **CRecordset:: dynaset** un recordset con scorrimento bidirezionale. L'appartenenza e l'ordine dei record vengono determinati quando il recordset è aperto, ma le modifiche apportate da altri utenti ai valori dei dati sono visibili dopo un'operazione di recupero. I dynaset sono noti anche come recordset basati su keyset.  
  
- **CRecordset:: snapshot** recordset statico con scorrimento bidirezionale. L'appartenenza e l'ordine dei record vengono determinati quando il recordset è aperto; i valori dei dati vengono determinati quando vengono recuperati i record. Le modifiche apportate da altri utenti non sono visibili finché il recordset non viene chiuso e riaperto.  
  
- **CRecordset:: Dynamic** un recordset con scorrimento bidirezionale. Le modifiche apportate da altri utenti all'appartenenza, all'ordine e ai valori dei dati sono visibili dopo un'operazione di recupero. Si noti che molti driver ODBC non supportano questo tipo di recordset.  
  
- **CRecordset:: forwardOnly** un recordset di sola lettura con solo scorrimento in avanti.  
  
     Per `CRecordset`, il valore predefinito è **CRecordset:: snapshot**. Il meccanismo di valore predefinito consente l'interazione tra le procedure guidate di Visual C++ e `CRecordset` di ODBC e `CDaoRecordset` di DAO le cui impostazione predefinite sono diverse.  
  
 Per ulteriori informazioni su questi tipi di recordset, vedere l'articolo [Recordset (ODBC)](../../data/odbc/recordset-odbc.md). Per informazioni correlate, vedere l'articolo "Utilizzo dei cursori rettangolari e scorrevoli" in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
> [!CAUTION]
>  Se il tipo richiesto non è supportato, tramite il framework viene generata un'eccezione.  
  
 `lpszSQL`  
 Puntatore di stringa contenente uno degli elementi seguenti:  
  
-   Oggetto **NULL** puntatore.  
  
-   Nome di una tabella.  
  
-   Un database SQL **selezionare** istruzione (facoltativamente con un database SQL **in** o **ORDER BY** clausola).  
  
-   Oggetto **CHIAMARE** istruzione che specifica il nome di una query predefinita (stored procedure). Prestare attenzione a non inserire uno spazio vuoto tra la parentesi graffa e **CHIAMARE** (parola chiave).  
  
 Per ulteriori informazioni su questa stringa, vedere la tabella e la descrizione del ruolo di ClassWizard nella sezione Osservazioni.  
  
> [!NOTE]
>  L'ordine delle colonne del set di risultati deve corrispondere all'ordine di RFX o RFX di massa chiama il [DoFieldExchange](#dofieldexchange) o [DoBulkFieldExchange](#dobulkfieldexchange) funzione di sostituzione.  
  
 `dwOptions`  
 Maschera di bit tramite cui è possibile specificare una combinazione dei valori elencati di seguito. Alcuni di questi si escludono a vicenda. Il valore predefinito è **Nessuno**.  
  
- **CRecordset:: None** alcun set di opzioni. Il valore di questo parametro e tutti gli altri valori si escludono a vicenda. Per impostazione predefinita, il recordset può essere aggiornato con [modifica](#edit) o [eliminare](#delete) e consente di aggiungere nuovi record con [AddNew](#addnew). L'aggiornabilità dipende dall'origine dati nonché dall'opzione `nOpenType` specificata. L'ottimizzazione per le aggiunte di massa non è disponibile. Il recupero di righe di massa non verrà implementato. I record eliminati non verranno ignorati durante la navigazione del recordset. I segnalibri non sono disponibili. Il controllo automatico dei campi modificati automatico è implementato.  
  
- **CRecordset:: appendOnly** non consentire **modifica** o **eliminare** nel recordset. Consente solo `AddNew`. Questa opzione si escludono a vicenda con **CRecordset**.  
  
- **CRecordset:: readonly** apre il recordset in sola lettura. Questa opzione si escludono a vicenda con **CRecordset:: appendOnly**.  
  
- **CRecordset:: optimizeBulkAdd** utilizzare un'istruzione SQL preparata per ottimizzare l'aggiunta di più record in una sola volta. Si applica solo se non si utilizza la funzione API ODBC **SQLSetPos** per aggiornare il recordset. Tramite il primo aggiornamento viene determinato quali campi vengono contrassegnati come modificati. Questa opzione e `CRecordset::useMultiRowFetch` si escludono a vicenda.  
  
- `CRecordset::useMultiRowFetch`Implementare il recupero di massa di righe per consentire più righe da recuperare in una singola operazione di recupero. Si tratta di una funzionalità avanzata progettata per migliorare le prestazioni; tuttavia il trasferimento di campi di record di massa non è supportato da ClassWizard. Questa opzione si escludono a vicenda con **CRecordset:: optimizeBulkAdd**. Si noti che se si specifica `CRecordset::useMultiRowFetch`, quindi l'opzione **CRecordset:: Nodirtyfieldcheck** verrà attivata automaticamente (il doppio buffer non sarà disponibile); nei recordset forward-only, l'opzione **CRecordset:: Useextendedfetch** verrà attivata automaticamente. Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
- **CRecordset:: Skipdeletedrecords** ignorare tutti i record eliminati durante la navigazione nel recordset. Ciò comporterà il rallentamento delle prestazioni in alcuni recuperi relativi. Questa opzione non è valida per i recordset forward-only. Se si chiama [spostare](#move) con il `nRows` parametro impostato su 0 e **CRecordset:: Skipdeletedrecords** impostata, l'opzione **spostare** verrà verificata. Si noti che **CRecordset:: Skipdeletedrecords** è simile a *compressione del driver*, vale a dire che le righe eliminate vengono rimosse dal recordset. Tuttavia, se i record vengono compressi dal driver, saranno ignorati solo quelli eliminati dall'utente in questione e non da altri durante l'apertura del recordset. **CRecordset:: Skipdeletedrecords** saranno ignorate le righe eliminate da altri utenti.  
  
- **CRecordset:: useBookmarks** può utilizzare i segnalibri nel recordset, se supportata. Con i segnalibri il recupero dei dati risulta rallentato, ma le prestazioni relative alla navigazione tra i dati migliorano. Non valido per i recordset forward-only. Per ulteriori informazioni, vedere l'articolo [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).  
  
- **CRecordset:: Nodirtyfieldcheck** disabilitare il buffering dei campi modificati automatico controllo (double). Ciò consente di migliorare le prestazioni; tuttavia, è necessario contrassegnare manualmente i campi come modificati chiamando le funzioni membro `SetFieldDirty` e `SetFieldNull`. Si noti che il doppio buffer nella classe `CRecordset` è simile a quello nella classe `CDaoRecordset`. Tuttavia, in `CRecordset` non è possibile abilitare il doppio buffer nei singoli campi; infatti l'abilitazione viene eseguita o per tutti i campi o per nessuno. Si noti che se si specifica l'opzione `CRecordset::useMultiRowFetch`, quindi **CRecordset:: Nodirtyfieldcheck** verrà attivato automaticamente; tuttavia, `SetFieldDirty` e `SetFieldNull` non può essere utilizzato per i recordset che implementano il recupero di massa di righe.  
  
- **CRecordset:: Executedirect** si utilizza un'istruzione SQL preparata. Per migliorare le prestazioni, specificare questa opzione se il **Requery** funzione membro non verrà mai chiamata.  
  
- **CRecordset:: Useextendedfetch** implementare **SQLExtendedFetch** anziché **SQLFetch**. Questa condizione è progettata per implementare il recupero di righe di massa nei recordset forward-only. Se si specifica l'opzione `CRecordset::useMultiRowFetch` in un recordset forward-only, quindi **CRecordset:: Useextendedfetch** verrà attivata automaticamente.  
  
- **CRecordset:: userAllocMultiRowBuffers** l'utente allocherà i buffer di archiviazione per i dati. Utilizzare questa opzione insieme a `CRecordset::useMultiRowFetch` se si desidera allocare manualmente l'archiviazione; in caso contrario questa operazione sarà eseguita automaticamente dal framework. Per ulteriori informazioni, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). Si noti che se si specifica **userAllocMultiRowBuffers** senza specificare `CRecordset::useMultiRowFetch` comporterà un'asserzione non riuscita.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la `CRecordset` oggetto è stato aperto correttamente; in caso contrario 0 se [CDatabase:: Open](../../mfc/reference/cdatabase-class.md#open) (se chiamato) viene restituito 0.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare questa funzione membro per eseguire la query definita dal recordset. Prima di chiamare **aprire**, è necessario costruire l'oggetto recordset.  
  
 Connessione del recordset all'origine dati dipende dalla modalità con cui si crea il recordset prima di chiamare **aprire**. Se si passa un [CDatabase](../../mfc/reference/cdatabase-class.md) oggetto al costruttore del recordset che non è stato connesso all'origine dati, questa funzione membro utilizza [GetDefaultConnect](#getdefaultconnect) per tentare di aprire l'oggetto di database. Se si passa **NULL** al costruttore del recordset, il costruttore crea un `CDatabase` oggetto, e **aprire** tenta di connettere l'oggetto di database. Per informazioni dettagliate sulla chiusura di recordset e la connessione in queste diverse circostanze, vedere [Chiudi](#close).  
  
> [!NOTE]
>  L'accesso a un'origine dati tramite un oggetto `CRecordset` è sempre condiviso. A differenza della classe `CDaoRecordset`, non è possibile utilizzare un oggetto `CRecordset` per aprire un'origine dati con accesso esclusivo.  
  
 Quando si chiama **aprire**, una query, in genere un database SQL **selezionare** istruzione, seleziona i record in base ai criteri indicati nella tabella seguente.  
  
|Valore del parametro lpszSQL|I record selezionati sono determinati da|Esempio|  
|------------------------------------|----------------------------------------|-------------|  
|**NULL**|Stringa restituita da `GetDefaultSQL`.||  
|Nome tabella SQL|Tutte le colonne dell'elenco tabelle in `DoFieldExchange` o `DoBulkFieldExchange`.|`"Customer"`|  
|Nome predefinito della query (stored procedure)|Colonne che devono essere restituite dalla query.|`"{call OverDueAccts}"`|  
|**Selezionare** elenco di colonne **FROM** elenco tabella|Colonne specificate delle tabelle specificate.|`"SELECT CustId, CustName FROM`<br /><br /> `Customer"`|  
  
> [!CAUTION]
>  Prestare attenzione a non inserire uno spazio vuoto aggiuntivo nella stringa SQL. Ad esempio, se si inserisce uno spazio vuoto tra la parentesi graffa e **CHIAMARE** (parola chiave), MFC verrà erroneamente la stringa SQL come un nome di tabella e verrà quindi incorporata in un **selezionare** istruzione, genererà un'eccezione. Analogamente, se la query predefinita viene utilizzato un parametro di output, non inserire uno spazio vuoto tra la parentesi graffa e la ' simbolo. Infine, non è necessario inserire uno spazio vuoto prima della parentesi graffa in un **CHIAMARE** istruzione o prima di **selezionare** parola chiave in un **selezionare** istruzione.  
  
 La procedura normale consiste nel passare **NULL** a **aprire**, in questo caso, **aprire** chiamate [GetDefaultSQL](#getdefaultsql). Se si utilizza un oggetto derivato `CRecordset` (classe), **GetDefaultSQL** fornisce i nomi di tabella specificati in ClassWizard. Nel parametro `lpszSQL` è invece possibile specificare altre informazioni.  
  
 Qualsiasi elemento passato, **aprire** costruisce una stringa SQL finale per la query (la stringa può essere SQL **in cui** e **ORDER BY** clausole aggiunto per il `lpszSQL` stringa passata) e quindi esegue la query. È possibile esaminare la stringa costruita chiamando [GetSQL](#getsql) dopo la chiamata **aprire**. Per altre informazioni sul modo in cui un'istruzione SQL del recordset e Seleziona record, vedere l'articolo [Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md).  
  
 I membri dei dati di campo della classe recordset sono associati alle colonne dei dati selezionati. Se vengono restituiti record, il primo di essi diventa il record corrente.  
  
 Se si desidera impostare le opzioni per il recordset, ad esempio un filtro o ordinamento, specificare tali dopo la creazione dell'oggetto recordset ma prima di chiamare **aprire**. Se si desidera aggiornare i record del recordset quando quest'ultimo è già aperto, chiamare [Requery](#requery).  
  
 Per ulteriori informazioni, inclusi ulteriori esempi, vedere gli articoli [Recordset (ODBC)](../../data/odbc/recordset-odbc.md), [Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md), e [Recordset: creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md).  
  
### <a name="example"></a>Esempio  
 Gli esempi di codice seguenti mostrano diverse forme del **aprire** chiamare.  
  
 [!code-cpp[NVC_MFCDatabase n. 16](../../mfc/codesnippet/cpp/crecordset-class_15.cpp)]  
  
##  <a name="refreshrowset"></a>CRecordset::RefreshRowset  
 Aggiorna i dati e lo stato di una riga nel set di righe corrente.  
  
```  
void RefreshRowset(
    WORD wRow,  
    WORD wLockType = SQL_LOCK_NO_CHANGE);
```  
  
### <a name="parameters"></a>Parametri  
 `wRow`  
 Basato su una posizione di una riga nel set di righe corrente. Questo valore può essere compreso tra zero e le dimensioni del set di righe.  
  
 `wLockType`  
 Un valore che indica come la riga viene bloccato se è stata aggiornata. Per informazioni dettagliate, vedere la sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 Se si passa un valore pari a zero per `wRow`, quindi verrà aggiornato ogni riga nel set di righe.  
  
 Per utilizzare `RefreshRowset`, è stato implementato il recupero di massa di righe specificando il **CRecordset::useMulitRowFetch** opzione il [aprire](#open) funzione membro.  
  
 `RefreshRowset`chiama la funzione API ODBC **SQLSetPos**. Il `wLockType` parametro specifica lo stato del blocco di riga dopo **SQLSetPos** ha eseguito. Nella tabella seguente vengono descritti i valori possibili per `wLockType`.  
  
|wLockType|Descrizione|  
|---------------|-----------------|  
|`SQL_LOCK_NO_CHANGE`(il valore predefinito)|Il driver o l'origine dati garantisce che la riga è lo stesso stato bloccato o sbloccato, in cui si trovava prima `RefreshRowset` è stato chiamato.|  
|`SQL_LOCK_EXCLUSIVE`|L'origine dati o driver Blocca esclusivamente la riga. Non tutte le origini dati supportano questo tipo di blocco.|  
|`SQL_LOCK_UNLOCK`|L'origine dati o driver Sblocca la riga. Non tutte le origini dati supportano questo tipo di blocco.|  
  
 Per ulteriori informazioni su **SQLSetPos**, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
##  <a name="requery"></a>CRecordset:: Requery  
 Ricompila (Aggiorna) un recordset.  
  
```  
virtual BOOL Requery();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il recordset è stato ricompilato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se vengono restituiti record, il primo di essi diventa il record corrente.  
  
 Affinché il recordset in modo da riflettere le aggiunte e le eliminazioni che stanno effettuando o altri utenti all'origine dati, è necessario ricompilare il recordset chiamando **Requery**. Se il recordset è di tipo dynaset, riflette automaticamente gli aggiornamenti che si o ad altri utenti per il record esistenti (ma non le aggiunte). Se il recordset è uno snapshot, è necessario chiamare **Requery** in modo da riflettere le modifiche da altri utenti, nonché le aggiunte e le eliminazioni.  
  
 Per dynaset o uno snapshot, chiamare **Requery** ogni volta che si desidera ricompilare il recordset con un nuovo filtro, ordinamento o nuovi valori dei parametri. Impostare la nuova proprietà di filtrare o ordinare assegnando nuovi valori **m_strFilter** e `m_strSort` prima di chiamare **Requery**. Imposta nuovi parametri assegnando nuovi valori ai membri di dati di parametro prima di chiamare **Requery**. Se le stringhe di filtro e ordinamento sono cambiate, è possibile riutilizzare la query, che migliora le prestazioni.  
  
 Se il tentativo di ricompilare il recordset non riesce, viene chiuso il recordset. Prima di chiamare **Requery**, è possibile determinare se il recordset possa essere eseguito chiamando il `CanRestart` funzione membro. `CanRestart`non garantisce che **Requery** avrà esito positivo.  
  
> [!CAUTION]
>  Chiamare **Requery** solo dopo aver chiamato [aprire](#open).  
  
### <a name="example"></a>Esempio  
 Questo esempio viene ricompilato un recordset per applicare un ordinamento diverso.  
  
 [!code-cpp[N. 29 NVC_MFCDatabase](../../mfc/codesnippet/cpp/crecordset-class_16.cpp)]  
  
##  <a name="setabsoluteposition"></a>CRecordset:: SetAbsolutePosition  
 Posiziona il recordset nel record corrispondente al numero di record specificato.  
  
```  
void SetAbsolutePosition(long nRows);
```  
  
### <a name="parameters"></a>Parametri  
 `nRows`  
 Basato su una posizione ordinale per il record corrente nel recordset.  
  
### <a name="remarks"></a>Note  
 `SetAbsolutePosition`Sposta il puntatore del record corrente in base a questa posizione ordinale.  
  
> [!NOTE]
>  Questa funzione membro non è valida nei recordset forward-only.  
  
 Per ODBC (recordset), un'impostazione posizione assoluta 1 si riferisce al primo record del recordset. il valore 0 si intende la posizione di inizio del file (BOF).  
  
 È inoltre possibile passare i valori negativi per `SetAbsolutePosition`. In questo caso, la posizione del recordset viene valutata dalla fine del recordset. Ad esempio, `SetAbsolutePosition( -1 )` sposta il puntatore del record corrente all'ultimo record del recordset.  
  
> [!NOTE]
>  Posizione assoluta non deve essere utilizzato come numero di record sostitutivo. I segnalibri sono ancora il modo consigliato per mantenere e tornare a una posizione specificata, poiché le modifiche di posizione del record quando vengono eliminati i record precedenti. Inoltre, si non può essere certi che un determinato record avrà la stessa posizione assoluta se il recordset viene ricreato perché non è garantito l'ordine dei singoli record all'interno di un recordset a meno che non viene creato con un'istruzione SQL utilizzando un **ORDER BY** clausola.  
  
 Per ulteriori informazioni sulla navigazione del recordset e i segnalibri, vedere gli articoli [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).  
  
##  <a name="setbookmark"></a>CRecordset::SetBookmark  
 Posiziona il recordset sul record che contiene il segnalibro specificato.  
  
```  
void SetBookmark(const CDBVariant& varBookmark);
```  
  
### <a name="parameters"></a>Parametri  
 `varBookmark`  
 Un riferimento a un [CDBVariant](../../mfc/reference/cdbvariant-class.md) oggetto contenente il valore del segnalibro per un record specifico.  
  
### <a name="remarks"></a>Note  
 Per determinare se i segnalibri sono supportati nel recordset, chiamare [CanBookmark](#canbookmark). Per rendere disponibili i segnalibri se sono supportate, è necessario impostare il **CRecordset:: useBookmarks** opzione il `dwOptions` parametro del [aprire](#open) funzione membro.  
  
> [!NOTE]
>  Se i segnalibri non supportato o non disponibile, la chiamata `SetBookmark` genererà un'eccezione. I segnalibri non sono supportati nei recordset forward-only.  
  
 Per recuperare innanzitutto il segnalibro per il record corrente, chiamare [GetBookmark](#getbookmark), che consente di salvare il valore del segnalibro a un `CDBVariant` oggetto. In un secondo momento, è possibile tornare al record specifico chiamando `SetBookmark` utilizzando il valore salvato segnalibro.  
  
> [!NOTE]
>  Dopo alcune operazioni di recordset, è necessario controllare la persistenza del segnalibro prima di chiamare `SetBookmark`. Ad esempio, se si recupera un segnalibro con `GetBookmark` e quindi chiamare **Requery**, il segnalibro potrebbe non essere più valido. Chiamare [CDatabase:: GetBookmarkPersistence](../../mfc/reference/cdatabase-class.md#getbookmarkpersistence) per verificare se è possibile chiamare `SetBookmark`.  
  
 Per ulteriori informazioni sui segnalibri e di navigazione del recordset, vedere gli articoli [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md) e [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).  
  
##  <a name="setfielddirty"></a>CRecordset::SetFieldDirty  
 Contrassegna un membro dati di campo del recordset, come è stato modificato o come non modificate.  
  
```  
void SetFieldDirty(void* pv, BOOL bDirty = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pv`  
 Contiene l'indirizzo di un membro dati di campo del recordset o **NULL**. Se **NULL**, vengono contrassegnati tutti i membri di dati di campo nel recordset. (C++ **NULL** non equivale Null nella terminologia dei database, ovvero "non having alcun valore.")  
  
 `bDirty`  
 **TRUE** se il membro dati di campo è contrassegnato come "dirty" (modificato). In caso contrario **FALSE** se il membro dati di campo è contrassegnato come "pulire" (non modificato).  
  
### <a name="remarks"></a>Note  
 Contrassegnare i campi come invariato assicura il campo non viene aggiornato e minore traffico di SQL.  
  
> [!NOTE]
>  Questa funzione membro non è applicabile per i recordset che utilizzano il recupero di massa di righe. Se è stato implementato il recupero delle righe di massa, quindi `SetFieldDirty` comporterà un'asserzione non riuscita. Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 I segni di framework modificare i membri di dati campo per assicurarsi che verrà scritto il record nell'origine dati mediante il meccanismo di campi di record (RFX) di exchange. La modifica del valore di un campo in genere imposta il campo dirty automaticamente, pertanto è necessario chiamare raramente `SetFieldDirty` personalmente, ma è talvolta potrebbe essere necessario garantire che le colonne verranno essere aggiornate o inserite indipendentemente dal valore è nel membro dati di campo in modo esplicito.  
  
> [!CAUTION]
>  Chiamare questa funzione membro solo dopo aver chiamato [modifica](#edit) o [AddNew](#addnew).  
  
 Utilizzando **NULL** per il primo argomento della funzione verrà applicata la funzione solo a **outputColumn** campi, non **param** campi. Ad esempio, la chiamata  
  
 [!code-cpp[N. 26 NVC_MFCDatabase](../../mfc/codesnippet/cpp/crecordset-class_10.cpp)]  
  
 imposterà solo **outputColumn** campi **NULL**; **param** campi non saranno interessati.  
  
 Per lavorare su **param** campi, è necessario fornire l'indirizzo effettivo della persona **param** si desidera utilizzare, ad esempio:  
  
 [!code-cpp[N. 27 NVC_MFCDatabase](../../mfc/codesnippet/cpp/crecordset-class_11.cpp)]  
  
 Ciò significa che non è possibile impostare tutte **param** campi **NULL**, come è possibile con **outputColumn** campi.  
  
##  <a name="setfieldnull"></a>CRecordset::SetFieldNull  
 Un membro dati di campo del recordset vengono contrassegnati come Null, in particolare che non ha alcun valore, o non Null.  
  
```  
void SetFieldNull(void* pv, BOOL bNull = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pv`  
 Contiene l'indirizzo di un membro dati di campo del recordset o **NULL**. Se **NULL**, vengono contrassegnati tutti i membri di dati di campo nel recordset. (C++ **NULL** non equivale Null nella terminologia dei database, ovvero "non having alcun valore.")  
  
 `bNull`  
 Diverso da zero se il membro dati di campo deve essere contrassegnata come tabella non contenente alcun valore (Null). In caso contrario 0 se il membro dati di campo deve essere contrassegnato come non Null.  
  
### <a name="remarks"></a>Note  
 Quando si aggiunge un nuovo record per un oggetto recordset, tutti i membri di dati di campo sono inizialmente impostati su un valore Null e contrassegnati come "dirty" (modificato). Quando si recupera un record da un'origine dati, le colonne già hanno valori o sono Null.  
  
> [!NOTE]
>  Non chiamare questa funzione membro per i recordset che utilizzano il recupero di massa di righe. Se è stato implementato il recupero di massa di righe, la chiamata `SetFieldNull` comporta un'asserzione non riuscita. Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Se si desidera assegnare a un campo del record corrente in quanto non hanno un valore, chiamare in modo specifico `SetFieldNull` con `bNull` impostato su **TRUE** per contrassegnarla come Null. Se si desidera assegnare un valore Null in precedenza è stato contrassegnato un campo, è sufficiente impostare il nuovo valore. Non è necessario rimuovere il flag Null con `SetFieldNull`. Per determinare se il campo può essere Null, chiamare `IsFieldNullable`.  
  
> [!CAUTION]
>  Chiamare questa funzione membro solo dopo aver chiamato [modifica](#edit) o [AddNew](#addnew).  
  
 Utilizzando **NULL** per il primo argomento della funzione verrà applicata la funzione solo a **outputColumn** campi, non **param** campi. Ad esempio, la chiamata  
  
 [!code-cpp[N. 26 NVC_MFCDatabase](../../mfc/codesnippet/cpp/crecordset-class_10.cpp)]  
  
 imposterà solo **outputColumn** campi **NULL**; **param** campi non saranno interessati.  
  
 Per lavorare su **param** campi, è necessario fornire l'indirizzo effettivo della persona **param** si desidera utilizzare, ad esempio:  
  
 [!code-cpp[N. 27 NVC_MFCDatabase](../../mfc/codesnippet/cpp/crecordset-class_11.cpp)]  
  
 Ciò significa che non è possibile impostare tutte **param** campi **NULL**, come è possibile con **outputColumn** campi.  
  
> [!NOTE]
>  Durante l'impostazione di parametri su Null, una chiamata a `SetFieldNull` prima il recordset è aperto i risultati in un'asserzione. In questo caso, chiamare [SetParamNull](#setparamnull).  
  
 `SetFieldNull`viene implementata tramite [DoFieldExchange](#dofieldexchange).  
  
##  <a name="setlockingmode"></a>CRecordset::SetLockingMode  
 Imposta la modalità di blocco per blocco (predefinito) "ottimistica" o "blocco pessimistico". Determina come i record sono bloccati per gli aggiornamenti.  
  
```  
void SetLockingMode(UINT nMode);
```  
  
### <a name="parameters"></a>Parametri  
 `nMode`  
 Contiene uno dei seguenti valori dal **enum LockMode**:  
  
- **ottimistica** blocco ottimistico blocca il record viene aggiornato solo durante la chiamata a **aggiornamento**.  
  
- **pessimistica** blocco pessimistico blocca il record appena **modifica** viene chiamato e rimarrà bloccato fino a quando il **aggiornamento** completamento della chiamata o si sposta in un nuovo record.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro se è necessario specificare quale delle due strategie di blocco dei record dell'oggetto recordset utilizza per gli aggiornamenti. Per impostazione predefinita, la modalità di blocco di un recordset è **ottimistica**. È possibile modificarlo per una maggiore attenzione **pessimistica** strategia di blocco. Chiamare `SetLockingMode` dopo che costruito e aperto l'oggetto recordset ma prima di chiamare **modifica**.  
  
##  <a name="setparamnull"></a>CRecordset::SetParamNull  
 Un parametro di flag come Null, in particolare che non ha alcun valore, o non Null.  
  
```  
void SetParamNull(
    int nIndex,  
    BOOL bNull = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice in base zero del parametro.  
  
 `bNull`  
 Se **TRUE** (valore predefinito), il parametro è contrassegnato come Null. In caso contrario, il parametro è contrassegnato come non Null.  
  
### <a name="remarks"></a>Note  
 A differenza di [SetFieldNull](#setfieldnull), è possibile chiamare `SetParamNull` prima di aver aperto il recordset.  
  
 `SetParamNull`viene in genere utilizzato con query predefinite (stored procedure).  
  
##  <a name="setrowsetcursorposition"></a>CRecordset::SetRowsetCursorPosition  
 Sposta il cursore a una riga nel set di righe corrente.  
  
```  
void SetRowsetCursorPosition(WORD wRow, WORD wLockType = SQL_LOCK_NO_CHANGE);
```  
  
### <a name="parameters"></a>Parametri  
 `wRow`  
 Basato su una posizione di una riga nel set di righe corrente. Questo valore può variare da 1 per le dimensioni del set di righe.  
  
 `wLockType`  
 Valore che indica come la riga viene bloccato se è stata aggiornata. Per informazioni dettagliate, vedere la sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 Quando si implementa il recupero di massa di righe, vengono recuperati i record dal set di righe, in cui il primo record nel set di righe recuperate è il record corrente. Per rendere il record corrente a un altro record all'interno del set di righe, chiamare `SetRowsetCursorPosition`. Ad esempio, è possibile combinare `SetRowsetCursorPosition` con il [GetFieldValue](#getfieldvalue) funzione membro per recuperare dinamicamente i dati da tutti i record del recordset.  
  
 Da utilizzare `SetRowsetCursorPosition`, è stato implementato il recupero di massa di righe specificando il `CRecordset::useMultiRowFetch` opzione del `dwOptions` parametro nella [aprire](#open) funzione membro.  
  
 `SetRowsetCursorPosition`chiama la funzione API ODBC **SQLSetPos**. Il `wLockType` parametro specifica lo stato del blocco di riga dopo **SQLSetPos** ha eseguito. Nella tabella seguente vengono descritti i valori possibili per `wLockType`.  
  
|wLockType|Descrizione|  
|---------------|-----------------|  
|`SQL_LOCK_NO_CHANGE`(il valore predefinito)|Il driver o l'origine dati garantisce che la riga è lo stesso stato bloccato o sbloccato, in cui si trovava prima `SetRowsetCursorPosition` è stato chiamato.|  
|`SQL_LOCK_EXCLUSIVE`|L'origine dati o driver Blocca esclusivamente la riga. Non tutte le origini dati supportano questo tipo di blocco.|  
|`SQL_LOCK_UNLOCK`|L'origine dati o driver Sblocca la riga. Non tutte le origini dati supportano questo tipo di blocco.|  
  
 Per ulteriori informazioni su **SQLSetPos**, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
##  <a name="setrowsetsize"></a>CRecordset::SetRowsetSize  
 Specifica il numero di record da recuperare durante un'operazione di recupero.  
  
```  
virtual void SetRowsetSize(DWORD dwNewRowsetSize);
```  
  
### <a name="parameters"></a>Parametri  
 *dwNewRowsetSize*  
 Il numero di righe da recuperare durante un'operazione di recupero specificato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro virtuale specifica il numero di righe da recuperare durante un'operazione di recupero singolo quando si utilizzano righe di massa. Per implementare il recupero di massa di righe, è necessario impostare il `CRecordset::useMultiRowFetch` opzione il `dwOptions` parametro del [aprire](#open) funzione membro.  
  
> [!NOTE]
>  La chiamata `SetRowsetSize` senza implementare bulk il recupero di righe comporterà un'asserzione non riuscita.  
  
 Chiamare `SetRowsetSize` prima di chiamare **aprire** impostare inizialmente le dimensioni del set di righe per il recordset. Le dimensioni del set di righe predefinito quando si implementa il recupero di massa di righe sono 25.  
  
> [!NOTE]
>  Prestare attenzione quando si chiama `SetRowsetSize`. Se si è manualmente allocare spazio di archiviazione per i dati (come specificato da di **userAllocMultiRowBuffers** opzione del parametro dwOptions in **aprire**), controllare se è necessario riassegnare i buffer di archiviazione dopo la chiamata `SetRowsetSize`, ma prima di eseguire qualsiasi operazione di spostamento del cursore.  
  
 Per ottenere l'impostazione corrente per le dimensioni del set di righe, chiamare [GetRowsetSize](#getrowsetsize).  
  
 Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
##  <a name="update"></a>CRecordset:: Update  
 Completa un' `AddNew` o **modifica** operazione salvando i dati nuovi o modificati nell'origine dati.  
  
```  
virtual BOOL Update();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è stato aggiornato correttamente un record; in caso contrario 0 se nessuna colonna è stati modificati. Se nessun record sono stati aggiornati o se più di un record è stato aggiornato, viene generata un'eccezione. Viene generata un'eccezione anche per qualsiasi altro errore nell'origine dati.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro dopo una chiamata al [AddNew](#addnew) o [modifica](#edit) funzione membro. Questa chiamata è necessario per completare il `AddNew` o **modifica** operazione.  
  
> [!NOTE]
>  Se è stato implementato il recupero di massa di righe, non è possibile chiamare **aggiornamento**. Il risultato sarà un'asserzione non riuscita. Sebbene classe `CRecordset` non fornisce un meccanismo per l'aggiornamento di massa di righe di dati, è possibile scrivere funzioni personalizzate utilizzando la funzione API ODBC **SQLSetPos**. Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Entrambi `AddNew` e **modifica** preparare i buffer di modifica in cui sono stati inseriti i dati aggiunti o modificati per il salvataggio all'origine dati. **Aggiornamento** Salva i dati. Vengono aggiornati solo i campi contrassegnati o rilevato come è stato modificato.  
  
 Se l'origine dati supporta le transazioni, è possibile rendere il **aggiornamento** chiamare (e il corrispondente `AddNew` o **modifica** chiamare) fa parte di una transazione. Per ulteriori informazioni sulle transazioni, vedere l'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
> [!CAUTION]
>  Se si chiama **aggiornamento** senza prima chiamare `AddNew` o **modifica**, **aggiornamento** genera un `CDBException`. Se si chiama `AddNew` o **modifica**, è necessario chiamare **aggiornamento** prima di chiamare un **spostare** operazione o prima di chiudere il recordset o la connessione all'origine dati. In caso contrario, le modifiche vengono perse senza notifica.  
  
 Per ulteriori informazioni sulla gestione **aggiornamento** errori, vedere l'articolo [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).  
  
### <a name="example"></a>Esempio  
 Vedere l'articolo [transazione: esecuzione di una transazione in un Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDatabase (classe)](../../mfc/reference/cdatabase-class.md)   
 [Classe CRecordView](../../mfc/reference/crecordview-class.md)


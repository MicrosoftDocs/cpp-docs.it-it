---
title: Classe CRecordset
ms.date: 11/04/2016
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
helpviewer_keywords:
- CRecordset [MFC], CRecordset
- CRecordset [MFC], AddNew
- CRecordset [MFC], CanAppend
- CRecordset [MFC], CanBookmark
- CRecordset [MFC], Cancel
- CRecordset [MFC], CancelUpdate
- CRecordset [MFC], CanRestart
- CRecordset [MFC], CanScroll
- CRecordset [MFC], CanTransact
- CRecordset [MFC], CanUpdate
- CRecordset [MFC], CheckRowsetError
- CRecordset [MFC], Close
- CRecordset [MFC], Delete
- CRecordset [MFC], DoBulkFieldExchange
- CRecordset [MFC], DoFieldExchange
- CRecordset [MFC], Edit
- CRecordset [MFC], FlushResultSet
- CRecordset [MFC], GetBookmark
- CRecordset [MFC], GetDefaultConnect
- CRecordset [MFC], GetDefaultSQL
- CRecordset [MFC], GetFieldValue
- CRecordset [MFC], GetODBCFieldCount
- CRecordset [MFC], GetODBCFieldInfo
- CRecordset [MFC], GetRecordCount
- CRecordset [MFC], GetRowsetSize
- CRecordset [MFC], GetRowsFetched
- CRecordset [MFC], GetRowStatus
- CRecordset [MFC], GetSQL
- CRecordset [MFC], GetStatus
- CRecordset [MFC], GetTableName
- CRecordset [MFC], IsBOF
- CRecordset [MFC], IsDeleted
- CRecordset [MFC], IsEOF
- CRecordset [MFC], IsFieldDirty
- CRecordset [MFC], IsFieldNull
- CRecordset [MFC], IsFieldNullable
- CRecordset [MFC], IsOpen
- CRecordset [MFC], Move
- CRecordset [MFC], MoveFirst
- CRecordset [MFC], MoveLast
- CRecordset [MFC], MoveNext
- CRecordset [MFC], MovePrev
- CRecordset [MFC], OnSetOptions
- CRecordset [MFC], OnSetUpdateOptions
- CRecordset [MFC], Open
- CRecordset [MFC], RefreshRowset
- CRecordset [MFC], Requery
- CRecordset [MFC], SetAbsolutePosition
- CRecordset [MFC], SetBookmark
- CRecordset [MFC], SetFieldDirty
- CRecordset [MFC], SetFieldNull
- CRecordset [MFC], SetLockingMode
- CRecordset [MFC], SetParamNull
- CRecordset [MFC], SetRowsetCursorPosition
- CRecordset [MFC], SetRowsetSize
- CRecordset [MFC], Update
- CRecordset [MFC], m_hstmt
- CRecordset [MFC], m_nFields
- CRecordset [MFC], m_nParams
- CRecordset [MFC], m_pDatabase
- CRecordset [MFC], m_strFilter
- CRecordset [MFC], m_strSort
ms.assetid: dd89a21d-ef39-4aab-891b-1e373d67c855
ms.openlocfilehash: efb833a8d4cc0b801f75951bc648d6b83df5bae8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62372205"
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
|[CRecordset::CanAppend](#canappend)|Restituisce diversi da zero se è possibile aggiungere nuovi record al set di record tramite il `AddNew` funzione membro.|
|[CRecordset::CanBookmark](#canbookmark)|Restituisce diversi da zero se il recordset supporta segnalibri.|
|[CRecordset::Cancel](#cancel)|Annulla un'operazione asincrona o un processo da un secondo thread.|
|[CRecordset::CancelUpdate](#cancelupdate)|Annulla eventuali aggiornamenti in sospeso a causa dell'errore un' `AddNew` o `Edit` operazione.|
|[CRecordset::CanRestart](#canrestart)|Restituisce se diverso da zero `Requery` può essere chiamato per eseguire nuovamente la query del recordset.|
|[CRecordset::CanScroll](#canscroll)|Restituisce diversi da zero se è possibile scorrere i record.|
|[CRecordset::CanTransact](#cantransact)|Restituisce diversi da zero se l'origine dati supporta le transazioni.|
|[CRecordset::CanUpdate](#canupdate)|Restituisce diversi da zero se il set di record possono essere aggiornati (si può aggiungere, aggiornare o eliminare i record).|
|[CRecordset::CheckRowsetError](#checkrowseterror)|Chiamata eseguita per gestire gli errori generati durante il recupero dei record.|
|[CRecordset::Close](#close)|Chiude il recordset e HSTMT ODBC associato.|
|[CRecordset::Delete](#delete)|Elimina il record corrente dal recordset. È necessario scorrere in modo esplicito a un altro record dopo l'eliminazione.|
|[CRecordset::DoBulkFieldExchange](#dobulkfieldexchange)|Chiamata eseguita per lo scambio di massa di righe di dati dall'origine dati per il recordset. Implementa bulk exchange di campi di record (RFX di massa).|
|[CRecordset::DoFieldExchange](#dofieldexchange)|Chiamata eseguita per lo scambio di dati (in entrambe le direzioni) tra i membri di dati del campo del set di record e record corrispondente nell'origine dati. Implementa campi di record (RFX).|
|[CRecordset::Edit](#edit)|Prepara per le modifiche apportate al record corrente. Chiamare `Update` per completare la modifica.|
|[CRecordset::FlushResultSet](#flushresultset)|Diverso da zero se è presente un altro risultato restituisce set deve essere recuperato, quando si usa una query predefinita.|
|[CRecordset::GetBookmark](#getbookmark)|Assegna il valore di segnalibro di un record per l'oggetto parametro.|
|[CRecordset::GetDefaultConnect](#getdefaultconnect)|Chiamato per ottenere la stringa di connessione predefinita.|
|[CRecordset::GetDefaultSQL](#getdefaultsql)|Chiamato per ottenere la stringa SQL predefinito per l'esecuzione.|
|[CRecordset::GetFieldValue](#getfieldvalue)|Restituisce il valore di un campo in un recordset.|
|[CRecordset::GetODBCFieldCount](#getodbcfieldcount)|Restituisce il numero di campi del recordset.|
|[CRecordset::GetODBCFieldInfo](#getodbcfieldinfo)|Restituisce i tipi di informazioni sui campi specifici in un recordset.|
|[CRecordset::GetRecordCount](#getrecordcount)|Restituisce il numero di record del recordset.|
|[CRecordset::GetRowsetSize](#getrowsetsize)|Restituisce il numero di record da recuperare durante un'operazione di recupero singolo.|
|[CRecordset::GetRowsFetched](#getrowsfetched)|Restituisce il numero effettivo di righe recuperate durante un'operazione di recupero.|
|[CRecordset::GetRowStatus](#getrowstatus)|Restituisce lo stato della riga dopo un'operazione di recupero.|
|[CRecordset::GetSQL](#getsql)|Ottiene la stringa SQL utilizzata per selezionare i record per il recordset.|
|[CRecordset::GetStatus](#getstatus)|Ottiene lo stato del set di record: l'indice del record corrente e se è stato ottenuto un totale di record.|
|[CRecordset::GetTableName](#gettablename)|Ottiene il nome della tabella su cui si basa il recordset.|
|[CRecordset::IsBOF](#isbof)|Restituisce diversi da zero se il set di record è stato posizionato prima del primo record. Non è presente nessun record corrente.|
|[CRecordset::IsDeleted](#isdeleted)|Restituisce diversi da zero se il recordset è posizionato su un record eliminato.|
|[CRecordset::IsEOF](#iseof)|Restituisce diversi da zero se il set di record è stato posizionato dopo l'ultimo record. Non è presente nessun record corrente.|
|[CRecordset::IsFieldDirty](#isfielddirty)|Restituisce diversi da zero se il campo specificato nel record corrente è stato modificato.|
|[CRecordset::IsFieldNull](#isfieldnull)|Restituisce diversi da zero se il campo specificato nel record corrente è null (non ha alcun valore).|
|[CRecordset::IsFieldNullable](#isfieldnullable)|Restituisce diversi da zero se il campo specificato nel record corrente può essere impostato su null (non con nessun valore).|
|[CRecordset::IsOpen](#isopen)|Restituisce se diverso da zero `Open` è stato chiamato in precedenza.|
|[CRecordset::Move](#move)|Posiziona il recordset su un numero specificato di record del record corrente in entrambe le direzioni.|
|[CRecordset::MoveFirst](#movefirst)|Posiziona il record corrente sul primo record del recordset. Test per `IsBOF` prima.|
|[CRecordset::MoveLast](#movelast)|Posiziona il record corrente per l'ultimo record o per l'ultimo set di righe. Test per `IsEOF` prima.|
|[CRecordset::MoveNext](#movenext)|Posiziona il record corrente del record successivo o il successivo set di righe. Test per `IsEOF` prima.|
|[CRecordset::MovePrev](#moveprev)|Posiziona il record corrente del record precedente o il set di righe precedente. Test per `IsBOF` prima.|
|[CRecordset::OnSetOptions](#onsetoptions)|Chiamata eseguita per impostare le opzioni (utilizzate nella selezione) per l'istruzione ODBC specificata.|
|[CRecordset::OnSetUpdateOptions](#onsetupdateoptions)|Chiamata eseguita per impostare le opzioni (usate in aggiornamento) per l'istruzione ODBC specificata.|
|[CRecordset::Open](#open)|Apre il recordset recuperando la tabella o eseguendo la query rappresentata dal recordset.|
|[CRecordset::RefreshRowset](#refreshrowset)|Aggiorna i dati e lo stato di una o più righe specificate.|
|[CRecordset::Requery](#requery)|Esegue la query del recordset nuovamente per aggiornare i record selezionati.|
|[CRecordset::SetAbsolutePosition](#setabsoluteposition)|Posiziona il recordset nel record corrispondente al numero di record specificato.|
|[CRecordset::SetBookmark](#setbookmark)|Posiziona il recordset del record specificata dal segnalibro.|
|[CRecordset::SetFieldDirty](#setfielddirty)|Contrassegna il campo specificato nel record corrente come modificato.|
|[CRecordset::SetFieldNull](#setfieldnull)|Imposta il valore del campo specificato nel record corrente su null (non con nessun valore).|
|[CRecordset::SetLockingMode](#setlockingmode)|Imposta la modalità di blocco per blocco (predefinito) "ottimistica" o "" pessimistico. Determina come i record sono bloccati per gli aggiornamenti.|
|[CRecordset::SetParamNull](#setparamnull)|Imposta il parametro specificato su null (non con nessun valore).|
|[CRecordset::SetRowsetCursorPosition](#setrowsetcursorposition)|Posiziona il cursore sulla riga del set di righe specificata.|
|[CRecordset::SetRowsetSize](#setrowsetsize)|Specifica il numero di record da recuperare durante un'operazione di recupero.|
|[CRecordset::Update](#update)|Completa un' `AddNew` o `Edit` operazione salvando i dati nuovi o modificati nell'origine dati.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRecordset::m_hstmt](#m_hstmt)|Contiene l'handle di istruzione ODBC per il recordset. Digitare `HSTMT`.|
|[CRecordset::m_nFields](#m_nfields)|Contiene il numero di membri dati di campi del recordset. Digitare `UINT`.|
|[CRecordset::m_nParams](#m_nparams)|Contiene il numero di membri dati di parametro nel set di record. Digitare `UINT`.|
|[CRecordset::m_pDatabase](#m_pdatabase)|Contiene un puntatore al `CDatabase` oggetto attraverso il quale il recordset è connesso a un'origine dati.|
|[CRecordset::m_strFilter](#m_strfilter)|Contiene un `CString` che specifica un Structured Query Language (SQL) `WHERE` clausola. Utilizzato come filtro per selezionare solo i record che soddisfano determinati criteri.|
|[CRecordset::m_strSort](#m_strsort)|Contiene un `CString` che specifica un database SQL `ORDER BY` clausola. Usato per controllare come vengono ordinati i record.|

## <a name="remarks"></a>Note

Noto come "Recordset" `CRecordset` gli oggetti vengono in genere usati in due forme: dynaset e gli snapshot. Dynaset rimane sincronizzato con gli aggiornamenti dei dati apportati da altri utenti. Uno snapshot è una vista statica di dati. Ogni forma rappresenta un set di record stabilita al momento che il recordset è aperto, ma durante lo scorrimento in un record di tipo snapshot, riflette le modifiche apportate al record, seguito da altri utenti o da altri recordset nell'applicazione.

> [!NOTE]
>  Se si lavora con le classi di oggetti DAO (Data Access) anziché le classi di Open Database Connectivity (ODBC), usare una classe [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) invece. Per altre informazioni, vedere l'articolo [Panoramica: Programmazione di database](../../data/data-access-programming-mfc-atl.md).

Per usare entrambi i tipi di recordset, è in genere derivare una classe recordset specifici dell'applicazione da `CRecordset`. Recordset selezionano record da un'origine dati ed è quindi possibile:

- Scorrere i record.

- Aggiornare i record e specificare una modalità di blocco.

- Filtrare il recordset per vincolare i cui record vengono selezionati tra quelli disponibili nell'origine dati.

- Ordinamento del recordset.

- Impostare i parametri per il recordset per personalizzare la selezione con le informazioni non note fino alla fase di esecuzione.

Per usare la classe, aprire un database e crea un oggetto recordset, passando un puntatore per il costruttore di `CDatabase` oggetto. Chiamare quindi il recordset `Open` funzione membro, in cui è possibile specificare se l'oggetto è di tipo snapshot o snapshot. La chiamata `Open` consente di selezionare dati dall'origine dati. Dopo che l'oggetto recordset è aperto, usare i membri di dati e funzioni membro per scorrere i record e operano su di essi. Le operazioni disponibili variano a seconda se l'oggetto è di tipo snapshot o snapshot, se è aggiornabile o di sola lettura (questo dipende la funzionalità dell'origine dati Open Database Connectivity (ODBC)), e se è stato implementato il recupero di righe bulk. Per aggiornare i record che potrebbero sono stati modificati o aggiunti dopo il `Open` chiamare, chiamare l'oggetto `Requery` funzione membro. Chiamare l'oggetto `Close` membro funzione ed eliminare definitivamente l'oggetto quando finisce con esso.

In un oggetto derivato `CRecordset` di classi, campi di record (RFX) o exchange di massa di campi di record (RFX di massa) viene usato per supportare la lettura e l'aggiornamento dei campi del record.

Per altre informazioni sul trasferimento di campi di record e Recordset, vedere gli articoli [Panoramica: Programmazione di database](../../data/data-access-programming-mfc-atl.md), [Recordset (ODBC)](../../data/odbc/recordset-odbc.md), [Recordset: Il recupero di massa (ODBC) di record](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md), e [campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md). Per una particolare attenzione alla dynaset e gli snapshot, vedere gli articoli [Dynaset](../../data/odbc/dynaset.md) e [Snapshot](../../data/odbc/snapshot.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CRecordset`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

##  <a name="addnew"></a>  CRecordset::AddNew

Prepara per l'aggiunta di un nuovo record alla tabella.

```
virtual void AddNew();
```

### <a name="remarks"></a>Note

È necessario chiamare il [Requery](#requery) funzione membro per visualizzare il record appena aggiunto. I campi del record sono inizialmente Null. (Nella terminologia dei database, Null significa "non having alcun valore" e non è lo stesso come valori NULL in C++). Per completare l'operazione, è necessario chiamare il [Update](#update) funzione membro. `Update` Salva le modifiche apportate all'origine dati.

> [!NOTE]
>  Se è stato implementato il recupero di righe bulk, è possibile chiamare `AddNew`. Questo comporterà un'asserzione non riuscita. Sebbene classe `CRecordset` non fornisce un meccanismo per l'aggiornamento di righe bulk di dati, è possibile scrivere funzioni personalizzate usando la funzione API ODBC `SQLSetPos`. Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

`AddNew` Prepara un record nuovo e vuoto con membri dati di campi del recordset. Dopo aver chiamato `AddNew`, impostare i valori desiderati in membri dati di campi del recordset. (Non è necessario chiamare il [Edit](#edit) funzione di membro a tale scopo, utilizzare `Edit` solo per i record esistenti.) Quando si chiama successivamente `Update`, modificati i valori nei membri di dati di campo vengono salvati nell'origine dati.

> [!CAUTION]
>  Se si scorre verso un nuovo record prima di chiamare `Update`, il nuovo record viene perso e non viene fornito alcun messaggio di avviso.

Se l'origine dati supporta le transazioni, è possibile apportare le `AddNew` delle chiamate parte di una transazione. Per altre informazioni sulle transazioni, vedere la classe [CDatabase](../../mfc/reference/cdatabase-class.md). Si noti che è necessario chiamare [CDatabase::BeginTrans](../../mfc/reference/cdatabase-class.md#begintrans) prima di chiamare `AddNew`.

> [!NOTE]
>  Per dynaset, vengono aggiunti nuovi record al set di record come l'ultimo record. Aggiunta di record non vengono aggiunti agli snapshot; è necessario chiamare `Requery` per aggiornare il recordset.

Non è consentito chiamare `AddNew` per un set di record cui `Open` funzione membro non è stata chiamata. Oggetto `CDBException` viene generata se si chiama `AddNew` per un recordset che non può essere aggiunto. È possibile determinare se il recordset è aggiornabile chiamando [CanAppend](#canappend).

Per altre informazioni, vedere i seguenti articoli: [Recordset: Aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md), [Recordset: Aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md), e [transazione (ODBC)](../../data/odbc/transaction-odbc.md).

### <a name="example"></a>Esempio

Vedere l'articolo [transazione: Esecuzione di una transazione in un Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).

##  <a name="canappend"></a>  CRecordset::CanAppend

Determina se il recordset aperto in precedenza consente di aggiungere nuovi record.

```
BOOL CanAppend() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il set di record consente l'aggiunta di nuovi record; in caso contrario 0. `CanAppend` Restituisce 0 se è stato aperto il recordset in sola lettura.

##  <a name="canbookmark"></a>  CRecordset::CanBookmark

Determina se il set di record consente di contrassegnare i record di utilizzo dei segnalibri.

```
BOOL CanBookmark() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset supporta segnalibri; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione è indipendente dal `CRecordset::useBookmarks` opzione il *dwOptions* parametro del [Open](#open) funzione membro. `CanBookmark` indica se il driver ODBC specifico e cursore tipo di supporto dei segnalibri. `CRecordset::useBookmarks` indica se i segnalibri saranno disponibili, purché siano supportati.

> [!NOTE]
>  I segnalibri non sono supportati nei recordset forward-only.

Per altre informazioni sui segnalibri e di navigazione del recordset, vedere gli articoli [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md) e [Recordset: Scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

##  <a name="cancel"></a>  CRecordset::Cancel

Richieste che l'origine dati Annulla un'operazione asincrona in corso o un processo da un secondo thread.

```
void Cancel();
```

### <a name="remarks"></a>Note

Si noti che le classi ODBC MFC non utilizzano non più l'elaborazione asincrona; Per eseguire un'operazione asincrona, è necessario chiamare direttamente la funzione API ODBC `SQLSetConnectOption`. Per altre informazioni, vedere l'argomento "Esecuzione asincrona delle funzioni" nel *Guida per programmatori ODBC SDK*.

##  <a name="cancelupdate"></a>  CRecordset::CancelUpdate

Annulla eventuali aggiornamenti, causati da in sospeso un' [modifica](#edit) oppure [AddNew](#addnew) operazione, prima [Update](#update) viene chiamato.

```
void CancelUpdate();
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Questa funzione membro non è applicabile per i recordset che utilizzano massa di righe, poiché non è possibile chiamare questo tipo recordset `Edit`, `AddNew`, o `Update`. Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Se il controllo dei campi modificati automatico è abilitato, `CancelUpdate` ripristinerà le variabili membro per i valori che avevano prima `Edit` o `AddNew` è stato chiamato; in caso contrario, eventuali modifiche dei valori rimarranno. Per impostazione predefinita, il controllo automatico dei campi è abilitato quando si apre il recordset. Per disabilitarlo, è necessario specificare il `CRecordset::noDirtyFieldCheck` nella *dwOptions* parametri del [Open](#open) funzione membro.

Per altre informazioni sull'aggiornamento dei dati, vedere l'articolo [Recordset: Aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md).

##  <a name="canrestart"></a>  CRecordset::CanRestart

Determina se il set di record consente il riavvio di query (per aggiornare i propri record) chiamando il `Requery` funzione membro.

```
BOOL CanRestart() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se è consentito requery; in caso contrario 0.

##  <a name="canscroll"></a>  CRecordset::CanScroll

Determina se il set di record consente lo scorrimento.

```
BOOL CanScroll() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il set di record consente lo scorrimento; in caso contrario 0.

### <a name="remarks"></a>Note

Per ulteriori informazioni sullo scorrimento, vedere l'articolo [Recordset: Scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

##  <a name="cantransact"></a>  CRecordset::CanTransact

Determina se il set di record consente alle transazioni.

```
BOOL CanTransact() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset consenta le transazioni. in caso contrario 0.

### <a name="remarks"></a>Note

Per altre informazioni, vedere l'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).

##  <a name="canupdate"></a>  CRecordset::CanUpdate

Determina se il set di record possono essere aggiornati.

```
BOOL CanUpdate() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il set di record possono essere aggiornati; in caso contrario 0.

### <a name="remarks"></a>Note

Potrebbe essere un recordset di sola lettura se l'origine dati sottostante è di sola lettura o se è stato specificato `CRecordset::readOnly` nella *dwOptions* parametro quando il recordset aperto.

##  <a name="checkrowseterror"></a>  CRecordset::CheckRowsetError

Chiamata eseguita per gestire gli errori generati durante il recupero dei record.

```
virtual void CheckRowsetError(RETCODE nRetCode);
```

### <a name="parameters"></a>Parametri

*nRetCode*<br/>
Codice restituito di una funzione API ODBC. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Note

Questa funzione membro virtuale gestisce gli errori che si verificano quando vengono recuperati i record, ed è utile durante il recupero di righe bulk. È possibile eseguire l'override `CheckRowsetError` per implementare il proprio la gestione degli errori.

`CheckRowsetError` viene chiamato automaticamente in un'operazione di spostamento del cursore, ad esempio `Open`, `Requery`, o qualsiasi `Move` operazione. Viene passato il valore restituito della funzione API ODBC `SQLExtendedFetch`. La tabella seguente elenca i valori possibili per il *nRetCode* parametro.

|nRetCode|Descrizione|
|--------------|-----------------|
|SQL_SUCCESS|Funzione è stata completata correttamente. Nessuna informazione aggiuntiva è disponibile.|
|SQL_SUCCESS_WITH_INFO|Funzione è stata completata correttamente, eventualmente con un errore non irreversibile. Informazioni aggiuntive possono essere ottenute chiamando `SQLError`.|
|SQL_NO_DATA_FOUND|Tutte le righe dal set di risultati sono state recuperate.|
|SQL_ERROR|Funzione non riuscita. Informazioni aggiuntive possono essere ottenute chiamando `SQLError`.|
|SQL_INVALID_HANDLE|Funzione non è riuscita a causa di un handle di ambiente non valido, un handle di connessione o un handle di istruzione. Ciò indica un errore di programmazione. Nessuna informazione aggiuntiva è disponibile da `SQLError`.|
|SQL_STILL_EXECUTING|Una funzione che è stata avviata in modalità asincrona è ancora in esecuzione. Si noti che per impostazione predefinita, MFC non passeranno mai questo valore su `CheckRowsetError`; MFC continua chiamata `SQLExtendedFetch` fino a quando non viene non restituito non è più SQL_STILL_EXECUTING.|

Per altre informazioni sulle `SQLError`, vedi il Windows SDK. Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

##  <a name="close"></a>  CRecordset:: Close

Chiude il recordset.

```
virtual void Close();
```

### <a name="remarks"></a>Note

HSTMT ODBC e il framework allocato per il recordset tutta la memoria vengono deallocati. In genere dopo la chiamata `Close`, si elimina l'oggetto recordset C++ se è stato allocato con **nuovi**.

È possibile chiamare `Open` nuovamente dopo la chiamata `Close`. Ciò consente di riutilizzare l'oggetto recordset. L'alternativa consiste nel chiamare `Requery`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#17](../../mfc/codesnippet/cpp/crecordset-class_1.cpp)]

##  <a name="crecordset"></a>  CRecordset::CRecordset

Costruisce un oggetto `CRecordset`.

```
CRecordset(CDatabase* pDatabase = NULL);
```

### <a name="parameters"></a>Parametri

*pDatabase*<br/>
Contiene un puntatore a un `CDatabase` oggetto o il valore NULL. Se non è NULL e il `CDatabase` dell'oggetto `Open` funzione membro non è stata chiamata per connetterlo all'origine dati, l'oggetto recordset tenta di aprirlo per l'utente durante la propria `Open` chiamare. Se viene passato NULL, un `CDatabase` oggetto viene costruito e connesse usando le informazioni di origine dati specificata quando si deriva la classe recordset con ClassWizard.

### <a name="remarks"></a>Note

È possibile usare `CRecordset` direttamente oppure derivare una classe specifica dell'applicazione da `CRecordset`. È possibile utilizzare ClassWizard per derivare le classi di recordset.

> [!NOTE]
>  Una classe derivata *necessario* fornire il proprio costruttore. Nel costruttore della classe derivata, chiamare il costruttore `CRecordset::CRecordset`, passando i parametri appropriati insieme a esso.

Passare NULL al costruttore del recordset per avere una `CDatabase` oggetto creato e collegato automaticamente per l'utente. Si tratta di una sintassi abbreviata utile che non richiede la creazione e connettere un `CDatabase` oggetto prima della creazione del recordset.

### <a name="example"></a>Esempio

Per altre informazioni, vedere l'articolo [Recordset: Dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md).

##  <a name="delete"></a>  CRecordset::Delete

Elimina il record corrente.

```
virtual void Delete();
```

### <a name="remarks"></a>Note

Dopo un'eliminazione ha esito positivo, membri dati di campi del recordset vengono impostati su un valore Null e deve chiamare in modo esplicito uno del `Move` funzioni per eseguire la migrazione del record eliminato. Dopo che è la migrazione del record eliminato, non è possibile restituire a esso. Se l'origine dati supporta le transazioni, è possibile rendere il `Delete` delle chiamate parte di una transazione. Per altre informazioni, vedere l'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).

> [!NOTE]
>  Se è stato implementato il recupero di righe bulk, è possibile chiamare `Delete`. Questo comporterà un'asserzione non riuscita. Sebbene classe `CRecordset` non fornisce un meccanismo per l'aggiornamento di righe bulk di dati, è possibile scrivere funzioni personalizzate usando la funzione API ODBC `SQLSetPos`. Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

> [!CAUTION]
>  Il set di record deve essere aggiornabile e deve essere presente un record valido nel set di record corrente quando si chiama `Delete`; in caso contrario, si verifica un errore. Ad esempio, se si elimina un record ma non è possibile scorrere in un nuovo record prima di chiamare `Delete` anche in questo caso `Delete` genera una [CDBException](../../mfc/reference/cdbexception-class.md).

A differenza [AddNew](#addnew) e [Edit](#edit), una chiamata a `Delete` non è seguito da una chiamata al [Update](#update). Se un `Delete` chiamata ha esito negativo, i dati dei campi membri vengono lasciati invariate.

### <a name="example"></a>Esempio

Questo esempio viene illustrato un set di record creati nel frame di una funzione. Nell'esempio si presuppone l'esistenza di `m_dbCust`, una variabile membro di tipo `CDatabase` già connesso all'origine dati.

[!code-cpp[NVC_MFCDatabase#18](../../mfc/codesnippet/cpp/crecordset-class_2.cpp)]

##  <a name="dobulkfieldexchange"></a>  CRecordset::DoBulkFieldExchange

Chiamata eseguita per lo scambio di massa di righe di dati dall'origine dati per il recordset. Implementa bulk exchange di campi di record (RFX di massa).

```
virtual void DoBulkFieldExchange(CFieldExchange* pFX);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Un puntatore a un [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) oggetto. Il framework già avere imposterà automaticamente questo oggetto per specificare un contesto per l'operazione di scambio di campo.

### <a name="remarks"></a>Note

Quando viene implementato il recupero di righe bulk, il framework chiama questa funzione membro per trasferire automaticamente dati dall'origine dati all'oggetto recordset. `DoBulkFieldExchange` Inoltre, associa i membri dati del parametro, se presenti, da segnaposto di parametri nella stringa dell'istruzione SQL per la selezione del recordset.

Se non è implementato il recupero di righe bulk, il framework chiama [DoFieldExchange](#dofieldexchange). Per implementare il recupero di righe bulk, è necessario specificare il `CRecordset::useMultiRowFetch` opzione del *dwOptions* parametri nel [Open](#open) funzione membro.

> [!NOTE]
> `DoBulkFieldExchange` è disponibile solo se si usa una classe derivata da `CRecordset`. Se è stato creato un oggetto recordset direttamente dal `CRecordset`, è necessario chiamare il [GetFieldValue](#getfieldvalue) funzione membro per recuperare i dati.

Exchange di massa di campi di record (RFX di massa) è simile a campi di record (RFX). I dati viene automaticamente trasferiti dall'origine dati per l'oggetto recordset. Tuttavia, non è possibile chiamare `AddNew`, `Edit`, `Delete`, o `Update` per trasferire le modifiche nuovamente all'origine dati. Classe `CRecordset` attualmente non fornisce un meccanismo per aggiornare righe in blocco dei dati; tuttavia, è possibile scrivere funzioni personalizzate usando la funzione API ODBC `SQLSetPos`.

Si noti che ClassWizard non supporta exchange di massa di campi di record; Pertanto, è necessario eseguire l'override `DoBulkFieldExchange` manualmente scrivendo le chiamate alle funzioni RFX di massa. Per altre informazioni su queste funzioni, vedere l'argomento [funzioni RFX](../../mfc/reference/record-field-exchange-functions.md).

Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). Per informazioni correlate, vedere l'articolo [campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).

##  <a name="dofieldexchange"></a>  CRecordset::DoFieldExchange

Chiamata eseguita per lo scambio di dati (in entrambe le direzioni) tra i membri di dati del campo del set di record e record corrispondente nell'origine dati. Implementa campi di record (RFX).

```
virtual void DoFieldExchange(CFieldExchange* pFX);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Un puntatore a un [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) oggetto. Il framework già avere imposterà automaticamente questo oggetto per specificare un contesto per l'operazione di scambio di campo.

### <a name="remarks"></a>Note

Durante il recupero di righe bulk non è implementato, il framework chiama questa funzione membro per automaticamente lo scambio di dati tra i membri di dati del campo dell'oggetto recordset e rispettive colonne del record corrente nell'origine dati. `DoFieldExchange` Inoltre, associa i membri dati del parametro, se presenti, da segnaposto di parametri nella stringa dell'istruzione SQL per la selezione del recordset.

Se viene implementato il recupero di righe bulk, il framework chiama [DoBulkFieldExchange](#dobulkfieldexchange). Per implementare il recupero di righe bulk, è necessario specificare il `CRecordset::useMultiRowFetch` opzione del *dwOptions* parametri nel [Open](#open) funzione membro.

> [!NOTE]
> `DoFieldExchange` è disponibile solo se si usa una classe derivata da `CRecordset`. Se è stato creato un oggetto recordset direttamente dal `CRecordset`, è necessario chiamare il [GetFieldValue](#getfieldvalue) funzione membro per recuperare i dati.

Lo scambio di dati di campo, denominato il trasferimento di campi di record (RFX), funziona in entrambe le direzioni: da membri di dati di campi dell'oggetto recordset ai campi del record nell'origine dati e dal record nell'origine dei dati per l'oggetto recordset.

L'unica azione in genere è necessario eseguire per implementare `DoFieldExchange` per il recordset derivato classe consiste nel creare la classe con la creazione guidata classe e specificare i tipi di dati e i nomi dei membri dati del campo. È anche possibile aggiungere codice in cosa ClassWizard scrive per specificare i membri dati di parametro o per gestire tutte le colonne associate in modo dinamico. Per altre informazioni, vedere l'articolo [Recordset: Associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).

Quando si dichiara la classe derivata recordset con ClassWizard, la procedura guidata scrive un override di `DoFieldExchange` , che è simile al seguente:

[!code-cpp[NVC_MFCDatabase#19](../../mfc/codesnippet/cpp/crecordset-class_3.cpp)]

Per altre informazioni sulle funzioni RFX, vedere l'argomento [funzioni RFX](../../mfc/reference/record-field-exchange-functions.md).

Per ulteriori esempi e informazioni dettagliate sui `DoFieldExchange`, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md). Per informazioni generali su RFX, vedere l'articolo [Record Field Exchange](../../data/odbc/record-field-exchange-rfx.md).

##  <a name="edit"></a>  CRecordset::Edit

Consente di apportare modifiche al record corrente.

```
virtual void Edit();
```

### <a name="remarks"></a>Note

Dopo aver chiamato `Edit`, è possibile modificare i membri di dati campo reimpostando direttamente i relativi valori. L'operazione viene completata quando successivamente si chiama il [Update](#update) funzione membro per salvare le modifiche nell'origine dati.

> [!NOTE]
>  Se è stato implementato il recupero di righe bulk, è possibile chiamare `Edit`. Questo comporterà un'asserzione non riuscita. Sebbene classe `CRecordset` non fornisce un meccanismo per l'aggiornamento di righe bulk di dati, è possibile scrivere funzioni personalizzate usando la funzione API ODBC `SQLSetPos`. Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

`Edit` Salva i valori dei membri dati del recordset. Se si chiama `Edit`, apportare modifiche, quindi chiamare `Edit` anche in questo caso, vengono ripristinati i valori del record si trovavano prima del primo `Edit` chiamare.

In alcuni casi, è possibile aggiornare una colonna, rendendo Null (che non contengono dati). A tale scopo, chiamare [SetFieldNull](#setfieldnull) con un parametro di true per contrassegnare il campo Null; in questo modo anche la colonna da aggiornare. Se si desidera che un campo per essere scritte nell'origine dati anche se il relativo valore non è stato modificato, chiamare [SetFieldDirty](#setfielddirty) con un parametro true. Questo avviene anche se il campo ha il valore Null.

Se l'origine dati supporta le transazioni, è possibile rendere il `Edit` delle chiamate parte di una transazione. Si noti che è necessario chiamare [CDatabase::BeginTrans](../../mfc/reference/cdatabase-class.md#begintrans) prima di chiamare `Edit` e dopo l'apertura di recordset. Si noti inoltre che la chiamata [CDatabase:: CommitTrans](../../mfc/reference/cdatabase-class.md#committrans) non è un sostituto per chiamare il metodo `Update` per completare il `Edit` operazione. Per altre informazioni sulle transazioni, vedere la classe [CDatabase](../../mfc/reference/cdatabase-class.md).

A seconda della modalità di blocco corrente, il record in corso l'aggiornamento potrebbe essere bloccato dal `Edit` finché non si chiama `Update` o scorrere a un altro record, o potrebbe essere bloccata solo durante la `Edit` chiamare. È possibile modificare la modalità di blocco con [SetLockingMode](#setlockingmode).

Il valore precedente del record corrente viene ripristinato se si scorre verso un nuovo record prima di chiamare `Update`. Oggetto `CDBException` viene generata se si chiama `Edit` per un set di record che non possono essere aggiornati o se non sono presenti record corrente.

Per altre informazioni, vedere gli articoli [transazione (ODBC)](../../data/odbc/transaction-odbc.md) e [Recordset: Blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#20](../../mfc/codesnippet/cpp/crecordset-class_4.cpp)]

##  <a name="flushresultset"></a>  CRecordset::FlushResultSet

Recupera il successivo set di risultati di una query predefinita (stored procedure), se sono presenti più set di risultati.

```
BOOL FlushResultSet();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se sono presenti più set di risultati da recuperare; in caso contrario 0.

### <a name="remarks"></a>Note

È necessario chiamare `FlushResultSet` solo quando si è completato le operazioni con il cursore sul set di risultati corrente. Si noti che quando si recupera il risultato successivo impostato chiamando `FlushResultSet`, il cursore non è valido in tale set di risultati, è necessario chiamare il [MoveNext](#movenext) funzione membro dopo aver chiamato `FlushResultSet`.

Se una query predefinita Usa un parametro di output o parametri di input/output, è necessario chiamare `FlushResultSet` finché non viene ripristinata `FALSE` (il valore 0), per ottenere questi valori dei parametri.

`FlushResultSet` chiama la funzione API ODBC `SQLMoreResults`. Se `SQLMoreResults` restituisce SQL_ERROR o SQL_INVALID_HANDLE, quindi `FlushResultSet` verrà generata un'eccezione. Per altre informazioni sulle `SQLMoreResults`, vedi il Windows SDK.

La stored procedure deve aver associato i campi se si desidera chiamare `FlushResultSet`.

### <a name="example"></a>Esempio

Il codice seguente si presuppone che `COutParamRecordset` è un `CRecordset`-oggetto derivato in base a una query predefinita con un parametro di input e un parametro di output e presenza di più set di risultati. Si noti la struttura del [DoFieldExchange](#dofieldexchange) eseguire l'override.

[!code-cpp[NVC_MFCDatabase#21](../../mfc/codesnippet/cpp/crecordset-class_5.cpp)]

[!code-cpp[NVC_MFCDatabase#22](../../mfc/codesnippet/cpp/crecordset-class_6.cpp)]

##  <a name="getbookmark"></a>  CRecordset::GetBookmark

Ottiene il valore di segnalibro per il record corrente.

```
void GetBookmark(CDBVariant& varBookmark);
```

### <a name="parameters"></a>Parametri

*varBookmark*<br/>
Un riferimento a un [CDBVariant](../../mfc/reference/cdbvariant-class.md) oggetto che rappresenta il segnalibro sul record corrente.

### <a name="remarks"></a>Note

Per determinare se i segnalibri sono supportati nell'oggetto recordset, chiamare [CanBookmark](#canbookmark). Per rendere disponibili i segnalibri se sono supportate, è necessario impostare il `CRecordset::useBookmarks` opzione il *dwOptions* parametro del [Open](#open) funzione membro.

> [!NOTE]
>  Se i segnalibri non supportato o non è disponibile, la chiamata `GetBookmark` comporterà un'eccezione generata. I segnalibri non sono supportati nei recordset forward-only.

`GetBookmark` Assegna il valore del segnalibro del record corrente un `CDBVariant` oggetto. Per tornare al record specifico in qualsiasi momento dopo il passaggio a un altro record, chiamare [SetBookmark](#setbookmark) con i corrispondenti `CDBVariant` oggetto.

> [!NOTE]
>  Dopo alcune operazioni di recordset, segnalibri potrebbero non essere più validi. Ad esempio, se si chiama `GetBookmark` seguita da `Requery`, potrebbe non essere in grado di restituire i record con `SetBookmark`. Chiamare [CDatabase:: GetBookmarkPersistence](../../mfc/reference/cdatabase-class.md#getbookmarkpersistence) per verificare se è possibile chiamare `SetBookmark`.

Per altre informazioni sui segnalibri e di navigazione del recordset, vedere gli articoli [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md) e [Recordset: Scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

##  <a name="getdefaultconnect"></a>  CRecordset::GetDefaultConnect

Chiamato per ottenere la stringa di connessione predefinita.

```
virtual CString GetDefaultConnect();
```

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che contiene la stringa di connessione predefinita.

### <a name="remarks"></a>Note

Il framework chiama questa funzione membro per ottenere la stringa di connessione predefinito per l'origine dati su cui si basa il recordset. ClassWizard implementa questa funzione per l'utente identificando la stessa origine dati che è usare in ClassWizard per ottenere informazioni sulle tabelle e colonne. Si sarà probabilmente risulterà più pratico si basano su questa connessione predefinito durante lo sviluppo dell'applicazione. Ma la connessione predefinita potrebbe non essere appropriata per gli utenti dell'applicazione. Se è questo il caso, reimplementare la funzione corrente, eliminando la versione di ClassWizard. Per altre informazioni sulle stringhe di connessione, vedere l'articolo [origine dati (ODBC)](../../data/odbc/data-source-odbc.md).

##  <a name="getdefaultsql"></a>  CRecordset::GetDefaultSQL

Chiamato per ottenere la stringa SQL predefinito per l'esecuzione.

```
virtual CString GetDefaultSQL();
```

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che contiene l'istruzione SQL predefinita.

### <a name="remarks"></a>Note

Il framework chiama questa funzione membro per ottenere l'istruzione SQL predefinita su cui si basa il recordset. Potrebbe trattarsi di un nome di tabella o di un'istruzione SQL **SELECT**.

L'istruzione SQL predefinita è indirettamente definire dalla dichiarazione della classe recordset con ClassWizard e ClassWizard esegue questa attività per l'utente.

Se è necessaria la stringa dell'istruzione SQL per uso personale, chiamare `GetSQL`, che restituisce l'istruzione SQL utilizzata per selezionare i record del recordset quando è stato aperto. È possibile modificare la stringa SQL predefinito nell'override della classe di `GetDefaultSQL`. Ad esempio, è possibile specificare una chiamata a una query predefinita usando un **CHIAMARE** istruzione. (Si noti che, tuttavia, se Modifica `GetDefaultSQL`, è necessario anche modificare `m_nFields` corrispondere al numero di colonne nell'origine dati.)

Per altre informazioni, vedere l'articolo [Recordset: Dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md).

> [!CAUTION]
>  Il nome della tabella sarà vuoto se il framework non è stato possibile identificare un nome di tabella, se sono stati specificati più nomi di tabella o una **CHIAMARE** istruzione potrebbe non essere interpretata. Si noti che quando si usa un **CHIAMARE** istruzione, non è necessario inserire uno spazio vuoto tra la parentesi graffa e la **CHIAMARE** (parola chiave), né si devono inserire spazi vuoti prima della parentesi graffa o prima di  **Selezionare** parola chiave in un **selezionare** istruzione.

##  <a name="getfieldvalue"></a>  CRecordset::GetFieldValue

Recupera i dati di campo nel record corrente.

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

*lpszName*<br/>
Il nome di un campo.

*varValu*riferimento e A un [CDBVariant](../../mfc/reference/cdbvariant-class.md) che archivierà il valore del campo.

*nFieldType*<br/>
Il tipo di dati C ODBC del campo. Utilizzando il valore predefinito, DEFAULT_FIELD_TYPE, forza `GetFieldValue` per determinare il tipo di dati C dal tipo di dati SQL, in base alla tabella seguente. In caso contrario, è possibile specificare i dati digitati direttamente o scegliere un tipo di dati compatibili. ad esempio, è possibile archiviare qualsiasi tipo di dati in SQL_C_CHAR.

|Tipo di dati C|Tipo di dati SQL|
|-----------------|-------------------|
|SQL_C_BIT|SQL_BIT|
|SQL_C_UTINYINT|SQL_TINYINT|
|SQL_C_SSHORT|SQL_SMALLINT|
|SQL_C_SLONG|SQL_INTEGER|
|SQL_C_FLOAT|SQL_REAL|
|SQL_C_DOUBLE|SQL_FLOATSQL_DOUBLE|
|SQL_C_TIMESTAMP|SQL_DATESQL_TIMESQL_TIMESTAMP|
|SQL_C_CHAR|SQL_NUMERICSQL_DECIMALSQL_BIGINTSQL_CHARSQL_VARCHARSQL_LONGVARCHAR|
|SQL_C_BINARY|SQL_BINARYSQL_VARBINARYSQL_LONGVARBINARY|

Per altre informazioni sui tipi di dati ODBC, vedere gli argomenti "Tipi di dati di SQL" e "Tipi di dati C" in appendice D del SDK di Windows.

*nIndex*<br/>
Indice a base zero del campo.

*strValue*<br/>
Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) che archivierà il valore del campo oggetto convertito in testo, indipendentemente dal tipo di dati del campo.

### <a name="remarks"></a>Note

È possibile cercare un campo in base al nome o all'indice. È possibile archiviare il valore del campo in uno una `CDBVariant` oggetto o un `CString` oggetto.

Se è stato implementato il recupero di righe bulk, il record corrente viene sempre posizionato sul primo record in un set di righe. Per utilizzare `GetFieldValue` su un record all'interno di un determinato set di righe, è necessario chiamare prima il [SetRowsetCursorPosition](#setrowsetcursorposition) funzione membro per spostare il cursore nella riga desiderata all'interno di tale set di righe. Chiamare quindi `GetFieldValue` per quella riga. Per implementare il recupero di righe bulk, è necessario specificare il `CRecordset::useMultiRowFetch` opzione del *dwOptions* parametri nel [Open](#open) funzione membro.

È possibile usare `GetFieldValue` recuperare in modo dinamico i campi in fase di esecuzione anziché in modo statico associarli in fase di progettazione. Ad esempio, se è stato dichiarato un oggetto recordset direttamente dal `CRecordset`, è necessario usare `GetFieldValue` per recuperare i dati del campo; il trasferimento di campi di record (RFX) o blocco exchange di campi di record (RFX di massa), non è implementata.

> [!NOTE]
>  Se si dichiara un oggetto recordset senza che deriva da `CRecordset`, non è caricato la libreria di cursori ODBC. La libreria di cursori richiede che il recordset abbiano almeno una colonna associata; Tuttavia, quando si usa `CRecordset` direttamente, nessuna delle colonne associata. Le funzioni membro [CDatabase](../../mfc/reference/cdatabase-class.md#openex) e [CDatabase:: Open](../../mfc/reference/cdatabase-class.md#open) controllano se verrà caricata la libreria di cursori.

`GetFieldValue` chiama la funzione API ODBC `SQLGetData`. Se il driver restituisce il valore SQL_NO_TOTAL per la lunghezza effettiva del valore del campo, `GetFieldValue` genera un'eccezione. Per altre informazioni sulle `SQLGetData`, vedi il Windows SDK.

### <a name="example"></a>Esempio

Esempio di codice seguente illustra le chiamate a `GetFieldValue` per un oggetto recordset dichiarati direttamente da `CRecordset`.

[!code-cpp[NVC_MFCDatabase#23](../../mfc/codesnippet/cpp/crecordset-class_7.cpp)]

> [!NOTE]
>  A differenza della classe DAO `CDaoRecordset`, `CRecordset` non ha un `SetFieldValue` funzione membro. Se si crea un oggetto direttamente da `CRecordset`, è in sola lettura.

Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

##  <a name="getodbcfieldcount"></a>  CRecordset::GetODBCFieldCount

Recupera il numero totale di campi nell'oggetto recordset.

```
short GetODBCFieldCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di campi del recordset.

### <a name="remarks"></a>Note

Per altre informazioni sulla creazione di recordset, vedere l'articolo [Recordset: Creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md).

##  <a name="getodbcfieldinfo"></a>  CRecordset::GetODBCFieldInfo

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

*lpszName*<br/>
Il nome di un campo.

*fieldinfo*<br/>
Un riferimento a un `CODBCFieldInfo` struttura.

*nIndex*<br/>
Indice a base zero del campo.

### <a name="remarks"></a>Note

Una versione della funzione consente di cercare un campo in base al nome. L'altra versione consente di cercare un campo in base all'indice.

Per una descrizione sui dati restituiti, vedere la [CODBCFieldInfo](../../mfc/reference/codbcfieldinfo-structure.md) struttura.

Per altre informazioni sulla creazione di recordset, vedere l'articolo [Recordset: Creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md).

##  <a name="getrecordcount"></a>  CRecordset::GetRecordCount

Determina le dimensioni del set di record.

```
long GetRecordCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di record del recordset; 0 se il recordset non contiene alcun record; oppure -1 se non è possibile determinare il numero di record.

### <a name="remarks"></a>Note

> [!CAUTION]
>  Il functoid Conteggio record viene gestito come un "livello più alto," il record con numero più alto ancora considerato come l'utente si sposta tra i record. Il numero totale di record è noto solo dopo che l'utente ha spostato oltre l'ultimo record. Per motivi di prestazioni, il conteggio non viene aggiornato quando si chiama `MoveLast`. Per conteggiare i record, chiamare `MoveNext` ripetutamente finché `IsEOF` restituisce diverso da zero. Aggiunta di un record tramite `CRecordset:AddNew` e `Update` aumenta il conteggio; l'eliminazione di un record tramite `CRecordset::Delete` diminuisce il conteggio.

##  <a name="getrowsetsize"></a>  CRecordset::GetRowsetSize

Ottiene l'impostazione corrente per il numero di righe da recuperare durante un'operazione di recupero specificato.

```
DWORD GetRowsetSize() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di righe da recuperare durante un'operazione di recupero specificato.

### <a name="remarks"></a>Note

Se si usa il recupero di righe bulk, le dimensioni del set di righe predefinito quando si apre il recordset sono 25; in caso contrario, è 1.

Per implementare il recupero di righe bulk, è necessario specificare il `CRecordset::useMultiRowFetch` opzione il *dwOptions* parametri del [Open](#open) funzione membro. Per modificare l'impostazione per le dimensioni del set di righe, chiamare [SetRowsetSize](#setrowsetsize).

Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

##  <a name="getrowsfetched"></a>  CRecordset::GetRowsFetched

Determina il numero di record sono stati effettivamente recuperato dopo un'operazione di recupero.

```
DWORD GetRowsFetched() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di righe recuperato dall'origine dati dopo un'operazione di recupero specificato.

### <a name="remarks"></a>Note

Ciò è utile quando è stato implementato il recupero di righe bulk. Le dimensioni del set di righe indicano in genere il numero di righe sarà recuperato da un'operazione di recupero; Tuttavia, il numero totale di righe nel recordset influisce anche sulla verrà recuperato il numero di righe in un set di righe. Ad esempio, se il recordset ha 10 record con un'impostazione di dimensioni del set di righe pari a 4, quindi eseguire i cicli di recordset chiamando `MoveNext` comporterà il set di righe finale contenenti record solo 2.

Per implementare il recupero di righe bulk, è necessario specificare il `CRecordset::useMultiRowFetch` opzione il *dwOptions* parametri del [Open](#open) funzione membro. Per specificare le dimensioni del set di righe, chiamare [SetRowsetSize](#setrowsetsize).

Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#24](../../mfc/codesnippet/cpp/crecordset-class_8.cpp)]

##  <a name="getrowstatus"></a>  CRecordset::GetRowStatus

Ottiene lo stato per una riga nel set di righe corrente.

```
WORD GetRowStatus(WORD wRow) const;
```

### <a name="parameters"></a>Parametri

*wRow*<br/>
Basato su una posizione di una riga nel set di righe corrente. Questo valore può variare da 1 per le dimensioni del set di righe.

### <a name="return-value"></a>Valore restituito

Un valore di stato per la riga. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Note

`GetRowStatus` Restituisce un valore che indica una qualsiasi modifica dello stato per la riga dall'ultimo recuperati dall'origine dei dati, o che nessuna riga corrispondente *wRow* è stata recuperata. Nella tabella seguente sono elencati i valori restituiti possibili.

|Valore di stato|Descrizione|
|------------------|-----------------|
|SQL_ROW_SUCCESS|La riga rimane invariata.|
|SQL_ROW_UPDATED|La riga è stata aggiornata.|
|SQL_ROW_DELETED|La riga è stata eliminata.|
|SQL_ROW_ADDED|La riga è stata aggiunta.|
|SQL_ROW_ERROR|La riga è Impossibile recuperare i a causa di un errore.|
|SQL_ROW_NOROW|Nessuna riga corrispondente a *wRow*.|

Per altre informazioni, vedere la funzione API ODBC `SQLExtendedFetch` nel SDK di Windows.

##  <a name="getstatus"></a>  CRecordset::GetStatus

Determina l'indice del record corrente nel set di record e se è stato individuato l'ultimo record.

```
void GetStatus(CRecordsetStatus& rStatus) const;
```

### <a name="parameters"></a>Parametri

*rStatus*<br/>
Riferimento a un oggetto `CRecordsetStatus`. Per altre informazioni, vedere la sezione Osservazioni.

### <a name="remarks"></a>Note

`CRecordset` tenta di tenere traccia dell'indice, ma in alcuni casi ciò potrebbe non essere possibile. Visualizzare [GetRecordCount](#getrecordcount) per una spiegazione.

Il `CRecordsetStatus` struttura ha il formato seguente:

```cpp
struct CRecordsetStatus
{
    long m_lCurrentRecord;
    BOOL m_bRecordCountFinal;
};
```

I due membri della `CRecordsetStatus` hanno i significati seguenti:

- `m_lCurrentRecord` Contiene l'indice in base zero del record corrente nell'oggetto recordset, se noto. Se l'indice non può essere determinata, questo membro contiene AFX_CURRENT_RECORD_UNDEFINED (-2). Se `IsBOF` è TRUE (set di record vuoto o il tentativo di scorrere prima primo record), quindi `m_lCurrentRecord` è impostato su AFX_CURRENT_RECORD_BOF (-1). Se trova il primo record, quindi è impostata su 0, in secondo luogo record 1 e così via.

- `m_bRecordCountFinal` Diverso da zero se il numero totale di record del recordset è stato determinato. In genere, questo deve essere eseguito da partire dall'inizio del set di record e la chiamata `MoveNext` fino a quando non `IsEOF` restituisce diverso da zero. Se questo membro è zero, il record conteggio restituito da `GetRecordCount`, se non -1, è solo un conteggio di "numero più alto" dei record.

##  <a name="getsql"></a>  CRecordset::GetSQL

Chiamare questa funzione membro per ottenere l'istruzione SQL che è stato usato per selezionare i record del recordset quando è stato aperto.

```
const CString& GetSQL() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto **const** fanno riferimento a un `CString` che contiene l'istruzione SQL.

### <a name="remarks"></a>Note

Questo sarà in genere un database SQL **seleziona** istruzione. La stringa restituita da `GetSQL` è di sola lettura.

La stringa restituita da `GetSQL` viene in genere diverse da qualsiasi stringa potrebbe essere passato al recordset nel *lpszSQL* parametro per il `Open` funzione membro. Infatti il recordset crea un'istruzione SQL completa basata su ciò che è passato alla `Open`, che cosa è stato specificato con ClassWizard, ciò che è stato specificato nel `m_strFilter` e `m_strSort` membri dati e i parametri è possibile specificato. Per informazioni dettagliate su come il recordset costruisce l'istruzione SQL, vedere l'articolo [Recordset: Selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md).

> [!NOTE]
>  Chiamare questa funzione membro solo dopo la chiamata [aperto](#open).

##  <a name="gettablename"></a>  CRecordset::GetTableName

Ottiene il nome della tabella SQL in cui si basa la query del recordset.

```
const CString& GetTableName() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto **const** fanno riferimento a un `CString` che contiene la tabella di nome, se il recordset è in una tabella di base; in caso contrario, una stringa vuota.

### <a name="remarks"></a>Note

`GetTableName` è valido solo se il recordset è basato su una tabella, non un join di più tabelle o di una query predefinita (stored procedure). Il nome è di sola lettura.

> [!NOTE]
>  Chiamare questa funzione membro solo dopo la chiamata [aperto](#open).

##  <a name="isbof"></a>  CRecordset::IsBOF

Restituisce diversi da zero se il set di record è stato posizionato prima del primo record. Non è presente nessun record corrente.

```
BOOL IsBOF() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset non contiene alcun record o se è eseguito lo scorrimento all'indietro prima del primo record; in caso contrario 0.

### <a name="remarks"></a>Note

Chiamare questa funzione membro prima passare dal record a record per informazioni su se è stata prima del primo record del recordset. È anche possibile usare `IsBOF` insieme a `IsEOF` per determinare se il set di record contiene record o è vuoto. Immediatamente dopo la chiamata `Open`, se il recordset non contiene alcun record, `IsBOF` restituisce diverso da zero. Quando si apre un oggetto recordset che include almeno un record, il primo record è il record corrente e `IsBOF` restituisce 0.

Se il primo record corrisponde al record corrente e si chiama `MovePrev`, `IsBOF` successivamente restituirà diverso da zero. Se `IsBOF` restituisce diverso da zero e si chiama `MovePrev`, si verifica un errore. Se `IsBOF` restituisce un valore diverso da zero, il record corrente è non definito e qualsiasi azione che richiede un record corrente verrà generato un errore.

### <a name="example"></a>Esempio

Questo esempio viene usato `IsBOF` e `IsEOF` per rilevare i limiti di un recordset, mentre il codice scorre attraverso il recordset in entrambe le direzioni.

[!code-cpp[NVC_MFCDatabase#25](../../mfc/codesnippet/cpp/crecordset-class_9.cpp)]

##  <a name="isdeleted"></a>  CRecordset::IsDeleted

Determina se il record corrente è stato eliminato.

```
BOOL IsDeleted() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset è posizionato su un record eliminato. in caso contrario 0.

### <a name="remarks"></a>Note

Se si scorre verso un record e `IsDeleted` restituisce TRUE (diverso da zero), quindi è necessario scorrere verso un altro record prima di poter eseguire qualsiasi altra operazione di recordset.

Il risultato del `IsDeleted` dipende da molti fattori, ad esempio il tipo di recordset, se il recordset è aggiornabile, che indica se è specificato il `CRecordset::skipDeletedRecords` opzione relativa al momento dell'apertura del recordset, se i pacchetti di driver record eliminati e se sono presenti più utenti.

Per altre informazioni sulle `CRecordset::skipDeletedRecords` e driver di compressione, vedere la [Open](#open) funzione membro.

> [!NOTE]
>  Se è stato implementato il recupero di righe bulk, è necessario chiamare non `IsDeleted`. Chiamare invece il [GetRowStatus](#getrowstatus) funzione membro. Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

##  <a name="iseof"></a>  CRecordset::IsEOF

Restituisce diversi da zero se il set di record è stato posizionato dopo l'ultimo record. Non è presente nessun record corrente.

```
BOOL IsEOF() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset non contiene alcun record o se è eseguito lo scorrimento oltre l'ultimo record; in caso contrario 0.

### <a name="remarks"></a>Note

Chiamare questa funzione membro durante lo scorrimento di record per record per informazioni su se sono stati superati l'ultimo record del recordset. È anche possibile usare `IsEOF` per determinare se il set di record contiene record o è vuoto. Immediatamente dopo la chiamata `Open`, se il recordset non contiene alcun record, `IsEOF` restituisce diverso da zero. Quando si apre un oggetto recordset che include almeno un record, il primo record è il record corrente e `IsEOF` restituisce 0.

Se l'ultimo record è il record corrente quando si chiama `MoveNext`, `IsEOF` successivamente restituirà diverso da zero. Se `IsEOF` restituisce diverso da zero e si chiama `MoveNext`, si verifica un errore. Se `IsEOF` restituisce un valore diverso da zero, il record corrente è non definito e qualsiasi azione che richiede un record corrente verrà generato un errore.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [IsBOF](#isbof).

##  <a name="isfielddirty"></a>  CRecordset::IsFieldDirty

Determina se il membro dati di campo specificato è stato modificato dal [Edit](#edit) oppure [AddNew](#addnew) è stato chiamato.

```
BOOL IsFieldDirty(void* pv);
```

### <a name="parameters"></a>Parametri

*pv*<br/>
Un puntatore a membro di dati di campo cui si desidera controllare, oppure NULL per determinare se i campi sono dirty lo stato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il membro dati di campo specificato è stato modificato dal momento della chiamata `AddNew` o `Edit`; in caso contrario, 0.

### <a name="remarks"></a>Note

I dati in tutti i membri di dati dei campi modificati verranno trasferiti al record nell'origine dati quando il record corrente viene aggiornato da una chiamata ai [Update](#update) funzione membro di `CRecordset` (segue una chiamata a `Edit` o`AddNew`).

> [!NOTE]
>  Questa funzione membro non è applicabile per i recordset che utilizzano il recupero di righe bulk. Se è stato implementato il recupero di righe bulk, quindi `IsFieldDirty` restituirà sempre FALSE e causerà un'asserzione non riuscita. Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

La chiamata `IsFieldDirty` reimposterà gli effetti delle precedenti chiamate a [SetFieldDirty](#setfielddirty) poiché lo stato di modificato del campo viene rivalutato. Nel `AddNew` i casi, se il valore del campo corrente è diverso dal valore pseudo null, il campo stato è impostato dirty. Nel `Edit` case, se il valore del campo è diverso dal valore memorizzato nella cache, il campo stato viene impostato come dirty.

`IsFieldDirty` viene implementata tramite [DoFieldExchange](#dofieldexchange).

Per altre informazioni sul flag modificato, vedere l'articolo [Recordset: Selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md).

##  <a name="isfieldnull"></a>  CRecordset::IsFieldNull

Restituisce diversi da zero se il campo specificato nel record corrente è Null (non ha alcun valore).

```
BOOL IsFieldNull(void* pv);
```

### <a name="parameters"></a>Parametri

*pv*<br/>
Puntatore al membro dati campo il cui stato desiderato da controllare, oppure NULL per determinare se i campi sono Null.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il membro dati di campo specificato è contrassegnato come Null. in caso contrario 0.

### <a name="remarks"></a>Note

Chiamare questa funzione membro per determinare se il membro dati di campo specificato di un set di record è stato contrassegnato come Null. (Nella terminologia dei database, Null significa "non having alcun valore" e non è lo stesso come valori NULL in C++). Se un membro dati del campo è contrassegnato come Null, viene interpretato come una colonna del record corrente per cui non è disponibile alcun valore.

> [!NOTE]
>  Questa funzione membro non è applicabile per i recordset che utilizzano il recupero di righe bulk. Se è stato implementato il recupero di righe bulk, quindi `IsFieldNull` restituirà sempre FALSE e causerà un'asserzione non riuscita. Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

`IsFieldNull` viene implementata tramite [DoFieldExchange](#dofieldexchange).

##  <a name="isfieldnullable"></a>  CRecordset::IsFieldNullable

Restituisce diversi da zero se il campo specificato nel record corrente può essere impostato su Null (non con nessun valore).

```
BOOL IsFieldNullable(void* pv);
```

### <a name="parameters"></a>Parametri

*pv*<br/>
Puntatore al membro dati campo il cui stato desiderato da controllare, oppure NULL per determinare se uno dei campi può essere impostato su un valore Null.

### <a name="remarks"></a>Note

Chiamare questa funzione membro per determinare se il membro dati di campo specificato è "ammette valori null" (può essere impostato su un valore Null. C++ NULL non è lo stesso come Null, ovvero, nella terminologia dei database, "non having alcun valore").

> [!NOTE]
>  Se è stato implementato il recupero di righe bulk, è possibile chiamare `IsFieldNullable`. Chiamare invece il [GetODBCFieldInfo](#getodbcfieldinfo) funzione membro per determinare se un campo può essere impostato su un valore Null. Si noti che è possibile chiamare sempre `GetODBCFieldInfo`, indipendentemente dal fatto che è stato implementato il recupero di righe bulk. Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Un campo che non può essere Null deve avere un valore. Se si prova a impostare un tale campo su Null quando si aggiunge o aggiorna un record, l'origine dati rifiuta l'aggiunta o aggiornamento, e [aggiornare](#update) verrà generata un'eccezione. L'eccezione si verifica quando si chiama `Update`, non quando si chiama [SetFieldNull](#setfieldnull).

Utilizzo di NULL per il primo argomento della funzione verrà applicata solo alla funzione `outputColumn` campi, non `param` campi. Ad esempio, la chiamata

[!code-cpp[NVC_MFCDatabase#26](../../mfc/codesnippet/cpp/crecordset-class_10.cpp)]

verrà impostato solo `outputColumn` campi su NULL. `param` campi non saranno interessati.

A lavorarvi `param` campi, è necessario fornire l'indirizzo effettivo della persona `param` da usare, ad esempio:

[!code-cpp[NVC_MFCDatabase#27](../../mfc/codesnippet/cpp/crecordset-class_11.cpp)]

Ciò significa che non è possibile impostare tutti i `param` campi su NULL, come puoi fare con `outputColumn` campi.

`IsFieldNullable` viene implementata tramite [DoFieldExchange](#dofieldexchange).

##  <a name="isopen"></a>  CRecordset::IsOpen

Determina se il set di record è già aperto.

```
BOOL IsOpen() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto recordset [Open](#open) o [Requery](#requery) funzione membro è stato precedentemente chiamata e il set di record non è stato chiuso; in caso contrario 0.

##  <a name="m_hstmt"></a>  CRecordset::m_hstmt

Contiene un handle per la struttura di data istruzione ODBC, di tipo HSTMT, associato al recordset.

### <a name="remarks"></a>Note

Ogni query per un'origine dati ODBC è associato a un oggetto HSTMT.

> [!CAUTION]
>  Non utilizzare `m_hstmt` prima [Open](#open) è stato chiamato.

In genere non occorre accedere HSTMT direttamente, ma potrebbe essere necessario per l'esecuzione diretta delle istruzioni SQL. Il `ExecuteSQL` la funzione membro della classe `CDatabase` fornisce un esempio d'uso `m_hstmt`.

##  <a name="m_nfields"></a>  CRecordset::m_nFields

Contiene il numero di membri dati di campi della classe recordset. vale a dire il numero di colonne selezionate dal recordset dall'origine dati.

### <a name="remarks"></a>Note

È necessario inizializzare il costruttore della classe recordset `m_nFields` con il numero corretto. Se non è stato implementato il recupero di righe bulk, ClassWizard scrive tale inizializzazione per l'utente quando si tenta di recordset: dichiarazione di classe. È possibile anche scriverla manualmente.

Il framework utilizza questo numero per gestire l'interazione tra i membri di dati di campo e rispettive colonne del record corrente nell'origine dati.

> [!CAUTION]
>  Questo numero deve corrispondere al numero di "colonne di output", registrata nel `DoFieldExchange` oppure `DoBulkFieldExchange` dopo una chiamata a [SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype) con il parametro `CFieldExchange::outputColumn`.

È possibile associare le colonne in modo dinamico, come illustrato nell'articolo "Recordset: Associazione in modo dinamico le colonne di dati." Se in questo caso, è necessario aumentare il conteggio nella `m_nFields` in modo da riflettere il numero di funzioni RFX e RFX di massa chiamate `DoFieldExchange` o `DoBulkFieldExchange` funzione membro per le colonne associate in modo dinamico.

Per altre informazioni, vedere gli articoli [Recordset: Associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md) e [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

Vedere l'articolo [Record Field Exchange: Utilizzo di RFX](../../data/odbc/record-field-exchange-using-rfx.md).

##  <a name="m_nparams"></a>  CRecordset::m_nParams

Contiene il numero di membri dati di parametro nella classe recordset. vale a dire il numero di parametri passata con la query del recordset.

### <a name="remarks"></a>Note

Se la classe recordset dispone di alcun membro dati di parametro, è necessario inizializzare il costruttore della classe `m_nParams` con il numero corretto. Il valore di `m_nParams` il valore predefinito è 0. Se si aggiungono membri di dati di parametro (che è necessario eseguire manualmente) è necessario aggiungere anche manualmente un'inizializzazione nel costruttore della classe in modo da riflettere il numero di parametri (che deve essere grande almeno come il numero di ' segnaposto nel `m_strFilter` o`m_strSort`stringa).

Quando Parametrizza la query del recordset, il framework utilizza questo numero.

> [!CAUTION]
>  Questo numero deve corrispondere al numero di "params", registrata nel `DoFieldExchange` oppure `DoBulkFieldExchange` dopo una chiamata a [SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype) con un valore del parametro `CFieldExchange::inputParam`, `CFieldExchange::param`, `CFieldExchange::outputParam`, o `CFieldExchange::inoutParam`.

### <a name="example"></a>Esempio

  Vedere gli articoli [Recordset: Parametrizzazione di un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) e [Record Field Exchange: Utilizzo di RFX](../../data/odbc/record-field-exchange-using-rfx.md).

##  <a name="m_pdatabase"></a>  CRecordset::m_pDatabase

Contiene un puntatore al `CDatabase` oggetto attraverso il quale il recordset è connesso a un'origine dati.

### <a name="remarks"></a>Note

Questa variabile viene impostata in due modi. In genere, si passa un puntatore a un già connesso `CDatabase` dell'oggetto quando si costruisce l'oggetto recordset. Se si passa NULL invece `CRecordset` crea un `CDatabase` dell'oggetto per l'utente e lo connette. In entrambi i casi `CRecordset` memorizza il puntatore del mouse in questa variabile.

In genere non direttamente dovrai utilizzare il puntatore archiviato in `m_pDatabase`. Se si scrivono le tue estensioni `CRecordset`, tuttavia, potrebbe essere necessario usare il puntatore del mouse. Ad esempio, potrebbe essere necessario il puntatore del mouse se genera il proprio `CDBException`s. Potrebbe essere necessario se è necessario eseguire un'operazione usando lo stesso `CDatabase` oggetto, ad esempio l'esecuzione di transazioni, impostazione dei timeout, o la chiamata di `ExecuteSQL` funzione membro di classe `CDatabase` per eseguire istruzioni SQL direttamente.

##  <a name="m_strfilter"></a>  CRecordset::m_strFilter

Dopo aver creato l'oggetto recordset, ma prima di chiamare relativi `Open` membro di funzione, usare questo membro dei dati per archiviare una `CString` contenente un database SQL **in cui** clausola.

### <a name="remarks"></a>Note

Il recordset Usa questa stringa per vincolare (o filtrare) i record vengono selezionati durante la `Open` o `Requery` chiamare. Ciò è utile per la selezione di un subset di record, ad esempio "tutti i venditori in base a California" ("state = CA"). La sintassi ODBC SQL per un **in cui** clausola è

`WHERE search-condition`

Si noti che non si include il **in cui** parola chiave della stringa. Il framework di fornirà.

È anche possibile parametrizzare la stringa di filtro inserendo ' segnaposto, dichiara un membro dati di parametro nella classe per ogni segnaposto e passaggio di parametri per il recordset in fase di esecuzione. Ciò consente di costruire il filtro in fase di esecuzione. Per altre informazioni, vedere l'articolo [Recordset: Parametrizzazione di un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

Per altre informazioni su SQL **in cui** clausole, vedere l'articolo [SQL](../../data/odbc/sql.md). Per altre informazioni sulla selezione e filtrare i record, vedere l'articolo [Recordset: Filtrare i record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#30](../../mfc/codesnippet/cpp/crecordset-class_12.cpp)]

##  <a name="m_strsort"></a>  CRecordset::m_strSort

Dopo aver creato l'oggetto recordset, ma prima di chiamare relativi `Open` membro di funzione, usare questo membro dei dati per archiviare una `CString` contenente un database SQL **ORDER BY** clausola.

### <a name="remarks"></a>Note

Il recordset Usa questa stringa per ordinare i record vengono selezionati durante la `Open` o `Requery` chiamare. È possibile usare questa funzionalità per ordinare un recordset in una o più colonne. La sintassi ODBC SQL per un **ORDER BY** clausola è

`ORDER BY sort-specification [, sort-specification]...`

in cui una specifica di ordinamento è un numero intero o un nome di colonna. È anche possibile specificare l'ordine crescente o decrescente (l'ordine è crescente per impostazione predefinita) mediante l'aggiunta all'elenco delle colonne nella stringa di ordinamento "ASC" o "DESC". I record selezionati vengono ordinati prima in base alla prima colonna elencata e quindi il secondo e così via. Si potrebbe ad esempio, ordinare un recordset "Customers" dal cognome e quindi al nome. Il numero di colonne che è possibile elencare dipende dall'origine dati. Per altre informazioni, vedere il SDK di Windows.

Si noti che non si include il **ORDER BY** parola chiave della stringa. Il framework di fornirà.

Per altre informazioni sulle clausole SQL, vedere l'articolo [SQL](../../data/odbc/sql.md). Per altre informazioni sull'ordinamento dei record, vedere l'articolo [Recordset: Ordinamento dei record (ODBC)](../../data/odbc/recordset-sorting-records-odbc.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#31](../../mfc/codesnippet/cpp/crecordset-class_13.cpp)]

##  <a name="move"></a>  CRecordset

Sposta il puntatore al record corrente all'interno del recordset, Avanti o indietro.

```
virtual void Move(
    long nRows,
    WORD wFetchType = SQL_FETCH_RELATIVE);
```

### <a name="parameters"></a>Parametri

*nRows*<br/>
Il numero di righe da spostare in avanti o indietro. I valori positivi spostano in avanti, verso la fine del set di record. I valori negativi spostano all'indietro, verso l'inizio.

*wFetchType*<br/>
Determina il set di righe che `Move` recupererà. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Note

Se si passa un valore pari a 0 per *nRows*, `Move` aggiorna il record corrente. `Move` terminerà qualsiasi corrente `AddNew` oppure `Edit` modalità che verrà ripristinato il valore del record corrente prima `AddNew` o `Edit` è stato chiamato.

> [!NOTE]
>  Quando si sposta all'interno di un recordset, non è possibile ignorare i record eliminati. Visualizzare [CRecordset::IsDeleted](#isdeleted) per altre informazioni. Quando si apre un `CRecordset` con il `skipDeletedRecords` impostata, l'opzione `Move` effettua un'asserzione se il *nRows* parametro è 0. Questo comportamento impedisce l'aggiornamento di righe eliminate da altre applicazioni client utilizzando gli stessi dati. Vedere le *dwOption* parametro nel [Open](#open) per una descrizione di `skipDeletedRecords`.

`Move` Riposiziona il recordset dal set di righe. In base ai valori per *nRows* e *wFetchType*, `Move` recupera set di righe appropriato e quindi effettua il primo record in tale set di righe del record corrente. Se non è stato implementato il recupero di righe bulk, le dimensioni del set di righe sono sempre 1. Durante il recupero di un set di righe `Move` chiama direttamente il [CheckRowsetError](#checkrowseterror) funzione membro per gestire eventuali errori risultanti dall'operazione di recupero.

A seconda dei valori si passa, `Move` equivale ad altri `CRecordset` funzioni membro. In particolare, il valore di *wFetchType* può indicare una funzione membro che è più intuitiva e spesso il metodo preferito per lo spostamento del record corrente.

La tabella seguente elenca i possibili valori per *wFetchType*, il set di righe che `Move` recupererà base *wFetchType* e *nRows*e qualsiasi equivalente membro funzione corrispondente *wFetchType*.

|wFetchType|Set di righe recuperate|Funzione membro equivalente|
|----------------|--------------------|--------------------------------|
|SQL_FETCH_RELATIVE (valore predefinito)|Il set di righe a partire *nRows* le righe della prima riga nel set di righe corrente.||
|SQL_FETCH_NEXT|Il set di righe successivo. *nRows* viene ignorato.|[MoveNext](#movenext)|
|SQL_FETCH_PRIOR|Il set di righe precedente. *nRows* viene ignorato.|[MovePrev](#moveprev)|
|SQL_FETCH_FIRST|Il primo set di righe nel set di record; *nRows* viene ignorato.|[MoveFirst](#movefirst)|
|SQL_FETCH_LAST|L'ultimo intero set di righe nel set di record; *nRows* viene ignorato.|[MoveLast](#movelast)|
|SQL_FETCH_ABSOLUTE|Se *nRows* > 0, il set di righe a partire *nRows* righe dall'inizio del set di record. Se *nRows* < 0, il set di righe a partire *nRows* righe dalla fine del set di record. Se *nRows* = 0, viene restituita una condizione di inizio del file (BOF).|[SetAbsolutePosition](#setabsoluteposition)|
|SQL_FETCH_BOOKMARK|Il set di righe a partire dalla riga il cui valore di segnalibro corrisponde a *nRows*.|[SetBookmark](#setbookmark)|

> [!NOTE]
>  Per i recordset forward-only, `Move` è valido solo con un valore di SQL_FETCH_NEXT per *wFetchType*.

> [!CAUTION]
>  La chiamata a `Move` genera un'eccezione se il recordset non contiene record. Per determinare se il set di record dispone di alcun record, chiamare [IsBOF](#isbof) e [IsEOF](#iseof).

> [!NOTE]
>  Se è eseguito lo scorrimento oltre l'inizio o fine del set di record (`IsBOF` oppure `IsEOF` restituisce diverso da zero), la chiamata una `Move` funzione possibilmente genererà un `CDBException`. Ad esempio, se `IsEOF` restituisce diverso da zero e `IsBOF` non le utilizza, quindi `MoveNext` genererà un'eccezione, ma `MovePrev` No.

> [!NOTE]
>  Se si chiama `Move` mentre il record corrente viene aggiornato o aggiunto, gli aggiornamenti vengono persi senza alcun avviso.

Per altre informazioni sull'esplorazione del recordset, vedere gli articoli [Recordset: Scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). Per informazioni correlate, vedere la funzione API ODBC `SQLExtendedFetch` nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#28](../../mfc/codesnippet/cpp/crecordset-class_14.cpp)]

##  <a name="movefirst"></a>  CRecordset::MoveFirst

Imposta il primo record nel primo set di righe del record corrente.

```
void MoveFirst();
```

### <a name="remarks"></a>Note

Indipendentemente dal fatto che il recupero di righe bulk è stato implementato, questo sarà sempre il primo record del recordset.

Non è necessario chiamare `MoveFirst` immediatamente dopo l'apertura del recordset. A quel punto, il primo record (se presente) viene automaticamente il record corrente.

> [!NOTE]
>  Questa funzione membro non è valida per i recordset forward-only.

> [!NOTE]
>  Quando si sposta all'interno di un recordset, non è possibile ignorare i record eliminati. Vedere le [IsDeleted](#isdeleted) funzione membro per i dettagli.

> [!CAUTION]
>  La chiamata a uno qualsiasi del `Move` funzioni genera un'eccezione se il recordset non contiene record. Per determinare se il set di record dispone di alcun record, chiamare `IsBOF` e `IsEOF`.

> [!NOTE]
>  Se si chiama uno qualsiasi del `Move` funzioni mentre il record corrente viene aggiornato o aggiunto, gli aggiornamenti vengono persi senza alcun avviso.

Per altre informazioni sull'esplorazione del recordset, vedere gli articoli [Recordset: Scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [IsBOF](#isbof).

##  <a name="movelast"></a>  CRecordset::MoveLast

Imposta il primo record nel set di righe completo ultimo il record corrente.

```
void MoveLast();
```

### <a name="remarks"></a>Note

Se non è stato implementato il recupero di righe bulk, il recordset ha una dimensione di set di righe pari a 1, pertanto, `MoveLast` semplicemente passa all'ultimo record del recordset.

> [!NOTE]
>  Questa funzione membro non è valida per i recordset forward-only.

> [!NOTE]
>  Quando si sposta all'interno di un recordset, non è possibile ignorare i record eliminati. Vedere le [IsDeleted](#isdeleted) funzione membro per i dettagli.

> [!CAUTION]
>  La chiamata a uno qualsiasi del `Move` funzioni genera un'eccezione se il recordset non contiene record. Per determinare se il set di record dispone di alcun record, chiamare `IsBOF` e `IsEOF`.

> [!NOTE]
>  Se si chiama uno qualsiasi del `Move` funzioni mentre il record corrente viene aggiornato o aggiunto, gli aggiornamenti vengono persi senza alcun avviso.

Per altre informazioni sull'esplorazione del recordset, vedere gli articoli [Recordset: Scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [IsBOF](#isbof).

##  <a name="movenext"></a>  CRecordset::MoveNext

Imposta il primo record nel set di righe successivo del record corrente.

```
void MoveNext();
```

### <a name="remarks"></a>Note

Se non è stato implementato il recupero di righe bulk, il recordset ha una dimensione di set di righe pari a 1, pertanto, `MoveNext` viene semplicemente spostata al record successivo.

> [!NOTE]
>  Quando si sposta all'interno di un recordset, non è possibile ignorare i record eliminati. Vedere le [IsDeleted](#isdeleted) funzione membro per i dettagli.

> [!CAUTION]
>  La chiamata a uno qualsiasi del `Move` funzioni genera un'eccezione se il recordset non contiene record. Per determinare se il set di record dispone di alcun record, chiamare `IsBOF` e `IsEOF`.

> [!NOTE]
>  Si consiglia inoltre di chiamare `IsEOF` prima di chiamare `MoveNext`. Se è eseguito lo scorrimento oltre la fine del set di record, ad esempio `IsEOF` verrà restituito diverso da zero; una chiamata successiva a `MoveNext` genererebbe un'eccezione.

> [!NOTE]
>  Se si chiama uno qualsiasi del `Move` funzioni mentre il record corrente viene aggiornato o aggiunto, gli aggiornamenti vengono persi senza alcun avviso.

Per altre informazioni sull'esplorazione del recordset, vedere gli articoli [Recordset: Scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [IsBOF](#isbof).

##  <a name="moveprev"></a>  CRecordset::MovePrev

Imposta il primo record nel set di righe precedente del record corrente.

```
void MovePrev();
```

### <a name="remarks"></a>Note

Se non è stato implementato il recupero di righe bulk, il recordset ha una dimensione di set di righe pari a 1, pertanto, `MovePrev` semplicemente passa al record precedente.

> [!NOTE]
>  Questa funzione membro non è valida per i recordset forward-only.

> [!NOTE]
>  Quando si sposta all'interno di un recordset, non è possibile ignorare i record eliminati. Vedere le [IsDeleted](#isdeleted) funzione membro per i dettagli.

> [!CAUTION]
>  La chiamata a uno qualsiasi del `Move` funzioni genera un'eccezione se il recordset non contiene record. Per determinare se il set di record dispone di alcun record, chiamare `IsBOF` e `IsEOF`.

> [!NOTE]
>  Si consiglia inoltre di chiamare `IsBOF` prima di chiamare `MovePrev`. Se è eseguito lo scorrimento prima dell'inizio del set di record, ad esempio `IsBOF` verrà restituito diverso da zero; una chiamata successiva a `MovePrev` genererebbe un'eccezione.

> [!NOTE]
>  Se si chiama uno qualsiasi del `Move` funzioni mentre il record corrente viene aggiornato o aggiunto, gli aggiornamenti vengono persi senza alcun avviso.

Per altre informazioni sull'esplorazione del recordset, vedere gli articoli [Recordset: Scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [IsBOF](#isbof).

##  <a name="onsetoptions"></a>  CRecordset::OnSetOptions

Chiamata eseguita per impostare le opzioni (utilizzate nella selezione) per l'istruzione ODBC specificata.

```
virtual void OnSetOptions(HSTMT hstmt);
```

### <a name="parameters"></a>Parametri

*hstmt*<br/>
HSTMT dell'istruzione ODBC le cui opzioni sono da impostare.

### <a name="remarks"></a>Note

Chiamare `OnSetOptions` per impostare le opzioni (utilizzate nella selezione) per l'istruzione ODBC specificata. Il framework chiama questa funzione membro per impostare le opzioni iniziali per il recordset. `OnSetOptions` Determina il supporto dell'origine dati per i cursori scorrevoli e per la concorrenza del cursore e imposta le opzioni del recordset di conseguenza. (Considerando `OnSetOptions` viene usato per le operazioni di selezione, `OnSetUpdateOptions` viene usato per operazioni di aggiornamento.)

Eseguire l'override `OnSetOptions` per impostare le opzioni specifiche del driver o l'origine dati. Ad esempio, se l'origine dati supporta l'apertura per l'accesso esclusivo, potrebbe quindi sostituire `OnSetOptions` sfruttare tale capacità.

Per altre informazioni sui cursori, vedere l'articolo [ODBC](../../data/odbc/odbc-basics.md).

##  <a name="onsetupdateoptions"></a>  CRecordset::OnSetUpdateOptions

Chiamata eseguita per impostare le opzioni (usate in aggiornamento) per l'istruzione ODBC specificata.

```
virtual void OnSetUpdateOptions(HSTMT hstmt);
```

### <a name="parameters"></a>Parametri

*hstmt*<br/>
HSTMT dell'istruzione ODBC le cui opzioni sono da impostare.

### <a name="remarks"></a>Note

Chiamare `OnSetUpdateOptions` per impostare le opzioni (usate in aggiornamento) per l'istruzione ODBC specificata. Il framework chiama questa funzione membro dopo aver creato un oggetto HSTMT per aggiornare i record in un recordset. (Considerando `OnSetOptions` viene usato per le operazioni di selezione, `OnSetUpdateOptions` viene usato per operazioni di aggiornamento.) `OnSetUpdateOptions` determina il supporto dell'origine dati per i cursori scorrevoli e per la concorrenza del cursore e imposta le opzioni del recordset di conseguenza.

Eseguire l'override `OnSetUpdateOptions` per impostare le opzioni di un'istruzione ODBC prima di tale istruzione consente di accedere a un database.

Per altre informazioni sui cursori, vedere l'articolo [ODBC](../../data/odbc/odbc-basics.md).

##  <a name="open"></a>  CRecordset:: Open

Apre il recordset recuperando la tabella o eseguendo la query rappresentata dal recordset.

```
virtual BOOL Open(
    UINT nOpenType = AFX_DB_USE_DEFAULT_TYPE,
    LPCTSTR lpszSQL = NULL,
    DWORD dwOptions = none);
```

### <a name="parameters"></a>Parametri

*nOpenType*<br/>
Accettare il valore predefinito, AFX_DB_USE_DEFAULT_TYPE o usare uno dei seguenti valori dal `enum OpenType`:

- `CRecordset::dynaset` Un recordset con scorrimento bidirezionale. L'appartenenza e l'ordine dei record vengono determinati quando il recordset è aperto, ma le modifiche apportate da altri utenti ai valori dei dati sono visibili dopo un'operazione di recupero. I dynaset sono noti anche come recordset basati su keyset.

- `CRecordset::snapshot` Recordset statico con scorrimento bidirezionale. L'appartenenza e l'ordine dei record vengono determinati quando il recordset è aperto; i valori dei dati vengono determinati quando vengono recuperati i record. Le modifiche apportate da altri utenti non sono visibili finché il recordset non viene chiuso e riaperto.

- `CRecordset::dynamic` Un recordset con scorrimento bidirezionale. Le modifiche apportate da altri utenti all'appartenenza, all'ordine e ai valori dei dati sono visibili dopo un'operazione di recupero. Si noti che molti driver ODBC non supportano questo tipo di recordset.

- `CRecordset::forwardOnly` Recordset di sola lettura con solo scorrimento in avanti.

   Per la `CRecordset`, il valore predefinito è `CRecordset::snapshot`. Il meccanismo di valore predefinito consente l'interazione tra le procedure guidate di Visual C++ e `CRecordset` di ODBC e `CDaoRecordset` di DAO le cui impostazione predefinite sono diverse.

Per altre informazioni su questi tipi di recordset, vedere l'articolo [Recordset (ODBC)](../../data/odbc/recordset-odbc.md). Per informazioni correlate, vedere l'articolo "Usando blocchi e i cursori scorrevoli" in Windows SDK.

> [!CAUTION]
>  Se il tipo richiesto non è supportato, tramite il framework viene generata un'eccezione.

*lpszSQL*<br/>
Puntatore di stringa contenente uno degli elementi seguenti:

- Un puntatore NULL.

- Nome di una tabella.

- Un database SQL **selezionate** istruzione (eventualmente con un database SQL **in cui** oppure **ORDER BY** clausola).

- Oggetto **CHIAMARE** istruzione che specifica il nome di una query predefinita (stored procedure). Prestare attenzione a non inserire uno spazio vuoto tra la parentesi graffa e la **CHIAMARE** (parola chiave).

Per ulteriori informazioni su questa stringa, vedere la tabella e la descrizione del ruolo di ClassWizard nella sezione Osservazioni.

> [!NOTE]
>  L'ordine delle colonne nel set di risultati deve corrispondere all'ordine di RFX o RFX di massa non chiama [DoFieldExchange](#dofieldexchange) oppure [DoBulkFieldExchange](#dobulkfieldexchange) funzione override.

*dwOptions*<br/>
Maschera di bit tramite cui è possibile specificare una combinazione dei valori elencati di seguito. Alcuni di questi si escludono a vicenda. Il valore predefinito è **none**.

- `CRecordset::none` Nessuna opzione impostata. Il valore di questo parametro e tutti gli altri valori si escludono a vicenda. Per impostazione predefinita, il set di record possono essere aggiornati con [Edit](#edit) oppure [eliminare](#delete) e consente di aggiungere nuovi record con [AddNew](#addnew). Aggiornabilità dipende dall'origine dati nonché nel *nOpenType* opzione è possibile specificare. L'ottimizzazione per le aggiunte di massa non è disponibile. Il recupero di righe di massa non verrà implementato. I record eliminati non verranno ignorati durante la navigazione del recordset. I segnalibri non sono disponibili. Il controllo automatico dei campi modificati automatico è implementato.

- `CRecordset::appendOnly` Non consentire `Edit` o `Delete` nel recordset. Consente solo `AddNew`. Questa opzione e `CRecordset::readOnly` si escludono a vicenda.

- `CRecordset::readOnly` Apre il recordset in sola lettura. Questa opzione e `CRecordset::appendOnly` si escludono a vicenda.

- `CRecordset::optimizeBulkAdd` Usare un'istruzione SQL preparata per ottimizzare l'aggiunta di molti record contemporaneamente. Si applica solo se non si usa la funzione API ODBC `SQLSetPos` per aggiornare il recordset. Tramite il primo aggiornamento viene determinato quali campi vengono contrassegnati come modificati. Questa opzione e `CRecordset::useMultiRowFetch` si escludono a vicenda.

- `CRecordset::useMultiRowFetch` Implementare il recupero di righe bulk per consentire più righe da recuperare in una singola operazione di recupero. Si tratta di una funzionalità avanzata progettata per migliorare le prestazioni; tuttavia il trasferimento di campi di record di massa non è supportato da ClassWizard. Questa opzione e `CRecordset::optimizeBulkAdd` si escludono a vicenda. Si noti che se si specifica `CRecordset::useMultiRowFetch`, quindi l'opzione `CRecordset::noDirtyFieldCheck` verrà attivato automaticamente (doppio buffer non sarà disponibile); nei recordset forward-only, l'opzione `CRecordset::useExtendedFetch` verrà attivata automaticamente. Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

- `CRecordset::skipDeletedRecords` Ignorare i record eliminati tutti i durante la navigazione nel recordset. Ciò comporterà il rallentamento delle prestazioni in alcuni recuperi relativi. Questa opzione non è valida per i recordset forward-only. Se si chiama [spostare](#move) con il *nRows* parametro impostato su 0 e il `CRecordset::skipDeletedRecords` impostata, l'opzione `Move` verrà verificata. Si noti che `CRecordset::skipDeletedRecords` è simile a *compressione del driver*, vale a dire che le righe eliminate vengono rimosse dal recordset. Tuttavia, se i record vengono compressi dal driver, saranno ignorati solo quelli eliminati dall'utente in questione e non da altri durante l'apertura del recordset. `CRecordset::skipDeletedRecords` verranno ignorate le righe eliminate da altri utenti.

- `CRecordset::useBookmarks` Può usare i segnalibri nell'oggetto recordset, se supportata. Con i segnalibri il recupero dei dati risulta rallentato, ma le prestazioni relative alla navigazione tra i dati migliorano. Non valido per i recordset forward-only. Per altre informazioni, vedere l'articolo [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).

- `CRecordset::noDirtyFieldCheck` Disattivare il controllo (doppio buffer) dei campi modificati automatico. Ciò consente di migliorare le prestazioni; tuttavia, è necessario contrassegnare manualmente i campi come modificati chiamando le funzioni membro `SetFieldDirty` e `SetFieldNull`. Si noti che il doppio buffer nella classe `CRecordset` è simile a quello nella classe `CDaoRecordset`. Tuttavia, in `CRecordset` non è possibile abilitare il doppio buffer nei singoli campi; infatti l'abilitazione viene eseguita o per tutti i campi o per nessuno. Si noti che se si specifica l'opzione `CRecordset::useMultiRowFetch`, quindi `CRecordset::noDirtyFieldCheck` verrà attivato automaticamente; tuttavia `SetFieldDirty` e `SetFieldNull` non possono essere utilizzati nei recordset che implementano il recupero di righe bulk.

- `CRecordset::executeDirect` Non utilizzare un'istruzione SQL preparata. Per migliorare le prestazioni, specificare questa opzione se il `Requery` funzione membro non verrà mai chiamata.

- `CRecordset::useExtendedFetch` Implementare `SQLExtendedFetch` invece di `SQLFetch`. Questa condizione è progettata per implementare il recupero di righe di massa nei recordset forward-only. Se si specifica l'opzione `CRecordset::useMultiRowFetch` in un recordset forward-only, quindi `CRecordset::useExtendedFetch` verrà attivata automaticamente.

- `CRecordset::userAllocMultiRowBuffers` L'utente allocherà i buffer di archiviazione per i dati. Utilizzare questa opzione insieme a `CRecordset::useMultiRowFetch` se si desidera allocare manualmente l'archiviazione; in caso contrario questa operazione sarà eseguita automaticamente dal framework. Per altre informazioni, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). Si noti che se si specifica `CRecordset::userAllocMultiRowBuffers` senza specificare `CRecordset::useMultiRowFetch` comporterà un'asserzione non riuscita.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il `CRecordset` oggetto è stato aperto correttamente; in caso contrario, 0 se [CDatabase:: Open](../../mfc/reference/cdatabase-class.md#open) (se chiamato) restituisce 0.

### <a name="remarks"></a>Note

È necessario chiamare questa funzione membro per eseguire la query definita dal recordset. Prima di chiamare `Open`, è necessario costruire l'oggetto recordset.

Connessione del recordset all'origine dati dipende dal modo in cui si crea il recordset prima di chiamare `Open`. Se si passa un' [CDatabase](../../mfc/reference/cdatabase-class.md) dell'oggetto al costruttore del recordset che non è stato connesso all'origine dati, questa funzione membro Usa [GetDefaultConnect](#getdefaultconnect) per tentare di aprire l'oggetto di database. Se NULL viene passato al costruttore del recordset, il costruttore crea un `CDatabase` oggetti, e `Open` tenta di connettere l'oggetto di database. Per informazioni dettagliate sulla chiusura di recordset e la connessione in queste diverse circostanze, vedere [Chiudi](#close).

> [!NOTE]
>  L'accesso a un'origine dati tramite un oggetto `CRecordset` è sempre condiviso. A differenza della classe `CDaoRecordset`, non è possibile utilizzare un oggetto `CRecordset` per aprire un'origine dati con accesso esclusivo.

Quando si chiama `Open`, una query, in genere un linguaggio SQL **selezionare** istruzione consente di selezionare i record in base ai criteri indicati nella tabella seguente.

|Valore del parametro lpszSQL|I record selezionati sono determinati da|Esempio|
|------------------------------------|----------------------------------------|-------------|
|NULL|Stringa restituita da `GetDefaultSQL`.||
|Nome tabella SQL|Tutte le colonne dell'elenco tabelle in `DoFieldExchange` o `DoBulkFieldExchange`.|`"Customer"`|
|Nome predefinito della query (stored procedure)|Colonne che devono essere restituite dalla query.|`"{call OverDueAccts}"`|
|**Selezionare** elenco di colonne **FROM** elenco tabella|Colonne specificate delle tabelle specificate.|`"SELECT CustId, CustName FROM`<br /><br /> `Customer"`|

> [!CAUTION]
>  Prestare attenzione a non inserire uno spazio vuoto aggiuntivo nella stringa SQL. Ad esempio, se si inserisce uno spazio vuoto tra la parentesi graffa e la **CHIAMARE** (parola chiave), MFC verrà interpretata la stringa SQL come un nome di tabella e incorporata in un **selezionare** istruzione in cui verrà generato un eccezione generata. Analogamente, se la query predefinita Usa un parametro di output, non inserire uno spazio vuoto tra la parentesi graffa e la ' simbolo. Infine, non è necessario inserire uno spazio vuoto prima della parentesi graffa in una **CHIAMARE** istruzione o prima il **seleziona** parola chiave in un **selezionare** istruzione.

La procedura normale consiste nel passare NULL per `Open`; in questo caso `Open` chiamate [GetDefaultSQL](#getdefaultsql). Se si usa un oggetto derivato `CRecordset` classe `GetDefaultSQL` fornisce i nomi di tabella specificati in ClassWizard. Nel parametro `lpszSQL` è invece possibile specificare altre informazioni.

Qualsiasi elemento passato, `Open` costruisce una stringa SQL finale per la query (la stringa può contenere SQL **in cui** e **ORDER BY** clausole aggiunto al `lpszSQL` stringa è stato passato), quindi viene eseguita la query. È possibile esaminare la stringa costruita chiamando [GetSQL](#getsql) dopo aver chiamato `Open`. Per altre informazioni sul modo in cui un'istruzione SQL del recordset e Seleziona record, vedere l'articolo [Recordset: Selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md).

I membri dei dati di campo della classe recordset sono associati alle colonne dei dati selezionati. Se vengono restituiti record, il primo di essi diventa il record corrente.

Se si desidera impostare le opzioni per il recordset, ad esempio un filtro o ordinamento, specificare questi dopo aver creato l'oggetto recordset ma prima di chiamare `Open`. Se si desidera aggiornare i record del recordset quando il recordset è già aperto, chiamare [Requery](#requery).

Per altre informazioni, inclusi altri esempi, vedere gli articoli [Recordset (ODBC)](../../data/odbc/recordset-odbc.md), [Recordset: Selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md), e [Recordset: Creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md).

### <a name="example"></a>Esempio

Gli esempi di codice seguenti illustrano diverse forme del `Open` chiamare.

[!code-cpp[NVC_MFCDatabase#16](../../mfc/codesnippet/cpp/crecordset-class_15.cpp)]

##  <a name="refreshrowset"></a>  CRecordset::RefreshRowset

Aggiorna i dati e lo stato di una riga nel set di righe corrente.

```
void RefreshRowset(
    WORD wRow,
    WORD wLockType = SQL_LOCK_NO_CHANGE);
```

### <a name="parameters"></a>Parametri

*wRow*<br/>
Basato su una posizione di una riga nel set di righe corrente. Questo valore può essere compreso tra zero e le dimensioni del set di righe.

*wLockType*<br/>
Un valore che indica come viene bloccato se la riga è stata aggiornata. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Note

Se si passa un valore pari a zero per *wRow*, quindi verrà aggiornato ogni riga nel set di righe.

Usare `RefreshRowset`, è stato implementato il recupero di righe bulk specificando le `CRecordset::useMulitRowFetch` opzione il [Open](#open) funzione membro.

`RefreshRowset` chiama la funzione API ODBC `SQLSetPos`. Il *wLockType* parametro specifica lo stato di blocco di riga dopo `SQLSetPos` è eseguita. Nella tabella seguente vengono descritti i possibili valori per *wLockType*.

|wLockType|Descrizione|
|---------------|-----------------|
|SQL_LOCK_NO_CHANGE (valore predefinito)|L'origine dati o driver garantisce che la riga è lo stesso stato bloccato o sbloccato come accadeva prima `RefreshRowset` è stato chiamato.|
|SQL_LOCK_EXCLUSIVE|L'origine dati o driver Blocca esclusivamente la riga. Non tutte le origini dati supportano questo tipo di blocco.|
|SQL_LOCK_UNLOCK|L'origine dati o driver Sblocca la riga. Non tutte le origini dati supportano questo tipo di blocco.|

Per altre informazioni sulle `SQLSetPos`, vedi il Windows SDK. Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

##  <a name="requery"></a>  CRecordset::Requery

Ricompila (Aggiorna) un recordset.

```
virtual BOOL Requery();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il set di record è stato ricompilato; in caso contrario 0.

### <a name="remarks"></a>Note

Se vengono restituiti record, il primo di essi diventa il record corrente.

Affinché il recordset in modo da riflettere le aggiunte ed eliminazioni che è o ad altri utenti stanno effettuando all'origine dati, è necessario ricompilare il recordset chiamando `Requery`. Se il recordset è di tipo snapshot, che è o ad altri utenti relativo record esistenti, ma non le aggiunte, aggiornamenti apportati riflette automaticamente. Se il recordset è uno snapshot, è necessario chiamare `Requery` in modo da riflettere le modifiche da altri utenti, nonché aggiunte ed eliminazioni.

Per dynaset o uno snapshot, chiamare `Requery` ogni volta che si desidera ricompilare set di record mediante un nuovo filtro o ordinamento o nuovi valori di parametro. Impostare la nuova proprietà di filtro o ordinamento assegnando nuovi valori per `m_strFilter` e `m_strSort` prima di chiamare `Requery`. Imposta nuovi parametri assegnando nuovi valori per i membri dati di parametro prima di chiamare `Requery`. Se le stringhe di filtro e ordinamento sono rimasti invariate, è possibile riutilizzare la query, che migliora le prestazioni.

Se il tentativo di ricompilare il recordset non riesce, viene chiuso il recordset. Prima di chiamare `Requery`, è possibile determinare se il recordset può essere eseguito chiamando il `CanRestart` funzione membro. `CanRestart` non garantisce che `Requery` avrà esito positivo.

> [!CAUTION]
>  Chiamare `Requery` solo dopo aver chiamato [Open](#open).

### <a name="example"></a>Esempio

Questo esempio viene ricompilato un recordset per applicare un ordinamento diverso.

[!code-cpp[NVC_MFCDatabase#29](../../mfc/codesnippet/cpp/crecordset-class_16.cpp)]

##  <a name="setabsoluteposition"></a>  CRecordset::SetAbsolutePosition

Posiziona il recordset nel record corrispondente al numero di record specificato.

```
void SetAbsolutePosition(long nRows);
```

### <a name="parameters"></a>Parametri

*nRows*<br/>
In base uno posizione ordinale del record corrente nell'oggetto recordset.

### <a name="remarks"></a>Note

`SetAbsolutePosition` Sposta il puntatore di record corrente in base questa posizione ordinale.

> [!NOTE]
>  Questa funzione membro non è valida nei recordset forward-only.

Per ODBC (recordset), un'impostazione posizione assoluta pari a 1 si riferisce al primo record del recordset. un'impostazione pari a 0 fa riferimento alla posizione di inizio del file (BOF).

È anche possibile passare i valori negativi per `SetAbsolutePosition`. In questo caso la posizione del recordset è valutata dalla fine del set di record. Ad esempio, `SetAbsolutePosition( -1 )` sposta il puntatore al record corrente per l'ultimo record del recordset.

> [!NOTE]
>  Posizione assoluta non deve essere utilizzato come un numero di record di surrogati. I segnalibri sono ancora lo strumento consigliato per mantenere e restituire dati in una posizione specificata, poiché cambia posizione di un record quando vengono eliminati record precedente. Inoltre, si non può essere certi che un determinato record avrà la stessa posizione assoluta se il set di record viene ricreato perché l'ordine dei singoli record all'interno di un set di record non è garantito a meno che non venga creata con un'istruzione SQL usando un **ORDER BY** clausola.

Per altre informazioni sulla navigazione del recordset e i segnalibri, vedere gli articoli [Recordset: Scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).

##  <a name="setbookmark"></a>  CRecordset::SetBookmark

Posiziona il recordset sul record che contiene il segnalibro specificato.

```
void SetBookmark(const CDBVariant& varBookmark);
```

### <a name="parameters"></a>Parametri

*varBookmark*<br/>
Un riferimento a un [CDBVariant](../../mfc/reference/cdbvariant-class.md) che contiene il valore di segnalibro per un record specifico.

### <a name="remarks"></a>Note

Per determinare se i segnalibri sono supportati nell'oggetto recordset, chiamare [CanBookmark](#canbookmark). Per rendere disponibili i segnalibri se sono supportate, è necessario impostare il `CRecordset::useBookmarks` opzione il *dwOptions* parametro del [Open](#open) funzione membro.

> [!NOTE]
>  Se i segnalibri non supportato o non è disponibile, la chiamata `SetBookmark` comporterà un'eccezione generata. I segnalibri non sono supportati nei recordset forward-only.

Per recuperare innanzitutto il segnalibro per il record corrente, chiamare [GetBookmark](#getbookmark), che consente di salvare il valore di segnalibro a un `CDBVariant` oggetto. In un secondo momento, è possibile tornare a tale record chiamando `SetBookmark` utilizzando il valore di segnalibro salvato.

> [!NOTE]
>  Dopo alcune operazioni di recordset, è consigliabile controllare la persistenza del segnalibro prima di chiamare `SetBookmark`. Ad esempio, se si recupera un segnalibro con `GetBookmark` e quindi chiamare `Requery`, il segnalibro potrebbe non essere più valido. Chiamare [CDatabase:: GetBookmarkPersistence](../../mfc/reference/cdatabase-class.md#getbookmarkpersistence) per verificare se è possibile chiamare `SetBookmark`.

Per altre informazioni sui segnalibri e di navigazione del recordset, vedere gli articoli [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md) e [Recordset: Scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

##  <a name="setfielddirty"></a>  CRecordset::SetFieldDirty

Flag di un membro dati del campo del set di record, come è stato modificato o come non modificate.

```
void SetFieldDirty(void* pv, BOOL bDirty = TRUE);
```

### <a name="parameters"></a>Parametri

*pv*<br/>
Contiene l'indirizzo di un membro dati di campo nel recordset o NULL. Se NULL, vengono contrassegnati tutti i membri dati di campo nel set di record. (C++ NULL non è lo stesso come valori Null nella terminologia dei database, il che significa "non having alcun valore.")

*bDirty*<br/>
TRUE se il membro dati del campo deve essere contrassegnata come "modificato" (modifica). In caso contrario, FALSE se il membro dati di campo deve essere contrassegnato come "pulire" (non modificato).

### <a name="remarks"></a>Note

Contrassegnare i campi come non modificate garantisce il campo non viene aggiornato e genera meno traffico SQL.

> [!NOTE]
>  Questa funzione membro non è applicabile per i recordset che utilizzano il recupero di righe bulk. Se è stato implementato il recupero di righe bulk, quindi `SetFieldDirty` comporterà un'asserzione non riuscita. Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

I segni di framework modificato i membri di dati campo per assicurarsi che verrà scritto il record nell'origine dati mediante il meccanismo di campi di record (RFX) di exchange. La modifica del valore di un campo in genere ha impostato il dirty automaticamente, pertanto raramente sarà necessario chiamare `SetFieldDirty` personalmente, ma a volte possibile garantire che le colonne verranno essere aggiornate o inserite indipendentemente dal valore è nei dati del campo in modo esplicito membro.

> [!CAUTION]
>  Chiamare questa funzione membro solo dopo aver chiamato [Edit](#edit) oppure [AddNew](#addnew).

Utilizzo di NULL per il primo argomento della funzione verrà applicata solo alla funzione `outputColumn` campi, non `param` campi. Ad esempio, la chiamata

[!code-cpp[NVC_MFCDatabase#26](../../mfc/codesnippet/cpp/crecordset-class_10.cpp)]

verrà impostato solo `outputColumn` campi su NULL. `param` campi non saranno interessati.

A lavorarvi `param` campi, è necessario fornire l'indirizzo effettivo della persona `param` da usare, ad esempio:

[!code-cpp[NVC_MFCDatabase#27](../../mfc/codesnippet/cpp/crecordset-class_11.cpp)]

Ciò significa che non è possibile impostare tutti i `param` campi su NULL, come puoi fare con `outputColumn` campi.

##  <a name="setfieldnull"></a>  CRecordset::SetFieldNull

Flag di un membro dati del campo del set di record con valore Null, in particolare che non ha alcun valore, o come non Null.

```
void SetFieldNull(void* pv, BOOL bNull = TRUE);
```

### <a name="parameters"></a>Parametri

*pv*<br/>
Contiene l'indirizzo di un membro dati di campo nel recordset o NULL. Se NULL, vengono contrassegnati tutti i membri dati di campo nel set di record. (C++ NULL non è lo stesso come valori Null nella terminologia dei database, il che significa "non having alcun valore.")

*bNull*<br/>
Diverso da zero se il membro dati di campo deve essere contrassegnato come se avessero alcun valore (Null). In caso contrario, 0 se il membro dati del campo è contrassegnato come non Null.

### <a name="remarks"></a>Note

Quando si aggiunge un nuovo record a un oggetto recordset, tutti i membri dati di campo sono inizialmente impostati su un valore Null e contrassegnati come "modificato" (modifica). Quando si recupera un record da un'origine dati, le relative colonne già hanno valori o sono Null.

> [!NOTE]
>  Non chiamare questa funzione membro per i recordset che utilizzano il recupero di righe bulk. Se è stato implementato il recupero di righe bulk, la chiamata `SetFieldNull` comporta un'asserzione non riuscita. Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Se si vuole designare un campo del record corrente in quanto non hanno un valore, chiamare in modo specifico `SetFieldNull` con *bNull* impostato su TRUE per contrassegnarlo come Null. Se un campo in precedenza è stato contrassegnato come Null e si desidera assegnare un valore a questo punto, è sufficiente impostare il nuovo valore. Non è necessario rimuovere il flag Null con `SetFieldNull`. Per determinare se il campo può essere Null, chiamare `IsFieldNullable`.

> [!CAUTION]
>  Chiamare questa funzione membro solo dopo aver chiamato [Edit](#edit) oppure [AddNew](#addnew).

Utilizzo di NULL per il primo argomento della funzione verrà applicata solo alla funzione `outputColumn` campi, non `param` campi. Ad esempio, la chiamata

[!code-cpp[NVC_MFCDatabase#26](../../mfc/codesnippet/cpp/crecordset-class_10.cpp)]

verrà impostato solo `outputColumn` campi su NULL. `param` campi non saranno interessati.

A lavorarvi `param` campi, è necessario fornire l'indirizzo effettivo della persona `param` da usare, ad esempio:

[!code-cpp[NVC_MFCDatabase#27](../../mfc/codesnippet/cpp/crecordset-class_11.cpp)]

Ciò significa che non è possibile impostare tutti i `param` campi su NULL, come puoi fare con `outputColumn` campi.

> [!NOTE]
>  Quando si impostano i parametri su Null, una chiamata a `SetFieldNull` prima che il recordset è aperto genera un'asserzione. In questo caso, chiamare [SetParamNull](#setparamnull).

`SetFieldNull` viene implementata tramite [DoFieldExchange](#dofieldexchange).

##  <a name="setlockingmode"></a>  CRecordset::SetLockingMode

Imposta la modalità di blocco per blocco (predefinito) "ottimistica" o "" pessimistico. Determina come i record sono bloccati per gli aggiornamenti.

```
void SetLockingMode(UINT nMode);
```

### <a name="parameters"></a>Parametri

*nMode*<br/>
Contiene uno dei seguenti valori dal `enum LockMode`:

- `optimistic` Il blocco ottimistico blocca il record viene aggiornato solo durante la chiamata a `Update`.

- `pessimistic` Il blocco pessimistico blocca il record appena `Edit` viene chiamato e li mantiene bloccate fino al raggiungimento di `Update` completamento della chiamata oppure si sposta in un nuovo record.

### <a name="remarks"></a>Note

Chiamare questa funzione membro, se è necessario specificare quale delle due strategie di blocco dei record Usa il set di record per gli aggiornamenti. Per impostazione predefinita, la modalità di blocco di un recordset è `optimistic`. È possibile modificarlo per una maggiore attenzione `pessimistic` strategia di blocco. Chiamare `SetLockingMode` dopo che costruito e aperto l'oggetto recordset ma prima di chiamare `Edit`.

##  <a name="setparamnull"></a>  CRecordset::SetParamNull

Contrassegna un parametro come Null, in particolare che non ha alcun valore, o come non Null.

```
void SetParamNull(
    int nIndex,
    BOOL bNull = TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero del parametro.

*bNull*<br/>
Se TRUE (valore predefinito), il parametro è contrassegnato come Null. In caso contrario, il parametro è contrassegnato come non Null.

### <a name="remarks"></a>Note

A differenza [SetFieldNull](#setfieldnull), è possibile chiamare `SetParamNull` prima di avere aperto il recordset.

`SetParamNull` viene usato in genere con query predefinite (stored procedure).

##  <a name="setrowsetcursorposition"></a>  CRecordset::SetRowsetCursorPosition

Sposta il cursore a una riga all'interno di righe corrente.

```
void SetRowsetCursorPosition(WORD wRow, WORD wLockType = SQL_LOCK_NO_CHANGE);
```

### <a name="parameters"></a>Parametri

*wRow*<br/>
Basato su una posizione di una riga nel set di righe corrente. Questo valore può variare da 1 per le dimensioni del set di righe.

*wLockType*<br/>
Valore che indica come viene bloccato se la riga è stata aggiornata. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Note

Quando si implementa il recupero di righe bulk, i record vengono recuperati dal set di righe, dove il primo record nel set di righe recuperato è il record corrente. Per poter effettuare un altro record all'interno del set di righe del record corrente, chiamare `SetRowsetCursorPosition`. Ad esempio, è possibile combinare `SetRowsetCursorPosition` con il [GetFieldValue](#getfieldvalue) funzione membro per recuperare in modo dinamico i dati da tutti i record del recordset.

Usare `SetRowsetCursorPosition`, è stato implementato il recupero di righe bulk specificando le `CRecordset::useMultiRowFetch` opzione del *dwOptions* parametro nel [Open](#open) funzione membro.

`SetRowsetCursorPosition` chiama la funzione API ODBC `SQLSetPos`. Il *wLockType* parametro specifica lo stato di blocco di riga dopo `SQLSetPos` è eseguita. Nella tabella seguente vengono descritti i possibili valori per *wLockType*.

|wLockType|Descrizione|
|---------------|-----------------|
|SQL_LOCK_NO_CHANGE (valore predefinito)|L'origine dati o driver garantisce che la riga è lo stesso stato bloccato o sbloccato come accadeva prima `SetRowsetCursorPosition` è stato chiamato.|
|SQL_LOCK_EXCLUSIVE|L'origine dati o driver Blocca esclusivamente la riga. Non tutte le origini dati supportano questo tipo di blocco.|
|SQL_LOCK_UNLOCK|L'origine dati o driver Sblocca la riga. Non tutte le origini dati supportano questo tipo di blocco.|

Per altre informazioni sulle `SQLSetPos`, vedi il Windows SDK. Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

##  <a name="setrowsetsize"></a>  CRecordset::SetRowsetSize

Specifica il numero di record da recuperare durante un'operazione di recupero.

```
virtual void SetRowsetSize(DWORD dwNewRowsetSize);
```

### <a name="parameters"></a>Parametri

*dwNewRowsetSize*<br/>
Il numero di righe da recuperare durante un'operazione di recupero specificato.

### <a name="remarks"></a>Note

Questa funzione membro virtuale specifica il numero di righe da recuperare durante un'operazione di recupero singolo quando si usa il recupero di righe bulk. Per implementare il recupero di righe bulk, è necessario impostare il `CRecordset::useMultiRowFetch` opzione il *dwOptions* parametro del [Open](#open) funzione membro.

> [!NOTE]
>  La chiamata `SetRowsetSize` senza implementare bulk il recupero di righe comporterà un'asserzione non riuscita.

Chiamare `SetRowsetSize` prima di chiamare `Open` impostare inizialmente le dimensioni del set di righe per il recordset. Le dimensioni del set di righe predefinito quando si implementa il recupero di righe bulk sono 25.

> [!NOTE]
>  Prestare attenzione quando si chiama `SetRowsetSize`. Se si è manualmente allocare spazio di archiviazione per i dati (come specificato dal `CRecordset::userAllocMultiRowBuffers` opzione del parametro dwOptions nello `Open`), è necessario controllare se è necessario riassegnare i buffer di archiviazione dopo la chiamata `SetRowsetSize`, ma prima di eseguire qualsiasi operazione di spostamento del cursore.

Per ottenere l'impostazione corrente per le dimensioni del set di righe, chiamare [GetRowsetSize](#getrowsetsize).

Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

##  <a name="update"></a>  CRecordset::Update

Completa un' `AddNew` o `Edit` operazione salvando i dati nuovi o modificati nell'origine dati.

```
virtual BOOL Update();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se è stato aggiornato correttamente un record; in caso contrario, 0 se nessuna colonna è stati modificati. Se nessun record sono stato aggiornato o se più di un record è stato aggiornato, viene generata un'eccezione. Viene generata un'eccezione anche per qualsiasi altro errore nell'origine dati.

### <a name="remarks"></a>Note

Chiamare questa funzione membro dopo una chiamata ai [AddNew](#addnew) oppure [modificare](#edit) funzione membro. Questa chiamata è necessario per completare la `AddNew` o `Edit` operazione.

> [!NOTE]
>  Se è stato implementato il recupero di righe bulk, è possibile chiamare `Update`. Questo comporterà un'asserzione non riuscita. Sebbene classe `CRecordset` non fornisce un meccanismo per l'aggiornamento di righe bulk di dati, è possibile scrivere funzioni personalizzate usando la funzione API ODBC `SQLSetPos`. Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Entrambe `AddNew` e `Edit` preparare un buffer di modifica in cui viene inseriti i dati aggiunti o modificati per il salvataggio nell'origine dati. `Update` Salva i dati. Vengono aggiornati solo i campi contrassegnati o rilevato come è stato modificato.

Se l'origine dati supporta le transazioni, è possibile apportare le `Update` chiamare (e relativo valore corrispondente `AddNew` o `Edit` chiamare) fa parte di una transazione. Per altre informazioni sulle transazioni, vedere l'articolo [transazione (ODBC)](../../data/odbc/transaction-odbc.md).

> [!CAUTION]
>  Se si chiama `Update` senza prima chiamare `AddNew` oppure `Edit`, `Update` genera un `CDBException`. Se si chiama `AddNew` oppure `Edit`, è necessario chiamare `Update` prima di chiamare un `Move` operazione o prima di chiudere il recordset o la connessione all'origine dati. In caso contrario, le modifiche andranno perdute senza preavviso.

Per informazioni dettagliate sulla gestione delle `Update` gli errori, vedere l'articolo [Recordset: Aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).

### <a name="example"></a>Esempio

Vedere l'articolo [transazione: Esecuzione di una transazione in un Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDatabase](../../mfc/reference/cdatabase-class.md)<br/>
[Classe CRecordView](../../mfc/reference/crecordview-class.md)

---
title: CRecordset (classe)
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
ms.openlocfilehash: 264c9eda4860dfbe41d40c9b454ec40a1a274ba5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368368"
---
# <a name="crecordset-class"></a>CRecordset (classe)

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
|[CRecordset::AddNew](#addnew)|Prepara l'aggiunta di un nuovo record. Chiamata `Update` per completare l'addizione.|
|[CRecordset::CanAppend](#canappend)|Restituisce diverso da zero se è possibile `AddNew` aggiungere nuovi record al recordset tramite la funzione membro.|
|[CRecordset::CanBookmark](#canbookmark)|Restituisce un valore diverso da zero se il recordset supporta i segnalibri.|
|[CRecordset::Annulla](#cancel)|Annulla un'operazione asincrona o un processo da un secondo thread.|
|[CRecordset::CancelUpdate](#cancelupdate)|Annulla tutti gli aggiornamenti `AddNew` in `Edit` sospeso a causa di un'operazione o .|
|[CRecordset::CanRestart](#canrestart)|Restituisce diverso `Requery` da zero se è possibile chiamare per eseguire nuovamente la query del recordset.|
|[CRecordset::CanScroll](#canscroll)|Restituisce diverso da zero se è possibile scorrere i record.|
|[CRecordset::CanTransact](#cantransact)|Restituisce un valore diverso da zero se l'origine dati supporta le transazioni.|
|[CRecordset::CanUpdate](#canupdate)|Restituisce un valore diverso da zero se il recordset può essere aggiornato (è possibile aggiungere, aggiornare o eliminare record).|
|[CRecordset::CheckRowsetError](#checkrowseterror)|Chiamato per gestire gli errori generati durante il recupero dei record.|
|[CRecordset::Chiudi](#close)|Chiude il recordset e l'HSTMT ODBC associato.|
|[CRecordset::Delete](#delete)|Elimina il record corrente dal recordset. È necessario scorrere in modo esplicito fino a un altro record dopo l'eliminazione.|
|[CRecordset::DoBulkFieldExchange](#dobulkfieldexchange)|Chiamato per lo scambio di righe bulk di dati dall'origine dati al recordset. Implementa lo scambio di massa di campi di record (RFX di massa).|
|[CRecordset::DoFieldExchange](#dofieldexchange)|Chiamato per lo scambio di dati (in entrambe le direzioni) tra i membri dati di campo del recordset e il record corrispondente nell'origine dati. Implementa lo scambio di campi di record (RFX).|
|[CRecordset::Modifica](#edit)|Prepara le modifiche apportate al record corrente. Chiamata `Update` per completare la modifica.|
|[CRecordset::FlushResultSet](#flushresultset)|Restituisce diverso da zero se è presente un altro set di risultati da recuperare, quando si utilizza una query predefinita.|
|[CRecordset::GetBookmark](#getbookmark)|Assegna il valore del segnalibro di un record all'oggetto parametro.|
|[CRecordset::GetDefaultConnect](#getdefaultconnect)|Chiamato per ottenere la stringa di connessione predefinita.|
|[CRecordset::GetDefaultSQL](#getdefaultsql)|Chiamato per ottenere la stringa SQL predefinita da eseguire.|
|[CRecordset::GetFieldValue](#getfieldvalue)|Restituisce il valore di un campo in un recordset.|
|[CRecordset::GetODBCFieldCount](#getodbcfieldcount)|Restituisce il numero di campi nel recordset.|
|[CRecordset::GetODBCFieldInfo](#getodbcfieldinfo)|Restituisce tipi specifici di informazioni sui campi di un recordset.|
|[CRecordset::GetRecordCount](#getrecordcount)|Restituisce il numero di record nel recordset.|
|[CRecordset::GetRowsetSize](#getrowsetsize)|Restituisce il numero di record che si desidera recuperare durante un singolo recupero.|
|[CRecordset::GetRowsFetched](#getrowsfetched)|Restituisce il numero effettivo di righe recuperate durante un recupero.|
|[CRecordset::GetRowStatus](#getrowstatus)|Restituisce lo stato della riga dopo un recupero.|
|[CRecordset::GetSQL](#getsql)|Ottiene la stringa SQL utilizzata per selezionare i record per il recordset.|
|[CRecordset::GetStatus](#getstatus)|Ottiene lo stato del recordset: l'indice del record corrente e se è stato ottenuto un conteggio finale dei record.|
|[CRecordset::GetTableName](#gettablename)|Ottiene il nome della tabella su cui è basato il recordset.|
|[CRecordset::IsBOF](#isbof)|Restituisce un valore diverso da zero se il recordset è stato posizionato prima del primo record. Non è presente nessun record corrente.|
|[CRecordset::IsDeleted](#isdeleted)|Restituisce un valore diverso da zero se il recordset è posizionato su un record eliminato.|
|[CRecordset::IsEOF](#iseof)|Restituisce un valore diverso da zero se il recordset è stato posizionato dopo l'ultimo record. Non è presente nessun record corrente.|
|[CRecordset::IsFieldDirty](#isfielddirty)|Restituisce diverso da zero se il campo specificato nel record corrente è stato modificato.|
|[CRecordset::IsFieldNull](#isfieldnull)|Restituisce diverso da zero se il campo specificato nel record corrente è null (non ha alcun valore).|
|[CRecordset::IsFieldNullable](#isfieldnullable)|Restituisce diverso da zero se il campo specificato nel record corrente può essere impostato su null (senza alcun valore).|
|[CRecordset::IsOpen](#isopen)|Restituisce diverso `Open` da zero se è stato chiamato in precedenza.|
|[CRecordset::Sposta](#move)|Posiziona il recordset a un numero specificato di record dal record corrente in entrambe le direzioni.|
|[CRecordset::MoveFirst](#movefirst)|Posiziona il record corrente sul primo record del recordset. Eseguire `IsBOF` prima il test.|
|[CRecordset::MoveLast](#movelast)|Posiziona il record corrente nell'ultimo o nell'ultimo set di righe. Eseguire `IsEOF` prima il test.|
|[CRecordset::MoveNext](#movenext)|Posiziona il record corrente nel record successivo o nel set di righe successivo. Eseguire `IsEOF` prima il test.|
|[CRecordset::MovePrev](#moveprev)|Posiziona il record corrente nel record precedente o nel set di righe precedente. Eseguire `IsBOF` prima il test.|
|[CRecordset::OnSetOptions](#onsetoptions)|Chiamato per impostare le opzioni (utilizzate nella selezione) per l'istruzione ODBC specificata.|
|[CRecordset::OnSetUpdateOptions](#onsetupdateoptions)|Chiamato per impostare le opzioni (utilizzate durante l'aggiornamento) per l'istruzione ODBC specificata.|
|[CRecordset::Open](#open)|Apre il recordset recuperando la tabella o eseguendo la query rappresentata dal recordset.|
|[CRecordset::RefreshRowset](#refreshrowset)|Aggiorna i dati e lo stato delle righe specificate.|
|[CRecordset::Requery](#requery)|Esegue nuovamente la query del recordset per aggiornare i record selezionati.|
|[CRecordset::SetAbsolutePosition](#setabsoluteposition)|Posiziona il recordset sul record corrispondente al numero di record specificato.|
|[CRecordset::SetBookmark](#setbookmark)|Posiziona il recordset sul record specificato dal segnalibro.|
|[CRecordset::SetFieldDirty](#setfielddirty)|Contrassegna il campo specificato nel record corrente come modificato.|
|[CRecordset::SetFieldNull](#setfieldnull)|Imposta il valore del campo specificato nel record corrente su null (senza alcun valore).|
|[CRecordset::SetLockingMode](#setlockingmode)|Imposta la modalità di blocco su blocco "ottimistico" (impostazione predefinita) o "pessimistico". Determina la modalità di blocco dei record per gli aggiornamenti.|
|[CRecordset::SetParamNull](#setparamnull)|Imposta il parametro specificato su null (senza alcun valore).|
|[CRecordset::SetRowsetCursorPosition](#setrowsetcursorposition)|Posiziona il cursore sulla riga specificata all'interno del set di righe.|
|[CRecordset::SetRowsetSize](#setrowsetsize)|Specifica il numero di record che si desidera recuperare durante un recupero.|
|[CRecordset::Aggiornamento](#update)|Completa un'operazione `AddNew` o `Edit` salvando i dati nuovi o modificati nell'origine dati.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRecordset::m_hstmt](#m_hstmt)|Contiene l'handle dell'istruzione ODBC per il recordset. Digitare `HSTMT`.|
|[CRecordset::m_nFields](#m_nfields)|Contiene il numero di membri dati di campo nel recordset. Digitare `UINT`.|
|[CRecordset::m_nParams](#m_nparams)|Contiene il numero di membri dati di parametro nel recordset. Digitare `UINT`.|
|[CRecordset::m_pDatabase](#m_pdatabase)|Contiene un puntatore all'oggetto tramite il `CDatabase` quale il recordset è connesso a un'origine dati.|
|[CRecordset::m_strFilter](#m_strfilter)|Contiene `CString` un oggetto che specifica una `WHERE` clausola SQL (Structured Query Language). Utilizzato come filtro per selezionare solo i record che soddisfano determinati criteri.|
|[CRecordset::m_strSort](#m_strsort)|Contiene `CString` un che specifica `ORDER BY` una clausola SQL. Consente di controllare la modalità di ordinamento dei record.|

## <a name="remarks"></a>Osservazioni su <a name="remarks"></a>

Gli oggetti noti `CRecordset` come "recordset", vengono in genere utilizzati in due forme: dynaset e snapshot. Un dynaset rimane sincronizzato con gli aggiornamenti dei dati eseguiti da altri utenti. Uno snapshot è una visualizzazione statica dei dati. Ogni modulo rappresenta un set di record fissi al momento dell'apertura del recordset, ma quando si scorre su un record in un dynaset, riflette le modifiche apportate successivamente al record, da altri utenti o da altri recordset nell'applicazione.

> [!NOTE]
> Se si utilizzano le classi DAO (Data Access Objects) anziché le classi ODBC (Open Database Connectivity), utilizzare invece la classe [CDaoRecordset.](../../mfc/reference/cdaorecordset-class.md) Per ulteriori informazioni, vedere l'articolo [Panoramica: Programmazione di database](../../data/data-access-programming-mfc-atl.md).

Per utilizzare entrambi i tipi di recordset, in genere `CRecordset`derivare una classe recordset specifica dell'applicazione da . I recordset selezionano record da un'origine dati ed è quindi possibile:

- Scorrere i record.

- Aggiornare i record e specificare una modalità di blocco.

- Filtrare il recordset per vincolare i record selezionati tra quelli disponibili nell'origine dati.

- Ordinare il recordset.

- Parametrizzare il recordset per personalizzarne la selezione con informazioni non note fino alla fase di esecuzione.

Per utilizzare la classe, aprire un database e costruire un `CDatabase` oggetto recordset, passando al costruttore un puntatore all'oggetto. Chiamare quindi la `Open` funzione membro del recordset, in cui è possibile specificare se l'oggetto è un dynaset o uno snapshot. La `Open` chiamata seleziona i dati dall'origine dati. Dopo aver aperto l'oggetto recordset, utilizzare le funzioni membro e i membri dati per scorrere i record e operare su di essi. Le operazioni disponibili dipendono dal fatto che l'oggetto sia un dynaset o uno snapshot, che sia aggiornabile o di sola lettura (a seconda della funzionalità dell'origine dati ODBC (Open Database Connectivity)) e che sia stato implementato il recupero di massa di righe. Per aggiornare i record che potrebbero `Open` essere stati modificati `Requery` o aggiunti dopo la chiamata, chiamare la funzione membro dell'oggetto. Chiamare la funzione `Close` membro dell'oggetto ed eliminare l'oggetto al termine.

In una `CRecordset` classe derivata, lo scambio di campi di record (RFX) o lo scambio di campi di record in blocco (RFX in blocco) viene utilizzato per supportare la lettura e l'aggiornamento dei campi di record.

Per ulteriori informazioni sui recordset e sullo scambio di campi di record, vedere gli articoli [Overview: Database Programming](../../data/data-access-programming-mfc-atl.md), [Recordset (ODBC)](../../data/odbc/recordset-odbc.md), [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md)e [Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md). Per un focus su dynaset e istantanee, consultate gli articoli [Dynaset](../../data/odbc/dynaset.md) e [Snapshot](../../data/odbc/snapshot.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CRecordset`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="crecordsetaddnew"></a><a name="addnew"></a>CRecordset::AddNew

Prepara l'aggiunta di un nuovo record alla tabella.

```
virtual void AddNew();
```

### <a name="remarks"></a>Osservazioni

È necessario chiamare la funzione membro [Requery](#requery) per visualizzare il record appena aggiunto. I campi del record sono inizialmente Null. (Nella terminologia del database, Null significa "non avere alcun valore" e non è uguale a NULL in C . Per completare l'operazione, è necessario chiamare la funzione membro [Update.](#update) `Update`salva le modifiche apportate all'origine dati.

> [!NOTE]
> Se è stato implementato il recupero `AddNew`di massa di righe, non è possibile chiamare . Ciò comporterà un'asserzione non riuscita. Sebbene `CRecordset` la classe non fornisca un meccanismo per l'aggiornamento di `SQLSetPos`massa di righe di dati, è possibile scrivere funzioni personalizzate utilizzando la funzione API ODBC . Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

`AddNew`prepara un nuovo record vuoto utilizzando i membri dati di campo del recordset. Dopo aver `AddNew`chiamato , impostare i valori desiderati nei membri dati di campo del recordset. Non è necessario chiamare la funzione membro [Edit](#edit) `Edit` a questo scopo, utilizzare solo per i record esistenti. Quando successivamente `Update`si chiama , i valori modificati nei membri dati di campo vengono salvati nell'origine dati.

> [!CAUTION]
> Se si scorre fino a `Update`un nuovo record prima di chiamare , il nuovo record viene perso e non viene visualizzato alcun avviso.

Se l'origine dati supporta le transazioni, è possibile rendere la `AddNew` chiamata parte di una transazione. Per ulteriori informazioni sulle transazioni, vedere la classe [CDatabase](../../mfc/reference/cdatabase-class.md). Si noti che è necessario chiamare `AddNew` [CDatabase::BeginTrans](../../mfc/reference/cdatabase-class.md#begintrans) prima di chiamare .

> [!NOTE]
> Per i dynaset, i nuovi record vengono aggiunti al recordset come ultimo record. I record aggiunti non vengono aggiunti agli snapshot; è necessario `Requery` chiamare per aggiornare il recordset.

Non è consentito chiamare `AddNew` `Open` un recordset la cui funzione membro non è stata chiamata. Viene `CDBException` generata un'eccezione se si chiama `AddNew` un recordset a cui non è possibile aggiungere un recordset. È possibile determinare se il recordset è aggiornabile chiamando [CanAppend](#canappend).

Per ulteriori informazioni, vedere i seguenti articoli: [Recordset: Modalità di aggiornamento dei record dell'oggetto Recordset (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md), [Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)e [Transazione (ODBC)](../../data/odbc/transaction-odbc.md).

### <a name="example"></a>Esempio

Vedere l'articolo [transazione: esecuzione di una transazione in un recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).

## <a name="crecordsetcanappend"></a><a name="canappend"></a>CRecordset::CanAppend

Determina se il recordset aperto in precedenza consente di aggiungere nuovi record.

```
BOOL CanAppend() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset consente l'aggiunta di nuovi record; in caso contrario 0. `CanAppend`restituirà 0 se il recordset è stato aperto in sola lettura.

## <a name="crecordsetcanbookmark"></a><a name="canbookmark"></a>CRecordset::CanBookmark

Determina se il recordset consente di contrassegnare i record utilizzando i segnalibri.

```
BOOL CanBookmark() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset supporta i segnalibri; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione è `CRecordset::useBookmarks` indipendente dall'opzione nel parametro *dwOptions* della funzione membro [Open.](#open) `CanBookmark`indica se il driver ODBC e il tipo di cursore forniti supportano i segnalibri. `CRecordset::useBookmarks`indica se i segnalibri saranno disponibili, a condizione che siano supportati.

> [!NOTE]
> I segnalibri non sono supportati nei recordset forward-only.

Per ulteriori informazioni sui segnalibri e l'esplorazione dei recordset, vedere gli articoli [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md) e [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

## <a name="crecordsetcancel"></a><a name="cancel"></a>CRecordset::Annulla

Richiede che l'origine dati annulli un'operazione asincrona in corso o un processo da un secondo thread.

```
void Cancel();
```

### <a name="remarks"></a>Osservazioni

Si noti che le classi ODBC MFC non utilizzano più l'elaborazione asincrona; Per eseguire un'operazione asincrona, è necessario chiamare `SQLSetConnectOption`direttamente la funzione API ODBC . Per ulteriori informazioni, vedere l'argomento "Esecuzione asincrona di funzioni" in *ODBC SDK Programmer's Guide*.

## <a name="crecordsetcancelupdate"></a><a name="cancelupdate"></a>CRecordset::CancelUpdate

Annulla tutti gli aggiornamenti in sospeso, causati da un'operazione [Di modifica](#edit) o [AggiungiNuovo,](#addnew) prima che venga chiamato [L'operazione Update.](#update)

```
void CancelUpdate();
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Questa funzione membro non è applicabile ai recordset che utilizzano il `Edit` `AddNew`recupero `Update`di massa di righe, poiché tali recordset non possono chiamare , , o . Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Se il controllo automatico `CancelUpdate` dei campi dirty è abilitato, `Edit` ripristinerà le variabili membro ai valori che avevano prima o `AddNew` sono stati chiamati; in caso contrario, le modifiche al valore rimarranno. Per impostazione predefinita, il controllo automatico dei campi è abilitato all'apertura del recordset. Per disabilitarlo, è `CRecordset::noDirtyFieldCheck` necessario specificare il nel *dwOptions* parametro del [Open](#open) funzione membro.

Per ulteriori informazioni sull'aggiornamento dei dati, vedere l'articolo [Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md).

## <a name="crecordsetcanrestart"></a><a name="canrestart"></a>CRecordset::CanRestart

Determina se il recordset consente il riavvio della query `Requery` (per aggiornare i record) chiamando la funzione membro.

```
BOOL CanRestart() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se requery è consentito; in caso contrario 0.

## <a name="crecordsetcanscroll"></a><a name="canscroll"></a>CRecordset::CanScroll

Determina se il recordset consente lo scorrimento.

```
BOOL CanScroll() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset consente lo scorrimento; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sullo scorrimento, vedere l'articolo [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

## <a name="crecordsetcantransact"></a><a name="cantransact"></a>CRecordset::CanTransact

Determina se il recordset consente le transazioni.

```
BOOL CanTransact() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset consente transazioni; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere l'articolo [Transazione (ODBC)](../../data/odbc/transaction-odbc.md).

## <a name="crecordsetcanupdate"></a><a name="canupdate"></a>CRecordset::CanUpdate

Determina se il recordset può essere aggiornato.

```
BOOL CanUpdate() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset può essere aggiornato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Un recordset può essere di sola lettura se l'origine `CRecordset::readOnly` dati sottostante è di sola lettura o se è stata specificata nel parametro *dwOptions* all'apertura del recordset.

## <a name="crecordsetcheckrowseterror"></a><a name="checkrowseterror"></a>CRecordset::CheckRowsetError

Chiamato per gestire gli errori generati durante il recupero dei record.

```
virtual void CheckRowsetError(RETCODE nRetCode);
```

### <a name="parameters"></a>Parametri

*nRetCode (codice)*<br/>
Codice restituito da una funzione API ODBC. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Osservazioni

Questa funzione membro virtuale gestisce gli errori che si verificano quando vengono recuperati i record ed è utile durante il recupero di massa di righe. È consigliabile `CheckRowsetError` eseguire l'override per implementare la gestione degli errori personalizzata.

`CheckRowsetError`viene chiamato automaticamente in un'operazione `Open` `Requery`di spostamento `Move` del cursore, ad esempio , , o qualsiasi operazione . Viene passato il valore restituito della `SQLExtendedFetch`funzione API ODBC. Nella tabella seguente sono elencati i valori possibili per il parametro *nRetCode.*

|nRetCode (codice)|Descrizione|
|--------------|-----------------|
|SQL_SUCCESS|Funzione completata correttamente; non sono disponibili ulteriori informazioni.|
|Sql_success_with_info|Funzione completata correttamente, probabilmente con un errore non irreversibile. Ulteriori informazioni possono essere `SQLError`ottenute chiamando .|
|SQL_NO_DATA_FOUND|Tutte le righe del set di risultati sono state recuperate.|
|SQL_ERROR|Funzione non riuscita. Ulteriori informazioni possono essere `SQLError`ottenute chiamando .|
|SQL_INVALID_HANDLE|Funzione non riuscita a causa di un handle di ambiente non valido, handle di connessione o handle di istruzione. Ciò indica un errore di programmazione. Nessuna informazione `SQLError`aggiuntiva è disponibile da .|
|SQL_STILL_EXECUTING|Una funzione avviata in modo asincrono è ancora in esecuzione. Si noti che per impostazione `CheckRowsetError`predefinita, MFC non passerà mai questo valore a ; MFC continuerà `SQLExtendedFetch` a chiamare finché non non ritorna più SQL_STILL_EXECUTING.|

Per ulteriori `SQLError`informazioni su , vedere Windows SDK. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="crecordsetclose"></a><a name="close"></a>CRecordset::Chiudi

Chiude il recordset.

```
virtual void Close();
```

### <a name="remarks"></a>Osservazioni

L'HSTMT ODBC e tutta la memoria allocata per il recordset vengono deallocati. In genere, dopo la chiamata, `Close`si elimina l'oggetto recordset di C, se è stato allocato con **new**.

È possibile `Open` chiamare `Close`nuovamente dopo aver chiamato . Ciò consente di riutilizzare l'oggetto recordset. L'alternativa è `Requery`chiamare .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#17](../../mfc/codesnippet/cpp/crecordset-class_1.cpp)]

## <a name="crecordsetcrecordset"></a><a name="crecordset"></a>CRecordset::CRecordset

Costruisce un oggetto `CRecordset`.

```
CRecordset(CDatabase* pDatabase = NULL);
```

### <a name="parameters"></a>Parametri

*pDatabase*<br/>
Contiene un puntatore a un `CDatabase` oggetto o il valore NULL. Se non NULL `CDatabase` e `Open` la funzione membro dell'oggetto non è stata chiamata per connetterla all'origine dati, il recordset tenta di aprirlo automaticamente durante la propria `Open` chiamata. Se si passa `CDatabase` NULL, un oggetto viene costruito e connesso automaticamente utilizzando le informazioni sull'origine dati specificate quando è stata derivata la classe recordset con ClassWizard.

### <a name="remarks"></a>Osservazioni

È possibile `CRecordset` utilizzare direttamente o derivare `CRecordset`una classe specifica dell'applicazione da . È possibile utilizzare ClassWizard per derivare le classi recordset.

> [!NOTE]
> Una classe derivata *deve* fornire il proprio costruttore. Nel costruttore della classe derivata, chiamare il costruttore `CRecordset::CRecordset`, passando i parametri appropriati.

Passare NULL al costruttore `CDatabase` del recordset per fare in modo che un oggetto venga costruito e connesso automaticamente. Si tratta di una sintassi abbreviata utile `CDatabase` che non richiede la costruzione e la connessione di un oggetto prima della costruzione del recordset.

### <a name="example"></a>Esempio

Per ulteriori informazioni, vedere l'articolo [Recordset: dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md).

## <a name="crecordsetdelete"></a><a name="delete"></a>CRecordset::Delete

Elimina il record corrente.

```
virtual void Delete();
```

### <a name="remarks"></a>Osservazioni

Dopo un'eliminazione riuscita, i membri dati di campo del recordset vengono impostati su un valore Null ed è necessario chiamare in modo esplicito una delle `Move` funzioni per spostarsi all'esterno del record eliminato. Una volta spostato dal record eliminato, non è possibile tornare ad esso. Se l'origine dati supporta le transazioni, è possibile effettuare la `Delete` chiamata parte di una transazione. Per ulteriori informazioni, vedere l'articolo [Transazione (ODBC)](../../data/odbc/transaction-odbc.md).

> [!NOTE]
> Se è stato implementato il recupero `Delete`di massa di righe, non è possibile chiamare . Ciò comporterà un'asserzione non riuscita. Sebbene `CRecordset` la classe non fornisca un meccanismo per l'aggiornamento di `SQLSetPos`massa di righe di dati, è possibile scrivere funzioni personalizzate utilizzando la funzione API ODBC . Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

> [!CAUTION]
> Il recordset deve essere aggiornabile e deve essere presente un `Delete`record valido nel recordset quando si chiama ; in caso contrario, si verifica un errore. Ad esempio, se si elimina un record ma non `Delete` si `Delete` scorre su un nuovo record prima di chiamare nuovamente, viene generata un'eccezione [CDBException](../../mfc/reference/cdbexception-class.md).

A differenza di [AddNew](#addnew) `Delete` e [Edit](#edit), una chiamata a non è seguita da una chiamata a [Update](#update). Se `Delete` una chiamata ha esito negativo, i membri dati di campo vengono lasciati invariati.

### <a name="example"></a>Esempio

Questo esempio mostra un recordset creato sul frame di una funzione. Nell'esempio si presuppone `m_dbCust`l'esistenza di `CDatabase` , una variabile membro di tipo già connessa all'origine dati.

[!code-cpp[NVC_MFCDatabase#18](../../mfc/codesnippet/cpp/crecordset-class_2.cpp)]

## <a name="crecordsetdobulkfieldexchange"></a><a name="dobulkfieldexchange"></a>CRecordset::DoBulkFieldExchange

Chiamato per lo scambio di righe bulk di dati dall'origine dati al recordset. Implementa lo scambio di massa di campi di record (RFX di massa).

```
virtual void DoBulkFieldExchange(CFieldExchange* pFX);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange.](../../mfc/reference/cfieldexchange-class.md) Il framework avrà già impostato questo oggetto per specificare un contesto per l'operazione di scambio di campo.

### <a name="remarks"></a>Osservazioni

Quando viene implementato il recupero di massa di righe, il framework chiama questa funzione membro per trasferire automaticamente i dati dall'origine dati all'oggetto recordset. `DoBulkFieldExchange`associa inoltre i membri dati di parametro, se presenti, ai segnaposto di parametro nella stringa dell'istruzione SQL per la selezione del recordset.

Se il recupero di massa di righe non è implementato, il framework chiama [DoFieldExchange](#dofieldexchange). Per implementare il recupero di `CRecordset::useMultiRowFetch` massa di righe, è necessario specificare l'opzione del parametro *dwOptions* nella funzione membro [Open.](#open)

> [!NOTE]
> `DoBulkFieldExchange`è disponibile solo se si utilizza `CRecordset`una classe derivata da . Se è stato creato un `CRecordset`oggetto recordset direttamente da , è necessario chiamare la funzione membro [GetFieldValue](#getfieldvalue) per recuperare i dati.

Scambio di campi di record in blocco (RFX di massa) è simile a RFX (Record Field Exchange). I dati vengono trasferiti automaticamente dall'origine dati all'oggetto recordset. Tuttavia, non `AddNew` `Edit`è `Delete`possibile `Update` chiamare , , o trasferire le modifiche all'origine dati. La `CRecordset` classe attualmente non fornisce un meccanismo per l'aggiornamento di massa di righe di dati; Tuttavia, è possibile scrivere funzioni personalizzate `SQLSetPos`utilizzando la funzione API ODBC .

Si noti che ClassWizard non supporta lo scambio di massa di campi di record; pertanto, è `DoBulkFieldExchange` necessario eseguire l'override manualmente scrivendo le chiamate alle funzioni RFX di massa. Per ulteriori informazioni su queste funzioni, vedere l'argomento Funzioni di [scambio campi](../../mfc/reference/record-field-exchange-functions.md)record .

Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). Per informazioni correlate, vedere l'articolo [Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md).

## <a name="crecordsetdofieldexchange"></a><a name="dofieldexchange"></a>CRecordset::DoFieldExchange

Chiamato per lo scambio di dati (in entrambe le direzioni) tra i membri dati di campo del recordset e il record corrispondente nell'origine dati. Implementa lo scambio di campi di record (RFX).

```
virtual void DoFieldExchange(CFieldExchange* pFX);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange.](../../mfc/reference/cfieldexchange-class.md) Il framework avrà già impostato questo oggetto per specificare un contesto per l'operazione di scambio di campo.

### <a name="remarks"></a>Osservazioni

Quando il recupero di massa di righe non è implementato, il framework chiama questa funzione membro per scambiare automaticamente i dati tra i membri dati di campo dell'oggetto recordset e le colonne corrispondenti del record corrente nell'origine dati. `DoFieldExchange`associa inoltre i membri dati di parametro, se presenti, ai segnaposto di parametro nella stringa dell'istruzione SQL per la selezione del recordset.

Se viene implementato il recupero di massa di righe, il framework chiama [DoBulkFieldExchange](#dobulkfieldexchange). Per implementare il recupero di `CRecordset::useMultiRowFetch` massa di righe, è necessario specificare l'opzione del parametro *dwOptions* nella funzione membro [Open.](#open)

> [!NOTE]
> `DoFieldExchange`è disponibile solo se si utilizza `CRecordset`una classe derivata da . Se è stato creato un `CRecordset`oggetto recordset direttamente da , è necessario chiamare la funzione membro [GetFieldValue](#getfieldvalue) per recuperare i dati.

Lo scambio di dati di campo, denominato RFX (Record Field Exchange), funziona in entrambe le direzioni: dai membri dati di campo dell'oggetto recordset ai campi del record nell'origine dati e dal record nell'origine dati all'oggetto recordset.

L'unica azione che è `DoFieldExchange` in genere necessario eseguire per implementare per la classe recordset derivata consiste nel creare la classe con ClassWizard e specificare i nomi e i tipi di dati dei membri dati di campo. È anche possibile aggiungere codice a ciò che ClassWizard scrive per specificare i membri dati di parametro o per gestire le colonne associate in modo dinamico. Per ulteriori informazioni, vedere l'articolo [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).

Quando si dichiara la classe recordset derivata con `DoFieldExchange` ClassWizard, la procedura guidata scrive automaticamente un override di, analogamente all'esempio seguente:

[!code-cpp[NVC_MFCDatabase#19](../../mfc/codesnippet/cpp/crecordset-class_3.cpp)]

Per ulteriori informazioni sulle funzioni RFX, vedere l'argomento Funzioni di [scambio campi](../../mfc/reference/record-field-exchange-functions.md)record .

Per ulteriori esempi `DoFieldExchange`e dettagli su , vedere l'articolo [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md). Per informazioni generali su RFX, vedere l'articolo [Scambio di campi](../../data/odbc/record-field-exchange-rfx.md)di record .

## <a name="crecordsetedit"></a><a name="edit"></a>CRecordset::Modifica

Consente di modificare il record corrente.

```
virtual void Edit();
```

### <a name="remarks"></a>Osservazioni

Dopo aver `Edit`chiamato , è possibile modificare i membri dati di campo reimpostando direttamente i relativi valori. L'operazione viene completata quando successivamente si chiama la funzione membro [Update](#update) per salvare le modifiche nell'origine dati.

> [!NOTE]
> Se è stato implementato il recupero `Edit`di massa di righe, non è possibile chiamare . Ciò comporterà un'asserzione non riuscita. Sebbene `CRecordset` la classe non fornisca un meccanismo per l'aggiornamento di `SQLSetPos`massa di righe di dati, è possibile scrivere funzioni personalizzate utilizzando la funzione API ODBC . Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

`Edit`salva i valori dei membri dati del recordset. Se si `Edit`chiama , si `Edit` apportano modifiche e quindi si chiama di `Edit` nuovo, i valori del record vengono ripristinati a quelli che erano prima della prima chiamata.

In alcuni casi, è possibile aggiornare una colonna rendendola Null (che non contiene dati). A tale scopo, chiamare [SetFieldNull](#setfieldnull) con un parametro TRUE per contrassegnare il campo Null; in questo modo anche la colonna da aggiornare. Se si desidera che un campo venga scritto nell'origine dati anche se il relativo valore non è stato modificato, chiamare [SetFieldDirty](#setfielddirty) con un parametro TRUE. Questo funziona anche se il campo ha il valore Null.

Se l'origine dati supporta le transazioni, è possibile effettuare la `Edit` chiamata parte di una transazione. Si noti che è necessario chiamare `Edit` [CDatabase::BeginTrans](../../mfc/reference/cdatabase-class.md#begintrans) prima di chiamare e dopo l'apertura del recordset. Si noti inoltre che la chiamata a [CDatabase::CommitTrans](../../mfc/reference/cdatabase-class.md#committrans) non sostituisce la chiamata `Update` per completare l'operazione. `Edit` Per ulteriori informazioni sulle transazioni, vedere la classe [CDatabase](../../mfc/reference/cdatabase-class.md).

A seconda della modalità di blocco corrente, `Edit` il `Update` record da aggiornare potrebbe essere bloccato da `Edit` fino a quando non si chiama o si scorre a un altro record o può essere bloccato solo durante la chiamata. È possibile modificare la modalità di blocco con [SetLockingMode](#setlockingmode).

Il valore precedente del record corrente viene ripristinato se `Update`si scorre fino a un nuovo record prima di chiamare . Viene `CDBException` generata un'eccezione se si chiama `Edit` un recordset che non può essere aggiornato o se non è presente alcun record corrente.

Per ulteriori informazioni, vedere gli articoli [Transaction (ODBC)](../../data/odbc/transaction-odbc.md) e [Recordset: blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#20](../../mfc/codesnippet/cpp/crecordset-class_4.cpp)]

## <a name="crecordsetflushresultset"></a><a name="flushresultset"></a>CRecordset::FlushResultSet

Recupera il set di risultati successivo di una query predefinita (stored procedure), se sono presenti più set di risultati.

```
BOOL FlushResultSet();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se sono presenti più set di risultati da recuperare; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

È necessario `FlushResultSet` chiamare solo quando si è completamente finito con il cursore sul set di risultati corrente. Si noti che quando si `FlushResultSet`recupera il set di risultati successivo chiamando , il cursore non è valido in tale set di risultati; è necessario chiamare la funzione `FlushResultSet`membro [MoveNext](#movenext) dopo aver chiamato .

Se una query predefinita utilizza un parametro di output `FlushResultSet` o `FALSE` parametri di input/output, è necessario chiamare fino a quando non restituisce (il valore 0), per ottenere questi valori di parametro.

`FlushResultSet`chiama la funzione `SQLMoreResults`API ODBC . Se `SQLMoreResults` restituisce SQL_ERROR `FlushResultSet` o SQL_INVALID_HANDLE, verrà generata un'eccezione. Per ulteriori `SQLMoreResults`informazioni su , vedere Windows SDK.

La stored procedure deve avere campi associati `FlushResultSet`se si desidera chiamare .

### <a name="example"></a>Esempio

Nel codice seguente `COutParamRecordset` si `CRecordset`presuppone che sia un oggetto derivato da un oggetto basato su una query predefinita con un parametro di input e un parametro di output e con più set di risultati. Si noti la struttura dell'override di [DoFieldExchange.](#dofieldexchange)

[!code-cpp[NVC_MFCDatabase#21](../../mfc/codesnippet/cpp/crecordset-class_5.cpp)]

[!code-cpp[NVC_MFCDatabase#22](../../mfc/codesnippet/cpp/crecordset-class_6.cpp)]

## <a name="crecordsetgetbookmark"></a><a name="getbookmark"></a>CRecordset::GetBookmark

Ottiene il valore del segnalibro per il record corrente.

```
void GetBookmark(CDBVariant& varBookmark);
```

### <a name="parameters"></a>Parametri

*varBookmark*<br/>
Riferimento a un [CDBVariant](../../mfc/reference/cdbvariant-class.md) oggetto che rappresenta il segnalibro nel record corrente.

### <a name="remarks"></a>Osservazioni

Per determinare se i segnalibri sono supportati nel recordset, chiamare [CanBookmark](#canbookmark). Per rendere disponibili i segnalibri se supportati, è necessario impostare l'opzione `CRecordset::useBookmarks` nel parametro *dwOptions* della funzione membro [Open.](#open)

> [!NOTE]
> Se i segnalibri non sono `GetBookmark` supportati o non sono disponibili, la chiamata genererà un'eccezione. I segnalibri non sono supportati nei recordset forward-only.

`GetBookmark`assegna il valore del segnalibro per `CDBVariant` il record corrente a un oggetto. Per tornare a tale record in qualsiasi momento dopo lo spostamento `CDBVariant` a un record diverso, chiamare [SetBookmark](#setbookmark) con l'oggetto corrispondente.

> [!NOTE]
> Dopo alcune operazioni del recordset, i segnalibri potrebbero non essere più validi. Ad esempio, se `GetBookmark` si `Requery`chiama seguito da , potrebbe non `SetBookmark`essere possibile tornare al record con . Chiamare [CDatabase::GetBookmarkPersistence](../../mfc/reference/cdatabase-class.md#getbookmarkpersistence) per verificare `SetBookmark`se è possibile chiamare in modo sicuro .

Per ulteriori informazioni sui segnalibri e l'esplorazione dei recordset, vedere gli articoli [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md) e [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

## <a name="crecordsetgetdefaultconnect"></a><a name="getdefaultconnect"></a>CRecordset::GetDefaultConnect

Chiamato per ottenere la stringa di connessione predefinita.

```
virtual CString GetDefaultConnect();
```

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che contiene la stringa di connessione predefinita.

### <a name="remarks"></a>Osservazioni

Il framework chiama questa funzione membro per ottenere la stringa di connessione predefinita per l'origine dati su cui è basato il recordset. ClassWizard implementa questa funzione automaticamente identificando la stessa origine dati usata in ClassWizard per ottenere informazioni su tabelle e colonne. Probabilmente sarà conveniente fare affidamento su questa connessione predefinita durante lo sviluppo dell'applicazione. Tuttavia, la connessione predefinita potrebbe non essere appropriata per gli utenti dell'applicazione. In tal caso, è necessario reimplementare questa funzione, eliminando la versione di ClassWizard.If this is the case, you should reimplement this function, discarding ClassWizard's version. Per ulteriori informazioni sulle stringhe di connessione, vedere l'articolo [Origine dati (ODBC)](../../data/odbc/data-source-odbc.md).

## <a name="crecordsetgetdefaultsql"></a><a name="getdefaultsql"></a>CRecordset::GetDefaultSQL

Chiamato per ottenere la stringa SQL predefinita da eseguire.

```
virtual CString GetDefaultSQL();
```

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che contiene l'istruzione SQL predefinita.

### <a name="remarks"></a>Osservazioni

Il framework chiama questa funzione membro per ottenere l'istruzione SQL predefinita su cui è basato il recordset. Potrebbe trattarsi di un nome di tabella o di un'istruzione SQL **SELECT.**

L'istruzione SQL predefinita viene definita indirettamente dichiarando la classe recordset con ClassWizard e ClassWizard esegue automaticamente questa attività.

Se è necessaria la stringa dell'istruzione `GetSQL`SQL per uso personale, chiamare , che restituisce l'istruzione SQL utilizzata per selezionare i record del recordset all'apertura. È possibile modificare la stringa SQL predefinita `GetDefaultSQL`nell'override della classe di . Ad esempio, è possibile specificare una chiamata a una query predefinita utilizzando un'istruzione **CALL.** Si noti, tuttavia, `GetDefaultSQL`che se si `m_nFields` modifica , è necessario modificare anche in modo che corrisponda al numero di colonne nell'origine dati.

Per ulteriori informazioni, vedere l'articolo [Recordset: dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md).

> [!CAUTION]
> Il nome della tabella sarà vuoto se il framework non è in grado di identificare un nome di tabella, se sono stati forniti più nomi di tabella o se non è stato possibile interpretare un'istruzione **CALL.** Si noti che quando si utilizza un'istruzione **CALL,** non è necessario inserire spazi vuoti tra la parentesi graffa e la parola chiave **CALL,** né inserire spazi vuoti prima della parentesi graffa o prima della parola chiave SELECT in un'istruzione **SELECT.** **SELECT**

## <a name="crecordsetgetfieldvalue"></a><a name="getfieldvalue"></a>CRecordset::GetFieldValue

Recupera i dati del campo nel record corrente.

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
Nome di un campo.

*varValu*e Un riferimento a un oggetto [CDBVariant](../../mfc/reference/cdbvariant-class.md) che memorizzerà il valore del campo.

*nTipodi oggetto*<br/>
Tipo di dati ODBC C del campo. L'utilizzo del valore `GetFieldValue` predefinito, DEFAULT_FIELD_TYPE, impone di determinare il tipo di dati C dal tipo di dati SQL, in base alla tabella seguente. In caso contrario, è possibile specificare direttamente il tipo di dati o scegliere un tipo di dati compatibile. ad esempio, è possibile memorizzare qualsiasi tipo di dati in SQL_C_CHAR.

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

Per ulteriori informazioni sui tipi di dati ODBC, vedere gli argomenti "Tipi di dati SQL" e "Tipi di dati C" nell'Appendice D di Windows SDK.

*nIndex*<br/>
Indice in base zero del campo.

*strValue (informazioni in due)*<br/>
Un riferimento a un [Oggetto CString](../../atl-mfc-shared/reference/cstringt-class.md) che memorizzerà il valore del campo convertito in testo, indipendentemente dal tipo di dati del campo.

### <a name="remarks"></a>Osservazioni

È possibile cercare un campo in base al nome o all'indice. È possibile memorizzare il `CDBVariant` valore del `CString` campo in un oggetto o in un oggetto.

Se è stato implementato il recupero di massa di righe, il record corrente è sempre posizionato sul primo record in un set di righe. Per `GetFieldValue` utilizzare un record all'interno di un set di righe specificato, è innanzitutto necessario chiamare il [SetRowsetCursorPosition](#setrowsetcursorposition) funzione membro per spostare il cursore nella riga desiderata all'interno di tale set di righe. Allora `GetFieldValue` chiama quella riga. Per implementare il recupero di `CRecordset::useMultiRowFetch` massa di righe, è necessario specificare l'opzione del parametro *dwOptions* nella funzione membro [Open.](#open)

È possibile `GetFieldValue` utilizzare per recuperare dinamicamente i campi in fase di esecuzione anziché associarli in modo statico in fase di progettazione. Ad esempio, se è stato dichiarato `CRecordset`un oggetto `GetFieldValue` recordset direttamente da , è necessario utilizzare per recuperare i dati del campo; Scambio di campi di record (RFX) o Scambio di campi di record in blocco (RFX in blocco) non è implementato.

> [!NOTE]
> Se si dichiara un oggetto `CRecordset`recordset senza derivare da , la libreria di cursori ODBC non è caricata. La libreria di cursori richiede che il recordset abbia almeno una colonna associata; Tuttavia, quando `CRecordset` si utilizza direttamente, nessuna delle colonne è associata. Le funzioni membro [CDatabase::OpenEx](../../mfc/reference/cdatabase-class.md#openex) e [CDatabase::Open](../../mfc/reference/cdatabase-class.md#open) controllano se la libreria di cursori verrà caricata.

`GetFieldValue`chiama la funzione `SQLGetData`API ODBC . Se il driver restituisce il valore SQL_NO_TOTAL per `GetFieldValue` la lunghezza effettiva del valore del campo, genera un'eccezione. Per ulteriori `SQLGetData`informazioni su , vedere Windows SDK.

### <a name="example"></a>Esempio

Nel codice di esempio `GetFieldValue` riportato di seguito `CRecordset`vengono illustrate le chiamate per un oggetto recordset dichiarato direttamente da .

[!code-cpp[NVC_MFCDatabase#23](../../mfc/codesnippet/cpp/crecordset-class_7.cpp)]

> [!NOTE]
> A differenza della `CDaoRecordset` `CRecordset` classe DAO `SetFieldValue` , non dispone di una funzione membro. Se si crea un `CRecordset`oggetto direttamente da , è effettivamente di sola lettura.

Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="crecordsetgetodbcfieldcount"></a><a name="getodbcfieldcount"></a>CRecordset::GetODBCFieldCount

Recupera il numero totale di campi nell'oggetto recordset.

```
short GetODBCFieldCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di campi nel recordset.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulla creazione di recordset, vedere l'articolo [Recordset: creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md).

## <a name="crecordsetgetodbcfieldinfo"></a><a name="getodbcfieldinfo"></a>CRecordset::GetODBCFieldInfo

Ottiene informazioni sui campi nel recordset.

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
Nome di un campo.

*Fieldinfo*<br/>
Riferimento a `CODBCFieldInfo` una struttura.

*nIndex*<br/>
Indice in base zero del campo.

### <a name="remarks"></a>Osservazioni

Una versione della funzione consente di cercare un campo in base al nome. L'altra versione consente di cercare un campo in base all'indice.

Per una descrizione delle informazioni restituite, vedere il [CODBCFieldInfo](../../mfc/reference/codbcfieldinfo-structure.md) struttura.

Per ulteriori informazioni sulla creazione di recordset, vedere l'articolo [Recordset: creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md).

## <a name="crecordsetgetrecordcount"></a><a name="getrecordcount"></a>CRecordset::GetRecordCount

Determina le dimensioni del recordset.

```
long GetRecordCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di record nel recordset; 0 se il recordset non contiene record; o -1 se non è possibile determinare il numero di record.

### <a name="remarks"></a>Osservazioni

> [!CAUTION]
> Il numero di record viene mantenuto come "high water mark", il record con il numero più alto visto ancora quando l'utente si sposta tra i record. Il numero totale di record è noto solo dopo che l'utente è passato oltre l'ultimo record. Per motivi di prestazioni, il conteggio `MoveLast`non viene aggiornato quando si chiama . Per contare i record `MoveNext` manualmente, `IsEOF` chiamare ripetutamente fino a quando non restituisce diverso da zero. Aggiunta di `CRecordset:AddNew` un `Update` record tramite e aumenta il conteggio; l'eliminazione `CRecordset::Delete` di un record tramite riduce il conteggio.

## <a name="crecordsetgetrowsetsize"></a><a name="getrowsetsize"></a>CRecordset::GetRowsetSize

Ottiene l'impostazione corrente per il numero di righe che si desidera recuperare durante un determinato recupero.

```
DWORD GetRowsetSize() const;
```

### <a name="return-value"></a>Valore restituito

Numero di righe da recuperare durante un determinato recupero.

### <a name="remarks"></a>Osservazioni

Se si utilizza il recupero di massa di righe, la dimensione predefinita del set di righe all'apertura del recordset è 25; in caso contrario, è 1.

Per implementare il recupero di `CRecordset::useMultiRowFetch` massa di righe, è necessario specificare l'opzione nel parametro *dwOptions* della funzione membro [Open.](#open) Per modificare l'impostazione della dimensione del set di righe, chiamare [SetRowsetSize](#setrowsetsize).

Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="crecordsetgetrowsfetched"></a><a name="getrowsfetched"></a>CRecordset::GetRowsFetched

Determina quanti record sono stati effettivamente recuperati dopo un recupero.

```
DWORD GetRowsFetched() const;
```

### <a name="return-value"></a>Valore restituito

Numero di righe recuperate dall'origine dati dopo un determinato recupero.

### <a name="remarks"></a>Osservazioni

Ciò è utile quando è stato implementato il recupero di massa di righe. La dimensione del set di righe indica in genere quante righe verranno recuperate da un recupero; Tuttavia, il numero totale di righe nel recordset influisce anche sul numero di righe che verranno recuperate in un set di righe. Ad esempio, se il recordset contiene 10 record con un'impostazione delle `MoveNext` dimensioni del set di righe pari a 4, il ciclo del recordset tramite la chiamata comporterà la presenza del set di righe finale con solo 2 record.

Per implementare il recupero di `CRecordset::useMultiRowFetch` massa di righe, è necessario specificare l'opzione nel parametro *dwOptions* della funzione membro [Open.](#open) Per specificare le dimensioni del set di righe, chiamare [SetRowsetSize](#setrowsetsize).

Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#24](../../mfc/codesnippet/cpp/crecordset-class_8.cpp)]

## <a name="crecordsetgetrowstatus"></a><a name="getrowstatus"></a>CRecordset::GetRowStatus

Ottiene lo stato per una riga nel set di righe corrente.

```
WORD GetRowStatus(WORD wRow) const;
```

### <a name="parameters"></a>Parametri

*WRow (file wRow)*<br/>
Posizione in base uno di una riga nel set di righe corrente. Questo valore può essere compreso tra 1 e la dimensione del set di righe.

### <a name="return-value"></a>Valore restituito

Valore di stato per la riga. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Osservazioni

`GetRowStatus`restituisce un valore che indica qualsiasi modifica dello stato alla riga dall'ultima volta che è stata recuperata dall'origine dati o che nessuna riga corrispondente a *wRow* è stata recuperata. Nella tabella seguente sono elencati i valori restituiti possibili.

|Valore di stato|Descrizione|
|------------------|-----------------|
|SQL_ROW_SUCCESS|La riga è invariata.|
|SQL_ROW_UPDATED|La riga è stata aggiornata.|
|SQL_ROW_DELETED|La riga è stata eliminata.|
|SQL_ROW_ADDED|La riga è stata aggiunta.|
|SQL_ROW_ERROR|La riga non è recuperabile a causa di un errore.|
|SQL_ROW_NOROW|Non esiste alcuna riga che corrisponde a *wRow*.|

Per ulteriori informazioni, vedere `SQLExtendedFetch` la funzione API ODBC in Windows SDK.

## <a name="crecordsetgetstatus"></a><a name="getstatus"></a>CRecordset::GetStatus

Determina l'indice del record corrente nel recordset e se l'ultimo record è stato visualizzato.

```
void GetStatus(CRecordsetStatus& rStatus) const;
```

### <a name="parameters"></a>Parametri

*rStatus (informazioni in stato di in*<br/>
Riferimento a un oggetto `CRecordsetStatus`. Per ulteriori informazioni, vedere le sezione Note.

### <a name="remarks"></a>Osservazioni

`CRecordset`tentativi di tenere traccia dell'indice, ma in alcune circostanze ciò potrebbe non essere possibile. Vedere [GetRecordCount](#getrecordcount) per una spiegazione.

La `CRecordsetStatus` struttura ha la seguente forma:

```cpp
struct CRecordsetStatus
{
    long m_lCurrentRecord;
    BOOL m_bRecordCountFinal;
};
```

I due `CRecordsetStatus` membri di hanno i seguenti significati:

- `m_lCurrentRecord`Contiene l'indice in base zero del record corrente nel recordset, se noto. Se non è possibile determinare l'indice, questo membro contiene AFX_CURRENT_RECORD_UNDEFINED (-2). Se `IsBOF` è TRUE (recordset vuoto o tentativo `m_lCurrentRecord` di scorrere prima del primo record), viene impostato su AFX_CURRENT_RECORD_BOF (-1). Se nel primo record, viene impostato su 0, secondo record 1 e così via.

- `m_bRecordCountFinal`Diverso da zero se è stato determinato il numero totale di record nel recordset. In genere questa operazione deve essere eseguita iniziando all'inizio del recordset e chiamando `MoveNext` fino a quando non `IsEOF` restituisce un valore diverso da zero. Se questo membro è zero, il `GetRecordCount`conteggio dei record restituito da , se non -1, è solo un conteggio "high water mark" dei record.

## <a name="crecordsetgetsql"></a><a name="getsql"></a>CRecordset::GetSQL

Chiamare questa funzione membro per ottenere l'istruzione SQL utilizzata per selezionare i record del recordset quando è stato aperto.

```
const CString& GetSQL() const;
```

### <a name="return-value"></a>Valore restituito

Un riferimento **const** a un `CString` che contiene l'istruzione SQL.

### <a name="remarks"></a>Osservazioni

Si tratta in genere di un'istruzione SQL **SELECT.** La stringa restituita da `GetSQL` è di sola lettura.

La stringa restituita da `GetSQL` è in genere diversa da qualsiasi stringa passata al recordset nel parametro *lpszSQL* alla funzione `Open` membro. Questo avviene perché il recordset costruisce un'istruzione `Open`SQL completa basata su ciò che è `m_strFilter` `m_strSort` stato passato a , ciò che è stato specificato con ClassWizard, ciò che è stato specificato nei membri dati e e su tutti i parametri specificati. Per informazioni dettagliate sul modo in cui il recordset crea questa istruzione SQL, vedere l'articolo [Recordset: come recordset selezionano i record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md).

> [!NOTE]
> Chiamare questa funzione membro solo dopo aver chiamato [Open](#open).

## <a name="crecordsetgettablename"></a><a name="gettablename"></a>CRecordset::GetTableName

Ottiene il nome della tabella SQL su cui si basa la query del recordset.

```
const CString& GetTableName() const;
```

### <a name="return-value"></a>Valore restituito

Un riferimento **const** a un `CString` che contiene il nome della tabella, se il recordset è basato su una tabella; in caso contrario, una stringa vuota.

### <a name="remarks"></a>Osservazioni

`GetTableName`è valido solo se il recordset è basato su una tabella, non su un join di più tabelle o su una query predefinita (stored procedure). Il nome è di sola lettura.

> [!NOTE]
> Chiamare questa funzione membro solo dopo aver chiamato [Open](#open).

## <a name="crecordsetisbof"></a><a name="isbof"></a>CRecordset::IsBOF

Restituisce un valore diverso da zero se il recordset è stato posizionato prima del primo record. Non è presente nessun record corrente.

```
BOOL IsBOF() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset non contiene record o se è stato eseguito lo scorrimento all'indietro prima del primo record; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro prima di scorrere da un record all'altro per sapere se si è passati prima del primo record del recordset. È inoltre `IsBOF` possibile `IsEOF` utilizzare insieme per determinare se il recordset contiene record o è vuoto. Immediatamente dopo `Open`aver chiamato , se `IsBOF` il recordset non contiene record, restituisce un valore diverso da zero. Quando si apre un recordset che dispone di almeno un `IsBOF` record, il primo record è il record corrente e restituisce 0.

Se il primo record è il `MovePrev` `IsBOF` record corrente e si chiama , verrà successivamente restituito diverso da zero. Se `IsBOF` restituisce un `MovePrev`valore diverso da zero e si chiama , si verifica un errore. Se `IsBOF` restituisce un valore diverso da zero, il record corrente non è definito e qualsiasi azione che richiede un record corrente genererà un errore.

### <a name="example"></a>Esempio

In questo `IsBOF` `IsEOF` esempio viene utilizzato e rilevato i limiti di un recordset mentre il codice scorre il recordset in entrambe le direzioni.

[!code-cpp[NVC_MFCDatabase#25](../../mfc/codesnippet/cpp/crecordset-class_9.cpp)]

## <a name="crecordsetisdeleted"></a><a name="isdeleted"></a>CRecordset::IsDeleted

Determina se il record corrente è stato eliminato.

```
BOOL IsDeleted() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset è posizionato su un record eliminato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se si scorre su `IsDeleted` un record e restituisce TRUE (diverso da zero), è necessario eseguire lo scorrimento su un altro record prima di poter eseguire qualsiasi altra operazione del recordset.

Il risultato dipende `IsDeleted` da molti fattori, ad esempio il tipo di recordset, `CRecordset::skipDeletedRecords` se il recordset è aggiornabile, se è stata specificata l'opzione all'apertura del recordset, se il driver imbavaglia i record eliminati e se sono presenti più utenti.

Per ulteriori `CRecordset::skipDeletedRecords` informazioni sulla compressione dei driver e sul driver, vedere la funzione membro [Open.For](#open) more information about and driver packing, see the Open member function.

> [!NOTE]
> Se è stato implementato il recupero di `IsDeleted`massa di righe, non è necessario chiamare . Chiamare invece il [GetRowStatus](#getrowstatus) funzione membro. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="crecordsetiseof"></a><a name="iseof"></a>CRecordset::IsEOF

Restituisce un valore diverso da zero se il recordset è stato posizionato dopo l'ultimo record. Non è presente nessun record corrente.

```
BOOL IsEOF() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset non contiene record o se è stato eseguito lo scorrimento oltre l'ultimo record; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro mentre si scorre da un record all'altro per scoprire se si è andati oltre l'ultimo record del recordset. È inoltre `IsEOF` possibile utilizzare per determinare se il recordset contiene record o è vuoto. Immediatamente dopo `Open`aver chiamato , se `IsEOF` il recordset non contiene record, restituisce un valore diverso da zero. Quando si apre un recordset che dispone di almeno un `IsEOF` record, il primo record è il record corrente e restituisce 0.

Se l'ultimo record è il `MoveNext` `IsEOF` record corrente quando si chiama , verrà successivamente restituito diverso da zero. Se `IsEOF` restituisce un `MoveNext`valore diverso da zero e si chiama , si verifica un errore. Se `IsEOF` restituisce un valore diverso da zero, il record corrente non è definito e qualsiasi azione che richiede un record corrente genererà un errore.

### <a name="example"></a>Esempio

Vedere l'esempio per [IsBOF](#isbof).

## <a name="crecordsetisfielddirty"></a><a name="isfielddirty"></a>CRecordset::IsFieldDirty

Determina se il membro dati di campo specificato è stato modificato dopo la chiamata a [Edit](#edit) o [AddNew.](#addnew)

```
BOOL IsFieldDirty(void* pv);
```

### <a name="parameters"></a>Parametri

*Pv*<br/>
Puntatore al membro dati di campo di cui si desidera controllare lo stato oppure NULL per determinare se uno dei campi è dirty.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il membro `AddNew` dati `Edit`di campo specificato è stato modificato dopo la chiamata o ; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

I dati in tutti i membri dati di campo dirty verranno trasferiti al record nell'origine dati quando il `Edit` `AddNew`record corrente viene aggiornato da una chiamata alla funzione membro [Update](#update) di `CRecordset` (dopo una chiamata a o ).

> [!NOTE]
> Questa funzione membro non è applicabile nei recordset che utilizzano il recupero di massa di righe. Se è stato implementato il `IsFieldDirty` recupero di massa di righe, quindi restituirà sempre FALSE e genererà un'asserzione non riuscita. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

La `IsFieldDirty` chiamata reimposterà gli effetti delle chiamate precedenti a [SetFieldDirty](#setfielddirty) poiché lo stato dirty del campo viene rivalutato. Nel `AddNew` caso, se il valore del campo corrente è diverso dal valore pseudo null, lo stato del campo viene impostato su dirty. Nel `Edit` caso, se il valore del campo è diverso dal valore memorizzato nella cache, lo stato del campo viene impostato come dirty.

`IsFieldDirty`viene implementato tramite [DoFieldExchange](#dofieldexchange).

Per ulteriori informazioni sul flag dirty, vedere l'articolo [Recordset: come recordset selezionano i record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md).

## <a name="crecordsetisfieldnull"></a><a name="isfieldnull"></a>CRecordset::IsFieldNull

Restituisce diverso da zero se il campo specificato nel record corrente è Null (non ha alcun valore).

```
BOOL IsFieldNull(void* pv);
```

### <a name="parameters"></a>Parametri

*Pv*<br/>
Puntatore al membro dati di campo di cui si desidera controllare lo stato oppure NULL per determinare se uno dei campi è Null.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il membro dati di campo specificato è contrassegnato come Null; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro per determinare se il membro dati di campo specificato di un recordset è stato contrassegnato come Null. (Nella terminologia del database, Null significa "non avere alcun valore" e non è uguale a NULL in C . Se un membro dati di campo è contrassegnato come Null, viene interpretato come una colonna del record corrente per cui non è presente alcun valore.

> [!NOTE]
> Questa funzione membro non è applicabile nei recordset che utilizzano il recupero di massa di righe. Se è stato implementato il `IsFieldNull` recupero di massa di righe, quindi restituirà sempre FALSE e genererà un'asserzione non riuscita. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

`IsFieldNull`viene implementato tramite [DoFieldExchange](#dofieldexchange).

## <a name="crecordsetisfieldnullable"></a><a name="isfieldnullable"></a>CRecordset::IsFieldNullable

Restituisce diverso da zero se il campo specificato nel record corrente può essere impostato su Null (senza alcun valore).

```
BOOL IsFieldNullable(void* pv);
```

### <a name="parameters"></a>Parametri

*Pv*<br/>
Puntatore al membro dati di campo di cui si desidera controllare lo stato oppure NULL per determinare se uno dei campi può essere impostato su un valore Null.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro per determinare se il membro dati di campo specificato è "nullable" (può essere impostato su un Null valore; NULL c'è valore non è uguale a Null, che, nella terminologia del database, significa "non avere alcun valore").

> [!NOTE]
> Se è stato implementato il recupero `IsFieldNullable`di massa di righe, non è possibile chiamare . Chiamare invece il [GetODBCFieldInfo](#getodbcfieldinfo) funzione membro per determinare se un campo può essere impostato su un Null valore. Si noti che `GetODBCFieldInfo`è sempre possibile chiamare , indipendentemente dal fatto che sia stato implementato il recupero di massa di righe. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Un campo che non può essere Null deve avere un valore. Se si tenta di impostare un campo di questo tipo su Null durante l'aggiunta o l'aggiornamento di un record, l'origine dati rifiuta l'aggiunta o l'aggiornamento e [Update](#update) genererà un'eccezione. L'eccezione si `Update`verifica quando si chiama , non quando si chiama [SetFieldNull](#setfieldnull).

L'utilizzo di NULL per il primo argomento `outputColumn` della `param` funzione applicherà la funzione solo ai campi, non ai campi. Ad esempio, la chiamata

[!code-cpp[NVC_MFCDatabase#26](../../mfc/codesnippet/cpp/crecordset-class_10.cpp)]

imposterà `outputColumn` solo i campi su NULL; `param` campi non saranno interessati.

Per lavorare `param` sui campi, è necessario fornire `param` l'indirizzo effettivo della persona su cui si desidera lavorare, ad esempio:

[!code-cpp[NVC_MFCDatabase#27](../../mfc/codesnippet/cpp/crecordset-class_11.cpp)]

Ciò significa che `param` non è possibile impostare tutti i campi su NULL, come è possibile con `outputColumn` i campi.

`IsFieldNullable`viene implementato tramite [DoFieldExchange](#dofieldexchange).

## <a name="crecordsetisopen"></a><a name="isopen"></a>CRecordset::IsOpen

Determina se il recordset è già aperto.

```
BOOL IsOpen() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione membro [Open](#open) o [Requery](#requery) dell'oggetto recordset è stata chiamata in precedenza e il recordset non è stato chiuso; in caso contrario 0.

## <a name="crecordsetm_hstmt"></a><a name="m_hstmt"></a>CRecordset::m_hstmt

Contiene un handle per la struttura di dati dell'istruzione ODBC, di tipo HSTMT, associata al recordset.

### <a name="remarks"></a>Osservazioni

Ogni query a un'origine dati ODBC è associata a un HSTMT.

> [!CAUTION]
> Non utilizzare `m_hstmt` prima che [Open](#open) sia stato chiamato.

In genere non è necessario accedere direttamente a HSTMT, ma potrebbe essere necessario per l'esecuzione diretta delle istruzioni SQL. La `ExecuteSQL` funzione membro `CDatabase` della classe `m_hstmt`fornisce un esempio di utilizzo di .

## <a name="crecordsetm_nfields"></a><a name="m_nfields"></a>CRecordset::m_nFields

Contiene il numero di membri dati di campo nella classe recordset; ovvero il numero di colonne selezionate dal recordset dall'origine dati.

### <a name="remarks"></a>Osservazioni

Il costruttore per la `m_nFields` classe recordset deve essere inizializzato con il numero corretto. Se non è stato implementato il recupero di massa di righe, ClassWizard scrive automaticamente questa inizializzazione quando viene utilizzata per dichiarare la classe del recordset. È anche possibile scriverlo manualmente.

Il framework utilizza questo numero per gestire l'interazione tra i membri dati di campo e le colonne corrispondenti del record corrente nell'origine dati.

> [!CAUTION]
> Questo numero deve corrispondere al numero di `DoFieldExchange` "colonne di output" registrate in o `DoBulkFieldExchange` dopo una chiamata a [SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype) con il parametro `CFieldExchange::outputColumn`.

È possibile associare le colonne in modo dinamico, come illustrato nell'articolo "Recordset: associazione dinamica di colonne di dati". In questo caso, è necessario `m_nFields` aumentare il conteggio in per riflettere il `DoFieldExchange` numero `DoBulkFieldExchange` di chiamate di funzione RFX o RFX bulk nella funzione membro o per le colonne associate in modo dinamico.

Per ulteriori informazioni, vedere gli articoli [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md) e Recordset: recupero di [massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

Vedere l'articolo Scambio di campi di [record: utilizzo di RFX](../../data/odbc/record-field-exchange-using-rfx.md).

## <a name="crecordsetm_nparams"></a><a name="m_nparams"></a>CRecordset::m_nParams

Contiene il numero di membri dati di parametro nella classe recordset; ovvero il numero di parametri passati con la query del recordset.

### <a name="remarks"></a>Osservazioni

Se la classe recordset dispone di membri dati di `m_nParams` parametro, il costruttore per la classe deve essere inizializzato con il numero corretto. Il valore `m_nParams` predefinito è 0. Se si aggiungono membri dati di parametro (operazione che è necessario eseguire manualmente), è necessario aggiungere manualmente un'inizializzazione nel costruttore della `m_strFilter` `m_strSort` classe per riflettere il numero di parametri (che deve essere grande almeno quanto il numero di segnaposto '' nella stringa o).

Il framework utilizza questo numero quando parametrizza la query del recordset.

> [!CAUTION]
> Questo numero deve corrispondere al numero di `DoFieldExchange` "params" registrati `DoBulkFieldExchange` in o dopo una `CFieldExchange::outputParam`chiamata `CFieldExchange::inoutParam`a [SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype) con un valore di parametro di `CFieldExchange::inputParam`, `CFieldExchange::param`, o .

### <a name="example"></a>Esempio

  Vedere gli articoli [Recordset: parametrizzazione di un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) e Scambio di [campi di record: utilizzo di RFX](../../data/odbc/record-field-exchange-using-rfx.md).

## <a name="crecordsetm_pdatabase"></a><a name="m_pdatabase"></a>CRecordset::m_pDatabase

Contiene un puntatore all'oggetto tramite il `CDatabase` quale il recordset è connesso a un'origine dati.

### <a name="remarks"></a>Osservazioni

Questa variabile viene impostata in due modi. In genere, si passa un `CDatabase` puntatore a un oggetto già connesso quando si costruisce l'oggetto recordset. Se invece si `CRecordset` passa `CDatabase` NULL, crea automaticamente un oggetto e lo connette. In entrambi `CRecordset` i casi, archivia il puntatore in questa variabile.

In genere non è necessario utilizzare `m_pDatabase`direttamente il puntatore memorizzato in . Se si scrivono `CRecordset`estensioni personalizzate in , tuttavia, potrebbe essere necessario utilizzare il puntatore. Ad esempio, potrebbe essere necessario il `CDBException`puntatore se si genera il proprio s. In alternativa, potrebbe essere necessario se è `CDatabase` necessario eseguire un'operazione utilizzando lo stesso `ExecuteSQL` oggetto, ad `CDatabase` esempio l'esecuzione di transazioni, l'impostazione di timeout o la chiamata della funzione membro della classe per eseguire direttamente le istruzioni SQL.

## <a name="crecordsetm_strfilter"></a><a name="m_strfilter"></a>CRecordset::m_strFilter

Dopo aver creato l'oggetto recordset, `Open` ma prima di chiamare la `CString` relativa funzione membro, utilizzare questo membro dati per archiviare un contenente una clausola **SQL WHERE.**

### <a name="remarks"></a>Osservazioni

Il recordset utilizza questa stringa per vincolare (o filtrare) i record selezionati durante la `Open` chiamata o `Requery` . Ciò è utile per la selezione di un sottoinsieme di record, ad esempio "tutti i venditori con sede in California" ("stato : CA"). La sintassi SQL ODBC per una clausola **WHERE** è

`WHERE search-condition`

Si noti che non si include la parola chiave **WHERE** nella stringa. Il framework lo fornisce.

È inoltre possibile parametrizzare la stringa di filtro inserendovi segnaposto '', dichiarando un membro dati di parametro nella classe per ogni segnaposto e passando parametri al recordset in fase di esecuzione. In questo modo è possibile costruire il filtro in fase di esecuzione. Per ulteriori informazioni, vedere l'articolo Recordset: applicazione di parametri a [un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

Per ulteriori informazioni sulle clausole SQL **WHERE,** vedere l'articolo [SQL](../../data/odbc/sql.md). Per ulteriori informazioni sulla selezione e il filtro dei record, vedere l'articolo [Recordset: filtro dei record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#30](../../mfc/codesnippet/cpp/crecordset-class_12.cpp)]

## <a name="crecordsetm_strsort"></a><a name="m_strsort"></a>CRecordset::m_strSort

Dopo aver creato l'oggetto recordset, `Open` ma prima di chiamare la `CString` relativa funzione membro, utilizzare questo membro dati per archiviare un contenente una clausola SQL **ORDER BY.**

### <a name="remarks"></a>Osservazioni

Il recordset utilizza questa stringa per ordinare `Open` i `Requery` record selezionati durante la chiamata o . È possibile utilizzare questa funzionalità per ordinare un recordset in base a una o più colonne. La sintassi SQL ODBC per una clausola **ORDER BY** è

`ORDER BY sort-specification [, sort-specification]...`

dove una specifica di ordinamento è un numero intero o un nome di colonna. È inoltre possibile specificare l'ordine crescente o decrescente (l'ordine è crescente per impostazione predefinita) aggiungendo "ASC" o "DESC" all'elenco di colonne nella stringa di ordinamento. I record selezionati vengono ordinati prima in base alla prima colonna elencata, quindi in base alla seconda e così via. Ad esempio, è possibile ordinare un recordset "Clienti" in base al cognome, quindi al nome. Il numero di colonne che è possibile elencare dipende dall'origine dati. Per ulteriori informazioni, vedere Windows SDK.

Si noti che non si include la parola chiave **ORDER BY** nella stringa. Il framework lo fornisce.

Per ulteriori informazioni sulle clausole SQL, vedere l'articolo [SQL](../../data/odbc/sql.md). Per ulteriori informazioni sull'ordinamento dei record, vedere l'articolo [Recordset: ordinamento dei record (ODBC)](../../data/odbc/recordset-sorting-records-odbc.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#31](../../mfc/codesnippet/cpp/crecordset-class_13.cpp)]

## <a name="crecordsetmove"></a><a name="move"></a>CRecordset::Sposta

Sposta il puntatore del record corrente all'interno del recordset, in avanti o all'indietro.

```
virtual void Move(
    long nRows,
    WORD wFetchType = SQL_FETCH_RELATIVE);
```

### <a name="parameters"></a>Parametri

*nRows*<br/>
Numero di righe da spostare in avanti o indietro. I valori positivi si spostano in avanti verso la fine del recordset. I valori negativi si spostano all'indietro, verso l'inizio.

*Wfetchtype*<br/>
Determina il `Move` set di righe che verrà recuperato. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Osservazioni

Se si passa il valore 0 `Move` per *nRows*, aggiorna il record corrente; `Move` terminerà qualsiasi `AddNew` `Edit` corrente o modalità e ripristinerà il valore del record corrente prima `AddNew` o `Edit` è stato chiamato.

> [!NOTE]
> Quando ci si sposta all'incirca in un recordset, non è possibile ignorare i record eliminati. Vedere [CRecordset::IsDeleted](#isdeleted) per ulteriori informazioni. Quando si `CRecordset` apre `skipDeletedRecords` un con `Move` il set di opzioni, asserisce se il parametro *nRows* è 0. Questo comportamento impedisce l'aggiornamento delle righe eliminate da altre applicazioni client che utilizzano gli stessi dati. Vedere il parametro *dwOption* in `skipDeletedRecords` [Open](#open) per una descrizione di .

`Move`riposiziona il recordset in base ai set di righe. In base ai valori di *nRows* e *wFetchType*, `Move` recupera il set di righe appropriato e quindi rende il primo record in tale set di righe il record corrente. Se non è stato implementato il recupero di massa di righe, la dimensione del set di righe è sempre 1.If you have not implemented bulk row fetching, then the rowset size is always 1. Quando si recupera `Move` un set di righe, chiama direttamente il [CheckRowsetError](#checkrowseterror) funzione membro per gestire eventuali errori risultanti dal recupero.

A seconda dei valori `Move` passati, `CRecordset` è equivalente ad altre funzioni membro. In particolare, il valore di *wFetchType* può indicare una funzione membro più intuitiva e spesso il metodo preferito per spostare il record corrente.

Nella tabella riportata di seguito sono elencati `Move` i valori possibili per *wFetchType*, il rowset che verrà recuperato in base a *wFetchType* e *nRows*e qualsiasi funzione membro equivalente corrispondente a *wFetchType*.

|Wfetchtype|Set di righe recuperato|Funzione membro equivalente|
|----------------|--------------------|--------------------------------|
|SQL_FETCH_RELATIVE (valore predefinito)|Il set di righe a partire *da nRows* righe dalla prima riga nel set di righe corrente.||
|SQL_FETCH_NEXT|Il set di righe successivo; *nRows* viene ignorato.|[MoveNext](#movenext)|
|SQL_FETCH_PRIOR|Il set di righe precedente; *nRows* viene ignorato.|[MovePrev](#moveprev)|
|SQL_FETCH_FIRST|Il primo set di righe del recordset; *nRows* viene ignorato.|[Movefirst](#movefirst)|
|SQL_FETCH_LAST|L'ultimo set di righe completo nel recordset; *nRows* viene ignorato.|[Movelast](#movelast)|
|SQL_FETCH_ABSOLUTE|Se *nRows* > 0, il set di righe a partire *da nRows* righe dall'inizio del recordset. Se *nRows* < 0, il set di righe a partire da *nRows* righe dalla fine del recordset. Se *nRows* è uguale a 0, viene restituita una condizione di inizio del file (BOF).|[SetAbsolutePosition (ImpostaAbsolutePosition)](#setabsoluteposition)|
|SQL_FETCH_BOOKMARK|Set di righe a partire dalla riga il cui valore di segnalibro corrisponde a *nRows*.|[SetBookmark](#setbookmark)|

> [!NOTE]
> Per i recordset forward-only, `Move` è valido solo con un valore di SQL_FETCH_NEXT per *wFetchType*.

> [!CAUTION]
> La `Move` chiamata genera un'eccezione se il recordset non contiene record. Per determinare se il recordset contiene record, chiamare [IsBOF](#isbof) e [IsEOF](#iseof).

> [!NOTE]
> Se è stato eseguito lo scorrimento oltre`IsBOF` `IsEOF` l'inizio o `Move` la fine del `CDBException`recordset ( o restituisce un valore diverso da zero), la chiamata a una funzione genererà un valore . Ad esempio, `IsEOF` se restituisce diverso da zero e `IsBOF` non lo fa, `MoveNext` verrà generata un'eccezione, ma `MovePrev` non.

> [!NOTE]
> Se si `Move` chiama mentre il record corrente viene aggiornato o aggiunto, gli aggiornamenti vengono persi senza alcun avviso.

Per ulteriori informazioni sullo spostamento tra recordset, vedere gli articoli [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). Per informazioni correlate, vedere `SQLExtendedFetch` la funzione API ODBC in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#28](../../mfc/codesnippet/cpp/crecordset-class_14.cpp)]

## <a name="crecordsetmovefirst"></a><a name="movefirst"></a>CRecordset::MoveFirst

Rende il primo record nel primo set di righe il record corrente.

```
void MoveFirst();
```

### <a name="remarks"></a>Osservazioni

Indipendentemente dal fatto che il recupero di massa di righe sia stato implementato, questo sarà sempre il primo record nel recordset.

Non è necessario `MoveFirst` chiamare immediatamente dopo l'apertura del recordset. A quel punto, il primo record (se presente) è automaticamente il record corrente.

> [!NOTE]
> Questa funzione membro non è valida per i recordset forward-only.

> [!NOTE]
> Quando ci si sposta all'incirca in un recordset, non è possibile ignorare i record eliminati. Vedere la funzione membro [IsDeleted](#isdeleted) per i dettagli.

> [!CAUTION]
> La chiamata `Move` a una delle funzioni genera un'eccezione se il recordset non contiene record. Per determinare se il recordset `IsBOF` contiene `IsEOF`record, chiamare e .

> [!NOTE]
> Se si chiama `Move` una delle funzioni durante l'aggiornamento o l'aggiunta del record corrente, gli aggiornamenti andranno persi senza alcun avviso.

Per ulteriori informazioni sullo spostamento tra recordset, vedere gli articoli [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsBOF](#isbof).

## <a name="crecordsetmovelast"></a><a name="movelast"></a>CRecordset::MoveLast

Rende il primo record nell'ultimo set di righe completo è il record corrente.

```
void MoveLast();
```

### <a name="remarks"></a>Osservazioni

Se non è stato implementato il recupero di massa di `MoveLast` righe, il recordset ha una dimensione del set di righe pari a 1, pertanto si sposta semplicemente sull'ultimo record del recordset.

> [!NOTE]
> Questa funzione membro non è valida per i recordset forward-only.

> [!NOTE]
> Quando ci si sposta all'incirca in un recordset, non è possibile ignorare i record eliminati. Vedere la funzione membro [IsDeleted](#isdeleted) per i dettagli.

> [!CAUTION]
> La chiamata `Move` a una delle funzioni genera un'eccezione se il recordset non contiene record. Per determinare se il recordset `IsBOF` contiene `IsEOF`record, chiamare e .

> [!NOTE]
> Se si chiama `Move` una delle funzioni durante l'aggiornamento o l'aggiunta del record corrente, gli aggiornamenti andranno persi senza alcun avviso.

Per ulteriori informazioni sullo spostamento tra recordset, vedere gli articoli [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsBOF](#isbof).

## <a name="crecordsetmovenext"></a><a name="movenext"></a>CRecordset::MoveNext

Rende il primo record nel set di righe successivo il record corrente.

```
void MoveNext();
```

### <a name="remarks"></a>Osservazioni

Se non è stato implementato il recupero di massa di `MoveNext` righe, il recordset ha una dimensione del set di righe pari a 1, pertanto si sposta semplicemente sul record successivo.

> [!NOTE]
> Quando ci si sposta all'incirca in un recordset, non è possibile ignorare i record eliminati. Vedere la funzione membro [IsDeleted](#isdeleted) per i dettagli.

> [!CAUTION]
> La chiamata `Move` a una delle funzioni genera un'eccezione se il recordset non contiene record. Per determinare se il recordset `IsBOF` contiene `IsEOF`record, chiamare e .

> [!NOTE]
> Si consiglia inoltre di `IsEOF` chiamare `MoveNext`prima di chiamare . Ad esempio, se è stato eseguito lo `IsEOF` scorrimento oltre la fine del recordset, verrà restituito un valore diverso da zero; una chiamata `MoveNext` successiva a genererebbe un'eccezione.

> [!NOTE]
> Se si chiama `Move` una delle funzioni durante l'aggiornamento o l'aggiunta del record corrente, gli aggiornamenti andranno persi senza alcun avviso.

Per ulteriori informazioni sullo spostamento tra recordset, vedere gli articoli [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsBOF](#isbof).

## <a name="crecordsetmoveprev"></a><a name="moveprev"></a>CRecordset::MovePrev

Rende il primo record nel set di righe precedente il record corrente.

```
void MovePrev();
```

### <a name="remarks"></a>Osservazioni

Se non è stato implementato il recupero di massa di `MovePrev` righe, il recordset ha una dimensione del set di righe pari a 1, pertanto si sposta semplicemente sul record precedente.

> [!NOTE]
> Questa funzione membro non è valida per i recordset forward-only.

> [!NOTE]
> Quando ci si sposta all'incirca in un recordset, non è possibile ignorare i record eliminati. Vedere la funzione membro [IsDeleted](#isdeleted) per i dettagli.

> [!CAUTION]
> La chiamata `Move` a una delle funzioni genera un'eccezione se il recordset non contiene record. Per determinare se il recordset `IsBOF` contiene `IsEOF`record, chiamare e .

> [!NOTE]
> Si consiglia inoltre di `IsBOF` chiamare `MovePrev`prima di chiamare . Ad esempio, se è stato eseguito lo `IsBOF` scorrimento prima dell'inizio del recordset, verrà restituito un valore diverso da zero; una chiamata `MovePrev` successiva a genererebbe un'eccezione.

> [!NOTE]
> Se si chiama `Move` una delle funzioni durante l'aggiornamento o l'aggiunta del record corrente, gli aggiornamenti andranno persi senza alcun avviso.

Per ulteriori informazioni sullo spostamento tra recordset, vedere gli articoli [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsBOF](#isbof).

## <a name="crecordsetonsetoptions"></a><a name="onsetoptions"></a>CRecordset::OnSetOptions

Chiamato per impostare le opzioni (utilizzate nella selezione) per l'istruzione ODBC specificata.

```
virtual void OnSetOptions(HSTMT hstmt);
```

### <a name="parameters"></a>Parametri

*hstmt*<br/>
HSTMT dell'istruzione ODBC le cui opzioni devono essere impostate.

### <a name="remarks"></a>Osservazioni

Chiamare `OnSetOptions` per impostare le opzioni (utilizzate sulla selezione) per l'istruzione ODBC specificata. Il framework chiama questa funzione membro per impostare le opzioni iniziali per il recordset. `OnSetOptions`determina il supporto dell'origine dati per i cursori scorrevoli e per la concorrenza del cursore e imposta di conseguenza le opzioni del recordset. (Mentre `OnSetOptions` viene utilizzato per `OnSetUpdateOptions` le operazioni di selezione, viene utilizzato per le operazioni di aggiornamento.)

Eseguire `OnSetOptions` l'override per impostare le opzioni specifiche per il driver o l'origine dati. Ad esempio, se l'origine dati supporta l'apertura per l'accesso esclusivo, è possibile eseguire l'override `OnSetOptions` per sfruttare tale funzionalità.

Per ulteriori informazioni sui cursori, vedere l'articolo [ODBC](../../data/odbc/odbc-basics.md).

## <a name="crecordsetonsetupdateoptions"></a><a name="onsetupdateoptions"></a>CRecordset::OnSetUpdateOptions

Chiamato per impostare le opzioni (utilizzate durante l'aggiornamento) per l'istruzione ODBC specificata.

```
virtual void OnSetUpdateOptions(HSTMT hstmt);
```

### <a name="parameters"></a>Parametri

*hstmt*<br/>
HSTMT dell'istruzione ODBC le cui opzioni devono essere impostate.

### <a name="remarks"></a>Osservazioni

Chiamare `OnSetUpdateOptions` per impostare le opzioni (utilizzate durante l'aggiornamento) per l'istruzione ODBC specificata. Il framework chiama questa funzione membro dopo aver creato un HSTMT per aggiornare i record in un recordset. (Mentre `OnSetOptions` viene utilizzato per `OnSetUpdateOptions` le operazioni di selezione, viene utilizzato per le operazioni di aggiornamento.) `OnSetUpdateOptions` determina il supporto dell'origine dati per i cursori scorrevoli e per la concorrenza del cursore e imposta di conseguenza le opzioni del recordset.

Eseguire `OnSetUpdateOptions` l'override per impostare le opzioni di un'istruzione ODBC prima che tale istruzione venga utilizzata per accedere a un database.

Per ulteriori informazioni sui cursori, vedere l'articolo [ODBC](../../data/odbc/odbc-basics.md).

## <a name="crecordsetopen"></a><a name="open"></a>CRecordset::Open

Apre il recordset recuperando la tabella o eseguendo la query rappresentata dal recordset.

```
virtual BOOL Open(
    UINT nOpenType = AFX_DB_USE_DEFAULT_TYPE,
    LPCTSTR lpszSQL = NULL,
    DWORD dwOptions = none);
```

### <a name="parameters"></a>Parametri

*nApriTipo*<br/>
Accettare il valore predefinito, AFX_DB_USE_DEFAULT_TYPE o utilizzare uno `enum OpenType`dei seguenti valori tra:

- `CRecordset::dynaset`Un recordset con scorrimento bidirezionale. L'appartenenza e l'ordine dei record vengono determinati quando il recordset è aperto, ma le modifiche apportate da altri utenti ai valori dei dati sono visibili dopo un'operazione di recupero. I dynaset sono noti anche come recordset basati su keyset.

- `CRecordset::snapshot`Recordset statico con scorrimento bidirezionale. L'appartenenza e l'ordine dei record vengono determinati quando il recordset è aperto; i valori dei dati vengono determinati quando vengono recuperati i record. Le modifiche apportate da altri utenti non sono visibili finché il recordset non viene chiuso e riaperto.

- `CRecordset::dynamic`Un recordset con scorrimento bidirezionale. Le modifiche apportate da altri utenti all'appartenenza, all'ordine e ai valori dei dati sono visibili dopo un'operazione di recupero. Si noti che molti driver ODBC non supportano questo tipo di recordset.

- `CRecordset::forwardOnly`Recordset di sola lettura con solo scorrimento in avanti.

   Per `CRecordset`, il `CRecordset::snapshot`valore predefinito è . Il meccanismo di valore predefinito consente l'interazione tra le procedure guidate di Visual C++ e `CRecordset` di ODBC e `CDaoRecordset` di DAO le cui impostazione predefinite sono diverse.

Per ulteriori informazioni su questi tipi di recordset, vedere l'articolo [Recordset (ODBC)](../../data/odbc/recordset-odbc.md). Per informazioni correlate, vedere l'articolo "Utilizzo dei cursori bloccati e scorrevoli" in Windows SDK.

> [!CAUTION]
> Se il tipo richiesto non è supportato, tramite il framework viene generata un'eccezione.

*lpszSQL (informazioni in lingua inglese)*<br/>
Puntatore di stringa contenente uno degli elementi seguenti:

- Puntatore NULL.

- Nome di una tabella.

- Un'istruzione SQL **SELECT** (facoltativamente con una clausola SQL **WHERE** o **ORDER BY).**

- Un'istruzione **CALL** che specifica il nome di una query predefinita (stored procedure). Prestare attenzione a non inserire spazi vuoti tra la parentesi graffa e la parola chiave **CALL.**

Per ulteriori informazioni su questa stringa, vedere la tabella e la discussione sul ruolo di ClassWizard nella sezione [Osservazioni.](#remarks)

> [!NOTE]
> L'ordine delle colonne nel set di risultati deve corrispondere all'ordine delle chiamate di funzione RFX o RFX bulk nell'override della funzione [DoFieldExchange](#dofieldexchange) o [DoBulkFieldExchange.](#dobulkfieldexchange)

*DwOpzioni (informazioni in base alle opzioni utente)*<br/>
Maschera di bit tramite cui è possibile specificare una combinazione dei valori elencati di seguito. Alcuni di questi si escludono a vicenda. Il valore predefinito è **none**.

- `CRecordset::none`Nessuna opzione impostata. Il valore di questo parametro e tutti gli altri valori si escludono a vicenda. Per impostazione predefinita, il recordset può essere aggiornato con [Edit](#edit) o [Delete](#delete) e consente l'aggiunta di nuovi record con [AddNew](#addnew). L'impostazione dei dati dipende dall'origine dati e dall'opzione *nOpenType* specificata. L'ottimizzazione per le aggiunte di massa non è disponibile. Il recupero di righe di massa non verrà implementato. I record eliminati non verranno ignorati durante la navigazione del recordset. I segnalibri non sono disponibili. Il controllo automatico dei campi modificati automatico è implementato.

- `CRecordset::appendOnly`Non consentire `Edit` `Delete` o sul recordset. Consente solo `AddNew`. Questa opzione e `CRecordset::readOnly` si escludono a vicenda.

- `CRecordset::readOnly`Aprire il recordset in sola lettura. Questa opzione e `CRecordset::appendOnly` si escludono a vicenda.

- `CRecordset::optimizeBulkAdd`Utilizzare un'istruzione SQL preparata per ottimizzare l'aggiunta di più record contemporaneamente. Si applica solo se non si `SQLSetPos` utilizza la funzione API ODBC per aggiornare il recordset. Tramite il primo aggiornamento viene determinato quali campi vengono contrassegnati come modificati. Questa opzione e `CRecordset::useMultiRowFetch` si escludono a vicenda.

- `CRecordset::useMultiRowFetch`Implementare il recupero di massa di righe per consentire il recupero di più righe in una singola operazione di recupero. Si tratta di una funzionalità avanzata progettata per migliorare le prestazioni; tuttavia il trasferimento di campi di record di massa non è supportato da ClassWizard. Questa opzione e `CRecordset::optimizeBulkAdd` si escludono a vicenda. Si noti `CRecordset::useMultiRowFetch`che se `CRecordset::noDirtyFieldCheck` si specifica , l'opzione verrà attivata automaticamente (il doppio buffer non sarà disponibile); nei recordset forward-only, `CRecordset::useExtendedFetch` l'opzione verrà attivata automaticamente. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

- `CRecordset::skipDeletedRecords`Ignora tutti i record eliminati durante lo spostamento all'interno del recordset. Ciò comporterà il rallentamento delle prestazioni in alcuni recuperi relativi. Questa opzione non è valida per i recordset forward-only. Se si chiama [Move](#move) con il parametro `CRecordset::skipDeletedRecords` *nRows* impostato su 0 e l'opzione impostata verrà `Move` asserita. Si `CRecordset::skipDeletedRecords` noti che è simile alla *compressione del driver*, il che significa che le righe eliminate vengono rimosse dal recordset. Tuttavia, se i record vengono compressi dal driver, saranno ignorati solo quelli eliminati dall'utente in questione e non da altri durante l'apertura del recordset. `CRecordset::skipDeletedRecords`verranno ignorate le righe eliminate da altri utenti.

- `CRecordset::useBookmarks`Può utilizzare segnalibri sul recordset, se supportato. Con i segnalibri il recupero dei dati risulta rallentato, ma le prestazioni relative alla navigazione tra i dati migliorano. Non valido per i recordset forward-only. Per ulteriori informazioni, vedere l'articolo [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).

- `CRecordset::noDirtyFieldCheck`Disattivare il controllo automatico dei campi dirty (doppio buffer). Ciò consente di migliorare le prestazioni; tuttavia, è necessario contrassegnare manualmente i campi come modificati chiamando le funzioni membro `SetFieldDirty` e `SetFieldNull`. Si noti che il doppio buffer nella classe `CRecordset` è simile a quello nella classe `CDaoRecordset`. Tuttavia, in `CRecordset` non è possibile abilitare il doppio buffer nei singoli campi; infatti l'abilitazione viene eseguita o per tutti i campi o per nessuno. Si noti che `CRecordset::useMultiRowFetch`se `CRecordset::noDirtyFieldCheck` si specifica l'opzione , verrà attivata automaticamente; `SetFieldDirty` tuttavia, `SetFieldNull` e non può essere utilizzato nei recordset che implementano il recupero di massa di righe.

- `CRecordset::executeDirect`Non utilizzare un'istruzione SQL preparata. Per migliorare le prestazioni, `Requery` specificare questa opzione se la funzione membro non verrà mai chiamata.

- `CRecordset::useExtendedFetch`Implementare `SQLExtendedFetch` `SQLFetch`anziché . Questa condizione è progettata per implementare il recupero di righe di massa nei recordset forward-only. Se si specifica `CRecordset::useMultiRowFetch` l'opzione su un `CRecordset::useExtendedFetch` recordset forward-only, l'opzione verrà attivata automaticamente.

- `CRecordset::userAllocMultiRowBuffers`L'utente allocherà i buffer di archiviazione per i dati. Utilizzare questa opzione insieme a `CRecordset::useMultiRowFetch` se si desidera allocare manualmente l'archiviazione; in caso contrario questa operazione sarà eseguita automaticamente dal framework. Per ulteriori informazioni, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). Si noti `CRecordset::userAllocMultiRowBuffers` che `CRecordset::useMultiRowFetch` se si specifica senza specificare verrà eseguito un'asserzione non riuscita.

### <a name="return-value"></a>Valore restituito

Diverso da `CRecordset` zero se l'oggetto è stato aperto correttamente; in caso contrario 0 se CDatabase::Open (se chiamato) restituisce 0.Otherwise 0 if [CDatabase::Open](../../mfc/reference/cdatabase-class.md#open) (if called) returns 0.

### <a name="remarks"></a>Osservazioni

È necessario chiamare questa funzione membro per eseguire la query definita dal recordset. Prima `Open`di chiamare , è necessario costruire l'oggetto recordset.

La connessione del recordset all'origine dati dipende dal `Open`modo in cui si costruisce il recordset prima di chiamare . Se si passa un [CDatabase](../../mfc/reference/cdatabase-class.md) oggetto al costruttore del recordset che non è stato connesso all'origine dati, questa funzione membro utilizza [GetDefaultConnect](#getdefaultconnect) per tentare di aprire l'oggetto di database. Se si passa NULL al costruttore del `CDatabase` recordset, il `Open` costruttore crea automaticamente un oggetto e tenta di connettere l'oggetto di database. Per informazioni dettagliate sulla chiusura del recordset e della connessione in queste diverse circostanze, vedere [Chiudi](#close).

> [!NOTE]
> L'accesso a un'origine dati tramite un oggetto `CRecordset` è sempre condiviso. A differenza della classe `CDaoRecordset`, non è possibile utilizzare un oggetto `CRecordset` per aprire un'origine dati con accesso esclusivo.

Quando si `Open`chiama , una query, in genere un'istruzione SQL **SELECT,** seleziona i record in base ai criteri illustrati nella tabella seguente.

|Valore del parametro lpszSQL|I record selezionati sono determinati da|Esempio|
|------------------------------------|----------------------------------------|-------------|
|NULL|Stringa restituita da `GetDefaultSQL`.||
|Nome tabella SQL|Tutte le colonne dell'elenco tabelle in `DoFieldExchange` o `DoBulkFieldExchange`.|`"Customer"`|
|Nome predefinito della query (stored procedure)|Colonne che devono essere restituite dalla query.|`"{call OverDueAccts}"`|
|**SELECT** elenco di colonne **FROM** table-list|Colonne specificate delle tabelle specificate.|`"SELECT CustId, CustName FROM`<br /><br /> `Customer"`|

> [!CAUTION]
> Prestare attenzione a non inserire uno spazio vuoto aggiuntivo nella stringa SQL. Se, ad esempio, si inserisce uno spazio vuoto tra la parentesi graffa e la parola chiave **CALL,** MFC interpreterà erroneamente la stringa SQL come nome di tabella e la incorporerà in un'istruzione **SELECT,** generando un'eccezione. Analogamente, se la query predefinita utilizza un parametro di output, non inserire spazi vuoti tra la parentesi graffa e il simbolo ''. Infine, non è necessario inserire spazi vuoti prima della parentesi graffa in un'istruzione **CALL** o prima della parola chiave **SELECT** in un'istruzione **SELECT.**

La procedura consueta `Open`consiste nel passare NULL a ; in questo `Open` caso, chiama [GetDefaultSQL](#getdefaultsql). Se si utilizza `CRecordset` una `GetDefaultSQL` classe derivata, assegnare i nomi di tabella specificati in ClassWizard. Nel parametro `lpszSQL` è invece possibile specificare altre informazioni.

Qualunque cosa `Open` si passi, costruisce una stringa SQL finale per la query (la `lpszSQL` stringa può avere SQL **WHERE** e ORDER **BY** clausole aggiunte alla stringa passata) e quindi esegue la query. È possibile esaminare la stringa costruita chiamando [GetSQL](#getsql) dopo aver chiamato `Open`. Per ulteriori informazioni sul modo in cui il recordset crea un'istruzione SQL e seleziona i record, vedere l'articolo [Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md).

I membri dei dati di campo della classe recordset sono associati alle colonne dei dati selezionati. Se vengono restituiti record, il primo di essi diventa il record corrente.

Se si desidera impostare le opzioni per il recordset, ad esempio un filtro o `Open`un ordinamento, specificarle dopo aver creato l'oggetto recordset ma prima di chiamare . Se si desidera aggiornare i record nel recordset dopo che il recordset è già aperto, chiamare [Requery](#requery).

Per ulteriori informazioni, inclusi esempi aggiuntivi, vedere gli articoli [Recordset (ODBC)](../../data/odbc/recordset-odbc.md), Recordset: modalità di selezione [dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)e [Recordset: creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md).

### <a name="example"></a>Esempio

Negli esempi di codice seguenti `Open` vengono illustrate diverse forme della chiamata.

[!code-cpp[NVC_MFCDatabase#16](../../mfc/codesnippet/cpp/crecordset-class_15.cpp)]

## <a name="crecordsetrefreshrowset"></a><a name="refreshrowset"></a>CRecordset::RefreshRowset

Aggiorna i dati e lo stato di una riga nel set di righe corrente.

```
void RefreshRowset(
    WORD wRow,
    WORD wLockType = SQL_LOCK_NO_CHANGE);
```

### <a name="parameters"></a>Parametri

*WRow (file wRow)*<br/>
Posizione in base uno di una riga nel set di righe corrente. Questo valore può variare da zero alla dimensione del set di righe.

*WLockType (tipo di blocco)*<br/>
Valore che indica come bloccare la riga dopo che è stata aggiornata. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Osservazioni

Se si passa un valore pari a zero per *wRow*, ogni riga del set di righe verrà aggiornata.

Per `RefreshRowset`utilizzare , è necessario aver implementato il `CRecordset::useMulitRowFetch` recupero di massa di righe specificando l'opzione nella funzione membro [Open](#open) .

`RefreshRowset`chiama la funzione `SQLSetPos`API ODBC . Il parametro *wLockType* consente di specificare lo stato di blocco della riga dopo `SQLSetPos` l'esecuzione. Nella tabella seguente vengono descritti i valori possibili per *wLockType*.

|WLockType (tipo di blocco)|Descrizione|
|---------------|-----------------|
|SQL_LOCK_NO_CHANGE (valore predefinito)|Il driver o l'origine dati assicura che la riga si trova `RefreshRowset` nello stesso stato bloccato o sbloccato in precedenza.|
|SQL_LOCK_EXCLUSIVE|Il driver o l'origine dati blocca la riga in modo esclusivo. Non tutte le origini dati supportano questo tipo di blocco.|
|SQL_LOCK_UNLOCK|Il driver o l'origine dati sblocca la riga. Non tutte le origini dati supportano questo tipo di blocco.|

Per ulteriori `SQLSetPos`informazioni su , vedere Windows SDK. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="crecordsetrequery"></a><a name="requery"></a>CRecordset::Requery

Ricostruisce (aggiorna) un recordset.

```
virtual BOOL Requery();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset è stato ricompilato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se vengono restituiti record, il primo di essi diventa il record corrente.

Affinché il recordset rifletta le aggiunte e le eliminazioni che l'utente o altri `Requery`utenti effettuano all'origine dati, è necessario ricompilare il recordset chiamando . Se il recordset è un dynaset, riflette automaticamente gli aggiornamenti che l'utente o altri utenti apportano ai record esistenti (ma non alle aggiunte). Se il recordset è uno `Requery` snapshot, è necessario chiamare per riflettere le modifiche apportate da altri utenti, nonché le aggiunte e le eliminazioni.

Per un dynaset o uno `Requery` snapshot, chiamare ogni volta che si desidera ricompilare il recordset utilizzando un nuovo filtro o ordinamento oppure nuovi valori di parametro. Impostare la nuova proprietà filter o `m_strFilter` sort `m_strSort` assegnando nuovi valori a e prima della chiamata `Requery`a . Impostare nuovi parametri assegnando nuovi valori `Requery`ai membri dati di parametro prima di chiamare . Se le stringhe di filtro e ordinamento sono invariate, è possibile riutilizzare la query per migliorare le prestazioni.

Se il tentativo di ricompilare il recordset ha esito negativo, il recordset viene chiuso. Prima di `Requery`chiamare , è possibile determinare se è possibile `CanRestart` rieseguire la query del recordset chiamando la funzione membro . `CanRestart`non garantisce `Requery` che avrà successo.

> [!CAUTION]
> Chiama `Requery` solo dopo aver chiamato [Open](#open).

### <a name="example"></a>Esempio

In questo esempio viene ricompilato un recordset per applicare un ordinamento diverso.

[!code-cpp[NVC_MFCDatabase#29](../../mfc/codesnippet/cpp/crecordset-class_16.cpp)]

## <a name="crecordsetsetabsoluteposition"></a><a name="setabsoluteposition"></a>CRecordset::SetAbsolutePosition

Posiziona il recordset sul record corrispondente al numero di record specificato.

```
void SetAbsolutePosition(long nRows);
```

### <a name="parameters"></a>Parametri

*nRows*<br/>
Posizione ordinale in base uno per il record corrente nel recordset.

### <a name="remarks"></a>Osservazioni

`SetAbsolutePosition`sposta il puntatore del record corrente in base a questa posizione ordinale.

> [!NOTE]
> Questa funzione membro non è valida per i recordset forward-only.

Per i recordset ODBC, un'impostazione di posizione assoluta pari a 1 fa riferimento al primo record del recordset; l'impostazione 0 si riferisce alla posizione iniziale del file (BOF).

È inoltre possibile passare `SetAbsolutePosition`valori negativi a . In questo caso la posizione del recordset viene valutata dalla fine del recordset. Ad esempio, `SetAbsolutePosition( -1 )` sposta il puntatore del record corrente all'ultimo record del recordset.

> [!NOTE]
> Posizione assoluta non deve essere utilizzata come numero di record surrogato. I segnalibri sono ancora il modo consigliato per mantenere e tornare a una determinata posizione, poiché la posizione di un record cambia quando i record precedenti vengono eliminati. Inoltre, non è possibile essere certi che un determinato record avrà la stessa posizione assoluta se il recordset viene ricreato nuovamente perché l'ordine dei singoli record all'interno di un recordset non è garantito a meno che non venga creato con un'istruzione SQL utilizzando una clausola **ORDER BY.**

Per ulteriori informazioni sullo spostamento tra recordset e sui segnalibri, vedere gli articoli [Recordset: Scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).

## <a name="crecordsetsetbookmark"></a><a name="setbookmark"></a>CRecordset::SetBookmark

Posiziona il recordset sul record contenente il segnalibro specificato.

```
void SetBookmark(const CDBVariant& varBookmark);
```

### <a name="parameters"></a>Parametri

*varBookmark*<br/>
Riferimento a un oggetto [CDBVariant](../../mfc/reference/cdbvariant-class.md) contenente il valore del segnalibro per un record specifico.

### <a name="remarks"></a>Osservazioni

Per determinare se i segnalibri sono supportati nel recordset, chiamare [CanBookmark](#canbookmark). Per rendere disponibili i segnalibri se supportati, è necessario impostare l'opzione `CRecordset::useBookmarks` nel parametro *dwOptions* della funzione membro [Open.](#open)

> [!NOTE]
> Se i segnalibri non sono `SetBookmark` supportati o non sono disponibili, la chiamata genererà un'eccezione. I segnalibri non sono supportati nei recordset forward-only.

Per recuperare innanzitutto il segnalibro per il record corrente, chiamare `CDBVariant` [GetBookmark](#getbookmark), che salva il valore del segnalibro in un oggetto . Successivamente, è possibile tornare a `SetBookmark` tale record chiamando utilizzando il valore del segnalibro salvato.

> [!NOTE]
> Dopo alcune operazioni del recordset, è `SetBookmark`necessario controllare la persistenza del segnalibro prima di chiamare . Ad esempio, se si `GetBookmark` recupera un `Requery`segnalibro con e quindi si chiama , il segnalibro potrebbe non essere più valido. Chiamare [CDatabase::GetBookmarkPersistence](../../mfc/reference/cdatabase-class.md#getbookmarkpersistence) per verificare `SetBookmark`se è possibile chiamare in modo sicuro .

Per ulteriori informazioni sui segnalibri e l'esplorazione dei recordset, vedere gli articoli [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md) e [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

## <a name="crecordsetsetfielddirty"></a><a name="setfielddirty"></a>CRecordset::SetFieldDirty

Contrassegna un membro dati di campo del recordset come modificato o invariato.

```
void SetFieldDirty(void* pv, BOOL bDirty = TRUE);
```

### <a name="parameters"></a>Parametri

*Pv*<br/>
Contiene l'indirizzo di un membro dati di campo nel recordset o NULL. Se NULL, tutti i membri dati di campo nel recordset vengono contrassegnati. (NULL c'è non è lo stesso di Null nella terminologia del database, che significa "non avere alcun valore.")

*bSporco*<br/>
TRUESe il membro dati di campo deve essere contrassegnato come "dirty" (modificato). In caso contrario, FALSE se il membro dati di campo deve essere contrassegnato come "pulito" (invariato).

### <a name="remarks"></a>Osservazioni

Contrassegnare i campi come invariati assicura che il campo non venga aggiornato e comporta una minore quantità di traffico SQL.

> [!NOTE]
> Questa funzione membro non è applicabile nei recordset che utilizzano il recupero di massa di righe. Se è stato implementato il `SetFieldDirty` recupero di massa di righe, si tradurrà in un'asserzione non riuscita. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Il framework contrassegna i membri dati di campo modificati per garantire che verranno scritti nel record nell'origine dati tramite il meccanismo di scambio di campi di record (RFX). La modifica del valore di un campo in genere imposta il `SetFieldDirty` campo dirty automaticamente, pertanto raramente sarà necessario chiamare se stessi, ma a volte potrebbe essere necessario assicurarsi che le colonne vengano aggiornate o inserite in modo esplicito indipendentemente dal valore presente nel membro dati del campo.

> [!CAUTION]
> Chiamare questa funzione membro solo dopo aver chiamato [Edit](#edit) o [AddNew](#addnew).

L'utilizzo di NULL per il primo argomento `outputColumn` della `param` funzione applicherà la funzione solo ai campi, non ai campi. Ad esempio, la chiamata

[!code-cpp[NVC_MFCDatabase#26](../../mfc/codesnippet/cpp/crecordset-class_10.cpp)]

imposterà `outputColumn` solo i campi su NULL; `param` campi non saranno interessati.

Per lavorare `param` sui campi, è necessario fornire `param` l'indirizzo effettivo della persona su cui si desidera lavorare, ad esempio:

[!code-cpp[NVC_MFCDatabase#27](../../mfc/codesnippet/cpp/crecordset-class_11.cpp)]

Ciò significa che `param` non è possibile impostare tutti i campi su NULL, come è possibile con `outputColumn` i campi.

## <a name="crecordsetsetfieldnull"></a><a name="setfieldnull"></a>CRecordset::SetFieldNull

Contrassegna un membro dati di campo del recordset come Null (in particolare senza valore) o come non Null.

```
void SetFieldNull(void* pv, BOOL bNull = TRUE);
```

### <a name="parameters"></a>Parametri

*Pv*<br/>
Contiene l'indirizzo di un membro dati di campo nel recordset o NULL. Se NULL, tutti i membri dati di campo nel recordset vengono contrassegnati. (NULL c'è non è lo stesso di Null nella terminologia del database, che significa "non avere alcun valore.")

*bNull*<br/>
Diverso da zero se il membro dati di campo deve essere contrassegnato come non avendo alcun valore (Null). In caso contrario, 0 se il membro dati di campo deve essere contrassegnato come non Null.

### <a name="remarks"></a>Osservazioni

Quando si aggiunge un nuovo record a un recordset, tutti i membri dati di campo vengono inizialmente impostati su un valore Null e contrassegnati come "dirty" (modificato). Quando si recupera un record da un'origine dati, le relative colonne hanno già valori o sono Null.When you retrieve a record from a data source, its columns either have already have values or are Null.

> [!NOTE]
> Non chiamare questa funzione membro sui recordset che utilizzano il recupero di massa di righe. Se è stato implementato il `SetFieldNull` recupero di massa di righe, la chiamata genera un'asserzione non riuscita. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Se si desidera specificamente designare un campo del record `SetFieldNull` corrente come che non ha un valore, chiamare con *bNull* impostato su TRUE per contrassegnarlo come Null. Se un campo è stato precedentemente contrassegnato come Null e ora si desidera assegnargli un valore, è sufficiente impostarne il nuovo valore. Non è necessario rimuovere il `SetFieldNull`flag Null con . Per determinare se il campo può `IsFieldNullable`essere Null, chiamare .

> [!CAUTION]
> Chiamare questa funzione membro solo dopo aver chiamato [Edit](#edit) o [AddNew](#addnew).

L'utilizzo di NULL per il primo argomento `outputColumn` della `param` funzione applicherà la funzione solo ai campi, non ai campi. Ad esempio, la chiamata

[!code-cpp[NVC_MFCDatabase#26](../../mfc/codesnippet/cpp/crecordset-class_10.cpp)]

imposterà `outputColumn` solo i campi su NULL; `param` campi non saranno interessati.

Per lavorare `param` sui campi, è necessario fornire `param` l'indirizzo effettivo della persona su cui si desidera lavorare, ad esempio:

[!code-cpp[NVC_MFCDatabase#27](../../mfc/codesnippet/cpp/crecordset-class_11.cpp)]

Ciò significa che `param` non è possibile impostare tutti i campi su NULL, come è possibile con `outputColumn` i campi.

> [!NOTE]
> Quando si impostano i `SetFieldNull` parametri su Null, una chiamata a prima dell'apertura del recordset genera un'asserzione. In questo caso, chiamare [SetParamNull](#setparamnull).

`SetFieldNull`viene implementato tramite [DoFieldExchange](#dofieldexchange).

## <a name="crecordsetsetlockingmode"></a><a name="setlockingmode"></a>CRecordset::SetLockingMode

Imposta la modalità di blocco su blocco "ottimistico" (impostazione predefinita) o "pessimistico". Determina la modalità di blocco dei record per gli aggiornamenti.

```
void SetLockingMode(UINT nMode);
```

### <a name="parameters"></a>Parametri

*nModalità*<br/>
Contiene uno dei seguenti `enum LockMode`valori del :

- `optimistic`Il blocco ottimistico blocca il record `Update`da aggiornare solo durante la chiamata a .

- `pessimistic`Il blocco pessimistico blocca `Edit` il record non appena `Update` viene chiamato e lo mantiene bloccato fino al completamento della chiamata o al passaggio a un nuovo record.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro se è necessario specificare quale delle due strategie di blocco dei record viene utilizzato dal recordset per gli aggiornamenti. Per impostazione predefinita, la `optimistic`modalità di blocco di un recordset è . È possibile modificarlo in `pessimistic` una strategia di blocco più prudente. Chiamare `SetLockingMode` dopo aver creato e aperto l'oggetto recordset, ma prima di chiamare `Edit`.

## <a name="crecordsetsetparamnull"></a><a name="setparamnull"></a>CRecordset::SetParamNull

Contrassegna un parametro come Null (in particolare senza valore) o come non Null.

```
void SetParamNull(
    int nIndex,
    BOOL bNull = TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero del parametro.

*bNull*<br/>
Se TRUE (valore predefinito), il parametro viene contrassegnato come Null. In caso contrario, il parametro viene contrassegnato come non Null.

### <a name="remarks"></a>Osservazioni

A differenza di [SetFieldNull](#setfieldnull), è possibile chiamare `SetParamNull` prima di aprire il recordset.

`SetParamNull`viene in genere utilizzato con query predefinite (stored procedure).

## <a name="crecordsetsetrowsetcursorposition"></a><a name="setrowsetcursorposition"></a>CRecordset::SetRowsetCursorPosition

Sposta il cursore su una riga all'interno del set di righe corrente.

```
void SetRowsetCursorPosition(WORD wRow, WORD wLockType = SQL_LOCK_NO_CHANGE);
```

### <a name="parameters"></a>Parametri

*WRow (file wRow)*<br/>
Posizione in base uno di una riga nel set di righe corrente. Questo valore può essere compreso tra 1 e la dimensione del set di righe.

*WLockType (tipo di blocco)*<br/>
Valore che indica come bloccare la riga dopo che è stata aggiornata. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Osservazioni

Quando si implementa il recupero di massa di righe, i record vengono recuperati dai set di righe, in cui il primo record nel set di righe recuperato è il record corrente. Per impostare un altro record all'interno `SetRowsetCursorPosition`del set di righe come record corrente, chiamare . Ad esempio, è `SetRowsetCursorPosition` possibile combinare con il [GetFieldValue](#getfieldvalue) funzione membro per recuperare in modo dinamico i dati da qualsiasi record del recordset.

Per `SetRowsetCursorPosition`utilizzare , è necessario aver implementato il `CRecordset::useMultiRowFetch` recupero di massa di righe specificando l'opzione del parametro *dwOptions* nella funzione membro [Open](#open) .

`SetRowsetCursorPosition`chiama la funzione `SQLSetPos`API ODBC . Il parametro *wLockType* consente di specificare lo stato di blocco della riga dopo `SQLSetPos` l'esecuzione. Nella tabella seguente vengono descritti i valori possibili per *wLockType*.

|WLockType (tipo di blocco)|Descrizione|
|---------------|-----------------|
|SQL_LOCK_NO_CHANGE (valore predefinito)|Il driver o l'origine dati assicura che la riga si trova `SetRowsetCursorPosition` nello stesso stato bloccato o sbloccato in precedenza.|
|SQL_LOCK_EXCLUSIVE|Il driver o l'origine dati blocca la riga in modo esclusivo. Non tutte le origini dati supportano questo tipo di blocco.|
|SQL_LOCK_UNLOCK|Il driver o l'origine dati sblocca la riga. Non tutte le origini dati supportano questo tipo di blocco.|

Per ulteriori `SQLSetPos`informazioni su , vedere Windows SDK. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="crecordsetsetrowsetsize"></a><a name="setrowsetsize"></a>CRecordset::SetRowsetSize

Specifica il numero di record che si desidera recuperare durante un recupero.

```
virtual void SetRowsetSize(DWORD dwNewRowsetSize);
```

### <a name="parameters"></a>Parametri

*dwNewRowsetSize (DimensioniSet)DwNewRowsetSize*<br/>
Numero di righe da recuperare durante un determinato recupero.

### <a name="remarks"></a>Osservazioni

Questa funzione membro virtuale specifica il numero di righe che si desidera recuperare durante un singolo recupero quando si utilizza il recupero di massa di righe. Per implementare il recupero di `CRecordset::useMultiRowFetch` massa di righe, è necessario impostare l'opzione nel parametro *dwOptions* della funzione membro [Open.](#open)

> [!NOTE]
> La `SetRowsetSize` chiamata senza implementare il recupero di massa di righe comporterà un'asserzione non riuscita.

Chiamare `SetRowsetSize` prima `Open` di chiamare per impostare inizialmente la dimensione del set di righe per il recordset. La dimensione predefinita del set di righe quando si implementa il recupero di massa di righe è 25.The default rowset size when implementing bulk row fetching is 25.

> [!NOTE]
> Prestare attenzione `SetRowsetSize`quando si chiama . Se si sta allocando manualmente l'archiviazione `CRecordset::userAllocMultiRowBuffers` per i dati (come specificato dall'opzione del parametro dwOptions `Open` `SetRowsetSize`in ), è necessario verificare se è necessario riallocare questi buffer di archiviazione dopo aver chiamato , ma prima di eseguire qualsiasi operazione di spostamento del cursore.

Per ottenere l'impostazione corrente per la dimensione del set di righe, chiamare [GetRowsetSize](#getrowsetsize).

Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="crecordsetupdate"></a><a name="update"></a>CRecordset::Aggiornamento

Completa un'operazione `AddNew` o `Edit` salvando i dati nuovi o modificati nell'origine dati.

```
virtual BOOL Update();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se un record è stato aggiornato correttamente; in caso contrario 0 se non sono state modificate colonne. Se non è stato aggiornato alcun record o se è stato aggiornato più di un record, viene generata un'eccezione. Viene inoltre generata un'eccezione per qualsiasi altro errore nell'origine dati.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro dopo una chiamata alla funzione membro [AddNew](#addnew) o [Edit.](#edit) Questa chiamata è necessaria `AddNew` `Edit` per completare l'operazione o .

> [!NOTE]
> Se è stato implementato il recupero `Update`di massa di righe, non è possibile chiamare . Ciò comporterà un'asserzione non riuscita. Sebbene `CRecordset` la classe non fornisca un meccanismo per l'aggiornamento di `SQLSetPos`massa di righe di dati, è possibile scrivere funzioni personalizzate utilizzando la funzione API ODBC . Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Entrambi `AddNew` `Edit` e preparare un buffer di modifica in cui vengono inseriti i dati aggiunti o modificati per il salvataggio nell'origine dati. `Update`salva i dati. Vengono aggiornati solo i campi contrassegnati o rilevati come modificati.

Se l'origine dati supporta le transazioni, è `AddNew` possibile `Edit` effettuare la chiamata (e la `Update` corrispondente o chiamata) parte di una transazione. Per ulteriori informazioni sulle transazioni, vedere l'articolo [Transazione (ODBC)](../../data/odbc/transaction-odbc.md).

> [!CAUTION]
> Se si `Update` chiama senza `AddNew` `Edit`prima `Update` chiamare `CDBException`o , viene generata un'eccezione . Se si `AddNew` `Edit`chiama o `Update` , è `Move` necessario chiamare prima di chiamare un'operazione o prima di chiudere il recordset o la connessione all'origine dati. In caso contrario, le modifiche andranno perse senza notifica.

Per informazioni `Update` dettagliate sulla gestione degli errori, vedere l'articolo [Recordset: come recordset Aggiorna record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).

### <a name="example"></a>Esempio

Vedere l'articolo [transazione: esecuzione di una transazione in un recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDatabase](../../mfc/reference/cdatabase-class.md)<br/>
[Classe CRecordView](../../mfc/reference/crecordview-class.md)

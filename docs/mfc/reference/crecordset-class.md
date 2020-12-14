---
description: 'Altre informazioni su: classe CRecordset'
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
ms.openlocfilehash: 26d886dc9ec5b4421f5b9cf4a223d03a24820e60
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97343054"
---
# <a name="crecordset-class"></a>Classe CRecordset

Rappresenta un set di record selezionati da un'origine dati.

## <a name="syntax"></a>Sintassi

```
class CRecordset : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CRecordset:: CRecordset](#crecordset)|Costruisce un oggetto `CRecordset`. La classe derivata deve fornire un costruttore che lo chiami.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CRecordset:: AddNew](#addnew)|Prepara l'aggiunta di un nuovo record. Chiamare `Update` per completare l'aggiunta.|
|[CRecordset:: CanAppend](#canappend)|Restituisce un valore diverso da zero se è possibile aggiungere nuovi record al recordset tramite la `AddNew` funzione membro.|
|[CRecordset:: CanBookmark](#canbookmark)|Restituisce un valore diverso da zero se il recordset supporta segnalibri.|
|[CRecordset:: Cancel](#cancel)|Annulla un'operazione asincrona o un processo da un secondo thread.|
|[CRecordset:: CancelUpdate](#cancelupdate)|Annulla gli aggiornamenti in sospeso a causa di un' `AddNew` `Edit` operazione o.|
|[CRecordset:: CanRestart](#canrestart)|Restituisce un valore diverso `Requery` da zero se è possibile chiamare per eseguire nuovamente la query del recordset.|
|[CRecordset:: CanScroll](#canscroll)|Restituisce un valore diverso da zero se è possibile scorrere i record.|
|[CRecordset:: CanTransact](#cantransact)|Restituisce un valore diverso da zero se l'origine dati supporta le transazioni.|
|[CRecordset:: CanUpdate](#canupdate)|Restituisce un valore diverso da zero se il recordset può essere aggiornato (è possibile aggiungere, aggiornare o eliminare record).|
|[CRecordset:: CheckRowsetError](#checkrowseterror)|Chiamato per gestire gli errori generati durante il recupero del record.|
|[CRecordset:: Close](#close)|Chiude il recordset e il HSTMT ODBC associato.|
|[CRecordset::D Elimina](#delete)|Elimina il record corrente dal recordset. È necessario scorrere in modo esplicito un altro record dopo l'eliminazione.|
|[CRecordset::D oBulkFieldExchange](#dobulkfieldexchange)|Chiamato per scambiare righe bulk di dati dall'origine dati al recordset. Implementa lo scambio di campi di record bulk (RFX bulk).|
|[CRecordset::D oFieldExchange](#dofieldexchange)|Chiamata eseguita per scambiare dati (in entrambe le direzioni) tra i membri dati del campo del recordset e il record corrispondente nell'origine dati. Implementa il trasferimento di campi di record (RFX).|
|[CRecordset:: Edit](#edit)|Prepara le modifiche al record corrente. Chiamare `Update` per completare la modifica.|
|[CRecordset:: FlushResultSet](#flushresultset)|Restituisce un valore diverso da zero se è presente un altro set di risultati da recuperare quando si utilizza una query predefinita.|
|[CRecordset:: GetBookmark](#getbookmark)|Assegna il valore del segnalibro di un record all'oggetto Parameter.|
|[CRecordset:: GetDefaultConnect](#getdefaultconnect)|Chiamato per ottenere la stringa di connessione predefinita.|
|[CRecordset:: GetDefaultSQL](#getdefaultsql)|Chiamato per ottenere la stringa SQL predefinita da eseguire.|
|[CRecordset:: GetFieldValue](#getfieldvalue)|Restituisce il valore di un campo in un recordset.|
|[CRecordset:: GetODBCFieldCount](#getodbcfieldcount)|Restituisce il numero di campi nel recordset.|
|[CRecordset:: GetODBCFieldInfo](#getodbcfieldinfo)|Restituisce tipi specifici di informazioni sui campi di un recordset.|
|[CRecordset:: GetRecordCount](#getrecordcount)|Restituisce il numero di record nel recordset.|
|[CRecordset:: GetRowsetSize](#getrowsetsize)|Restituisce il numero di record che si desidera recuperare durante una singola operazione di recupero.|
|[CRecordset:: GetRowsFetched](#getrowsfetched)|Restituisce il numero effettivo di righe recuperate durante un'operazione di recupero.|
|[CRecordset:: GetRowStatus](#getrowstatus)|Restituisce lo stato della riga dopo un'operazione di recupero.|
|[CRecordset:: GetSQL](#getsql)|Ottiene la stringa SQL utilizzata per selezionare i record per il recordset.|
|[CRecordset:: GetStatus](#getstatus)|Ottiene lo stato del recordset, ovvero l'indice del record corrente e se è stato ottenuto un conteggio finale dei record.|
|[CRecordset:: GetTableName](#gettablename)|Ottiene il nome della tabella su cui è basato il recordset.|
|[CRecordset:: IsBOF](#isbof)|Restituisce un valore diverso da zero se il recordset è stato posizionato prima del primo record. Non è presente nessun record corrente.|
|[CRecordset:: indeleted](#isdeleted)|Restituisce un valore diverso da zero se il recordset è posizionato in corrispondenza di un record eliminato.|
|[CRecordset:: IsEOF](#iseof)|Restituisce un valore diverso da zero se il recordset è stato posizionato dopo l'ultimo record. Non è presente nessun record corrente.|
|[CRecordset:: IsFieldDirty](#isfielddirty)|Restituisce un valore diverso da zero se il campo specificato nel record corrente è stato modificato.|
|[CRecordset:: IsFieldNull](#isfieldnull)|Restituisce un valore diverso da zero se il campo specificato nel record corrente è null (senza valore).|
|[CRecordset:: IsFieldNullable](#isfieldnullable)|Restituisce un valore diverso da zero se il campo specificato nel record corrente può essere impostato su null (senza valore).|
|[CRecordset:: Open](#isopen)|Restituisce un valore diverso da zero se `Open` è stato chiamato in precedenza.|
|[CRecordset:: Move](#move)|Posiziona il recordset su un numero specificato di record dal record corrente in entrambe le direzioni.|
|[CRecordset:: MoveFirst](#movefirst)|Posiziona il record corrente sul primo record del recordset. Eseguire prima di tutto il test `IsBOF` .|
|[CRecordset:: MoveLast](#movelast)|Posiziona il record corrente nell'ultimo record o nell'ultimo set di righe. Eseguire prima di tutto il test `IsEOF` .|
|[CRecordset:: MoveNext](#movenext)|Posiziona il record corrente sul record successivo o sul set di righe successivo. Eseguire prima di tutto il test `IsEOF` .|
|[CRecordset:: MovePrev](#moveprev)|Posiziona il record corrente sul record precedente o sul set di righe precedente. Eseguire prima di tutto il test `IsBOF` .|
|[CRecordset:: OnSetOptions](#onsetoptions)|Chiamato per impostare le opzioni (utilizzate sulla selezione) per l'istruzione ODBC specificata.|
|[CRecordset:: OnSetUpdateOptions](#onsetupdateoptions)|Chiamato per impostare le opzioni (utilizzate sull'aggiornamento) per l'istruzione ODBC specificata.|
|[CRecordset:: Open](#open)|Apre il recordset recuperando la tabella o eseguendo la query rappresentata dal recordset.|
|[CRecordset:: RefreshRowset](#refreshrowset)|Aggiorna i dati e lo stato delle righe specificate.|
|[CRecordset:: Requery](#requery)|Esegue di nuovo la query del recordset per aggiornare i record selezionati.|
|[CRecordset:: SetAbsolutePosition](#setabsoluteposition)|Posiziona il recordset sul record corrispondente al numero di record specificato.|
|[CRecordset:: sesegnalibro](#setbookmark)|Posiziona il recordset sul record specificato dal segnalibro.|
|[CRecordset:: SetFieldDirty](#setfielddirty)|Contrassegna il campo specificato nel record corrente come modificato.|
|[CRecordset:: SetFieldNull](#setfieldnull)|Imposta su null il valore del campo specificato nel record corrente (senza valore).|
|[CRecordset:: SetLockingMode](#setlockingmode)|Imposta la modalità di blocco sul blocco "ottimistico" (impostazione predefinita) o "pessimistica". Determina la modalità di blocco dei record per gli aggiornamenti.|
|[CRecordset:: SetParamNull](#setparamnull)|Imposta il parametro specificato su null (senza valore).|
|[CRecordset:: SetRowsetCursorPosition](#setrowsetcursorposition)|Posiziona il cursore sulla riga specificata all'interno del set di righe.|
|[CRecordset:: SetRowsetSize](#setrowsetsize)|Specifica il numero di record che si desidera recuperare durante un'operazione di recupero.|
|[CRecordset:: Update](#update)|Completa un' `AddNew` operazione o `Edit` salvando i dati nuovi o modificati nell'origine dati.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CRecordset:: m_hstmt](#m_hstmt)|Contiene l'handle di istruzione ODBC per il recordset. Digitare `HSTMT`.|
|[CRecordset:: m_nFields](#m_nfields)|Contiene il numero di membri dati di campo nel recordset. Digitare `UINT`.|
|[CRecordset:: m_nParams](#m_nparams)|Contiene il numero di membri dati del parametro nel recordset. Digitare `UINT`.|
|[CRecordset:: m_pDatabase](#m_pdatabase)|Contiene un puntatore all' `CDatabase` oggetto tramite il quale il recordset è connesso a un'origine dati.|
|[CRecordset:: m_strFilter](#m_strfilter)|Contiene un oggetto `CString` che specifica una clausola Structured Query Language (SQL) `WHERE` . Usato come filtro per selezionare solo i record che soddisfano determinati criteri.|
|[CRecordset:: m_strSort](#m_strsort)|Contiene un oggetto `CString` che specifica una `ORDER BY` clausola SQL. Utilizzato per controllare la modalità di ordinamento dei record.|

## <a name="remarks"></a><a name="remarks"></a> Osservazioni

Noti come "Recordset", `CRecordset` gli oggetti vengono in genere usati in due formati: dynaset e snapshot. Un dynaset rimane sincronizzato con gli aggiornamenti dei dati eseguiti da altri utenti. Uno snapshot è una visualizzazione statica dei dati. Ogni modulo rappresenta un set di record corretti al momento dell'apertura del recordset, ma quando si scorre fino a un record in un dynaset, riflette le modifiche apportate successivamente al record, da altri utenti o da altri recordset nell'applicazione.

> [!NOTE]
> Se si utilizzano le classi DAO (Data Access Objects) anziché le classi Open Database Connectivity (ODBC), utilizzare invece la classe [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) . Per ulteriori informazioni, vedere l'articolo [Cenni preliminari sulla programmazione di database](../../data/data-access-programming-mfc-atl.md).

Per utilizzare entrambi i tipi di recordset, in genere si deriva una classe recordset specifica dell'applicazione da `CRecordset` . I recordset selezionano i record da un'origine dati ed è quindi possibile:

- Scorrere i record.

- Aggiornare i record e specificare una modalità di blocco.

- Filtrare il recordset in modo da vincolare i record selezionati da quelli disponibili nell'origine dati.

- Ordinare il recordset.

- Parametrizzare il recordset per personalizzare la selezione con le informazioni non note fino alla fase di esecuzione.

Per usare la classe, aprire un database e costruire un oggetto recordset, passando al costruttore un puntatore all' `CDatabase` oggetto. Chiamare quindi la `Open` funzione membro del recordset, in cui è possibile specificare se l'oggetto è di un dynaset o di uno snapshot. `Open`La chiamata di seleziona i dati dall'origine dati. Dopo l'apertura dell'oggetto recordset, utilizzare le funzioni membro e i membri dati per scorrere i record e operare su di essi. Le operazioni disponibili variano a seconda che l'oggetto sia un dynaset o uno snapshot, che sia aggiornabile o di sola lettura (dipende dalla funzionalità dell'origine dati Open Database Connectivity (ODBC)) e dal fatto che sia stato implementato il recupero di righe BULK. Per aggiornare i record che potrebbero essere stati modificati o aggiunti dopo la `Open` chiamata, chiamare la `Requery` funzione membro dell'oggetto. Chiamare la `Close` funzione membro dell'oggetto ed eliminare definitivamente l'oggetto al termine dell'oggetto.

In una `CRecordset` classe derivata, il servizio RFX (record Field Exchange) o lo scambio di campi di record bulk (RFX) viene utilizzato per supportare la lettura e l'aggiornamento dei campi di record.

Per ulteriori informazioni sui recordset e sullo scambio di campi di record, vedere gli articoli [Cenni preliminari: programmazione di database](../../data/data-access-programming-mfc-atl.md), [Recordset (ODBC)](../../data/odbc/recordset-odbc.md), [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md)e [RFX (record Field Exchange](../../data/odbc/record-field-exchange-rfx.md)). Per un focus sui dynaset e sugli snapshot, vedere gli articoli [Dynaset](../../data/odbc/dynaset.md) e [snapshot](../../data/odbc/snapshot.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CRecordset`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="crecordsetaddnew"></a><a name="addnew"></a> CRecordset:: AddNew

Prepara l'aggiunta di un nuovo record alla tabella.

```
virtual void AddNew();
```

### <a name="remarks"></a>Commenti

Per visualizzare il record appena aggiunto, è necessario chiamare la funzione membro [Requery](#requery) . I campi del record sono inizialmente null. Nella terminologia del database, null significa "senza valore" e non è uguale a NULL in C++. Per completare l'operazione, è necessario chiamare la funzione membro [Update](#update) . `Update` Salva le modifiche apportate all'origine dati.

> [!NOTE]
> Se è stato implementato il recupero di righe bulk, non è possibile chiamare `AddNew` . Verrà generata un'asserzione non riuscita. Sebbene la classe non `CRecordset` fornisca un meccanismo per l'aggiornamento di righe di dati bulk, è possibile scrivere funzioni personalizzate utilizzando la funzione API ODBC `SQLSetPos` . Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

`AddNew` prepara un nuovo record vuoto usando i membri dati di campo del recordset. Dopo aver chiamato `AddNew` , impostare i valori desiderati nei membri dati di campo del recordset. Non è necessario chiamare la funzione membro [Edit](#edit) per questo scopo `Edit` . utilizzare solo per i record esistenti. Quando si chiama successivamente `Update` , i valori modificati nei membri dati del campo vengono salvati nell'origine dati.

> [!CAUTION]
> Se si scorre un nuovo record prima della chiamata a `Update` , il nuovo record viene perso e non viene fornito alcun avviso.

Se l'origine dati supporta le transazioni, è possibile effettuare la `AddNew` parte della chiamata di una transazione. Per ulteriori informazioni sulle transazioni, vedere la classe [CDatabase](../../mfc/reference/cdatabase-class.md). Si noti che è necessario chiamare [CDatabase:: BeginTrans](../../mfc/reference/cdatabase-class.md#begintrans) prima di chiamare `AddNew` .

> [!NOTE]
> Per i dynaset, i nuovi record vengono aggiunti al recordset come ultimo record. I record aggiunti non vengono aggiunti agli snapshot; è necessario chiamare `Requery` per aggiornare il recordset.

Non è consentito chiamare `AddNew` per un recordset la cui `Open` funzione membro non è stata chiamata. `CDBException`Viene generata un'eccezione se si chiama `AddNew` per un recordset che non può essere aggiunto a. È possibile determinare se il recordset è aggiornabile chiamando [CanAppend](#canappend).

Per ulteriori informazioni, vedere gli articoli seguenti: [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md), [Recordset: aggiunta, aggiornamento ed eliminazione di record (](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)ODBC) e [transazione (ODBC](../../data/odbc/transaction-odbc.md)).

### <a name="example"></a>Esempio

Vedere l'articolo [transazione: esecuzione di una transazione in un recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).

## <a name="crecordsetcanappend"></a><a name="canappend"></a> CRecordset:: CanAppend

Determina se il recordset aperto in precedenza consente di aggiungere nuovi record.

```
BOOL CanAppend() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset consente l'aggiunta di nuovi record; in caso contrario, 0. `CanAppend` restituirà 0 se il recordset è stato aperto come di sola lettura.

## <a name="crecordsetcanbookmark"></a><a name="canbookmark"></a> CRecordset:: CanBookmark

Determina se il recordset consente di contrassegnare i record utilizzando segnalibri.

```
BOOL CanBookmark() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset supporta segnalibri; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questa funzione è indipendente dall' `CRecordset::useBookmarks` opzione nel parametro *dwOptions* della funzione membro [Open](#open) . `CanBookmark` indica se il driver ODBC e il tipo di cursore specificati supportano i segnalibri. `CRecordset::useBookmarks` indica se i segnalibri saranno disponibili, purché siano supportati.

> [!NOTE]
> I segnalibri non sono supportati nei recordset di sola trasmissione.

Per ulteriori informazioni sui segnalibri e sull'esplorazione dei recordset, vedere gli articoli [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md) e [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

## <a name="crecordsetcancel"></a><a name="cancel"></a> CRecordset:: Cancel

Richiede che l'origine dati cancelli un'operazione asincrona in corso o un processo da un secondo thread.

```cpp
void Cancel();
```

### <a name="remarks"></a>Commenti

Si noti che le classi ODBC MFC non utilizzano più l'elaborazione asincrona. per eseguire un'operazione asincrono, è necessario chiamare direttamente la funzione API ODBC `SQLSetConnectOption` . Per ulteriori informazioni, vedere l'argomento "esecuzione asincrona di funzioni" nella Guida per *programmatori di ODBC SDK*.

## <a name="crecordsetcancelupdate"></a><a name="cancelupdate"></a> CRecordset:: CancelUpdate

Annulla gli aggiornamenti in sospeso, causati da un'operazione di [modifica](#edit) o [AddNew](#addnew) , prima della chiamata dell' [aggiornamento](#update) .

```cpp
void CancelUpdate();
```

### <a name="remarks"></a>Commenti

> [!NOTE]
> Questa funzione membro non è applicabile ai recordset che utilizzano il recupero di righe bulk, perché tali recordset non possono chiamare `Edit` , `AddNew` o `Update` . Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Se il controllo automatico dei campi Dirty è abilitato, `CancelUpdate` ripristinerà le variabili membro ai valori che avevano prima `Edit` o `AddNew` dopo la chiamata; in caso contrario, le modifiche ai valori rimarranno. Per impostazione predefinita, il controllo automatico dei campi viene attivato quando il recordset viene aperto. Per disabilitarla, è necessario specificare `CRecordset::noDirtyFieldCheck` nel parametro *dwOptions* della funzione membro [Open](#open) .

Per ulteriori informazioni sull'aggiornamento dei dati, vedere l'articolo [Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md).

## <a name="crecordsetcanrestart"></a><a name="canrestart"></a> CRecordset:: CanRestart

Determina se il recordset consente il riavvio della query (per aggiornare i relativi record) chiamando la `Requery` funzione membro.

```
BOOL CanRestart() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la riesecuzione della query è consentita; in caso contrario, 0.

## <a name="crecordsetcanscroll"></a><a name="canscroll"></a> CRecordset:: CanScroll

Determina se il recordset consente lo scorrimento.

```
BOOL CanScroll() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset consente lo scorrimento; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni sullo scorrimento, vedere l'articolo [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

## <a name="crecordsetcantransact"></a><a name="cantransact"></a> CRecordset:: CanTransact

Determina se il recordset consente le transazioni.

```
BOOL CanTransact() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset consente le transazioni. in caso contrario, 0.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere l'articolo relativo alla [transazione (ODBC)](../../data/odbc/transaction-odbc.md).

## <a name="crecordsetcanupdate"></a><a name="canupdate"></a> CRecordset:: CanUpdate

Determina se il recordset può essere aggiornato.

```
BOOL CanUpdate() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset può essere aggiornato; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Un recordset potrebbe essere di sola lettura se l'origine dati sottostante è di sola lettura o se è stato specificato `CRecordset::readOnly` nel parametro *dwOptions* quando è stato aperto il recordset.

## <a name="crecordsetcheckrowseterror"></a><a name="checkrowseterror"></a> CRecordset:: CheckRowsetError

Chiamato per gestire gli errori generati durante il recupero del record.

```
virtual void CheckRowsetError(RETCODE nRetCode);
```

### <a name="parameters"></a>Parametri

*nRetCode*<br/>
Codice restituito da una funzione API ODBC. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Commenti

Questa funzione membro virtuale gestisce gli errori che si verificano quando vengono recuperati i record ed è utile durante il recupero di righe BULK. Si consiglia di eseguire `CheckRowsetError` l'override di per implementare la gestione degli errori.

`CheckRowsetError` viene chiamato automaticamente in un'operazione di spostamento del cursore, ad esempio `Open` , `Requery` o qualsiasi `Move` operazione. Viene passato il valore restituito della funzione API ODBC `SQLExtendedFetch` . Nella tabella seguente sono elencati i valori possibili per il parametro *nRetCode* .

|nRetCode|Description|
|--------------|-----------------|
|SQL_SUCCESS|Funzione completata correttamente; non sono disponibili informazioni aggiuntive.|
|SQL_SUCCESS_WITH_INFO|La funzione è stata completata correttamente, probabilmente con un errore non irreversibile. È possibile ottenere ulteriori informazioni chiamando `SQLError` .|
|SQL_NO_DATA_FOUND|Tutte le righe del set di risultati sono state recuperate.|
|SQL_ERROR|Funzione non riuscita. È possibile ottenere ulteriori informazioni chiamando `SQLError` .|
|SQL_INVALID_HANDLE|Funzione non riuscita a causa di un handle di ambiente, un handle di connessione o un handle di istruzione non valido. Ciò indica un errore di programmazione. Non sono disponibili informazioni aggiuntive da `SQLError` .|
|SQL_STILL_EXECUTING|Una funzione avviata in modo asincrono è ancora in esecuzione. Si noti che per impostazione predefinita, il valore di MFC non verrà mai passato a `CheckRowsetError` ; MFC continuerà `SQLExtendedFetch` a chiamare fino a quando non restituisce più SQL_STILL_EXECUTING.|

Per ulteriori informazioni su `SQLError` , vedere la Windows SDK. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="crecordsetclose"></a><a name="close"></a> CRecordset:: Close

Chiude il recordset.

```
virtual void Close();
```

### <a name="remarks"></a>Commenti

Il HSTMT ODBC e tutta la memoria allocata dal Framework per il recordset sono deallocate. In genere, dopo aver chiamato `Close` , l'oggetto recordset C++ viene eliminato se è stato allocato con **`new`** .

È possibile chiamare di `Open` nuovo dopo aver chiamato il `Close` . In questo modo è possibile riutilizzare l'oggetto recordset. L'alternativa consiste nel chiamare `Requery` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#17](../../mfc/codesnippet/cpp/crecordset-class_1.cpp)]

## <a name="crecordsetcrecordset"></a><a name="crecordset"></a> CRecordset:: CRecordset

Costruisce un oggetto `CRecordset`.

```
CRecordset(CDatabase* pDatabase = NULL);
```

### <a name="parameters"></a>Parametri

*pDatabase*<br/>
Contiene un puntatore a un `CDatabase` oggetto o il valore null. Se non è NULL e la `CDatabase` `Open` funzione membro dell'oggetto non è stata chiamata per connetterla all'origine dati, il recordset tenta di aprirlo per l'utente durante una chiamata a se stessa `Open` . Se si passa NULL, un `CDatabase` oggetto viene costruito e connesso usando le informazioni sull'origine dati specificate quando è stata derivata la classe recordset con ClassWizard.

### <a name="remarks"></a>Commenti

È possibile usare `CRecordset` direttamente o derivare una classe specifica dell'applicazione da `CRecordset` . È possibile utilizzare ClassWizard per derivare le classi recordset.

> [!NOTE]
> Una classe derivata *deve* fornire il proprio costruttore. Nel costruttore della classe derivata chiamare il costruttore `CRecordset::CRecordset` , passando i parametri appropriati.

Passare NULL al costruttore del recordset affinché un `CDatabase` oggetto venga costruito e connesso automaticamente. Si tratta di un'abbreviazione utile che non richiede la creazione e la connessione di un `CDatabase` oggetto prima di creare il recordset.

### <a name="example"></a>Esempio

Per ulteriori informazioni, vedere l'articolo [Recordset: dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md).

## <a name="crecordsetdelete"></a><a name="delete"></a> CRecordset::D Elimina

Elimina il record corrente.

```
virtual void Delete();
```

### <a name="remarks"></a>Commenti

Una volta completata l'eliminazione, i membri dati del campo del recordset vengono impostati su un valore null ed è necessario chiamare in modo esplicito una delle `Move` funzioni per poter uscire dal record eliminato. Quando si esce dal record eliminato, non è possibile tornare a questa pagina. Se l'origine dati supporta le transazioni, è possibile effettuare la `Delete` chiamata della parte di una transazione. Per ulteriori informazioni, vedere l'articolo relativo alla [transazione (ODBC)](../../data/odbc/transaction-odbc.md).

> [!NOTE]
> Se è stato implementato il recupero di righe bulk, non è possibile chiamare `Delete` . Verrà generata un'asserzione non riuscita. Sebbene la classe non `CRecordset` fornisca un meccanismo per l'aggiornamento di righe di dati bulk, è possibile scrivere funzioni personalizzate utilizzando la funzione API ODBC `SQLSetPos` . Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

> [!CAUTION]
> Il recordset deve essere aggiornabile e deve essere presente un record valido nel recordset quando si chiama `Delete` ; in caso contrario, si verifica un errore. Se, ad esempio, si elimina un record ma non si scorre un nuovo record prima di richiamarlo `Delete` , viene `Delete` generato un [CDBException](../../mfc/reference/cdbexception-class.md).

A differenza di [AddNew](#addnew) e [Edit](#edit), una chiamata a `Delete` non è seguita da una chiamata a [Update](#update). Se una `Delete` chiamata ha esito negativo, i membri dati del campo restano invariati.

### <a name="example"></a>Esempio

Questo esempio mostra un recordset creato nel frame di una funzione. Nell'esempio si presuppone l'esistenza di `m_dbCust` , una variabile membro di tipo `CDatabase` già connessa all'origine dati.

[!code-cpp[NVC_MFCDatabase#18](../../mfc/codesnippet/cpp/crecordset-class_2.cpp)]

## <a name="crecordsetdobulkfieldexchange"></a><a name="dobulkfieldexchange"></a> CRecordset::D oBulkFieldExchange

Chiamato per scambiare righe bulk di dati dall'origine dati al recordset. Implementa lo scambio di campi di record bulk (RFX bulk).

```
virtual void DoBulkFieldExchange(CFieldExchange* pFX);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) . Il Framework avrà già configurato questo oggetto per specificare un contesto per l'operazione di scambio dei campi.

### <a name="remarks"></a>Commenti

Quando viene implementato il recupero di righe in blocco, il Framework chiama questa funzione membro per trasferire automaticamente i dati dall'origine dati all'oggetto recordset. `DoBulkFieldExchange` associa inoltre i membri dati dei parametri, se presenti, ai segnaposto dei parametri nella stringa dell'istruzione SQL per la selezione del recordset.

Se il recupero di righe in blocco non è implementato, il Framework chiama [DoFieldExchange](#dofieldexchange). Per implementare il recupero di righe bulk, è necessario specificare l' `CRecordset::useMultiRowFetch` opzione del parametro *dwOptions* nella funzione membro [Open](#open) .

> [!NOTE]
> `DoBulkFieldExchange` è disponibile solo se si utilizza una classe derivata da `CRecordset` . Se è stato creato un oggetto recordset direttamente da `CRecordset` , è necessario chiamare la funzione membro [GetFieldValue](#getfieldvalue) per recuperare i dati.

Lo scambio di campi di record bulk (RFX bulk) è simile a RFX (record Field Exchange). I dati vengono trasferiti automaticamente dall'origine dati all'oggetto recordset. Tuttavia, non è possibile chiamare `AddNew` , `Edit` , `Delete` o `Update` per trasferire di nuovo le modifiche nell'origine dati. Attualmente la classe `CRecordset` non fornisce un meccanismo per l'aggiornamento di righe di dati bulk; tuttavia, è possibile scrivere funzioni personalizzate utilizzando la funzione API ODBC `SQLSetPos` .

Si noti che ClassWizard non supporta lo scambio di campi di record in blocco. Pertanto, è necessario eseguire l'override `DoBulkFieldExchange` manualmente mediante la scrittura di chiamate alle funzioni RFX di massa. Per ulteriori informazioni su queste funzioni, vedere l'argomento [funzioni di scambio di campi di record](../../mfc/reference/record-field-exchange-functions.md).

Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). Per informazioni correlate, vedere l'articolo relativo allo [scambio di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md).

## <a name="crecordsetdofieldexchange"></a><a name="dofieldexchange"></a> CRecordset::D oFieldExchange

Chiamata eseguita per scambiare dati (in entrambe le direzioni) tra i membri dati del campo del recordset e il record corrispondente nell'origine dati. Implementa il trasferimento di campi di record (RFX).

```
virtual void DoFieldExchange(CFieldExchange* pFX);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) . Il Framework avrà già configurato questo oggetto per specificare un contesto per l'operazione di scambio dei campi.

### <a name="remarks"></a>Commenti

Quando il recupero di righe in blocco non è implementato, il Framework chiama questa funzione membro per scambiare automaticamente i dati tra i membri dati del campo dell'oggetto recordset e le colonne corrispondenti del record corrente nell'origine dati. `DoFieldExchange` associa inoltre i membri dati dei parametri, se presenti, ai segnaposto dei parametri nella stringa dell'istruzione SQL per la selezione del recordset.

Se viene implementato il recupero di righe bulk, il Framework chiama [DoBulkFieldExchange](#dobulkfieldexchange). Per implementare il recupero di righe bulk, è necessario specificare l' `CRecordset::useMultiRowFetch` opzione del parametro *dwOptions* nella funzione membro [Open](#open) .

> [!NOTE]
> `DoFieldExchange` è disponibile solo se si utilizza una classe derivata da `CRecordset` . Se è stato creato un oggetto recordset direttamente da `CRecordset` , è necessario chiamare la funzione membro [GetFieldValue](#getfieldvalue) per recuperare i dati.

Lo scambio di dati del campo, denominato RFX (record Field Exchange), funziona in entrambe le direzioni: dai membri dati del campo dell'oggetto recordset ai campi del record nell'origine dati e dal record nell'origine dati all'oggetto recordset.

L'unica azione che è necessario in genere eseguire per implementare `DoFieldExchange` per la classe recordset derivata consiste nel creare la classe con ClassWizard e specificare i nomi e i tipi di dati dei membri dati del campo. È anche possibile aggiungere codice a quello che ClassWizard scrive per specificare i membri dati del parametro o per gestire le colonne associate in modo dinamico. Per ulteriori informazioni, vedere l'articolo [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).

Quando si dichiara la classe recordset derivata con ClassWizard, la procedura guidata scrive una sostituzione di `DoFieldExchange` per l'utente, che è simile all'esempio seguente:

[!code-cpp[NVC_MFCDatabase#19](../../mfc/codesnippet/cpp/crecordset-class_3.cpp)]

Per ulteriori informazioni sulle funzioni RFX, vedere l'argomento [funzioni di scambio di campi di record](../../mfc/reference/record-field-exchange-functions.md).

Per altri esempi e dettagli su `DoFieldExchange` , vedere l'articolo [scambio di campi di record:](../../data/odbc/record-field-exchange-how-rfx-works.md)funzionamento di RFX. Per informazioni generali su RFX, vedere l'articolo relativo allo [scambio di campi di record](../../data/odbc/record-field-exchange-rfx.md).

## <a name="crecordsetedit"></a><a name="edit"></a> CRecordset:: Edit

Consente di apportare modifiche al record corrente.

```
virtual void Edit();
```

### <a name="remarks"></a>Commenti

Dopo aver chiamato `Edit` , è possibile modificare i membri dei dati del campo reimpostando direttamente i relativi valori. L'operazione viene completata quando si chiama successivamente la funzione membro [Update](#update) per salvare le modifiche nell'origine dati.

> [!NOTE]
> Se è stato implementato il recupero di righe bulk, non è possibile chiamare `Edit` . Verrà generata un'asserzione non riuscita. Sebbene la classe non `CRecordset` fornisca un meccanismo per l'aggiornamento di righe di dati bulk, è possibile scrivere funzioni personalizzate utilizzando la funzione API ODBC `SQLSetPos` . Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

`Edit` Salva i valori dei membri dati del recordset. Se si chiama `Edit` , si apportano modifiche e quindi si chiama `Edit` nuovamente, i valori del record vengono ripristinati a quello che stavano prima della prima `Edit` chiamata.

In alcuni casi, potrebbe essere necessario aggiornare una colonna rendendola null (che non contiene dati). A tale scopo, chiamare [SetFieldNull](#setfieldnull) con un parametro true per contrassegnare il campo come null. Questa operazione comporta anche l'aggiornamento della colonna. Se si desidera che un campo venga scritto nell'origine dati anche se il relativo valore non è stato modificato, chiamare [SetFieldDirty](#setfielddirty) con il parametro true. Questa operazione funziona anche se il valore del campo è null.

Se l'origine dati supporta le transazioni, è possibile effettuare la `Edit` chiamata della parte di una transazione. Si noti che è necessario chiamare [CDatabase:: BeginTrans](../../mfc/reference/cdatabase-class.md#begintrans) prima `Edit` di chiamare e dopo l'apertura del recordset. Si noti anche che la chiamata di [CDatabase:: CommitTrans](../../mfc/reference/cdatabase-class.md#committrans) non è un sostituto per chiamare `Update` per completare l' `Edit` operazione. Per ulteriori informazioni sulle transazioni, vedere la classe [CDatabase](../../mfc/reference/cdatabase-class.md).

A seconda della modalità di blocco corrente, il record da aggiornare può essere bloccato da `Edit` fino a quando non si chiama `Update` o si scorre un altro record oppure può essere bloccato solo durante la `Edit` chiamata. È possibile modificare la modalità di blocco con [SetLockingMode](#setlockingmode).

Il valore precedente del record corrente viene ripristinato se si scorre un nuovo record prima di chiamare `Update` . `CDBException`Viene generata un'eccezione se si chiama `Edit` per un recordset che non può essere aggiornato o se non è presente alcun record corrente.

Per ulteriori informazioni, vedere gli articoli [transazione (ODBC)](../../data/odbc/transaction-odbc.md) e [Recordset: blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#20](../../mfc/codesnippet/cpp/crecordset-class_4.cpp)]

## <a name="crecordsetflushresultset"></a><a name="flushresultset"></a> CRecordset:: FlushResultSet

Recupera il set di risultati successivo di una query predefinita (stored procedure), se sono presenti più set di risultati.

```
BOOL FlushResultSet();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se sono presenti più set di risultati da recuperare. in caso contrario, 0.

### <a name="remarks"></a>Commenti

È necessario chiamare `FlushResultSet` solo quando il cursore del set di risultati corrente è completamente terminato. Si noti che quando si recupera il set di risultati successivo chiamando `FlushResultSet` , il cursore non è valido nel set di risultati. è necessario chiamare la funzione membro [MoveNext](#movenext) dopo avere chiamato `FlushResultSet` .

Se una query predefinita usa un parametro di output o parametri di input/output, è necessario chiamare `FlushResultSet` fino a quando non viene restituito `FALSE` (valore 0), per ottenere questi valori di parametro.

`FlushResultSet` chiama la funzione API ODBC `SQLMoreResults` . Se `SQLMoreResults` restituisce SQL_ERROR o SQL_INVALID_HANDLE, genererà `FlushResultSet` un'eccezione. Per ulteriori informazioni su `SQLMoreResults` , vedere la Windows SDK.

Il stored procedure deve avere campi associati se si vuole chiamare `FlushResultSet` .

### <a name="example"></a>Esempio

Il codice seguente presuppone che `COutParamRecordset` sia un `CRecordset` oggetto derivato da basato su una query predefinita con un parametro di input e un parametro di output e con più set di risultati. Si noti la struttura dell'override di [DoFieldExchange](#dofieldexchange) .

[!code-cpp[NVC_MFCDatabase#21](../../mfc/codesnippet/cpp/crecordset-class_5.cpp)]

[!code-cpp[NVC_MFCDatabase#22](../../mfc/codesnippet/cpp/crecordset-class_6.cpp)]

## <a name="crecordsetgetbookmark"></a><a name="getbookmark"></a> CRecordset:: GetBookmark

Ottiene il valore del segnalibro per il record corrente.

```cpp
void GetBookmark(CDBVariant& varBookmark);
```

### <a name="parameters"></a>Parametri

*varBookmark*<br/>
Riferimento a un oggetto [CDBVariant](../../mfc/reference/cdbvariant-class.md) che rappresenta il segnalibro nel record corrente.

### <a name="remarks"></a>Commenti

Per determinare se i segnalibri sono supportati nel recordset, chiamare [CanBookmark](#canbookmark). Per rendere disponibili i segnalibri se sono supportati, è necessario impostare l' `CRecordset::useBookmarks` opzione nel parametro *dwOptions* della funzione membro [Open](#open) .

> [!NOTE]
> Se i segnalibri non sono supportati o non sono disponibili, la chiamata a comporterà `GetBookmark` la generazione di un'eccezione. I segnalibri non sono supportati nei recordset di sola trasmissione.

`GetBookmark` assegna il valore del segnalibro per il record corrente a un `CDBVariant` oggetto. Per tornare al record in qualsiasi momento dopo il passaggio a un record diverso, chiamare [sebookmark](#setbookmark) con l' `CDBVariant` oggetto corrispondente.

> [!NOTE]
> Dopo determinate operazioni del recordset, i segnalibri potrebbero non essere più validi. Se ad esempio si chiama `GetBookmark` seguito da `Requery` , potrebbe non essere possibile tornare al record con `SetBookmark` . Chiamare [CDatabase:: GetBookmarkPersistence](../../mfc/reference/cdatabase-class.md#getbookmarkpersistence) per verificare se è possibile chiamare in modo sicuro `SetBookmark` .

Per ulteriori informazioni sui segnalibri e sull'esplorazione dei recordset, vedere gli articoli [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md) e [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

## <a name="crecordsetgetdefaultconnect"></a><a name="getdefaultconnect"></a> CRecordset:: GetDefaultConnect

Chiamato per ottenere la stringa di connessione predefinita.

```
virtual CString GetDefaultConnect();
```

### <a name="return-value"></a>Valore restituito

Oggetto contenente `CString` la stringa di connessione predefinita.

### <a name="remarks"></a>Commenti

Il Framework chiama questa funzione membro per ottenere la stringa di connessione predefinita per l'origine dati su cui è basato il recordset. ClassWizard implementa questa funzione per l'utente identificando la stessa origine dati usata in ClassWizard per ottenere informazioni su tabelle e colonne. È probabile che si ritenga utile utilizzare questa connessione predefinita durante lo sviluppo dell'applicazione. Tuttavia, la connessione predefinita potrebbe non essere appropriata per gli utenti dell'applicazione. In tal caso, è necessario reimplementare questa funzione, ignorando la versione di ClassWizard. Per ulteriori informazioni sulle stringhe di connessione, vedere l'articolo [origine dati (ODBC)](../../data/odbc/data-source-odbc.md).

## <a name="crecordsetgetdefaultsql"></a><a name="getdefaultsql"></a> CRecordset:: GetDefaultSQL

Chiamato per ottenere la stringa SQL predefinita da eseguire.

```
virtual CString GetDefaultSQL();
```

### <a name="return-value"></a>Valore restituito

Oggetto contenente `CString` l'istruzione SQL predefinita.

### <a name="remarks"></a>Commenti

Il Framework chiama questa funzione membro per ottenere l'istruzione SQL predefinita su cui è basato il recordset. Potrebbe trattarsi di un nome di tabella o di un'istruzione SQL **Select** .

Si definisce indirettamente l'istruzione SQL predefinita dichiarando la classe recordset con ClassWizard e ClassWizard esegue questa attività automaticamente.

Se è necessaria la stringa dell'istruzione SQL per uso personale, chiamare `GetSQL` , che restituisce l'istruzione SQL utilizzata per selezionare i record del recordset quando è stato aperto. È possibile modificare la stringa SQL predefinita nell'override della classe di `GetDefaultSQL` . Ad esempio, è possibile specificare una chiamata a una query predefinita usando un'istruzione **Call** . Si noti, tuttavia, che se si modifica `GetDefaultSQL` , è necessario modificare anche in `m_nFields` modo che corrisponda al numero di colonne nell'origine dati.

Per ulteriori informazioni, vedere l'articolo [Recordset: dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md).

> [!CAUTION]
> Il nome della tabella sarà vuoto se il Framework non è in grado di identificare un nome di tabella, se sono stati specificati più nomi di tabella o se non è stato possibile interpretare un'istruzione **Call** . Si noti che quando si usa un'istruzione **Call** , non è necessario inserire uno spazio vuoto tra la parentesi graffa e la parola chiave **Call** , né inserire uno spazio vuoto prima della parentesi graffa o prima della parola chiave **Select** in un'istruzione **Select** .

## <a name="crecordsetgetfieldvalue"></a><a name="getfieldvalue"></a> CRecordset:: GetFieldValue

Recupera i dati dei campi nel record corrente.

```cpp
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

*varValu* e un riferimento a un oggetto [CDBVariant](../../mfc/reference/cdbvariant-class.md) che archivia il valore del campo.

*nFieldType*<br/>
Tipo di dati ODBC C del campo. Utilizzando il valore predefinito, DEFAULT_FIELD_TYPE, impone `GetFieldValue` a di determinare il tipo di dati C dal tipo di dati SQL in base alla tabella seguente. In caso contrario, è possibile specificare direttamente il tipo di dati o scegliere un tipo di dati compatibile. ad esempio, è possibile archiviare qualsiasi tipo di dati in SQL_C_CHAR.

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

Per ulteriori informazioni sui tipi di dati ODBC, vedere gli argomenti relativi ai tipi di dati SQL e ai tipi di dati C nell'Appendice D del Windows SDK.

*nIndex*<br/>
Indice in base zero del campo.

*strValue*<br/>
Riferimento a un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che archivia il valore del campo convertito in testo, indipendentemente dal tipo di dati del campo.

### <a name="remarks"></a>Commenti

È possibile cercare un campo in base al nome o all'indice. Il valore del campo può essere archiviato in un `CDBVariant` oggetto o in un `CString` oggetto.

Se è stato implementato il recupero di righe bulk, il record corrente viene sempre posizionato in corrispondenza del primo record in un set di righe. Per utilizzare `GetFieldValue` su un record all'interno di un determinato set di righe, è innanzitutto necessario chiamare la funzione membro [SetRowsetCursorPosition](#setrowsetcursorposition) per spostare il cursore nella riga desiderata all'interno di tale set di righe. Quindi chiamare `GetFieldValue` per la riga. Per implementare il recupero di righe bulk, è necessario specificare l' `CRecordset::useMultiRowFetch` opzione del parametro *dwOptions* nella funzione membro [Open](#open) .

È possibile utilizzare `GetFieldValue` per recuperare in modo dinamico i campi in fase di esecuzione anziché associarli in modo statico in fase di progettazione. Se, ad esempio, è stato dichiarato un oggetto recordset direttamente da `CRecordset` , è necessario utilizzare `GetFieldValue` per recuperare i dati del campo, ovvero RFX (record Field Exchange) o scambio di campi di record bulk (RFX bulk), non è implementato.

> [!NOTE]
> Se si dichiara un oggetto recordset senza derivazione da `CRecordset` , non è stata caricata la libreria di cursori ODBC. Per la libreria di cursori è necessario che il recordset includa almeno una colonna associata. Tuttavia, quando si utilizza `CRecordset` direttamente, nessuna delle colonne viene associata. Le funzioni membro [CDatabase:: OpenEx](../../mfc/reference/cdatabase-class.md#openex) e [CDatabase:: Open](../../mfc/reference/cdatabase-class.md#open) controllano se la libreria di cursori verrà caricata.

`GetFieldValue` chiama la funzione API ODBC `SQLGetData` . Se il driver restituisce il valore SQL_NO_TOTAL per la lunghezza effettiva del valore del campo, `GetFieldValue` genera un'eccezione. Per ulteriori informazioni su `SQLGetData` , vedere la Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito vengono illustrate le chiamate a `GetFieldValue` per un oggetto recordset dichiarato direttamente da `CRecordset` .

[!code-cpp[NVC_MFCDatabase#23](../../mfc/codesnippet/cpp/crecordset-class_7.cpp)]

> [!NOTE]
> A differenza della classe DAO `CDaoRecordset` , non `CRecordset` dispone di una `SetFieldValue` funzione membro. Se si crea un oggetto direttamente da `CRecordset` , in realtà è di sola lettura.

Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="crecordsetgetodbcfieldcount"></a><a name="getodbcfieldcount"></a> CRecordset:: GetODBCFieldCount

Recupera il numero totale di campi nell'oggetto recordset.

```
short GetODBCFieldCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di campi nel recordset.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni sulla creazione di recordset, vedere l'articolo [Recordset: creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md).

## <a name="crecordsetgetodbcfieldinfo"></a><a name="getodbcfieldinfo"></a> CRecordset:: GetODBCFieldInfo

Ottiene informazioni sui campi del recordset.

```cpp
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

*FieldInfo*<br/>
Riferimento a una `CODBCFieldInfo` struttura.

*nIndex*<br/>
Indice in base zero del campo.

### <a name="remarks"></a>Commenti

Una versione della funzione consente di cercare un campo in base al nome. L'altra versione consente di cercare un campo in base all'indice.

Per una descrizione delle informazioni restituite, vedere la struttura [CODBCFieldInfo](../../mfc/reference/codbcfieldinfo-structure.md) .

Per ulteriori informazioni sulla creazione di recordset, vedere l'articolo [Recordset: creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md).

## <a name="crecordsetgetrecordcount"></a><a name="getrecordcount"></a> CRecordset:: GetRecordCount

Determina la dimensione del recordset.

```
long GetRecordCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di record nel recordset. 0 se il recordset non contiene record; oppure-1 se non è possibile determinare il numero di record.

### <a name="remarks"></a>Commenti

> [!CAUTION]
> Il numero di record viene mantenuto come un "limite massimo", il record con il numero più alto visualizzato mentre l'utente passa attraverso i record. Il numero totale di record è noto solo dopo che l'utente ha superato l'ultimo record. Per motivi di prestazioni, il conteggio non viene aggiornato quando si chiama `MoveLast` . Per conteggiare i record, chiamare `MoveNext` ripetutamente fino a che `IsEOF` restituisce un valore diverso da zero. L'aggiunta di un record tramite `CRecordset:AddNew` e `Update` l'aumento del numero; l'eliminazione di un record tramite `CRecordset::Delete` diminuisce il numero.

## <a name="crecordsetgetrowsetsize"></a><a name="getrowsetsize"></a> CRecordset:: GetRowsetSize

Ottiene l'impostazione corrente per il numero di righe che si desidera recuperare durante una determinata operazione di recupero.

```
DWORD GetRowsetSize() const;
```

### <a name="return-value"></a>Valore restituito

Numero di righe da recuperare durante una determinata operazione di recupero.

### <a name="remarks"></a>Commenti

Se si utilizza il recupero di righe bulk, le dimensioni predefinite del set di righe quando il recordset viene aperto è 25. in caso contrario, è 1.

Per implementare il recupero di righe bulk, è necessario specificare l' `CRecordset::useMultiRowFetch` opzione nel parametro *dwOptions* della funzione membro [Open](#open) . Per modificare l'impostazione per le dimensioni del set di righe, chiamare [SetRowsetSize](#setrowsetsize).

Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="crecordsetgetrowsfetched"></a><a name="getrowsfetched"></a> CRecordset:: GetRowsFetched

Determina il numero di record effettivamente recuperati dopo un'operazione di recupero.

```
DWORD GetRowsFetched() const;
```

### <a name="return-value"></a>Valore restituito

Numero di righe recuperate dall'origine dati dopo una determinata operazione di recupero.

### <a name="remarks"></a>Commenti

Questa operazione è utile quando è stato implementato il recupero di righe BULK. La dimensione del set di righe indica in genere il numero di righe che verranno recuperate da un recupero; Tuttavia, il numero totale di righe nel recordset influiscono sul numero di righe che verranno recuperate in un set di righe. Se, ad esempio, il recordset ha 10 record con un'impostazione delle dimensioni del set di righe pari a 4, il ciclo del recordset mediante la chiamata a comporterà `MoveNext` la presenza nel set di righe finale di soli 2 record.

Per implementare il recupero di righe bulk, è necessario specificare l' `CRecordset::useMultiRowFetch` opzione nel parametro *dwOptions* della funzione membro [Open](#open) . Per specificare le dimensioni del set di righe, chiamare [SetRowsetSize](#setrowsetsize).

Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#24](../../mfc/codesnippet/cpp/crecordset-class_8.cpp)]

## <a name="crecordsetgetrowstatus"></a><a name="getrowstatus"></a> CRecordset:: GetRowStatus

Ottiene lo stato di una riga nel set di righe corrente.

```
WORD GetRowStatus(WORD wRow) const;
```

### <a name="parameters"></a>Parametri

*wRow*<br/>
Posizione in base 1 di una riga nel set di righe corrente. Il valore può essere compreso tra 1 e la dimensione del set di righe.

### <a name="return-value"></a>Valore restituito

Valore di stato per la riga. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Commenti

`GetRowStatus` Restituisce un valore che indica qualsiasi modifica allo stato della riga da quando è stata recuperata dall'origine dati o che non è stata recuperata nessuna riga corrispondente a *wRow* . Nella tabella seguente sono elencati i valori restituiti possibili.

|Valore di stato|Descrizione|
|------------------|-----------------|
|SQL_ROW_SUCCESS|La riga è invariata.|
|SQL_ROW_UPDATED|La riga è stata aggiornata.|
|SQL_ROW_DELETED|La riga è stata eliminata.|
|SQL_ROW_ADDED|La riga è stata aggiunta.|
|SQL_ROW_ERROR|La riga non è recuperabile a causa di un errore.|
|SQL_ROW_NOROW|Nessuna riga corrispondente a *wRow*.|

Per ulteriori informazioni, vedere la funzione API ODBC `SQLExtendedFetch` nella Windows SDK.

## <a name="crecordsetgetstatus"></a><a name="getstatus"></a> CRecordset:: GetStatus

Determina l'indice del record corrente nel recordset e se è stato individuato l'ultimo record.

```cpp
void GetStatus(CRecordsetStatus& rStatus) const;
```

### <a name="parameters"></a>Parametri

*rStatus*<br/>
Riferimento a un oggetto `CRecordsetStatus`. Per altre informazioni, vedere la sezione Osservazioni.

### <a name="remarks"></a>Commenti

`CRecordset` tenta di rilevare l'indice, ma in alcune circostanze potrebbe non essere possibile. Per una spiegazione, vedere [GetRecordCount](#getrecordcount) .

La `CRecordsetStatus` struttura ha il formato seguente:

```cpp
struct CRecordsetStatus
{
    long m_lCurrentRecord;
    BOOL m_bRecordCountFinal;
};
```

I due membri di `CRecordsetStatus` hanno i significati seguenti:

- `m_lCurrentRecord` Contiene l'indice in base zero del record corrente nel recordset, se noto. Se non è possibile determinare l'indice, questo membro contiene AFX_CURRENT_RECORD_UNDEFINED (-2). Se `IsBOF` è true (recordset vuoto o tentativo di scorrimento prima del primo record), `m_lCurrentRecord` viene impostato su AFX_CURRENT_RECORD_BOF (-1). Se il primo record è impostato su 0, secondo record 1 e così via.

- `m_bRecordCountFinal` Diverso da zero se il numero totale di record nel recordset è stato determinato. In genere, questa operazione deve essere eseguita iniziando dall'inizio del recordset e chiamando `MoveNext` finché `IsEOF` restituisce un valore diverso da zero. Se questo membro è zero, il numero di record restituito da `GetRecordCount` , se diverso da-1, è solo un numero "limite massimo" di record.

## <a name="crecordsetgetsql"></a><a name="getsql"></a> CRecordset:: GetSQL

Chiamare questa funzione membro per ottenere l'istruzione SQL utilizzata per selezionare i record del recordset quando è stato aperto.

```
const CString& GetSQL() const;
```

### <a name="return-value"></a>Valore restituito

**`const`** Riferimento a un oggetto `CString` che contiene l'istruzione SQL.

### <a name="remarks"></a>Commenti

Si tratta in genere di un'istruzione SQL **Select** . La stringa restituita da è di sola `GetSQL` lettura.

La stringa restituita da `GetSQL` è in genere diversa da qualsiasi stringa che potrebbe essere stata passata al recordset nel parametro *lpszSQL* per la `Open` funzione membro. Questo è dovuto al fatto che il recordset crea un'istruzione SQL completa in base a ciò che è `Open` stato passato, a quanto specificato con ClassWizard, a quanto specificato nei `m_strFilter` membri dati e e ai `m_strSort` parametri specificati. Per informazioni dettagliate sul modo in cui il recordset crea questa istruzione SQL, vedere l'articolo [Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md).

> [!NOTE]
> Chiamare questa funzione membro solo dopo la chiamata a [Open](#open).

## <a name="crecordsetgettablename"></a><a name="gettablename"></a> CRecordset:: GetTableName

Ottiene il nome della tabella SQL su cui si basa la query del recordset.

```
const CString& GetTableName() const;
```

### <a name="return-value"></a>Valore restituito

**`const`** Riferimento a un oggetto `CString` che contiene il nome della tabella, se il recordset è basato su una tabella; in caso contrario, una stringa vuota.

### <a name="remarks"></a>Commenti

`GetTableName` è valido solo se il recordset è basato su una tabella, non un join di più tabelle o una query predefinita (stored procedure). Il nome è di sola lettura.

> [!NOTE]
> Chiamare questa funzione membro solo dopo la chiamata a [Open](#open).

## <a name="crecordsetisbof"></a><a name="isbof"></a> CRecordset:: IsBOF

Restituisce un valore diverso da zero se il recordset è stato posizionato prima del primo record. Non è presente nessun record corrente.

```
BOOL IsBOF() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset non contiene record o se è stato eseguito lo scorrimento indietro prima del primo record; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Chiamare questa funzione membro prima di scorrere da record a record per sapere se si è passati prima del primo record del recordset. È inoltre possibile utilizzare `IsBOF` insieme `IsEOF` a per determinare se il recordset contiene record o se è vuoto. Immediatamente dopo la chiamata a `Open` , se il recordset non contiene record, `IsBOF` restituisce un valore diverso da zero. Quando si apre un recordset con almeno un record, il primo record è il record corrente e `IsBOF` restituisce 0.

Se il primo record è il record corrente e si chiama, restituirà un `MovePrev` `IsBOF` valore diverso da zero. Se `IsBOF` restituisce un valore diverso da zero e si chiama `MovePrev` , si verifica un errore. Se `IsBOF` restituisce un valore diverso da zero, il record corrente non è definito e qualsiasi azione che richiede un record corrente provocherà un errore.

### <a name="example"></a>Esempio

In questo esempio vengono usati `IsBOF` e `IsEOF` per rilevare i limiti di un recordset quando il codice scorre il recordset in entrambe le direzioni.

[!code-cpp[NVC_MFCDatabase#25](../../mfc/codesnippet/cpp/crecordset-class_9.cpp)]

## <a name="crecordsetisdeleted"></a><a name="isdeleted"></a> CRecordset:: indeleted

Determina se il record corrente è stato eliminato.

```
BOOL IsDeleted() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset è posizionato in corrispondenza di un record eliminato; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Se si scorre fino a un record e viene `IsDeleted` restituito true (diverso da zero), è necessario scorrere fino a un altro record prima di poter eseguire qualsiasi altra operazione del recordset.

Il risultato di `IsDeleted` dipende da molti fattori, ad esempio il tipo di recordset, se il recordset è aggiornabile, se è stata specificata l' `CRecordset::skipDeletedRecords` opzione quando è stato aperto il recordset, se il driver comprime i record eliminati e se sono presenti più utenti.

Per ulteriori informazioni su `CRecordset::skipDeletedRecords` e la compressione dei driver, vedere la funzione membro [Open](#open) .

> [!NOTE]
> Se è stato implementato il recupero di righe bulk, non chiamare `IsDeleted` . Chiamare invece la funzione membro [GetRowStatus](#getrowstatus) . Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="crecordsetiseof"></a><a name="iseof"></a> CRecordset:: IsEOF

Restituisce un valore diverso da zero se il recordset è stato posizionato dopo l'ultimo record. Non è presente nessun record corrente.

```
BOOL IsEOF() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset non contiene record o se è stato eseguito lo scorrimento oltre l'ultimo record; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Chiamare questa funzione membro quando si scorre da record a record per sapere se è stato superato l'ultimo record del recordset. È inoltre possibile utilizzare `IsEOF` per determinare se il recordset contiene record o se è vuoto. Immediatamente dopo la chiamata a `Open` , se il recordset non contiene record, `IsEOF` restituisce un valore diverso da zero. Quando si apre un recordset con almeno un record, il primo record è il record corrente e `IsEOF` restituisce 0.

Se l'ultimo record è il record corrente quando si chiama, restituirà un `MoveNext` `IsEOF` valore diverso da zero. Se `IsEOF` restituisce un valore diverso da zero e si chiama `MoveNext` , si verifica un errore. Se `IsEOF` restituisce un valore diverso da zero, il record corrente non è definito e qualsiasi azione che richiede un record corrente provocherà un errore.

### <a name="example"></a>Esempio

Vedere l'esempio per [IsBOF](#isbof).

## <a name="crecordsetisfielddirty"></a><a name="isfielddirty"></a> CRecordset:: IsFieldDirty

Determina se il membro dati del campo specificato è stato modificato dopo la chiamata di [Edit](#edit) o [AddNew](#addnew) .

```
BOOL IsFieldDirty(void* pv);
```

### <a name="parameters"></a>Parametri

*PV*<br/>
Puntatore al membro dati del campo di cui si desidera controllare lo stato o NULL per determinare se uno dei campi è dirty.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il membro dati del campo specificato è stato modificato dopo la chiamata a `AddNew` o `Edit` ; in caso contrario, 0.

### <a name="remarks"></a>Commenti

I dati in tutti i membri dati di campo Dirty verranno trasferiti al record nell'origine dati quando il record corrente viene aggiornato da una chiamata alla funzione membro [Update](#update) di `CRecordset` (in seguito a una chiamata a `Edit` o `AddNew` ).

> [!NOTE]
> Questa funzione membro non è applicabile ai recordset che utilizzano il recupero di righe BULK. Se è stato implementato il recupero di righe bulk, `IsFieldDirty` restituirà sempre false e provocherà un'asserzione non riuscita. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

La chiamata `IsFieldDirty` a Reimposta gli effetti delle chiamate precedenti a [SetFieldDirty](#setfielddirty) poiché lo stato dirty del campo viene rivalutato. Nel `AddNew` caso in cui il valore del campo corrente sia diverso dal valore pseudo null, lo stato del campo viene impostato come dirty. Nel `Edit` caso in cui il valore del campo sia diverso dal valore memorizzato nella cache, lo stato del campo viene impostato come dirty.

`IsFieldDirty` viene implementato tramite [DoFieldExchange](#dofieldexchange).

Per ulteriori informazioni sul flag Dirty, vedere l'articolo [Recordset: selezione dei record (ODBC) in recordset](../../data/odbc/recordset-how-recordsets-select-records-odbc.md).

## <a name="crecordsetisfieldnull"></a><a name="isfieldnull"></a> CRecordset:: IsFieldNull

Restituisce un valore diverso da zero se il campo specificato nel record corrente è null (senza valore).

```
BOOL IsFieldNull(void* pv);
```

### <a name="parameters"></a>Parametri

*PV*<br/>
Puntatore al membro dati del campo di cui si desidera controllare lo stato o NULL per determinare se uno dei campi è null.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il membro dati del campo specificato è contrassegnato come null. in caso contrario, 0.

### <a name="remarks"></a>Commenti

Chiamare questa funzione membro per determinare se il membro dati del campo specificato di un recordset è stato contrassegnato come null. Nella terminologia del database, null significa "senza valore" e non è uguale a NULL in C++. Se un membro dati del campo viene contrassegnato come null, viene interpretato come una colonna del record corrente per cui non è presente alcun valore.

> [!NOTE]
> Questa funzione membro non è applicabile ai recordset che utilizzano il recupero di righe BULK. Se è stato implementato il recupero di righe bulk, `IsFieldNull` restituirà sempre false e provocherà un'asserzione non riuscita. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

`IsFieldNull` viene implementato tramite [DoFieldExchange](#dofieldexchange).

## <a name="crecordsetisfieldnullable"></a><a name="isfieldnullable"></a> CRecordset:: IsFieldNullable

Restituisce un valore diverso da zero se il campo specificato nel record corrente può essere impostato su null (senza valore).

```
BOOL IsFieldNullable(void* pv);
```

### <a name="parameters"></a>Parametri

*PV*<br/>
Puntatore al membro dati del campo di cui si desidera controllare lo stato o NULL per determinare se uno dei campi può essere impostato su un valore null.

### <a name="remarks"></a>Commenti

Chiamare questa funzione membro per determinare se il membro dati del campo specificato è "Nullable" (può essere impostato su un valore null; Il valore null di C++ non corrisponde a null, che, nella terminologia del database, significa "senza valore").

> [!NOTE]
> Se è stato implementato il recupero di righe bulk, non è possibile chiamare `IsFieldNullable` . Chiamare invece la funzione membro [GetODBCFieldInfo](#getodbcfieldinfo) per determinare se un campo può essere impostato su un valore null. Si noti che è sempre possibile chiamare `GetODBCFieldInfo` , indipendentemente dal fatto che sia stato implementato il recupero di righe BULK. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Un campo che non può essere null deve avere un valore. Se si tenta di impostare un campo di questo tipo su null durante l'aggiunta o l'aggiornamento di un record, l'origine dati rifiuterà l'aggiunta o l'aggiornamento e l' [aggiornamento](#update) genererà un'eccezione. L'eccezione si verifica quando si chiama `Update` , non quando si chiama [SetFieldNull](#setfieldnull).

Se si utilizza NULL per il primo argomento della funzione, la funzione viene applicata solo ai `outputColumn` campi, non ai `param` campi. Ad esempio, la chiamata

[!code-cpp[NVC_MFCDatabase#26](../../mfc/codesnippet/cpp/crecordset-class_10.cpp)]

verranno impostati solo i `outputColumn` campi su null; i campi non saranno `param` interessati.

Per lavorare sui `param` campi, è necessario specificare l'indirizzo effettivo del singolo `param` utente su cui si desidera lavorare, ad esempio:

[!code-cpp[NVC_MFCDatabase#27](../../mfc/codesnippet/cpp/crecordset-class_11.cpp)]

Ciò significa che non è possibile impostare tutti i `param` campi su null, come per i `outputColumn` campi.

`IsFieldNullable` viene implementato tramite [DoFieldExchange](#dofieldexchange).

## <a name="crecordsetisopen"></a><a name="isopen"></a> CRecordset:: Open

Determina se il recordset è già aperto.

```
BOOL IsOpen() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione membro [Open](#open) o [Requery](#requery) dell'oggetto recordset è stata chiamata in precedenza e il recordset non è stato chiuso; in caso contrario, 0.

## <a name="crecordsetm_hstmt"></a><a name="m_hstmt"></a> CRecordset:: m_hstmt

Contiene un handle per la struttura dei dati dell'istruzione ODBC, di tipo HSTMT, associato al recordset.

### <a name="remarks"></a>Commenti

Ogni query a un'origine dati ODBC è associata a un HSTMT.

> [!CAUTION]
> Non usare `m_hstmt` prima della chiamata a [Open](#open) .

Normalmente non è necessario accedere direttamente a HSTMT, ma potrebbe essere necessario per l'esecuzione diretta di istruzioni SQL. La `ExecuteSQL` funzione membro della classe `CDatabase` fornisce un esempio di utilizzo di `m_hstmt` .

## <a name="crecordsetm_nfields"></a><a name="m_nfields"></a> CRecordset:: m_nFields

Contiene il numero di membri dati di campo nella classe recordset. ovvero il numero di colonne selezionate dal recordset dall'origine dati.

### <a name="remarks"></a>Commenti

Il costruttore per la classe recordset deve essere inizializzato `m_nFields` con il numero corretto. Se non è stato implementato il recupero di righe bulk, ClassWizard scrive questa inizializzazione quando viene usata per dichiarare la classe recordset. È anche possibile scriverlo manualmente.

Il Framework utilizza questo numero per gestire l'interazione tra i membri dati del campo e le colonne corrispondenti del record corrente nell'origine dati.

> [!CAUTION]
> Questo numero deve corrispondere al numero di "colonne di output" registrato in `DoFieldExchange` o `DoBulkFieldExchange` dopo una chiamata a [SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype) con il parametro `CFieldExchange::outputColumn` .

È possibile associare le colonne in modo dinamico, come illustrato nell'articolo "Recordset: associazione dinamica di colonne di dati". In tal caso, è necessario aumentare il `m_nFields` numero in per riflettere il numero di chiamate di funzione RFX o RFX di massa nella `DoFieldExchange` `DoBulkFieldExchange` funzione membro o per le colonne con associazione dinamica.

Per ulteriori informazioni, vedere gli articoli [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md) e [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

Vedere l'articolo [relativo allo scambio di campi di record: utilizzo di RFX](../../data/odbc/record-field-exchange-using-rfx.md).

## <a name="crecordsetm_nparams"></a><a name="m_nparams"></a> CRecordset:: m_nParams

Contiene il numero di membri dati del parametro nella classe recordset. ovvero il numero di parametri passati con la query del recordset.

### <a name="remarks"></a>Commenti

Se la classe recordset contiene membri dati di parametro, il costruttore per la classe deve essere inizializzato `m_nParams` con il numero corretto. Il valore `m_nParams` predefinito è 0. Se si aggiungono membri dati dei parametri (che è necessario eseguire manualmente), è necessario aggiungere manualmente anche un'inizializzazione nel costruttore della classe per riflettere il numero di parametri (che deve essere almeno uguale al numero di segnaposto '' nella `m_strFilter` `m_strSort` stringa o).

Il Framework utilizza questo numero quando parametrizza la query del recordset.

> [!CAUTION]
> Questo numero deve corrispondere al numero di "params" registrato in `DoFieldExchange` o `DoBulkFieldExchange` dopo una chiamata a [SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype) con un valore di parametro `CFieldExchange::inputParam` ,, `CFieldExchange::param` `CFieldExchange::outputParam` o `CFieldExchange::inoutParam` .

### <a name="example"></a>Esempio

  Vedere gli articoli [Recordset: parametrizzazione un recordset (ODBC) e uno](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) [scambio di campi di record: uso di RFX](../../data/odbc/record-field-exchange-using-rfx.md).

## <a name="crecordsetm_pdatabase"></a><a name="m_pdatabase"></a> CRecordset:: m_pDatabase

Contiene un puntatore all' `CDatabase` oggetto tramite il quale il recordset è connesso a un'origine dati.

### <a name="remarks"></a>Commenti

Questa variabile viene impostata in due modi. In genere, viene passato un puntatore a un oggetto già connesso `CDatabase` quando si costruisce l'oggetto recordset. Se invece si passa NULL, `CRecordset` Crea un `CDatabase` oggetto per l'utente e lo connette. In entrambi i casi, `CRecordset` archivia il puntatore in questa variabile.

In genere non è necessario usare direttamente il puntatore archiviato in `m_pDatabase` . Se si scrivono estensioni personalizzate in `CRecordset` , tuttavia, potrebbe essere necessario usare il puntatore. Ad esempio, potrebbe essere necessario il puntatore se si generano i propri `CDBException` . In alternativa, potrebbe essere necessario eseguire un'operazione utilizzando lo stesso `CDatabase` oggetto, ad esempio l'esecuzione di transazioni, l'impostazione di timeout o la chiamata della `ExecuteSQL` funzione membro della classe `CDatabase` per eseguire direttamente le istruzioni SQL.

## <a name="crecordsetm_strfilter"></a><a name="m_strfilter"></a> CRecordset:: m_strFilter

Dopo la costruzione dell'oggetto recordset, ma prima di chiamare la relativa `Open` funzione membro, utilizzare questo membro dati per archiviare un oggetto `CString` contenente una clausola **where** di SQL.

### <a name="remarks"></a>Commenti

Il recordset usa questa stringa per vincolare (o filtrare) i record selezionati durante la `Open` chiamata a o `Requery` . Questa operazione è utile per la selezione di un subset di record, ad esempio "tutti i venditori basati in California" ("stato = CA"). La sintassi ODBC SQL per una clausola **where** è

`WHERE search-condition`

Si noti che nella stringa non è inclusa la parola chiave **where** . Il Framework lo fornisce.

È anche possibile parametrizzare la stringa di filtro inserendovi i segnaposto "", dichiarando un membro dati del parametro nella classe per ogni segnaposto e passando i parametri al recordset in fase di esecuzione. In questo modo è possibile costruire il filtro in fase di esecuzione. Per ulteriori informazioni, vedere l'articolo [Recordset: parametrizzazione un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

Per ulteriori informazioni sulle clausole SQL **where** , vedere l'articolo [SQL](../../data/odbc/sql.md). Per ulteriori informazioni sulla selezione e il filtraggio dei record, vedere l'articolo [Recordset: filtro di record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#30](../../mfc/codesnippet/cpp/crecordset-class_12.cpp)]

## <a name="crecordsetm_strsort"></a><a name="m_strsort"></a> CRecordset:: m_strSort

Dopo la costruzione dell'oggetto recordset, ma prima di chiamare la relativa `Open` funzione membro, utilizzare questo membro dati per archiviare un oggetto `CString` contenente una clausola SQL **Order by** .

### <a name="remarks"></a>Commenti

Il recordset utilizza questa stringa per ordinare i record selezionati durante la `Open` chiamata a o `Requery` . Questa funzionalità può essere utilizzata per ordinare un recordset in una o più colonne. La sintassi ODBC SQL per una clausola **Order by** è

`ORDER BY sort-specification [, sort-specification]...`

dove una specifica di ordinamento è un numero intero o un nome di colonna. È anche possibile specificare l'ordine crescente o decrescente (per impostazione predefinita, l'ordine è crescente) aggiungendo "ASC" o "DESC" all'elenco di colonne nella stringa di ordinamento. I record selezionati vengono ordinati prima in base alla prima colonna elencata, quindi alla seconda e così via. Ad esempio, è possibile ordinare un recordset "Customers" in base al cognome e quindi al nome. Il numero di colonne che è possibile elencare dipende dall'origine dati. Per ulteriori informazioni, vedere la Windows SDK.

Si noti che la parola chiave **Order by** non è inclusa nella stringa. Il Framework lo fornisce.

Per ulteriori informazioni sulle clausole SQL, vedere l'articolo [SQL](../../data/odbc/sql.md). Per ulteriori informazioni sull'ordinamento dei record, vedere l'articolo [Recordset: ordinamento dei record (ODBC)](../../data/odbc/recordset-sorting-records-odbc.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#31](../../mfc/codesnippet/cpp/crecordset-class_13.cpp)]

## <a name="crecordsetmove"></a><a name="move"></a> CRecordset:: Move

Sposta il puntatore di record corrente all'interno del recordset, in avanti o indietro.

```
virtual void Move(
    long nRows,
    WORD wFetchType = SQL_FETCH_RELATIVE);
```

### <a name="parameters"></a>Parametri

*nRows*<br/>
Numero di righe da spostare in avanti o indietro. I valori positivi si spostano in avanti, verso la fine del recordset. I valori negativi si spostano indietro verso l'inizio.

*wFetchType*<br/>
Determina il set di righe che `Move` recupererà. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Commenti

Se si passa un valore pari a 0 per *nrows*, `Move` il record corrente viene aggiornato; `Move` termina qualsiasi `AddNew` modalità o corrente `Edit` e ripristinerà il valore del record corrente prima che venga `AddNew` `Edit` chiamato o.

> [!NOTE]
> Quando si sposta un recordset, non è possibile ignorare i record eliminati. Per ulteriori informazioni, vedere [CRecordset:: undeleted](#isdeleted) . Quando si apre un oggetto `CRecordset` con il `skipDeletedRecords` set di opzioni, `Move` asserisce se il parametro *nrows* è 0. Questo comportamento impedisce l'aggiornamento delle righe eliminate da altre applicazioni client che utilizzano gli stessi dati. Per una descrizione di, vedere il parametro *dwOption* in [Open](#open) `skipDeletedRecords` .

`Move` Riposiziona il recordset in base ai set di righe. In base ai valori per *nrows* e *wFetchType*, `Move` Recupera il set di righe appropriato e quindi crea il primo record nel set di righe il record corrente. Se non è stato implementato il recupero di righe bulk, la dimensione del set di righe è sempre 1. Quando si recupera un set di righe, `Move` chiama direttamente la funzione membro [CheckRowsetError](#checkrowseterror) per gestire gli errori risultanti dal recupero.

A seconda dei valori passati, `Move` equivale ad altre `CRecordset` funzioni membro. In particolare, il valore di *wFetchType* può indicare una funzione membro più intuitiva e spesso il metodo preferito per lo trasferimento del record corrente.

Nella tabella seguente sono elencati i valori possibili per *wFetchType*, il set di righe che `Move` recupererà in base a *wFetchType* e *nrows* e qualsiasi funzione membro equivalente corrispondente a *wFetchType*.

|wFetchType|Set di righe recuperato|Funzione membro equivalente|
|----------------|--------------------|--------------------------------|
|SQL_FETCH_RELATIVE (valore predefinito)|Il set di righe avvia *nrows* righe dalla prima riga del set di righe corrente.||
|SQL_FETCH_NEXT|Set di righe successivo. *nrows* viene ignorato.|[MoveNext](#movenext)|
|SQL_FETCH_PRIOR|Set di righe precedente; *nrows* viene ignorato.|[MovePrev](#moveprev)|
|SQL_FETCH_FIRST|Primo set di righe nel recordset; *nrows* viene ignorato.|[MoveFirst](#movefirst)|
|SQL_FETCH_LAST|Ultimo set di righe completo del recordset; *nrows* viene ignorato.|[MoveLast](#movelast)|
|SQL_FETCH_ABSOLUTE|Se *nRows* > 0, il set di righe avvia *nrows* righe dall'inizio del recordset. Se *nRows* < 0, il set di righe avvia *nrows* righe dalla fine del recordset. Se *nrows* = 0, viene restituita una condizione di inizio del file (BOF).|[SetAbsolutePosition](#setabsoluteposition)|
|SQL_FETCH_BOOKMARK|Il set di righe a partire dalla riga il cui valore del segnalibro corrisponde a *nrows*.|[SetBookmark](#setbookmark)|

> [!NOTE]
> Per i recordset di sola trasmissione, `Move` è valido solo con il valore SQL_FETCH_NEXT per *wFetchType*.

> [!CAUTION]
> La chiamata a `Move` genera un'eccezione se il recordset non contiene record. Per determinare se il recordset contiene record, chiamare [IsBOF](#isbof) e [IsEOF](#iseof).

> [!NOTE]
> Se è stato eseguito lo scorrimento oltre l'inizio o la fine del recordset ( `IsBOF` o `IsEOF` restituisce un valore diverso da zero), la chiamata di una `Move` funzione genererà un'istanza di `CDBException` . Se, ad esempio, `IsEOF` restituisce un valore diverso da zero e non lo è `IsBOF` , `MoveNext` verrà generata un'eccezione, ma `MovePrev` non.

> [!NOTE]
> Se si chiama `Move` mentre è in corso l'aggiornamento o l'aggiunta del record corrente, gli aggiornamenti vengono persi senza preavviso.

Per ulteriori informazioni sull'esplorazione dei recordset, vedere gli articoli [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). Per informazioni correlate, vedere la funzione API ODBC `SQLExtendedFetch` nell'Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#28](../../mfc/codesnippet/cpp/crecordset-class_14.cpp)]

## <a name="crecordsetmovefirst"></a><a name="movefirst"></a> CRecordset:: MoveFirst

Crea il primo record del primo set di righe del record corrente.

```cpp
void MoveFirst();
```

### <a name="remarks"></a>Commenti

Indipendentemente dal fatto che il recupero di righe in blocco sia stato implementato, sarà sempre il primo record del recordset.

Non è necessario chiamare `MoveFirst` immediatamente dopo l'apertura del recordset. In quel momento, il primo record, se presente, rappresenta automaticamente il record corrente.

> [!NOTE]
> Questa funzione membro non è valida per i recordset di sola trasmissione.

> [!NOTE]
> Quando si sposta un recordset, non è possibile ignorare i record eliminati. Per informazioni dettagliate, [vedere la funzione](#isdeleted) membro.

> [!CAUTION]
> La chiamata di una qualsiasi `Move` funzione genera un'eccezione se il recordset non contiene record. Per determinare se il recordset contiene record, chiamare `IsBOF` e `IsEOF` .

> [!NOTE]
> Se si chiama una delle `Move` funzioni durante l'aggiornamento o l'aggiunta del record corrente, gli aggiornamenti vengono persi senza preavviso.

Per ulteriori informazioni sull'esplorazione dei recordset, vedere gli articoli [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsBOF](#isbof).

## <a name="crecordsetmovelast"></a><a name="movelast"></a> CRecordset:: MoveLast

Crea il primo record nell'ultimo set di righe completo del record corrente.

```cpp
void MoveLast();
```

### <a name="remarks"></a>Commenti

Se non è stato implementato il recupero di righe bulk, il recordset ha una dimensione del set di righe pari a 1, quindi `MoveLast` passa semplicemente all'ultimo record del recordset.

> [!NOTE]
> Questa funzione membro non è valida per i recordset di sola trasmissione.

> [!NOTE]
> Quando si sposta un recordset, non è possibile ignorare i record eliminati. Per informazioni dettagliate, [vedere la funzione](#isdeleted) membro.

> [!CAUTION]
> La chiamata di una qualsiasi `Move` funzione genera un'eccezione se il recordset non contiene record. Per determinare se il recordset contiene record, chiamare `IsBOF` e `IsEOF` .

> [!NOTE]
> Se si chiama una delle `Move` funzioni durante l'aggiornamento o l'aggiunta del record corrente, gli aggiornamenti vengono persi senza preavviso.

Per ulteriori informazioni sull'esplorazione dei recordset, vedere gli articoli [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsBOF](#isbof).

## <a name="crecordsetmovenext"></a><a name="movenext"></a> CRecordset:: MoveNext

Crea il primo record nel set di righe successivo al record corrente.

```cpp
void MoveNext();
```

### <a name="remarks"></a>Commenti

Se non è stato implementato il recupero di righe bulk, il recordset ha una dimensione del set di righe pari a 1, quindi `MoveNext` passa semplicemente al record successivo.

> [!NOTE]
> Quando si sposta un recordset, non è possibile ignorare i record eliminati. Per informazioni dettagliate, [vedere la funzione](#isdeleted) membro.

> [!CAUTION]
> La chiamata di una qualsiasi `Move` funzione genera un'eccezione se il recordset non contiene record. Per determinare se il recordset contiene record, chiamare `IsBOF` e `IsEOF` .

> [!NOTE]
> È inoltre consigliabile chiamare `IsEOF` prima di chiamare `MoveNext` . Se, ad esempio, è stato eseguito lo scorrimento oltre la fine del recordset, `IsEOF` restituirà un valore diverso da zero; una chiamata successiva a genererebbe `MoveNext` un'eccezione.

> [!NOTE]
> Se si chiama una delle `Move` funzioni durante l'aggiornamento o l'aggiunta del record corrente, gli aggiornamenti vengono persi senza preavviso.

Per ulteriori informazioni sull'esplorazione dei recordset, vedere gli articoli [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsBOF](#isbof).

## <a name="crecordsetmoveprev"></a><a name="moveprev"></a> CRecordset:: MovePrev

Crea il primo record nel set di righe precedente il record corrente.

```cpp
void MovePrev();
```

### <a name="remarks"></a>Commenti

Se non è stato implementato il recupero di righe bulk, il recordset ha una dimensione del set di righe pari a 1, quindi `MovePrev` passa semplicemente al record precedente.

> [!NOTE]
> Questa funzione membro non è valida per i recordset di sola trasmissione.

> [!NOTE]
> Quando si sposta un recordset, non è possibile ignorare i record eliminati. Per informazioni dettagliate, [vedere la funzione](#isdeleted) membro.

> [!CAUTION]
> La chiamata di una qualsiasi `Move` funzione genera un'eccezione se il recordset non contiene record. Per determinare se il recordset contiene record, chiamare `IsBOF` e `IsEOF` .

> [!NOTE]
> È inoltre consigliabile chiamare `IsBOF` prima di chiamare `MovePrev` . Se, ad esempio, è stato eseguito lo scorrimento avanti rispetto all'inizio del recordset, `IsBOF` restituirà un valore diverso da zero; una chiamata successiva a genererebbe `MovePrev` un'eccezione.

> [!NOTE]
> Se si chiama una delle `Move` funzioni durante l'aggiornamento o l'aggiunta del record corrente, gli aggiornamenti vengono persi senza preavviso.

Per ulteriori informazioni sull'esplorazione dei recordset, vedere gli articoli [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md). Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

  Vedere l'esempio per [IsBOF](#isbof).

## <a name="crecordsetonsetoptions"></a><a name="onsetoptions"></a> CRecordset:: OnSetOptions

Chiamato per impostare le opzioni (utilizzate sulla selezione) per l'istruzione ODBC specificata.

```
virtual void OnSetOptions(HSTMT hstmt);
```

### <a name="parameters"></a>Parametri

*hstmt*<br/>
HSTMT dell'istruzione ODBC le cui opzioni devono essere impostate.

### <a name="remarks"></a>Commenti

Chiamare `OnSetOptions` per impostare le opzioni (utilizzate sulla selezione) per l'istruzione ODBC specificata. Il Framework chiama questa funzione membro per impostare le opzioni iniziali per il recordset. `OnSetOptions` determina il supporto dell'origine dati per i cursori scorrevoli e per la concorrenza del cursore e imposta di conseguenza le opzioni del recordset. (Mentre `OnSetOptions` viene usato per le operazioni di selezione, `OnSetUpdateOptions` viene usato per le operazioni di aggiornamento).

Eseguire l'override `OnSetOptions` di per impostare le opzioni specifiche del driver o dell'origine dati. Se, ad esempio, l'origine dati supporta l'apertura per l'accesso esclusivo, è possibile eseguire l'override `OnSetOptions` di per sfruttare tale capacità.

Per ulteriori informazioni sui cursori, vedere l'articolo [ODBC](../../data/odbc/odbc-basics.md).

## <a name="crecordsetonsetupdateoptions"></a><a name="onsetupdateoptions"></a> CRecordset:: OnSetUpdateOptions

Chiamato per impostare le opzioni (utilizzate sull'aggiornamento) per l'istruzione ODBC specificata.

```
virtual void OnSetUpdateOptions(HSTMT hstmt);
```

### <a name="parameters"></a>Parametri

*hstmt*<br/>
HSTMT dell'istruzione ODBC le cui opzioni devono essere impostate.

### <a name="remarks"></a>Commenti

Chiamare `OnSetUpdateOptions` per impostare le opzioni (utilizzate sull'aggiornamento) per l'istruzione ODBC specificata. Il Framework chiama questa funzione membro dopo aver creato un HSTMT per aggiornare i record in un recordset. (Mentre `OnSetOptions` viene utilizzato per le operazioni di selezione, `OnSetUpdateOptions` viene utilizzato per le operazioni di aggiornamento.) `OnSetUpdateOptions` determina il supporto dell'origine dati per i cursori scorrevoli e per la concorrenza del cursore e imposta di conseguenza le opzioni del recordset.

Eseguire l'override `OnSetUpdateOptions` di per impostare le opzioni di un'istruzione ODBC prima che tale istruzione venga utilizzata per accedere a un database.

Per ulteriori informazioni sui cursori, vedere l'articolo [ODBC](../../data/odbc/odbc-basics.md).

## <a name="crecordsetopen"></a><a name="open"></a> CRecordset:: Open

Apre il recordset recuperando la tabella o eseguendo la query rappresentata dal recordset.

```
virtual BOOL Open(
    UINT nOpenType = AFX_DB_USE_DEFAULT_TYPE,
    LPCTSTR lpszSQL = NULL,
    DWORD dwOptions = none);
```

### <a name="parameters"></a>Parametri

*nOpenType*<br/>
Accettare il valore predefinito, AFX_DB_USE_DEFAULT_TYPE o usare uno dei valori seguenti da `enum OpenType` :

- `CRecordset::dynaset` Recordset con scorrimento bidirezionale. L'appartenenza e l'ordine dei record vengono determinati quando il recordset è aperto, ma le modifiche apportate da altri utenti ai valori dei dati sono visibili dopo un'operazione di recupero. I dynaset sono noti anche come recordset basati su keyset.

- `CRecordset::snapshot` Recordset statico con scorrimento bidirezionale. L'appartenenza e l'ordine dei record vengono determinati quando il recordset è aperto; i valori dei dati vengono determinati quando vengono recuperati i record. Le modifiche apportate da altri utenti non sono visibili finché il recordset non viene chiuso e riaperto.

- `CRecordset::dynamic` Recordset con scorrimento bidirezionale. Le modifiche apportate da altri utenti all'appartenenza, all'ordine e ai valori dei dati sono visibili dopo un'operazione di recupero. Si noti che molti driver ODBC non supportano questo tipo di recordset.

- `CRecordset::forwardOnly` Recordset di sola lettura con solo scorrimento in attesa.

   Per `CRecordset` , il valore predefinito è `CRecordset::snapshot` . Il meccanismo di valore predefinito consente l'interazione tra le procedure guidate di Visual C++ e `CRecordset` di ODBC e `CDaoRecordset` di DAO le cui impostazione predefinite sono diverse.

Per ulteriori informazioni su questi tipi di recordset, vedere l'articolo [Recordset (ODBC)](../../data/odbc/recordset-odbc.md). Per informazioni correlate, vedere l'articolo "utilizzo dei cursori Block e scroll" nel Windows SDK.

> [!CAUTION]
> Se il tipo richiesto non è supportato, tramite il framework viene generata un'eccezione.

*lpszSQL*<br/>
Puntatore di stringa contenente uno degli elementi seguenti:

- Puntatore NULL.

- Nome di una tabella.

- Istruzione SQL **Select** (facoltativamente con una clausola SQL **where** o **Order by** ).

- Istruzione **Call** che specifica il nome di una query predefinita (stored procedure). Prestare attenzione a non inserire uno spazio vuoto tra la parentesi graffa e la parola chiave **Call** .

Per ulteriori informazioni su questa stringa, vedere la tabella e la descrizione del ruolo di ClassWizard nella sezione [osservazioni](#remarks) .

> [!NOTE]
> L'ordine delle colonne nel set di risultati deve corrispondere all'ordine delle chiamate di funzione RFX o RFX bulk nell'override della funzione [DoFieldExchange](#dofieldexchange) o [DoBulkFieldExchange](#dobulkfieldexchange) .

*dwOptions*<br/>
Maschera di bit tramite cui è possibile specificare una combinazione dei valori elencati di seguito. Alcuni di questi si escludono a vicenda. Il valore predefinito è **None**.

- `CRecordset::none` Nessuna opzione impostata. Il valore di questo parametro e tutti gli altri valori si escludono a vicenda. Per impostazione predefinita, il recordset può essere aggiornato con [Edit](#edit) o [Delete](#delete) e consente l'aggiunta di nuovi record con [AddNew](#addnew). Aggiornabilità dipende dall'origine dati e dall'opzione *nOpenType* specificata. L'ottimizzazione per le aggiunte di massa non è disponibile. Il recupero di righe di massa non verrà implementato. I record eliminati non verranno ignorati durante la navigazione del recordset. I segnalibri non sono disponibili. Il controllo automatico dei campi modificati automatico è implementato.

- `CRecordset::appendOnly` Non consentire `Edit` o `Delete` sul recordset. Consente solo `AddNew`. Questa opzione e `CRecordset::readOnly` si escludono a vicenda.

- `CRecordset::readOnly` Aprire il recordset come di sola lettura. Questa opzione e `CRecordset::appendOnly` si escludono a vicenda.

- `CRecordset::optimizeBulkAdd` Utilizzare un'istruzione SQL preparata per ottimizzare l'aggiunta di più record alla volta. Si applica solo se non si utilizza la funzione API ODBC `SQLSetPos` per aggiornare il recordset. Tramite il primo aggiornamento viene determinato quali campi vengono contrassegnati come modificati. Questa opzione e `CRecordset::useMultiRowFetch` si escludono a vicenda.

- `CRecordset::useMultiRowFetch` Implementare il recupero di righe BULK per consentire il recupero di più righe in una singola operazione di recupero. Si tratta di una funzionalità avanzata progettata per migliorare le prestazioni; tuttavia il trasferimento di campi di record di massa non è supportato da ClassWizard. Questa opzione e `CRecordset::optimizeBulkAdd` si escludono a vicenda. Si noti che se si specifica `CRecordset::useMultiRowFetch` , l'opzione verrà `CRecordset::noDirtyFieldCheck` attivata automaticamente (il doppio buffer non sarà disponibile). nei recordset di sola trasmissione l'opzione verrà `CRecordset::useExtendedFetch` attivata automaticamente. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

- `CRecordset::skipDeletedRecords` Ignorare tutti i record eliminati durante l'esplorazione del recordset. Ciò comporterà il rallentamento delle prestazioni in alcuni recuperi relativi. Questa opzione non è valida per i recordset forward-only. Se si chiama [Move](#move) con il parametro *nrows* impostato su 0 e il `CRecordset::skipDeletedRecords` set di opzioni, `Move` asserterà. Si noti che `CRecordset::skipDeletedRecords` è simile alla *compressione del driver*, il che significa che le righe eliminate vengono rimosse dal recordset. Tuttavia, se i record vengono compressi dal driver, saranno ignorati solo quelli eliminati dall'utente in questione e non da altri durante l'apertura del recordset. `CRecordset::skipDeletedRecords` ignorerà le righe eliminate da altri utenti.

- `CRecordset::useBookmarks` Se supportato, può utilizzare i segnalibri nel recordset. Con i segnalibri il recupero dei dati risulta rallentato, ma le prestazioni relative alla navigazione tra i dati migliorano. Non valido per i recordset forward-only. Per ulteriori informazioni, vedere l'articolo [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).

- `CRecordset::noDirtyFieldCheck` Disattiva il controllo automatico dei campi Dirty (doppio buffer). Ciò consente di migliorare le prestazioni; tuttavia, è necessario contrassegnare manualmente i campi come modificati chiamando le funzioni membro `SetFieldDirty` e `SetFieldNull`. Si noti che il doppio buffer nella classe `CRecordset` è simile a quello nella classe `CDaoRecordset`. Tuttavia, in `CRecordset` non è possibile abilitare il doppio buffer nei singoli campi; infatti l'abilitazione viene eseguita o per tutti i campi o per nessuno. Si noti che se si specifica l'opzione `CRecordset::useMultiRowFetch` , `CRecordset::noDirtyFieldCheck` verrà attivato automaticamente; tuttavia, `SetFieldDirty` e `SetFieldNull` non possono essere utilizzati nei recordset che implementano il recupero di righe BULK.

- `CRecordset::executeDirect` Non usare un'istruzione SQL preparata. Per migliorare le prestazioni, specificare questa opzione se la `Requery` funzione membro non verrà mai chiamata.

- `CRecordset::useExtendedFetch` Implementare `SQLExtendedFetch` anziché `SQLFetch` . Questa condizione è progettata per implementare il recupero di righe di massa nei recordset forward-only. Se si specifica l'opzione `CRecordset::useMultiRowFetch` in un recordset di sola trasmissione, `CRecordset::useExtendedFetch` verrà attivata automaticamente.

- `CRecordset::userAllocMultiRowBuffers` L'utente alloca i buffer di archiviazione per i dati. Utilizzare questa opzione insieme a `CRecordset::useMultiRowFetch` se si desidera allocare manualmente l'archiviazione; in caso contrario questa operazione sarà eseguita automaticamente dal framework. Per ulteriori informazioni, vedere l'articolo [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). Si noti che se `CRecordset::userAllocMultiRowBuffers` si specifica senza specificare `CRecordset::useMultiRowFetch` , viene generata un'asserzione non riuscita.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l' `CRecordset` oggetto è stato aperto correttamente; in caso contrario, 0 se [CDatabase:: Open](../../mfc/reference/cdatabase-class.md#open) (se chiamato) restituisce 0.

### <a name="remarks"></a>Commenti

È necessario chiamare questa funzione membro per eseguire la query definita dal recordset. Prima `Open` di chiamare, è necessario creare l'oggetto recordset.

Questa connessione del recordset all'origine dati dipende dalla modalità di costruzione del recordset prima della chiamata a `Open` . Se si passa un oggetto [CDatabase](../../mfc/reference/cdatabase-class.md) al costruttore del recordset che non è stato connesso all'origine dati, questa funzione membro utilizza [GetDefaultConnect](#getdefaultconnect) per tentare di aprire l'oggetto di database. Se si passa NULL al costruttore del recordset, il costruttore costruisce un `CDatabase` oggetto per l'utente e `Open` tenta di connettere l'oggetto di database. Per informazioni dettagliate sulla chiusura del recordset e sulla connessione in queste circostanze diverse, vedere [Close](#close).

> [!NOTE]
> L'accesso a un'origine dati tramite un oggetto `CRecordset` è sempre condiviso. A differenza della classe `CDaoRecordset`, non è possibile utilizzare un oggetto `CRecordset` per aprire un'origine dati con accesso esclusivo.

Quando si chiama `Open` , una query, in genere un'istruzione SQL **SELECT** , seleziona i record in base ai criteri indicati nella tabella seguente.

|Valore del parametro lpszSQL|I record selezionati sono determinati da|Esempio|
|------------------------------------|----------------------------------------|-------------|
|NULL|Stringa restituita da `GetDefaultSQL`.||
|Nome tabella SQL|Tutte le colonne dell'elenco tabelle in `DoFieldExchange` o `DoBulkFieldExchange`.|`"Customer"`|
|Nome predefinito della query (stored procedure)|Colonne che devono essere restituite dalla query.|`"{call OverDueAccts}"`|
|**Selezionare** l'elenco di colonne nell'elenco **di** tabelle|Colonne specificate delle tabelle specificate.|`"SELECT CustId, CustName FROM`<br /><br /> `Customer"`|

> [!CAUTION]
> Prestare attenzione a non inserire uno spazio vuoto aggiuntivo nella stringa SQL. Se, ad esempio, si inserisce uno spazio vuoto tra la parentesi graffa e la parola chiave **Call** , MFC interpreterà erroneamente la stringa SQL come nome di tabella e la inserirà in un'istruzione **SELECT** , che comporterà la generazione di un'eccezione. Analogamente, se la query predefinita usa un parametro di output, non inserire uno spazio vuoto tra la parentesi graffa e il simbolo ''. Infine, non è necessario inserire uno spazio vuoto prima della parentesi graffa in un'istruzione **Call** o prima della parola chiave **Select** in un'istruzione **Select** .

La procedura usuale consiste nel passare NULL a `Open` ; in questo caso, `Open` chiama [GetDefaultSQL](#getdefaultsql). Se si usa una classe derivata `CRecordset` , `GetDefaultSQL` fornisce i nomi di tabella specificati in ClassWizard. Nel parametro `lpszSQL` è invece possibile specificare altre informazioni.

Indipendentemente dall'esito, `Open` costruisce una stringa SQL finale per la query (la stringa può includere clausole SQL **where** e **Order by** accodate alla `lpszSQL` stringa passata), quindi esegue la query. È possibile esaminare la stringa costruita chiamando [GetSQL](#getsql) dopo avere chiamato `Open` . Per ulteriori dettagli sul modo in cui il recordset crea un'istruzione SQL e seleziona i record, vedere l'articolo [Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md).

I membri dei dati di campo della classe recordset sono associati alle colonne dei dati selezionati. Se vengono restituiti record, il primo di essi diventa il record corrente.

Se si desidera impostare le opzioni per il recordset, ad esempio un filtro o un ordinamento, specificarle dopo aver costruito l'oggetto recordset, ma prima di chiamare `Open` . Se si desidera aggiornare i record del recordset dopo che il recordset è già aperto, chiamare [Requery](#requery).

Per ulteriori informazioni, inclusi esempi aggiuntivi, vedere gli articoli [Recordset (ODBC)](../../data/odbc/recordset-odbc.md), [Recordset: come i recordset selezionano i record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)e [Recordset: creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md).

### <a name="example"></a>Esempio

Negli esempi di codice seguenti vengono illustrate diverse forme della `Open` chiamata.

[!code-cpp[NVC_MFCDatabase#16](../../mfc/codesnippet/cpp/crecordset-class_15.cpp)]

## <a name="crecordsetrefreshrowset"></a><a name="refreshrowset"></a> CRecordset:: RefreshRowset

Aggiorna i dati e lo stato di una riga nel set di righe corrente.

```cpp
void RefreshRowset(
    WORD wRow,
    WORD wLockType = SQL_LOCK_NO_CHANGE);
```

### <a name="parameters"></a>Parametri

*wRow*<br/>
Posizione in base 1 di una riga nel set di righe corrente. Questo valore può variare da zero alla dimensione del set di righe.

*wLockType*<br/>
Valore che indica come bloccare la riga dopo l'aggiornamento. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Commenti

Se si passa un valore pari a zero per *wRow*, verrà aggiornata ogni riga del set di righe.

Per utilizzare `RefreshRowset` , è necessario avere implementato il recupero di righe bulk specificando l' `CRecordset::useMulitRowFetch` opzione nella funzione membro [Open](#open) .

`RefreshRowset` chiama la funzione API ODBC `SQLSetPos` . Il parametro *wLockType* specifica lo stato di blocco della riga dopo l' `SQLSetPos` esecuzione di. Nella tabella seguente vengono descritti i valori possibili per *wLockType*.

|wLockType|Description|
|---------------|-----------------|
|SQL_LOCK_NO_CHANGE (valore predefinito)|Il driver o l'origine dati garantisce che la riga si trovi nello stesso stato bloccato o sbloccato precedente alla `RefreshRowset` chiamata di.|
|SQL_LOCK_EXCLUSIVE|Il driver o l'origine dati blocca la riga in modo esclusivo. Non tutte le origini dati supportano questo tipo di blocco.|
|SQL_LOCK_UNLOCK|Il driver o l'origine dati sblocca la riga. Non tutte le origini dati supportano questo tipo di blocco.|

Per ulteriori informazioni su `SQLSetPos` , vedere la Windows SDK. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="crecordsetrequery"></a><a name="requery"></a> CRecordset:: Requery

Ricompila (Aggiorna) un recordset.

```
virtual BOOL Requery();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset è stato ricompilato correttamente. in caso contrario, 0.

### <a name="remarks"></a>Commenti

Se vengono restituiti record, il primo di essi diventa il record corrente.

Affinché il recordset rifletta le aggiunte e le eliminazioni apportate dall'utente o da altri utenti all'origine dati, è necessario ricompilare il recordset chiamando `Requery` . Se il recordset è di un dynaset, riflette automaticamente gli aggiornamenti apportati dall'utente o da altri utenti ai record esistenti (ma non alle aggiunte). Se il recordset è uno snapshot, è necessario chiamare `Requery` per riflettere le modifiche da parte di altri utenti, nonché aggiunte ed eliminazioni.

Per un dynaset o uno snapshot, chiamare `Requery` ogni volta che si vuole ricompilare il recordset usando un nuovo filtro o un ordinamento o nuovi valori di parametro. Impostare la nuova proprietà Filter o sort assegnando nuovi valori a `m_strFilter` e `m_strSort` prima di chiamare `Requery` . Impostare nuovi parametri assegnando nuovi valori ai membri dati del parametro prima di chiamare `Requery` . Se le stringhe di filtro e di ordinamento sono invariate, è possibile riutilizzare la query per migliorare le prestazioni.

Se il tentativo di ricompilare il recordset ha esito negativo, il recordset viene chiuso. Prima di chiamare `Requery` , è possibile determinare se è possibile eseguire una query sul recordset chiamando la `CanRestart` funzione membro. `CanRestart` non garantisce che la `Requery` funzione avrà esito positivo.

> [!CAUTION]
> Chiamare `Requery` solo dopo la chiamata a [Open](#open).

### <a name="example"></a>Esempio

In questo esempio viene ricompilato un recordset per applicare un ordinamento diverso.

[!code-cpp[NVC_MFCDatabase#29](../../mfc/codesnippet/cpp/crecordset-class_16.cpp)]

## <a name="crecordsetsetabsoluteposition"></a><a name="setabsoluteposition"></a> CRecordset:: SetAbsolutePosition

Posiziona il recordset sul record corrispondente al numero di record specificato.

```cpp
void SetAbsolutePosition(long nRows);
```

### <a name="parameters"></a>Parametri

*nRows*<br/>
Posizione ordinale in base uno per il record corrente nel recordset.

### <a name="remarks"></a>Commenti

`SetAbsolutePosition` Sposta il puntatore del record corrente in base a questa posizione ordinale.

> [!NOTE]
> Questa funzione membro non è valida per i recordset di sola trasmissione.

Per i recordset ODBC, l'impostazione della posizione assoluta 1 fa riferimento al primo record nel recordset. il valore 0 indica la posizione di inizio del file (BOF).

È inoltre possibile passare valori negativi a `SetAbsolutePosition` . In questo caso la posizione del recordset viene valutata a partire dalla fine del recordset. `SetAbsolutePosition( -1 )`Il puntatore al record corrente viene ad esempio spostato nell'ultimo record del recordset.

> [!NOTE]
> La posizione assoluta non è destinata all'uso come numero di record surrogato. I segnalibri sono ancora il metodo consigliato per mantenere e tornare a una determinata posizione, poiché la posizione di un record viene modificata quando vengono eliminati i record precedenti. Inoltre, non è possibile garantire che un determinato record abbia la stessa posizione assoluta se il recordset viene ricreato perché l'ordine dei singoli record all'interno di un recordset non è garantito, a meno che non venga creato con un'istruzione SQL utilizzando una clausola **Order by** .

Per ulteriori informazioni sull'esplorazione e sui segnalibri dei recordset, vedere gli articoli [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) e [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).

## <a name="crecordsetsetbookmark"></a><a name="setbookmark"></a> CRecordset:: sesegnalibro

Posiziona il recordset sul record contenente il segnalibro specificato.

```cpp
void SetBookmark(const CDBVariant& varBookmark);
```

### <a name="parameters"></a>Parametri

*varBookmark*<br/>
Riferimento a un oggetto [CDBVariant](../../mfc/reference/cdbvariant-class.md) contenente il valore del segnalibro per un record specifico.

### <a name="remarks"></a>Commenti

Per determinare se i segnalibri sono supportati nel recordset, chiamare [CanBookmark](#canbookmark). Per rendere disponibili i segnalibri se sono supportati, è necessario impostare l' `CRecordset::useBookmarks` opzione nel parametro *dwOptions* della funzione membro [Open](#open) .

> [!NOTE]
> Se i segnalibri non sono supportati o non sono disponibili, la chiamata a comporterà `SetBookmark` la generazione di un'eccezione. I segnalibri non sono supportati nei recordset di sola trasmissione.

Per recuperare innanzitutto il segnalibro per il record corrente, chiamare [GetBookmark](#getbookmark), che salva il valore del segnalibro in un `CDBVariant` oggetto. Successivamente, è possibile tornare a tale record chiamando `SetBookmark` usando il valore del segnalibro salvato.

> [!NOTE]
> Dopo determinate operazioni del recordset, è necessario controllare la persistenza del segnalibro prima di chiamare `SetBookmark` . Se, ad esempio, si recupera un segnalibro con `GetBookmark` e quindi si chiama `Requery` , il segnalibro potrebbe non essere più valido. Chiamare [CDatabase:: GetBookmarkPersistence](../../mfc/reference/cdatabase-class.md#getbookmarkpersistence) per verificare se è possibile chiamare in modo sicuro `SetBookmark` .

Per ulteriori informazioni sui segnalibri e sull'esplorazione dei recordset, vedere gli articoli [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md) e [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

## <a name="crecordsetsetfielddirty"></a><a name="setfielddirty"></a> CRecordset:: SetFieldDirty

Contrassegna un membro dati di campo del recordset come modificato o non modificato.

```cpp
void SetFieldDirty(void* pv, BOOL bDirty = TRUE);
```

### <a name="parameters"></a>Parametri

*PV*<br/>
Contiene l'indirizzo di un membro dati di campo nel recordset o NULL. Se è NULL, vengono contrassegnati tutti i membri dati di campo del recordset. (C++ NULL è diverso da null nella terminologia del database, il che significa "senza valore".)

*bDirty*<br/>
TRUE se il membro dati del campo deve essere contrassegnato come "Dirty" (modificato). In caso contrario, FALSE se il membro dati del campo deve essere contrassegnato come "pulito" (non modificato).

### <a name="remarks"></a>Commenti

Contrassegnando i campi come invariati si garantisce che il campo non venga aggiornato e si verificherà un minor traffico SQL.

> [!NOTE]
> Questa funzione membro non è applicabile ai recordset che utilizzano il recupero di righe BULK. Se è stato implementato il recupero di righe bulk, `SetFieldDirty` verrà generata un'asserzione non riuscita. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Il Framework contrassegna i membri dei dati dei campi modificati per assicurarsi che vengano scritti nel record nell'origine dati mediante il meccanismo di trasferimento di campi di record (RFX). Se si modifica il valore di un campo, il campo viene impostato automaticamente come Dirty, di conseguenza raramente è necessario chiamare `SetFieldDirty` manualmente, ma è talvolta opportuno assicurarsi che le colonne vengano aggiornate o inserite in modo esplicito indipendentemente dal valore del membro dati del campo.

> [!CAUTION]
> Chiamare questa funzione membro solo dopo aver chiamato [Edit](#edit) o [AddNew](#addnew).

Se si utilizza NULL per il primo argomento della funzione, la funzione viene applicata solo ai `outputColumn` campi, non ai `param` campi. Ad esempio, la chiamata

[!code-cpp[NVC_MFCDatabase#26](../../mfc/codesnippet/cpp/crecordset-class_10.cpp)]

verranno impostati solo i `outputColumn` campi su null; i campi non saranno `param` interessati.

Per lavorare sui `param` campi, è necessario specificare l'indirizzo effettivo del singolo `param` utente su cui si desidera lavorare, ad esempio:

[!code-cpp[NVC_MFCDatabase#27](../../mfc/codesnippet/cpp/crecordset-class_11.cpp)]

Ciò significa che non è possibile impostare tutti i `param` campi su null, come per i `outputColumn` campi.

## <a name="crecordsetsetfieldnull"></a><a name="setfieldnull"></a> CRecordset:: SetFieldNull

Contrassegna un membro dati di campo del recordset come null (in particolare senza valore) o come non null.

```cpp
void SetFieldNull(void* pv, BOOL bNull = TRUE);
```

### <a name="parameters"></a>Parametri

*PV*<br/>
Contiene l'indirizzo di un membro dati di campo nel recordset o NULL. Se è NULL, vengono contrassegnati tutti i membri dati di campo del recordset. (C++ NULL è diverso da null nella terminologia del database, il che significa "senza valore".)

*bNull*<br/>
Diverso da zero se il membro dati del campo deve essere contrassegnato come privo di valore (null). In caso contrario, 0 se il membro dati del campo deve essere contrassegnato come non null.

### <a name="remarks"></a>Commenti

Quando si aggiunge un nuovo record a un recordset, tutti i membri dati di campo vengono inizialmente impostati su un valore null e contrassegnati come "Dirty" (modificato). Quando si recupera un record da un'origine dati, le relative colonne dispongono già di valori o sono null.

> [!NOTE]
> Non chiamare questa funzione membro sui recordset che usano il recupero di righe BULK. Se è stato implementato il recupero di righe bulk, `SetFieldNull` la chiamata a genera un'asserzione non riuscita. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Se si desidera designare in modo specifico un campo del record corrente in modo che non disponga di un valore, chiamare `SetFieldNull` con *bNULL* impostato su true per contrassegnarlo come null. Se un campo è stato contrassegnato in precedenza come null e ora si vuole assegnargli un valore, è sufficiente impostarne il nuovo valore. Non è necessario rimuovere il flag null con `SetFieldNull` . Per determinare se il campo può essere null, chiamare `IsFieldNullable` .

> [!CAUTION]
> Chiamare questa funzione membro solo dopo aver chiamato [Edit](#edit) o [AddNew](#addnew).

Se si utilizza NULL per il primo argomento della funzione, la funzione viene applicata solo ai `outputColumn` campi, non ai `param` campi. Ad esempio, la chiamata

[!code-cpp[NVC_MFCDatabase#26](../../mfc/codesnippet/cpp/crecordset-class_10.cpp)]

verranno impostati solo i `outputColumn` campi su null; i campi non saranno `param` interessati.

Per lavorare sui `param` campi, è necessario specificare l'indirizzo effettivo del singolo `param` utente su cui si desidera lavorare, ad esempio:

[!code-cpp[NVC_MFCDatabase#27](../../mfc/codesnippet/cpp/crecordset-class_11.cpp)]

Ciò significa che non è possibile impostare tutti i `param` campi su null, come per i `outputColumn` campi.

> [!NOTE]
> Quando si impostano i parametri su null, viene aperta una chiamata a `SetFieldNull` prima che il recordset venga aperto in un'asserzione. In questo caso, chiamare [SetParamNull](#setparamnull).

`SetFieldNull` viene implementato tramite [DoFieldExchange](#dofieldexchange).

## <a name="crecordsetsetlockingmode"></a><a name="setlockingmode"></a> CRecordset:: SetLockingMode

Imposta la modalità di blocco sul blocco "ottimistico" (impostazione predefinita) o "pessimistica". Determina la modalità di blocco dei record per gli aggiornamenti.

```cpp
void SetLockingMode(UINT nMode);
```

### <a name="parameters"></a>Parametri

*nMode*<br/>
Contiene uno dei valori seguenti da `enum LockMode` :

- `optimistic` Il blocco ottimistico blocca il record che viene aggiornato solo durante la chiamata a `Update` .

- `pessimistic` Il blocco pessimistico blocca il record non appena `Edit` viene chiamato e lo mantiene bloccato finché la `Update` chiamata non viene completata o si passa a un nuovo record.

### <a name="remarks"></a>Commenti

Chiamare questa funzione membro se è necessario specificare quale delle due strategie di blocco dei record utilizzate dal recordset per gli aggiornamenti. Per impostazione predefinita, la modalità di blocco di un recordset è `optimistic` . È possibile modificarlo in una strategia di `pessimistic` blocco più prudente. Chiamare `SetLockingMode` dopo aver costruito e aperto l'oggetto recordset, ma prima di chiamare `Edit` .

## <a name="crecordsetsetparamnull"></a><a name="setparamnull"></a> CRecordset:: SetParamNull

Contrassegna un parametro come null (in particolare senza valore) o come non null.

```cpp
void SetParamNull(
    int nIndex,
    BOOL bNull = TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero del parametro.

*bNull*<br/>
Se TRUE (valore predefinito), il parametro viene contrassegnato come null. In caso contrario, il parametro viene contrassegnato come non null.

### <a name="remarks"></a>Commenti

A differenza di [SetFieldNull](#setfieldnull), è possibile chiamare `SetParamNull` prima di aprire il recordset.

`SetParamNull` viene in genere utilizzato con query predefinite (stored procedure).

## <a name="crecordsetsetrowsetcursorposition"></a><a name="setrowsetcursorposition"></a> CRecordset:: SetRowsetCursorPosition

Sposta il cursore su una riga all'interno del set di righe corrente.

```cpp
void SetRowsetCursorPosition(WORD wRow, WORD wLockType = SQL_LOCK_NO_CHANGE);
```

### <a name="parameters"></a>Parametri

*wRow*<br/>
Posizione in base 1 di una riga nel set di righe corrente. Il valore può essere compreso tra 1 e la dimensione del set di righe.

*wLockType*<br/>
Valore che indica come bloccare la riga dopo l'aggiornamento. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Commenti

Quando si implementa il recupero di righe bulk, i record vengono recuperati dai set di righe, dove il primo record nel set di righe recuperato è il record corrente. Per creare un altro record nel set di righe del record corrente, chiamare `SetRowsetCursorPosition` . È ad esempio possibile combinare `SetRowsetCursorPosition` con la funzione membro [GetFieldValue](#getfieldvalue) per recuperare in modo dinamico i dati da qualsiasi record del recordset.

Per utilizzare `SetRowsetCursorPosition` , è necessario avere implementato il recupero di righe bulk specificando l' `CRecordset::useMultiRowFetch` opzione del parametro *dwOptions* nella funzione membro [Open](#open) .

`SetRowsetCursorPosition` chiama la funzione API ODBC `SQLSetPos` . Il parametro *wLockType* specifica lo stato di blocco della riga dopo l' `SQLSetPos` esecuzione di. Nella tabella seguente vengono descritti i valori possibili per *wLockType*.

|wLockType|Description|
|---------------|-----------------|
|SQL_LOCK_NO_CHANGE (valore predefinito)|Il driver o l'origine dati garantisce che la riga si trovi nello stesso stato bloccato o sbloccato precedente alla `SetRowsetCursorPosition` chiamata di.|
|SQL_LOCK_EXCLUSIVE|Il driver o l'origine dati blocca la riga in modo esclusivo. Non tutte le origini dati supportano questo tipo di blocco.|
|SQL_LOCK_UNLOCK|Il driver o l'origine dati sblocca la riga. Non tutte le origini dati supportano questo tipo di blocco.|

Per ulteriori informazioni su `SQLSetPos` , vedere la Windows SDK. Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="crecordsetsetrowsetsize"></a><a name="setrowsetsize"></a> CRecordset:: SetRowsetSize

Specifica il numero di record che si desidera recuperare durante un'operazione di recupero.

```
virtual void SetRowsetSize(DWORD dwNewRowsetSize);
```

### <a name="parameters"></a>Parametri

*dwNewRowsetSize*<br/>
Numero di righe da recuperare durante una determinata operazione di recupero.

### <a name="remarks"></a>Commenti

Questa funzione membro virtuale specifica il numero di righe che si desidera recuperare durante una singola operazione di recupero quando si utilizza il recupero di righe BULK. Per implementare il recupero di righe bulk, è necessario impostare l' `CRecordset::useMultiRowFetch` opzione nel parametro *dwOptions* della funzione membro [Open](#open) .

> [!NOTE]
> `SetRowsetSize`La chiamata senza implementare il recupero di righe BULK provocherà un'asserzione non riuscita.

Chiamare `SetRowsetSize` prima `Open` di chiamare per impostare inizialmente le dimensioni del set di righe per il recordset. Le dimensioni predefinite del set di righe durante l'implementazione del recupero di righe bulk sono pari a 25.

> [!NOTE]
> Prestare attenzione quando si chiama `SetRowsetSize` . Se si sta allocando manualmente lo spazio di archiviazione per i dati (come specificato dall' `CRecordset::userAllocMultiRowBuffers` opzione del parametro dwOptions in `Open` ), è necessario verificare se è necessario riallocare questi buffer di archiviazione dopo la chiamata a `SetRowsetSize` , ma prima di eseguire qualsiasi operazione di spostamento del cursore.

Per ottenere l'impostazione corrente per le dimensioni del set di righe, chiamare [GetRowsetSize](#getrowsetsize).

Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="crecordsetupdate"></a><a name="update"></a> CRecordset:: Update

Completa un' `AddNew` operazione o `Edit` salvando i dati nuovi o modificati nell'origine dati.

```
virtual BOOL Update();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se un record è stato aggiornato correttamente; in caso contrario, 0 se nessuna colonna è stata modificata. Se nessun record è stato aggiornato o se è stato aggiornato più di un record, viene generata un'eccezione. Viene inoltre generata un'eccezione per qualsiasi altro errore nell'origine dati.

### <a name="remarks"></a>Commenti

Chiamare questa funzione membro dopo una chiamata alla funzione [AddNew](#addnew) o [Edit](#edit) member. Questa chiamata è necessaria per completare l' `AddNew` `Edit` operazione o.

> [!NOTE]
> Se è stato implementato il recupero di righe bulk, non è possibile chiamare `Update` . Verrà generata un'asserzione non riuscita. Sebbene la classe non `CRecordset` fornisca un meccanismo per l'aggiornamento di righe di dati bulk, è possibile scrivere funzioni personalizzate utilizzando la funzione API ODBC `SQLSetPos` . Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Sia `AddNew` che `Edit` preparano un buffer di modifica in cui vengono inseriti i dati aggiunti o modificati per il salvataggio nell'origine dati. `Update` Salva i dati. Vengono aggiornati solo i campi contrassegnati o rilevati come modificati.

Se l'origine dati supporta le transazioni, è possibile effettuare la `Update` chiamata (e la `AddNew` corrispondente `Edit` chiamata o) di una transazione. Per ulteriori informazioni sulle transazioni, vedere l'articolo relativo alla [transazione (ODBC)](../../data/odbc/transaction-odbc.md).

> [!CAUTION]
> Se si chiama `Update` senza prima chiamare `AddNew` o `Edit` , `Update` genera un'eccezione `CDBException` . Se si chiama `AddNew` o `Edit` , è necessario chiamare `Update` prima di chiamare un' `Move` operazione o prima di chiudere il recordset o la connessione all'origine dati. In caso contrario, le modifiche andranno perse senza notifica.

Per informazioni dettagliate sulla gestione degli `Update` errori, vedere l'articolo [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).

### <a name="example"></a>Esempio

Vedere l'articolo [transazione: esecuzione di una transazione in un recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).

## <a name="see-also"></a>Vedi anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CDatabase (classe)](../../mfc/reference/cdatabase-class.md)<br/>
[Classe CRecordView](../../mfc/reference/crecordview-class.md)

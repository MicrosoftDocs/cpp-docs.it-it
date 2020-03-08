---
title: Classe CDaoRecordset
ms.date: 08/27/2018
f1_keywords:
- CDaoRecordset
- AFXDAO/CDaoRecordset
- AFXDAO/CDaoRecordset::CDaoRecordset
- AFXDAO/CDaoRecordset::AddNew
- AFXDAO/CDaoRecordset::CanAppend
- AFXDAO/CDaoRecordset::CanBookmark
- AFXDAO/CDaoRecordset::CancelUpdate
- AFXDAO/CDaoRecordset::CanRestart
- AFXDAO/CDaoRecordset::CanScroll
- AFXDAO/CDaoRecordset::CanTransact
- AFXDAO/CDaoRecordset::CanUpdate
- AFXDAO/CDaoRecordset::Close
- AFXDAO/CDaoRecordset::Delete
- AFXDAO/CDaoRecordset::DoFieldExchange
- AFXDAO/CDaoRecordset::Edit
- AFXDAO/CDaoRecordset::FillCache
- AFXDAO/CDaoRecordset::Find
- AFXDAO/CDaoRecordset::FindFirst
- AFXDAO/CDaoRecordset::FindLast
- AFXDAO/CDaoRecordset::FindNext
- AFXDAO/CDaoRecordset::FindPrev
- AFXDAO/CDaoRecordset::GetAbsolutePosition
- AFXDAO/CDaoRecordset::GetBookmark
- AFXDAO/CDaoRecordset::GetCacheSize
- AFXDAO/CDaoRecordset::GetCacheStart
- AFXDAO/CDaoRecordset::GetCurrentIndex
- AFXDAO/CDaoRecordset::GetDateCreated
- AFXDAO/CDaoRecordset::GetDateLastUpdated
- AFXDAO/CDaoRecordset::GetDefaultDBName
- AFXDAO/CDaoRecordset::GetDefaultSQL
- AFXDAO/CDaoRecordset::GetEditMode
- AFXDAO/CDaoRecordset::GetFieldCount
- AFXDAO/CDaoRecordset::GetFieldInfo
- AFXDAO/CDaoRecordset::GetFieldValue
- AFXDAO/CDaoRecordset::GetIndexCount
- AFXDAO/CDaoRecordset::GetIndexInfo
- AFXDAO/CDaoRecordset::GetLastModifiedBookmark
- AFXDAO/CDaoRecordset::GetLockingMode
- AFXDAO/CDaoRecordset::GetName
- AFXDAO/CDaoRecordset::GetParamValue
- AFXDAO/CDaoRecordset::GetPercentPosition
- AFXDAO/CDaoRecordset::GetRecordCount
- AFXDAO/CDaoRecordset::GetSQL
- AFXDAO/CDaoRecordset::GetType
- AFXDAO/CDaoRecordset::GetValidationRule
- AFXDAO/CDaoRecordset::GetValidationText
- AFXDAO/CDaoRecordset::IsBOF
- AFXDAO/CDaoRecordset::IsDeleted
- AFXDAO/CDaoRecordset::IsEOF
- AFXDAO/CDaoRecordset::IsFieldDirty
- AFXDAO/CDaoRecordset::IsFieldNull
- AFXDAO/CDaoRecordset::IsFieldNullable
- AFXDAO/CDaoRecordset::IsOpen
- AFXDAO/CDaoRecordset::Move
- AFXDAO/CDaoRecordset::MoveFirst
- AFXDAO/CDaoRecordset::MoveLast
- AFXDAO/CDaoRecordset::MoveNext
- AFXDAO/CDaoRecordset::MovePrev
- AFXDAO/CDaoRecordset::Open
- AFXDAO/CDaoRecordset::Requery
- AFXDAO/CDaoRecordset::Seek
- AFXDAO/CDaoRecordset::SetAbsolutePosition
- AFXDAO/CDaoRecordset::SetBookmark
- AFXDAO/CDaoRecordset::SetCacheSize
- AFXDAO/CDaoRecordset::SetCacheStart
- AFXDAO/CDaoRecordset::SetCurrentIndex
- AFXDAO/CDaoRecordset::SetFieldDirty
- AFXDAO/CDaoRecordset::SetFieldNull
- AFXDAO/CDaoRecordset::SetFieldValue
- AFXDAO/CDaoRecordset::SetFieldValueNull
- AFXDAO/CDaoRecordset::SetLockingMode
- AFXDAO/CDaoRecordset::SetParamValue
- AFXDAO/CDaoRecordset::SetParamValueNull
- AFXDAO/CDaoRecordset::SetPercentPosition
- AFXDAO/CDaoRecordset::Update
- AFXDAO/CDaoRecordset::m_bCheckCacheForDirtyFields
- AFXDAO/CDaoRecordset::m_nFields
- AFXDAO/CDaoRecordset::m_nParams
- AFXDAO/CDaoRecordset::m_pDAORecordset
- AFXDAO/CDaoRecordset::m_pDatabase
- AFXDAO/CDaoRecordset::m_strFilter
- AFXDAO/CDaoRecordset::m_strSort
helpviewer_keywords:
- CDaoRecordset [MFC], CDaoRecordset
- CDaoRecordset [MFC], AddNew
- CDaoRecordset [MFC], CanAppend
- CDaoRecordset [MFC], CanBookmark
- CDaoRecordset [MFC], CancelUpdate
- CDaoRecordset [MFC], CanRestart
- CDaoRecordset [MFC], CanScroll
- CDaoRecordset [MFC], CanTransact
- CDaoRecordset [MFC], CanUpdate
- CDaoRecordset [MFC], Close
- CDaoRecordset [MFC], Delete
- CDaoRecordset [MFC], DoFieldExchange
- CDaoRecordset [MFC], Edit
- CDaoRecordset [MFC], FillCache
- CDaoRecordset [MFC], Find
- CDaoRecordset [MFC], FindFirst
- CDaoRecordset [MFC], FindLast
- CDaoRecordset [MFC], FindNext
- CDaoRecordset [MFC], FindPrev
- CDaoRecordset [MFC], GetAbsolutePosition
- CDaoRecordset [MFC], GetBookmark
- CDaoRecordset [MFC], GetCacheSize
- CDaoRecordset [MFC], GetCacheStart
- CDaoRecordset [MFC], GetCurrentIndex
- CDaoRecordset [MFC], GetDateCreated
- CDaoRecordset [MFC], GetDateLastUpdated
- CDaoRecordset [MFC], GetDefaultDBName
- CDaoRecordset [MFC], GetDefaultSQL
- CDaoRecordset [MFC], GetEditMode
- CDaoRecordset [MFC], GetFieldCount
- CDaoRecordset [MFC], GetFieldInfo
- CDaoRecordset [MFC], GetFieldValue
- CDaoRecordset [MFC], GetIndexCount
- CDaoRecordset [MFC], GetIndexInfo
- CDaoRecordset [MFC], GetLastModifiedBookmark
- CDaoRecordset [MFC], GetLockingMode
- CDaoRecordset [MFC], GetName
- CDaoRecordset [MFC], GetParamValue
- CDaoRecordset [MFC], GetPercentPosition
- CDaoRecordset [MFC], GetRecordCount
- CDaoRecordset [MFC], GetSQL
- CDaoRecordset [MFC], GetType
- CDaoRecordset [MFC], GetValidationRule
- CDaoRecordset [MFC], GetValidationText
- CDaoRecordset [MFC], IsBOF
- CDaoRecordset [MFC], IsDeleted
- CDaoRecordset [MFC], IsEOF
- CDaoRecordset [MFC], IsFieldDirty
- CDaoRecordset [MFC], IsFieldNull
- CDaoRecordset [MFC], IsFieldNullable
- CDaoRecordset [MFC], IsOpen
- CDaoRecordset [MFC], Move
- CDaoRecordset [MFC], MoveFirst
- CDaoRecordset [MFC], MoveLast
- CDaoRecordset [MFC], MoveNext
- CDaoRecordset [MFC], MovePrev
- CDaoRecordset [MFC], Open
- CDaoRecordset [MFC], Requery
- CDaoRecordset [MFC], Seek
- CDaoRecordset [MFC], SetAbsolutePosition
- CDaoRecordset [MFC], SetBookmark
- CDaoRecordset [MFC], SetCacheSize
- CDaoRecordset [MFC], SetCacheStart
- CDaoRecordset [MFC], SetCurrentIndex
- CDaoRecordset [MFC], SetFieldDirty
- CDaoRecordset [MFC], SetFieldNull
- CDaoRecordset [MFC], SetFieldValue
- CDaoRecordset [MFC], SetFieldValueNull
- CDaoRecordset [MFC], SetLockingMode
- CDaoRecordset [MFC], SetParamValue
- CDaoRecordset [MFC], SetParamValueNull
- CDaoRecordset [MFC], SetPercentPosition
- CDaoRecordset [MFC], Update
- CDaoRecordset [MFC], m_bCheckCacheForDirtyFields
- CDaoRecordset [MFC], m_nFields
- CDaoRecordset [MFC], m_nParams
- CDaoRecordset [MFC], m_pDAORecordset
- CDaoRecordset [MFC], m_pDatabase
- CDaoRecordset [MFC], m_strFilter
- CDaoRecordset [MFC], m_strSort
ms.assetid: 2322067f-1027-4662-a5d7-aa2fc7488630
ms.openlocfilehash: 96118645aa656e97fcb93a0fd223045208ab03a3
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78867302"
---
# <a name="cdaorecordset-class"></a>Classe CDaoRecordset

Rappresenta un set di record selezionati da un'origine dati.

## <a name="syntax"></a>Sintassi

```
class CDaoRecordset : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoRecordset:: CDaoRecordset](#cdaorecordset)|Costruisce un oggetto `CDaoRecordset`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoRecordset:: AddNew](#addnew)|Prepara l'aggiunta di un nuovo record. Chiamare [Update](#update) per completare l'aggiunta.|
|[CDaoRecordset:: CanAppend](#canappend)|Restituisce un valore diverso da zero se è possibile aggiungere nuovi record al recordset tramite la funzione membro [AddNew](#addnew) .|
|[CDaoRecordset:: CanBookmark](#canbookmark)|Restituisce un valore diverso da zero se il recordset supporta segnalibri.|
|[CDaoRecordset:: CancelUpdate](#cancelupdate)|Annulla gli aggiornamenti in sospeso a causa di un'operazione di [modifica](#edit) o [AddNew](#addnew) .|
|[CDaoRecordset:: CanRestart](#canrestart)|Restituisce un valore diverso da zero se è possibile chiamare [Requery](#requery) per eseguire nuovamente la query del recordset.|
|[CDaoRecordset:: CanScroll](#canscroll)|Restituisce un valore diverso da zero se è possibile scorrere i record.|
|[CDaoRecordset:: CanTransact](#cantransact)|Restituisce un valore diverso da zero se l'origine dati supporta le transazioni.|
|[CDaoRecordset:: CanUpdate](#canupdate)|Restituisce un valore diverso da zero se il recordset può essere aggiornato (è possibile aggiungere, aggiornare o eliminare record).|
|[CDaoRecordset:: Close](#close)|Chiude il recordset.|
|[CDaoRecordset::D Elimina](#delete)|Elimina il record corrente dal recordset. È necessario scorrere in modo esplicito un altro record dopo l'eliminazione.|
|[CDaoRecordset::D oFieldExchange](#dofieldexchange)|Chiamata eseguita per scambiare dati (in entrambe le direzioni) tra i membri dati del campo del recordset e il record corrispondente nell'origine dati. Implementa lo scambio di campi di record DAO (DFX).|
|[CDaoRecordset:: Edit](#edit)|Prepara le modifiche al record corrente. Chiamare `Update` per completare la modifica.|
|[CDaoRecordset:: FillCache](#fillcache)|Riempie tutto o una parte di una cache locale per un oggetto recordset che contiene i dati di un'origine dati ODBC.|
|[CDaoRecordset:: Find](#find)|Individua la prima, successiva, precedente o ultima posizione di una determinata stringa in un recordset di tipo dynaset che soddisfa i criteri specificati e fa in modo che il record corrente venga registrato.|
|[CDaoRecordset:: FindFirst](#findfirst)|Individua il primo record in un recordset di tipo dynaset o snapshot che soddisfa i criteri specificati e fa in modo che registri il record corrente.|
|[CDaoRecordset:: FindLast](#findlast)|Individua l'ultimo record in un recordset di tipo dynaset o snapshot che soddisfa i criteri specificati e fa in modo che registri il record corrente.|
|[CDaoRecordset:: TrovaSuccessivo](#findnext)|Individua il record successivo in un recordset di tipo dynaset o snapshot che soddisfa i criteri specificati e fa in modo che registri il record corrente.|
|[CDaoRecordset:: FindPrev](#findprev)|Individua il record precedente in un recordset di tipo dynaset o snapshot che soddisfa i criteri specificati e fa in modo che registri il record corrente.|
|[CDaoRecordset:: GetAbsolutePosition](#getabsoluteposition)|Restituisce il numero di record del record corrente di un oggetto recordset.|
|[CDaoRecordset:: GetBookmark](#getbookmark)|Restituisce un valore che rappresenta il segnalibro in un record.|
|[CDaoRecordset:: GetCacheSize](#getcachesize)|Restituisce un valore che specifica il numero di record in un recordset di tipo dynaset contenente i dati da memorizzare nella cache locale da un'origine dati ODBC.|
|[CDaoRecordset:: GetCacheStart](#getcachestart)|Restituisce un valore che specifica il segnalibro del primo record nel recordset da memorizzare nella cache.|
|[CDaoRecordset:: GetCurrentIndex](#getcurrentindex)|Restituisce un `CString` contenente il nome dell'indice utilizzato più di recente in una `CDaoRecordset`indicizzata di tipo tabella.|
|[CDaoRecordset:: GetDateCreated](#getdatecreated)|Restituisce la data e l'ora di creazione della tabella di base sottostante un oggetto `CDaoRecordset`|
|[CDaoRecordset:: GetDateLastUpdated](#getdatelastupdated)|Restituisce la data e l'ora dell'Ultima modifica apportata alla progettazione di una tabella di base sottostante un oggetto `CDaoRecordset`.|
|[CDaoRecordset:: GetDefaultDBName](#getdefaultdbname)|Restituisce il nome dell'origine dati predefinita.|
|[CDaoRecordset:: GetDefaultSQL](#getdefaultsql)|Chiamato per ottenere la stringa SQL predefinita da eseguire.|
|[CDaoRecordset:: GetEditMode](#geteditmode)|Restituisce un valore che indica lo stato della modifica del record corrente.|
|[CDaoRecordset:: GetFieldCount](#getfieldcount)|Restituisce un valore che rappresenta il numero di campi in un recordset.|
|[CDaoRecordset:: GetFieldInfo](#getfieldinfo)|Restituisce tipi specifici di informazioni sui campi del recordset.|
|[CDaoRecordset:: GetFieldValue](#getfieldvalue)|Restituisce il valore di un campo in un recordset.|
|[CDaoRecordset:: GetIndexCount](#getindexcount)|Recupera il numero di indici in una tabella sottostante un recordset.|
|[CDaoRecordset:: GetIndexInfo](#getindexinfo)|Restituisce vari tipi di informazioni su un indice.|
|[CDaoRecordset:: GetLastModifiedBookmark](#getlastmodifiedbookmark)|Utilizzato per determinare il record aggiunto o aggiornato più di recente.|
|[CDaoRecordset:: GetLockingMode](#getlockingmode)|Restituisce un valore che indica il tipo di blocco attivo durante la modifica.|
|[CDaoRecordset:: GetName](#getname)|Restituisce un `CString` contenente il nome del recordset.|
|[CDaoRecordset:: GetParamValue](#getparamvalue)|Recupera il valore corrente del parametro specificato archiviato nell'oggetto sottostante DAOParameter sottostante.|
|[CDaoRecordset:: GetPercentPosition](#getpercentposition)|Restituisce la posizione del record corrente come percentuale del numero totale di record.|
|[CDaoRecordset:: GetRecordCount](#getrecordcount)|Restituisce il numero di record a cui si accede in un oggetto recordset.|
|[CDaoRecordset:: GetSQL](#getsql)|Ottiene la stringa SQL utilizzata per selezionare i record per il recordset.|
|[CDaoRecordset:: GetType](#gettype)|Chiamata eseguita per determinare il tipo di un recordset: tipo di tabella, dynaset o tipo di snapshot.|
|[CDaoRecordset:: GetValidationRule](#getvalidationrule)|Restituisce un `CString` che contiene il valore che convalida i dati immessi in un campo.|
|[CDaoRecordset:: GetValidationText](#getvalidationtext)|Recupera il testo visualizzato quando una regola di convalida non viene soddisfatta.|
|[CDaoRecordset:: IsBOF](#isbof)|Restituisce un valore diverso da zero se il recordset è stato posizionato prima del primo record. Nessun record corrente.|
|[CDaoRecordset:: è stato eliminato](#isdeleted)|Restituisce un valore diverso da zero se il recordset è posizionato in corrispondenza di un record eliminato.|
|[CDaoRecordset:: IsEOF](#iseof)|Restituisce un valore diverso da zero se il recordset è stato posizionato dopo l'ultimo record. Nessun record corrente.|
|[CDaoRecordset:: IsFieldDirty](#isfielddirty)|Restituisce un valore diverso da zero se il campo specificato nel record corrente è stato modificato.|
|[CDaoRecordset:: IsFieldNull](#isfieldnull)|Restituisce un valore diverso da zero se il campo specificato nel record corrente è null (senza valore).|
|[CDaoRecordset:: IsFieldNullable](#isfieldnullable)|Restituisce un valore diverso da zero se il campo specificato nel record corrente può essere impostato su null (senza valore).|
|[CDaoRecordset:: Open](#isopen)|Restituisce un valore diverso da zero se [Open](#open) è stato chiamato in precedenza.|
|[CDaoRecordset:: Move](#move)|Posiziona il recordset su un numero specificato di record dal record corrente in entrambe le direzioni.|
|[CDaoRecordset:: MoveFirst](#movefirst)|Posiziona il record corrente sul primo record del recordset.|
|[CDaoRecordset:: MoveLast](#movelast)|Posiziona il record corrente nell'ultimo record del recordset.|
|[CDaoRecordset:: MoveNext](#movenext)|Posiziona il record corrente sul record successivo nel recordset.|
|[CDaoRecordset:: MovePrev](#moveprev)|Posiziona il record corrente sul record precedente nel recordset.|
|[CDaoRecordset:: Open](#open)|Crea un nuovo recordset da una tabella, un dynaset o uno snapshot.|
|[CDaoRecordset:: Requery](#requery)|Esegue di nuovo la query del recordset per aggiornare i record selezionati.|
|[CDaoRecordset:: Seek](#seek)|Individua il record in un oggetto recordset di tipo tabella indicizzato che soddisfa i criteri specificati per l'indice corrente e fa sì che registri il record corrente.|
|[CDaoRecordset:: SetAbsolutePosition](#setabsoluteposition)|Imposta il numero di record del record corrente di un oggetto recordset.|
|[CDaoRecordset:: sesegnalibro](#setbookmark)|Posiziona il recordset in un record contenente il segnalibro specificato.|
|[CDaoRecordset:: SetCacheSize](#setcachesize)|Imposta un valore che specifica il numero di record in un recordset di tipo dynaset contenente i dati da memorizzare nella cache locale da un'origine dati ODBC.|
|[CDaoRecordset:: SetCacheStart](#setcachestart)|Imposta un valore che specifica il segnalibro del primo record nel recordset da memorizzare nella cache.|
|[CDaoRecordset:: SetCurrentIndex](#setcurrentindex)|Chiamato per impostare un indice in un recordset di tipo tabella.|
|[CDaoRecordset:: SetFieldDirty](#setfielddirty)|Contrassegna il campo specificato nel record corrente come modificato.|
|[CDaoRecordset:: SetFieldNull](#setfieldnull)|Imposta su null il valore del campo specificato nel record corrente (senza valore).|
|[CDaoRecordset:: SetFieldValue](#setfieldvalue)|Imposta il valore di un campo in un recordset.|
|[CDaoRecordset:: SetFieldValueNull](#setfieldvaluenull)|Imposta su null il valore di un campo in un recordset. (senza valore).|
|[CDaoRecordset:: SetLockingMode](#setlockingmode)|Imposta un valore che indica il tipo di blocco da applicare durante la modifica.|
|[CDaoRecordset:: SetParamValue](#setparamvalue)|Imposta il valore corrente del parametro specificato archiviato nell'oggetto sottostante DAOParameter sottostante|
|[CDaoRecordset:: SetParamValueNull](#setparamvaluenull)|Imposta il valore corrente del parametro specificato su null (senza valore).|
|[CDaoRecordset:: SetPercentPosition](#setpercentposition)|Imposta la posizione del record corrente su un percorso corrispondente a una percentuale del numero totale di record in un recordset.|
|[CDaoRecordset:: Update](#update)|Completa un'operazione di `AddNew` o `Edit` salvando i dati nuovi o modificati nell'origine dati.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoRecordset:: m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields)|Contiene un flag che indica se i campi vengono contrassegnati automaticamente come modificati.|
|[CDaoRecordset:: m_nFields](#m_nfields)|Contiene il numero di membri dati di campo nella classe recordset e il numero di colonne selezionate dal recordset dall'origine dati.|
|[CDaoRecordset:: m_nParams](#m_nparams)|Contiene il numero di membri dati del parametro nella classe recordset, ovvero il numero di parametri passati con la query del recordset|
|[CDaoRecordset:: m_pDAORecordset](#m_pdaorecordset)|Puntatore all'interfaccia DAO sottostante l'oggetto recordset.|
|[CDaoRecordset:: m_pDatabase](#m_pdatabase)|Database di origine per il set di risultati. Contiene un puntatore a un oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) .|
|[CDaoRecordset:: m_strFilter](#m_strfilter)|Contiene una stringa utilizzata per costruire un'istruzione SQL **where** .|
|[CDaoRecordset:: m_strSort](#m_strsort)|Contiene una stringa utilizzata per costruire un'istruzione SQL **Order by** .|

## <a name="remarks"></a>Osservazioni

Noti come "Recordset", gli oggetti `CDaoRecordset` sono disponibili nelle tre forme seguenti:

- I recordset di tipo tabella rappresentano una tabella di base che è possibile utilizzare per esaminare, aggiungere, modificare o eliminare i record da una singola tabella di database.

- I recordset di tipo dynaset sono il risultato di una query che può avere record aggiornabili. Questi recordset sono un set di record che è possibile utilizzare per esaminare, aggiungere, modificare o eliminare record da una tabella o tabelle di database sottostanti. I recordset di tipo dynaset possono contenere campi di una o più tabelle di un database.

- I recordset di tipo snapshot sono una copia statica di un set di record che è possibile utilizzare per trovare i dati o generare rapporti. Questi recordset possono contenere campi da una o più tabelle di un database, ma non possono essere aggiornati.

Ogni forma di recordset rappresenta un set di record corretti al momento dell'apertura del recordset. Quando si scorre un record in un recordset di tipo tabella o in un recordset di tipo dynaset, riflette le modifiche apportate al record dopo l'apertura del recordset, da altri utenti o da altri recordset nell'applicazione. Non è possibile aggiornare un recordset di tipo snapshot. È possibile utilizzare `CDaoRecordset` direttamente o derivare da `CDaoRecordset`una classe recordset specifica dell'applicazione. Sarà quindi possibile:

- Scorrere i record.

- Impostare un indice e cercare rapidamente i record utilizzando [Seek](#seek) (solo recordset di tipo tabella).

- Trovare i record in base a un confronto tra stringhe: "<", "\<=", "=", "> =" o ">" (recordset di tipo dynaset e di tipo snapshot).

- Aggiornare i record e specificare una modalità di blocco (eccetto i recordset di tipo snapshot).

- Filtrare il recordset in modo da vincolare i record selezionati da quelli disponibili nell'origine dati.

- Ordinare il recordset.

- Parametrizzare il recordset per personalizzare la selezione con le informazioni non note fino alla fase di esecuzione.

La classe `CDaoRecordset` fornisce un'interfaccia simile a quella della classe `CRecordset`. La differenza principale consiste nel fatto che la classe `CDaoRecordset` accede ai dati tramite un oggetto DAO (Data Access Object) basato su OLE. La classe `CRecordset` accede al sistema DBMS tramite Open Database Connectivity (ODBC) e un driver ODBC per tale DBMS.

> [!NOTE]
> Le classi di database DAO sono diverse dalle classi di database MFC basate su Open Database Connectivity (ODBC). Tutti i nomi delle classi di database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO. le classi DAO offrono in genere funzionalità superiori perché sono specifiche del motore di database di Microsoft Jet.

È possibile utilizzare `CDaoRecordset` direttamente o derivare una classe da `CDaoRecordset`. Per usare una classe recordset in entrambi i casi, aprire un database e costruire un oggetto recordset, passando al costruttore un puntatore all'oggetto `CDaoDatabase`. È anche possibile costruire un oggetto `CDaoRecordset` e consentire a MFC di creare un oggetto `CDaoDatabase` temporaneo. Chiamare quindi la funzione membro [Open](#open) del recordset, specificando se l'oggetto è un recordset di tipo tabella, un recordset di tipo dynaset o un recordset di tipo snapshot. La chiamata di `Open` consente di selezionare i dati dal database e di recuperare il primo record.

Usare le funzioni membro e i membri dati dell'oggetto per scorrere i record e agire su di essi. Le operazioni disponibili variano a seconda che l'oggetto sia un recordset di tipo tabella, un recordset di tipo dynaset o un recordset di tipo snapshot e sia aggiornabile o di sola lettura, a seconda della capacità del database o Open Database Connectivity (ODBC). origine dati. Per aggiornare i record che potrebbero essere stati modificati o aggiunti dopo la chiamata di `Open`, chiamare la funzione membro di [riquery](#requery) dell'oggetto. Chiamare la funzione membro `Close` dell'oggetto ed eliminare definitivamente l'oggetto al termine dell'oggetto.

`CDaoRecordset` usa lo scambio di campi di record DAO (DFX) per supportare la lettura e l'aggiornamento dei campi C++ di record tramite membri indipendenti dai tipi della `CDaoRecordset` o della classe derivata da `CDaoRecordset`. È inoltre possibile implementare l'associazione dinamica di colonne in un database senza utilizzare il meccanismo DFX utilizzando [GetFieldValue](#getfieldvalue) e [SetFieldValue](#setfieldvalue).

Per informazioni correlate, vedere l'argomento "oggetto recordset" nella Guida di DAO.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CDaoRecordset`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

##  <a name="addnew"></a>CDaoRecordset:: AddNew

Chiamare questa funzione membro per aggiungere un nuovo record a un recordset di tipo tabella o dynaset.

```
virtual void AddNew();
```

### <a name="remarks"></a>Osservazioni

I campi del record sono inizialmente null. Nella terminologia del database, null significa "senza valore" e non è uguale a NULL in C++. Per completare l'operazione, è necessario chiamare la funzione membro [Update](#update) . `Update` Salva le modifiche apportate all'origine dati.

> [!CAUTION]
>  Se si modifica un record e si scorre fino a un altro record senza chiamare `Update`, le modifiche andranno perse senza preavviso.

Se si aggiunge un record a un recordset di tipo dynaset chiamando [AddNew](#addnew), il record è visibile nel recordset e incluso nella tabella sottostante dove diventa visibile a tutti i nuovi oggetti `CDaoRecordset`.

La posizione del nuovo record dipende dal tipo di recordset:

- In un recordset di tipo dynaset, in cui il nuovo record viene inserito non è garantito. Questo comportamento è stato modificato con Microsoft Jet 3,0 per motivi di prestazioni e concorrenza. Se l'obiettivo è quello di creare il record appena aggiunto al record corrente, ottenere il segnalibro dell'ultimo record modificato e passare a tale segnalibro:

[!code-cpp[NVC_MFCDatabase#1](../../mfc/codesnippet/cpp/cdaorecordset-class_1.cpp)]

- In un recordset di tipo tabella per il quale è stato specificato un indice, i record vengono restituiti nella posizione corretta nell'ordinamento. Se non è stato specificato alcun indice, alla fine del recordset vengono restituiti nuovi record.

Il record che era corrente prima dell'utilizzo `AddNew` rimane aggiornato. Se si desidera rendere il nuovo record aggiornato e il recordset supporta i segnalibri, chiamare l'oggetto [textbookmark](#setbookmark) per il segnalibro identificato dall'impostazione della proprietà LastModified dell'oggetto recordset DAO sottostante. Questa operazione è utile per determinare il valore per i campi del contatore (incremento automatico) in un record aggiunto. Per ulteriori informazioni, vedere [GetLastModifiedBookmark](#getlastmodifiedbookmark).

Se il database supporta le transazioni, è possibile fare in modo che il `AddNew` chiami parte di una transazione. Per ulteriori informazioni sulle transazioni, vedere la classe [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md). Si noti che è necessario chiamare [CDaoWorkspace:: BeginTrans](../../mfc/reference/cdaoworkspace-class.md#begintrans) prima di chiamare `AddNew`.

Non è consentito chiamare `AddNew` per un recordset la cui funzione membro [Open](#open) non è stata chiamata. Viene generata un'`CDaoException` se si chiama `AddNew` per un recordset che non può essere accodato. È possibile determinare se il recordset è aggiornabile chiamando [CanAppend](#canappend).

Il Framework contrassegna i membri dati dei campi modificati per assicurarsi che vengano scritti nel record nell'origine dati dal meccanismo di scambio di campi di record (DFX) DAO. Se si modifica il valore di un campo, il campo viene impostato automaticamente come Dirty, quindi è necessario chiamare [SetFieldDirty](#setfielddirty) manualmente, ma in alcuni casi potrebbe essere necessario assicurarsi che le colonne vengano aggiornate o inserite in modo esplicito indipendentemente dal valore del membro dati del campo. Il meccanismo DFX utilizza anche lo **pseudo null**. Per ulteriori informazioni, vedere [CDaoFieldExchange:: m_nOperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).

Se il meccanismo di doppio buffer non viene utilizzato, la modifica del valore del campo non imposta automaticamente il campo come dirty. In questo caso, sarà necessario impostare in modo esplicito il campo Dirty. Il flag contenuto in [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controlla questa verifica automatica dei campi.

> [!NOTE]
> Se i record sono con doppio buffer (ovvero è abilitato il controllo automatico dei campi), la chiamata di `CancelUpdate` ripristinerà le variabili membro ai valori che avevano prima che venisse chiamato `AddNew` o `Edit`.

Per informazioni correlate, vedere gli argomenti "metodo AddNew", "metodo CancelUpdate", "proprietà LastModified" e "proprietà EditMode" nella Guida di DAO.

##  <a name="canappend"></a>CDaoRecordset:: CanAppend

Chiamare questa funzione membro per determinare se il recordset aperto in precedenza consente di aggiungere nuovi record chiamando la funzione membro [AddNew](#addnew) .

```
BOOL CanAppend() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset consente l'aggiunta di nuovi record; in caso contrario, 0. `CanAppend` restituirà 0 se il recordset è stato aperto come di sola lettura.

### <a name="remarks"></a>Osservazioni

Per informazioni correlate, vedere l'argomento "metodo Append" nella Guida di DAO.

##  <a name="canbookmark"></a>CDaoRecordset:: CanBookmark

Chiamare questa funzione membro per determinare se il recordset aperto in precedenza consente di contrassegnare singolarmente i record mediante segnalibri.

```
BOOL CanBookmark();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset supporta segnalibri; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Se si utilizzano recordset basati interamente sulle tabelle del motore di database di Microsoft Jet, è possibile utilizzare i segnalibri tranne che nei recordset di tipo snapshot contrassegnati come recordset di scorrimento di tipo "Avanti". Altri prodotti di database (origini dati ODBC esterne) potrebbero non supportare i segnalibri.

Per informazioni correlate, vedere l'argomento "Proprietà Bookmarkable" nella Guida di DAO.

##  <a name="cancelupdate"></a>CDaoRecordset:: CancelUpdate

La funzione membro `CancelUpdate` Annulla tutti gli aggiornamenti in sospeso a causa di un'operazione di [modifica](#edit) o [AddNew](#addnew) .

```
virtual void CancelUpdate();
```

### <a name="remarks"></a>Osservazioni

Se, ad esempio, un'applicazione chiama la funzione membro `Edit` o `AddNew` e non ha chiamato [Update](#update), `CancelUpdate` Annulla tutte le modifiche apportate dopo la chiamata di `Edit` o `AddNew`.

> [!NOTE]
>  Se i record sono con doppio buffer (ovvero è abilitato il controllo automatico dei campi), la chiamata di `CancelUpdate` ripristinerà le variabili membro ai valori che avevano prima che venisse chiamato `AddNew` o `Edit`.

Se non è presente alcuna operazione `Edit` o `AddNew` in sospeso, `CancelUpdate` fa in modo che MFC generi un'eccezione. Chiamare la funzione membro [GetEditMode](#geteditmode) per determinare se è presente un'operazione in sospeso che può essere annullata.

Per informazioni correlate, vedere l'argomento "metodo CancelUpdate" nella Guida di DAO.

##  <a name="canrestart"></a>CDaoRecordset:: CanRestart

Chiamare questa funzione membro per determinare se il recordset consente il riavvio della query (per aggiornare i record) chiamando la funzione membro `Requery`.

```
BOOL CanRestart();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se è possibile chiamare `Requery` per eseguire nuovamente la query del recordset; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

I recordset di tipo tabella non supportano `Requery`.

Se `Requery` non è supportato, chiamare [Close](#close) , quindi [aprire](#open) per aggiornare i dati. È possibile chiamare `Requery` per aggiornare la query di parametri sottostante di un oggetto recordset dopo che i valori dei parametri sono stati modificati.

Per informazioni correlate, vedere l'argomento "Proprietà riavviabile" nella Guida di DAO.

##  <a name="canscroll"></a>CDaoRecordset:: CanScroll

Chiamare questa funzione membro per determinare se il recordset consente lo scorrimento.

```
BOOL CanScroll() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se è possibile scorrere i record; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Se si chiama [Open](#open) con `dbForwardOnly`, il recordset può scorrere in futuro.

Per informazioni correlate, vedere l'argomento "posizionamento del puntatore di record corrente con DAO" nella Guida di DAO.

##  <a name="cantransact"></a>CDaoRecordset:: CanTransact

Chiamare questa funzione membro per determinare se il recordset consente le transazioni.

```
BOOL CanTransact();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'origine dati sottostante supporta le transazioni; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Per informazioni correlate, vedere l'argomento "Proprietà Transactions" nella Guida di DAO.

##  <a name="canupdate"></a>CDaoRecordset:: CanUpdate

Chiamare questa funzione membro per determinare se il recordset può essere aggiornato.

```
BOOL CanUpdate() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset può essere aggiornato (aggiungere, aggiornare ed eliminare record); in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Un recordset potrebbe essere di sola lettura se l'origine dati sottostante è di sola lettura o se è stato specificato `dbReadOnly` per *nOptions* quando è stato chiamato [Open](#open) per il recordset.

Per informazioni correlate, vedere gli argomenti "metodo AddNew", "modifica metodo", "Elimina metodo", "metodo di aggiornamento" e "proprietà aggiornabile" nella Guida di DAO.

##  <a name="cdaorecordset"></a>CDaoRecordset:: CDaoRecordset

Costruisce un oggetto `CDaoRecordset`.

```
CDaoRecordset(CDaoDatabase* pDatabase = NULL);
```

### <a name="parameters"></a>Parametri

*pDatabase*<br/>
Contiene un puntatore a un oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) o al valore null. Se non è NULL e la funzione membro `Open` dell'oggetto `CDaoDatabase` non è stata chiamata per connetterla all'origine dati, il recordset tenta di aprirlo per l'utente durante la chiamata [aperta](#open) . Se si passa NULL, un oggetto `CDaoDatabase` viene costruito e connesso usando le informazioni sull'origine dati specificate se la classe recordset è stata derivata da `CDaoRecordset`.

### <a name="remarks"></a>Osservazioni

È possibile utilizzare `CDaoRecordset` direttamente o derivare una classe specifica dell'applicazione da `CDaoRecordset`. È possibile utilizzare ClassWizard per derivare le classi recordset.

> [!NOTE]
>  Se si deriva una classe `CDaoRecordset`, la classe derivata deve fornire il proprio costruttore. Nel costruttore della classe derivata chiamare il costruttore `CDaoRecordset::CDaoRecordset`, passandovi i parametri appropriati.

Passare NULL al costruttore del recordset per avere un oggetto `CDaoDatabase` costruito e connesso automaticamente. Si tratta di un collegamento utile che non richiede la creazione e la connessione di un oggetto `CDaoDatabase` prima di creare il recordset. Se l'oggetto `CDaoDatabase` non è aperto, verrà creato anche un oggetto [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) che usa l'area di lavoro predefinita. Per altre informazioni, vedere [CDaoDatabase:: CDaoDatabase](../../mfc/reference/cdaodatabase-class.md#cdaodatabase).

##  <a name="close"></a>CDaoRecordset:: Close

La chiusura di un oggetto `CDaoRecordset` la rimuove dalla raccolta di recordset aperti nel database associato.

```
virtual void Close();
```

### <a name="remarks"></a>Osservazioni

Poiché `Close` non elimina definitivamente l'oggetto `CDaoRecordset`, è possibile riutilizzare l'oggetto chiamando `Open` nella stessa origine dati o in un'origine dati diversa.

Tutte le istruzioni [AddNew](#addnew) o [Edit](#edit) in sospeso vengono annullate e viene eseguito il rollback di tutte le transazioni in sospeso. Se si desidera mantenere aggiunte o modifiche in sospeso, chiamare [Update](#update) prima di chiamare `Close` per ogni recordset.

È possibile chiamare di nuovo `Open` dopo aver chiamato `Close`. In questo modo è possibile riutilizzare l'oggetto recordset. Un'alternativa migliore consiste nel chiamare [Requery](#requery), se possibile.

Per informazioni correlate, vedere l'argomento relativo al metodo Close nella Guida di DAO.

##  <a name="delete"></a>CDaoRecordset::D Elimina

Chiamare questa funzione membro per eliminare il record corrente in un oggetto recordset di tipo di tabella o di tipo dynaset aperto.

```
virtual void Delete();
```

### <a name="remarks"></a>Osservazioni

Al termine dell'eliminazione, i membri dati di campo del recordset vengono impostati su un valore null ed è necessario chiamare in modo esplicito una delle funzioni membro di navigazione del recordset ( [spostamento](#move), [ricerca](#seek), [sesegnalibro](#setbookmark)e così via) per uscire dal record eliminato. Quando si eliminano record da un recordset, prima di chiamare `Delete`è necessario che nel recordset sia presente un record corrente. in caso contrario, MFC genera un'eccezione.

`Delete` rimuove il record corrente e lo rende inaccessibile. Sebbene non sia possibile modificare o utilizzare il record eliminato, rimane aggiornato. Quando si passa a un altro record, tuttavia, non è possibile rendere nuovamente il record eliminato.

> [!CAUTION]
>  Il recordset deve essere aggiornabile e deve essere presente un record valido nel recordset quando si chiama `Delete`. Se, ad esempio, si elimina un record ma non si scorre un nuovo record prima di chiamare di nuovo `Delete`, `Delete` genera un [CDaoException](../../mfc/reference/cdaoexception-class.md).

È possibile annullare l'eliminazione di un record se si usano le transazioni e si chiama la funzione membro [CDaoWorkspace:: rollback](../../mfc/reference/cdaoworkspace-class.md#rollback) . Se la tabella di base è la tabella primaria in una relazione di eliminazione a catena, l'eliminazione del record corrente può anche eliminare uno o più record in una tabella esterna. Per ulteriori informazioni, vedere la definizione "Cascade Delete" nella Guida di DAO.

A differenza di `AddNew` e `Edit`, una chiamata a `Delete` non è seguita da una chiamata a `Update`.

Per informazioni correlate, vedere gli argomenti "metodo AddNew", "modifica metodo", "Elimina metodo", "metodo di aggiornamento" e "proprietà aggiornabile" nella Guida di DAO.

##  <a name="dofieldexchange"></a>CDaoRecordset::D oFieldExchange

Il Framework chiama questa funzione membro per scambiare automaticamente i dati tra i membri dati del campo dell'oggetto recordset e le colonne corrispondenti del record corrente nell'origine dati.

```
virtual void DoFieldExchange(CDaoFieldExchange* pFX);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Contiene un puntatore a un oggetto `CDaoFieldExchange`. Il Framework avrà già configurato questo oggetto per specificare un contesto per l'operazione di scambio dei campi.

### <a name="remarks"></a>Osservazioni

Associa inoltre i membri dati dei parametri, se presenti, ai segnaposto dei parametri nella stringa dell'istruzione SQL per la selezione del recordset. Lo scambio di dati dei campi, denominato DAO Record Field Exchange (DFX), funziona in entrambe le direzioni: dai membri dati del campo dell'oggetto recordset ai campi del record nell'origine dati e dal record nell'origine dati all'oggetto recordset. Se si sta associando le colonne in modo dinamico, non è necessario implementare `DoFieldExchange`.

L'unica azione che è necessario eseguire normalmente per implementare `DoFieldExchange` per la classe recordset derivata consiste nel creare la classe con ClassWizard e specificare i nomi e i tipi di dati dei membri dati del campo. È anche possibile aggiungere codice a quello che ClassWizard scrive per specificare i membri dati del parametro. Se tutti i campi devono essere associati dinamicamente, questa funzione sarà inattiva a meno che non si specifichino i membri dati del parametro.

Quando si dichiara la classe recordset derivata con ClassWizard, la procedura guidata scrive una sostituzione di `DoFieldExchange`, che è simile all'esempio seguente:

[!code-cpp[NVC_MFCDatabase#2](../../mfc/codesnippet/cpp/cdaorecordset-class_2.cpp)]

##  <a name="edit"></a>CDaoRecordset:: Edit

Chiamare questa funzione membro per consentire le modifiche al record corrente.

```
virtual void Edit();
```

### <a name="remarks"></a>Osservazioni

Una volta chiamata la funzione membro `Edit`, le modifiche apportate ai campi del record corrente vengono copiate nel buffer di copia. Dopo avere apportato le modifiche desiderate al record, chiamare `Update` per salvare le modifiche. `Edit` Salva i valori dei membri dati del recordset. Se si chiama `Edit`, si apportano modifiche e quindi si chiama di nuovo `Edit`, i valori del record vengono ripristinati a quello che stavano prima della prima chiamata di `Edit`.

> [!CAUTION]
>  Se si modifica un record e quindi si eseguono operazioni che si spostano in un altro record senza prima chiamare `Update`, le modifiche andranno perse senza preavviso. Inoltre, se si chiude il recordset o il database padre, il record modificato viene rimosso senza preavviso.

In alcuni casi, potrebbe essere necessario aggiornare una colonna rendendola null (che non contiene dati). A tale scopo, chiamare `SetFieldNull` con un parametro TRUE per contrassegnare il campo come null. Questa operazione comporta anche l'aggiornamento della colonna. Se si desidera che un campo venga scritto nell'origine dati anche se il relativo valore non è stato modificato, chiamare `SetFieldDirty` con un parametro TRUE. Questa operazione funziona anche se il valore del campo è null.

Il Framework contrassegna i membri dati dei campi modificati per assicurarsi che vengano scritti nel record nell'origine dati dal meccanismo di scambio di campi di record (DFX) DAO. Se si modifica il valore di un campo, il campo viene impostato automaticamente come Dirty, quindi è necessario chiamare [SetFieldDirty](#setfielddirty) manualmente, ma in alcuni casi potrebbe essere necessario assicurarsi che le colonne vengano aggiornate o inserite in modo esplicito indipendentemente dal valore del membro dati del campo. Il meccanismo DFX utilizza anche lo **pseudo null**. Per ulteriori informazioni, vedere [CDaoFieldExchange:: m_nOperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).

Se il meccanismo di doppio buffer non viene utilizzato, la modifica del valore del campo non imposta automaticamente il campo come dirty. In questo caso, sarà necessario impostare in modo esplicito il campo Dirty. Il flag contenuto in [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controlla questa verifica automatica dei campi.

Quando l'oggetto recordset è pessimisticamente bloccato in un ambiente multiutente, il record rimane bloccato dal momento in cui `Edit` viene utilizzato fino al completamento dell'aggiornamento. Se il recordset è bloccato in modo ottimistico, il record viene bloccato e confrontato con il record già modificato immediatamente prima dell'aggiornamento nel database. Se il record è stato modificato da quando è stato chiamato `Edit`, l'operazione di `Update` ha esito negativo e MFC genera un'eccezione. È possibile modificare la modalità di blocco con `SetLockingMode`.

> [!NOTE]
>  Il blocco ottimistico viene sempre utilizzato nei formati di database esterni, ad esempio ODBC e ISAM installabile.

Il record corrente rimane aggiornato dopo la chiamata a `Edit`. Per chiamare `Edit`, deve essere presente un record corrente. Se non è presente alcun record corrente o se il recordset non fa riferimento a un oggetto recordset aperto di tipo tabella o dynaset, si verificherà un'eccezione. La chiamata di `Edit` causa la generazione di un `CDaoException` nelle condizioni seguenti:

- Nessun record corrente.

- Il database o il recordset è di sola lettura.

- Non sono disponibili campi nel record aggiornabili.

- Il database o il recordset è stato aperto per l'utilizzo esclusivo da parte di un altro utente.

- Un altro utente ha bloccato la pagina che contiene il record.

Se l'origine dati supporta le transazioni, è possibile fare in modo che il `Edit` chiami parte di una transazione. Si noti che è necessario chiamare `CDaoWorkspace::BeginTrans` prima di chiamare `Edit` e dopo l'apertura del recordset. Si noti inoltre che la chiamata di `CDaoWorkspace::CommitTrans` non è un sostituto per chiamare `Update` per completare l'operazione di `Edit`. Per ulteriori informazioni sulle transazioni, vedere Classe `CDaoWorkspace`.

Per informazioni correlate, vedere gli argomenti "metodo AddNew", "modifica metodo", "Elimina metodo", "metodo di aggiornamento" e "proprietà aggiornabile" nella Guida di DAO.

##  <a name="fillcache"></a>CDaoRecordset:: FillCache

Chiamare questa funzione membro per memorizzare nella cache un numero specificato di record dal recordset.

```
void FillCache(
    long* pSize = NULL,
    COleVariant* pBookmark = NULL);
```

### <a name="parameters"></a>Parametri

*pSize*<br/>
Specifica il numero di righe da inserire nella cache. Se si omette questo parametro, il valore viene determinato dall'impostazione della proprietà CacheSize dell'oggetto DAO sottostante.

*pBookmark*<br/>
Oggetto [COleVariant](../../mfc/reference/colevariant-class.md) che specifica un segnalibro. La cache è compilata a partire dal record indicato da questo segnalibro. Se si omette questo parametro, la cache viene riempita a partire dal record indicato dalla proprietà CacheStart dell'oggetto DAO sottostante.

### <a name="remarks"></a>Osservazioni

La memorizzazione nella cache consente di migliorare le prestazioni di un'applicazione che recupera o recupera dati da un server remoto. Una cache è uno spazio nella memoria locale che include i dati recuperati di recente dal server presumendo che i dati verranno probabilmente richiesti nuovamente mentre l'applicazione è in esecuzione. Quando vengono richiesti dati, il motore di database di Microsoft Jet controlla prima di tutto la cache per i dati anziché recuperarli dal server, operazione che richiede più tempo. L'utilizzo della memorizzazione nella cache dei dati sulle origini dati non ODBC non ha alcun effetto in quanto i dati non vengono salvati nella cache.

Anziché attendere che la cache venga compilata con i record quando vengono recuperati, è possibile compilare la cache in modo esplicito in qualsiasi momento chiamando la funzione membro `FillCache`. Si tratta di un modo più rapido per riempire la cache perché `FillCache` recupera più record contemporaneamente anziché uno alla volta. Ad esempio, mentre ogni schermata dei record viene visualizzata, è possibile fare in modo che la chiamata all'applicazione `FillCache` per recuperare la schermata successiva dei record.

Qualsiasi database ODBC a cui si accede con gli oggetti recordset può disporre di una cache locale. Per creare la cache, aprire un oggetto recordset dall'origine dati remota, quindi chiamare le funzioni membro `SetCacheSize` e `SetCacheStart` del recordset. Se *lSize* e *lBookmark* creano un intervallo che è parzialmente o completamente esterno all'intervallo specificato da `SetCacheSize` e `SetCacheStart`, la parte del recordset esterna a questo intervallo viene ignorata e non viene caricata nella cache. Se `FillCache` richiede più record che rimangano nell'origine dati remota, vengono recuperati solo i record rimanenti e non viene generata alcuna eccezione.

I record recuperati dalla cache non riflettono le modifiche apportate simultaneamente ai dati di origine da altri utenti.

`FillCache` recupera solo i record non ancora memorizzati nella cache. Per forzare un aggiornamento di tutti i dati memorizzati nella cache, chiamare la funzione membro `SetCacheSize` con un parametro *lSize* uguale a 0, chiamare di nuovo `SetCacheSize` con il parametro *lSize* uguale alla dimensione della cache richiesta originariamente, quindi chiamare `FillCache`.

Per informazioni correlate, vedere l'argomento "metodo FillCache" nella Guida di DAO.

##  <a name="find"></a>CDaoRecordset:: Find

Chiamare questa funzione membro per individuare una determinata stringa in un recordset di tipo dynaset o snapshot utilizzando un operatore di confronto.

```
virtual BOOL Find(
    long lFindType,
    LPCTSTR lpszFilter);
```

### <a name="parameters"></a>Parametri

*lFindType*<br/>
Valore che indica il tipo di operazione di ricerca desiderata. I valori possibili sono:

- AFX_DAO_NEXT trovare la posizione successiva di una stringa corrispondente.

- AFX_DAO_PREV trovare la posizione precedente di una stringa corrispondente.

- AFX_DAO_FIRST trovare la prima posizione di una stringa corrispondente.

- AFX_DAO_LAST trovare l'ultima posizione di una stringa corrispondente.

*lpszFilter*<br/>
Espressione stringa (come la clausola **where** in un'istruzione SQL senza la parola **where**) utilizzata per individuare il record. Ad esempio:

[!code-cpp[NVC_MFCDatabase#3](../../mfc/codesnippet/cpp/cdaorecordset-class_3.cpp)]

### <a name="return-value"></a>Valore restituito

Diverso da zero se vengono trovati record corrispondenti; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

È possibile trovare la prima istanza, successiva, precedente o ultima della stringa. `Find` è una funzione virtuale, quindi è possibile eseguirne l'override e aggiungere un'implementazione personalizzata. Le funzioni membro `FindFirst`, `FindLast`, `FindNext`e `FindPrev` chiamano la funzione membro `Find`, quindi è possibile utilizzare `Find` per controllare il comportamento di tutte le operazioni di ricerca.

Per individuare un record in un recordset di tipo tabella, chiamare la funzione membro [Seek](#seek) .

> [!TIP]
>  Più è piccolo il set di record disponibili, più efficace sarà il `Find`. In generale, e soprattutto con i dati ODBC, è preferibile creare una nuova query che recuperi solo i record desiderati.

Per informazioni correlate, vedere l'argomento "FindFirst, FindLast, TrovaSuccessivo, FindPrevious Methods" nella Guida di DAO.

##  <a name="findfirst"></a>CDaoRecordset:: FindFirst

Chiamare questa funzione membro per trovare il primo record che corrisponde a una condizione specificata.

```
BOOL FindFirst(LPCTSTR lpszFilter);
```

### <a name="parameters"></a>Parametri

*lpszFilter*<br/>
Espressione stringa (come la clausola **where** in un'istruzione SQL senza la parola **where**) utilizzata per individuare il record.

### <a name="return-value"></a>Valore restituito

Diverso da zero se vengono trovati record corrispondenti; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

La funzione membro `FindFirst` inizia la ricerca dall'inizio del recordset e cerca fino alla fine del recordset.

Se si desidera includere tutti i record nella ricerca (non solo quelli che soddisfano una condizione specifica), utilizzare una delle operazioni di spostamento per spostarsi da un record all'altro. Per individuare un record in un recordset di tipo tabella, chiamare la funzione membro `Seek`.

Se non viene individuato un record corrispondente ai criteri, il puntatore di record corrente non è determinato e `FindFirst` restituisce zero. Se il recordset contiene più di un record che soddisfa i criteri, `FindFirst` individua la prima occorrenza, `FindNext` individua l'occorrenza successiva e così via.

> [!CAUTION]
>  Se si modifica il record corrente, assicurarsi di salvare le modifiche chiamando la funzione membro `Update` prima di passare a un altro record. Se si passa a un altro record senza eseguire l'aggiornamento, le modifiche andranno perse senza preavviso.

Le funzioni membro `Find` ricercano dal percorso e nella direzione specificata nella tabella seguente:

|Operazioni di ricerca|Begin|Direzione ricerca|
|---------------------|-----------|----------------------|
|`FindFirst`|Inizio del recordset|Fine del recordset|
|`FindLast`|Fine del recordset|Inizio del recordset|
|`FindNext`|Record corrente|Fine del recordset|
|`FindPrevious`|Record corrente|Inizio del recordset|

> [!NOTE]
>  Quando si chiama `FindLast`, il motore di database di Microsoft Jet compila completamente il recordset prima di iniziare la ricerca, se non è già stato fatto. La prima ricerca può richiedere più tempo rispetto alle ricerche successive.

L'uso di una delle operazioni di ricerca non corrisponde alla chiamata di `MoveFirst` o `MoveNext`, che rende semplicemente il primo o il record successivo corrente senza specificare una condizione. È possibile seguire un'operazione di ricerca con un'operazione di spostamento.

Quando si usano le operazioni di ricerca, tenere presente quanto segue:

- Se `Find` restituisce un valore diverso da zero, il record corrente non è definito. In questo caso, è necessario posizionare di nuovo il puntatore del record corrente in un record valido.

- Non è possibile usare un'operazione di ricerca con un recordset di tipo snapshot con scorrimento diretto.

- È consigliabile usare il formato di data degli Stati Uniti (mese-giorno-anno) quando si esegue la ricerca di campi contenenti date, anche se non si usa la versione statunitense del motore di database di Microsoft Jet. in caso contrario, i record corrispondenti potrebbero non essere trovati.

- Quando si utilizzano database ODBC e Dynaset di grandi dimensioni, è possibile rilevare che l'utilizzo delle operazioni di ricerca è lento, soprattutto quando si utilizzano recordset di grandi dimensioni. È possibile migliorare le prestazioni usando query SQL con clausole **OrderBy** o **where** personalizzate, query di parametri o oggetti `CDaoQuerydef` che recuperano record indicizzati specifici.

Per informazioni correlate, vedere l'argomento "FindFirst, FindLast, TrovaSuccessivo, FindPrevious Methods" nella Guida di DAO.

##  <a name="findlast"></a>CDaoRecordset:: FindLast

Chiamare questa funzione membro per trovare l'ultimo record che corrisponde a una condizione specificata.

```
BOOL FindLast(LPCTSTR lpszFilter);
```

### <a name="parameters"></a>Parametri

*lpszFilter*<br/>
Espressione stringa (come la clausola **where** in un'istruzione SQL senza la parola **where**) utilizzata per individuare il record.

### <a name="return-value"></a>Valore restituito

Diverso da zero se vengono trovati record corrispondenti; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

La funzione membro `FindLast` inizia la ricerca alla fine del recordset e cerca all'indietro verso l'inizio del recordset.

Se si desidera includere tutti i record nella ricerca (non solo quelli che soddisfano una condizione specifica), utilizzare una delle operazioni di spostamento per spostarsi da un record all'altro. Per individuare un record in un recordset di tipo tabella, chiamare la funzione membro `Seek`.

Se non viene individuato un record corrispondente ai criteri, il puntatore di record corrente non è determinato e `FindLast` restituisce zero. Se il recordset contiene più di un record che soddisfa i criteri, `FindFirst` individua la prima occorrenza, `FindNext` individua l'occorrenza successiva dopo la prima occorrenza e così via.

> [!CAUTION]
>  Se si modifica il record corrente, assicurarsi di salvare le modifiche chiamando la funzione membro `Update` prima di passare a un altro record. Se si passa a un altro record senza eseguire l'aggiornamento, le modifiche andranno perse senza preavviso.

L'uso di una delle operazioni di ricerca non corrisponde alla chiamata di `MoveFirst` o `MoveNext`, che rende semplicemente il primo o il record successivo corrente senza specificare una condizione. È possibile seguire un'operazione di ricerca con un'operazione di spostamento.

Quando si usano le operazioni di ricerca, tenere presente quanto segue:

- Se `Find` restituisce un valore diverso da zero, il record corrente non è definito. In questo caso, è necessario posizionare di nuovo il puntatore del record corrente in un record valido.

- Non è possibile usare un'operazione di ricerca con un recordset di tipo snapshot con scorrimento diretto.

- È consigliabile usare il formato di data degli Stati Uniti (mese-giorno-anno) quando si esegue la ricerca di campi contenenti date, anche se non si usa la versione statunitense del motore di database di Microsoft Jet. in caso contrario, i record corrispondenti potrebbero non essere trovati.

- Quando si utilizzano database ODBC e Dynaset di grandi dimensioni, è possibile rilevare che l'utilizzo delle operazioni di ricerca è lento, soprattutto quando si utilizzano recordset di grandi dimensioni. È possibile migliorare le prestazioni usando query SQL con clausole **OrderBy** o **where** personalizzate, query di parametri o oggetti `CDaoQuerydef` che recuperano record indicizzati specifici.

Per informazioni correlate, vedere l'argomento "FindFirst, FindLast, TrovaSuccessivo, FindPrevious Methods" nella Guida di DAO.

##  <a name="findnext"></a>CDaoRecordset:: TrovaSuccessivo

Chiamare questa funzione membro per trovare il record successivo che corrisponde a una condizione specificata.

```
BOOL FindNext(LPCTSTR lpszFilter);
```

### <a name="parameters"></a>Parametri

*lpszFilter*<br/>
Espressione stringa (come la clausola **where** in un'istruzione SQL senza la parola **where**) utilizzata per individuare il record.

### <a name="return-value"></a>Valore restituito

Diverso da zero se vengono trovati record corrispondenti; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

La funzione membro `FindNext` inizia la ricerca nel record corrente e cerca fino alla fine del recordset.

Se si desidera includere tutti i record nella ricerca (non solo quelli che soddisfano una condizione specifica), utilizzare una delle operazioni di spostamento per spostarsi da un record all'altro. Per individuare un record in un recordset di tipo tabella, chiamare la funzione membro `Seek`.

Se non viene individuato un record corrispondente ai criteri, il puntatore di record corrente non è determinato e `FindNext` restituisce zero. Se il recordset contiene più di un record che soddisfa i criteri, `FindFirst` individua la prima occorrenza, `FindNext` individua l'occorrenza successiva e così via.

> [!CAUTION]
>  Se si modifica il record corrente, assicurarsi di salvare le modifiche chiamando la funzione membro `Update` prima di passare a un altro record. Se si passa a un altro record senza eseguire l'aggiornamento, le modifiche andranno perse senza preavviso.

L'uso di una delle operazioni di ricerca non corrisponde alla chiamata di `MoveFirst` o `MoveNext`, che rende semplicemente il primo o il record successivo corrente senza specificare una condizione. È possibile seguire un'operazione di ricerca con un'operazione di spostamento.

Quando si usano le operazioni di ricerca, tenere presente quanto segue:

- Se `Find` restituisce un valore diverso da zero, il record corrente non è definito. In questo caso, è necessario posizionare di nuovo il puntatore del record corrente in un record valido.

- Non è possibile usare un'operazione di ricerca con un recordset di tipo snapshot con scorrimento diretto.

- È consigliabile usare il formato di data degli Stati Uniti (mese-giorno-anno) quando si esegue la ricerca di campi contenenti date, anche se non si usa la versione statunitense del motore di database di Microsoft Jet. in caso contrario, i record corrispondenti potrebbero non essere trovati.

- Quando si utilizzano database ODBC e Dynaset di grandi dimensioni, è possibile rilevare che l'utilizzo delle operazioni di ricerca è lento, soprattutto quando si utilizzano recordset di grandi dimensioni. È possibile migliorare le prestazioni usando query SQL con clausole **OrderBy** o **where** personalizzate, query di parametri o oggetti `CDaoQuerydef` che recuperano record indicizzati specifici.

Per informazioni correlate, vedere l'argomento "FindFirst, FindLast, TrovaSuccessivo, FindPrevious Methods" nella Guida di DAO.

##  <a name="findprev"></a>CDaoRecordset:: FindPrev

Chiamare questa funzione membro per trovare il record precedente che corrisponde a una condizione specificata.

```
BOOL FindPrev(LPCTSTR lpszFilter);
```

### <a name="parameters"></a>Parametri

*lpszFilter*<br/>
Espressione stringa (come la clausola **where** in un'istruzione SQL senza la parola **where**) utilizzata per individuare il record.

### <a name="return-value"></a>Valore restituito

Diverso da zero se vengono trovati record corrispondenti; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

La funzione membro `FindPrev` inizia la ricerca nel record corrente e cerca all'indietro verso l'inizio del recordset.

Se si desidera includere tutti i record nella ricerca (non solo quelli che soddisfano una condizione specifica), utilizzare una delle operazioni di spostamento per spostarsi da un record all'altro. Per individuare un record in un recordset di tipo tabella, chiamare la funzione membro `Seek`.

Se non viene individuato un record corrispondente ai criteri, il puntatore di record corrente non è determinato e `FindPrev` restituisce zero. Se il recordset contiene più di un record che soddisfa i criteri, `FindFirst` individua la prima occorrenza, `FindNext` individua l'occorrenza successiva e così via.

> [!CAUTION]
>  Se si modifica il record corrente, assicurarsi di salvare le modifiche chiamando la funzione membro `Update` prima di passare a un altro record. Se si passa a un altro record senza eseguire l'aggiornamento, le modifiche andranno perse senza preavviso.

L'uso di una delle operazioni di ricerca non corrisponde alla chiamata di `MoveFirst` o `MoveNext`, che rende semplicemente il primo o il record successivo corrente senza specificare una condizione. È possibile seguire un'operazione di ricerca con un'operazione di spostamento.

Quando si usano le operazioni di ricerca, tenere presente quanto segue:

- Se `Find` restituisce un valore diverso da zero, il record corrente non è definito. In questo caso, è necessario posizionare di nuovo il puntatore del record corrente in un record valido.

- Non è possibile usare un'operazione di ricerca con un recordset di tipo snapshot con scorrimento diretto.

- È consigliabile usare il formato di data degli Stati Uniti (mese-giorno-anno) quando si esegue la ricerca di campi contenenti date, anche se non si usa la versione statunitense del motore di database di Microsoft Jet. in caso contrario, i record corrispondenti potrebbero non essere trovati.

- Quando si utilizzano database ODBC e Dynaset di grandi dimensioni, è possibile rilevare che l'utilizzo delle operazioni di ricerca è lento, soprattutto quando si utilizzano recordset di grandi dimensioni. È possibile migliorare le prestazioni usando query SQL con clausole **OrderBy** o **where** personalizzate, query di parametri o oggetti `CDaoQuerydef` che recuperano record indicizzati specifici.

Per informazioni correlate, vedere l'argomento "FindFirst, FindLast, TrovaSuccessivo, FindPrevious Methods" nella Guida di DAO.

##  <a name="getabsoluteposition"></a>CDaoRecordset:: GetAbsolutePosition

Restituisce il numero di record del record corrente di un oggetto recordset.

```
long GetAbsolutePosition();
```

### <a name="return-value"></a>Valore restituito

Intero compreso tra 0 e il numero di record nel recordset. Corrisponde alla posizione ordinale del record corrente nel recordset.

### <a name="remarks"></a>Osservazioni

Il valore della proprietà AbsolutePosition dell'oggetto DAO sottostante è in base zero. il valore 0 indica il primo record del recordset. È possibile determinare il numero di record popolati nel recordset chiamando [GetRecordCount](#getrecordcount). La chiamata di `GetRecordCount` può richiedere del tempo perché deve accedere a tutti i record per determinare il numero.

Se non è presente alcun record corrente, come quando non sono presenti record nel recordset, viene restituito-1. Se il record corrente viene eliminato, il valore della proprietà AbsolutePosition non è definito e MFC genera un'eccezione se vi si fa riferimento. Per i recordset di tipo dynaset, i nuovi record vengono aggiunti alla fine della sequenza.

> [!NOTE]
>  Questa proprietà non può essere utilizzata come numero di record surrogato. I segnalibri sono ancora il metodo consigliato per mantenere e tornare a una posizione specificata e sono l'unico modo per posizionare il record corrente in tutti i tipi di oggetti recordset. In particolare, la posizione di un determinato record cambia quando i record che lo precedono vengono eliminati. Non esiste inoltre alcuna garanzia che un determinato record avrà la stessa posizione assoluta se il recordset viene ricreato perché l'ordine dei singoli record all'interno di un recordset non è garantito, a meno che non venga creato con un'istruzione SQL utilizzando una clausola **OrderBy** .

> [!NOTE]
>  Questa funzione membro è valida solo per i recordset di tipo dynaset e di tipo snapshot.

Per informazioni correlate, vedere l'argomento "proprietà AbsolutePosition" nella Guida di DAO.

##  <a name="getbookmark"></a>CDaoRecordset:: GetBookmark

Chiamare questa funzione membro per ottenere il valore del segnalibro in un record particolare.

```
COleVariant GetBookmark();
```

### <a name="return-value"></a>Valore restituito

Restituisce un valore che rappresenta il segnalibro nel record corrente.

### <a name="remarks"></a>Osservazioni

Quando viene creato o aperto un oggetto recordset, a ogni record è già associato un segnalibro univoco, se supportato. Chiamare `CanBookmark` per determinare se un recordset supporta i segnalibri.

È possibile salvare il segnalibro per il record corrente assegnando il valore del segnalibro a un oggetto `COleVariant`. Per tornare rapidamente a tale record in qualsiasi momento dopo il passaggio a un record diverso, chiamare `SetBookmark` con un parametro corrispondente al valore di tale `COleVariant` oggetto.

> [!NOTE]
>  La chiamata di [Requery](#requery) modifica i segnalibri DAO.

Per informazioni correlate, vedere l'argomento "Proprietà segnalibro" nella Guida di DAO.

##  <a name="getcachesize"></a>CDaoRecordset:: GetCacheSize

Chiamare questa funzione membro per ottenere il numero di record memorizzati nella cache.

```
long GetCacheSize();
```

### <a name="return-value"></a>Valore restituito

Valore che specifica il numero di record in un recordset di tipo dynaset contenente i dati da memorizzare nella cache locale da un'origine dati ODBC.

### <a name="remarks"></a>Osservazioni

La memorizzazione nella cache dei dati consente di migliorare le prestazioni di un'applicazione che recupera dati da un server remoto tramite oggetti recordset di tipo dynaset. Una cache è uno spazio nella memoria locale che include i dati recuperati più di recente dal server nel caso in cui i dati vengano nuovamente richiesti durante l'esecuzione dell'applicazione. Quando vengono richiesti dati, il motore di database di Microsoft Jet controlla prima di tutto la cache per i dati richiesti anziché recuperarli dal server, operazione che richiede più tempo. I dati che non provengono da un'origine dati ODBC non vengono salvati nella cache.

Qualsiasi origine dati ODBC, ad esempio una tabella collegata, può disporre di una cache locale.

Per informazioni correlate, vedere l'argomento "CacheSize, proprietà CacheStart" nella Guida di DAO.

##  <a name="getcachestart"></a>CDaoRecordset:: GetCacheStart

Chiamare questa funzione membro per ottenere il valore del segnalibro del primo record nel recordset da memorizzare nella cache.

```
COleVariant GetCacheStart();
```

### <a name="return-value"></a>Valore restituito

`COleVariant` che specifica il segnalibro del primo record del recordset da memorizzare nella cache.

### <a name="remarks"></a>Osservazioni

Il motore di database di Microsoft Jet richiede i record all'interno dell'intervallo di cache dalla cache e richiede record al di fuori dell'intervallo di cache dal server.

> [!NOTE]
>  I record recuperati dalla cache non riflettono le modifiche apportate simultaneamente ai dati di origine da altri utenti.

Per informazioni correlate, vedere l'argomento "CacheSize, proprietà CacheStart" nella Guida di DAO.

##  <a name="getcurrentindex"></a>CDaoRecordset:: GetCurrentIndex

Chiamare questa funzione membro per determinare l'indice attualmente in uso in un oggetto `CDaoRecordset` di tipo tabella indicizzato.

```
CString GetCurrentIndex();
```

### <a name="return-value"></a>Valore restituito

`CString` contenente il nome dell'indice attualmente in uso con un recordset di tipo tabella. Restituisce una stringa vuota se non è stato impostato alcun indice.

### <a name="remarks"></a>Osservazioni

Questo indice è la base per l'ordinamento dei record in un recordset di tipo tabella e viene usato dalla funzione membro [Seek](#seek) per individuare i record.

Un oggetto `CDaoRecordset` può disporre di più di un indice, ma può utilizzare un solo indice alla volta, anche se per un oggetto [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) possono essere definiti più indici.

Per informazioni correlate, vedere l'argomento "index Object" e la definizione "Current index" nella Guida di DAO.

##  <a name="getdatecreated"></a>CDaoRecordset:: GetDateCreated

Chiamare questa funzione membro per recuperare la data e l'ora di creazione di una tabella di base.

```
COleDateTime GetDateCreated();
```

### <a name="return-value"></a>Valore restituito

Oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) contenente la data e l'ora di creazione della tabella di base.

### <a name="remarks"></a>Osservazioni

Le impostazioni di data e ora sono derivate dal computer in cui è stata creata la tabella di base.

Per informazioni correlate, vedere l'argomento "DateCreated, proprietà LastUpdated" nella Guida di DAO.

##  <a name="getdatelastupdated"></a>CDaoRecordset:: GetDateLastUpdated

Chiamare questa funzione membro per recuperare la data e l'ora dell'ultimo aggiornamento dello schema.

```
COleDateTime GetDateLastUpdated();
```

### <a name="return-value"></a>Valore restituito

Oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) contenente la data e l'ora dell'ultimo aggiornamento della struttura della tabella di base (schema).

### <a name="remarks"></a>Osservazioni

Le impostazioni di data e ora sono derivate dal computer in cui è stato eseguito l'ultimo aggiornamento della struttura della tabella di base (schema).

Per informazioni correlate, vedere l'argomento "DateCreated, proprietà LastUpdated" nella Guida di DAO.

##  <a name="getdefaultdbname"></a>CDaoRecordset:: GetDefaultDBName

Chiamare questa funzione membro per determinare il nome del database per questo recordset.

```
virtual CString GetDefaultDBName();
```

### <a name="return-value"></a>Valore restituito

`CString` che contiene il percorso e il nome del database da cui viene derivato questo recordset.

### <a name="remarks"></a>Osservazioni

Se un recordset viene creato senza un puntatore a [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md), questo percorso viene utilizzato dal recordset per aprire il database predefinito. Per impostazione predefinita, questa funzione restituisce una stringa vuota. Quando ClassWizard deriva un nuovo recordset da `CDaoRecordset`, questa funzione verrà creata per l'utente.

Nell'esempio seguente viene illustrato l'uso della doppia barra rovesciata (\\\\) nella stringa, così come è necessario per interpretare correttamente la stringa.

[!code-cpp[NVC_MFCDatabase#4](../../mfc/codesnippet/cpp/cdaorecordset-class_4.cpp)]

##  <a name="getdefaultsql"></a>CDaoRecordset:: GetDefaultSQL

Il Framework chiama questa funzione membro per ottenere l'istruzione SQL predefinita su cui è basato il recordset.

```
virtual CString GetDefaultSQL();
```

### <a name="return-value"></a>Valore restituito

`CString` che contiene l'istruzione SQL predefinita.

### <a name="remarks"></a>Osservazioni

Potrebbe trattarsi di un nome di tabella o di un'istruzione SQL **Select** .

Si definisce indirettamente l'istruzione SQL predefinita dichiarando la classe recordset con ClassWizard e ClassWizard esegue questa attività automaticamente.

Se si passa una stringa SQL NULL da [aprire](#open), viene chiamata questa funzione per determinare il nome della tabella o SQL per il recordset.

##  <a name="geteditmode"></a>CDaoRecordset:: GetEditMode

Chiamare questa funzione membro per determinare lo stato della modifica, ovvero uno dei valori seguenti:

```
short GetEditMode();
```

### <a name="return-value"></a>Valore restituito

Restituisce un valore che indica lo stato della modifica del record corrente.

### <a name="remarks"></a>Osservazioni

|valore|Descrizione|
|-----------|-----------------|
|`dbEditNone`|Non è in corso alcuna operazione di modifica.|
|`dbEditInProgress`|È stato chiamato `Edit`.|
|`dbEditAdd`|È stato chiamato `AddNew`.|

Per informazioni correlate, vedere l'argomento "proprietà EditMode" nella Guida di DAO.

##  <a name="getfieldcount"></a>CDaoRecordset:: GetFieldCount

Chiamare questa funzione membro per recuperare il numero di campi (colonne) definiti nel recordset.

```
short GetFieldCount();
```

### <a name="return-value"></a>Valore restituito

Numero di campi nel recordset.

### <a name="remarks"></a>Osservazioni

Per informazioni correlate, vedere l'argomento relativo alla proprietà Count nella Guida di DAO.

##  <a name="getfieldinfo"></a>CDaoRecordset:: GetFieldInfo

Chiamare questa funzione membro per ottenere informazioni sui campi in un recordset.

```
void GetFieldInfo(
    int nIndex,
    CDaoFieldInfo& fieldinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetFieldInfo(
    LPCTSTR lpszName,
    CDaoFieldInfo& fieldinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero del campo predefinito nella raccolta di campi del recordset, per la ricerca in base all'indice.

*FieldInfo*<br/>
Riferimento a una struttura [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) .

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sul recordset da recuperare. Le opzioni disponibili sono elencate qui insieme alla cosa che determina la restituzione della funzione. Per ottenere prestazioni ottimali, recuperare solo il livello di informazioni necessario:

- Nome `AFX_DAO_PRIMARY_INFO` (impostazione predefinita), tipo, dimensioni, attributi

- `AFX_DAO_SECONDARY_INFO` informazioni primarie, più: posizione ordinale, obbligatoria, Consenti lunghezza zero, ordine di confronto, nome esterno, campo di origine, tabella di origine

- `AFX_DAO_ALL_INFO` informazioni primarie e secondarie, più: valore predefinito, regola di convalida, testo di convalida

*lpszName*<br/>
Nome del campo.

### <a name="remarks"></a>Osservazioni

Una versione della funzione consente di cercare un campo in base all'indice. L'altra versione consente di cercare un campo in base al nome.

Per una descrizione delle informazioni restituite, vedere la struttura [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) . Questa struttura dispone di membri che corrispondono agli elementi delle informazioni sopra elencate nella descrizione di *dwInfoOptions*. Quando si richiedono informazioni a un livello, si ottengono anche informazioni per i livelli precedenti.

Per informazioni correlate, vedere l'argomento "proprietà Attributes" nella Guida di DAO.

##  <a name="getfieldvalue"></a>CDaoRecordset:: GetFieldValue

Chiamare questa funzione membro per recuperare i dati in un recordset.

```
virtual void GetFieldValue(
    LPCTSTR lpszName,
    COleVariant& varValue);

virtual void GetFieldValue(
    int nIndex,
    COleVariant& varValue);

virtual COleVariant GetFieldValue(LPCTSTR lpszName);
virtual COleVariant GetFieldValue(int nIndex);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a una stringa che contiene il nome di un campo.

*varValue*<br/>
Riferimento a un oggetto `COleVariant` in cui viene archiviato il valore di un campo.

*nIndex*<br/>
Indice in base zero del campo nella raccolta di campi del recordset, per la ricerca in base all'indice.

### <a name="return-value"></a>Valore restituito

Le due versioni di `GetFieldValue` che restituiscono un valore restituiscono un oggetto [COleVariant](../../mfc/reference/colevariant-class.md) che contiene il valore di un campo.

### <a name="remarks"></a>Osservazioni

È possibile cercare un campo in base al nome o alla posizione ordinale.

> [!NOTE]
>  È più efficiente chiamare una delle versioni di questa funzione membro che accetta un riferimento a un oggetto `COleVariant` come parametro, anziché chiamare una versione che restituisce un oggetto `COleVariant`. Le ultime versioni di questa funzione sono mantenute per compatibilità con le versioni precedenti.

Utilizzare `GetFieldValue` e [SetFieldValue](#setfieldvalue) per associare dinamicamente i campi in fase di esecuzione anziché associare staticamente le colonne utilizzando il meccanismo [DoFieldExchange](#dofieldexchange) .

`GetFieldValue` e il meccanismo di `DoFieldExchange` possono essere combinati per migliorare le prestazioni. Ad esempio, usare `GetFieldValue` per recuperare un valore necessario solo su richiesta e assegnare la chiamata a un pulsante "ulteriori informazioni" nell'interfaccia.

Per informazioni correlate, vedere gli argomenti "Field Object" e "Value Property" nella Guida di DAO.

##  <a name="getindexcount"></a>CDaoRecordset:: GetIndexCount

Chiamare questa funzione membro per determinare il numero di indici disponibili nel recordset del tipo di tabella.

```
short GetIndexCount();
```

### <a name="return-value"></a>Valore restituito

Il numero di indici nel recordset di tipo tabella.

### <a name="remarks"></a>Osservazioni

`GetIndexCount` è utile per il ciclo di tutti gli indici nel recordset. A tale scopo, usare `GetIndexCount` insieme a [GetIndexInfo](#getindexinfo). Se si chiama questa funzione membro sui recordset di tipo dynaset o snapshot, MFC genera un'eccezione.

Per informazioni correlate, vedere l'argomento "proprietà Attributes" nella Guida di DAO.

##  <a name="getindexinfo"></a>CDaoRecordset:: GetIndexInfo

Chiamare questa funzione membro per ottenere vari tipi di informazioni su un indice definito nella tabella di base sottostante un recordset.

```
void GetIndexInfo(
    int nIndex,
    CDaoIndexInfo& indexinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetIndexInfo(
    LPCTSTR lpszName,
    CDaoIndexInfo& indexinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero nella raccolta Indexes della tabella, per la ricerca in base alla posizione numerica.

*indexinfo*<br/>
Riferimento a una struttura [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) .

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni relative all'indice da recuperare. Le opzioni disponibili sono elencate qui insieme alla cosa che determina la restituzione della funzione. Per ottenere prestazioni ottimali, recuperare solo il livello di informazioni necessario:

- Nome `AFX_DAO_PRIMARY_INFO` (impostazione predefinita), informazioni campo, campi

- `AFX_DAO_SECONDARY_INFO` informazioni primarie, più: primario, univoco, cluster, IgnoreNulls, obbligatorio, esterno

- `AFX_DAO_ALL_INFO` informazioni primarie e secondarie, più: Distinct Count

*lpszName*<br/>
Puntatore al nome dell'oggetto indice per la ricerca in base al nome.

### <a name="remarks"></a>Osservazioni

Una versione della funzione consente di cercare un indice in base alla relativa posizione nella raccolta. L'altra versione consente di cercare un indice in base al nome.

Per una descrizione delle informazioni restituite, vedere la struttura [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) . Questa struttura dispone di membri che corrispondono agli elementi delle informazioni sopra elencate nella descrizione di *dwInfoOptions*. Quando si richiedono informazioni a un livello, si ottengono anche informazioni per i livelli precedenti.

Per informazioni correlate, vedere l'argomento "proprietà Attributes" nella Guida di DAO.

##  <a name="getlastmodifiedbookmark"></a>CDaoRecordset:: GetLastModifiedBookmark

Chiamare questa funzione membro per recuperare il segnalibro del record aggiunto o aggiornato più di recente.

```
COleVariant GetLastModifiedBookmark();
```

### <a name="return-value"></a>Valore restituito

`COleVariant` contenente un segnalibro che indica il record aggiunto o modificato più di recente.

### <a name="remarks"></a>Osservazioni

Quando viene creato o aperto un oggetto recordset, a ogni record è già associato un segnalibro univoco, se supportato. Chiamare [GetBookmark](#getbookmark) per determinare se il recordset supporta i segnalibri. Se il recordset non supporta i segnalibri, viene generata un'`CDaoException`.

Quando si aggiunge un record, questo viene visualizzato alla fine del recordset e non è il record corrente. Per rendere aggiornato il nuovo record, chiamare `GetLastModifiedBookmark` e quindi chiamare `SetBookmark` per tornare al record appena aggiunto.

Per informazioni correlate, vedere l'argomento "proprietà LastModified" nella Guida di DAO.

##  <a name="getlockingmode"></a>CDaoRecordset:: GetLockingMode

Chiamare questa funzione membro per determinare il tipo di blocco attivo per il recordset.

```
BOOL GetLockingMode();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il tipo di blocco è pessimistico; in caso contrario, 0 per il blocco di record ottimistico.

### <a name="remarks"></a>Osservazioni

Quando il blocco pessimistico è attivo, la pagina di dati contenente il record che si sta modificando viene bloccata non appena si chiama la funzione membro di [modifica](#edit) . La pagina viene sbloccata quando si chiama la funzione membro [Update](#update) o [Close](#close) o una qualsiasi delle operazioni di spostamento o ricerca.

Quando il blocco ottimistico è attivo, la pagina di dati contenente il record viene bloccata solo quando il record viene aggiornato con la funzione membro `Update`.

Quando si utilizzano origini dati ODBC, la modalità di blocco è sempre ottimistica.

Per informazioni correlate, vedere gli argomenti "proprietà LockEdits" e "comportamento di blocco nelle applicazioni multiutente" nella Guida di DAO.

##  <a name="getname"></a>CDaoRecordset:: GetName

Chiamare questa funzione membro per recuperare il nome del recordset.

```
CString GetName();
```

### <a name="return-value"></a>Valore restituito

`CString` contenente il nome del recordset.

### <a name="remarks"></a>Osservazioni

Il nome del recordset deve iniziare con una lettera e può contenere un massimo di 40 caratteri. Può includere numeri e caratteri di sottolineatura, ma non può includere segni di punteggiatura o spazi.

Per informazioni correlate, vedere l'argomento relativo alla proprietà Name nella Guida di DAO.

##  <a name="getparamvalue"></a>CDaoRecordset:: GetParamValue

Chiamare questa funzione membro per recuperare il valore corrente del parametro specificato archiviato nell'oggetto sottostante DAOParameter sottostante.

```
virtual COleVariant GetParamValue(int nIndex);
virtual COleVariant GetParamValue(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Posizione numerica del parametro nell'oggetto sottostante DAOParameter sottostante.

*lpszName*<br/>
Nome del parametro di cui si desidera il valore.

### <a name="return-value"></a>Valore restituito

Oggetto della classe [COleVariant](../../mfc/reference/colevariant-class.md) che contiene il valore del parametro.

### <a name="remarks"></a>Osservazioni

È possibile accedere al parametro in base al nome o alla posizione numerica nella raccolta.

Per informazioni correlate, vedere l'argomento relativo all'oggetto Parameter nella Guida di DAO.

##  <a name="getpercentposition"></a>CDaoRecordset:: GetPercentPosition

Quando si utilizza un recordset di tipo dynaset o snapshot, se si chiama `GetPercentPosition` prima di popolare completamente il recordset, la quantità di movimento è relativa al numero di record a cui si accede come indicato chiamando [GetRecordCount](#getrecordcount).

```
float GetPercentPosition();
```

### <a name="return-value"></a>Valore restituito

Numero compreso tra 0 e 100 che indica la posizione approssimativa del record corrente nell'oggetto recordset in base a una percentuale dei record nel recordset.

### <a name="remarks"></a>Osservazioni

È possibile passare all'ultimo record chiamando [MoveLast](#movelast) per completare il popolamento di tutti i recordset, ma l'operazione potrebbe richiedere una quantità di tempo significativa.

È possibile chiamare `GetPercentPosition` per tutti e tre i tipi di oggetti recordset, incluse le tabelle senza indici. Non è tuttavia possibile chiamare `GetPercentPosition` per gli snapshot di scorrimento in avanti o su un recordset aperto da una query pass-through su un database esterno. Se non è presente alcun record corrente o il record corrente è stato eliminato, viene generata un'`CDaoException`.

Per informazioni correlate, vedere l'argomento "proprietà PercentPosition" nella Guida di DAO.

##  <a name="getrecordcount"></a>CDaoRecordset:: GetRecordCount

Chiamare questa funzione membro per individuare il numero di record in un recordset a cui è stato eseguito l'accesso.

```
long GetRecordCount();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di record a cui si accede in un oggetto recordset.

### <a name="remarks"></a>Osservazioni

`GetRecordCount` non indica il numero di record contenuti in un recordset di tipo dynaset o snapshot, fino a quando non è stato eseguito l'accesso a tutti i record. Il completamento di questa chiamata di funzione membro potrebbe richiedere una quantità di tempo significativa.

Una volta eseguito l'accesso all'ultimo record, il valore restituito indica il numero totale di record non eliminati nel recordset. Per forzare l'accesso all'ultimo record, chiamare la funzione membro `MoveLast` o `FindLast` per il recordset. È anche possibile usare un conteggio SQL per determinare il numero approssimativo di record che la query restituirà.

Quando l'applicazione elimina i record in un recordset di tipo dynaset, il valore restituito di `GetRecordCount` diminuisce. Tuttavia, i record eliminati da altri utenti non vengono riflessi da `GetRecordCount` finché il record corrente non viene posizionato in un record eliminato. Se si esegue una transazione che influisca sul numero di record e successivamente si esegue il rollback della transazione, `GetRecordCount` non rifletterà il numero effettivo di record rimanenti.

Il valore di `GetRecordCount` da un recordset di tipo snapshot non è influenzato dalle modifiche apportate alle tabelle sottostanti.

Il valore di `GetRecordCount` da un recordset di tipo tabella riflette il numero approssimativo di record nella tabella ed è interessato immediatamente dall'aggiunta e l'eliminazione dei record di tabella.

Un recordset senza record restituisce un valore pari a 0. Quando si utilizzano tabelle collegate o database ODBC, `GetRecordCount` restituisce sempre-1. La chiamata della funzione membro `Requery` su un recordset Reimposta il valore di `GetRecordCount` come se la query venisse eseguita di nuovo.

Per informazioni correlate, vedere l'argomento "proprietà RecordCount" nella Guida di DAO.

##  <a name="getsql"></a>CDaoRecordset:: GetSQL

Chiamare questa funzione membro per ottenere l'istruzione SQL utilizzata per selezionare i record del recordset quando è stato aperto.

```
CString GetSQL() const;
```

### <a name="return-value"></a>Valore restituito

`CString` che contiene l'istruzione SQL.

### <a name="remarks"></a>Osservazioni

Si tratta in genere di un'istruzione SQL **Select** .

La stringa restituita da `GetSQL` è in genere diversa da qualsiasi stringa che potrebbe essere stata passata al recordset nel parametro *lpszSQL* alla funzione membro [Open](#open) . Questo è dovuto al fatto che il recordset crea un'istruzione SQL completa in base a ciò che è stato passato a `Open`, a quanto specificato con ClassWizard e a quanto specificato nei membri [m_strFilter](#m_strfilter) e [m_strSort](#m_strsort) dati.

> [!NOTE]
>  Chiamare questa funzione membro solo dopo avere chiamato `Open`.

Per informazioni correlate, vedere l'argomento "proprietà SQL" nella Guida di DAO.

##  <a name="gettype"></a>CDaoRecordset:: GetType

Chiamare questa funzione membro dopo l'apertura del recordset per determinare il tipo dell'oggetto recordset.

```
short GetType();
```

### <a name="return-value"></a>Valore restituito

Uno dei valori seguenti che indica il tipo di un recordset:

- `dbOpenTable` recordset di tipo tabella

- Recordset di tipo `dbOpenDynaset` dynaset

- `dbOpenSnapshot` recordset di tipo snapshot

### <a name="remarks"></a>Osservazioni

Per informazioni correlate, vedere l'argomento relativo alla proprietà Type nella Guida di DAO.

##  <a name="getvalidationrule"></a>CDaoRecordset:: GetValidationRule

Chiamare questa funzione membro per determinare la regola utilizzata per convalidare i dati.

```
CString GetValidationRule();
```

### <a name="return-value"></a>Valore restituito

Oggetto `CString` contenente un valore che convalida i dati in un record mentre viene modificato o aggiunto a una tabella.

### <a name="remarks"></a>Osservazioni

Questa regola è basata su testo e viene applicata ogni volta che viene modificata la tabella sottostante. Se i dati non sono validi, MFC genera un'eccezione. Il messaggio di errore restituito è il testo della proprietà ValidationText dell'oggetto campo sottostante, se specificato, o il testo dell'espressione specificata dalla proprietà ValidationRule dell'oggetto campo sottostante. È possibile chiamare [GetValidationText](#getvalidationtext) per ottenere il testo del messaggio di errore.

Ad esempio, un campo in un record che richiede il giorno del mese potrebbe avere una regola di convalida, ad esempio "giorno compreso tra 1 e 31".

Per informazioni correlate, vedere l'argomento "Proprietà ValidationRule" nella Guida di DAO.

##  <a name="getvalidationtext"></a>CDaoRecordset:: GetValidationText

Chiamare questa funzione membro per recuperare il testo della proprietà ValidationText dell'oggetto campo sottostante.

```
CString GetValidationText();
```

### <a name="return-value"></a>Valore restituito

Oggetto `CString` contenente il testo del messaggio visualizzato se il valore di un campo non soddisfa la regola di convalida dell'oggetto campo sottostante.

### <a name="remarks"></a>Osservazioni

Per informazioni correlate, vedere l'argomento "proprietà ValidationText" nella Guida di DAO.

##  <a name="isbof"></a>CDaoRecordset:: IsBOF

Chiamare questa funzione membro prima di scorrere da record a record per sapere se si è passati prima del primo record del recordset.

```
BOOL IsBOF() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset non contiene record o se è stato eseguito lo scorrimento indietro prima del primo record; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

È inoltre possibile chiamare `IsBOF` insieme a `IsEOF` per determinare se il recordset contiene record o è vuoto. Immediatamente dopo la chiamata di `Open`, se il recordset non contiene record, `IsBOF` restituisce un valore diverso da zero. Quando si apre un recordset con almeno un record, il primo record è il record corrente e `IsBOF` restituisce 0.

Se il primo record è il record corrente e si chiama `MovePrev`, `IsBOF` restituirà un valore diverso da zero. Se `IsBOF` restituisce un valore diverso da zero e si chiama `MovePrev`, viene generata un'eccezione. Se `IsBOF` restituisce un valore diverso da zero, il record corrente non è definito e qualsiasi azione che richiede un record corrente provocherà un'eccezione.

Effetto di metodi specifici sulle impostazioni `IsBOF` e `IsEOF`:

- La chiamata a `Open*` internamente rende il primo record del recordset il record corrente chiamando `MoveFirst`. Pertanto, la chiamata di `Open` su un set vuoto di record causa la restituzione di un valore diverso da `IsBOF` e `IsEOF`. (Vedere la tabella seguente per il comportamento di una chiamata a `MoveFirst` o `MoveLast` non riuscita).

- Tutte le operazioni di spostamento che individuano correttamente un record determinano che sia `IsBOF` che `IsEOF` restituiscono 0.

- Una chiamata `AddNew` seguita da una chiamata `Update` che inserisce correttamente un nuovo record provocherà la restituzione di `IsBOF` 0, ma solo se `IsEOF` è già diverso da zero. Lo stato del `IsEOF` rimarrà sempre invariato. Come definito dal motore di database di Microsoft Jet, il puntatore di record corrente di un recordset vuoto si trova alla fine di un file, quindi qualsiasi nuovo record viene inserito dopo il record corrente.

- Qualsiasi chiamata `Delete`, anche se rimuove l'unico record rimanente da un recordset, non modifica il valore di `IsBOF` o `IsEOF`.

Questa tabella mostra le operazioni di spostamento consentite con combinazioni diverse di `IsBOF`/ `IsEOF`.

||MoveFirst, MoveLast|MovePrev<br /><br /> Sposta < 0|Sposta 0|MoveNext<br /><br /> Sposta > 0|
|------|-------------------------|-----------------------------|------------|-----------------------------|
|`IsBOF`= diverso da zero,<br /><br /> `IsEOF`=0|Consentito|Eccezione|Eccezione|Consentito|
|`IsBOF`=0,<br /><br /> `IsEOF`= diverso da zero|Consentito|Consentito|Eccezione|Eccezione|
|Entrambi diversi da zero|Eccezione|Eccezione|Eccezione|Eccezione|
|Entrambi 0|Consentito|Consentito|Consentito|Consentito|

Consentire un'operazione di spostamento non significa che l'operazione troverà correttamente un record. Indica semplicemente che un tentativo di eseguire l'operazione di spostamento specificata è consentito e non genererà un'eccezione. Il valore delle funzioni membro `IsBOF` e `IsEOF` può cambiare in seguito al tentativo di spostamento.

La tabella seguente mostra l'effetto delle operazioni di spostamento che non individuano un record sul valore di `IsBOF` e `IsEOF` impostazioni.

||IsBOF|IsEOF|
|------|-----------|-----------|
|`MoveFirst`, `MoveLast`|Diverso da zero|Diverso da zero|
|`Move` 0|Nessuna modifica|Nessuna modifica|
|`MovePrev`, `Move` < 0|Diverso da zero|Nessuna modifica|
|`MoveNext`, `Move` > 0|Nessuna modifica|Diverso da zero|

Per informazioni correlate, vedere l'argomento "BOF, proprietà EOF" nella Guida di DAO.

##  <a name="isdeleted"></a>CDaoRecordset:: è stato eliminato

Chiamare questa funzione membro per determinare se il record corrente è stato eliminato.

```
BOOL IsDeleted() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset è posizionato in corrispondenza di un record eliminato; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Se si scorre fino a un record e `IsDeleted` restituisce TRUE (diverso da zero), è necessario scorrere fino a un altro record prima di poter eseguire qualsiasi altra operazione del recordset.

> [!NOTE]
>  Non è necessario controllare lo stato eliminato per i record in un Recordset snapshot o di tipo tabella. Poiché non è possibile eliminare i record da uno snapshot, non è necessario chiamare `IsDeleted`. Per i recordset di tipo tabella, i record eliminati vengono effettivamente rimossi dal recordset. Una volta che un record è stato eliminato, dall'utente o da un altro utente o da un altro recordset, non è possibile scorrere di nuovo il record. Non è pertanto necessario chiamare `IsDeleted`.

Quando si elimina un record da un dynaset, questo viene rimosso dal recordset e non è possibile scorrere di nuovo il record. Tuttavia, se un record in un oggetto dynaset viene eliminato da un altro utente o da un altro recordset basato sulla stessa tabella, `IsDeleted` restituirà TRUE quando si scorre in un secondo momento fino a tale record.

Per informazioni correlate, vedere gli argomenti "Delete Method", "proprietà LastModified" e "proprietà EditMode" nella Guida di DAO.

##  <a name="iseof"></a>CDaoRecordset:: IsEOF

Chiamare questa funzione membro quando si scorre da record a record per sapere se è stato superato l'ultimo record del recordset.

```
BOOL IsEOF() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il recordset non contiene record o se è stato eseguito lo scorrimento oltre l'ultimo record; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

È inoltre possibile chiamare `IsEOF` per determinare se il recordset contiene record o se è vuoto. Immediatamente dopo la chiamata di `Open`, se il recordset non contiene record, `IsEOF` restituisce un valore diverso da zero. Quando si apre un recordset con almeno un record, il primo record è il record corrente e `IsEOF` restituisce 0.

Se l'ultimo record è il record corrente quando si chiama `MoveNext`, `IsEOF` restituirà un valore diverso da zero. Se `IsEOF` restituisce un valore diverso da zero e si chiama `MoveNext`, viene generata un'eccezione. Se `IsEOF` restituisce un valore diverso da zero, il record corrente non è definito e qualsiasi azione che richiede un record corrente provocherà un'eccezione.

Effetto di metodi specifici sulle impostazioni `IsBOF` e `IsEOF`:

- La chiamata a `Open` internamente rende il primo record del recordset il record corrente chiamando `MoveFirst`. Pertanto, la chiamata di `Open` su un set vuoto di record causa la restituzione di un valore diverso da `IsBOF` e `IsEOF`. Per il comportamento di una chiamata `MoveFirst` non riuscita, vedere la tabella seguente.

- Tutte le operazioni di spostamento che individuano correttamente un record determinano che sia `IsBOF` che `IsEOF` restituiscono 0.

- Una chiamata `AddNew` seguita da una chiamata `Update` che inserisce correttamente un nuovo record provocherà la restituzione di `IsBOF` 0, ma solo se `IsEOF` è già diverso da zero. Lo stato del `IsEOF` rimarrà sempre invariato. Come definito dal motore di database di Microsoft Jet, il puntatore di record corrente di un recordset vuoto si trova alla fine di un file, quindi qualsiasi nuovo record viene inserito dopo il record corrente.

- Qualsiasi chiamata `Delete`, anche se rimuove l'unico record rimanente da un recordset, non modifica il valore di `IsBOF` o `IsEOF`.

Questa tabella mostra le operazioni di spostamento consentite con combinazioni diverse di `IsBOF`/ `IsEOF`.

||MoveFirst, MoveLast|MovePrev<br /><br /> Sposta < 0|Sposta 0|MoveNext<br /><br /> Sposta > 0|
|------|-------------------------|-----------------------------|------------|-----------------------------|
|`IsBOF`= diverso da zero,<br /><br /> `IsEOF`=0|Consentito|Eccezione|Eccezione|Consentito|
|`IsBOF`=0,<br /><br /> `IsEOF`= diverso da zero|Consentito|Consentito|Eccezione|Eccezione|
|Entrambi diversi da zero|Eccezione|Eccezione|Eccezione|Eccezione|
|Entrambi 0|Consentito|Consentito|Consentito|Consentito|

Consentire un'operazione di spostamento non significa che l'operazione troverà correttamente un record. Indica semplicemente che un tentativo di eseguire l'operazione di spostamento specificata è consentito e non genererà un'eccezione. Il valore delle funzioni membro `IsBOF` e `IsEOF` può cambiare in seguito al tentativo di spostamento.

La tabella seguente mostra l'effetto delle operazioni di spostamento che non individuano un record sul valore di `IsBOF` e `IsEOF` impostazioni.

||IsBOF|IsEOF|
|------|-----------|-----------|
|`MoveFirst`, `MoveLast`|Diverso da zero|Diverso da zero|
|`Move` 0|Nessuna modifica|Nessuna modifica|
|`MovePrev`, `Move` < 0|Diverso da zero|Nessuna modifica|
|`MoveNext`, `Move` > 0|Nessuna modifica|Diverso da zero|

Per informazioni correlate, vedere l'argomento "BOF, proprietà EOF" nella Guida di DAO.

##  <a name="isfielddirty"></a>CDaoRecordset:: IsFieldDirty

Chiamare questa funzione membro per determinare se il membro dati del campo specificato di un oggetto dynaset è stato contrassegnato come "Dirty" (modificato).

```
BOOL IsFieldDirty(void* pv);
```

### <a name="parameters"></a>Parametri

*PV*<br/>
Puntatore al membro dati del campo di cui si desidera controllare lo stato o NULL per determinare se uno dei campi è dirty.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il membro dati del campo specificato è contrassegnato come Dirty; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

I dati in tutti i membri dati di campo Dirty verranno trasferiti al record nell'origine dati quando il record corrente viene aggiornato da una chiamata alla funzione membro `Update` di `CDaoRecordset` (in seguito a una chiamata a `Edit` o `AddNew`). Con queste informazioni, è possibile eseguire ulteriori passaggi, ad esempio l'annotazione del membro dati del campo per contrassegnare la colonna in modo che non venga scritta nell'origine dati.

`IsFieldDirty` viene implementato tramite `DoFieldExchange`.

##  <a name="isfieldnull"></a>CDaoRecordset:: IsFieldNull

Chiamare questa funzione membro per determinare se il membro dati del campo specificato di un recordset è stato contrassegnato come null.

```
BOOL IsFieldNull(void* pv);
```

### <a name="parameters"></a>Parametri

*PV*<br/>
Puntatore al membro dati del campo di cui si desidera controllare lo stato o NULL per determinare se uno dei campi è null.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il membro dati del campo specificato è contrassegnato come null. in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Nella terminologia del database, null significa "senza valore" e non è uguale a NULL in C++. Se un membro dati del campo viene contrassegnato come null, viene interpretato come una colonna del record corrente per cui non è presente alcun valore.

> [!NOTE]
>  In alcune situazioni, l'uso di `IsFieldNull` può risultare inefficiente, come illustrato nell'esempio di codice seguente:

[!code-cpp[NVC_MFCDatabase#5](../../mfc/codesnippet/cpp/cdaorecordset-class_5.cpp)]

> [!NOTE]
>  Se si usa l'associazione di record dinamici senza derivare da `CDaoRecordset`, assicurarsi di usare VT_NULL, come illustrato nell'esempio.

##  <a name="isfieldnullable"></a>CDaoRecordset:: IsFieldNullable

Chiamare questa funzione membro per determinare se il membro dati del campo specificato è "Nullable" (può essere impostato su un valore null; C++ Null non è uguale a null, che, nella terminologia del database, significa "senza valore").

```
BOOL IsFieldNullable(void* pv);
```

### <a name="parameters"></a>Parametri

*PV*<br/>
Puntatore al membro dati del campo di cui si desidera controllare lo stato o NULL per determinare se uno dei campi è null.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il membro dati del campo specificato può essere reso null; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Un campo che non può essere null deve avere un valore. Se si tenta di impostare tale campo su null durante l'aggiunta o l'aggiornamento di un record, l'origine dati rifiuterà l'aggiunta o l'aggiornamento e `Update` genererà un'eccezione. L'eccezione si verifica quando si chiama `Update`, non quando si chiama `SetFieldNull`.

##  <a name="isopen"></a>CDaoRecordset:: Open

Chiamare questa funzione membro per determinare se il recordset è aperto.

```
BOOL IsOpen() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione membro `Open` o `Requery` dell'oggetto recordset è stata chiamata in precedenza e il recordset non è stato chiuso; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

##  <a name="m_bcheckcachefordirtyfields"></a>CDaoRecordset:: m_bCheckCacheForDirtyFields

Contiene un flag che indica se i campi memorizzati nella cache vengono contrassegnati automaticamente come Dirty (changed) e null.

### <a name="remarks"></a>Osservazioni

Il valore predefinito del flag è TRUE. L'impostazione in questo membro dati controlla l'intero meccanismo di doppio buffer. Se si imposta il flag su TRUE, è possibile disattivare la memorizzazione nella cache in base al campo usando il meccanismo DFX. Se si imposta il flag su FALSE, è necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

Impostare questo membro dati prima di chiamare `Open`. Questo meccanismo è principalmente per semplicità d'uso. Le prestazioni possono risultare più lente a causa del doppio buffer dei campi quando vengono apportate modifiche.

##  <a name="m_nfields"></a>CDaoRecordset:: m_nFields

Contiene il numero di membri dati di campo nella classe recordset e il numero di colonne selezionate dal recordset dall'origine dati.

### <a name="remarks"></a>Osservazioni

Il costruttore per la classe recordset deve inizializzare `m_nFields` con il numero corretto di campi associati staticamente. ClassWizard scrive questa inizializzazione quando viene usata per dichiarare la classe recordset. È anche possibile scriverlo manualmente.

Il Framework utilizza questo numero per gestire l'interazione tra i membri dati del campo e le colonne corrispondenti del record corrente nell'origine dati.

> [!NOTE]
>  Questo numero deve corrispondere al numero di colonne di output registrate in `DoFieldExchange` dopo una chiamata a `SetFieldType` con il parametro `CDaoFieldExchange::outputColumn`.

È possibile associare le colonne in modo dinamico tramite `CDaoRecordset::GetFieldValue` e `CDaoRecordset::SetFieldValue`. In tal caso, non è necessario incrementare il conteggio in `m_nFields` per riflettere il numero di chiamate di funzione DFX nella funzione membro `DoFieldExchange`.

##  <a name="m_nparams"></a>CDaoRecordset:: m_nParams

Contiene il numero di membri dati del parametro nella classe recordset, ovvero il numero di parametri passati con la query del recordset.

### <a name="remarks"></a>Osservazioni

Se la classe recordset contiene membri dati di parametro, il costruttore per la classe deve inizializzare *m_nParams* con il numero corretto. Il valore di *m_nParams* viene impostato su 0. Se si aggiungono membri dati dei parametri, che è necessario eseguire manualmente, è necessario aggiungere manualmente anche un'inizializzazione nel costruttore della classe per riflettere il numero di parametri (che deve essere almeno uguale al numero di segnaposto '' nell' *m_strFilter* o nella stringa di *m_strSort* ).

Il Framework utilizza questo numero quando parametrizza la query del recordset.

> [!NOTE]
>  Questo numero deve corrispondere al numero di "params" registrato in `DoFieldExchange` dopo una chiamata a `SetFieldType` con il parametro `CFieldExchange::param`.

Per informazioni correlate, vedere l'argomento relativo all'oggetto Parameter nella Guida di DAO.

##  <a name="m_pdaorecordset"></a>CDaoRecordset:: m_pDAORecordset

Contiene un puntatore all'interfaccia OLE per l'oggetto recordset DAO sottostante l'oggetto `CDaoRecordset`.

### <a name="remarks"></a>Osservazioni

Utilizzare questo puntatore se è necessario accedere direttamente all'interfaccia DAO.

Per informazioni correlate, vedere l'argomento "oggetto recordset" nella Guida di DAO.

##  <a name="m_pdatabase"></a>CDaoRecordset:: m_pDatabase

Contiene un puntatore all'oggetto `CDaoDatabase` tramite il quale il recordset è connesso a un'origine dati.

### <a name="remarks"></a>Osservazioni

Questa variabile viene impostata in due modi. In genere, viene passato un puntatore a un oggetto `CDaoDatabase` già aperto quando si costruisce l'oggetto recordset. Se invece si passa NULL, `CDaoRecordset` crea automaticamente un oggetto `CDaoDatabase` e lo apre. In entrambi i casi, `CDaoRecordset` archivia il puntatore in questa variabile.

In genere non è necessario usare direttamente il puntatore archiviato in `m_pDatabase`. Se si scrivono estensioni personalizzate in `CDaoRecordset`, tuttavia, potrebbe essere necessario usare il puntatore. Ad esempio, potrebbe essere necessario il puntatore se si generano `CDaoException`.

Per informazioni correlate, vedere l'argomento relativo all'oggetto di database nella Guida di DAO.

##  <a name="m_strfilter"></a>CDaoRecordset:: m_strFilter

Contiene una stringa utilizzata per costruire la clausola **where** di un'istruzione SQL.

### <a name="remarks"></a>Osservazioni

Non include la parola riservata **dove** filtrare il recordset. L'utilizzo di questo membro dati non è applicabile ai recordset di tipo tabella. L'utilizzo di `m_strFilter` non ha alcun effetto quando si apre un recordset utilizzando un puntatore `CDaoQueryDef`.

Usare il formato di data degli Stati Uniti (mese-giorno-anno) quando si filtrano i campi contenenti date, anche se non si usa la versione statunitense del motore di database di Microsoft Jet. in caso contrario, è possibile che i dati non vengano filtrati come previsto.

Per informazioni correlate, vedere l'argomento relativo alla proprietà Filter nella Guida di DAO.

##  <a name="m_strsort"></a>CDaoRecordset:: m_strSort

Contiene una stringa che contiene la clausola **OrderBy** di un'istruzione SQL senza le parole riservate **OrderBy**.

### <a name="remarks"></a>Osservazioni

È possibile ordinare gli oggetti recordset di tipo di snapshot e dynaset.

Non è possibile ordinare oggetti recordset di tipo tabella. Per determinare l'ordinamento di un recordset di tipo tabella, chiamare [SetCurrentIndex](#setcurrentindex).

L'utilizzo di *m_strSort* non ha alcun effetto quando si apre un recordset utilizzando un puntatore `CDaoQueryDef`.

Per informazioni correlate, vedere l'argomento relativo alla proprietà di ordinamento nella Guida di DAO.

##  <a name="move"></a>CDaoRecordset:: Move

Chiamare questa funzione membro per posizionare i record *lRows* del recordset dal record corrente.

```
virtual void Move(long lRows);
```

### <a name="parameters"></a>Parametri

*lRows*<br/>
Numero di record da spostare in avanti o indietro. I valori positivi si spostano in avanti, verso la fine del recordset. I valori negativi si spostano indietro verso l'inizio.

### <a name="remarks"></a>Osservazioni

È possibile spostarsi avanti o indietro. `Move( 1 )` equivale a `MoveNext`e `Move( -1 )` equivale a `MovePrev`.

> [!CAUTION]
>  La chiamata di una delle funzioni `Move` genera un'eccezione se il recordset non contiene record. In generale, chiamare sia `IsBOF` che `IsEOF` prima di un'operazione di spostamento per determinare se il recordset dispone di record. Una volta chiamato `Open` o `Requery`, chiamare `IsBOF` o `IsEOF`.

> [!NOTE]
>  Se è stato eseguito lo scorrimento oltre l'inizio o la fine del recordset (`IsBOF` o `IsEOF` restituisce un valore diverso da zero), una chiamata a `Move` genera un'`CDaoException`.

> [!NOTE]
>  Se si chiama una delle funzioni `Move` durante l'aggiornamento o l'aggiunta del record corrente, gli aggiornamenti vengono persi senza preavviso.

Quando si chiama `Move` in uno snapshot di scorrimento in avanti, il parametro *lRows* deve essere un numero intero positivo e i segnalibri non sono consentiti, pertanto è possibile procedere solo in avanti.

Per rendere il record primo, ultimo, successivo o precedente in un recordset il record corrente, chiamare la funzione membro `MoveFirst`, `MoveLast`, `MoveNext`o `MovePrev`.

Per informazioni correlate, vedere gli argomenti "Move Method" e "MoveFirst, MoveLast, MoveNext, MovePrevious Methods" nella Guida di DAO.

##  <a name="movefirst"></a>CDaoRecordset:: MoveFirst

Chiamare questa funzione membro per rendere il primo record nel recordset, se presente, il record corrente.

```
void MoveFirst();
```

### <a name="remarks"></a>Osservazioni

Non è necessario chiamare `MoveFirst` immediatamente dopo l'apertura del recordset. In quel momento, il primo record, se presente, rappresenta automaticamente il record corrente.

> [!CAUTION]
>  La chiamata di una delle funzioni `Move` genera un'eccezione se il recordset non contiene record. In generale, chiamare sia `IsBOF` che `IsEOF` prima di un'operazione di spostamento per determinare se il recordset dispone di record. Una volta chiamato `Open` o `Requery`, chiamare `IsBOF` o `IsEOF`.

> [!NOTE]
>  Se si chiama una delle funzioni `Move` durante l'aggiornamento o l'aggiunta del record corrente, gli aggiornamenti vengono persi senza preavviso.

Usare le funzioni `Move` per spostarsi da un record all'altra senza applicare una condizione. Utilizzare le operazioni di ricerca per individuare i record in un oggetto recordset di tipo dynaset o di tipo snapshot che soddisfino una determinata condizione. Per individuare un record in un oggetto recordset di tipo tabella, chiamare `Seek`.

Se il recordset fa riferimento a un recordset di tipo tabella, lo spostamento segue l'indice corrente della tabella. È possibile impostare l'indice corrente utilizzando la proprietà index dell'oggetto DAO sottostante. Se non si imposta l'indice corrente, l'ordine dei record restituiti non è definito.

Se si chiama `MoveLast` su un oggetto recordset basato su una query SQL o un oggetto QueryDef, la query viene forzata fino al completamento e l'oggetto recordset viene popolato completamente.

Non è possibile chiamare la funzione membro `MoveFirst` o `MovePrev` con uno snapshot di scorrimento di sola trasmissione.

Per spostare la posizione del record corrente in un oggetto recordset per un numero specifico di record in avanti o indietro, chiamare `Move`.

Per informazioni correlate, vedere gli argomenti "Move Method" e "MoveFirst, MoveLast, MoveNext, MovePrevious Methods" nella Guida di DAO.

##  <a name="movelast"></a>CDaoRecordset:: MoveLast

Chiamare questa funzione membro per rendere l'ultimo record, se presente, nel recordset il record corrente.

```
void MoveLast();
```

### <a name="remarks"></a>Osservazioni

> [!CAUTION]
>  La chiamata di una delle funzioni `Move` genera un'eccezione se il recordset non contiene record. In generale, chiamare sia `IsBOF` che `IsEOF` prima di un'operazione di spostamento per determinare se il recordset dispone di record. Una volta chiamato `Open` o `Requery`, chiamare `IsBOF` o `IsEOF`.

> [!NOTE]
>  Se si chiama una delle funzioni `Move` durante l'aggiornamento o l'aggiunta del record corrente, gli aggiornamenti vengono persi senza preavviso.

Usare le funzioni `Move` per spostarsi da un record all'altra senza applicare una condizione. Utilizzare le operazioni di ricerca per individuare i record in un oggetto recordset di tipo dynaset o di tipo snapshot che soddisfino una determinata condizione. Per individuare un record in un oggetto recordset di tipo tabella, chiamare `Seek`.

Se il recordset fa riferimento a un recordset di tipo tabella, lo spostamento segue l'indice corrente della tabella. È possibile impostare l'indice corrente utilizzando la proprietà index dell'oggetto DAO sottostante. Se non si imposta l'indice corrente, l'ordine dei record restituiti non è definito.

Se si chiama `MoveLast` su un oggetto recordset basato su una query SQL o un oggetto QueryDef, la query viene forzata fino al completamento e l'oggetto recordset viene popolato completamente.

Per spostare la posizione del record corrente in un oggetto recordset per un numero specifico di record in avanti o indietro, chiamare `Move`.

Per informazioni correlate, vedere gli argomenti "Move Method" e "MoveFirst, MoveLast, MoveNext, MovePrevious Methods" nella Guida di DAO.

##  <a name="movenext"></a>CDaoRecordset:: MoveNext

Chiamare questa funzione membro per rendere il record successivo nel recordset il record corrente.

```
void MoveNext();
```

### <a name="remarks"></a>Osservazioni

Prima di provare a passare al record precedente, è consigliabile chiamare `IsBOF`. Una chiamata a `MovePrev` genererà un'`CDaoException` se `IsBOF` restituisce un valore diverso da zero, indicando che è già stato eseguito lo scorrimento prima del primo record o che nessun record è stato selezionato dal recordset.

> [!CAUTION]
>  La chiamata di una delle funzioni `Move` genera un'eccezione se il recordset non contiene record. In generale, chiamare sia `IsBOF` che `IsEOF` prima di un'operazione di spostamento per determinare se il recordset dispone di record. Una volta chiamato `Open` o `Requery`, chiamare `IsBOF` o `IsEOF`.

> [!NOTE]
>  Se si chiama una delle funzioni `Move` durante l'aggiornamento o l'aggiunta del record corrente, gli aggiornamenti vengono persi senza preavviso.

Usare le funzioni `Move` per spostarsi da un record all'altra senza applicare una condizione. Utilizzare le operazioni di ricerca per individuare i record in un oggetto recordset di tipo dynaset o di tipo snapshot che soddisfino una determinata condizione. Per individuare un record in un oggetto recordset di tipo tabella, chiamare `Seek`.

Se il recordset fa riferimento a un recordset di tipo tabella, lo spostamento segue l'indice corrente della tabella. È possibile impostare l'indice corrente utilizzando la proprietà index dell'oggetto DAO sottostante. Se non si imposta l'indice corrente, l'ordine dei record restituiti non è definito.

Per spostare la posizione del record corrente in un oggetto recordset per un numero specifico di record in avanti o indietro, chiamare `Move`.

Per informazioni correlate, vedere gli argomenti "Move Method" e "MoveFirst, MoveLast, MoveNext, MovePrevious Methods" nella Guida di DAO.

##  <a name="moveprev"></a>CDaoRecordset:: MovePrev

Chiamare questa funzione membro per rendere il record precedente nel recordset il record corrente.

```
void MovePrev();
```

### <a name="remarks"></a>Osservazioni

Prima di provare a passare al record precedente, è consigliabile chiamare `IsBOF`. Una chiamata a `MovePrev` genererà un'`CDaoException` se `IsBOF` restituisce un valore diverso da zero, indicando che è già stato eseguito lo scorrimento prima del primo record o che nessun record è stato selezionato dal recordset.

> [!CAUTION]
>  La chiamata di una delle funzioni `Move` genera un'eccezione se il recordset non contiene record. In generale, chiamare sia `IsBOF` che `IsEOF` prima di un'operazione di spostamento per determinare se il recordset dispone di record. Una volta chiamato `Open` o `Requery`, chiamare `IsBOF` o `IsEOF`.

> [!NOTE]
>  Se si chiama una delle funzioni `Move` durante l'aggiornamento o l'aggiunta del record corrente, gli aggiornamenti vengono persi senza preavviso.

Usare le funzioni `Move` per spostarsi da un record all'altra senza applicare una condizione. Utilizzare le operazioni di ricerca per individuare i record in un oggetto recordset di tipo dynaset o di tipo snapshot che soddisfino una determinata condizione. Per individuare un record in un oggetto recordset di tipo tabella, chiamare `Seek`.

Se il recordset fa riferimento a un recordset di tipo tabella, lo spostamento segue l'indice corrente della tabella. È possibile impostare l'indice corrente utilizzando la proprietà index dell'oggetto DAO sottostante. Se non si imposta l'indice corrente, l'ordine dei record restituiti non è definito.

Non è possibile chiamare la funzione membro `MoveFirst` o `MovePrev` con uno snapshot di scorrimento di sola trasmissione.

Per spostare la posizione del record corrente in un oggetto recordset per un numero specifico di record in avanti o indietro, chiamare `Move`.

Per informazioni correlate, vedere gli argomenti "Move Method" e "MoveFirst, MoveLast, MoveNext, MovePrevious Methods" nella Guida di DAO.

##  <a name="open"></a>CDaoRecordset:: Open

È necessario chiamare questa funzione membro per recuperare i record per il recordset.

```
virtual void Open(
    int nOpenType = AFX_DAO_USE_DEFAULT_TYPE,
    LPCTSTR lpszSQL = NULL,
    int nOptions = 0);

virtual void Open(
    CDaoTableDef* pTableDef,
    int nOpenType = dbOpenTable,
    int nOptions = 0);

virtual void Open(
    CDaoQueryDef* pQueryDef,
    int nOpenType = dbOpenDynaset,
    int nOptions = 0);
```

### <a name="parameters"></a>Parametri

*nOpenType*<br/>
Uno dei valori seguenti:

- `dbOpenDynaset` un recordset di tipo dynaset con scorrimento bidirezionale. Questa è la modalità predefinita.

- `dbOpenTable` un recordset di tipo tabella con scorrimento bidirezionale.

- `dbOpenSnapshot` un recordset di tipo snapshot con scorrimento bidirezionale.

*lpszSQL*<br/>
Puntatore di stringa contenente uno degli elementi seguenti:

- Puntatore NULL.

- Nome di uno o più TableDef e/o QueryDefs (separati da virgola).

- Istruzione SQL **Select** (facoltativamente con una clausola SQL **where** o **OrderBy** ).

- Query pass-through.

*nOptions*<br/>
Una o più delle opzioni elencate di seguito. Il valore predefinito è 0. Sono disponibili i valori seguenti:

- `dbAppendOnly` è possibile aggiungere solo i nuovi record (solo recordset di tipo dynaset). Questa opzione indica letteralmente che i record possono essere aggiunti solo. Le classi di database ODBC MFC hanno un'opzione di sola aggiunta che consente di recuperare e accodare i record.

- `dbForwardOnly` il recordset è uno snapshot di scorrimento di sola trasmissione.

- `dbSeeChanges` genera un'eccezione se un altro utente sta modificando i dati che si stanno modificando.

- `dbDenyWrite` altri utenti non possono modificare o aggiungere record.

- `dbDenyRead` altri utenti non possono visualizzare i record (solo recordset di tipo tabella).

- `dbReadOnly` è possibile visualizzare solo i record; gli altri utenti possono modificarli.

- sono consentiti `dbInconsistent` aggiornamenti non coerenti (solo recordset di tipo dynaset).

- `dbConsistent` sono consentiti solo aggiornamenti coerenti (solo recordset di tipo dynaset).

> [!NOTE]
>  Le costanti `dbConsistent` e `dbInconsistent` si escludono a vicenda. È possibile utilizzare uno o l'altro, ma non entrambi in un'istanza specifica di `Open`.

*pTableDef*<br/>
Puntatore a un oggetto [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) . Questa versione è valida solo per i recordset di tipo tabella. Quando si usa questa opzione, il puntatore `CDaoDatabase` usato per costruire il `CDaoRecordset` non viene usato; il database in cui risiede il TableDef viene invece utilizzato.

*pQueryDef*<br/>
Puntatore a un oggetto [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) . Questa versione è valida solo per i recordset di tipo dynaset e di tipo snapshot. Quando si usa questa opzione, il puntatore `CDaoDatabase` usato per costruire il `CDaoRecordset` non viene usato; viene invece utilizzato il database in cui risiede l'oggetto QueryDef.

### <a name="remarks"></a>Osservazioni

Prima di chiamare `Open`, è necessario creare l'oggetto recordset. Sono disponibili diversi modi per eseguire questa operazione:

- Quando si costruisce l'oggetto recordset, passare un puntatore a un oggetto `CDaoDatabase` già aperto.

- Quando si costruisce l'oggetto recordset, passare un puntatore a un oggetto `CDaoDatabase` non aperto. Il recordset apre un oggetto `CDaoDatabase`, ma non lo chiude quando l'oggetto recordset viene chiuso.

- Quando si costruisce l'oggetto recordset, passare un puntatore NULL. L'oggetto recordset chiama `GetDefaultDBName` per ottenere il nome di Microsoft Access. File MDB da aprire. Il recordset apre quindi un oggetto `CDaoDatabase` e lo mantiene aperto finché il recordset è aperto. Quando si chiama `Close` sul recordset, viene chiuso anche l'oggetto `CDaoDatabase`.

    > [!NOTE]
    >  Quando il recordset apre l'oggetto `CDaoDatabase`, apre l'origine dati con accesso non esclusivo.

Per la versione di `Open` che usa il parametro *lpszSQL* , una volta aperto il recordset è possibile recuperare i record in uno dei diversi modi. La prima opzione consiste nel disporre di funzioni DFX nell'`DoFieldExchange`. La seconda opzione consiste nell'usare l'associazione dinamica chiamando la funzione membro `GetFieldValue`. Queste opzioni possono essere implementate separatamente o in combinazione. Se vengono combinate, sarà necessario passare l'istruzione SQL alla chiamata a `Open`.

Quando si usa la seconda versione di `Open` in cui si passa un oggetto `CDaoTableDef`, le colonne risultanti saranno disponibili per l'associazione tramite `DoFieldExchange` e il meccanismo DFX e/o il binding in modo dinamico tramite `GetFieldValue`.

> [!NOTE]
>  È possibile chiamare `Open` solo utilizzando un oggetto `CDaoTableDef` per i recordset di tipo tabella.

Quando si utilizza la terza versione di `Open` in cui si passa un oggetto `CDaoQueryDef`, tale query verrà eseguita e le colonne risultanti saranno disponibili per l'associazione tramite `DoFieldExchange` e il meccanismo DFX e/o il binding in modo dinamico tramite `GetFieldValue`.

> [!NOTE]
>  È possibile chiamare `Open` solo utilizzando un oggetto `CDaoQueryDef` per i recordset di tipo dynaset e di tipo snapshot.

Per la prima versione di `Open` che utilizza il parametro `lpszSQL`, i record vengono selezionati in base ai criteri indicati nella tabella seguente.

|Valore del parametro `lpszSQL`|I record selezionati sono determinati da|Esempio|
|--------------------------------------|----------------------------------------|-------------|
|NULL|Stringa restituita da `GetDefaultSQL`.||
|Elenco delimitato da virgole di uno o più TableDef e/o nomi di querydef.|Tutte le colonne rappresentate nell'`DoFieldExchange`.|`"Customer"`|
|**Selezionare** l'elenco di colonne nell'elenco **di** tabelle|Colonne specificate dagli oggetti TableDef e/o da querydef specificati.|`"SELECT CustId, CustName`<br /><br /> `FROM Customer"`|

La procedura usuale consiste nel passare NULL a `Open`; in tal caso, `Open` chiama `GetDefaultSQL`, una funzione membro sottoponibile a override generata da ClassWizard durante la creazione di una classe derivata da `CDaoRecordset`. Questo valore assegna i TableDef (s) e/o i nomi di querydef specificati in ClassWizard. È invece possibile specificare altre informazioni nel parametro *lpszSQL* .

Indipendentemente dal passato, `Open` costruisce una stringa SQL finale per la query (la stringa può includere clausole SQL **where** e **OrderBy** accodate alla stringa *lpszSQL* passata), quindi esegue la query. È possibile esaminare la stringa costruita chiamando `GetSQL` dopo aver chiamato `Open`.

I membri dei dati di campo della classe recordset sono associati alle colonne dei dati selezionati. Se vengono restituiti record, il primo di essi diventa il record corrente.

Se si desidera impostare le opzioni per il recordset, ad esempio un filtro o un ordinamento, impostare `m_strSort` o `m_strFilter` dopo la costruzione dell'oggetto recordset, ma prima di chiamare `Open`. Se si desidera aggiornare i record del recordset dopo che il recordset è già aperto, chiamare `Requery`.

Se si chiama `Open` su un recordset di tipo dynaset o snapshot o se l'origine dati fa riferimento a un'istruzione SQL o a un oggetto TableDef che rappresenta una tabella collegata, non è possibile utilizzare `dbOpenTable` per l'argomento di tipo. in tal caso, MFC genera un'eccezione. Per determinare se un oggetto TableDef rappresenta una tabella collegata, creare un oggetto [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) e chiamare la relativa funzione membro [GetConnect](../../mfc/reference/cdaotabledef-class.md#getconnect) .

Usare il flag `dbSeeChanges` se si vuole intercettare le modifiche apportate da un altro utente o da un altro programma nel computer quando si modifica o si elimina lo stesso record. Se, ad esempio, due utenti iniziano a modificare lo stesso record, il primo utente chiama la funzione membro `Update` ha esito positivo. Quando `Update` viene chiamato dal secondo utente, viene generata un'`CDaoException`. Analogamente, se il secondo utente tenta di chiamare `Delete` per eliminare il record ed è già stato modificato dal primo utente, viene eseguita una `CDaoException`.

In genere, se l'utente riceve questo `CDaoException` durante l'aggiornamento, il codice deve aggiornare il contenuto dei campi e recuperare i valori appena modificati. Se l'eccezione si verifica durante l'eliminazione di, il codice potrebbe visualizzare i nuovi dati del record per l'utente e un messaggio che indica che i dati sono stati modificati di recente. A questo punto, il codice può richiedere una conferma che l'utente vuole ancora eliminare il record.

> [!TIP]
>  Utilizzare l'opzione di scorrimento di sola trasmissione (`dbForwardOnly`) per migliorare le prestazioni quando l'applicazione esegue un singolo passaggio tramite un recordset aperto da un'origine dati ODBC.

Per informazioni correlate, vedere l'argomento "metodo OpenRecordset" nella Guida di DAO.

##  <a name="requery"></a>CDaoRecordset:: Requery

Chiamare questa funzione membro per ricompilare (aggiornare) un recordset.

```
virtual void Requery();
```

### <a name="remarks"></a>Osservazioni

Se vengono restituiti record, il primo di essi diventa il record corrente.

Affinché il recordset rifletta le aggiunte e le eliminazioni apportate dall'utente o da altri utenti all'origine dati, è necessario ricompilare il recordset chiamando `Requery`. Se il recordset è di un dynaset, riflette automaticamente gli aggiornamenti apportati dall'utente o da altri utenti ai record esistenti (ma non alle aggiunte). Se il recordset è uno snapshot, è necessario chiamare `Requery` per riflettere le modifiche da parte di altri utenti, nonché aggiunte ed eliminazioni.

Per uno snapshot o un dynaset, chiamare `Requery` ogni volta che si vuole ricompilare il recordset usando i valori dei parametri. Impostare il nuovo filtro o ordinamento impostando [m_strFilter](#m_strfilter) e [m_strSort](#m_strsort) prima di chiamare `Requery`. Impostare nuovi parametri assegnando nuovi valori ai membri dati del parametro prima di chiamare `Requery`.

Se il tentativo di ricompilare il recordset ha esito negativo, il recordset viene chiuso. Prima di chiamare `Requery`, è possibile determinare se è possibile eseguire una query sul recordset chiamando la funzione membro [CanRestart](#canrestart) . `CanRestart` non garantisce che `Requery` avrà esito positivo.

> [!CAUTION]
>  Chiamare `Requery` solo dopo aver chiamato `Open`.

> [!NOTE]
>  La chiamata di [Requery](#requery) modifica i segnalibri DAO.

Non è possibile chiamare `Requery` su un recordset di tipo dynaset o di tipo snapshot se la chiamata di `CanRestart` restituisce 0, né può essere utilizzata in un recordset di tipo tabella.

Se sia `IsBOF` che `IsEOF` restituiscono un valore diverso da zero dopo aver chiamato `Requery`, la query non ha restituito alcun record e il recordset non conterrà dati.

Per informazioni correlate, vedere l'argomento relativo al metodo Requery nella Guida di DAO.

##  <a name="seek"></a>CDaoRecordset:: Seek

Chiamare questa funzione membro per individuare il record in un oggetto recordset di tipo tabella indicizzato che soddisfa i criteri specificati per l'indice corrente e per fare in modo che registri il record corrente.

```
BOOL Seek(
    LPCTSTR lpszComparison,
    COleVariant* pKey1,
    COleVariant* pKey2 = NULL,
    COleVariant* pKey3 = NULL);

BOOL Seek(
    LPCTSTR lpszComparison,
    COleVariant* pKeyArray,
    WORD nKeys);
```

### <a name="parameters"></a>Parametri

*lpszComparison*<br/>
Una delle espressioni stringa seguenti: "<", "\<=", "=", "> =" o ">".

*pKey1*<br/>
Puntatore a un [COleVariant](../../mfc/reference/colevariant-class.md) il cui valore corrisponde al primo campo nell'indice. Obbligatorio.

*pKey2*<br/>
Puntatore a un `COleVariant` il cui valore corrisponde al secondo campo nell'indice, se presente. Il valore predefinito è NULL.

*pKey3*<br/>
Puntatore a un `COleVariant` il cui valore corrisponde al terzo campo nell'indice, se presente. Il valore predefinito è NULL.

*pKeyArray*<br/>
Puntatore a una matrice di varianti. La dimensione della matrice corrisponde al numero di campi nell'indice.

*nKeys*<br/>
Intero che corrisponde alla dimensione della matrice, ovvero al numero di campi nell'indice.

> [!NOTE]
>  Non specificare caratteri jolly nelle chiavi. I caratteri jolly provocheranno che `Seek` non restituiranno record corrispondenti.

### <a name="return-value"></a>Valore restituito

Diverso da zero se vengono trovati record corrispondenti; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Usare la seconda versione (Array) di `Seek` per gestire gli indici di quattro campi o più.

`Seek` consente la ricerca di indici ad alte prestazioni su recordset di tipo tabella. È necessario impostare l'indice corrente chiamando `SetCurrentIndex` prima di chiamare `Seek`. Se l'indice identifica un campo o campi chiave non univoci, `Seek` individua il primo record che soddisfa i criteri. Se non si imposta un indice, viene generata un'eccezione.

Si noti che se non si sta creando un recordset UNICODE, gli oggetti `COleVariant` devono essere dichiarati in modo esplicito ANSI. Questa operazione può essere eseguita usando il form [COleVariant:: COleVariant](../../mfc/reference/colevariant-class.md#colevariant) **(** *lpszSrc* **,** *vtSrc* **)** del costruttore con *vtSrc* impostato su `VT_BSTRT` (ANSI) o usando la funzione `COleVariant` [sestring](../../mfc/reference/colevariant-class.md#setstring) **(** *lpszSrc* **,** *vtSrc* **)** con *vtSrc* impostato su `VT_BSTRT`.

Quando si chiama `Seek`, si passano uno o più valori di chiave e un operatore di confronto ("<", "\<=", "=", "> =" o ">"). `Seek` Cerca nei campi chiave specificati e individua il primo record che soddisfa i criteri specificati da *lpszComparison* e *pKey1*. Una volta trovato, `Seek` restituisce un valore diverso da zero e rende il record corrente. Se `Seek` non riesce a trovare una corrispondenza, `Seek` restituisce zero e il record corrente non è definito. Quando si utilizza direttamente DAO, è necessario controllare in modo esplicito la proprietà NoMatch.

Se `lpszComparison` è "=", "> =" o ">", `Seek` inizia all'inizio dell'indice. Se *lpszComparison* è "<" o "< =", `Seek` viene avviato alla fine dell'indice e viene eseguita una ricerca indietro a meno che non siano presenti voci di indice duplicate alla fine. In questo caso, `Seek` inizia da una voce arbitraria tra le voci di indice duplicate alla fine dell'indice.

Quando si utilizza `Seek`, non è necessario che sia presente un record corrente.

Per individuare un record in un recordset di tipo dynaset o snapshot che soddisfi una condizione specifica, utilizzare le operazioni di ricerca. Per includere tutti i record, non solo quelli che soddisfano una condizione specifica, usare le operazioni di spostamento per spostarsi da un record all'altro.

Non è possibile chiamare `Seek` in una tabella collegata di qualsiasi tipo perché le tabelle collegate devono essere aperte come recordset di tipo dynaset o di tipo snapshot. Tuttavia, se si chiama `CDaoDatabase::Open` per aprire direttamente un database ISAM installabile, è possibile chiamare `Seek` per le tabelle di tale database, anche se le prestazioni potrebbero risultare rallentate.

Per informazioni correlate, vedere l'argomento "seek Method" nella Guida di DAO.

##  <a name="setabsoluteposition"></a>CDaoRecordset:: SetAbsolutePosition

Imposta il numero di record relativo del record corrente di un oggetto recordset.

```
void SetAbsolutePosition(long lPosition);
```

### <a name="parameters"></a>Parametri

*lPosition*<br/>
Corrisponde alla posizione ordinale del record corrente nel recordset.

### <a name="remarks"></a>Osservazioni

La chiamata di `SetAbsolutePosition` consente di posizionare il puntatore di record corrente in un record specifico in base alla posizione ordinale in un recordset di tipo dynaset o snapshot. È anche possibile determinare il numero di record corrente chiamando [GetAbsolutePosition](#getabsoluteposition).

> [!NOTE]
>  Questa funzione membro è valida solo per i recordset di tipo dynaset e di tipo snapshot.

Il valore della proprietà AbsolutePosition dell'oggetto DAO sottostante è in base zero. il valore 0 indica il primo record del recordset. Se si imposta un valore maggiore del numero di record popolati, MFC genera un'eccezione. È possibile determinare il numero di record popolati nel recordset chiamando la funzione membro `GetRecordCount`.

Se il record corrente viene eliminato, il valore della proprietà AbsolutePosition non è definito e MFC genera un'eccezione se vi si fa riferimento. I nuovi record vengono aggiunti alla fine della sequenza.

> [!NOTE]
>  Questa proprietà non può essere utilizzata come numero di record surrogato. I segnalibri sono ancora il metodo consigliato per mantenere e tornare a una determinata posizione e sono l'unico modo per posizionare il record corrente in tutti i tipi di oggetti recordset che supportano i segnalibri. In particolare, la posizione di un determinato record cambia quando i record che lo precedono vengono eliminati. Non esiste inoltre alcuna garanzia che un determinato record avrà la stessa posizione assoluta se il recordset viene ricreato perché l'ordine dei singoli record all'interno di un recordset non è garantito, a meno che non venga creato con un'istruzione SQL utilizzando una clausola **OrderBy** .

Per informazioni correlate, vedere l'argomento "proprietà AbsolutePosition" nella Guida di DAO.

##  <a name="setbookmark"></a>CDaoRecordset:: sesegnalibro

Chiamare questa funzione membro per posizionare il recordset nel record contenente il segnalibro specificato.

```
void SetBookmark(COleVariant varBookmark);
```

### <a name="parameters"></a>Parametri

*varBookmark*<br/>
Oggetto [COleVariant](../../mfc/reference/colevariant-class.md) che contiene il valore del segnalibro per un record specifico.

### <a name="remarks"></a>Osservazioni

Quando si crea o si apre un oggetto recordset, per ognuno dei relativi record è già presente un segnalibro univoco. È possibile recuperare il segnalibro per il record corrente chiamando `GetBookmark` e salvando il valore in un oggetto `COleVariant`. In seguito è possibile tornare a tale record chiamando `SetBookmark` usando il valore del segnalibro salvato.

> [!NOTE]
>  La chiamata di [Requery](#requery) modifica i segnalibri DAO.

Si noti che se non si sta creando un recordset UNICODE, l'oggetto `COleVariant` deve essere dichiarato in modo esplicito ANSI. Questa operazione può essere eseguita usando il form [COleVariant:: COleVariant](../../mfc/reference/colevariant-class.md#colevariant) **(** *lpszSrc* **,** *vtSrc* **)** del costruttore con *vtSrc* impostato su `VT_BSTRT` (ANSI) o usando la funzione `COleVariant` [sestring](../../mfc/reference/colevariant-class.md#setstring) **(** *lpszSrc* **,** *vtSrc* **)** con *vtSrc* impostato su `VT_BSTRT`.

Per informazioni correlate, vedere gli argomenti "Proprietà segnalibro" e proprietà segnalibro "nella Guida di DAO.

##  <a name="setcachesize"></a>CDaoRecordset:: SetCacheSize

Chiamare questa funzione membro per impostare il numero di record da memorizzare nella cache.

```
void SetCacheSize(long lSize);
```

### <a name="parameters"></a>Parametri

*lSize*<br/>
Specifica il numero di record. Un valore tipico è 100. Il valore 0 disattiva la memorizzazione nella cache. L'impostazione deve essere compresa tra 5 e 1200 record. La cache può utilizzare una quantità considerevole di memoria.

### <a name="remarks"></a>Osservazioni

Una cache è uno spazio nella memoria locale che include i dati recuperati più di recente dal server nel caso in cui i dati vengano nuovamente richiesti durante l'esecuzione dell'applicazione. La memorizzazione nella cache dei dati consente di migliorare le prestazioni di un'applicazione che recupera dati da un server remoto tramite oggetti recordset di tipo dynaset. Quando vengono richiesti dati, il motore di database di Microsoft Jet controlla prima di tutto la cache per i dati richiesti anziché recuperarli dal server, operazione che richiede più tempo. I dati che non provengono da un'origine dati ODBC non vengono salvati nella cache.

Qualsiasi origine dati ODBC, ad esempio una tabella collegata, può disporre di una cache locale. Per creare la cache, aprire un oggetto recordset dall'origine dati remota, chiamare le funzioni membro `SetCacheSize` e `SetCacheStart`, quindi chiamare la funzione membro `FillCache` o eseguire un'istruzione alla volta i record utilizzando una delle operazioni di spostamento. Il parametro *lSize* della funzione membro `SetCacheSize` può essere basato sul numero di record che possono essere usati dall'applicazione in una sola volta. Se, ad esempio, si utilizza un recordset come origine dei dati da visualizzare sullo schermo, è possibile passare il `SetCacheSize` parametro *lSize* come 20 per visualizzare 20 record alla volta.

Per informazioni correlate, vedere l'argomento "CacheSize, proprietà CacheStart" nella Guida di DAO.

##  <a name="setcachestart"></a>CDaoRecordset:: SetCacheStart

Chiamare questa funzione membro per specificare il segnalibro del primo record del recordset da memorizzare nella cache.

```
void SetCacheStart(COleVariant varBookmark);
```

### <a name="parameters"></a>Parametri

*varBookmark*<br/>
Oggetto [COleVariant](../../mfc/reference/colevariant-class.md) che specifica il segnalibro del primo record del recordset da memorizzare nella cache.

### <a name="remarks"></a>Osservazioni

È possibile utilizzare il valore del segnalibro di qualsiasi record per il parametro *varBookmark* della funzione membro `SetCacheStart`. Impostare il record che si vuole avviare la cache con il record corrente, stabilire un segnalibro per tale record [usando il](#setbookmark)nome utente e passare il valore del segnalibro come parametro per la funzione membro `SetCacheStart`.

Il motore di database di Microsoft Jet richiede i record all'interno dell'intervallo di cache dalla cache e richiede record al di fuori dell'intervallo di cache dal server.

I record recuperati dalla cache non riflettono le modifiche apportate simultaneamente ai dati di origine da altri utenti.

Per forzare un aggiornamento di tutti i dati memorizzati nella cache, passare il parametro *lSize* di `SetCacheSize` come 0, chiamare di nuovo `SetCacheSize` con la dimensione della cache richiesta originariamente, quindi chiamare la funzione membro `FillCache`.

Si noti che se non si sta creando un recordset UNICODE, l'oggetto `COleVariant` deve essere dichiarato in modo esplicito ANSI. Questa operazione può essere eseguita usando il form [COleVariant:: COleVariant](../../mfc/reference/colevariant-class.md#colevariant) **(** *lpszSrc* **,** *vtSrc* **)** del costruttore con *vtSrc* impostato su `VT_BSTRT` (ANSI) o usando la funzione `COleVariant` [sestring](../../mfc/reference/colevariant-class.md#setstring) **(** *lpszSrc* **,** *vtSrc* **)** con *vtSrc* impostato su `VT_BSTRT`.

Per informazioni correlate, vedere l'argomento CacheSize, proprietà CacheStart nella Guida di DAO.

##  <a name="setcurrentindex"></a>CDaoRecordset:: SetCurrentIndex

Chiamare questa funzione membro per impostare un indice in un recordset di tipo tabella.

```
void SetCurrentIndex(LPCTSTR lpszIndex);
```

### <a name="parameters"></a>Parametri

*lpszIndex*<br/>
Puntatore che contiene il nome dell'indice da impostare.

### <a name="remarks"></a>Osservazioni

I record nelle tabelle di base non vengono archiviati in un ordine particolare. L'impostazione di un indice comporta la modifica dell'ordine dei record restituiti dal database, ma non influisce sull'ordine in cui vengono archiviati i record. L'indice specificato deve essere già definito. Se si tenta di utilizzare un oggetto index che non esiste o se l'indice non è impostato quando si chiama [Seek](#seek), MFC genera un'eccezione.

È possibile creare un nuovo indice per la tabella chiamando [CDaoTableDef:: CreateIndex](../../mfc/reference/cdaotabledef-class.md#createindex) e aggiungendo il nuovo indice alla raccolta Indexes del TableDef sottostante chiamando [CDaoTableDef:: Append](../../mfc/reference/cdaotabledef-class.md#append)e riaprendo il recordset.

I record restituiti da un recordset di tipo tabella possono essere ordinati solo in base agli indici definiti per il TableDef sottostante. Per ordinare i record in un altro ordine, è possibile aprire un recordset di tipo dynaset o snapshot utilizzando una clausola SQL **OrderBy** archiviata in [CDaoRecordset:: m_strSort](#m_strsort).

Per informazioni correlate, vedere l'argomento "index Object" e la definizione "Current index" nella Guida di DAO.

##  <a name="setfielddirty"></a>CDaoRecordset:: SetFieldDirty

Chiamare questa funzione membro per contrassegnare un membro dati di campo del recordset come modificato o come invariato.

```
void SetFieldDirty(
    void* pv,
    BOOL bDirty = TRUE);
```

### <a name="parameters"></a>Parametri

*PV*<br/>
Contiene l'indirizzo di un membro dati di campo nel recordset o NULL. Se è NULL, vengono contrassegnati tutti i membri dati di campo del recordset. (C++ Null è diverso da null nella terminologia del database, ovvero "senza valore").

*bDirty*<br/>
TRUE se il membro dati del campo deve essere contrassegnato come "Dirty" (modificato). In caso contrario, FALSE se il membro dati del campo deve essere contrassegnato come "pulito" (non modificato).

### <a name="remarks"></a>Osservazioni

Contrassegnando i campi come invariati si garantisce che il campo non venga aggiornato.

Il Framework contrassegna i membri dati dei campi modificati per assicurarsi che vengano scritti nel record nell'origine dati dal meccanismo di scambio di campi di record (DFX) DAO. Se si modifica il valore di un campo, il campo viene impostato automaticamente come Dirty, pertanto raramente è necessario chiamare `SetFieldDirty`, ma è talvolta opportuno assicurarsi che le colonne vengano aggiornate o inserite in modo esplicito indipendentemente dal valore del membro dati del campo. Il meccanismo DFX usa anche l'uso di PSEUDONULL. Per ulteriori informazioni, vedere [CDaoFieldExchange:: m_nOperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).

Se il meccanismo di doppio buffer non viene utilizzato, la modifica del valore del campo non imposta automaticamente il campo come dirty. In questo caso, sarà necessario impostare in modo esplicito il campo come dirty. Il flag contenuto in [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controlla questa verifica automatica dei campi.

> [!NOTE]
>  Chiamare questa funzione membro solo dopo aver chiamato [Edit](#edit) o [AddNew](#addnew).

Se si utilizza NULL per il primo argomento della funzione, la funzione viene applicata a tutti i campi `outputColumn`, non ai campi **param** in `CDaoFieldExchange`. Ad esempio, la chiamata

[!code-cpp[NVC_MFCDatabase#6](../../mfc/codesnippet/cpp/cdaorecordset-class_6.cpp)]

imposta solo `outputColumn` campi su NULL; i campi **param** non saranno interessati.

Per usare un **parametro**, è necessario specificare l'indirizzo effettivo del singolo **param** che si vuole usare, ad esempio:

[!code-cpp[NVC_MFCDatabase#7](../../mfc/codesnippet/cpp/cdaorecordset-class_7.cpp)]

Ciò significa che non è possibile impostare tutti i campi **param** su null, come è possibile con `outputColumn` campi.

`SetFieldDirty` viene implementato tramite `DoFieldExchange`.

##  <a name="setfieldnull"></a>CDaoRecordset:: SetFieldNull

Chiamare questa funzione membro per contrassegnare un membro dati di campo del recordset come null (in particolare senza valore) o come non null.

```
void SetFieldNull(
    void* pv,
    BOOL bNull = TRUE);
```

### <a name="parameters"></a>Parametri

*PV*<br/>
Contiene l'indirizzo di un membro dati di campo nel recordset o NULL. Se è NULL, vengono contrassegnati tutti i membri dati di campo del recordset. (C++ Null è diverso da null nella terminologia del database, ovvero "senza valore").

*bNull*<br/>
Diverso da zero se il membro dati del campo deve essere contrassegnato come privo di valore (null). In caso contrario, 0 se il membro dati del campo deve essere contrassegnato come non null.

### <a name="remarks"></a>Osservazioni

`SetFieldNull` viene usato per i campi associati nel meccanismo di `DoFieldExchange`.

Quando si aggiunge un nuovo record a un recordset, tutti i membri dati di campo vengono inizialmente impostati su un valore null e contrassegnati come "Dirty" (modificato). Quando si recupera un record da un'origine dati, le relative colonne dispongono già di valori o sono null. Se non è appropriato rendere un campo null, viene generata un'eccezione [CDaoException](../../mfc/reference/cdaoexception-class.md) .

Se si utilizza il meccanismo di doppio buffering, ad esempio se si desidera designare in modo specifico un campo del record corrente in modo che non disponga di un valore, chiamare `SetFieldNull` con *bNULL* impostato su true per contrassegnarlo come null. Se un campo è stato contrassegnato in precedenza come null e ora si vuole assegnargli un valore, è sufficiente impostarne il nuovo valore. Non è necessario rimuovere il flag null con `SetFieldNull`. Per determinare se il campo può essere null, chiamare [IsFieldNullable](#isfieldnullable).

Se non si utilizza il meccanismo di doppio buffer, la modifica del valore del campo non imposta automaticamente il campo come Dirty e non null. È necessario impostare in modo specifico i campi Dirty e non null. Il flag contenuto in [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controlla questa verifica automatica dei campi.

Il meccanismo DFX utilizza PSEUDONULL. Per ulteriori informazioni, vedere [CDaoFieldExchange:: m_nOperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).

> [!NOTE]
>  Chiamare questa funzione membro solo dopo aver chiamato [Edit](#edit) o [AddNew](#addnew).

Se si utilizza NULL per il primo argomento della funzione, la funzione viene applicata solo ai campi `outputColumn`, non ai campi **param** in `CDaoFieldExchange`. Ad esempio, la chiamata

[!code-cpp[NVC_MFCDatabase#8](../../mfc/codesnippet/cpp/cdaorecordset-class_8.cpp)]

imposta solo `outputColumn` campi su NULL; i campi **param** non saranno interessati.

##  <a name="setfieldvalue"></a>CDaoRecordset:: SetFieldValue

Chiamare questa funzione membro per impostare il valore di un campo in base alla posizione ordinale o modificando il valore della stringa.

```
virtual void SetFieldValue(
    LPCTSTR lpszName,
    const COleVariant& varValue);

virtual void SetFieldValue(
    int nIndex,
    const COleVariant& varValue);

void SetFieldValue(
    LPCTSTR lpszName,
    LPCTSTR lpszValue);

void SetFieldValue(
    int nIndex,
    LPCTSTR lpszValue);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a una stringa che contiene il nome di un campo.

*varValue*<br/>
Riferimento a un oggetto [COleVariant](../../mfc/reference/colevariant-class.md) contenente il valore del contenuto del campo.

*nIndex*<br/>
Integer che rappresenta la posizione ordinale del campo nella raccolta di campi del recordset (in base zero).

*lpszValue*<br/>
Puntatore a una stringa che contiene il valore del contenuto del campo.

### <a name="remarks"></a>Osservazioni

Utilizzare `SetFieldValue` e [GetFieldValue](#getfieldvalue) per associare dinamicamente i campi in fase di esecuzione anziché associare staticamente le colonne utilizzando il meccanismo [DoFieldExchange](#dofieldexchange) .

Si noti che se non si sta creando un recordset UNICODE, è necessario utilizzare una forma di `SetFieldValue` che non contenga un parametro `COleVariant` oppure l'oggetto `COleVariant` deve essere dichiarato in modo esplicito ANSI. Questa operazione può essere eseguita usando il form [COleVariant:: COleVariant](../../mfc/reference/colevariant-class.md#colevariant) **(** *lpszSrc* **,** *vtSrc* **)** del costruttore con *vtSrc* impostato su `VT_BSTRT` (ANSI) o usando la funzione `COleVariant` [sestring](../../mfc/reference/colevariant-class.md#setstring) **(** *lpszSrc* **,** *vtSrc* **)** con *vtSrc* impostato su `VT_BSTRT`.

Per informazioni correlate, vedere gli argomenti "Field Object" e "Value Property" nella Guida di DAO.

##  <a name="setfieldvaluenull"></a>CDaoRecordset:: SetFieldValueNull

Chiamare questa funzione membro per impostare il campo su un valore null.

```
void SetFieldValueNull(int nIndex);
void SetFieldValueNull(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del campo nel recordset, per la ricerca in base all'indice in base zero.

*lpszName*<br/>
Nome del campo nel recordset, per la ricerca in base al nome.

### <a name="remarks"></a>Osservazioni

C++NULL è diverso da null, che, nella terminologia del database, significa "senza valore".

Per informazioni correlate, vedere gli argomenti "Field Object" e "Value Property" nella Guida di DAO.

##  <a name="setlockingmode"></a>CDaoRecordset:: SetLockingMode

Chiamare questa funzione membro per impostare il tipo di blocco per il recordset.

```
void SetLockingMode(BOOL bPessimistic);
```

### <a name="parameters"></a>Parametri

*bPessimistic*<br/>
Flag che indica il tipo di blocco.

### <a name="remarks"></a>Osservazioni

Quando il blocco pessimistico è attivo, la pagina 2K contenente il record che si sta modificando viene bloccata non appena si chiama la funzione membro `Edit`. La pagina viene sbloccata quando si chiama la funzione membro `Update` o `Close` o qualsiasi operazione di spostamento o ricerca.

Quando il blocco ottimistico è attivo, la pagina 2K che contiene il record viene bloccata solo quando il record viene aggiornato con la funzione membro `Update`.

Se una pagina è bloccata, nessun altro utente potrà modificare i record nella stessa pagina. Se si chiama `SetLockingMode` e si passa un valore diverso da zero e un altro utente dispone già della pagina bloccata, viene generata un'eccezione quando si chiama `Edit`. Altri utenti possono leggere i dati da pagine bloccate.

Se si chiama `SetLockingMode` con un valore zero e una chiamata successiva `Update` mentre la pagina è bloccata da un altro utente, si verificherà un'eccezione. Per visualizzare le modifiche apportate al record da un altro utente e perdere le modifiche, chiamare la funzione membro `SetBookmark` con il valore del segnalibro del record corrente.

Quando si utilizzano origini dati ODBC, la modalità di blocco è sempre ottimistica.

##  <a name="setparamvalue"></a>CDaoRecordset:: SetParamValue

Chiamare questa funzione membro per impostare il valore di un parametro nel recordset in fase di esecuzione.

```
virtual void SetParamValue(
    int nIndex,
    const COleVariant& varValue);

virtual void SetParamValue(
    LPCTSTR lpszName,
    const COleVariant& varValue);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Posizione numerica del parametro nella raccolta di parametri di querydef.

*var*<br/>
Valore da impostare. vedere la sezione Osservazioni.

*lpszName*<br/>
Nome del parametro di cui si desidera impostare il valore.

### <a name="remarks"></a>Osservazioni

Il parametro deve essere già stato definito come parte della stringa SQL del recordset. È possibile accedere al parametro in base al nome o alla posizione di indice nella raccolta.

Specificare il valore da impostare come oggetto `COleVariant`. Per informazioni sull'impostazione del valore desiderato e sul tipo nell'oggetto `COleVariant`, vedere la classe [COleVariant](../../mfc/reference/colevariant-class.md). Si noti che se non si sta creando un recordset UNICODE, l'oggetto `COleVariant` deve essere dichiarato in modo esplicito ANSI. Questa operazione può essere eseguita usando il form [COleVariant:: COleVariant](../../mfc/reference/colevariant-class.md#colevariant) **(** *lpszSrc* **,** *vtSrc* **)** del costruttore con *vtSrc* impostato su `VT_BSTRT` (ANSI) o usando la funzione `COleVariant` [sestring](../../mfc/reference/colevariant-class.md#setstring) **(** *lpszSrc* **,** *vtSrc* **)** con *vtSrc* impostato su `VT_BSTRT`.

##  <a name="setparamvaluenull"></a>CDaoRecordset:: SetParamValueNull

Chiamare questa funzione membro per impostare il parametro su un valore null.

```
void SetParamValueNull(int nIndex);
void SetParamValueNull(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del campo nel recordset, per la ricerca in base all'indice in base zero.

*lpszName*<br/>
Nome del campo nel recordset, per la ricerca in base al nome.

### <a name="remarks"></a>Osservazioni

C++NULL è diverso da null, che, nella terminologia del database, significa "senza valore".

##  <a name="setpercentposition"></a>CDaoRecordset:: SetPercentPosition

Chiamare questa funzione membro per impostare un valore che modifica la posizione approssimativa del record corrente nell'oggetto recordset in base a una percentuale dei record nel recordset.

```
void SetPercentPosition(float fPosition);
```

### <a name="parameters"></a>Parametri

*fPosition*<br/>
Numero compreso tra 0 e 100.

### <a name="remarks"></a>Osservazioni

Quando si utilizza un recordset di tipo dynaset o snapshot, è necessario innanzitutto popolare il recordset passando all'ultimo record prima di chiamare `SetPercentPosition`. Se si chiama `SetPercentPosition` prima di popolare completamente il recordset, la quantità di movimento è relativa al numero di record a cui si accede come indicato dal valore di [GetRecordCount](#getrecordcount). È possibile passare all'ultimo record chiamando `MoveLast`.

Una volta chiamato `SetPercentPosition`, il record in corrispondenza della posizione approssimativa corrispondente a tale valore diventa corrente.

> [!NOTE]
>  Non è consigliabile chiamare `SetPercentPosition` per spostare il record corrente in un record specifico in un recordset. Chiamare invece la funzione membro [sebookmark](#setbookmark) .

Per informazioni correlate, vedere l'argomento "proprietà PercentPosition" nella Guida di DAO.

##  <a name="update"></a>CDaoRecordset:: Update

Chiamare questa funzione membro dopo una chiamata alla funzione membro `AddNew` o `Edit`.

```
virtual void Update();
```

### <a name="remarks"></a>Osservazioni

Questa chiamata è necessaria per completare l'operazione di `AddNew` o `Edit`.

Sia `AddNew` che `Edit` preparano un buffer di modifica in cui vengono inseriti i dati aggiunti o modificati per il salvataggio nell'origine dati. `Update` Salva i dati. Vengono aggiornati solo i campi contrassegnati o rilevati come modificati.

Se l'origine dati supporta le transazioni, è possibile eseguire la chiamata `Update` (e la corrispondente `AddNew` o chiamata `Edit`) di una transazione.

> [!CAUTION]
> Se si chiama `Update` senza chiamare prima `AddNew` o `Edit`, `Update` genera un'`CDaoException`. Se si chiama `AddNew` o `Edit`, è necessario chiamare `Update` prima di chiamare [MoveNext](#movenext) o chiudere il recordset o la connessione all'origine dati. In caso contrario, le modifiche andranno perse senza notifica.

Quando l'oggetto recordset è pessimisticamente bloccato in un ambiente multiutente, il record rimane bloccato dal momento in cui `Edit` viene utilizzato fino al completamento dell'aggiornamento. Se il recordset è bloccato in modo ottimistico, il record viene bloccato e confrontato con il record già modificato immediatamente prima dell'aggiornamento nel database. Se il record è stato modificato da quando è stato chiamato `Edit`, l'operazione di `Update` ha esito negativo e MFC genera un'eccezione. È possibile modificare la modalità di blocco con `SetLockingMode`.

> [!NOTE]
> Il blocco ottimistico viene sempre utilizzato nei formati di database esterni, ad esempio ODBC e ISAM installabile.

Per informazioni correlate, vedere gli argomenti "metodo AddNew", "metodo CancelUpdate", "Elimina metodo", "proprietà LastModified", "metodo di aggiornamento" e "proprietà EditMode" nella Guida di DAO.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)<br/>
[Classe CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md)<br/>
[Classe CDaoDatabase](../../mfc/reference/cdaodatabase-class.md)<br/>
[Classe CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md)<br/>

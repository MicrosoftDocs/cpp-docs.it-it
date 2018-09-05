---
title: Classe CDaoRecordset | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a1db997dd81b339901bf3cf3017a766e17aa8cfb
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43758453"
---
# <a name="cdaorecordset-class"></a>CDaoRecordset (classe)

Rappresenta un set di record selezionati da un'origine dati.

## <a name="syntax"></a>Sintassi

```
class CDaoRecordset : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoRecordset::CDaoRecordset](#cdaorecordset)|Costruisce un oggetto `CDaoRecordset`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoRecordset:: AddNew](#addnew)|Prepara per l'aggiunta di un nuovo record. Chiamare [Update](#update) per completare l'aggiunta.|
|[CDaoRecordset::CanAppend](#canappend)|Restituisce diversi da zero se è possibile aggiungere nuovi record al set di record tramite il [AddNew](#addnew) funzione membro.|
|[CDaoRecordset:: CanBookmark](#canbookmark)|Restituisce diversi da zero se il recordset supporta segnalibri.|
|[CDaoRecordset::CancelUpdate](#cancelupdate)|Annulla eventuali aggiornamenti in sospeso a causa dell'errore un' [Edit](#edit) oppure [AddNew](#addnew) operazione.|
|[CDaoRecordset::CanRestart](#canrestart)|Restituisce se diverso da zero [Requery](#requery) può essere chiamato per eseguire nuovamente la query del recordset.|
|[CDaoRecordset::CanScroll](#canscroll)|Restituisce diversi da zero se è possibile scorrere i record.|
|[CDaoRecordset::CanTransact](#cantransact)|Restituisce diversi da zero se l'origine dati supporta le transazioni.|
|[CDaoRecordset::CanUpdate](#canupdate)|Restituisce diversi da zero se il set di record possono essere aggiornati (si può aggiungere, aggiornare o eliminare i record).|
|[CDaoRecordset::Close](#close)|Chiude il recordset.|
|[CDaoRecordset::Delete](#delete)|Elimina il record corrente dal recordset. È necessario scorrere in modo esplicito a un altro record dopo l'eliminazione.|
|[CDaoRecordset::DoFieldExchange](#dofieldexchange)|Chiamata eseguita per lo scambio di dati (in entrambe le direzioni) tra i membri di dati del campo del set di record e record corrispondente nell'origine dati. Implementa DAO campi di record (DFX).|
|[CDaoRecordset:: Edit](#edit)|Prepara per le modifiche apportate al record corrente. Chiamare `Update` per completare la modifica.|
|[CDaoRecordset:: FillCache](#fillcache)|Riempie tutta o parte di una cache locale per un oggetto recordset che contiene i dati da un'origine dati ODBC.|
|[CDaoRecordset::Find](#find)|Individua innanzitutto successivo, precedente, o nell'ultima posizione di una determinata stringa in un recordset di tipo dynaset che soddisfa i criteri specificati e imposta che il record corrente.|
|[CDaoRecordset::FindFirst](#findfirst)|Individua il primo record in un tipo dynaset o recordset di tipo di snapshot che soddisfa i criteri specificati e imposta che il record corrente.|
|[CDaoRecordset::FindLast](#findlast)|Individua l'ultimo record in un tipo dynaset o recordset di tipo di snapshot che soddisfa i criteri specificati e imposta che il record corrente.|
|[CDaoRecordset::FindNext](#findnext)|Individua il record successivo in un tipo dynaset o recordset di tipo di snapshot che soddisfa i criteri specificati e imposta che il record corrente.|
|[CDaoRecordset::FindPrev](#findprev)|Individua il record precedente in un tipo dynaset o recordset di tipo di snapshot che soddisfa i criteri specificati e imposta che il record corrente.|
|[CDaoRecordset::GetAbsolutePosition](#getabsoluteposition)|Restituisce il numero del record corrente dell'oggetto recordset.|
|[CDaoRecordset:: GetBookmark](#getbookmark)|Restituisce un valore che rappresenta il segnalibro in un record.|
|[CDaoRecordset::GetCacheSize](#getcachesize)|Restituisce un valore che specifica il numero di record in un recordset dynaset-type contenente i dati in locale da memorizzare nella cache da un'origine dati ODBC.|
|[CDaoRecordset::GetCacheStart](#getcachestart)|Restituisce un valore che specifica il segnalibro del primo record del recordset da memorizzare nella cache.|
|[CDaoRecordset::GetCurrentIndex](#getcurrentindex)|Restituisce un `CString` che contiene più di recente il nome dell'indice utilizzato in un tipo di tabella, indicizzato `CDaoRecordset`.|
|[CDaoRecordset::GetDateCreated](#getdatecreated)|Restituisce la data e ora la tabella di base sottostante un `CDaoRecordset` oggetto è stato creato|
|[CDaoRecordset::GetDateLastUpdated](#getdatelastupdated)|Restituisce la data e ora dell'ultima modifica apportata apportata alla progettazione di una tabella di base sottostante un `CDaoRecordset` oggetto.|
|[CDaoRecordset::GetDefaultDBName](#getdefaultdbname)|Restituisce il nome dell'origine dati predefinito.|
|[CDaoRecordset::GetDefaultSQL](#getdefaultsql)|Chiamato per ottenere la stringa SQL predefinito per l'esecuzione.|
|[CDaoRecordset::GetEditMode](#geteditmode)|Restituisce un valore che indica lo stato di modifica per il record corrente.|
|[CDaoRecordset::GetFieldCount](#getfieldcount)|Restituisce un valore che rappresenta il numero di campi in un recordset.|
|[CDaoRecordset::GetFieldInfo](#getfieldinfo)|Restituisce i tipi specifici di informazioni sui campi del recordset.|
|[CDaoRecordset:: GetFieldValue](#getfieldvalue)|Restituisce il valore di un campo in un recordset.|
|[CDaoRecordset::GetIndexCount](#getindexcount)|Recupera il numero di indici in una tabella sottostante un recordset.|
|[CDaoRecordset::GetIndexInfo](#getindexinfo)|Restituisce vari tipi di informazioni su un indice.|
|[CDaoRecordset::GetLastModifiedBookmark](#getlastmodifiedbookmark)|Utilizzato per determinare più recentemente aggiunti o aggiornati i record.|
|[CDaoRecordset::GetLockingMode](#getlockingmode)|Restituisce un valore che indica il tipo di blocco che viene applicata durante la modifica.|
|[CDaoRecordset::GetName](#getname)|Restituisce un `CString` contenente il nome del set di record.|
|[CDaoRecordset::GetParamValue](#getparamvalue)|Recupera il valore corrente del parametro specificato archiviato nell'oggetto DAOParameter sottostante.|
|[CDaoRecordset:: GetPercentPosition](#getpercentposition)|Restituisce la posizione del record corrente come percentuale del numero totale di record.|
|[CDaoRecordset::GetRecordCount](#getrecordcount)|Restituisce il numero di record è possibile accedere in un oggetto recordset.|
|[CDaoRecordset::GetSQL](#getsql)|Ottiene la stringa SQL utilizzata per selezionare i record per il recordset.|
|[CDaoRecordset::GetType](#gettype)|Chiamata eseguita per determinare il tipo di un set di record: tipo di tabella, tipo dynaset o tipo di snapshot.|
|[CDaoRecordset::GetValidationRule](#getvalidationrule)|Restituisce un `CString` contenente il valore di convalida dei dati quando viene inserita in un campo.|
|[CDaoRecordset::GetValidationText](#getvalidationtext)|Recupera il testo visualizzato quando non viene soddisfatta una regola di convalida.|
|[CDaoRecordset::IsBOF](#isbof)|Restituisce diversi da zero se il set di record è stato posizionato prima del primo record. Non è presente nessun record corrente.|
|[CDaoRecordset::IsDeleted](#isdeleted)|Restituisce diversi da zero se il recordset è posizionato su un record eliminato.|
|[CDaoRecordset::IsEOF](#iseof)|Restituisce diversi da zero se il set di record è stato posizionato dopo l'ultimo record. Non è presente nessun record corrente.|
|[CDaoRecordset::IsFieldDirty](#isfielddirty)|Restituisce diversi da zero se il campo specificato nel record corrente è stato modificato.|
|[CDaoRecordset::IsFieldNull](#isfieldnull)|Restituisce diversi da zero se il campo specificato nel record corrente è Null (non con nessun valore).|
|[CDaoRecordset::IsFieldNullable](#isfieldnullable)|Restituisce diversi da zero se il campo specificato nel record corrente può essere impostato su Null (non con nessun valore).|
|[CDaoRecordset::IsOpen](#isopen)|Restituisce se diverso da zero [aperto](#open) è stato chiamato in precedenza.|
|[CDaoRecordset:: Move](#move)|Posiziona il recordset su un numero specificato di record del record corrente in entrambe le direzioni.|
|[CDaoRecordset::MoveFirst](#movefirst)|Posiziona il record corrente sul primo record del recordset.|
|[CDaoRecordset::MoveLast](#movelast)|Posiziona il record corrente sull'ultimo record del recordset.|
|[CDaoRecordset::MoveNext](#movenext)|Posiziona il record corrente sul record successivo nel set di record.|
|[CDaoRecordset::MovePrev](#moveprev)|Posiziona il record corrente del record precedente nel recordset.|
|[CDaoRecordset:: Open](#open)|Crea un nuovo set di record da una tabella, dynaset o snapshot.|
|[CDaoRecordset::Requery](#requery)|Esegue la query del recordset nuovamente per aggiornare i record selezionati.|
|[CDaoRecordset::Seek](#seek)|Individua il record in un oggetto recordset indicizzata-tipo di tabella che soddisfa i criteri specificati per l'indice corrente e imposta come il record corrente.|
|[CDaoRecordset:: SetAbsolutePosition](#setabsoluteposition)|Imposta il numero del record corrente dell'oggetto recordset.|
|[CDaoRecordset::SetBookmark](#setbookmark)|Posiziona il recordset in un record contenente il segnalibro specificato.|
|[CDaoRecordset:: SetCacheSize](#setcachesize)|Imposta un valore che specifica il numero di record in un recordset dynaset-type contenente i dati in locale da memorizzare nella cache da un'origine dati ODBC.|
|[CDaoRecordset:: SetCacheStart](#setcachestart)|Imposta un valore che specifica il segnalibro del primo record del recordset da memorizzare nella cache.|
|[CDaoRecordset:: SetCurrentIndex](#setcurrentindex)|Chiamata eseguita per impostare un indice in un set di record di tipo di tabella.|
|[CDaoRecordset:: SetFieldDirty](#setfielddirty)|Contrassegna il campo specificato nel record corrente come modificato.|
|[CDaoRecordset::SetFieldNull](#setfieldnull)|Imposta il valore del campo specificato nel record corrente su Null (non con nessun valore).|
|[CDaoRecordset::SetFieldValue](#setfieldvalue)|Imposta il valore di un campo in un recordset.|
|[CDaoRecordset::SetFieldValueNull](#setfieldvaluenull)|Imposta il valore di un campo in un recordset su Null. (non con nessun valore).|
|[CDaoRecordset::SetLockingMode](#setlockingmode)|Imposta un valore che indica il tipo di blocco per rendere effettive durante la modifica.|
|[CDaoRecordset::SetParamValue](#setparamvalue)|Imposta il valore corrente del parametro specificato archiviato nell'oggetto DAOParameter sottostante|
|[CDaoRecordset::SetParamValueNull](#setparamvaluenull)|Imposta il valore corrente del parametro specificato su Null (non con nessun valore).|
|[CDaoRecordset:: SetPercentPosition](#setpercentposition)|Imposta la posizione del record corrente in un percorso corrispondente a una percentuale del numero totale di record in un recordset.|
|[CDaoRecordset::Update](#update)|Completa un' `AddNew` o `Edit` operazione salvando i dati nuovi o modificati nell'origine dati.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoRecordset:: M_bcheckcachefordirtyfields](#m_bcheckcachefordirtyfields)|Contiene un flag che indica se i campi vengono automaticamente contrassegnati come modificato.|
|[CDaoRecordset::m_nFields](#m_nfields)|Contiene il numero di membri dati di campi della classe recordset e il numero delle colonne selezionate dal recordset dall'origine dati.|
|[CDaoRecordset::m_nParams](#m_nparams)|Contiene il numero di membri dati di parametro nella classe recordset, ovvero il numero di parametri passata con la query del recordset|
|[CDaoRecordset::m_pDAORecordset](#m_pdaorecordset)|Un puntatore all'interfaccia di DAO sottostante l'oggetto recordset.|
|[CDaoRecordset::m_pDatabase](#m_pdatabase)|Database di origine per questo set di risultati. Contiene un puntatore a un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto.|
|[CDaoRecordset::m_strFilter](#m_strfilter)|Contiene una stringa utilizzata per costruire un database SQL **in cui** istruzione.|
|[CDaoRecordset::m_strSort](#m_strsort)|Contiene una stringa utilizzata per costruire un database SQL **ORDER BY** istruzione.|

## <a name="remarks"></a>Note
Noto come "Recordset" `CDaoRecordset` gli oggetti sono disponibili i tre formati seguenti:

- Recordset tipo di tabella rappresentano una tabella di base che è possibile usare per esaminare, aggiungere, modificare o eliminare record da una singola tabella di database.

- Recordset di tipo dynaset sono il risultato di una query che può avere i record aggiornabili. Questi tipi di recordset sono un set di record che è possibile usare per esaminare, aggiungere, modificare o eliminare i record da una tabella di database sottostante o tabelle. Recordset di tipo dynaset può contenere i campi da una o più tabelle in un database.

- Recordset tipo di snapshot sono una copia statica di un set di record che è possibile usare per trovare i dati o per generare i report. Questi set di record può contenere i campi da una o più tabelle in un database ma non può essere aggiornata.

Ogni forma del recordset rappresenta un set di record stabilita al momento che il recordset è aperto. Quando si passa a un record in un set di record di tipo di tabella o un set di record di tipo dynaset, riflette le modifiche apportate al record dopo il recordset è aperto da altri utenti o da altri recordset nell'applicazione. (Non è possibile aggiornare un set di record di tipo snapshot.) È possibile usare `CDaoRecordset` direttamente oppure derivare una classe recordset specifici dell'applicazione da `CDaoRecordset`. È quindi possibile:

- Scorrere i record.

- Impostare un indice ed esaminare rapidamente i record usando [Seek](#seek) (solo set di record di tipo di tabella).

- Trovare i record in base a un confronto di stringhe: "<","\<=", "=", "> =", o ">" (tipo dynaset e Recordset di tipo snapshot).

- Aggiornare i record e specificare una modalità di blocco (ad eccezione di recordset di tipo snapshot).

- Filtrare il recordset per vincolare i cui record vengono selezionati tra quelli disponibili nell'origine dati.

- Ordinamento del recordset.

- Impostare i parametri per il recordset per personalizzare la selezione con le informazioni non note fino alla fase di esecuzione.

Classe `CDaoRecordset` fornisce un'interfaccia analoga a quella della classe `CRecordset`. La differenza principale è quella classe `CDaoRecordset` accede ai dati tramite un oggetto DAO (Data Access) basata su OLE. Classe `CRecordset` accede DBMS tramite Open Database Connectivity (ODBC) e un driver ODBC per DBMS.

> [!NOTE]
> Le classi database DAO sono diverse dalle classi di database MFC basate su Open Database Connectivity (ODBC). Tutti i nomi delle classi database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO; le classi DAO offrono in genere funzionalità superiori in quanto sono specifiche per il motore di database Microsoft Jet.

È possibile usare `CDaoRecordset` direttamente o derivare una classe da `CDaoRecordset`. Per usare una classe recordset in entrambi i casi, aprire un database e crea un oggetto recordset, passando un puntatore per il costruttore di `CDaoDatabase` oggetto. È inoltre possibile costruire una `CDaoRecordset` dell'oggetto e utilizzare MFC per creare una variabile temporanea `CDaoDatabase` oggetto per l'utente. Chiamare quindi il recordset [aperto](#open) funzione membro, che specifica se l'oggetto è un set di record di tipo di tabella, un set di record di tipo dynaset o un set di record di tipo snapshot. La chiamata a `Open` seleziona i dati dal database e recupera il primo record.

Usare i membri di dati e funzioni membro dell'oggetto per scorrere i record e operano su di essi. Le operazioni disponibili dipendono dal fatto che l'oggetto è un set di record di tipo di tabella, un set di record di tipo dynaset o un set di record di tipo di snapshot e se è aggiornabile o di sola lettura, ovvero dipende la funzionalità del database o Open Database Connectivity (ODBC) origine dati. Per aggiornare i record che potrebbero sono stati modificati o aggiunti dopo il `Open` chiamare, chiamare l'oggetto [Requery](#requery) funzione membro. Chiamare l'oggetto `Close` membro funzione ed eliminare definitivamente l'oggetto quando finisce con esso.

`CDaoRecordset` Usa campi di record DAO (DFX) per supportare la lettura e l'aggiornamento dei campi del record tramite i membri C++ indipendente dai tipi dei `CDaoRecordset` o `CDaoRecordset`-classe derivata. È anche possibile implementare l'associazione dinamica di colonne in un database senza usare il meccanismo DFX usando [GetFieldValue](#getfieldvalue) e [SetFieldValue](#setfieldvalue).

Per informazioni correlate, vedere l'argomento "Oggetto Recordset" nella Guida di DAO.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà
[CObject](../../mfc/reference/cobject-class.md)

`CDaoRecordset`

## <a name="requirements"></a>Requisiti
**Intestazione:** afxdao. h

##  <a name="addnew"></a>  CDaoRecordset:: AddNew
Chiamare questa funzione membro per aggiungere un nuovo record a un tipo di tabella o di tipo dynaset recordset.

```
virtual void AddNew();
```

### <a name="remarks"></a>Note
I campi del record sono inizialmente Null. (Nella terminologia dei database, Null significa "non having alcun valore" e non è lo stesso come valori NULL in C++). Per completare l'operazione, è necessario chiamare il [Update](#update) funzione membro. `Update` Salva le modifiche apportate all'origine dati.

> [!CAUTION]
>  Se si modifica un record e quindi scorrere fino a un altro record senza chiamare `Update`, le modifiche andranno perdute senza preavviso.

Se si aggiunge un record a un set di record di tipo dynaset chiamando [AddNew](#addnew), il record è visibile nel set di record e incluso nella tabella sottostante in cui diventa visibile a qualsiasi nuovo `CDaoRecordset` oggetti.

La posizione del nuovo record dipende dal tipo di set di record:

- In un tipo di dynaset recordset, in cui viene inserito il nuovo record non è garantito. Questo comportamento è stato modificato con 3.0 per Microsoft Jet per motivi di prestazioni e la concorrenza. Se l'obiettivo consiste nel rendere il record appena aggiunto il record corrente, ottenere il segnalibro dell'ultimo record di modifica e spostare in quel segnalibro:

[!code-cpp[NVC_MFCDatabase#1](../../mfc/codesnippet/cpp/cdaorecordset-class_1.cpp)]

- In un recordset di tipo di tabella per cui è stato specificato un indice, vengono restituiti record nella posizione nell'ordinamento. Se non è stato specificato alcun indice, i nuovi record vengono restituiti alla fine del set di record.

Il record corrente prima di utilizzare `AddNew` rimane invariato. Se si desidera impostare come corrente il nuovo record e recordset supporta segnalibri, chiamata [SetBookmark](#setbookmark) al segnalibro identificato dall'impostazione della proprietà LastModified dell'oggetto recordset DAO sottostante. Questa operazione è utile per determinare il valore per i campi di contatore (incremento automatico) in un record aggiunto. Per altre informazioni, vedere [GetLastModifiedBookmark](#getlastmodifiedbookmark).

Se il database supporta le transazioni, è possibile apportare le `AddNew` delle chiamate parte di una transazione. Per altre informazioni sulle transazioni, vedere la classe [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md). Si noti che è necessario chiamare [CDaoWorkspace::BeginTrans](../../mfc/reference/cdaoworkspace-class.md#begintrans) prima di chiamare `AddNew`.

Non è consentito chiamare `AddNew` per un set di record cui [Open](#open) funzione membro non è stata chiamata. Oggetto `CDaoException` viene generata se si chiama `AddNew` per un oggetto recordset che non possono essere accodati. È possibile determinare se il recordset è aggiornabile chiamando [CanAppend](#canappend).

I segni di framework modificato i membri di dati campo per assicurarsi che verrà scritto il record nell'origine dei dati dal meccanismo di DAO campi di record (DFX) di exchange. La modifica del valore di un campo in genere ha impostato il dirty automaticamente, pertanto raramente sarà necessario chiamare [SetFieldDirty](#setfielddirty) personalmente, ma a volte possibile garantire che le colonne verranno essere aggiornate o inserite indipendentemente dal fatto che in modo esplicito di quale valore è il membro dati del campo. Il meccanismo di DFX Usa inoltre l'utilizzo di **PSEUDO NULL**. Per altre informazioni, vedere [CDaoFieldExchange:: M_noperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).

Se non viene utilizzato il meccanismo del doppio buffer, quindi la modifica del valore del campo non viene impostata automaticamente il campo come dirty. In questo caso, sarà necessario impostare in modo esplicito il campo modificato. Il flag racchiusa [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controlla questa verifica automatica dei campi.

> [!NOTE]
> Se i record sono doppio buffer (vale a dire, il controllo automatico dei campi è abilitato), la chiamata `CancelUpdate` ripristinerà le variabili membro per i valori che avevano prima `AddNew` o `Edit` è stato chiamato.

Per informazioni correlate, vedere gli argomenti "AddNew Method", "Metodo CancelUpdate", "Property LastModified" e "Proprietà EditMode" nella Guida di DAO.

##  <a name="canappend"></a>  CDaoRecordset::CanAppend
Chiamare questa funzione membro per determinare se il recordset aperto in precedenza consente di aggiungere nuovi record chiamando il [AddNew](#addnew) funzione membro.

```
BOOL CanAppend() const;
```

### <a name="return-value"></a>Valore restituito
Diverso da zero se il set di record consente l'aggiunta di nuovi record; in caso contrario 0. `CanAppend` Restituisce 0 se è stato aperto il recordset in sola lettura.

### <a name="remarks"></a>Note
Per informazioni correlate, vedere l'argomento "Aggiunta Method" nella Guida di DAO.

##  <a name="canbookmark"></a>  CDaoRecordset:: CanBookmark
Chiamare questa funzione membro per determinare se il recordset aperto in precedenza consente di contrassegnare singolarmente i record di utilizzo dei segnalibri.

```
BOOL CanBookmark();
```

### <a name="return-value"></a>Valore restituito
Diverso da zero se il recordset supporta segnalibri, in caso contrario 0.

### <a name="remarks"></a>Note
Se si utilizza recordset basato interamente su tabelle di motore di database Microsoft Jet, i segnalibri sono utilizzabile, ad eccezione per i recordset di tipo snapshot contrassegnati come recordset forward-only dello scorrimento. Altri prodotti di database (origini dati esterne di ODBC) potrebbero non supportare i segnalibri.

Per informazioni correlate, vedere l'argomento "Proprietà supporta" nella Guida di DAO.

##  <a name="cancelupdate"></a>  CDaoRecordset::CancelUpdate
Il `CancelUpdate` funzione membro Annulla eventuali aggiornamenti in sospeso a causa dell'errore un' [modificare](#edit) oppure [AddNew](#addnew) operazione.

```
virtual void CancelUpdate();
```

### <a name="remarks"></a>Note
Ad esempio, se un'applicazione chiama il `Edit` o `AddNew` funzione membro e non è chiamato [Update](#update), `CancelUpdate` Annulla tutte le modifiche apportate dopo `Edit` o `AddNew` è stato chiamato.

> [!NOTE]
>  Se i record sono doppio buffer (vale a dire, il controllo automatico dei campi è abilitato), la chiamata `CancelUpdate` ripristinerà le variabili membro per i valori che avevano prima `AddNew` o `Edit` è stato chiamato.

Se è presente alcun `Edit` oppure `AddNew` operazione in sospeso, `CancelUpdate` fa in modo che MFC generare un'eccezione. Chiamare il [GetEditMode](#geteditmode) funzione membro per determinare se è presente un'operazione in sospeso che può essere annullata.

Per informazioni correlate, vedere l'argomento "Metodo CancelUpdate" nella Guida di DAO.

##  <a name="canrestart"></a>  CDaoRecordset::CanRestart
Chiamare questa funzione membro per determinare se il set di record consente di riavviare le query (per aggiornare i propri record) chiamando il `Requery` funzione membro.

```
BOOL CanRestart();
```

### <a name="return-value"></a>Valore restituito
Diverso da zero se `Requery` può essere chiamato per eseguire la query del recordset anche in questo caso, in caso contrario 0.

### <a name="remarks"></a>Note
Tipo di tabella Recordset non supportano `Requery`.

Se `Requery` non è supportate, chiamare [Close](#close) quindi [Open](#open) per aggiornare i dati. È possibile chiamare `Requery` per aggiornare un oggetto recordset sottostante della query con parametri dopo che sono stati modificati i valori dei parametri.

Per informazioni correlate, vedere l'argomento "Proprietà riavviabili" nella Guida di DAO.

##  <a name="canscroll"></a>  CDaoRecordset::CanScroll
Chiamare questa funzione membro per determinare se il set di record consente lo scorrimento.

```
BOOL CanScroll() const;
```

### <a name="return-value"></a>Valore restituito
Diverso da zero se è possibile scorrere i record, altrimenti 0.

### <a name="remarks"></a>Note
Se si chiama [aperto](#open) con `dbForwardOnly`, il set di record è solo uno scorrimento in avanti.

Per informazioni correlate, vedere l'argomento "Posizionamento del Record corrente puntatore con DAO" nella Guida di DAO.

##  <a name="cantransact"></a>  CDaoRecordset::CanTransact
Chiamare questa funzione membro per determinare se il set di record consente alle transazioni.

```
BOOL CanTransact();
```

### <a name="return-value"></a>Valore restituito
Diverso da zero se l'origine dati sottostante supporta le transazioni, in caso contrario 0.

### <a name="remarks"></a>Note
Per informazioni correlate, vedere l'argomento "Proprietà transazioni" nella Guida di DAO.

##  <a name="canupdate"></a>  CDaoRecordset::CanUpdate
Chiamare questa funzione membro per determinare se il set di record possono essere aggiornati.

```
BOOL CanUpdate() const;
```

### <a name="return-value"></a>Valore restituito
Diverso da zero se il set di record possono essere aggiornati (aggiungere, aggiornare ed eliminare i record), in caso contrario 0.

### <a name="remarks"></a>Note
Potrebbe essere un recordset di sola lettura se l'origine dati sottostante è di sola lettura o se è stato specificato `dbReadOnly` per *nOptions* durante la chiamata [Open](#open) per il recordset.

Per informazioni correlate, vedere gli argomenti "AddNew Method", "Modifica metodo", "Metodo Delete", "Metodo di aggiornamento" e "Property aggiornabile" nella Guida di DAO.

##  <a name="cdaorecordset"></a>  CDaoRecordset::CDaoRecordset
Costruisce un oggetto `CDaoRecordset`.

```
CDaoRecordset(CDaoDatabase* pDatabase = NULL);
```

### <a name="parameters"></a>Parametri
*pDatabase*<br/>
Contiene un puntatore a un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto o il valore NULL. Se non è NULL e il `CDaoDatabase` dell'oggetto `Open` funzione membro non è stata chiamata per connetterlo all'origine dati, l'oggetto recordset tenta di aprirlo per l'utente durante la propria [aprire](#open) chiamare. Se viene passato NULL, un `CDaoDatabase` oggetto viene costruito e connesse usando le informazioni di origine dati è specificato se si deriva la classe recordset da `CDaoRecordset`.

### <a name="remarks"></a>Note
È possibile usare `CDaoRecordset` direttamente oppure derivare una classe specifica dell'applicazione da `CDaoRecordset`. È possibile utilizzare ClassWizard per derivare le classi di recordset.

> [!NOTE]
>  Se si deriva un `CDaoRecordset` classe, derivata classe deve fornire il proprio costruttore. Nel costruttore della classe derivata, chiamare il costruttore `CDaoRecordset::CDaoRecordset`, passando i parametri appropriati insieme a esso.

Passare NULL al costruttore del recordset per avere una `CDaoDatabase` oggetto creato e collegato automaticamente per l'utente. Si tratta di un collegamento utile che non richiede la creazione e connessione una `CDaoDatabase` oggetto prima della creazione del recordset. Se il `CDaoDatabase` oggetto non è aperto, una [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) oggetto verrà inoltre creato per l'utente che usa l'area di lavoro predefinita. Per altre informazioni, vedere [CDaoDatabase::CDaoDatabase](../../mfc/reference/cdaodatabase-class.md#cdaodatabase).

##  <a name="close"></a>  CDaoRecordset::Close
Chiusura di un `CDaoRecordset` oggetto lo rimuove dalla raccolta di recordset aperti nel database associato.

```
virtual void Close();
```

### <a name="remarks"></a>Note
In quanto `Close` non elimina definitivamente il `CDaoRecordset` dell'oggetto, è possibile riutilizzare l'oggetto chiamando `Open` nella stessa origine dati o un'origine dati diversa.

Tutte in sospeso [AddNew](#addnew) oppure [modificare](#edit) istruzioni vengono annullate e viene eseguito il rollback di tutte le transazioni in sospeso. Se si desidera mantenere le aggiunte o modifiche in sospeso, chiamare [Update](#update) prima di chiamare `Close` per ogni oggetto recordset.

È possibile chiamare `Open` nuovamente dopo la chiamata `Close`. Ciò consente di riutilizzare l'oggetto recordset. Un'alternativa migliore consiste nel chiamare [Requery](#requery), se possibile.

Per informazioni correlate, vedere l'argomento "Chiudi Method" nella Guida di DAO.

##  <a name="delete"></a>  CDaoRecordset::Delete
Chiamare questa funzione membro per eliminare il record corrente in un oggetto aperto di recordset dynaset-type o tipo di tabella.

```
virtual void Delete();
```

### <a name="remarks"></a>Note
È necessario chiamare esplicitamente una delle funzioni membro di spostamento di recordset e dopo un'eliminazione ha esito positivo, membri dati di campi del recordset vengono impostati su un valore Null ( [spostare](#move), [Seek](#seek), [ SetBookmark](#setbookmark)e così via) per eseguire la migrazione del record eliminato. Quando si eliminano i record da un recordset, deve esistere un record del recordset prima di chiamare `Delete`; in caso contrario, MFC genera un'eccezione.

`Delete` Rimuove il record corrente e lo rende inaccessibili. Anche se non è possibile modificare o usare il record eliminato, rimane corrente. Dopo il passaggio a un altro record, tuttavia, è possibile apportare del record eliminato corrente nuovamente.

> [!CAUTION]
>  Il set di record deve essere aggiornabile e deve essere presente un record valido nel set di record corrente quando si chiama `Delete`. Ad esempio, se si elimina un record ma non è possibile scorrere in un nuovo record prima di chiamare `Delete` anche in questo caso `Delete` genera una [CDaoException](../../mfc/reference/cdaoexception-class.md).

È possibile annullare l'eliminazione di un record se si utilizzano le transazioni e si chiama il [CDaoWorkspace::Rollback](../../mfc/reference/cdaoworkspace-class.md#rollback) funzione membro. Se la tabella di base è la tabella primaria in un'operazione cascade Elimina relazione, l'eliminazione del record corrente può anche eliminare uno o più record in una tabella esterna. Per altre informazioni, vedere "Sovrapponi la definizione" eliminare la Guida di DAO.

A differenza `AddNew` e `Edit`, una chiamata a `Delete` non è seguito da una chiamata a `Update`.

Per informazioni correlate, vedere gli argomenti "AddNew Method", "Modifica metodo", "Metodo Delete", "Metodo di aggiornamento" e "Property aggiornabile" nella Guida di DAO.

##  <a name="dofieldexchange"></a>  CDaoRecordset::DoFieldExchange
Il framework chiama questa funzione membro per automaticamente lo scambio di dati tra i membri di dati del campo dell'oggetto recordset e rispettive colonne del record corrente nell'origine dati.

```
virtual void DoFieldExchange(CDaoFieldExchange* pFX);
```

### <a name="parameters"></a>Parametri
*file pFX*<br/>
Contiene un puntatore a un `CDaoFieldExchange` oggetto. Il framework già avere imposterà automaticamente questo oggetto per specificare un contesto per l'operazione di scambio di campo.

### <a name="remarks"></a>Note
Inoltre, associa i membri dati del parametro, se presenti, da segnaposto di parametri nella stringa dell'istruzione SQL per la selezione del recordset. Lo scambio di dati di campo, denominati DAO exchange di campi di record (DFX), funziona in entrambe le direzioni: da membri di dati di campi dell'oggetto recordset ai campi del record nell'origine dati e dal record nell'origine dei dati per l'oggetto recordset. Se si desidera associare le colonne in modo dinamico, non occorre implementare `DoFieldExchange`.

L'unica azione in genere è necessario eseguire per implementare `DoFieldExchange` per il recordset derivato classe consiste nel creare la classe con la creazione guidata classe e specificare i tipi di dati e i nomi dei membri dati del campo. È anche possibile aggiungere codice in cosa ClassWizard scrive specificare i membri dati di parametro. Se tutti i campi devono essere associati in modo dinamico, questa funzione sarà inattiva se non si specificano i membri dati di parametro.

Quando si dichiara la classe derivata recordset con ClassWizard, la procedura guidata scrive un override di `DoFieldExchange` , che è simile al seguente:

[!code-cpp[NVC_MFCDatabase#2](../../mfc/codesnippet/cpp/cdaorecordset-class_2.cpp)]

##  <a name="edit"></a>  CDaoRecordset:: Edit
Chiamare questa funzione membro per consentire le modifiche apportate al record corrente.

```
virtual void Edit();
```

### <a name="remarks"></a>Note
Dopo aver chiamato il `Edit` funzione membro, le modifiche apportate ai campi del record corrente vengono copiati nel buffer di copia. Dopo aver apportato le modifiche desiderate al record, chiamare `Update` per salvare le modifiche. `Edit` Salva i valori dei membri dati del recordset. Se si chiama `Edit`, apportare modifiche, quindi chiamare `Edit` anche in questo caso, vengono ripristinati i valori del record si trovavano prima del primo `Edit` chiamare.

> [!CAUTION]
>  Se si modifica un record e quindi eseguire qualsiasi operazione che viene spostata in un altro record senza prima chiamare `Update`, le modifiche andranno perdute senza preavviso. Inoltre, se si chiude il recordset o il database padre, il record modificato viene eliminato senza preavviso.

In alcuni casi, è possibile aggiornare una colonna, rendendo Null (che non contengono dati). A tale scopo, chiamare `SetFieldNull` con un parametro di true per contrassegnare il campo Null; in questo modo anche la colonna da aggiornare. Se si desidera che un campo per essere scritte nell'origine dati anche se il relativo valore non è stato modificato, chiamare `SetFieldDirty` con un parametro true. Questo avviene anche se il campo ha il valore Null.

I segni di framework modificato i membri di dati campo per assicurarsi che verrà scritto il record nell'origine dei dati dal meccanismo di DAO campi di record (DFX) di exchange. La modifica del valore di un campo in genere ha impostato il dirty automaticamente, pertanto raramente sarà necessario chiamare [SetFieldDirty](#setfielddirty) personalmente, ma a volte possibile garantire che le colonne verranno essere aggiornate o inserite indipendentemente dal fatto che in modo esplicito di quale valore è il membro dati del campo. Il meccanismo di DFX Usa inoltre l'utilizzo di **PSEUDO NULL**. Per altre informazioni, vedere [CDaoFieldExchange:: M_noperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).

Se non viene utilizzato il meccanismo del doppio buffer, quindi la modifica del valore del campo non viene impostata automaticamente il campo come dirty. In questo caso, sarà necessario impostare in modo esplicito il campo modificato. Il flag racchiusa [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controlla questa verifica automatica dei campi.

Quando l'oggetto recordset è blocco pessimistico in un ambiente multiutente, rimane bloccato dal momento in cui il record `Edit` viene usato fino a quando l'aggiornamento è stato completato. Se il recordset è applicato il presupposto ottimistico bloccato, il record è bloccato e confrontato con il record precedentemente modificato appena prima dell'aggiornamento nel database. Se il record è stato modificato perché è stato chiamato `Edit`, il `Update` operazione ha esito negativo e MFC genera un'eccezione. È possibile modificare la modalità di blocco con `SetLockingMode`.

> [!NOTE]
>  Il blocco ottimistico viene sempre utilizzato in formati di database esterno, ad esempio ODBC e driver ISAM installabile.

Il record corrente rimane invariato dopo aver chiamato `Edit`. Per chiamare `Edit`, deve esistere un record corrente. Se nessun record corrente o se il recordset non fa riferimento a un open-tipo di tabella o un oggetto recordset dynaset-type, si verifica un'eccezione. La chiamata `Edit` fa sì che un `CDaoException` eccezione nelle condizioni seguenti:

- Non è presente nessun record corrente.

- Il database o un recordset è di sola lettura.

- Nessun campo nel record possono essere aggiornato.

- Il database o un recordset è stato aperto per l'utilizzo esclusivo da un altro utente.

- Un altro utente ha bloccato la pagina che contiene il record.

Se l'origine dati supporta le transazioni, è possibile rendere il `Edit` delle chiamate parte di una transazione. Si noti che è necessario chiamare `CDaoWorkspace::BeginTrans` prima di chiamare `Edit` e dopo l'apertura di recordset. Si noti inoltre che la chiamata `CDaoWorkspace::CommitTrans` non è un prodotto sostitutivo di chiamata `Update` per completare il `Edit` operazione. Per altre informazioni sulle transazioni, vedere la classe `CDaoWorkspace`.

Per informazioni correlate, vedere gli argomenti "AddNew Method", "Modifica metodo", "Metodo Delete", "Metodo di aggiornamento" e "Property aggiornabile" nella Guida di DAO.

##  <a name="fillcache"></a>  CDaoRecordset:: FillCache
Chiamare questa funzione membro per memorizzare nella cache un numero specificato di record dal recordset.

```
void FillCache(
    long* pSize = NULL,
    COleVariant* pBookmark = NULL);
```

### <a name="parameters"></a>Parametri
*pSize*<br/>
Specifica il numero di righe da inserire nella cache. Se si omette questo parametro, il valore è determinato dall'impostazione della proprietà CacheSize dell'oggetto DAO sottostante.

*pBookmark*<br/>
Oggetto [COleVariant](../../mfc/reference/colevariant-class.md) specificando un segnalibro. La cache viene riempita a partire dal record indicato da questo segnalibro. Se si omette questo parametro, la cache viene riempita a partire dal record indicato dalla proprietà CacheStart dell'oggetto DAO sottostante.

### <a name="remarks"></a>Note
La memorizzazione nella cache migliora le prestazioni di un'applicazione che recupera o vengono recuperati, i dati da un server remoto. Una cache è lo spazio nella memoria locale che contiene i dati recuperati più di recente dal server in base al presupposto che i dati non verranno probabilmente richiesto nuovamente mentre l'applicazione è in esecuzione. Quando vengono richiesti dati, il motore di database Microsoft Jet controlla prima di tutto la cache per i dati anziché il suo recupero dal server, che richiede più tempo. Usando i dati la memorizzazione nella cache su origini dati ODBC non ha alcun effetto perché i dati non vengono salvati nella cache.

Anziché attendere la cache deve essere compilato con i record in cui vengono recuperati, è possibile compilare in modo esplicito la cache in qualsiasi momento chiamando la `FillCache` funzione membro. Questo è un modo più veloce per riempire la cache in quanto `FillCache` recupera i record diversi in una sola volta anziché uno alla volta. Ad esempio, anche se viene visualizzato ogni schermata di record, è possibile avere la chiamata di applicazione `FillCache` per recuperare la schermata successiva di record.

Qualsiasi database ODBC tramite gli oggetti recordset di accesso può avere una cache locale. Per creare la cache, aprire un oggetto recordset da origine dati remota e quindi chiamare il `SetCacheSize` e `SetCacheStart` funzioni membro del set di record. Se *lSize* e *lBookmark* creare un intervallo che non rientra nell'intervallo specificato dai parzialmente o totalmente `SetCacheSize` e `SetCacheStart`, la parte del set di record esterni a questo intervallo viene ignorata e non è caricati nella cache. Se `FillCache` richiede più record rimangono nell'origine dati remota, vengono recuperati solo i record rimanenti e viene generata alcuna eccezione.

I record recuperati dalla cache non riflettono le modifiche apportate contemporaneamente all'origine dati da altri utenti.

`FillCache` Recupera solo i record non è già stato memorizzato nella cache. Per forzare un aggiornamento di tutti i dati memorizzati nella cache, chiamare il `SetCacheSize` funzione membro con un *lSize* parametro uguale a 0, chiamata `SetCacheSize` nuovamente con il *lSize* parametro uguale alla dimensione della cache richiesto in origine e quindi chiamare `FillCache`.

Per informazioni correlate, vedere l'argomento "FillCache Method" nella Guida di DAO.

##  <a name="find"></a>  CDaoRecordset::Find
Chiamare questa funzione membro per trovare una determinata stringa in un recordset dynaset - o -tipo di snapshot usando un operatore di confronto.

```
virtual BOOL Find(
    long lFindType,
    LPCTSTR lpszFilter);
```

### <a name="parameters"></a>Parametri
*lFindType*<br/>
Un valore che indica il tipo di operazione di ricerca desiderato. I valori possibili sono:

- AFX_DAO_NEXT trovato alla posizione successiva di una stringa corrispondente.

- AFX_DAO_PREV individuare il precedente percorso di una stringa corrispondente.

- AFX_DAO_FIRST individuare la prima posizione di una stringa corrispondente.

- AFX_DAO_LAST trovare l'ultimo percorso di una stringa corrispondente.

*lpszFilter*<br/>
Un'espressione stringa (ad esempio la **in cui** clausola in un'istruzione SQL senza la parola **in cui**) usato per individuare il record. Ad esempio:

[!code-cpp[NVC_MFCDatabase#3](../../mfc/codesnippet/cpp/cdaorecordset-class_3.cpp)]

### <a name="return-value"></a>Valore restituito
Diverso da zero se vengono trovati record corrispondenti, in caso contrario 0.

### <a name="remarks"></a>Note
È possibile trovare successivo prima di tutto, istanza precedente o alla fine della stringa. `Find` è una funzione virtuale, pertanto è possibile eseguirne l'override e aggiungere la propria implementazione. Il `FindFirst`, `FindLast`, `FindNext`, e `FindPrev` funzioni membro chiamano il `Find` funzione membro, quindi è possibile usare `Find` per controllare il comportamento di tutte le operazioni di ricerca.

Per individuare un record in un set di record di tipo di tabella, chiamare il [Seek](#seek) funzione membro.

> [!TIP]
>  Minore è il set di record hai, più efficaci `Find` sarà. In generale e in particolare con dati ODBC, è preferibile creare una nuova query che recupera solo i record desiderati.

Per informazioni correlate, vedere l'argomento "FindNext FindFirst, FindLast, e i metodi FindPrevious" nella Guida di DAO.

##  <a name="findfirst"></a>  CDaoRecordset::FindFirst
Chiamare questa funzione membro per trovare il primo record che corrisponde a una condizione specificata.

```
BOOL FindFirst(LPCTSTR lpszFilter);
```

### <a name="parameters"></a>Parametri
*lpszFilter*<br/>
Un'espressione stringa (ad esempio la **in cui** clausola in un'istruzione SQL senza la parola **in cui**) usato per individuare il record.

### <a name="return-value"></a>Valore restituito
Diverso da zero se vengono trovati record corrispondenti, in caso contrario 0.

### <a name="remarks"></a>Note
Il `FindFirst` funzione membro viene avviata la ricerca dall'inizio del set di record e le ricerche alla fine del set di record.

Se si desidera includere tutti i record nella ricerca, non solo quelle che soddisfano una condizione specifica, usano una delle operazioni di spostamento per spostarsi dal record a altro. Per individuare un record in un set di record di tipo di tabella, chiamare il `Seek` funzione membro.

Se non si trova un record corrispondente ai criteri, puntatore al record corrente è indeterminato, e `FindFirst` restituisce zero. Se il set di record contiene più di un record che soddisfa i criteri `FindFirst` individua la prima occorrenza, `FindNext` individua l'occorrenza successiva e così via.

> [!CAUTION]
>  Se si modifica il record corrente, assicurarsi di salvare le modifiche chiamando il `Update` funzione membro prima di passare a un altro record. Se si sposta in un altro record senza l'aggiornamento, le modifiche andranno perdute senza preavviso.

Il `Find` funzioni membro di ricerca dalla posizione e nella direzione specificata nella tabella seguente:

|Operazioni di ricerca|iniziare|Direzione di ricerca|
|---------------------|-----------|----------------------|
|`FindFirst`|Inizio del recordset|Fine dell'oggetto recordset|
|`FindLast`|Fine dell'oggetto recordset|Inizio del recordset|
|`FindNext`|Record corrente|Fine dell'oggetto recordset|
|`FindPrevious`|Record corrente|Inizio del recordset|

> [!NOTE]
>  Quando si chiama `FindLast`, il motore di database Microsoft Jet viene popolato completamente il recordset prima di iniziare la ricerca, se non è già stato fatto. La prima ricerca può richiedere più ricerche successive.

Usando una delle operazioni di ricerca non corrisponde alla chiamata al metodo `MoveFirst` o `MoveNext`, tuttavia, che rende semplicemente il primo o successivo record corrente senza specificare una condizione. È possibile eseguire un'operazione di ricerca con un'operazione di spostamento.

Tenere presente quanto segue quando si usano le operazioni di ricerca:

- Se `Find` restituisce diverso da zero, il record corrente non è definito. In questo caso, è necessario posizionare il puntatore di record corrente indietro di un record valido.

- È possibile usare un'operazione di ricerca con un recordset di tipo snapshot scorrimento forward-only.

- È consigliabile usare il formato della data (mese-giorno-anno) degli Stati Uniti per la ricerca di campi che contengono date, anche se non si usa la versione degli Stati Uniti del motore di database Microsoft Jet; in caso contrario, i record corrispondenti non sono disponibili.

- Quando si lavora con database ODBC e dynaset di grandi dimensioni, si potrebbe scoprire che utilizzano le operazioni di ricerca è lento, specialmente quando si lavora con grandi set di record. È possibile migliorare le prestazioni tramite query SQL con personalizzato **ORDERBY** oppure **in cui** clausole, query con parametri, o `CDaoQuerydef` gli oggetti che recuperano i record indicizzati specifici.

Per informazioni correlate, vedere l'argomento "FindNext FindFirst, FindLast, e i metodi FindPrevious" nella Guida di DAO.

##  <a name="findlast"></a>  CDaoRecordset::FindLast
Chiamare questa funzione membro per trovare l'ultimo record che corrisponde a una condizione specificata.

```
BOOL FindLast(LPCTSTR lpszFilter);
```

### <a name="parameters"></a>Parametri
*lpszFilter*<br/>
Un'espressione stringa (ad esempio la **in cui** clausola in un'istruzione SQL senza la parola **in cui**) usato per individuare il record.

### <a name="return-value"></a>Valore restituito
Diverso da zero se vengono trovati record corrispondenti, in caso contrario 0.

### <a name="remarks"></a>Note
Il `FindLast` funzione membro viene avviata la ricerca alla fine del set di record e Cerca all'indietro verso l'inizio del set di record.

Se si desidera includere tutti i record nella ricerca, non solo quelle che soddisfano una condizione specifica, usano una delle operazioni di spostamento per spostarsi dal record a altro. Per individuare un record in un set di record di tipo di tabella, chiamare il `Seek` funzione membro.

Se non si trova un record corrispondente ai criteri, puntatore al record corrente è indeterminato, e `FindLast` restituisce zero. Se il set di record contiene più di un record che soddisfa i criteri `FindFirst` individua la prima occorrenza, `FindNext` individua l'occorrenza successiva dopo la prima occorrenza e così via.

> [!CAUTION]
>  Se si modifica il record corrente, assicurarsi salvare le modifiche chiamando il `Update` funzione membro prima di passare a un altro record. Se si sposta in un altro record senza l'aggiornamento, le modifiche andranno perdute senza preavviso.

Usando una delle operazioni di ricerca non corrisponde alla chiamata al metodo `MoveFirst` o `MoveNext`, tuttavia, che rende semplicemente il primo o successivo record corrente senza specificare una condizione. È possibile eseguire un'operazione di ricerca con un'operazione di spostamento.

Tenere presente quanto segue quando si usano le operazioni di ricerca:

- Se `Find` restituisce diverso da zero, il record corrente non è definito. In questo caso, è necessario posizionare il puntatore di record corrente indietro di un record valido.

- È possibile usare un'operazione di ricerca con un recordset di tipo snapshot scorrimento forward-only.

- È consigliabile usare il formato della data (mese-giorno-anno) degli Stati Uniti per la ricerca di campi che contengono date, anche se non si usa la versione degli Stati Uniti del motore di database Microsoft Jet; in caso contrario, i record corrispondenti non sono disponibili.

- Quando si lavora con database ODBC e dynaset di grandi dimensioni, si potrebbe scoprire che utilizzano le operazioni di ricerca è lento, specialmente quando si lavora con grandi set di record. È possibile migliorare le prestazioni tramite query SQL con personalizzato **ORDERBY** oppure **in cui** clausole, query con parametri, o `CDaoQuerydef` gli oggetti che recuperano i record indicizzati specifici.

Per informazioni correlate, vedere l'argomento "FindNext FindFirst, FindLast, e i metodi FindPrevious" nella Guida di DAO.

##  <a name="findnext"></a>  CDaoRecordset::FindNext
Chiamare questa funzione membro per trovare il record successivo che corrisponde a una condizione specificata.

```
BOOL FindNext(LPCTSTR lpszFilter);
```

### <a name="parameters"></a>Parametri
*lpszFilter*<br/>
Un'espressione stringa (ad esempio la **in cui** clausola in un'istruzione SQL senza la parola **in cui**) usato per individuare il record.

### <a name="return-value"></a>Valore restituito
Diverso da zero se vengono trovati record corrispondenti, in caso contrario 0.

### <a name="remarks"></a>Note
Il `FindNext` funzione membro viene avviata la ricerca in corrispondenza del record corrente e la ricerca alla fine del set di record.

Se si desidera includere tutti i record nella ricerca, non solo quelle che soddisfano una condizione specifica, usano una delle operazioni di spostamento per spostarsi dal record a altro. Per individuare un record in un set di record di tipo di tabella, chiamare il `Seek` funzione membro.

Se non si trova un record corrispondente ai criteri, puntatore al record corrente è indeterminato, e `FindNext` restituisce zero. Se il set di record contiene più di un record che soddisfa i criteri `FindFirst` individua la prima occorrenza, `FindNext` individua l'occorrenza successiva e così via.

> [!CAUTION]
>  Se si modifica il record corrente, assicurarsi salvare le modifiche chiamando il `Update` funzione membro prima di passare a un altro record. Se si sposta in un altro record senza l'aggiornamento, le modifiche andranno perdute senza preavviso.

Usando una delle operazioni di ricerca non corrisponde alla chiamata al metodo `MoveFirst` o `MoveNext`, tuttavia, che rende semplicemente il primo o successivo record corrente senza specificare una condizione. È possibile eseguire un'operazione di ricerca con un'operazione di spostamento.

Tenere presente quanto segue quando si usano le operazioni di ricerca:

- Se `Find` restituisce diverso da zero, il record corrente non è definito. In questo caso, è necessario posizionare il puntatore di record corrente indietro di un record valido.

- È possibile usare un'operazione di ricerca con un recordset di tipo snapshot scorrimento forward-only.

- È consigliabile usare il formato della data (mese-giorno-anno) degli Stati Uniti per la ricerca di campi che contengono date, anche se non si usa la versione degli Stati Uniti del motore di database Microsoft Jet; in caso contrario, i record corrispondenti non sono disponibili.

- Quando si lavora con database ODBC e dynaset di grandi dimensioni, si potrebbe scoprire che utilizzano le operazioni di ricerca è lento, specialmente quando si lavora con grandi set di record. È possibile migliorare le prestazioni tramite query SQL con personalizzato **ORDERBY** oppure **in cui** clausole, query con parametri, o `CDaoQuerydef` gli oggetti che recuperano i record indicizzati specifici.

Per informazioni correlate, vedere l'argomento "FindNext FindFirst, FindLast, e i metodi FindPrevious" nella Guida di DAO.

##  <a name="findprev"></a>  CDaoRecordset::FindPrev
Chiamare questa funzione membro per trovare il record precedente che corrisponde a una condizione specificata.

```
BOOL FindPrev(LPCTSTR lpszFilter);
```

### <a name="parameters"></a>Parametri
*lpszFilter*<br/>
Un'espressione stringa (ad esempio la **in cui** clausola in un'istruzione SQL senza la parola **in cui**) usato per individuare il record.

### <a name="return-value"></a>Valore restituito
Diverso da zero se vengono trovati record corrispondenti, in caso contrario 0.

### <a name="remarks"></a>Note
Il `FindPrev` funzione membro ha inizio la ricerca in corrispondenza del record corrente e Cerca all'indietro verso l'inizio del set di record.

Se si desidera includere tutti i record nella ricerca, non solo quelle che soddisfano una condizione specifica, usano una delle operazioni di spostamento per spostarsi dal record a altro. Per individuare un record in un set di record di tipo di tabella, chiamare il `Seek` funzione membro.

Se non si trova un record corrispondente ai criteri, puntatore al record corrente è indeterminato, e `FindPrev` restituisce zero. Se il set di record contiene più di un record che soddisfa i criteri `FindFirst` individua la prima occorrenza, `FindNext` individua l'occorrenza successiva e così via.

> [!CAUTION]
>  Se si modifica il record corrente, assicurarsi salvare le modifiche chiamando il `Update` funzione membro prima di passare a un altro record. Se si sposta in un altro record senza l'aggiornamento, le modifiche andranno perdute senza preavviso.

Usando una delle operazioni di ricerca non corrisponde alla chiamata al metodo `MoveFirst` o `MoveNext`, tuttavia, che rende semplicemente il primo o successivo record corrente senza specificare una condizione. È possibile eseguire un'operazione di ricerca con un'operazione di spostamento.

Tenere presente quanto segue quando si usano le operazioni di ricerca:

- Se `Find` restituisce diverso da zero, il record corrente non è definito. In questo caso, è necessario posizionare il puntatore di record corrente indietro di un record valido.

- È possibile usare un'operazione di ricerca con un recordset di tipo snapshot scorrimento forward-only.

- È consigliabile usare il formato della data (mese-giorno-anno) degli Stati Uniti per la ricerca di campi che contengono date, anche se non si usa la versione degli Stati Uniti del motore di database Microsoft Jet; in caso contrario, i record corrispondenti non sono disponibili.

- Quando si lavora con database ODBC e dynaset di grandi dimensioni, si potrebbe scoprire che utilizzano le operazioni di ricerca è lento, specialmente quando si lavora con grandi set di record. È possibile migliorare le prestazioni tramite query SQL con personalizzato **ORDERBY** oppure **in cui** clausole, query con parametri, o `CDaoQuerydef` gli oggetti che recuperano i record indicizzati specifici.

Per informazioni correlate, vedere l'argomento "FindNext FindFirst, FindLast, e i metodi FindPrevious" nella Guida di DAO.

##  <a name="getabsoluteposition"></a>  CDaoRecordset::GetAbsolutePosition
Restituisce il numero del record corrente dell'oggetto recordset.

```
long GetAbsolutePosition();
```

### <a name="return-value"></a>Valore restituito
Intero compreso tra 0 e il numero di record del recordset. Corrisponde alla posizione ordinale del record corrente nell'oggetto recordset.

### <a name="remarks"></a>Note
Il valore della proprietà AbsolutePosition dell'oggetto DAO sottostante è in base zero. un'impostazione pari a 0 fa riferimento al primo record del recordset. È possibile determinare il numero di record del recordset popolato chiamando [GetRecordCount](#getrecordcount). La chiamata `GetRecordCount` potrebbe richiedere alcuni minuti perché deve accedervi tutti i record per determinare il conteggio.

Se non sono presenti record corrente, come quando non sono presenti record del recordset, viene restituito 1. Se il record corrente viene eliminato, non è definito il valore della proprietà di esempio di AbsolutePosition e MFC genera un'eccezione se vi viene fatto riferimento. Per i recordset dynaset-type, i nuovi record vengono aggiunti alla fine della sequenza.

> [!NOTE]
>  Questa proprietà non deve essere utilizzato come un numero di record di surrogati. I segnalibri sono ancora lo strumento consigliato per mantenere e restituire dati in una posizione specificata e sono l'unico modo per inserire il record corrente in tutti i tipi di oggetti recordset. In particolare, la posizione di un determinato record cambia quando vengono eliminati uno o più record che la precede. Non vi è alcuna garanzia che un determinato record abbia la stessa posizione assoluta se il set di record viene nuovamente creato nuovamente perché l'ordine dei singoli record all'interno di un set di record non è garantito a meno che non venga creata con un'istruzione SQL utilizzando un  **ORDERBY** clausola.

> [!NOTE]
>  Questa funzione membro è valida solo per dynaset e Recordset di tipo snapshot.

Per informazioni correlate, vedere l'argomento "Proprietà AbsolutePosition" nella Guida di DAO.

##  <a name="getbookmark"></a>  CDaoRecordset:: GetBookmark
Chiamare questa funzione membro per ottenere il valore di segnalibro in un record specifico.

```
COleVariant GetBookmark();
```

### <a name="return-value"></a>Valore restituito
Restituisce un valore che rappresenta il segnalibro sul record corrente.

### <a name="remarks"></a>Note
Quando un oggetto recordset viene creato o aperto, ognuno dei relativi record contiene già un segnalibro univoco se li supporta. Chiamare `CanBookmark` per determinare se un set di record supporta segnalibri.

È possibile salvare il segnalibro per il record corrente, assegnare il valore del segnalibro a un `COleVariant` oggetto. Per tornare rapidamente al record specifico in qualsiasi momento dopo il passaggio a un altro record, chiamare `SetBookmark` con un parametro corrispondente al valore di tale `COleVariant` oggetto.

> [!NOTE]
>  La chiamata [Requery](#requery) segnalibri DAO viene modificato.

Per informazioni correlate, vedere l'argomento "Proprietà Bookmark" nella Guida di DAO.

##  <a name="getcachesize"></a>  CDaoRecordset::GetCacheSize
Chiamare questa funzione membro per ottenere il numero di record memorizzati nella cache.

```
long GetCacheSize();
```

### <a name="return-value"></a>Valore restituito
Un valore che specifica il numero di record in un recordset dynaset-type contenente i dati in locale da memorizzare nella cache da un'origine dati ODBC.

### <a name="remarks"></a>Note
Dati la memorizzazione nella cache migliora le prestazioni di un'applicazione che recupera i dati da un server remoto tramite oggetti recordset dynaset-type. Una cache è uno spazio nella memoria locale che contiene i dati recuperati dal server di più di recente nel caso in cui i dati verranno nuovamente richiesto mentre l'applicazione è in esecuzione. Quando vengono richiesti dati, il motore di database Microsoft Jet controlla prima di tutto la cache per i dati richiesti anziché recuperarli dal server, che richiede più tempo. I dati che non sono stato rilasciato da un'origine dati ODBC non viene salvati nella cache.

Qualsiasi origine dati ODBC, ad esempio una tabella collegata, può avere una cache locale.

Per informazioni correlate, vedere l'argomento "Proprietà CacheSize e CacheStart" nella Guida di DAO.

##  <a name="getcachestart"></a>  CDaoRecordset::GetCacheStart
Chiamare questa funzione membro per ottenere il valore di segnalibro del primo record del recordset da memorizzare nella cache.

```
COleVariant GetCacheStart();
```

### <a name="return-value"></a>Valore restituito
Oggetto `COleVariant` che specifica il segnalibro del primo record del recordset da memorizzare nella cache.

### <a name="remarks"></a>Note
Il motore di database Microsoft Jet richiede record all'interno dell'intervallo della cache dalla cache e richiede i record compreso nell'intervallo della cache dal server.

> [!NOTE]
>  I record recuperati dalla cache non riflettono le modifiche apportate contemporaneamente all'origine dati da altri utenti.

Per informazioni correlate, vedere l'argomento "Proprietà CacheSize e CacheStart" nella Guida di DAO.

##  <a name="getcurrentindex"></a>  CDaoRecordset::GetCurrentIndex
Chiamare questa funzione membro per determinare l'indice attualmente in uso in un tipo di tabella indicizzato `CDaoRecordset` oggetto.

```
CString GetCurrentIndex();
```

### <a name="return-value"></a>Valore restituito
Oggetto `CString` contenente il nome dell'indice attualmente in uso con un set di record di tipo di tabella. Restituisce una stringa vuota se non è stato impostato alcun indice.

### <a name="remarks"></a>Note
Questo indice è la base per l'ordinamento dei record in un set di record di tipo di tabella e viene usato per il [Seek](#seek) funzione membro per trovare i record.

Oggetto `CDaoRecordset` oggetto può avere più di un indice ma è possibile usare un solo indice alla volta (anche se un [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) oggetto può avere molti indici definiti su di esso).

Per informazioni correlate, vedere l'argomento "Oggetto indice" e la definizione "indice corrente" nella Guida di DAO.

##  <a name="getdatecreated"></a>  CDaoRecordset::GetDateCreated
Chiamare questa funzione membro per recuperare la data e ora di che creazione di una tabella di base.

```
COleDateTime GetDateCreated();
```

### <a name="return-value"></a>Valore restituito
Oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto contenente la data e ora di creazione della tabella di base.

### <a name="remarks"></a>Note
Impostazioni di data e ora sono derivate da computer sul quale è stata creata la tabella di base.

Per informazioni correlate, vedere l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.

##  <a name="getdatelastupdated"></a>  CDaoRecordset::GetDateLastUpdated
Chiamare questa funzione membro per recuperare la data e ora che dell'ultimo aggiornamento dello schema.

```
COleDateTime GetDateLastUpdated();
```

### <a name="return-value"></a>Valore restituito
Oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto contenente la data e ora dell'ultimo aggiornamento della struttura di tabella di base (schema).

### <a name="remarks"></a>Note
Impostazioni di data e ora derivano dal computer in cui la struttura della tabella di base (schema) dell'ultimo aggiornamento.

Per informazioni correlate, vedere l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.

##  <a name="getdefaultdbname"></a>  CDaoRecordset::GetDefaultDBName
Chiamare questa funzione membro per determinare il nome del database per questo set di record.

```
virtual CString GetDefaultDBName();
```

### <a name="return-value"></a>Valore restituito
Oggetto `CString` che contiene il percorso e il nome del database da cui deriva questo set di record.

### <a name="remarks"></a>Note
Se un recordset viene creato senza un puntatore a un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md), questo percorso viene utilizzato dal recordset per aprire il database predefinito. Per impostazione predefinita, questa funzione restituisce una stringa vuota. Quando la creazione guidata classe deriva un nuovo set di record da `CDaoRecordset`, questa funzione verrà creato automaticamente.

Nell'esempio seguente viene illustrato l'utilizzo della doppia barra rovesciata (\\\\) nella stringa, così come sono necessari per la stringa deve essere interpretato correttamente.

[!code-cpp[NVC_MFCDatabase#4](../../mfc/codesnippet/cpp/cdaorecordset-class_4.cpp)]

##  <a name="getdefaultsql"></a>  CDaoRecordset::GetDefaultSQL
Il framework chiama questa funzione membro per ottenere l'istruzione SQL predefinita su cui si basa il recordset.

```
virtual CString GetDefaultSQL();
```

### <a name="return-value"></a>Valore restituito
Oggetto `CString` che contiene l'istruzione SQL predefinita.

### <a name="remarks"></a>Note
Potrebbe trattarsi di un nome di tabella o di un'istruzione SQL **SELECT**.

L'istruzione SQL predefinita è indirettamente definire dalla dichiarazione della classe recordset con ClassWizard e ClassWizard esegue questa attività per l'utente.

Se si passa una stringa SQL null per [aperto](#open), questa funzione viene chiamato per determinare il nome della tabella o SQL per il recordset.

##  <a name="geteditmode"></a>  CDaoRecordset::GetEditMode
Chiamare questa funzione membro per determinare lo stato della modifica, che è uno dei valori seguenti:

```
short GetEditMode();
```

### <a name="return-value"></a>Valore restituito
Restituisce un valore che indica lo stato di modifica per il record corrente.

### <a name="remarks"></a>Note

|Valore|Descrizione|
|-----------|-----------------|
|`dbEditNone`|Non è in corso alcuna operazione di modifica.|
|`dbEditInProgress`|`Edit` è stato chiamato.|
|`dbEditAdd`|`AddNew` è stato chiamato.|

Per informazioni correlate, vedere l'argomento "Proprietà EditMode" nella Guida di DAO.

##  <a name="getfieldcount"></a>  CDaoRecordset::GetFieldCount
Chiamare questa funzione membro per recuperare il numero di campi (colonne) definiti nel set di record.

```
short GetFieldCount();
```

### <a name="return-value"></a>Valore restituito
Il numero di campi del recordset.

### <a name="remarks"></a>Note
Per informazioni correlate, vedere l'argomento "Proprietà Count" nella Guida di DAO.

##  <a name="getfieldinfo"></a>  CDaoRecordset::GetFieldInfo
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
Indice a base zero del campo predefinito nella raccolta di campi del recordset, per la ricerca in base all'indice.

*FieldInfo*<br/>
Un riferimento a un [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) struttura.

*dwInfoOptions*<br/>
Opzioni che specificano quali informazioni del recordset da recuperare. Le opzioni disponibili sono elencate qui insieme a ciò che provocano la funzione da restituire. Per prestazioni ottimali, recuperare solo il livello di informazioni che necessarie:

- `AFX_DAO_PRIMARY_INFO` (Impostazione predefinita) Nome, tipo, dimensioni, attributi

- `AFX_DAO_SECONDARY_INFO` Informazioni principali, oltre a: posizione ordinale, richiesto, consentire Zero tabella di origine esterna nome, il campo di origine, lunghezza, ordine di ordinamento,

- `AFX_DAO_ALL_INFO` Informazioni primari e secondari, oltre a: il valore predefinito, la regola di convalida, il testo di convalida

*lpszName*<br/>
Nome del campo.

### <a name="remarks"></a>Note
Una versione della funzione consente di cercare un campo in base all'indice. L'altra versione consente di cercare un campo in base al nome.

Per una descrizione delle informazioni restituite, vedere la [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) struttura. Questa struttura contiene membri che corrispondono agli elementi elencati in precedenza nella descrizione del *dwInfoOptions*. Quando si richiedono informazioni su un unico livello, si ottiene le informazioni dei livelli precedenti oltre.

Per informazioni correlate, vedere l'argomento "Proprietà Attributes" nella Guida di DAO.

##  <a name="getfieldvalue"></a>  CDaoRecordset:: GetFieldValue
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
Un puntatore a una stringa che contiene il nome di un campo.

*varValue*<br/>
Un riferimento a un `COleVariant` che archivierà il valore di un campo.

*nIndex*<br/>
Un indice in base zero del campo nella raccolta di campi del recordset, per la ricerca in base all'indice.

### <a name="return-value"></a>Valore restituito
Le due versioni di `GetFieldValue` che restituiscono un valore restituiscono un oggetto [COleVariant](../../mfc/reference/colevariant-class.md) che contiene il valore di un campo.

### <a name="remarks"></a>Note
È possibile cercare un campo in base al nome o alla posizione ordinale.

> [!NOTE]
>  È più efficiente per chiamare una delle versioni di questa funzione membro che accetta un `COleVariant` riferimento a un oggetto come parametro, anziché la chiamata a una versione che restituisce un `COleVariant` oggetto. Le ultime versioni di questa funzione sono mantenute per compatibilità con le versioni precedenti.

Utilizzare `GetFieldValue` e [SetFieldValue](#setfieldvalue) per associare dinamicamente i campi in fase di esecuzione anziché le colonne che si associano staticamente utilizzando il meccanismo [DoFieldExchange](#dofieldexchange).

`GetFieldValue` e `DoFieldExchange` meccanismo può essere combinato per migliorare le prestazioni. Ad esempio, usare `GetFieldValue` per recuperare un valore che è necessario solo su richiesta e assegnare tale chiamata a un pulsante "Altre informazioni" nell'interfaccia.

Per informazioni correlate, vedere gli argomenti "Campo oggetto" e "Proprietà Value" nella Guida di DAO.

##  <a name="getindexcount"></a>  CDaoRecordset::GetIndexCount
Chiamare questa funzione membro per determinare il numero di indici disponibili sul set di record di tipo di tabella.

```
short GetIndexCount();
```

### <a name="return-value"></a>Valore restituito
Il numero di indici nel set di record di tipo di tabella.

### <a name="remarks"></a>Note
`GetIndexCount` è utile per eseguire i cicli di tutti gli indici nel set di record. A tale scopo, usare `GetIndexCount` unitamente [GetIndexInfo](#getindexinfo). Se si chiama questa funzione membro nel tipo dynaset o Recordset di tipo snapshot, MFC genera un'eccezione.

Per informazioni correlate, vedere l'argomento "Proprietà Attributes" nella Guida di DAO.

##  <a name="getindexinfo"></a>  CDaoRecordset::GetIndexInfo
Chiamare questa funzione membro per ottenere i vari tipi di informazioni su un indice definito nella tabella di base sottostante un recordset.

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
Indice in base zero nella raccolta di indici della tabella, per la ricerca in base alla posizione numerica.

*indexinfo*<br/>
Un riferimento a un [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) struttura.

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sull'indice da recuperare. Le opzioni disponibili sono elencate qui insieme a ciò che provocano la funzione da restituire. Per prestazioni ottimali, recuperare solo il livello di informazioni che necessarie:

- `AFX_DAO_PRIMARY_INFO` (Impostazione predefinita) Campi nome, Info, campo

- `AFX_DAO_SECONDARY_INFO` Informazioni primaria, oltre a: database primario, Unique, Clustered, IgnoreNulls, obbligatorio, esterni

- `AFX_DAO_ALL_INFO` Informazioni primari e secondari, oltre a: Distinct Count

*lpszName*<br/>
Un puntatore al nome dell'oggetto, indice di ricerca in base al nome.

### <a name="remarks"></a>Note
Una versione della funzione consente di cercare un indice in base alla posizione nella raccolta. L'altra versione consente di cercare un indice in base al nome.

Per una descrizione delle informazioni restituite, vedere la [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) struttura. Questa struttura contiene membri che corrispondono agli elementi elencati in precedenza nella descrizione del *dwInfoOptions*. Quando si richiedono informazioni su un unico livello, si ottiene le informazioni dei livelli precedenti oltre.

Per informazioni correlate, vedere l'argomento "Proprietà Attributes" nella Guida di DAO.

##  <a name="getlastmodifiedbookmark"></a>  CDaoRecordset::GetLastModifiedBookmark
Chiamare questa funzione membro per recuperare il segnalibro del record più recente aggiunti o aggiornati.

```
COleVariant GetLastModifiedBookmark();
```

### <a name="return-value"></a>Valore restituito
Oggetto `COleVariant` che contiene un segnalibro che indica l'ultimo record aggiunto o modificato.

### <a name="remarks"></a>Note
Quando un oggetto recordset viene creato o aperto, ognuno dei relativi record contiene già un segnalibro univoco se li supporta. Chiamare [GetBookmark](#getbookmark) per determinare se il recordset supporta segnalibri. Se il recordset non supporta i segnalibri, un `CDaoException` viene generata un'eccezione.

Quando si aggiunge un record, visualizzata alla fine del set di record e non è il record corrente. Per rendere il nuovo record correnti, chiamare `GetLastModifiedBookmark` e quindi chiamare `SetBookmark` da restituire per il record appena aggiunto.

Per informazioni correlate, vedere l'argomento "Proprietà LastModified" nella Guida di DAO.

##  <a name="getlockingmode"></a>  CDaoRecordset::GetLockingMode
Chiamare questa funzione membro per determinare il tipo di blocco in vigore per il recordset.

```
BOOL GetLockingMode();
```

### <a name="return-value"></a>Valore restituito
Diverso da zero se il tipo di blocco pessimistico, in caso contrario, 0 per il blocco ottimistico record.

### <a name="remarks"></a>Note
Quando il blocco pessimistico è attiva, la pagina di dati che contiene il record che si sta modificando è bloccato, non appena si chiama il [modifica](#edit) funzione membro. La pagina viene sbloccata quando si chiama il [Update](#update) oppure [Chiudi](#close) funzione membro o una delle operazioni di spostamento o ricerca.

Quando è attivo il blocco ottimistico, la pagina di dati che contiene il record viene bloccata solo durante l'aggiornamento è il record con il `Update` funzione membro.

Quando si usano Origini dati ODBC, la modalità di blocco è sempre ottimistica.

Per informazioni correlate, vedere gli argomenti "Proprietà LockEdits" e "Comportamento di blocco in fra più utenti applicazioni" nella Guida di DAO.

##  <a name="getname"></a>  CDaoRecordset::GetName
Chiamare questa funzione membro per recuperare il nome del set di record.

```
CString GetName();
```

### <a name="return-value"></a>Valore restituito
Oggetto `CString` contenente il nome del set di record.

### <a name="remarks"></a>Note
Il nome del set di record deve iniziare con una lettera e può contenere un massimo di 40 caratteri. Può includere numeri e caratteri di sottolineatura ma non può includere spazi o punteggiatura.

Per informazioni correlate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.

##  <a name="getparamvalue"></a>  CDaoRecordset::GetParamValue
Chiamare questa funzione membro per recuperare il valore corrente del parametro specificato archiviato nell'oggetto DAOParameter sottostante.

```
virtual COleVariant GetParamValue(int nIndex);
virtual COleVariant GetParamValue(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri
*nIndex*<br/>
Posizione numerica del parametro nell'oggetto DAOParameter sottostante.

*lpszName*<br/>
Il nome del parametro il cui valore desiderato.

### <a name="return-value"></a>Valore restituito
Un oggetto della classe [COleVariant](../../mfc/reference/colevariant-class.md) che contiene il valore del parametro.

### <a name="remarks"></a>Note
È possibile accedere il parametro in base al nome o in base alla posizione numerica della raccolta.

Per informazioni correlate, vedere l'argomento "Oggetto Parameter" nella Guida di DAO.

##  <a name="getpercentposition"></a>  CDaoRecordset:: GetPercentPosition
Quando si lavora con un tipo dynaset o recordset di tipo snapshot, se si chiama `GetPercentPosition` prima di popolare completamente il recordset, la quantità di spostamento è rispetto al numero di record è possibile accedere come indicato dalla chiamata [GetRecordCount](#getrecordcount).

```
float GetPercentPosition();
```

### <a name="return-value"></a>Valore restituito
Un numero compreso tra 0 e 100 che indica la posizione approssimativa del record corrente nell'oggetto recordset in base a una percentuale dei record del recordset.

### <a name="remarks"></a>Note
È possibile spostare all'ultimo record chiamando [MoveLast](#movelast) a completa la popolazione di tutti i recordset, ma ciò potrebbe richiedere una quantità significativa di tempo.

È possibile chiamare `GetPercentPosition` su tutti i tre tipi di oggetti recordset, incluse le tabelle senza indici. Tuttavia, non è possibile chiamare `GetPercentPosition` su snapshot di scorrimento di tipo forward-only o in un recordset aperti da una query pass-through su un database esterno. Se nessun record corrente o he record corrente è stato eliminato, un `CDaoException` viene generata un'eccezione.

Per informazioni correlate, vedere l'argomento "Proprietà PercentPosition" nella Guida di DAO.

##  <a name="getrecordcount"></a>  CDaoRecordset::GetRecordCount
Chiamare questa funzione membro per scoprire il numero di record in un set di record è stato eseguito.

```
long GetRecordCount();
```

### <a name="return-value"></a>Valore restituito
Restituisce il numero di record è possibile accedere in un oggetto recordset.

### <a name="remarks"></a>Note
`GetRecordCount` non indica il numero di record contenuto in un recordset di tipo di snapshot o tipo dynaset fino a quando non sono stati eseguiti tutti i record. Questa chiamata di funzione membro può richiedere una quantità significativa di tempo per il completamento.

Una volta eseguito l'ultimo record, il valore restituito indica il numero totale di record del recordset non eliminati. Per forzare l'ultimo record per accedervi, chiamare il `MoveLast` o `FindLast` funzione membro per il recordset. È inoltre possibile utilizzare un conteggio di SQL per determinare il numero approssimativo di record restituiti dalla query.

Poiché l'applicazione elimina i record in un recordset dynaset-type, il valore restituito di `GetRecordCount` diminuisce. Tuttavia, i record eliminati da altri utenti non vengono riflesse dalla `GetRecordCount` fino a quando il record corrente è posizionato su un record eliminato. Se si esegue una transazione che interessa il functoid Conteggio record e successivamente eseguire il rollback della transazione, `GetRecordCount` non riflette il numero effettivo di record rimanenti.

Il valore di `GetRecordCount` da un set di record di tipo di snapshot non è interessato dalle modifiche nelle tabelle sottostanti.

Il valore di `GetRecordCount` da un tipo di tabella recordset riflette il numero approssimativo di record nella tabella ed è interessato immediatamente perché i record di tabella vengono aggiunti ed eliminati.

Un set di record senza record restituisce un valore pari a 0. Quando si utilizzano le tabelle collegate o database ODBC, `GetRecordCount` restituisce sempre - 1. Chiama il `Requery` funzione di membro in un recordset Reimposta il valore della `GetRecordCount` come se fosse eseguita nuovamente la query.

Per informazioni correlate, vedere l'argomento "Proprietà RecordCount" nella Guida di DAO.

##  <a name="getsql"></a>  CDaoRecordset::GetSQL
Chiamare questa funzione membro per ottenere l'istruzione SQL che è stato usato per selezionare i record del recordset quando è stato aperto.

```
CString GetSQL() const;
```

### <a name="return-value"></a>Valore restituito
Oggetto `CString` che contiene l'istruzione SQL.

### <a name="remarks"></a>Note
Questo sarà in genere un database SQL **seleziona** istruzione.

La stringa restituita da `GetSQL` viene in genere diverse da qualsiasi stringa potrebbe essere passato al recordset nel *lpszSQL* parametro per il [Open](#open) funzione membro. Infatti il recordset crea un'istruzione SQL completa basata su ciò che è stato passato a `Open`, che cosa è stato specificato con ClassWizard e ciò che è stato specificato nel [m_strFilter](#m_strfilter) e [m_strSort](#m_strsort) i membri dati.

> [!NOTE]
>  Chiamare questa funzione membro solo dopo la chiamata `Open`.

Per informazioni correlate, vedere l'argomento "Proprietà SQL" nella Guida di DAO.

##  <a name="gettype"></a>  CDaoRecordset::GetType
Dopo l'apertura del recordset per determinare il tipo dell'oggetto recordset, chiamare questa funzione membro.

```
short GetType();
```

### <a name="return-value"></a>Valore restituito
Uno dei seguenti valori che indica il tipo di un set di record:

- `dbOpenTable` Recordset tipo di tabella

- `dbOpenDynaset` Tipo dynaset

- `dbOpenSnapshot` Recordset tipo di snapshot

### <a name="remarks"></a>Note
Per informazioni correlate, vedere l'argomento "Proprietà di tipo" nella Guida di DAO.

##  <a name="getvalidationrule"></a>  CDaoRecordset::GetValidationRule
Chiamare questa funzione membro per determinare la regola usata per convalidare i dati.

```
CString GetValidationRule();
```

### <a name="return-value"></a>Valore restituito
Oggetto `CString` oggetto che contiene un valore che convalida i dati in un record come è stato modificato o aggiunto a una tabella.

### <a name="remarks"></a>Note
Questa regola è basata su testo e viene applicata ogni volta che la tabella sottostante è stata modificata. Se i dati non validi, MFC genera un'eccezione. Il messaggio di errore restituito è il testo della proprietà messaggio di errore dell'oggetto campo sottostante, se specificato, o il testo dell'espressione specificata dalla proprietà ValidationRule dell'oggetto campo sottostante. È possibile chiamare [GetValidationText](#getvalidationtext) per ottenere il testo del messaggio di errore.

Ad esempio, un campo di un record che richiede il giorno del mese potrebbe avere una regola di convalida, ad esempio "giorno BETWEEN 1 e 31."

Per informazioni correlate, vedere l'argomento "Proprietà ValidationRule" nella Guida di DAO.

##  <a name="getvalidationtext"></a>  CDaoRecordset::GetValidationText
Chiamare questa funzione membro per recuperare il testo della proprietà messaggio di errore dell'oggetto campo sottostante.

```
CString GetValidationText();
```

### <a name="return-value"></a>Valore restituito
Oggetto `CString` oggetto contenente il testo del messaggio che viene visualizzato se il valore di un campo non soddisfa la regola di convalida dell'oggetto campo sottostante.

### <a name="remarks"></a>Note
Per informazioni correlate, vedere l'argomento "Proprietà messaggio di errore" nella Guida di DAO.

##  <a name="isbof"></a>  CDaoRecordset::IsBOF
Chiamare questa funzione membro prima passare dal record a record per informazioni su se è stata prima del primo record del recordset.

```
BOOL IsBOF() const;
```

### <a name="return-value"></a>Valore restituito
Diverso da zero se il recordset non contiene alcun record o se è eseguito lo scorrimento all'indietro prima del primo record; in caso contrario 0.

### <a name="remarks"></a>Note
È inoltre possibile chiamare `IsBOF` insieme a `IsEOF` per determinare se il set di record contiene record o è vuoto. Immediatamente dopo la chiamata `Open`, se il recordset non contiene alcun record, `IsBOF` restituisce diverso da zero. Quando si apre un oggetto recordset che include almeno un record, il primo record è il record corrente e `IsBOF` restituisce 0.

Se il primo record corrisponde al record corrente e si chiama `MovePrev`, `IsBOF` successivamente restituirà diverso da zero. Se `IsBOF` restituisce diverso da zero e si chiama `MovePrev`, viene generata un'eccezione. Se `IsBOF` restituisce un valore diverso da zero, il record corrente è non definito e qualsiasi azione che richiede un record corrente genererà un'eccezione.

Effetto di metodi specifici su `IsBOF` e `IsEOF` impostazioni:

- La chiamata `Open*` internamente rende il primo record nel set di record del record corrente chiamando `MoveFirst`. Pertanto, la chiamata `Open` su un set vuoto di cause record `IsBOF` e `IsEOF` restituire diverso da zero. (Vedere la tabella seguente per il comportamento di un tentativo fallito `MoveFirst` o `MoveLast` chiamare.)

- Tutte le operazioni di spostamento che riescono a trovare un record causano entrambe `IsBOF` e `IsEOF` restituirà 0.

- Un' `AddNew` chiamata seguita da un' `Update` chiamata che è stato inserito un nuovo record farà `IsBOF` per restituire 0, ma solo se `IsEOF` già è diverso da zero. Lo stato di `IsEOF` rimarrà sempre invariato. Come definito dal motore di database Microsoft Jet, puntatore al record corrente di un set di record vuoto è alla fine di un file, in modo che qualsiasi nuovo record viene inserito dopo il record corrente.

- Eventuali `Delete` chiamata, anche se rimuove il record rimanente solo da un recordset non modificherà il valore di `IsBOF` o `IsEOF`.

Questa tabella mostra le operazioni di spostamento consentite con diverse combinazioni di `IsBOF` /  `IsEOF`.

||Metodi MoveFirst, MoveLast|MovePrev,<br /><br /> Spostare < 0|Spostare 0|MoveNext,<br /><br /> Sposta > 0|
|------|-------------------------|-----------------------------|------------|-----------------------------|
|`IsBOF`= diverso da zero,<br /><br /> `IsEOF`=0|Allowed|Eccezione|Eccezione|Allowed|
|`IsBOF`=0,<br /><br /> `IsEOF`= diverso da zero|Allowed|Allowed|Eccezione|Eccezione|
|Sia diverso da zero|Eccezione|Eccezione|Eccezione|Eccezione|
|Entrambi 0|Allowed|Allowed|Allowed|Allowed|

Consentendo un'operazione di spostamento non significa che l'operazione riuscirà a individuare un record. Indica semplicemente che un tentativo di eseguire l'operazione di spostamento specificata è consentito e non genererà un'eccezione. Il valore della `IsBOF` e `IsEOF` funzioni membro possono cambiare in seguito al tentativo di spostamento.

L'effetto delle operazioni di spostamento non viene individuato un record sul valore della `IsBOF` e `IsEOF` impostazioni è illustrato nella tabella seguente.

||IsBOF|IsEOF|
|------|-----------|-----------|
|`MoveFirst`, `MoveLast`|Diverso da zero|Diverso da zero|
|`Move` 0|Nessuna modifica|Nessuna modifica|
|`MovePrev`, `Move` < 0|Diverso da zero|Nessuna modifica|
|`MoveNext`, `Move` > 0|Nessuna modifica|Diverso da zero|

Per informazioni correlate, vedere l'argomento "Proprietà BOF, EOF proprietà" nella Guida di DAO.

##  <a name="isdeleted"></a>  CDaoRecordset::IsDeleted
Chiamare questa funzione membro per determinare se il record corrente è stato eliminato.

```
BOOL IsDeleted() const;
```

### <a name="return-value"></a>Valore restituito
Diverso da zero se il recordset è posizionato su un record eliminato. in caso contrario 0.

### <a name="remarks"></a>Note
Se si scorre verso un record e `IsDeleted` restituisce TRUE (diverso da zero), quindi è necessario scorrere verso un altro record prima di poter eseguire qualsiasi altra operazione di recordset.

> [!NOTE]
>  Non è necessario controllare lo stato eliminato per i record in un recordset snapshot o tipo di tabella. Perché i record non possono essere eliminati da uno snapshot, non è necessario chiamare `IsDeleted`. Per i recordset di tipo di tabella, i record eliminati vengono effettivamente rimosse dal recordset. Una volta che un record è stato eliminato, da parte dell'utente, un altro utente, o in un altro oggetto recordset, è possibile scorrere tale record. Pertanto, non è necessario chiamare `IsDeleted`.

Quando si elimina un record di tipo snapshot, questa viene rimossa dal set di record e tornare a tale record non è possibile scorrere. Tuttavia, se un record di tipo snapshot viene eliminato da un altro utente o in un altro oggetto recordset basati sulla stessa tabella, `IsDeleted` restituirà TRUE quando si scorre in un secondo momento al record specifico.

Per informazioni correlate, vedere gli argomenti "Metodo Delete", "Property LastModified" e "Proprietà EditMode" nella Guida di DAO.

##  <a name="iseof"></a>  CDaoRecordset::IsEOF
Chiamare questa funzione membro durante lo scorrimento di record per record per informazioni su se sono stati superati l'ultimo record del recordset.

```
BOOL IsEOF() const;
```

### <a name="return-value"></a>Valore restituito
Diverso da zero se il recordset non contiene alcun record o se è eseguito lo scorrimento oltre l'ultimo record; in caso contrario 0.

### <a name="remarks"></a>Note
È inoltre possibile chiamare `IsEOF` per determinare se il set di record contiene record o è vuoto. Immediatamente dopo la chiamata `Open`, se il recordset non contiene alcun record, `IsEOF` restituisce diverso da zero. Quando si apre un oggetto recordset che include almeno un record, il primo record è il record corrente e `IsEOF` restituisce 0.

Se l'ultimo record è il record corrente quando si chiama `MoveNext`, `IsEOF` successivamente restituirà diverso da zero. Se `IsEOF` restituisce diverso da zero e si chiama `MoveNext`, viene generata un'eccezione. Se `IsEOF` restituisce un valore diverso da zero, il record corrente è non definito e qualsiasi azione che richiede un record corrente genererà un'eccezione.

Effetto di metodi specifici su `IsBOF` e `IsEOF` impostazioni:

- La chiamata `Open` internamente rende il primo record nel set di record del record corrente chiamando `MoveFirst`. Pertanto, la chiamata `Open` su un set vuoto di cause record `IsBOF` e `IsEOF` restituire diverso da zero. (Vedere la tabella seguente per il comportamento di un tentativo fallito `MoveFirst` chiamare.)

- Tutte le operazioni di spostamento che riescono a trovare un record causano entrambe `IsBOF` e `IsEOF` restituirà 0.

- Un' `AddNew` chiamata seguita da un' `Update` chiamata che è stato inserito un nuovo record farà `IsBOF` per restituire 0, ma solo se `IsEOF` già è diverso da zero. Lo stato di `IsEOF` rimarrà sempre invariato. Come definito dal motore di database Microsoft Jet, puntatore al record corrente di un set di record vuoto è alla fine di un file, in modo che qualsiasi nuovo record viene inserito dopo il record corrente.

- Eventuali `Delete` chiamata, anche se rimuove il record rimanente solo da un recordset non modificherà il valore di `IsBOF` o `IsEOF`.

Questa tabella mostra le operazioni di spostamento consentite con diverse combinazioni di `IsBOF` /  `IsEOF`.

||Metodi MoveFirst, MoveLast|MovePrev,<br /><br /> Spostare < 0|Spostare 0|MoveNext,<br /><br /> Sposta > 0|
|------|-------------------------|-----------------------------|------------|-----------------------------|
|`IsBOF`= diverso da zero,<br /><br /> `IsEOF`=0|Allowed|Eccezione|Eccezione|Allowed|
|`IsBOF`=0,<br /><br /> `IsEOF`= diverso da zero|Allowed|Allowed|Eccezione|Eccezione|
|Sia diverso da zero|Eccezione|Eccezione|Eccezione|Eccezione|
|Entrambi 0|Allowed|Allowed|Allowed|Allowed|

Consentendo un'operazione di spostamento non significa che l'operazione riuscirà a individuare un record. Indica semplicemente che un tentativo di eseguire l'operazione di spostamento specificata è consentito e non genererà un'eccezione. Il valore della `IsBOF` e `IsEOF` funzioni membro possono cambiare in seguito al tentativo di spostamento.

L'effetto delle operazioni di spostamento non viene individuato un record sul valore della `IsBOF` e `IsEOF` impostazioni è illustrato nella tabella seguente.

||IsBOF|IsEOF|
|------|-----------|-----------|
|`MoveFirst`, `MoveLast`|Diverso da zero|Diverso da zero|
|`Move` 0|Nessuna modifica|Nessuna modifica|
|`MovePrev`, `Move` < 0|Diverso da zero|Nessuna modifica|
|`MoveNext`, `Move` > 0|Nessuna modifica|Diverso da zero|

Per informazioni correlate, vedere l'argomento "Proprietà BOF, EOF proprietà" nella Guida di DAO.

##  <a name="isfielddirty"></a>  CDaoRecordset::IsFieldDirty
Chiamare questa funzione membro per determinare se il membro dati di campo specificato del dynaset è stato contrassegnato come "modificati" (modificata).

```
BOOL IsFieldDirty(void* pv);
```

### <a name="parameters"></a>Parametri
*PV*<br/>
Un puntatore a membro di dati di campo cui si desidera controllare, oppure NULL per determinare se i campi sono dirty lo stato.

### <a name="return-value"></a>Valore restituito
Diverso da zero se il membro dati di campo specificato è contrassegnato come dirty; in caso contrario 0.

### <a name="remarks"></a>Note
I dati in tutti i membri di dati dei campi modificati verranno trasferiti al record nell'origine dati quando il record corrente viene aggiornato da una chiamata ai `Update` funzione membro `CDaoRecordset` (segue una chiamata a `Edit` o `AddNew`). Con queste informazioni è possibile eseguire ulteriori passaggi, ad esempio rimozione dei flag del membro di dati campo per contrassegnare la colonna in modo che verrà scritto non nell'origine dati.

`IsFieldDirty` viene implementata tramite `DoFieldExchange`.

##  <a name="isfieldnull"></a>  CDaoRecordset::IsFieldNull
Chiamare questa funzione membro per determinare se il membro dati di campo specificato di un set di record è stato contrassegnato come Null.

```
BOOL IsFieldNull(void* pv);
```

### <a name="parameters"></a>Parametri
*PV*<br/>
Puntatore al membro dati campo il cui stato desiderato da controllare, oppure NULL per determinare se i campi sono Null.

### <a name="return-value"></a>Valore restituito
Diverso da zero se il membro dati di campo specificato è contrassegnato come Null. in caso contrario 0.

### <a name="remarks"></a>Note
(Nella terminologia dei database, Null significa "non having alcun valore" e non è lo stesso come valori NULL in C++). Se un membro dati del campo è contrassegnato come Null, viene interpretato come una colonna del record corrente per cui non è disponibile alcun valore.

> [!NOTE]
>  In determinate situazioni, utilizzando `IsFieldNull` può risultare inefficiente, come illustrato nell'esempio di codice seguente:

[!code-cpp[NVC_MFCDatabase#5](../../mfc/codesnippet/cpp/cdaorecordset-class_5.cpp)]

> [!NOTE]
>  Se si usa l'associazione dinamica record, senza che deriva da `CDaoRecordset`, assicurarsi di usare VT_NULL, come illustrato nell'esempio.

##  <a name="isfieldnullable"></a>  CDaoRecordset::IsFieldNullable
Chiamare questa funzione membro per determinare se il membro dati di campo specificato è "ammette valori null" (può essere impostato su un valore Null. C++ NULL non è lo stesso come Null, ovvero, nella terminologia dei database, "non having alcun valore").

```
BOOL IsFieldNullable(void* pv);
```

### <a name="parameters"></a>Parametri
*PV*<br/>
Puntatore al membro dati campo il cui stato desiderato da controllare, oppure NULL per determinare se i campi sono Null.

### <a name="return-value"></a>Valore restituito
Diverso da zero se il membro dati di campo specificato può essere Null. in caso contrario 0.

### <a name="remarks"></a>Note
Un campo che non può essere Null deve avere un valore. Se si prova a impostare tale campo su Null quando si aggiunge o aggiorna un record, l'origine dati rifiuta l'aggiunta o aggiornamento, e `Update` genererà un'eccezione. L'eccezione si verifica quando si chiama `Update`, non quando si chiama `SetFieldNull`.

##  <a name="isopen"></a>  CDaoRecordset::IsOpen
Chiamare questa funzione membro per determinare se il recordset è aperto.

```
BOOL IsOpen() const;
```

### <a name="return-value"></a>Valore restituito
Diverso da zero se l'oggetto recordset `Open` o `Requery` funzione membro è stato precedentemente chiamata e il set di record non è stato chiuso; in caso contrario 0.

### <a name="remarks"></a>Note

##  <a name="m_bcheckcachefordirtyfields"></a>  CDaoRecordset:: M_bcheckcachefordirtyfields
Contiene un flag che indica se memorizzati nella cache i campi contrassegnati automaticamente come dirty (modificati) e un valore Null.

### <a name="remarks"></a>Note
Il flag viene impostato su TRUE. L'impostazione di questo membro dei dati controlla l'intero meccanismo del doppio buffer. Se si imposta il flag su TRUE, è possibile disattivare la memorizzazione nella cache per campo per campo utilizzando il meccanismo DFX. Se il flag è impostato su FALSE, è necessario chiamare `SetFieldDirty` e `SetFieldNull` autonomamente.

Impostare il membro dati prima di chiamare `Open`. Questo meccanismo è principalmente per la facilità d'uso. Prestazioni potrebbero essere più lente a causa il doppio buffer dei campi quando vengono apportate modifiche.

##  <a name="m_nfields"></a>  CDaoRecordset::m_nFields
Contiene il numero di membri dati di campi della classe recordset e il numero delle colonne selezionate dal recordset dall'origine dati.

### <a name="remarks"></a>Note
È necessario inizializzare il costruttore della classe recordset `m_nFields` con il numero corretto di campi associati staticamente. ClassWizard scrive tale inizializzazione per l'utente quando si tenta di recordset: dichiarazione di classe. È possibile anche scriverla manualmente.

Il framework utilizza questo numero per gestire l'interazione tra i membri di dati di campo e rispettive colonne del record corrente nell'origine dati.

> [!NOTE]
>  Questo numero deve corrispondere al numero di colonne di output registrato nel `DoFieldExchange` dopo una chiamata a `SetFieldType` con il parametro `CDaoFieldExchange::outputColumn`.

È possibile associare le colonne in modo dinamico per mezzo di `CDaoRecordset::GetFieldValue` e `CDaoRecordset::SetFieldValue`. Se in questo caso, non occorre incrementare il conteggio nella `m_nFields` in modo da riflettere il numero di funzioni DFX chiamate `DoFieldExchange` funzione membro.

##  <a name="m_nparams"></a>  CDaoRecordset::m_nParams
Contiene il numero di membri dati di parametro nella classe recordset, ovvero il numero di parametri passata con la query del recordset.

### <a name="remarks"></a>Note
Se la classe recordset dispone di alcun membro dati di parametro, il costruttore della classe deve inizializzare *m_nParams* con il numero corretto. Il valore di *m_nParams* il valore predefinito è 0. Se si aggiungono membri dati di parametro, che è necessario eseguire manualmente, è necessario aggiungere anche manualmente un'inizializzazione nel costruttore della classe in modo da riflettere il numero di parametri (che deve essere grande almeno come il numero di ' segnaposto nel *m_strFilter*  oppure *m_strSort* stringa).

Quando Parametrizza la query del recordset, il framework utilizza questo numero.

> [!NOTE]
>  Questo numero deve corrispondere al numero di "params", registrata nel `DoFieldExchange` dopo una chiamata a `SetFieldType` con il parametro `CFieldExchange::param`.

Per informazioni correlate, vedere l'argomento "Oggetto Parameter" nella Guida di DAO.

##  <a name="m_pdaorecordset"></a>  CDaoRecordset::m_pDAORecordset
Contiene un puntatore all'interfaccia OLE per l'oggetto recordset DAO sottostante il `CDaoRecordset` oggetto.

### <a name="remarks"></a>Note
Utilizzare questo puntatore, se è necessario accedere direttamente all'interfaccia DAO.

Per informazioni correlate, vedere l'argomento "Oggetto Recordset" nella Guida di DAO.

##  <a name="m_pdatabase"></a>  CDaoRecordset::m_pDatabase
Contiene un puntatore al `CDaoDatabase` oggetto attraverso il quale il recordset è connesso a un'origine dati.

### <a name="remarks"></a>Note
Questa variabile viene impostata in due modi. In genere, si passa un puntatore a un a cui è già aperta `CDaoDatabase` dell'oggetto quando si costruisce l'oggetto recordset. Se si passa NULL invece `CDaoRecordset` crea un `CDaoDatabase` oggetto per l'utente e lo apre. In entrambi i casi `CDaoRecordset` memorizza il puntatore del mouse in questa variabile.

In genere non direttamente dovrai utilizzare il puntatore archiviato in `m_pDatabase`. Se si scrivono le tue estensioni `CDaoRecordset`, tuttavia, potrebbe essere necessario usare il puntatore del mouse. Ad esempio, potrebbe essere necessario il puntatore del mouse se genera il proprio `CDaoException`(s).

Per informazioni correlate, vedere l'argomento "Oggetto di Database" nella Guida di DAO.

##  <a name="m_strfilter"></a>  CDaoRecordset::m_strFilter
Contiene una stringa che viene usata per costruire il **in cui** clausola di un'istruzione SQL.

### <a name="remarks"></a>Note
Non include la parola riservata **in cui** per filtrare il recordset. L'uso di questo membro dati non è applicabile al tipo di tabella Recordset. L'uso di `m_strFilter` non ha alcun effetto quando si apre un recordset utilizzando un `CDaoQueryDef` puntatore.

Usare il formato della data (mese-giorno-anno) degli Stati Uniti quando si filtrano i campi che contengono date, anche se non si usa la versione degli Stati Uniti del motore di database Microsoft Jet; in caso contrario, i dati non possono essere filtrati come previsto.

Per informazioni correlate, vedere l'argomento "Proprietà Filter" nella Guida di DAO.

##  <a name="m_strsort"></a>  CDaoRecordset::m_strSort
Contiene una stringa che contiene il **ORDERBY** clausola di un'istruzione SQL senza le parole riservate **ORDERBY**.

### <a name="remarks"></a>Note
È possibile ordinare oggetti recordset dynaset snapshot-tipo.

Non è possibile ordinare gli oggetti recordset di tipo di tabella. Per determinare l'ordinamento di un set di record di tipo di tabella, chiamare [SetCurrentIndex](#setcurrentindex).

L'uso di *m_strSort* non ha alcun effetto quando si apre un recordset utilizzando un `CDaoQueryDef` puntatore.

Per informazioni correlate, vedere l'argomento "Proprietà di ordinamento" nella Guida di DAO.

##  <a name="move"></a>  CDaoRecordset:: Move
Chiamare questa funzione membro per posizionare il recordset *lRows* i record del record corrente.

```
virtual void Move(long lRows);
```

### <a name="parameters"></a>Parametri
*lRows*<br/>
Il numero di record da spostare in avanti o indietro. I valori positivi spostano in avanti, verso la fine del set di record. I valori negativi spostano all'indietro, verso l'inizio.

### <a name="remarks"></a>Note
È possibile spostare in avanti o indietro. `Move( 1 )` è equivalente a `MoveNext`, e `Move( -1 )` equivale a `MovePrev`.

> [!CAUTION]
>  La chiamata a uno qualsiasi del `Move` funzioni genera un'eccezione se il recordset non contiene record. In generale, chiamare sia `IsBOF` e `IsEOF` prima un'operazione di spostamento per determinare se il set di record dispone di alcun record. Dopo aver chiamato `Open` oppure `Requery`, chiamare `IsBOF` o `IsEOF`.

> [!NOTE]
>  Se è eseguito lo scorrimento oltre l'inizio o fine del set di record ( `IsBOF` oppure `IsEOF` restituisce diverso da zero), una chiamata a `Move` genera un `CDaoException`.

> [!NOTE]
>  Se si chiama uno qualsiasi del `Move` funzioni mentre il record corrente viene aggiornato o aggiunto, gli aggiornamenti vengono persi senza alcun avviso.

Quando si chiama `Move` su uno snapshot dello scorrimento di tipo forward-only, il *lRows* parametro deve essere un numero intero positivo e i segnalibri non sono consentiti, in modo da poter proseguire solo.

Per rendere il primo, ultimo, successivo o precedente di record in un recordset la chiamata corrente di record, il `MoveFirst`, `MoveLast`, `MoveNext`, o `MovePrev` funzione membro.

Per informazioni correlate, vedere gli argomenti "Sposta Method" e "MoveFirst, MoveLast, MoveNext, MovePrevious metodi" nella Guida di DAO.

##  <a name="movefirst"></a>  CDaoRecordset::MoveFirst
Chiamare questa funzione membro per rendere il primo record nel set di record (se presente) del record corrente.

```
void MoveFirst();
```

### <a name="remarks"></a>Note
Non è necessario chiamare `MoveFirst` immediatamente dopo l'apertura del recordset. A quel punto, il primo record (se presente) viene automaticamente il record corrente.

> [!CAUTION]
>  La chiamata a uno qualsiasi del `Move` funzioni genera un'eccezione se il recordset non contiene record. In generale, chiamare sia `IsBOF` e `IsEOF` prima un'operazione di spostamento per determinare se il set di record dispone di alcun record. Dopo aver chiamato `Open` oppure `Requery`, chiamare `IsBOF` o `IsEOF`.

> [!NOTE]
>  Se si chiama uno qualsiasi del `Move` funzioni mentre il record corrente viene aggiornato o aggiunto, gli aggiornamenti vengono persi senza alcun avviso.

Usare il `Move` funzioni per passare da un record a altro senza applicare una condizione. Usare le operazioni di ricerca per individuare i record in un tipo dynaset o un oggetto di tipo snapshot recordset che soddisfano una determinata condizione. Per individuare un record in un oggetto recordset di tipo di tabella, chiamare `Seek`.

Se il set di record fa riferimento a un set di record di tipo di tabella, lo spostamento segue dell'indice della tabella corrente. È possibile impostare l'indice corrente usando la proprietà di indice dell'oggetto DAO sottostante. Se non si imposta l'indice corrente, non è definito l'ordine di record restituiti.

Se si chiama `MoveLast` in un oggetto recordset basato su una query SQL o querydef, la query viene forzata il completamento e l'oggetto recordset è completamente popolata.

Non è possibile chiamare il `MoveFirst` o `MovePrev` funzione membro con uno snapshot di scorrimento di tipo forward-only.

Per spostare la posizione dell'istanza corrente di record in un oggetto recordset uno specifico numero di record in avanti o indietro, chiamare `Move`.

Per informazioni correlate, vedere gli argomenti "Sposta Method" e "MoveFirst, MoveLast, MoveNext, MovePrevious metodi" nella Guida di DAO.

##  <a name="movelast"></a>  CDaoRecordset::MoveLast
Chiamare questa funzione membro per verificare l'ultimo record (se presente) nel set di record del record corrente.

```
void MoveLast();
```

### <a name="remarks"></a>Note

> [!CAUTION]
>  La chiamata a uno qualsiasi del `Move` funzioni genera un'eccezione se il recordset non contiene record. In generale, chiamare sia `IsBOF` e `IsEOF` prima un'operazione di spostamento per determinare se il set di record dispone di alcun record. Dopo aver chiamato `Open` oppure `Requery`, chiamare `IsBOF` o `IsEOF`.

> [!NOTE]
>  Se si chiama uno qualsiasi del `Move` funzioni mentre il record corrente viene aggiornato o aggiunto, gli aggiornamenti vengono persi senza alcun avviso.

Usare il `Move` funzioni per passare da un record a altro senza applicare una condizione. Usare le operazioni di ricerca per individuare i record in un tipo dynaset o un oggetto di tipo snapshot recordset che soddisfano una determinata condizione. Per individuare un record in un oggetto recordset di tipo di tabella, chiamare `Seek`.

Se il set di record fa riferimento a un set di record di tipo di tabella, lo spostamento segue dell'indice della tabella corrente. È possibile impostare l'indice corrente usando la proprietà di indice dell'oggetto DAO sottostante. Se non si imposta l'indice corrente, non è definito l'ordine di record restituiti.

Se si chiama `MoveLast` in un oggetto recordset basato su una query SQL o querydef, la query viene forzata il completamento e l'oggetto recordset è completamente popolata.

Per spostare la posizione dell'istanza corrente di record in un oggetto recordset uno specifico numero di record in avanti o indietro, chiamare `Move`.

Per informazioni correlate, vedere gli argomenti "Sposta Method" e "MoveFirst, MoveLast, MoveNext, MovePrevious metodi" nella Guida di DAO.

##  <a name="movenext"></a>  CDaoRecordset::MoveNext
Chiamare questa funzione membro per rendere il record successivo nel set di record del record corrente.

```
void MoveNext();
```

### <a name="remarks"></a>Note
È consigliabile chiamare `IsBOF` prima di provare a passare al record precedente. Una chiamata a `MovePrev` genererà un `CDaoException` se `IsBOF` restituisce diverso da zero, che indica che è già eseguito lo scorrimento prima del primo record o che sono stati selezionato alcun record dal recordset.

> [!CAUTION]
>  La chiamata a uno qualsiasi del `Move` funzioni genera un'eccezione se il recordset non contiene record. In generale, chiamare sia `IsBOF` e `IsEOF` prima un'operazione di spostamento per determinare se il set di record dispone di alcun record. Dopo aver chiamato `Open` oppure `Requery`, chiamare `IsBOF` o `IsEOF`.

> [!NOTE]
>  Se si chiama uno qualsiasi del `Move` funzioni mentre il record corrente viene aggiornato o aggiunto, gli aggiornamenti vengono persi senza alcun avviso.

Usare il `Move` funzioni per passare da un record a altro senza applicare una condizione. Usare le operazioni di ricerca per individuare i record in un tipo dynaset o un oggetto di tipo snapshot recordset che soddisfano una determinata condizione. Per individuare un record in un oggetto recordset di tipo di tabella, chiamare `Seek`.

Se il set di record fa riferimento a un set di record di tipo di tabella, lo spostamento segue dell'indice della tabella corrente. È possibile impostare l'indice corrente usando la proprietà di indice dell'oggetto DAO sottostante. Se non si imposta l'indice corrente, non è definito l'ordine di record restituiti.

Per spostare la posizione dell'istanza corrente di record in un oggetto recordset uno specifico numero di record in avanti o indietro, chiamare `Move`.

Per informazioni correlate, vedere gli argomenti "Sposta Method" e "MoveFirst, MoveLast, MoveNext, MovePrevious metodi" nella Guida di DAO.

##  <a name="moveprev"></a>  CDaoRecordset::MovePrev
Chiamare questa funzione membro per rendere il record precedente nel set di record del record corrente.

```
void MovePrev();
```

### <a name="remarks"></a>Note
È consigliabile chiamare `IsBOF` prima di provare a passare al record precedente. Una chiamata a `MovePrev` genererà un `CDaoException` se `IsBOF` restituisce diverso da zero, che indica che è già eseguito lo scorrimento prima del primo record o che sono stati selezionato alcun record dal recordset.

> [!CAUTION]
>  La chiamata a uno qualsiasi del `Move` funzioni genera un'eccezione se il recordset non contiene record. In generale, chiamare sia `IsBOF` e `IsEOF` prima un'operazione di spostamento per determinare se il set di record dispone di alcun record. Dopo aver chiamato `Open` oppure `Requery`, chiamare `IsBOF` o `IsEOF`.

> [!NOTE]
>  Se si chiama uno qualsiasi del `Move` funzioni mentre il record corrente viene aggiornato o aggiunto, gli aggiornamenti vengono persi senza alcun avviso.

Usare il `Move` funzioni per passare da un record a altro senza applicare una condizione. Usare le operazioni di ricerca per individuare i record in un tipo dynaset o un oggetto di tipo snapshot recordset che soddisfano una determinata condizione. Per individuare un record in un oggetto recordset di tipo di tabella, chiamare `Seek`.

Se il set di record fa riferimento a un set di record di tipo di tabella, lo spostamento segue dell'indice della tabella corrente. È possibile impostare l'indice corrente usando la proprietà di indice dell'oggetto DAO sottostante. Se non si imposta l'indice corrente, non è definito l'ordine di record restituiti.

Non è possibile chiamare il `MoveFirst` o `MovePrev` funzione membro con uno snapshot di scorrimento di tipo forward-only.

Per spostare la posizione dell'istanza corrente di record in un oggetto recordset uno specifico numero di record in avanti o indietro, chiamare `Move`.

Per informazioni correlate, vedere gli argomenti "Sposta Method" e "MoveFirst, MoveLast, MoveNext, MovePrevious metodi" nella Guida di DAO.

##  <a name="open"></a>  CDaoRecordset:: Open
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

- `dbOpenDynaset` Un tipo dynaset recordset con scorrimento bidirezionale. Questa è l'impostazione predefinita.

- `dbOpenTable` Un tipo di tabella recordset con scorrimento bidirezionale.

- `dbOpenSnapshot` Un tipo di snapshot recordset con scorrimento bidirezionale.

*lpszSQL*<br/>
Puntatore di stringa contenente uno degli elementi seguenti:

- Un puntatore NULL.

- Il nome di uno o più tabledefs e/o querydefs (delimitato da virgole).

- Un database SQL **selezionate** istruzione (eventualmente con un database SQL **in cui** oppure **ORDERBY** clausola).

- Una query pass-through.

*nOptions*<br/>
Uno o più delle opzioni elencate di seguito. Il valore predefinito è 0. I valori possibili sono i seguenti:

- `dbAppendOnly` È possibile aggiungere solo nuovi record (solo per i recordset di tipo dynaset). Questa opzione significa letteralmente che possono essere aggiunti solo i record. Le classi di database ODBC MFC hanno un'opzione di solo accodamento che consente i record recuperati e aggiunti.

- `dbForwardOnly` Il recordset è uno snapshot di scorrimento di tipo forward-only.

- `dbSeeChanges` Generare un'eccezione se un altro utente modifica i dati che si sta modificando.

- `dbDenyWrite` Gli altri utenti non possono modificare o aggiungere i record.

- `dbDenyRead` Gli altri utenti non possono visualizzare i record (solo recordset di tipo di tabella).

- `dbReadOnly` È possibile visualizzare solo i record; gli altri utenti possono modificarle.

- `dbInconsistent` Aggiornamenti non consistenti sono consentiti (solo per i recordset di tipo dynaset).

- `dbConsistent` Solo gli aggiornamenti coerenti sono consentiti (solo per i recordset di tipo dynaset).

> [!NOTE]
>  Le costanti `dbConsistent` e `dbInconsistent` si escludono a vicenda. È possibile usare uno o l'altro, ma non entrambi in un'istanza specifica di `Open`.

*pTableDef*<br/>
Un puntatore a un [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) oggetto. Questa versione è valida solo per i recordset di tipo di tabella. Quando si usa questa opzione, il `CDaoDatabase` puntatore utilizzato per costruire il `CDaoRecordset` non viene utilizzato; piuttosto, viene utilizzato il database in cui risiede l'oggetto tabledef.

*pQueryDef*<br/>
Un puntatore a un [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) oggetto. Questa versione è valida solo per dynaset e Recordset di tipo snapshot. Quando si usa questa opzione, il `CDaoDatabase` puntatore utilizzato per costruire il `CDaoRecordset` non viene utilizzata; piuttosto, viene utilizzato il database in cui si trova tale oggetto.

### <a name="remarks"></a>Note
Prima di chiamare `Open`, è necessario costruire l'oggetto recordset. Sono disponibili diversi modi per eseguire questa operazione:

- Quando si costruisce l'oggetto recordset, passare un puntatore a un `CDaoDatabase` oggetto che è già aperto.

- Quando si costruisce l'oggetto recordset, passare un puntatore a un `CDaoDatabase` oggetto che non è aperta. Apertura del recordset un `CDaoDatabase` dell'oggetto, ma questa non viene chiusa quando si chiude l'oggetto recordset.

- Quando si costruisce l'oggetto recordset, passare un puntatore NULL. Le chiamate a oggetti recordset `GetDefaultDBName` per ottenere il nome di Microsoft Access. File MDB da aprire. Quindi apre il recordset un `CDaoDatabase` oggetto e mantiene è aperto, purché il recordset è aperto. Quando si chiama `Close` nell'oggetto recordset, il `CDaoDatabase` viene chiusa anche l'oggetto.

    > [!NOTE]
    >  Quando si apre il recordset di `CDaoDatabase` dell'oggetto, l'origine dati viene aperto con accesso non esclusivo.

Per la versione di `Open` che usa la *lpszSQL* parametro, una volta il recordset è aperto è possibile recuperare i record in uno dei diversi modi. La prima opzione consiste nell'avere funzioni DFX nel `DoFieldExchange`. La seconda opzione consiste nell'utilizzare il binding dinamico chiamando il `GetFieldValue` funzione membro. Queste opzioni possono essere implementate separatamente o in combinazione. Se vengono combinate, sarà necessario passare nell'istruzione SQL se stessi durante la chiamata a `Open`.

Quando si usa la seconda versione del `Open` dove si passano un `CDaoTableDef` dell'oggetto, le colonne risultante saranno disponibili per associare tramite `DoFieldExchange` e il meccanismo di DFX e/o associare in modo dinamico tramite `GetFieldValue`.

> [!NOTE]
>  È possibile chiamare solo `Open` usando un `CDaoTableDef` oggetto per i recordset di tipo di tabella.

Quando si usa la versione del terzo `Open` dove si passano un `CDaoQueryDef` dell'oggetto, che verrà eseguita query e le colonne risultante saranno disponibili per associare tramite `DoFieldExchange` e il meccanismo di DFX e/o associare in modo dinamico tramite `GetFieldValue`.

> [!NOTE]
>  È possibile chiamare solo `Open` usando un `CDaoQueryDef` oggetto per dynaset e Recordset di tipo snapshot.

Per la prima versione di `Open` che usa il `lpszSQL` parametro, i record vengono selezionata in base a criteri illustrata nella tabella seguente.

|Valore del parametro `lpszSQL`|I record selezionati sono determinati da|Esempio|
|--------------------------------------|----------------------------------------|-------------|
|NULL|Stringa restituita da `GetDefaultSQL`.||
|Elenco delimitato da virgole di uno o più tabledefs e/o nomi querydef.|Tutte le colonne rappresentate nel `DoFieldExchange`.|`"Customer"`|
|**Selezionare** elenco di colonne **FROM** elenco tabella|Le colonne specificate da tabledef(s) specificato e/o querydef(s).|`"SELECT CustId, CustName`<br /><br /> `FROM Customer"`|

La procedura normale consiste nel passare NULL per `Open`; in tal caso, `Open` chiamate `GetDefaultSQL`, una funzione membro sottoponibili a override che genera l'errore ClassWizard durante la creazione di un `CDaoRecordset`-classe derivata. Questo valore fornisce il nome tabledef(s) e/o querydef specificati in ClassWizard. È invece possibile specificare altre informazioni nel *lpszSQL* parametro.

Qualsiasi elemento passato `Open` costruisce una stringa SQL finale per la query (la stringa potrebbe essere SQL **in cui** e **ORDERBY** clausole aggiunto al *lpszSQL* stringa è passato), quindi viene eseguita la query. È possibile esaminare la stringa costruita chiamando `GetSQL` dopo la chiamata `Open`.

I membri dei dati di campo della classe recordset sono associati alle colonne dei dati selezionati. Se vengono restituiti record, il primo di essi diventa il record corrente.

Se si desidera impostare le opzioni per il recordset, ad esempio un filtro o ordinamento, impostare `m_strSort` oppure `m_strFilter` dopo aver creato l'oggetto recordset ma prima di chiamare `Open`. Se si desidera aggiornare i record del recordset quando il recordset è già aperto, chiamare `Requery`.

Se si chiama `Open` in un tipo dynaset o recordset di tipo snapshot, o se l'origine dati fa riferimento a un'istruzione SQL o un oggetto tabledef che rappresenta una tabella collegata, è possibile usare `dbOpenTable` per l'argomento di tipo; in caso, MFC genera un'eccezione. Per determinare se un oggetto tabledef rappresenta una tabella collegata, creare un [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) oggetto e chiamare relativo [GetConnect](../../mfc/reference/cdaotabledef-class.md#getconnect) funzione membro.

Usare il `dbSeeChanges` flag se si vuole intercettare le modifiche apportate da un altro utente o un altro programma nel computer quando si modifica o eliminazione dello stesso record. Ad esempio, se due utenti iniziano a modificare lo stesso record, all'utente prima di chiamare il `Update` membro funzione ha esito positivo. Quando `Update` viene chiamato dall'utente, secondo un `CDaoException` viene generata un'eccezione. Analogamente, se il secondo utente tenta di chiamare `Delete` per eliminare il record che già è stato modificato dal primo utente, un `CDaoException` si verifica.

In genere, se l'utente ottiene questo `CDaoException` durante l'aggiornamento, il codice necessario aggiorna il contenuto dei campi e recuperare i valori appena modificati. Se l'eccezione si verifica in corso l'eliminazione, il codice può visualizzare i dati del record di nuovo all'utente e un messaggio che indica che i dati vengono modificati di recente. A questo punto, il codice può richiedere un messaggio di conferma che l'utente desidera comunque eliminare il record.

> [!TIP]
>  Usare l'opzione di scorrimento di tipo forward-only (`dbForwardOnly`) per migliorare le prestazioni quando l'applicazione esegue una singola iterazione di un recordset aperti da un'origine dati ODBC.

Per informazioni correlate, vedere l'argomento "OpenRecordset Method" nella Guida di DAO.

##  <a name="requery"></a>  CDaoRecordset::Requery
Chiamare questa funzione membro per ricompilare (aggiornare) un recordset.

```
virtual void Requery();
```

### <a name="remarks"></a>Note
Se vengono restituiti record, il primo di essi diventa il record corrente.

Affinché il recordset in modo da riflettere le aggiunte ed eliminazioni che è o ad altri utenti stanno effettuando all'origine dati, è necessario ricompilare il recordset chiamando `Requery`. Se il recordset è di tipo snapshot, che è o ad altri utenti relativo record esistenti, ma non le aggiunte, aggiornamenti apportati riflette automaticamente. Se il recordset è uno snapshot, è necessario chiamare `Requery` in modo da riflettere le modifiche da altri utenti, nonché aggiunte ed eliminazioni.

Per dynaset o uno snapshot, chiamare `Requery` ogni volta che si desidera ricompilare il recordset utilizzando valori dei parametri. Impostare il nuovo filtro o ordinamento impostando [m_strFilter](#m_strfilter) e [m_strSort](#m_strsort) prima di chiamare `Requery`. Imposta nuovi parametri assegnando nuovi valori per i membri dati di parametro prima di chiamare `Requery`.

Se il tentativo di ricompilare il recordset non riesce, viene chiuso il recordset. Prima di chiamare `Requery`, è possibile determinare se il recordset può essere eseguito chiamando il [CanRestart](#canrestart) funzione membro. `CanRestart` non garantisce che `Requery` avrà esito positivo.

> [!CAUTION]
>  Chiamare `Requery` solo dopo aver chiamato `Open`.

> [!NOTE]
>  La chiamata [Requery](#requery) segnalibri DAO viene modificato.

Non è possibile chiamare `Requery` in un tipo dynaset o recordset di tipo di snapshot se il chiamante `CanRestart` restituisce 0, né è possibile usarlo in un set di record di tipo di tabella.

Se entrambe `IsBOF` e `IsEOF` restituire diverso da zero, dopo aver chiamato `Requery`, la query non ha restituito alcun record e recordset non conterrà alcun dato.

Per informazioni correlate, vedere l'argomento "Metodo Requery" nella Guida di DAO.

##  <a name="seek"></a>  CDaoRecordset::Seek
Chiamare questa funzione membro per individuare il record in un oggetto recordset indicizzata-tipo di tabella che soddisfa i criteri specificati per l'oggetto corrente di indice e assicurarsi che il record corrente.

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
Una delle espressioni stringa seguente: "<","\<=", "=", "> =", o ">".

*pKey1*<br/>
Un puntatore a un [COleVariant](../../mfc/reference/colevariant-class.md) il cui valore corrisponde al primo campo nell'indice. Obbligatorio.

*pKey2*<br/>
Un puntatore a un `COleVariant` il cui valore corrisponde al campo secondo nell'indice, se presente. Il valore predefinito è NULL.

*pKey3*<br/>
Un puntatore a un `COleVariant` il cui valore corrisponde al terzo campo nell'indice, se presente. Il valore predefinito è NULL.

*pKeyArray*<br/>
Un puntatore a una matrice di varianti. La dimensione della matrice corrisponde al numero di campi nell'indice.

*nKeys*<br/>
Valore intero corrispondente alla dimensione della matrice, ovvero il numero di campi nell'indice.

> [!NOTE]
>  Non specificare i caratteri jolly nelle chiavi. I caratteri jolly causerà `Seek` per non restituire alcun record corrispondente.

### <a name="return-value"></a>Valore restituito
Diverso da zero se vengono trovati record corrispondenti, in caso contrario 0.

### <a name="remarks"></a>Note
Utilizzare la seconda versione (array) di `Seek` per gestire gli indici dei campi di quattro o più.

`Seek` Abilita l'indice ad alte prestazioni la ricerca nei recordset di tipo di tabella. È necessario impostare l'indice corrente chiamando `SetCurrentIndex` prima di chiamare `Seek`. Se l'indice identifica un campo di chiave non univoco o i campi, `Seek` individua il primo record che soddisfano i criteri. Se non si imposta un indice, viene generata un'eccezione.

Si noti che se non si sta creando un set di record UNICODE, il `COleVariant` oggetti devono essere dichiarati in modo esplicito ANSI. Questa operazione può essere eseguita tramite il [COleVariant:: COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** *lpszSrc* **,** *vtSrc* **)**  form del costruttore con *vtSrc* impostata su `VT_BSTRT` (ANSI) o utilizzando il `COleVariant` funzione [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** *lpszSrc* **,** *vtSrc* **)** con *vtSrc* impostato su `VT_BSTRT`.

Quando si chiama `Seek`, si passa a uno o più valori di chiave e un operatore di confronto ("<","\<=", "=", "> =", o ">"). `Seek` Cerca i campi di chiave specificati e individua il primo record che soddisfano i criteri specificati da *lpszComparison* e *pKey1*. Una volta trovato, `Seek` restituisce diverso da zero e definisce come record corrente. Se `Seek` non riesce a trovare una corrispondenza, `Seek` restituisce zero e il record corrente è non definito. Quando si usa DAO direttamente, è necessario controllare in modo esplicito la proprietà NoMatch.

Se `lpszComparison` è "=", "> =", o ">", `Seek` inizia all'inizio dell'indice. Se *lpszComparison* è "<" o "< =", `Seek` inizia alla fine dell'indice e Cerca all'indietro a meno che non sono presenti voci di indice duplicati alla fine. In questo caso, `Seek` inizia in corrispondenza di una voce arbitraria tra le voci di indice duplicati alla fine dell'indice.

Non deve essere un record quando si usa `Seek`.

Per individuare un record in un recordset di tipo di snapshot che soddisfa una condizione specifica o un tipo dynaset, usare le operazioni di ricerca. Per includere tutti i record, non solo quelli che soddisfano una condizione specifica, usare le operazioni di spostamento per spostarsi dal record a altro.

Non è possibile chiamare `Seek` su una tabella collegata di qualsiasi tipo perché le tabelle collegate devono essere aperto come tipo dynaset o Recordset di tipo snapshot. Tuttavia, se si chiama `CDaoDatabase::Open` per aprire direttamente un database ISAM installabile, è possibile chiamare `Seek` nelle tabelle nel database, anche se le prestazioni potrebbero essere lente.

Per informazioni correlate, vedere l'argomento "Seek Method" nella Guida di DAO.

##  <a name="setabsoluteposition"></a>  CDaoRecordset:: SetAbsolutePosition
Imposta il numero di record relativo di record corrente dell'oggetto recordset.

```
void SetAbsolutePosition(long lPosition);
```

### <a name="parameters"></a>Parametri
*lPosition*<br/>
Corrisponde alla posizione ordinale del record corrente nell'oggetto recordset.

### <a name="remarks"></a>Note
La chiamata `SetAbsolutePosition` consente di posizionare il puntatore al record corrente a un record specifico in base alla posizione ordinale in un tipo dynaset o recordset di tipo snapshot. È anche possibile determinare il numero di record corrente chiamando [GetAbsolutePosition](#getabsoluteposition).

> [!NOTE]
>  Questa funzione membro è valida solo per dynaset e Recordset di tipo snapshot.

Il valore della proprietà AbsolutePosition dell'oggetto DAO sottostante è in base zero. un'impostazione pari a 0 fa riferimento al primo record del recordset. Impostazione di un valore maggiore del numero di record popolati, in MFC per generare un'eccezione. È possibile determinare il numero di record popolato nel set di record mediante la chiamata di `GetRecordCount` funzione membro.

Se il record corrente viene eliminato, non è definito il valore della proprietà di esempio di AbsolutePosition e MFC genera un'eccezione se vi viene fatto riferimento. Nuovi record vengono aggiunti alla fine della sequenza.

> [!NOTE]
>  Questa proprietà non deve essere utilizzato come un numero di record di surrogati. I segnalibri sono ancora lo strumento consigliato per mantenere e restituire dati in una posizione specificata e l'unico modo per inserire il record corrente in tutti i tipi di oggetti recordset che supportano i segnalibri. In particolare, la posizione di un determinato record cambia quando vengono eliminati uno o più record che la precede. Non vi è alcuna garanzia che un determinato record abbia la stessa posizione assoluta se il set di record viene nuovamente creato nuovamente perché l'ordine dei singoli record all'interno di un set di record non è garantito a meno che non venga creata con un'istruzione SQL utilizzando un  **ORDERBY** clausola.

Per informazioni correlate, vedere l'argomento "Proprietà AbsolutePosition" nella Guida di DAO.

##  <a name="setbookmark"></a>  CDaoRecordset::SetBookmark
Chiamare questa funzione membro per posizionare i set di record sul record che contiene il segnalibro specificato.

```
void SetBookmark(COleVariant varBookmark);
```

### <a name="parameters"></a>Parametri
*varBookmark*<br/>
Oggetto [COleVariant](../../mfc/reference/colevariant-class.md) che contiene il valore di segnalibro per un record specifico.

### <a name="remarks"></a>Note
Quando un oggetto recordset viene creato o aperto, ognuno dei relativi record dispone già di un segnalibro univoco. È possibile recuperare il segnalibro per il record corrente chiamando `GetBookmark` e il salvataggio il valore da un `COleVariant` oggetto. È possibile ritornare in seguito a tale record chiamando `SetBookmark` utilizzando il valore di segnalibro salvato.

> [!NOTE]
>  La chiamata [Requery](#requery) segnalibri DAO viene modificato.

Si noti che se non si sta creando un set di record UNICODE, il `COleVariant` oggetto deve essere dichiarato in modo esplicito ANSI. Questa operazione può essere eseguita tramite il [COleVariant:: COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** *lpszSrc* **,** *vtSrc* **)**  form del costruttore con *vtSrc* impostata su `VT_BSTRT` (ANSI) o utilizzando il `COleVariant` funzione [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** *lpszSrc* **,** *vtSrc* **)** con *vtSrc* impostato su `VT_BSTRT`.

Per informazioni correlate, vedere gli argomenti "Proprietà Bookmark" e la proprietà supporta"nella Guida di DAO.

##  <a name="setcachesize"></a>  CDaoRecordset:: SetCacheSize
Chiamare questa funzione membro per impostare il numero di record da memorizzare nella cache.

```
void SetCacheSize(long lSize);
```

### <a name="parameters"></a>Parametri
*lSize*<br/>
Specifica il numero di record. Un valore tipico è 100. Il valore 0 disattiva la memorizzazione nella cache. L'impostazione deve essere compreso tra 5 e 1200 record. La cache può usare una notevole quantità di memoria.

### <a name="remarks"></a>Note
Una cache è uno spazio nella memoria locale che contiene i dati recuperati dal server di più di recente nel caso in cui i dati verranno nuovamente richiesto mentre l'applicazione è in esecuzione. Dati la memorizzazione nella cache migliora le prestazioni di un'applicazione che recupera i dati da un server remoto tramite oggetti recordset dynaset-type. Quando vengono richiesti dati, il motore di database Microsoft Jet controlla prima di tutto la cache per i dati richiesti anziché recuperarli dal server, che richiede più tempo. I dati che non sono stato rilasciato da un'origine dati ODBC non viene salvati nella cache.

Qualsiasi origine dati ODBC, ad esempio una tabella collegata, può avere una cache locale. Per creare la cache, aprire un oggetto recordset dall'origine dei dati remoti, chiamata di `SetCacheSize` e `SetCacheStart` le funzioni membro e quindi chiamare il `FillCache` funzione membro o il passaggio tra i record usando una delle operazioni di spostamento. Il *lSize* parametro del `SetCacheSize` funzione membro può essere basata sul numero di record l'applicazione può funzionare correttamente con alla volta. Ad esempio, se si usa un set di record come origine dei dati da visualizzare sullo schermo, è possibile passare il `SetCacheSize` *lSize* parametro come 20 per la visualizzazione di 20 record in una sola volta.

Per informazioni correlate, vedere l'argomento "Proprietà CacheSize e CacheStart" nella Guida di DAO.

##  <a name="setcachestart"></a>  CDaoRecordset:: SetCacheStart
Chiamare questa funzione membro per specificare il segnalibro del primo record del recordset da memorizzare nella cache.

```
void SetCacheStart(COleVariant varBookmark);
```

### <a name="parameters"></a>Parametri
*varBookmark*<br/>
Oggetto [COleVariant](../../mfc/reference/colevariant-class.md) che specifica il segnalibro del primo record del recordset da memorizzare nella cache.

### <a name="remarks"></a>Note
È possibile usare il valore di segnalibro di tutti i record per il *varBookmark* parametro del `SetCacheStart` funzione membro. Il record che si desidera iniziare la cache con il record corrente, stabilire un segnalibro per tale record utilizzando [SetBookmark](#setbookmark)e passare il valore di segnalibro come parametro per il `SetCacheStart` funzione membro.

Il motore di database Microsoft Jet richiede record all'interno dell'intervallo della cache dalla cache e richiede i record compreso nell'intervallo della cache dal server.

I record recuperati dalla cache non riflettono le modifiche apportate contemporaneamente all'origine dati da altri utenti.

Per forzare un aggiornamento di tutti i dati memorizzati nella cache, passare il *lSize* del parametro `SetCacheSize` come 0, chiamare `SetCacheSize` nuovamente con la dimensione della cache richiesto in origine e quindi chiamare il `FillCache` funzione membro.

Si noti che se non si sta creando un set di record UNICODE, il `COleVariant` oggetto deve essere dichiarato in modo esplicito ANSI. Questa operazione può essere eseguita tramite il [COleVariant:: COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** *lpszSrc* **,** *vtSrc* **)**  form del costruttore con *vtSrc* impostata su `VT_BSTRT` (ANSI) o utilizzando il `COleVariant` funzione [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** *lpszSrc* **,** *vtSrc* **)** con *vtSrc* impostato su `VT_BSTRT`.

Per informazioni correlate, vedere l'argomento CacheSize, proprietà CacheStart"nella Guida di DAO.

##  <a name="setcurrentindex"></a>  CDaoRecordset:: SetCurrentIndex
Chiamare questa funzione membro per impostare un indice in un set di record di tipo di tabella.

```
void SetCurrentIndex(LPCTSTR lpszIndex);
```

### <a name="parameters"></a>Parametri
*lpszIndex*<br/>
Un puntatore che contiene il nome dell'indice da impostare.

### <a name="remarks"></a>Note
I record nelle tabelle di base non vengono archiviati in un ordine particolare. L'impostazione di un indice viene modificato l'ordine dei record restituiti dal database, ma non interessa l'ordine in cui sono archiviati i record. L'indice specificato deve essere già definita. Se si prova a usare un oggetto indice che non esiste o se l'indice non è impostato quando si chiama [Seek](#seek), MFC genera un'eccezione.

È possibile creare un nuovo indice per la tabella chiamando [CDaoTableDef::CreateIndex](../../mfc/reference/cdaotabledef-class.md#createindex) e l'aggiunta del nuovo indice per la raccolta di indici di tabledef sottostante chiamando [CDaoTableDef:: Append](../../mfc/reference/cdaotabledef-class.md#append), e riaprire il recordset.

Record restituiti da un set di record di tipo di tabella possono essere ordinate solo per gli indici definiti per l'oggetto tabledef sottostante. Per ordinare i record in un altro ordine, è possibile aprire un recordset snapshot usando un linguaggio SQL o tipo dynaset **ORDERBY** clausola archiviato in [CDaoRecordset::m_strSort](#m_strsort).

Per informazioni correlate, vedere l'argomento "Oggetto indice" e la definizione "indice corrente" nella Guida di DAO.

##  <a name="setfielddirty"></a>  CDaoRecordset:: SetFieldDirty
Chiamare questa funzione membro per contrassegnare un membro dati di campo del set di record come come unchanged o modificati.

```
void SetFieldDirty(
    void* pv,
    BOOL bDirty = TRUE);
```

### <a name="parameters"></a>Parametri
*PV*<br/>
Contiene l'indirizzo di un membro dati di campo nel recordset o NULL. Se NULL, vengono contrassegnati tutti i membri dati di campo nel set di record. (C++ NULL non è lo stesso come valori Null nella terminologia dei database, il che significa "non having alcun valore.")

*bDirty*<br/>
TRUE se il membro dati del campo deve essere contrassegnata come "modificato" (modifica). In caso contrario, FALSE se il membro dati di campo deve essere contrassegnato come "pulire" (non modificato).

### <a name="remarks"></a>Note
Contrassegnare i campi come non modificate assicura che il campo non viene aggiornato.

I segni di framework modificato i membri di dati campo per assicurarsi che verrà scritto il record nell'origine dei dati dal meccanismo di DAO campi di record (DFX) di exchange. La modifica del valore di un campo in genere ha impostato il dirty automaticamente, pertanto raramente sarà necessario chiamare `SetFieldDirty` personalmente, ma a volte possibile garantire che le colonne verranno essere aggiornate o inserite indipendentemente dal valore è nei dati del campo in modo esplicito membro. Il meccanismo di DFX utilizza anche l'uso di PSEUDONULL. Per altre informazioni, vedere [CDaoFieldExchange:: M_noperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).

Se non viene utilizzato il meccanismo del doppio buffer, quindi la modifica del valore del campo non viene impostata automaticamente il campo come dirty. In questo caso, sarà necessario impostare in modo esplicito il campo come dirty. Il flag racchiusa [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controlla questa verifica automatica dei campi.

> [!NOTE]
>  Chiamare questa funzione membro solo dopo aver chiamato [Edit](#edit) oppure [AddNew](#addnew).

Utilizzo di NULL per il primo argomento della funzione verrà applicata la funzione a tutti `outputColumn` campi, non **param** nei campi `CDaoFieldExchange`. Ad esempio, la chiamata

[!code-cpp[NVC_MFCDatabase#6](../../mfc/codesnippet/cpp/cdaorecordset-class_6.cpp)]

verrà impostato solo `outputColumn` campi su NULL. **param** campi non saranno interessati.

Per lavorare su un **param**, è necessario fornire l'indirizzo effettivo della persona **param** da usare, ad esempio:

[!code-cpp[NVC_MFCDatabase#7](../../mfc/codesnippet/cpp/cdaorecordset-class_7.cpp)]

Ciò significa che non è possibile impostare tutti i **param** campi su NULL, come puoi fare con `outputColumn` campi.

`SetFieldDirty` viene implementata tramite `DoFieldExchange`.

##  <a name="setfieldnull"></a>  CDaoRecordset::SetFieldNull
Chiamare questa funzione membro per contrassegnare un membro dati del campo del set di record con valore Null, in particolare che non ha alcun valore, o come non Null.

```
void SetFieldNull(
    void* pv,
    BOOL bNull = TRUE);
```

### <a name="parameters"></a>Parametri
*PV*<br/>
Contiene l'indirizzo di un membro dati di campo nel recordset o NULL. Se NULL, vengono contrassegnati tutti i membri dati di campo nel set di record. (C++ NULL non è lo stesso come valori Null nella terminologia dei database, il che significa "non having alcun valore.")

*bNull*<br/>
Diverso da zero se il membro dati di campo deve essere contrassegnato come se avessero alcun valore (Null). In caso contrario, 0 se il membro dati del campo è contrassegnato come non Null.

### <a name="remarks"></a>Note
`SetFieldNull` viene usato per i campi associati nel `DoFieldExchange` meccanismo.

Quando si aggiunge un nuovo record a un oggetto recordset, tutti i membri dati di campo sono inizialmente impostati su un valore Null e contrassegnati come "modificato" (modifica). Quando si recupera un record da un'origine dati, le relative colonne già hanno valori o sono Null. Se non è appropriato rendere un campo Null, un [CDaoException](../../mfc/reference/cdaoexception-class.md) viene generata un'eccezione.

Se si usa il meccanismo del doppio buffer, ad esempio, se si vuole designare un campo del record corrente in quanto non hanno un valore, chiamare in modo specifico `SetFieldNull` con *bNull* impostato su TRUE per contrassegnarlo come Null. Se un campo in precedenza è stato contrassegnato come Null e si desidera assegnare un valore a questo punto, è sufficiente impostare il nuovo valore. Non è necessario rimuovere il flag Null con `SetFieldNull`. Per determinare se il campo può essere Null, chiamare [IsFieldNullable](#isfieldnullable).

Se non si usa il meccanismo del doppio buffer, quindi la modifica del valore del campo non viene impostata automaticamente il campo come dirty e non Null. In particolare, è necessario impostare i campi dirty e non Null. Il flag racchiusa [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controlla questa verifica automatica dei campi.

Il meccanismo di DFX impiega l'uso di PSEUDONULL. Per altre informazioni, vedere [CDaoFieldExchange:: M_noperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).

> [!NOTE]
>  Chiamare questa funzione membro solo dopo aver chiamato [Edit](#edit) oppure [AddNew](#addnew).

Utilizzo di NULL per il primo argomento della funzione verrà applicata solo alla funzione `outputColumn` campi, non **param** nei campi `CDaoFieldExchange`. Ad esempio, la chiamata

[!code-cpp[NVC_MFCDatabase#8](../../mfc/codesnippet/cpp/cdaorecordset-class_8.cpp)]

verrà impostato solo `outputColumn` campi su NULL. **param** campi non saranno interessati.

##  <a name="setfieldvalue"></a>  CDaoRecordset::SetFieldValue
Chiamare questa funzione membro per impostare il valore di un campo, in base alla posizione ordinale o modificando il valore della stringa.

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
Un puntatore a una stringa contenente il nome di un campo.

*varValue*<br/>
Un riferimento a un [COleVariant](../../mfc/reference/colevariant-class.md) oggetto contenente il valore del contenuto del campo.

*nIndex*<br/>
Valore intero che rappresenta la posizione ordinale del campo nella raccolta di campi del recordset (in base zero).

*lpszValue*<br/>
Un puntatore a una stringa contenente il valore del contenuto del campo.

### <a name="remarks"></a>Note
Uso `SetFieldValue` e [GetFieldValue](#getfieldvalue) associare in modo dinamico i campi in fase di esecuzione anziché in modo statico associazione delle colonne utilizzando la [DoFieldExchange](#dofieldexchange) meccanismo.

Si noti che se non si intende creare un set di record UNICODE, è necessario utilizzare una forma di `SetFieldValue` che non contiene una `COleVariant` parametro, o `COleVariant` oggetto deve essere dichiarato in modo esplicito ANSI. Questa operazione può essere eseguita tramite il [COleVariant:: COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** *lpszSrc* **,** *vtSrc* **)**  form del costruttore con *vtSrc* impostata su `VT_BSTRT` (ANSI) o utilizzando il `COleVariant` funzione [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** *lpszSrc* **,** *vtSrc* **)** con *vtSrc* impostato su `VT_BSTRT`.

Per informazioni correlate, vedere gli argomenti "Campo oggetto" e "Proprietà Value" nella Guida di DAO.

##  <a name="setfieldvaluenull"></a>  CDaoRecordset::SetFieldValueNull
Chiamare questa funzione membro per impostare il campo su un valore Null.

```
void SetFieldValueNull(int nIndex);
void SetFieldValueNull(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri
*nIndex*<br/>
L'indice del campo del recordset, per la ricerca in base all'indice in base zero.

*lpszName*<br/>
Il nome del campo del recordset, per la ricerca in base al nome.

### <a name="remarks"></a>Note
C++ NULL non è lo stesso come Null, ovvero, nella terminologia dei database, "non having alcun valore."

Per informazioni correlate, vedere gli argomenti "Campo oggetto" e "Proprietà Value" nella Guida di DAO.

##  <a name="setlockingmode"></a>  CDaoRecordset::SetLockingMode
Chiamare questa funzione membro per impostare il tipo di blocco per il recordset.

```
void SetLockingMode(BOOL bPessimistic);
```

### <a name="parameters"></a>Parametri
*bPessimistic*<br/>
Flag che indica il tipo di blocco.

### <a name="remarks"></a>Note
Quando il blocco pessimistico è attiva, la pagina 2 KB che contiene il record che si sta modificando è bloccato, non appena si chiama il `Edit` funzione membro. La pagina viene sbloccata quando si chiama il `Update` o `Close` funzione membro o una delle operazioni di spostamento o ricerca.

Quando è attivo il blocco ottimistico, la pagina 2 KB che contiene il record viene bloccata solo durante l'aggiornamento è il record con il `Update` funzione membro.

Se una pagina è bloccata, nessun altro utente può modificare i record nella stessa pagina. Se si chiama `SetLockingMode` e passare un valore diverso da zero e un altro utente dispone già della pagina bloccata, viene generata un'eccezione quando si chiama `Edit`. Gli altri utenti possono leggere dati da pagine bloccate.

Se si chiama `SetLockingMode` con un valore pari a zero e versioni successive chiamare `Update` quando la pagina è bloccata da un altro utente, viene generata un'eccezione. Per visualizzare le modifiche apportate al record da un altro utente e perdere le modifiche, chiamare il `SetBookmark` funzione membro con il valore di segnalibro del record corrente.

Quando si usano Origini dati ODBC, la modalità di blocco è sempre ottimistica.

##  <a name="setparamvalue"></a>  CDaoRecordset::SetParamValue
Chiamare questa funzione membro per impostare il valore di un parametro nel set di record in fase di esecuzione.

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
Posizione numerica del parametro nella raccolta di parametri dell'oggetto.

*var*<br/>
Il valore da impostare. vedere la sezione Osservazioni.

*lpszName*<br/>
Il nome del parametro il cui valore si desidera impostare.

### <a name="remarks"></a>Note
Il parametro deve aver già disponibile come parte della stringa SQL del recordset. È possibile accedere il parametro in base al nome o in base alla posizione di indice nella raccolta.

Specificare il valore da impostare come un `COleVariant` oggetto. Per informazioni sull'impostazione il valore desiderato e digitare il `COleVariant` dell'oggetto, vedere la classe [COleVariant](../../mfc/reference/colevariant-class.md). Si noti che se non si sta creando un set di record UNICODE, il `COleVariant` oggetto deve essere dichiarato in modo esplicito ANSI. Questa operazione può essere eseguita tramite il [COleVariant:: COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** *lpszSrc* **,** *vtSrc* **)**  form del costruttore con *vtSrc* impostata su `VT_BSTRT` (ANSI) o utilizzando il `COleVariant` funzione [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** *lpszSrc* **,** *vtSrc* **)** con *vtSrc* impostato su `VT_BSTRT`.

##  <a name="setparamvaluenull"></a>  CDaoRecordset::SetParamValueNull
Chiamare questa funzione membro per impostare il parametro su un valore Null.

```
void SetParamValueNull(int nIndex);
void SetParamValueNull(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri
*nIndex*<br/>
L'indice del campo del recordset, per la ricerca in base all'indice in base zero.

*lpszName*<br/>
Il nome del campo del recordset, per la ricerca in base al nome.

### <a name="remarks"></a>Note
C++ NULL non è lo stesso come Null, ovvero, nella terminologia dei database, "non having alcun valore."

##  <a name="setpercentposition"></a>  CDaoRecordset:: SetPercentPosition
Chiamare questa funzione membro per impostare un valore che cambia la posizione approssimativa del record corrente nell'oggetto recordset in base a una percentuale dei record del recordset.

```
void SetPercentPosition(float fPosition);
```

### <a name="parameters"></a>Parametri
*fPosition*<br/>
Numero compreso tra 0 e 100.

### <a name="remarks"></a>Note
Quando si lavora con un tipo dynaset o recordset di tipo snapshot, tramite lo spostamento all'ultimo record prima di chiamare innanzitutto popolare il recordset `SetPercentPosition`. Se si chiama `SetPercentPosition` prima di popolare completamente il recordset, la quantità di spostamento è rispetto al numero di record è possibile accedere come indicato dal valore del [GetRecordCount](#getrecordcount). È possibile spostare all'ultimo record chiamando `MoveLast`.

Dopo aver chiamato `SetPercentPosition`, il record in corrispondenza della posizione approssimativa corrispondente a tale valore diventa corrente.

> [!NOTE]
>  La chiamata `SetPercentPosition` per spostare il record corrente a un record specifico in un recordset non è consigliato. Chiamare il [SetBookmark](#setbookmark) membro funzione.

Per informazioni correlate, vedere l'argomento "Proprietà PercentPosition" nella Guida di DAO.

##  <a name="update"></a>  CDaoRecordset::Update
Chiamare questa funzione membro dopo una chiamata ai `AddNew` o `Edit` funzione membro.

```
virtual void Update();
```

### <a name="remarks"></a>Note
Questa chiamata è necessario per completare la `AddNew` o `Edit` operazione.

Entrambe `AddNew` e `Edit` preparare un buffer di modifica in cui viene inseriti i dati aggiunti o modificati per il salvataggio nell'origine dati. `Update` Salva i dati. Vengono aggiornati solo i campi contrassegnati o rilevato come è stato modificato.

Se l'origine dati supporta le transazioni, è possibile apportare le `Update` chiamare (e relativo valore corrispondente `AddNew` o `Edit` chiamare) fa parte di una transazione.

> [!CAUTION]
> Se si chiama `Update` senza prima chiamare `AddNew` oppure `Edit`, `Update` genera un `CDaoException`. Se si chiama `AddNew` oppure `Edit`, è necessario chiamare `Update` prima di chiamare [MoveNext](#movenext) o si chiude il recordset o la connessione all'origine dati. In caso contrario, le modifiche andranno perdute senza preavviso.

Quando l'oggetto recordset è blocco pessimistico in un ambiente multiutente, rimane bloccato dal momento in cui il record `Edit` viene usato fino a quando l'aggiornamento è stato completato. Se il recordset è applicato il presupposto ottimistico bloccato, il record è bloccato e confrontato con il record precedentemente modificato appena prima dell'aggiornamento nel database. Se il record è stato modificato perché è stato chiamato `Edit`, il `Update` operazione ha esito negativo e MFC genera un'eccezione. È possibile modificare la modalità di blocco con `SetLockingMode`.

> [!NOTE]
> Il blocco ottimistico viene sempre utilizzato in formati di database esterno, ad esempio ODBC e driver ISAM installabile.

Per informazioni correlate, vedere gli argomenti "AddNew Method", "Metodo CancelUpdate", "Metodo Delete", "LastModified Property", "Metodo di aggiornamento" e "Proprietà EditMode" nella Guida di DAO.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)<br/>
[Classe CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md)<br/>
[Classe CDaoDatabase](../../mfc/reference/cdaodatabase-class.md)<br/>
[Classe CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md)<br/>

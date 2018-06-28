---
title: CDaoRecordset (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 0c7090940699894e6b868c246d90a9c85a8b2795
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36956037"
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
|[CDaoRecordset:: AddNew](#addnew)|Prepara per l'aggiunta di un nuovo record. Chiamare [aggiornamento](#update) per completare l'aggiunta.|  
|[CDaoRecordset::CanAppend](#canappend)|Restituisce diverso da zero se è possibile aggiungere nuovi record per il recordset tramite il [AddNew](#addnew) funzione membro.|  
|[CDaoRecordset:: CanBookmark](#canbookmark)|Restituisce diverso da zero se il set di record supporta segnalibri.|  
|[CDaoRecordset::CancelUpdate](#cancelupdate)|Annulla gli aggiornamenti in sospeso a causa di un [Edit](#edit) o [AddNew](#addnew) operazione.|  
|[CDaoRecordset::CanRestart](#canrestart)|Restituisce se diverso da zero [Requery](#requery) può essere chiamato per eseguire nuovamente la query del recordset.|  
|[CDaoRecordset::CanScroll](#canscroll)|Restituisce diverso da zero se è possibile scorrere i record.|  
|[CDaoRecordset::CanTransact](#cantransact)|Restituisce diverso da zero se l'origine dati supporta le transazioni.|  
|[CDaoRecordset::CanUpdate](#canupdate)|Restituisce diverso da zero se il recordset può essere aggiornato (è possibile aggiungere, aggiornare o eliminare i record).|  
|[CDaoRecordset::Close](#close)|Chiude il recordset.|  
|[CDaoRecordset::Delete](#delete)|Elimina il record corrente dal recordset. È necessario scorrere in modo esplicito a un altro record dopo l'eliminazione.|  
|[CDaoRecordset::DoFieldExchange](#dofieldexchange)|Chiamata eseguita per lo scambio di dati (in entrambe le direzioni) tra i membri di dati di campo del recordset e il record corrispondente nell'origine dati. Implementa DAO campi di record (DFX).|  
|[CDaoRecordset:: Edit](#edit)|Prepara per le modifiche apportate al record corrente. Chiamare `Update` per completare la modifica.|  
|[CDaoRecordset:: FillCache](#fillcache)|Riempie tutta o parte di una cache locale per un oggetto recordset che contiene i dati da un'origine dati ODBC.|  
|[CDaoRecordset::Find](#find)|Individua il primo, successivo, precedente, o nell'ultima posizione di una determinata stringa in un recordset di tipo dynaset che soddisfa i criteri specificati e imposta che il record corrente.|  
|[CDaoRecordset::FindFirst](#findfirst)|Individua il primo record in un tipo dynaset o un recordset di tipo snapshot che soddisfa i criteri specificati e imposta che il record corrente.|  
|[CDaoRecordset::FindLast](#findlast)|Individua l'ultimo record di un tipo dynaset o un recordset di tipo snapshot che soddisfa i criteri specificati e imposta che il record corrente.|  
|[CDaoRecordset::FindNext](#findnext)|Individua il record successivo in un tipo dynaset o un recordset di tipo snapshot che soddisfa i criteri specificati e imposta che il record corrente.|  
|[CDaoRecordset::FindPrev](#findprev)|Individua il record precedente in un tipo dynaset o un recordset di tipo snapshot che soddisfa i criteri specificati e imposta che il record corrente.|  
|[CDaoRecordset::GetAbsolutePosition](#getabsoluteposition)|Restituisce il numero del record corrente di un oggetto recordset.|  
|[CDaoRecordset:: GetBookmark](#getbookmark)|Restituisce un valore che rappresenta il segnalibro in un record.|  
|[CDaoRecordset::GetCacheSize](#getcachesize)|Restituisce un valore che specifica il numero di record in un recordset di tipo dynaset contenente i dati in locale da memorizzare nella cache da un'origine dati ODBC.|  
|[CDaoRecordset::GetCacheStart](#getcachestart)|Restituisce un valore che specifica il segnalibro del primo record del recordset da memorizzare nella cache.|  
|[CDaoRecordset::GetCurrentIndex](#getcurrentindex)|Restituisce un `CString` contenente il nome dell'indice più recente utilizzata su un tipo di tabella indicizzato, `CDaoRecordset`.|  
|[CDaoRecordset::GetDateCreated](#getdatecreated)|Restituisce la data e l'ora la tabella di base sottostante un `CDaoRecordset` oggetto è stato creato|  
|[CDaoRecordset::GetDateLastUpdated](#getdatelastupdated)|Restituisce la data e ora dell'ultima modifica apportata alla progettazione di una tabella di base sottostante un `CDaoRecordset` oggetto.|  
|[CDaoRecordset::GetDefaultDBName](#getdefaultdbname)|Restituisce il nome dell'origine dati predefinito.|  
|[Un recordset record senza alcuna restituisce un valore pari a 0.](#getdefaultsql)|Chiamato per ottenere la stringa SQL predefinita da eseguire.|  
|[CDaoRecordset::GetEditMode](#geteditmode)|In questo modo il recordset crea un'istruzione SQL completa in base a ciò che è passato a , specificato con ClassWizard e ciò che è stato specificato nel m_strFilter e m_strSort membri dati.|  
|[dbOpenDynaset tipo Dynaset](#getfieldcount)|Restituisce un valore che rappresenta il numero di campi in un recordset.|  
|[CDaoRecordset::GetFieldInfo](#getfieldinfo)|Restituisce i tipi specifici di informazioni sui campi del recordset.|  
|[Ad esempio, un campo in un record che richiede il giorno del mese potrebbe avere una regola di convalida, ad esempio "BETWEEN giorno 1 e 31."](#getfieldvalue)|Restituisce il valore di un campo in un recordset.|  
|[CDaoRecordset::GetIndexCount](#getindexcount)|Recupera il numero di indici in una tabella sottostante un recordset.|  
|[CDaoRecordset::GetIndexInfo](#getindexinfo)|Restituisce i vari tipi di informazioni su un indice.|  
|[CDaoRecordset::GetLastModifiedBookmark](#getlastmodifiedbookmark)|Consente di determinare più recentemente aggiunti o aggiornati i record.|  
|[CDaoRecordset::GetLockingMode](#getlockingmode)|Restituisce un valore che indica il tipo di blocco che è in effetti durante la modifica.|  
|[CDaoRecordset::GetName](#getname)|Restituisce un `CString` contenente il nome del recordset.|  
|[CDaoRecordset::GetParamValue](#getparamvalue)|Recupera il valore corrente del parametro specificato archiviato nell'oggetto DAOParameter sottostante.|  
|[CDaoRecordset:: GetPercentPosition](#getpercentposition)|Restituisce la posizione del record corrente come percentuale del numero totale di record.|  
|[CDaoRecordset::GetRecordCount](#getrecordcount)|Restituisce il numero di record è possibile accedere in un oggetto recordset.|  
|[CDaoRecordset::GetSQL](#getsql)|Ottiene la stringa SQL utilizzata per selezionare i record per il recordset.|  
|[CDaoRecordset::GetType](#gettype)|Chiamata eseguita per determinare il tipo di un recordset: tipo di tabella, dynaset-type o snapshot.|  
|[CDaoRecordset::GetValidationRule](#getvalidationrule)|Restituisce un `CString` contenente il valore di convalida dei dati man mano che verrà immessi in un campo.|  
|[CDaoRecordset::GetValidationText](#getvalidationtext)|Recupera il testo che viene visualizzato quando una regola di convalida non è stato soddisfatto.|  
|[CDaoRecordset::IsBOF](#isbof)|Restituisce diverso da zero se il recordset è stato posizionato prima del primo record. Non sono presenti record corrente.|  
|[CDaoRecordset::IsDeleted](#isdeleted)|Restituisce diverso da zero se il recordset è posizionato su un record eliminato.|  
|[CDaoRecordset::IsEOF](#iseof)|Restituisce diverso da zero se il recordset è stato posizionato dopo l'ultimo record. Non sono presenti record corrente.|  
|[CDaoRecordset::IsFieldDirty](#isfielddirty)|Restituisce diverso da zero se il campo specificato nel record corrente è stato modificato.|  
|[CDaoRecordset::IsFieldNull](#isfieldnull)|Restituisce diverso da zero se il campo specificato nel record corrente è Null (non con nessun valore).|  
|[CDaoRecordset::IsFieldNullable](#isfieldnullable)|Restituisce diverso da zero se il campo specificato nel record corrente può essere impostato su Null (non con nessun valore).|  
|[CDaoRecordset::IsOpen](#isopen)|Restituisce se diverso da zero [Open](#open) è stato chiamato in precedenza.|  
|[CDaoRecordset:: Move](#move)|Posiziona il recordset in un numero specificato di record del record corrente in entrambe le direzioni.|  
|[CDaoRecordset::MoveFirst](#movefirst)|Posizionare il record corrente del primo record del recordset.|  
|[CDaoRecordset::MoveLast](#movelast)|Posiziona il record corrente sull'ultimo record del recordset.|  
|[CDaoRecordset::MoveNext](#movenext)|Posiziona il record corrente del record successivo nel recordset.|  
|[CDaoRecordset::MovePrev](#moveprev)|Posiziona il record corrente del record precedente nel recordset.|  
|[CDaoRecordset:: Open](#open)|Crea un nuovo set di record da una tabella, dynaset o snapshot.|  
|[CDaoRecordset::Requery](#requery)|Esegue la query del recordset nuovamente per aggiornare il record selezionato.|  
|[CDaoRecordset::Seek](#seek)|Individua il record in un oggetto recordset di tipo tabella indicizzata che soddisfa i criteri specificati per l'indice corrente e la imposta come il record corrente.|  
|[CDaoRecordset:: SetAbsolutePosition](#setabsoluteposition)|Imposta il numero del record corrente di un oggetto recordset.|  
|[CDaoRecordset::SetBookmark](#setbookmark)|Posiziona il recordset in un record contenente il segnalibro specificato.|  
|[CDaoRecordset:: SetCacheSize](#setcachesize)|Imposta un valore che specifica il numero di record in un recordset di tipo dynaset contenente i dati in locale da memorizzare nella cache da un'origine dati ODBC.|  
|[CDaoRecordset:: SetCacheStart](#setcachestart)|Imposta un valore che specifica il segnalibro del primo record del recordset da memorizzare nella cache.|  
|[CDaoRecordset:: SetCurrentIndex](#setcurrentindex)|Chiamata eseguita per impostare un indice in un recordset di tipo di tabella.|  
|[CDaoRecordset:: SetFieldDirty](#setfielddirty)|Contrassegna il campo specificato nel record corrente come è stato modificato.|  
|[CDaoRecordset::SetFieldNull](#setfieldnull)|Imposta il valore del campo specificato nel record corrente su Null (non con nessun valore).|  
|[CDaoRecordset::SetFieldValue](#setfieldvalue)|Imposta il valore di un campo in un recordset.|  
|[CDaoRecordset::SetFieldValueNull](#setfieldvaluenull)|Imposta il valore di un campo in un recordset su Null. (deve includere alcun valore).|  
|[CDaoRecordset::SetLockingMode](#setlockingmode)|Imposta un valore che indica il tipo di blocco per rendere effettive durante la modifica.|  
|[CDaoRecordset::SetParamValue](#setparamvalue)|Imposta il valore corrente del parametro specificato archiviato nell'oggetto DAOParameter sottostante|  
|[CDaoRecordset::SetParamValueNull](#setparamvaluenull)|Imposta il valore corrente del parametro specificato su Null (non con nessun valore).|  
|[CDaoRecordset:: SetPercentPosition](#setpercentposition)|Imposta la posizione del record corrente in una posizione corrispondente a una percentuale del numero totale di record in un recordset.|  
|[CDaoRecordset::Update](#update)|Completa un' `AddNew` o `Edit` operazione salvando i dati nuovi o modificati nell'origine dati.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoRecordset:: M_bcheckcachefordirtyfields](#m_bcheckcachefordirtyfields)|Contiene un flag che indica se i campi vengono automaticamente contrassegnati come modificata.|  
|[CDaoRecordset::m_nFields](#m_nfields)|Contiene il numero di membri di dati di campi della classe recordset e il numero di colonne selezionate dal recordset dall'origine dati.|  
|[CDaoRecordset::m_nParams](#m_nparams)|Contiene il numero di membri di dati di parametro nella classe recordset, il numero di parametri passati con la query del recordset|  
|[CDaoRecordset::m_pDAORecordset](#m_pdaorecordset)|Un puntatore all'interfaccia DAO sottostante dell'oggetto recordset.|  
|[CDaoRecordset::m_pDatabase](#m_pdatabase)|Database di origine per questo set di risultati. Contiene un puntatore a un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto.|  
|[CDaoRecordset::m_strFilter](#m_strfilter)|Contiene una stringa utilizzata per costruire un database SQL **in cui** istruzione.|  
|[CDaoRecordset::m_strSort](#m_strsort)|Contiene una stringa utilizzata per costruire un database SQL **ORDER BY** istruzione.|  
  
## <a name="remarks"></a>Note  
 Nota come "Recordset", `CDaoRecordset` gli oggetti sono disponibili in tre forme seguenti:  
  
-   Tipo di tabella recordset rappresentano una tabella di base che è possibile utilizzare per esaminare, aggiungere, modificare o eliminare i record da una singola tabella di database.  
  
-   Recordset di tipo dynaset sono il risultato di una query che può avere i record aggiornabili. Questi tipi di recordset sono un set di record che è possibile utilizzare per esaminare, aggiungere, modificare o eliminare i record da tabelle o una tabella di database sottostante. Recordset di tipo dynaset può contenere i campi da una o più tabelle in un database.  
  
-   Recordset di tipo snapshot sono una copia statica di un set di record che è possibile utilizzare per trovare i dati o di generare report. Questi tipi di recordset può contenere i campi da una o più tabelle in un database ma non può essere aggiornate.  
  
 Ogni forma del recordset rappresenta un set di record stabilita al momento che il recordset è aperto. Quando si passa a un record in un recordset di tipo di tabella o un recordset di tipo dynaset, riflette le modifiche apportate al record dopo il recordset è aperto da altri utenti o da altri recordset nell'applicazione. (Non è possibile aggiornare un recordset di tipo snapshot.) È possibile utilizzare `CDaoRecordset` direttamente o si deriva una classe recordset specifiche dell'applicazione da `CDaoRecordset`. È quindi possibile:  
  
-   Scorrere i record.  
  
-   Impostare un indice e cercare rapidamente i record utilizzando [Seek](#seek) (solo set di record di tipo di tabella).  
  
-   Trovare i record in base a un confronto tra stringhe: "<","\<=", "=", "> =", o ">" (tipo dynaset e Recordset di tipo snapshot).  
  
-   Aggiornare i record e specificare una modalità di blocco (ad eccezione di recordset di tipo snapshot).  
  
-   Filtrare il recordset per vincolare i record vengono selezionati tra quelli disponibili nell'origine dati.  
  
-   Ordinare il recordset.  
  
-   Parametrizzare il recordset per personalizzare la selezione con le informazioni non note fino alla fase di esecuzione.  
  
 Classe `CDaoRecordset` fornisce un'interfaccia analoga a quella della classe `CRecordset`. La differenza principale è quella classe `CDaoRecordset` accede ai dati tramite un oggetto DAO (Data Access) in base a OLE. Classe `CRecordset` accede DBMS tramite Open Database Connectivity (ODBC) e un driver ODBC per DBMS.  
  
> [!NOTE]
>  Classi di database DAO sono distinte da classi di database MFC basate su ODBC Open Database Connectivity (). Tutti i nomi delle classi database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO; le classi DAO offrono in genere funzionalità superiori perché sono specifiche per il motore di database Microsoft Jet.  
  
 È possibile utilizzare `CDaoRecordset` direttamente o derivare una classe da `CDaoRecordset`. Per utilizzare una classe recordset in entrambi i casi, aprire un database e creare un oggetto recordset, passando un puntatore per il costruttore di `CDaoDatabase` oggetto. È inoltre possibile costruire un `CDaoRecordset` dell'oggetto e MFC crea una password temporanea `CDaoDatabase` oggetto per l'utente. Chiamare quindi il recordset [Open](#open) funzione membro, che specifica se l'oggetto è un recordset di tipo di tabella, un recordset di tipo dynaset o un recordset di tipo snapshot. La chiamata `Open` seleziona i dati dal database e recupera il primo record.  
  
 Utilizzare i membri di dati e funzioni membro dell'oggetto per scorrere i record e operano su di essi. Le operazioni disponibili variano a seconda se l'oggetto è un recordset di tipo di tabella, un recordset di tipo dynaset o un recordset di tipo snapshot e sia in sola lettura o aggiornabili, ciò dipende dalla funzionalità del database o Open Database Connectivity (ODBC) origine dati. Per aggiornare i record che è possibile che sono stati modificati o aggiunti dopo la `Open` chiamare, chiamare l'oggetto [Requery](#requery) funzione membro. Chiamare l'oggetto `Close` membro funzione e dopo aver terminato l'eliminazione dell'oggetto.  
  
 `CDaoRecordset` utilizza campi di record DAO (DFX) per supportare la lettura e aggiornamento dei campi del record mediante i membri C++ indipendente dai tipi del `CDaoRecordset` o `CDaoRecordset`-classe derivata. È anche possibile implementare l'associazione dinamica di colonne in un database senza utilizzare il meccanismo DFX usando [GetFieldValue](#getfieldvalue) e [SetFieldValue](#setfieldvalue).  
  
 Per informazioni correlate, vedere l'argomento "Oggetto Recordset" nella Guida di DAO.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDaoRecordset`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
##  <a name="addnew"></a>  CDaoRecordset:: AddNew  
 Chiamare questa funzione membro per aggiungere un nuovo record per un tipo di tabella o di tipo dynaset recordset.  
  
```  
virtual void AddNew();
```  
  
### <a name="remarks"></a>Note  
 I campi del record sono inizialmente Null. (Nella terminologia dei database, Null significa "non having alcun valore" e non è identico **NULL** in C++.) Per completare l'operazione, è necessario chiamare il [aggiornamento](#update) funzione membro. `Update` Salva le modifiche apportate all'origine dati.  
  
> [!CAUTION]
>  Se si modifica un record e quindi scorrere fino a un altro record senza chiamare `Update`, le modifiche verranno perse senza alcun avviso.  
  
 Se si aggiunge un record a un recordset di tipo dynaset chiamando [AddNew](#addnew), il record è visibile nel recordset e incluso nella tabella sottostante in cui diventa visibile ad alcun nuovo `CDaoRecordset` oggetti.  
  
 La posizione del nuovo record dipende dal tipo di set di record:  
  
-   In un tipo di dynaset recordset, in cui viene inserito il nuovo record non è garantita. Questo comportamento è stato modificato con Microsoft Jet 3.0 per motivi di prestazioni e la concorrenza. Se l'obiettivo consiste nel rendere il record appena aggiunto il record corrente, ottenere il segnalibro dell'ultimo record di modifica e spostare il segnalibro:  
  
 [!code-cpp[NVC_MFCDatabase#1](../../mfc/codesnippet/cpp/cdaorecordset-class_1.cpp)]  
  
-   In un recordset di tipo di tabella per cui è stato specificato un indice, vengono restituiti record nella posizione nell'ordinamento. Se non è stato specificato alcun indice, i nuovi record vengono restituiti alla fine del recordset.  
  
 Il record corrente prima di utilizzare `AddNew` rimane invariato. Se si desidera rendere il nuovo record corrente e il set di record supporta segnalibri, chiamata [SetBookmark](#setbookmark) al segnalibro identificato dall'impostazione della proprietà LastModified dell'oggetto recordset DAO sottostante. In questo modo è utile per determinare il valore per i campi di contatore (incremento automatico) in un record aggiunto. Per altre informazioni, vedere [GetLastModifiedBookmark](#getlastmodifiedbookmark).  
  
 Se il database supporta le transazioni, è possibile apportare le `AddNew` chiamare parte di una transazione. Per ulteriori informazioni sulle transazioni, vedere la classe [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md). Si noti che è necessario chiamare [CDaoWorkspace::BeginTrans](../../mfc/reference/cdaoworkspace-class.md#begintrans) prima di chiamare `AddNew`.  
  
 Non è consentito chiamare `AddNew` per un oggetto recordset il cui [Open](#open) funzione membro non è stata chiamata. Un `CDaoException` viene generata se si chiama `AddNew` per un oggetto recordset che non possono essere accodati. È possibile determinare se il recordset è aggiornabile chiamando [CanAppend](#canappend).  
  
 I segni di framework modificare i membri di dati campo per assicurarsi che verranno scritti nel record nell'origine dati per il meccanismo di scambio (DFX) di campi di record DAO. La modifica del valore di un campo in genere imposta il campo dirty automaticamente, pertanto è necessario chiamare raramente [SetFieldDirty](#setfielddirty) personalmente, ma in alcuni casi potrebbe essere necessario garantire che le colonne verranno essere aggiornate o inserite indipendentemente dal fatto che in modo esplicito il valore è il membro dati di campo. Il meccanismo DFX utilizza inoltre l'utilizzo di **PSEUDO NULL**. Per altre informazioni, vedere [CDaoFieldExchange:: M_noperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).  
  
 Se non viene utilizzato il meccanismo del doppio buffer, quindi la modifica del valore del campo non viene impostata automaticamente il campo come dirty. In questo caso, sarà necessario impostare in modo esplicito il campo dirty. Il flag contenuto in [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controlla il controllo automatico dei campi automatico.  
  
> [!NOTE]
>  Se i record sono a doppio buffer (vale a dire, controllo automatico dei campi automatico è abilitato), la chiamata `CancelUpdate` ripristinerà le variabili membro per i valori che avevano prima `AddNew` o `Edit` è stato chiamato.  
  
 Per informazioni correlate, vedere gli argomenti "AddNew (metodo)", "CancelUpdate Method", "Property LastModified" e "Proprietà EditMode" nella Guida di DAO.  
  
##  <a name="canappend"></a>  CDaoRecordset::CanAppend  
 Chiamare questa funzione membro per determinare se il recordset precedentemente aperto consente di aggiungere nuovi record chiamando il [AddNew](#addnew) funzione membro.  
  
```  
BOOL CanAppend() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il recordset consente l'aggiunta di nuovi record; in caso contrario 0. `CanAppend` verrà restituito 0 se è stato aperto il recordset in sola lettura.  
  
### <a name="remarks"></a>Note  
 Per informazioni correlate, vedere l'argomento "Aggiunta Method" nella Guida di DAO.  
  
##  <a name="canbookmark"></a>  CDaoRecordset:: CanBookmark  
 Chiamare questa funzione membro per determinare se il recordset precedentemente aperto consente di contrassegnare singolarmente i record utilizzando i segnalibri.  
  
```  
BOOL CanBookmark();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il set di record supporta segnalibri, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se si utilizza recordset basate interamente sui tabelle motore di database Microsoft Jet, è possono usare i segnalibri tranne nei recordset di tipo snapshot contrassegnato come recordset forward-only scorrimento. Altri prodotti del database (origini dati ODBC esterne) potrebbero non supportare i segnalibri.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà supporta" nella Guida di DAO.  
  
##  <a name="cancelupdate"></a>  CDaoRecordset::CancelUpdate  
 Il `CancelUpdate` funzione membro Annulla eventuali aggiornamenti in sospeso a causa di un [modificare](#edit) o [AddNew](#addnew) operazione.  
  
```  
virtual void CancelUpdate();
```  
  
### <a name="remarks"></a>Note  
 Se, ad esempio, un'applicazione chiama il `Edit` oppure `AddNew` funzione membro e non è chiamato [aggiornamento](#update), `CancelUpdate` Annulla tutte le modifiche apportate dopo `Edit` o `AddNew` è stato chiamato.  
  
> [!NOTE]
>  Se i record sono a doppio buffer (vale a dire, controllo automatico dei campi automatico è abilitato), la chiamata `CancelUpdate` ripristinerà le variabili membro per i valori che avevano prima `AddNew` o `Edit` è stato chiamato.  
  
 Se è presente alcun `Edit` oppure `AddNew` operazione in sospeso, `CancelUpdate` provoca MFC generare un'eccezione. Chiamare il [GetEditMode](#geteditmode) funzione membro per determinare se è presente un'operazione in sospeso che può essere annullata.  
  
 Per informazioni correlate, vedere l'argomento "CancelUpdate Method" nella Guida di DAO.  
  
##  <a name="canrestart"></a>  CDaoRecordset::CanRestart  
 Chiamare questa funzione membro per determinare se il recordset consente di riavviare la query (per aggiornare i relativi record) chiamando il `Requery` funzione membro.  
  
```  
BOOL CanRestart();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se `Requery` può essere chiamato per eseguire la query del recordset nuovamente, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Tipo di tabella Recordset non supportano `Requery`.  
  
 Se `Requery` non è supportate, chiamare [Chiudi](#close) quindi [aprire](#open) per aggiornare i dati. È possibile chiamare `Requery` per aggiornare un oggetto recordset sottostante della query con parametri dopo che i valori dei parametri sono state modificate.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà riavviabili" nella Guida di DAO.  
  
##  <a name="canscroll"></a>  CDaoRecordset::CanScroll  
 Chiamare questa funzione membro per determinare se il recordset è consentito lo scorrimento.  
  
```  
BOOL CanScroll() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è possibile scorrere i record, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se si chiama [Open](#open) con **dbForwardOnly**, recordset solo può scorrere in avanti.  
  
 Per informazioni correlate, vedere l'argomento "Posizionamento del Record corrente puntatore con DAO" nella Guida di DAO.  
  
##  <a name="cantransact"></a>  CDaoRecordset::CanTransact  
 Chiamare questa funzione membro per determinare se il recordset consente alle transazioni.  
  
```  
BOOL CanTransact();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'origine dati sottostante supporta le transazioni, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per informazioni correlate, vedere l'argomento "Proprietà Transactions" nella Guida di DAO.  
  
##  <a name="canupdate"></a>  CDaoRecordset::CanUpdate  
 Chiamare questa funzione membro per determinare se il recordset può essere aggiornato.  
  
```  
BOOL CanUpdate() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il recordset può essere aggiornato (aggiungere, aggiornare ed eliminare i record), in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Potrebbe essere un recordset di sola lettura se l'origine dati sottostante è di sola lettura o se è stato specificato **dbReadOnly** per *nOptions* quando è stato chiamato [aperta](#open) per il recordset.  
  
 Per informazioni correlate, vedere gli argomenti "AddNew (metodo)", "Modifica metodo", "Eliminare Method", "Aggiornamento Method" e "Proprietà aggiornabile" nella Guida di DAO.  
  
##  <a name="cdaorecordset"></a>  CDaoRecordset::CDaoRecordset  
 Costruisce un oggetto `CDaoRecordset`.  
  
```  
CDaoRecordset(CDaoDatabase* pDatabase = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *pDatabase*  
 Contiene un puntatore a un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto o il valore **NULL**. In caso contrario **NULL** e il `CDaoDatabase` dell'oggetto `Open` funzione membro non è stata chiamata per eseguire la connessione all'origine dati, il recordset tenta di aprirlo automaticamente durante il proprio [aprire](#open) chiamare. Se si passa **NULL**, un `CDaoDatabase` oggetto viene costruito e connesso mediante le informazioni di origine dati è specificato se è derivata della classe recordset da `CDaoRecordset`.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare `CDaoRecordset` direttamente o si deriva una classe specifica dell'applicazione da `CDaoRecordset`. È possibile utilizzare ClassWizard per derivare le classi di recordset.  
  
> [!NOTE]
>  Se si deriva una `CDaoRecordset` classe, derivata la classe deve fornire il proprio costruttore. Nel costruttore della classe derivata, chiamare il costruttore `CDaoRecordset::CDaoRecordset`, passando i parametri appropriati lungo a esso.  
  
 Passare **NULL** al costruttore del recordset per avere un `CDaoDatabase` oggetto creato e collegato automaticamente per l'utente. Si tratta di una scorciatoia utile che non richiede la creazione e connettere un `CDaoDatabase` oggetto prima della creazione del recordset. Se il `CDaoDatabase` oggetto non è aperto, un [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) oggetto verrà inoltre creato per l'utente che utilizza l'area di lavoro predefinita. Per altre informazioni, vedere [CDaoDatabase::CDaoDatabase](../../mfc/reference/cdaodatabase-class.md#cdaodatabase).  
  
##  <a name="close"></a>  CDaoRecordset::Close  
 Chiusura di un `CDaoRecordset` oggetto rimuove dalla raccolta di recordset aperti nel database associato.  
  
```  
virtual void Close();
```  
  
### <a name="remarks"></a>Note  
 Poiché **Close** non elimina definitivamente il `CDaoRecordset` dell'oggetto, è possibile riutilizzare l'oggetto chiamando `Open` nella stessa origine dati o un'origine dati diversa.  
  
 Tutte in sospeso [AddNew](#addnew) oppure [modificare](#edit) istruzioni vengono annullate e viene eseguito il rollback di tutte le transazioni in sospeso. Se si desidera mantenere le aggiunte o modifiche in sospeso, chiamare [aggiornamento](#update) prima di chiamare `Close` per ogni oggetto recordset.  
  
 È possibile chiamare `Open` nuovamente dopo la chiamata `Close`. Ciò consente di riutilizzare l'oggetto recordset. Un'alternativa migliore consiste nel chiamare [Requery](#requery), se possibile.  
  
 Per informazioni correlate, vedere l'argomento "Close (metodo)" nella Guida di DAO.  
  
##  <a name="delete"></a>  CDaoRecordset::Delete  
 Chiamare questa funzione membro per eliminare il record corrente in un oggetto aperto di recordset dynaset-type o tipo di tabella.  
  
```  
virtual void Delete();
```  
  
### <a name="remarks"></a>Note  
 Dopo la corretta eliminazione, membri dati di campi del recordset vengono impostati su un valore Null ed è necessario chiamare esplicitamente una delle funzioni membro di navigazione di recordset ( [spostare](#move), [Seek](#seek), [ SetBookmark](#setbookmark)e così via) per consentire lo spostamento dal record eliminato. Quando si eliminano i record da un oggetto recordset, è necessario un record corrente nel recordset prima di chiamare `Delete`; in caso contrario, MFC genera un'eccezione.  
  
 `Delete` Rimuove il record corrente e lo rende inaccessibili. Anche se non è possibile modificare o utilizzare il record eliminato, rimane corrente. Dopo il passaggio a un altro record, tuttavia, è possibile apportare il record eliminato corrente nuovamente.  
  
> [!CAUTION]
>  Il recordset deve essere aggiornabile e deve esistere un record valido corrente del recordset quando si chiama `Delete`. Ad esempio, se si elimina un record ma non è possibile scorrere a un nuovo record prima di chiamare `Delete` anche in questo caso `Delete` genera un [CDaoException](../../mfc/reference/cdaoexception-class.md).  
  
 È possibile annullare l'eliminazione di un record se si utilizzano le transazioni e si chiama il [CDaoWorkspace::Rollback](../../mfc/reference/cdaoworkspace-class.md#rollback) funzione membro. Se la tabella di base è la tabella primaria in una catena Elimina relazione, l'eliminazione del record corrente può inoltre eliminare uno o più record in una tabella esterna. Per altre informazioni, vedere la propagazione"definizione" eliminare la Guida di DAO.  
  
 A differenza `AddNew` e `Edit`, una chiamata a `Delete` non è seguito da una chiamata a `Update`.  
  
 Per informazioni correlate, vedere gli argomenti "AddNew (metodo)", "Modifica metodo", "Eliminare Method", "Aggiornamento Method" e "Proprietà aggiornabile" nella Guida di DAO.  
  
##  <a name="dofieldexchange"></a>  CDaoRecordset::DoFieldExchange  
 Il framework chiama questa funzione membro per automaticamente lo scambio di dati tra i membri di dati di campo dell'oggetto recordset e le corrispondenti colonne del record corrente nell'origine dati.  
  
```  
virtual void DoFieldExchange(CDaoFieldExchange* pFX);
```  
  
### <a name="parameters"></a>Parametri  
 *pFX*  
 Contiene un puntatore a un `CDaoFieldExchange` oggetto. Il framework già avere imposterà l'oggetto per specificare un contesto per l'operazione su campo di exchange.  
  
### <a name="remarks"></a>Note  
 Inoltre, associa i membri di dati del parametro, se disponibili, per i segnaposto dei parametri nella stringa dell'istruzione SQL per la selezione del recordset. Lo scambio di dati di campo, denominato campi di record DAO (DFX) funziona in entrambe le direzioni: da membri di dati di campi dell'oggetto recordset ai campi del record nell'origine dati e dai record nell'origine dei dati per l'oggetto recordset. Se si siano associando le colonne in modo dinamico, non è necessario implementare `DoFieldExchange`.  
  
 La sola azione che è in genere necessario eseguire per implementare `DoFieldExchange` per il recordset derivato classe consiste nel creare la classe con ClassWizard e specificare i tipi di dati e i nomi dei membri di dati di campo. È anche possibile aggiungere codice a ciò che scrive ClassWizard specificare membri dati di parametro. Se tutti i campi devono essere associati in modo dinamico, questa funzione sarà inattiva a meno che non vengono specificati membri dati di parametro.  
  
 Quando si dichiara la classe derivata recordset con ClassWizard, la procedura guidata scrive un override di `DoFieldExchange` , che è simile alla seguente:  
  
 [!code-cpp[NVC_MFCDatabase#2](../../mfc/codesnippet/cpp/cdaorecordset-class_2.cpp)]  
  
##  <a name="edit"></a>  CDaoRecordset:: Edit  
 Chiamare questa funzione membro per consentire le modifiche apportate al record corrente.  
  
```  
virtual void Edit();
```  
  
### <a name="remarks"></a>Note  
 Dopo aver chiamato il `Edit` funzione membro, le modifiche apportate ai campi del record corrente vengono copiati nel buffer di copia. Dopo aver apportato le modifiche desiderate al record, chiamare `Update` per salvare le modifiche. `Edit` Consente di salvare i valori dei membri di dati del recordset. Se si chiama `Edit`, apportare modifiche, quindi chiamare `Edit` anche in questo caso vengono ripristinati i valori del record di fossero prima del primo `Edit` chiamare.  
  
> [!CAUTION]
>  Se si modifica un record e quindi eseguire qualsiasi operazione che consente di spostare a un altro record senza prima chiamare `Update`, le modifiche verranno perse senza alcun avviso. Inoltre, se si chiude il recordset o il database padre, il record modificato viene eliminato senza avviso.  
  
 In alcuni casi, si desidera aggiornare una colonna, rendendo Null (che non contengono dati). A tale scopo, chiamare `SetFieldNull` con il parametro **TRUE** per contrassegnare il campo Null; in questo modo anche la colonna da aggiornare. Se si desidera che un campo per scrivere l'origine dati anche se il relativo valore non è stato modificato, chiamare `SetFieldDirty` con il parametro **TRUE**. Ciò funziona anche se il campo è stato impostato il valore Null.  
  
 I segni di framework modificare i membri di dati campo per assicurarsi che verranno scritti nel record nell'origine dati per il meccanismo di scambio (DFX) di campi di record DAO. La modifica del valore di un campo in genere imposta il campo dirty automaticamente, pertanto è necessario chiamare raramente [SetFieldDirty](#setfielddirty) personalmente, ma in alcuni casi potrebbe essere necessario garantire che le colonne verranno essere aggiornate o inserite indipendentemente dal fatto che in modo esplicito il valore è il membro dati di campo. Il meccanismo DFX utilizza inoltre l'utilizzo di **PSEUDO NULL**. Per altre informazioni, vedere [CDaoFieldExchange:: M_noperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).  
  
 Se non viene utilizzato il meccanismo del doppio buffer, quindi la modifica del valore del campo non viene impostata automaticamente il campo come dirty. In questo caso, sarà necessario impostare in modo esplicito il campo dirty. Il flag contenuto in [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controlla il controllo automatico dei campi automatico.  
  
 Quando l'oggetto recordset pessimistico è bloccato in un ambiente multiutente, il record rimane bloccato dal momento in cui `Edit` viene utilizzato fino a quando l'aggiornamento è stata completata. Se il recordset è applicato il presupposto ottimistico bloccato, il record è bloccato e confrontato con il record precedentemente modificato prima di aggiornarli nel database. Se il record è stato modificato dopo la chiamata `Edit`, il `Update` operazione ha esito negativo e MFC genera un'eccezione. È possibile modificare la modalità di blocco con `SetLockingMode`.  
  
> [!NOTE]
>  Blocco ottimistico viene sempre utilizzato in formati di database esterno, ad esempio ODBC e driver ISAM installabile.  
  
 Il record corrente rimane invariato dopo aver chiamato `Edit`. Per chiamare `Edit`, deve essere presente un record corrente. Se nessun record corrente o se il recordset non fa riferimento a un tipo di tabella aperta o oggetto recordset di tipo dynaset, si verifica un'eccezione. La chiamata `Edit` provoca un `CDaoException` generata nelle condizioni seguenti:  
  
-   Non sono presenti record corrente.  
  
-   Il database o recordset è di sola lettura.  
  
-   Nessun campo del record è aggiornabile.  
  
-   Il database o recordset è stato aperto per l'uso esclusivo da un altro utente.  
  
-   Un altro utente ha bloccato la pagina che contiene il record.  
  
 Se l'origine dati supporta le transazioni, è possibile apportare la `Edit` chiamare parte di una transazione. Si noti che è necessario chiamare `CDaoWorkspace::BeginTrans` prima di chiamare `Edit` e dopo aver aperto il recordset. Si noti inoltre che la chiamata `CDaoWorkspace::CommitTrans` non è un sostituto per chiamare `Update` per completare il `Edit` operazione. Per ulteriori informazioni sulle transazioni, vedere la classe `CDaoWorkspace`.  
  
 Per informazioni correlate, vedere gli argomenti "AddNew (metodo)", "Modifica metodo", "Eliminare Method", "Aggiornamento Method" e "Proprietà aggiornabile" nella Guida di DAO.  
  
##  <a name="fillcache"></a>  CDaoRecordset:: FillCache  
 Chiamare questa funzione membro per memorizzare nella cache un numero specificato di record dal recordset.  
  
```  
void FillCache(
    long* pSize = NULL,  
    COleVariant* pBookmark = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *pSize*  
 Specifica il numero di righe da inserire nella cache. Se si omette questo parametro, il valore è determinato dall'impostazione della proprietà CacheSize dell'oggetto DAO sottostante.  
  
 *pBookmark*  
 Un [COleVariant](../../mfc/reference/colevariant-class.md) specificando un segnalibro. La cache viene riempita a partire dal record indicato da questo segnalibro. Se si omette questo parametro, la cache viene riempita a partire dal record indicato dalla proprietà CacheStart dell'oggetto DAO sottostante.  
  
### <a name="remarks"></a>Note  
 La memorizzazione nella cache migliora le prestazioni di un'applicazione che recupera o vengono recuperati, i dati da un server remoto. Lo spazio nella memoria locale che contiene i dati recuperati più di recente dal server sul presupposto che i dati verranno richiesti nuovamente mentre è in esecuzione l'applicazione è una cache. Quando vengono richiesti dati, il motore di database Microsoft Jet controlla innanzitutto la cache per i dati anziché recupero dal server, che richiede più tempo. Utilizzo di dati la memorizzazione nella cache su origini dati ODBC non ha alcun effetto man mano che i dati non vengano salvati nella cache.  
  
 Anziché restare in attesa per la cache in cui inserire i record come essi vengono recuperati, è possibile compilare in modo esplicito la cache in qualsiasi momento chiamando la `FillCache` funzione membro. Questo è un modo più veloce per riempire la cache perché `FillCache` recupera più record in una sola volta anziché uno alla volta. Ad esempio, mentre viene visualizzato ogni schermata di record, è possibile avere la chiamata dell'applicazione `FillCache` per recuperare la schermata successiva di record.  
  
 Qualsiasi database ODBC accedere con oggetti recordset può avere una cache locale. Per creare la cache, aprire un oggetto recordset dall'origine dati remota e quindi chiamare il `SetCacheSize` e `SetCacheStart` funzioni membro dell'oggetto recordset. Se *lSize* e *lBookmark* creare un intervallo che non rientra nell'intervallo specificato dai parzialmente o totalmente `SetCacheSize` e `SetCacheStart`, la parte del recordset all'esterno di questo intervallo viene ignorata e non è caricato nella cache. Se `FillCache` , le richieste di record maggiore rimangono nell'origine dati remota, vengono recuperati solo i rimanenti record e viene generata alcuna eccezione.  
  
 Record recuperati dalla cache non riflettono le modifiche apportate contemporaneamente all'origine dati da altri utenti.  
  
 `FillCache` Recupera solo i record non è già stato memorizzato nella cache. Per forzare un aggiornamento di tutti i dati memorizzati nella cache, chiamare il `SetCacheSize` funzione membro con un *lSize* parametro uguale a 0, chiamata `SetCacheSize` nuovamente con il *lSize* parametro uguale alle dimensioni della cache richiesto in origine e quindi chiamare `FillCache`.  
  
 Per informazioni correlate, vedere l'argomento "FillCache Method" nella Guida di DAO.  
  
##  <a name="find"></a>  CDaoRecordset::Find  
 Chiamare questa funzione membro per individuare una determinata stringa in un recordset di tipo dynaset o snapshot utilizzando un operatore di confronto.  
  
```  
virtual BOOL Find(
    long lFindType,  
    LPCTSTR lpszFilter);
```  
  
### <a name="parameters"></a>Parametri  
 *lFindType*  
 Un valore che indica il tipo di operazione di ricerca desiderato. I valori possibili sono:  
  
- **AFX_DAO_NEXT** trovare la posizione successiva di una stringa corrispondente.  
  
- **AFX_DAO_PREV** trovare il precedente percorso di una stringa corrispondente.  
  
- **AFX_DAO_FIRST** individuare la prima posizione di una stringa corrispondente.  
  
- **AFX_DAO_LAST** trovare l'ultima posizione di una stringa corrispondente.  
  
 *lpszFilter*  
 Un'espressione stringa (ad esempio il **in cui** clausola in un'istruzione SQL senza la parola **in cui**) utilizzato per individuare il record. Ad esempio:  
  
 [!code-cpp[NVC_MFCDatabase#3](../../mfc/codesnippet/cpp/cdaorecordset-class_3.cpp)]  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se vengono trovati record corrispondenti, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È possibile trovare il primo, successivo, precedente o ultima istanza della stringa. `Find` è una funzione virtuale, pertanto è possibile eseguirne l'override e aggiungere la propria implementazione. Il `FindFirst`, `FindLast`, `FindNext`, e `FindPrev` funzioni membro chiamano il `Find` funzione membro, pertanto è possibile utilizzare `Find` per controllare il comportamento di tutte le operazioni di ricerca.  
  
 Per individuare un record in un recordset di tipo di tabella, chiamare il [Seek](#seek) funzione membro.  
  
> [!TIP]
>  Minore è il set di record, è più efficace `Find` sarà. In generale e in particolare con dati ODBC, è preferibile creare una nuova query che recupera solo i record desiderati.  
  
 Per informazioni correlate, vedere l'argomento "FindFirst, FindLast, FindNext, FindPrevious metodi" nella Guida di DAO.  
  
##  <a name="findfirst"></a>  CDaoRecordset::FindFirst  
 Chiamare questa funzione membro per trovare il primo record che soddisfano una condizione specificata.  
  
```  
BOOL FindFirst(LPCTSTR lpszFilter);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszFilter*  
 Un'espressione stringa (ad esempio il **in cui** clausola in un'istruzione SQL senza la parola **in cui**) utilizzato per individuare il record.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se vengono trovati record corrispondenti, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il `FindFirst` funzione membro inizia la ricerca dall'inizio del recordset e le ricerche alla fine del recordset.  
  
 Se si desidera includere tutti i record per la ricerca (non solo quelli che soddisfano una condizione specifica) utilizzano una delle operazioni di spostamento per spostare da un record a altro. Per individuare un record in un recordset di tipo di tabella, chiamare il `Seek` funzione membro.  
  
 Se non si trova un record corrispondente ai criteri, il puntatore del record corrente è indeterminato, e `FindFirst` restituisce zero. Se il recordset contiene più di un record che soddisfano i criteri `FindFirst` individua la prima occorrenza, `FindNext` individua l'occorrenza successiva e così via.  
  
> [!CAUTION]
>  Se si modifica il record corrente, assicurarsi di salvare le modifiche chiamando il `Update` funzione membro prima di passare a un altro record. Se si sposta in un altro record senza l'aggiornamento, le modifiche verranno perse senza alcun avviso.  
  
 Il `Find` funzioni membro di ricerca dalla posizione e nella direzione specificata nella tabella seguente:  
  
|Operazioni di ricerca|Begin|Direzione di ricerca|  
|---------------------|-----------|----------------------|  
|`FindFirst`|Inizio del recordset|Fine dell'oggetto recordset|  
|`FindLast`|Fine dell'oggetto recordset|Inizio del recordset|  
|`FindNext`|Record corrente|Fine dell'oggetto recordset|  
|`FindPrevious`|Record corrente|Inizio del recordset|  
  
> [!NOTE]
>  Quando si chiama `FindLast`, il motore di database Microsoft Jet viene popolato completamente il recordset prima di iniziare la ricerca, se non è già stato fatto. La prima ricerca può richiedere più tempo rispetto a ricerche successive.  
  
 Utilizzando una delle operazioni di ricerca non è uguale a chiamare `MoveFirst` o `MoveNext`, tuttavia, che rende semplicemente il primo o successivo record corrente senza specificare una condizione. È possibile seguire un'operazione di ricerca con un'operazione di spostamento.  
  
 Quando si utilizzano le operazioni di ricerca, tenere presente quanto segue:  
  
-   Se `Find` restituisce diverso da zero, il record corrente non è definito. In questo caso, è necessario posizionare il puntatore del record corrente nuovamente a un record valido.  
  
-   È possibile utilizzare un'operazione di ricerca con un recordset di tipo snapshot scorrimento forward-only.  
  
-   È consigliabile utilizzare il formato di data US (mese-giorno-anno) per la ricerca di campi che contengono date, anche se non si utilizza la versione di Stati Uniti del motore di database Microsoft Jet; in caso contrario, i record corrispondenti non sono disponibili.  
  
-   Quando si utilizzano database ODBC e dynaset grandi, si potrebbbe scoprire che utilizzano le operazioni di ricerca è lenta, specialmente quando si lavora con grandi set di record. È possibile migliorare le prestazioni tramite query SQL con personalizzato **ORDERBY** oppure **in cui** clausole, le query con parametri, o `CDaoQuerydef` gli oggetti che recuperano record indicizzati specifici.  
  
 Per informazioni correlate, vedere l'argomento "FindFirst, FindLast, FindNext, FindPrevious metodi" nella Guida di DAO.  
  
##  <a name="findlast"></a>  CDaoRecordset::FindLast  
 Chiamare questa funzione membro per trovare l'ultimo record che soddisfano una condizione specificata.  
  
```  
BOOL FindLast(LPCTSTR lpszFilter);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszFilter*  
 Un'espressione stringa (ad esempio il **in cui** clausola in un'istruzione SQL senza la parola **in cui**) utilizzato per individuare il record.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se vengono trovati record corrispondenti, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il `FindLast` funzione membro inizia la ricerca alla fine del recordset e Cerca all'indietro verso l'inizio del recordset.  
  
 Se si desidera includere tutti i record per la ricerca (non solo quelli che soddisfano una condizione specifica) utilizzano una delle operazioni di spostamento per spostare da un record a altro. Per individuare un record in un recordset di tipo di tabella, chiamare il `Seek` funzione membro.  
  
 Se non si trova un record corrispondente ai criteri, il puntatore del record corrente è indeterminato, e `FindLast` restituisce zero. Se il recordset contiene più di un record che soddisfano i criteri `FindFirst` individua la prima occorrenza, `FindNext` individua l'occorrenza successiva dopo la prima occorrenza e così via.  
  
> [!CAUTION]
>  Se si modifica il record corrente, assicurarsi salvare le modifiche chiamando il `Update` funzione membro prima di passare a un altro record. Se si sposta in un altro record senza l'aggiornamento, le modifiche verranno perse senza alcun avviso.  
  
 Utilizzando una delle operazioni di ricerca non è uguale a chiamare `MoveFirst` o `MoveNext`, tuttavia, che rende semplicemente il primo o successivo record corrente senza specificare una condizione. È possibile seguire un'operazione di ricerca con un'operazione di spostamento.  
  
 Quando si utilizzano le operazioni di ricerca, tenere presente quanto segue:  
  
-   Se `Find` restituisce diverso da zero, il record corrente non è definito. In questo caso, è necessario posizionare il puntatore del record corrente nuovamente a un record valido.  
  
-   È possibile utilizzare un'operazione di ricerca con un recordset di tipo snapshot scorrimento forward-only.  
  
-   È consigliabile utilizzare il formato di data US (mese-giorno-anno) per la ricerca di campi che contengono date, anche se non si utilizza la versione di Stati Uniti del motore di database Microsoft Jet; in caso contrario, i record corrispondenti non sono disponibili.  
  
-   Quando si utilizzano database ODBC e dynaset grandi, si potrebbbe scoprire che utilizzano le operazioni di ricerca è lenta, specialmente quando si lavora con grandi set di record. È possibile migliorare le prestazioni tramite query SQL con personalizzato **ORDERBY** oppure **in cui** clausole, le query con parametri, o `CDaoQuerydef` gli oggetti che recuperano record indicizzati specifici.  
  
 Per informazioni correlate, vedere l'argomento "FindFirst, FindLast, FindNext, FindPrevious metodi" nella Guida di DAO.  
  
##  <a name="findnext"></a>  CDaoRecordset::FindNext  
 Chiamare questa funzione membro per trovare il record successivo che corrisponde a una condizione specificata.  
  
```  
BOOL FindNext(LPCTSTR lpszFilter);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszFilter*  
 Un'espressione stringa (ad esempio il **in cui** clausola in un'istruzione SQL senza la parola **in cui**) utilizzato per individuare il record.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se vengono trovati record corrispondenti, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il `FindNext` funzione membro inizia la ricerca in corrispondenza del record corrente e ricerca alla fine del recordset.  
  
 Se si desidera includere tutti i record per la ricerca (non solo quelli che soddisfano una condizione specifica) utilizzano una delle operazioni di spostamento per spostare da un record a altro. Per individuare un record in un recordset di tipo di tabella, chiamare il `Seek` funzione membro.  
  
 Se non si trova un record corrispondente ai criteri, il puntatore del record corrente è indeterminato, e `FindNext` restituisce zero. Se il recordset contiene più di un record che soddisfano i criteri `FindFirst` individua la prima occorrenza, `FindNext` individua l'occorrenza successiva e così via.  
  
> [!CAUTION]
>  Se si modifica il record corrente, assicurarsi salvare le modifiche chiamando il `Update` funzione membro prima di passare a un altro record. Se si sposta in un altro record senza l'aggiornamento, le modifiche verranno perse senza alcun avviso.  
  
 Utilizzando una delle operazioni di ricerca non è uguale a chiamare `MoveFirst` o `MoveNext`, tuttavia, che rende semplicemente il primo o successivo record corrente senza specificare una condizione. È possibile seguire un'operazione di ricerca con un'operazione di spostamento.  
  
 Quando si utilizzano le operazioni di ricerca, tenere presente quanto segue:  
  
-   Se `Find` restituisce diverso da zero, il record corrente non è definito. In questo caso, è necessario posizionare il puntatore del record corrente nuovamente a un record valido.  
  
-   È possibile utilizzare un'operazione di ricerca con un recordset di tipo snapshot scorrimento forward-only.  
  
-   È consigliabile utilizzare il formato di data US (mese-giorno-anno) per la ricerca di campi che contengono date, anche se non si utilizza la versione di Stati Uniti del motore di database Microsoft Jet; in caso contrario, i record corrispondenti non sono disponibili.  
  
-   Quando si utilizzano database ODBC e dynaset grandi, si potrebbbe scoprire che utilizzano le operazioni di ricerca è lenta, specialmente quando si lavora con grandi set di record. È possibile migliorare le prestazioni tramite query SQL con personalizzato **ORDERBY** oppure **in cui** clausole, le query con parametri, o `CDaoQuerydef` gli oggetti che recuperano record indicizzati specifici.  
  
 Per informazioni correlate, vedere l'argomento "FindFirst, FindLast, FindNext, FindPrevious metodi" nella Guida di DAO.  
  
##  <a name="findprev"></a>  CDaoRecordset::FindPrev  
 Chiamare questa funzione membro per trovare il record precedente che corrisponde a una condizione specificata.  
  
```  
BOOL FindPrev(LPCTSTR lpszFilter);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszFilter*  
 Un'espressione stringa (ad esempio il **in cui** clausola in un'istruzione SQL senza la parola **in cui**) utilizzato per individuare il record.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se vengono trovati record corrispondenti, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il `FindPrev` funzione membro inizia la ricerca in corrispondenza del record corrente e ricerca all'indietro verso l'inizio del recordset.  
  
 Se si desidera includere tutti i record per la ricerca (non solo quelli che soddisfano una condizione specifica) utilizzano una delle operazioni di spostamento per spostare da un record a altro. Per individuare un record in un recordset di tipo di tabella, chiamare il `Seek` funzione membro.  
  
 Se non si trova un record corrispondente ai criteri, il puntatore del record corrente è indeterminato, e `FindPrev` restituisce zero. Se il recordset contiene più di un record che soddisfano i criteri `FindFirst` individua la prima occorrenza, `FindNext` individua l'occorrenza successiva e così via.  
  
> [!CAUTION]
>  Se si modifica il record corrente, assicurarsi salvare le modifiche chiamando il `Update` funzione membro prima di passare a un altro record. Se si sposta in un altro record senza l'aggiornamento, le modifiche verranno perse senza alcun avviso.  
  
 Utilizzando una delle operazioni di ricerca non è uguale a chiamare `MoveFirst` o `MoveNext`, tuttavia, che rende semplicemente il primo o successivo record corrente senza specificare una condizione. È possibile seguire un'operazione di ricerca con un'operazione di spostamento.  
  
 Quando si utilizzano le operazioni di ricerca, tenere presente quanto segue:  
  
-   Se `Find` restituisce diverso da zero, il record corrente non è definito. In questo caso, è necessario posizionare il puntatore del record corrente nuovamente a un record valido.  
  
-   È possibile utilizzare un'operazione di ricerca con un recordset di tipo snapshot scorrimento forward-only.  
  
-   È consigliabile utilizzare il formato di data US (mese-giorno-anno) per la ricerca di campi che contengono date, anche se non si utilizza la versione di Stati Uniti del motore di database Microsoft Jet; in caso contrario, i record corrispondenti non sono disponibili.  
  
-   Quando si utilizzano database ODBC e dynaset grandi, si potrebbbe scoprire che utilizzano le operazioni di ricerca è lenta, specialmente quando si lavora con grandi set di record. È possibile migliorare le prestazioni tramite query SQL con personalizzato **ORDERBY** oppure **in cui** clausole, le query con parametri, o `CDaoQuerydef` gli oggetti che recuperano record indicizzati specifici.  
  
 Per informazioni correlate, vedere l'argomento "FindFirst, FindLast, FindNext, FindPrevious metodi" nella Guida di DAO.  
  
##  <a name="getabsoluteposition"></a>  CDaoRecordset::GetAbsolutePosition  
 Restituisce il numero del record corrente di un oggetto recordset.  
  
```  
long GetAbsolutePosition();
```  
  
### <a name="return-value"></a>Valore restituito  
 Intero compreso tra 0 e il numero di record del recordset. Corrisponde alla posizione ordinale del record corrente nel recordset.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà AbsolutePosition dell'oggetto DAO sottostante è in base zero. il valore 0 si riferisce al primo record del recordset. È possibile determinare il numero di record popolati del recordset chiamando [GetRecordCount](#getrecordcount). La chiamata `GetRecordCount` potrebbe richiedere del tempo perché deve accedervi tutti i record per determinare il conteggio.  
  
 Se non sono presenti record corrente, come quando non sono presenti record del recordset, - 1 viene restituito. Se il record corrente viene eliminato, non è definito il valore della proprietà AbsolutePosition e MFC genera un'eccezione se vi viene fatto riferimento. Per i recordset dynaset-type, i nuovi record vengono aggiunti alla fine della sequenza.  
  
> [!NOTE]
>  Questa proprietà non deve essere utilizzato come un numero di record di surrogati. I segnalibri sono ancora il modo consigliato per mantenere e tornare a una posizione specifica e l'unico modo per inserire il record corrente in tutti i tipi di oggetti recordset. In particolare, la posizione di un determinato record cambia quando vengono eliminati i record che la preceda. Non vi è alcuna garanzia che un determinato record avrà la stessa posizione assoluta se il recordset viene ricreato, in quanto l'ordine dei singoli record all'interno di un recordset non è garantita a meno che non venga creata con un'istruzione SQL utilizzando un  **ORDERBY** clausola.  
  
> [!NOTE]
>  Questa funzione membro è valida solo per dynaset-type e Recordset di tipo snapshot.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà AbsolutePosition" nella Guida di DAO.  
  
##  <a name="getbookmark"></a>  CDaoRecordset:: GetBookmark  
 Chiamare questa funzione membro per ottenere il valore di segnalibro in un record specifico.  
  
```  
COleVariant GetBookmark();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore che rappresenta il segnalibro sul record corrente.  
  
### <a name="remarks"></a>Note  
 Quando un oggetto recordset viene creato o aperto, ognuno dei relativi record contiene già un segnalibro univoco se li supporta. Chiamare `CanBookmark` per determinare se un oggetto recordset supporta segnalibri.  
  
 È possibile salvare il segnalibro per il record corrente assegnando il valore del segnalibro a un `COleVariant` oggetto. Per restituire rapidamente al record specifico in qualsiasi momento dopo lo spostamento in un record diverso, chiamare `SetBookmark` con un parametro corrispondente al valore di tale `COleVariant` oggetto.  
  
> [!NOTE]
>  La chiamata [Requery](#requery) segnalibri DAO viene modificato.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Bookmark" nella Guida di DAO.  
  
##  <a name="getcachesize"></a>  CDaoRecordset::GetCacheSize  
 Chiamare questa funzione membro per ottenere il numero di record memorizzati nella cache.  
  
```  
long GetCacheSize();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che specifica il numero di record in un recordset di tipo dynaset contenente i dati in locale da memorizzare nella cache da un'origine dati ODBC.  
  
### <a name="remarks"></a>Note  
 Dati la memorizzazione nella cache migliora le prestazioni di un'applicazione che recupera dati da un server remoto tramite gli oggetti recordset di tipo dynaset. Una cache è uno spazio nella memoria locale che contiene i dati recuperati dal server di più di recente nel caso in cui i dati verranno nuovamente richiesto durante l'esecuzione dell'applicazione. Quando vengono richiesti dati, il motore di database Microsoft Jet controlla innanzitutto la cache per i dati richiesti anziché doverli recuperare dal server, che richiede più tempo. Dati non provengono da un'origine dati ODBC non vengono salvati nella cache.  
  
 Qualsiasi origine dati ODBC, ad esempio una tabella collegata, può avere una cache locale.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà CacheSize e CacheStart" nella Guida di DAO.  
  
##  <a name="getcachestart"></a>  CDaoRecordset::GetCacheStart  
 Chiamare questa funzione membro per ottenere il valore del segnalibro del primo record del recordset da memorizzare nella cache.  
  
```  
COleVariant GetCacheStart();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `COleVariant` che specifica il segnalibro del primo record del recordset da memorizzare nella cache.  
  
### <a name="remarks"></a>Note  
 Il motore di database Microsoft Jet richiede record all'interno dell'intervallo di cache dalla cache e richiede i record compreso nell'intervallo della cache dal server.  
  
> [!NOTE]
>  Record recuperati dalla cache non riflettono le modifiche apportate contemporaneamente all'origine dati da altri utenti.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà CacheSize e CacheStart" nella Guida di DAO.  
  
##  <a name="getcurrentindex"></a>  CDaoRecordset::GetCurrentIndex  
 Chiamare questa funzione membro per determinare l'indice attualmente in uso in un tipo di tabella indicizzato `CDaoRecordset` oggetto.  
  
```  
CString GetCurrentIndex();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` contenente il nome dell'indice attualmente in uso un recordset di tipo di tabella. Restituisce una stringa vuota se non è stato impostato alcun indice.  
  
### <a name="remarks"></a>Note  
 Questo indice è la base per ordinare i record in un recordset di tipo di tabella e viene utilizzato il [Seek](#seek) funzione membro per individuare i record.  
  
 Un `CDaoRecordset` oggetto può avere più di un indice, ma può utilizzare un solo indice alla volta (anche se una [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) oggetto può avere molti indici definiti su di esso).  
  
 Per informazioni correlate, vedere l'argomento "Oggetto Index" e la definizione "indice corrente" nella Guida di DAO.  
  
##  <a name="getdatecreated"></a>  CDaoRecordset::GetDateCreated  
 Chiamare questa funzione membro per recuperare la data e ora di che creazione di una tabella di base.  
  
```  
COleDateTime GetDateCreated();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto contenente la data e ora di creazione della tabella di base.  
  
### <a name="remarks"></a>Note  
 Impostazioni di data e ora derivano dal computer in cui è stata creata la tabella di base.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.  
  
##  <a name="getdatelastupdated"></a>  CDaoRecordset::GetDateLastUpdated  
 Chiamare questa funzione membro per recuperare la data e ora del che ultimo aggiornamento dello schema.  
  
```  
COleDateTime GetDateLastUpdated();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto contenente la data e ora dell'ultimo aggiornamento della struttura della tabella di base (schema).  
  
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
 Se un recordset viene creato senza un puntatore a un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md), questo percorso viene utilizzato dal recordset per aprire il database predefinito. Per impostazione predefinita, questa funzione restituisce una stringa vuota. Il valore di `CDaoRecordset` da un recordset di tipo snapshot non è interessato dalle modifiche nelle tabelle sottostanti.  
  
 Il valore di \\\\ da un tipo di tabella recordset riflette il numero approssimativo di record nella tabella ed è interessato immediatamente come record della tabella vengono aggiunti ed eliminati.  
  
 [!code-cpp[NVC_MFCDatabase#4](../../mfc/codesnippet/cpp/cdaorecordset-class_4.cpp)]  
  
##  <a name="getdefaultsql"></a>  Un recordset record senza alcuna restituisce un valore pari a 0.  
 Quando si utilizzano tabelle collegate o database ODBC,  restituisce sempre - 1.  
  
```  
virtual CString GetDefaultSQL();
```  
  
### <a name="return-value"></a>Valore restituito  
 La chiamata di `CString` funzione membro su un recordset Reimposta il valore di  come se fosse eseguita nuovamente la query.  
  
### <a name="remarks"></a>Note  
 Potrebbe trattarsi di un nome di tabella o di un'istruzione SQL **SELECT**.  
  
 Chiamare questa funzione membro per ottenere l'istruzione SQL che è stata utilizzata per selezionare i record del recordset quando è stato aperto.  
  
 Oggetto [ che](#open) contiene l'istruzione SQL.  
  
##  <a name="geteditmode"></a>  CDaoRecordset::GetEditMode  
 La stringa restituita da  è in genere diverso da qualsiasi stringa passati al recordset nel lpszSQL parametro per il aprire funzione membro.  
  
```  
short GetEditMode();
```  
  
### <a name="return-value"></a>Valore restituito  
 In questo modo il recordset crea un'istruzione SQL completa in base a ciò che è passato a , specificato con ClassWizard e ciò che è stato specificato nel m_strFilter e m_strSort membri dati.  
  
### <a name="remarks"></a>Note  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|**Chiamare questa funzione membro solo dopo la chiamata **.**|Per informazioni correlate, vedere l'argomento "Proprietà SQL" nella Guida di DAO.|  
|**CDaoRecordset::GetType**|`Edit` Chiamare questa funzione membro dopo l'apertura del recordset per determinare il tipo dell'oggetto recordset.|  
|**Uno dei valori seguenti che indica il tipo di un set di record:**|`AddNew` Chiamare questa funzione membro dopo l'apertura del recordset per determinare il tipo dell'oggetto recordset.|  
  
 dbOpenTable recordset di tipo di tabella  
  
##  <a name="getfieldcount"></a>  dbOpenDynaset</a> tipo Dynaset  
 dbOpenSnapshot recordset di tipo Snapshot  
  
```  
short GetFieldCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Per informazioni correlate, vedere l'argomento "Proprietà di tipo" nella Guida di DAO.  
  
### <a name="remarks"></a>Note  
 Per informazioni correlate, vedere l'argomento "Proprietà Count" nella Guida di DAO.  
  
##  <a name="getfieldinfo"></a>  CDaoRecordset::GetFieldInfo  
 CDaoRecordset::GetValidationRule  
  
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
 *nIndex*  
 Chiamare questa funzione membro per determinare la regola utilizzata per convalidare i dati.  
  
 *FieldInfo*  
 Un riferimento a un [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) struttura.  
  
 *dwInfoOptions*  
 Oggetto  oggetto che contiene un valore che convalida i dati in un record come viene modificato o aggiunto a una tabella. Questa regola è basata su testo e viene applicata ogni volta che la tabella sottostante è stata modificata. Se i dati non validi, MFC genera un'eccezione.  
  
- `AFX_DAO_PRIMARY_INFO` Il messaggio di errore restituito è il testo della proprietà messaggio di errore dell'oggetto campo sottostante, se specificato, o il testo dell'espressione specificata dalla proprietà ValidationRule dell'oggetto campo sottostante.  
  
- `AFX_DAO_SECONDARY_INFO` Le informazioni primarie, oltre a: posizione ordinale, richiesto, consentire Zero tabella di origine esterna nome, il campo di origine, lunghezza, ordine di ordinamento,  
  
- `AFX_DAO_ALL_INFO` È possibile chiamare `AFX_DAO_ALL_INFO`GetValidationText per ottenere il testo del messaggio di errore.  
  
 *lpszName*  
 Nome del campo.  
  
### <a name="remarks"></a>Note  
 Una versione della funzione consente di cercare un campo in base all'indice. L'altra versione consente di cercare un campo in base al nome.  
  
 Per una descrizione delle informazioni restituite, vedere la [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella descrizione del *dwInfoOptions*. Quando si richiedono informazioni su un unico livello, ottenere informazioni dei livelli precedenti oltre.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Attributes" nella Guida di DAO.  
  
##  <a name="getfieldvalue"></a>  Ad esempio, un campo in un record che richiede il giorno del mese potrebbe avere una regola di convalida, ad esempio "BETWEEN giorno 1 e 31."  
 CDaoRecordset::GetValidationText  
  
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
 *lpszName*  
 Chiamare questa funzione membro per recuperare il testo della proprietà messaggio di errore dell'oggetto campo sottostante.  
  
 *varValue*  
 CDaoRecordset::IsBOF`COleVariant`  
  
 *nIndex*  
 Chiamare questa funzione membro prima che lo scorrimento di record a record sapere se sono già state completate prima del primo record del recordset.  
  
### <a name="return-value"></a>Valore restituito  
 Le due versioni di `GetFieldValue` che restituiscono un valore restituiscono un oggetto [COleVariant](../../mfc/reference/colevariant-class.md) che contiene il valore di un campo.  
  
### <a name="remarks"></a>Note  
 È inoltre possibile chiamare  insieme a  per determinare se il recordset contiene record o è vuoto.  
  
> [!NOTE]
>  Immediatamente dopo la chiamata `COleVariant`, se il recordset non contiene record, `COleVariant` restituisce diverso da zero. Le ultime versioni di questa funzione sono mantenute per compatibilità con le versioni precedenti.  
  
 Utilizzare `GetFieldValue` e [SetFieldValue](#setfieldvalue) per associare dinamicamente i campi in fase di esecuzione anziché le colonne che si associano staticamente utilizzando il meccanismo [DoFieldExchange](#dofieldexchange).  
  
 `GetFieldValue` Se `GetFieldValue` restituisce diverso da zero e si chiama `DoFieldExchange`, viene generata un'eccezione. Ad esempio, utilizzare `GetFieldValue` per recuperare un valore che è necessario solo su richiesta e assegnare tale chiamata a un pulsante "Ulteriori informazioni" nell'interfaccia.  
  
 Per informazioni correlate, vedere gli argomenti "Campo oggetto" e "Proprietà Value" nella Guida di DAO.  
  
##  <a name="getindexcount"></a>  CDaoRecordset::GetIndexCount  
 Chiamare questa funzione membro per determinare il numero di indici disponibili nel recordset tipo di tabella.  
  
```  
short GetIndexCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero degli indici del recordset di tipo di tabella.  
  
### <a name="remarks"></a>Note  
 `GetIndexCount` è utile per l'esecuzione di ciclo in tutti gli indici nel recordset. A tale scopo, utilizzare `GetIndexCount` in combinazione con [GetIndexInfo](#getindexinfo). Se si chiama questa funzione membro nel tipo dynaset o Recordset di tipo snapshot, MFC genera un'eccezione.  
  
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
 *nIndex*  
 Indice in base zero nella raccolta di indici della tabella, per la ricerca in base alla posizione numerica.  
  
 *indexinfo*  
 Un riferimento a un [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) struttura.  
  
 *dwInfoOptions*  
 Opzioni che specificano le informazioni sull'indice da recuperare. Questa regola è basata su testo e viene applicata ogni volta che la tabella sottostante è stata modificata. Se i dati non validi, MFC genera un'eccezione.  
  
- `AFX_DAO_PRIMARY_INFO` (Impostazione predefinita) Campi nome, informazioni di campo,  
  
- `AFX_DAO_SECONDARY_INFO` Informazioni primarie, oltre a: database primario, Unique, Clustered, IgnoreNulls, obbligatorio, esterna  
  
- `AFX_DAO_ALL_INFO` Le informazioni primarie e secondarie, oltre a: Distinct Count  
  
 *lpszName*  
 Un puntatore al nome dell'oggetto, indice per la ricerca in base al nome.  
  
### <a name="remarks"></a>Note  
 Una versione della funzione consente di cercare un indice in base alla posizione nella raccolta. L'altra versione consente di cercare un indice in base al nome.  
  
 Per una descrizione delle informazioni restituite, vedere la [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella descrizione del *dwInfoOptions*. Quando si richiedono informazioni su un unico livello, ottenere informazioni dei livelli precedenti oltre.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Attributes" nella Guida di DAO.  
  
##  <a name="getlastmodifiedbookmark"></a>  CDaoRecordset::GetLastModifiedBookmark  
 Chiamare questa funzione membro per recuperare il segnalibro del record più recente aggiunto o modificato.  
  
```  
COleVariant GetLastModifiedBookmark();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `COleVariant` contenente un segnalibro che indica l'ultimo record aggiunto o modificato.  
  
### <a name="remarks"></a>Note  
 Quando un oggetto recordset viene creato o aperto, ognuno dei relativi record contiene già un segnalibro univoco se li supporta. Chiamare [GetBookmark](#getbookmark) per determinare se il set di record supporta segnalibri. Se il recordset non supporta i segnalibri, un `CDaoException` viene generata un'eccezione.  
  
 Quando si aggiunge un record, viene visualizzato alla fine del recordset e non è il record corrente. Per rendere il nuovo record corrente, chiamare `GetLastModifiedBookmark` e quindi chiamare `SetBookmark` da restituire per il record appena aggiunto.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà LastModified" nella Guida di DAO.  
  
##  <a name="getlockingmode"></a>  CDaoRecordset::GetLockingMode  
 Chiamare questa funzione membro per determinare il tipo di blocco attivo per il recordset.  
  
```  
BOOL GetLockingMode();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il tipo di blocco è associato alla concorrenza pessimistica, in caso contrario 0 per il blocco di record ottimistica.  
  
### <a name="remarks"></a>Note  
 Quando il blocco pessimistico è attiva, la pagina di dati che contiene il record che si sta modificando è bloccato, non appena si chiama il [modifica](#edit) funzione membro. La pagina viene sbloccata quando si chiama il [aggiornamento](#update) oppure [Chiudi](#close) funzione membro o una delle operazioni di spostamento o ricerca.  
  
 Quando il blocco ottimistico, la pagina di dati che contiene il record viene bloccata solo mentre il record venga aggiornato con il `Update` funzione membro.  
  
 Quando si utilizzano origini dati ODBC, la modalità di blocco è sempre ottimistica.  
  
 Per informazioni correlate, vedere gli argomenti "Proprietà LockEdits" e "Blocco comportamento in applicazioni di multiutente" nella Guida di DAO.  
  
##  <a name="getname"></a>  CDaoRecordset::GetName  
 Chiamare questa funzione membro per recuperare il nome del recordset.  
  
```  
CString GetName();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` contenente il nome del recordset.  
  
### <a name="remarks"></a>Note  
 Il nome del recordset deve iniziare con una lettera e può contenere un massimo di 40 caratteri. Può includere numeri e caratteri di sottolineatura caratteri, ma non può includere spazi o segni di punteggiatura.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Name" nella Guida di DAO.  
  
##  <a name="getparamvalue"></a>  CDaoRecordset::GetParamValue  
 Chiamare questa funzione membro per recuperare il valore corrente del parametro specificato archiviato nell'oggetto DAOParameter sottostante.  
  
```  
virtual COleVariant GetParamValue(int nIndex);  
virtual COleVariant GetParamValue(LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Posizione numerica del parametro nell'oggetto DAOParameter sottostante.  
  
 *lpszName*  
 Il nome del parametro il cui valore desiderato.  
  
### <a name="return-value"></a>Valore restituito  
 Un oggetto della classe [COleVariant](../../mfc/reference/colevariant-class.md) che contiene il valore del parametro.  
  
### <a name="remarks"></a>Note  
 Il parametro è possibile accedere in base al nome o in base alla posizione numerica nella raccolta.  
  
 Per informazioni correlate, vedere l'argomento "Oggetto Parameter" nella Guida di DAO.  
  
##  <a name="getpercentposition"></a>  CDaoRecordset:: GetPercentPosition  
 Quando si lavora con un tipo dynaset o recordset di tipo snapshot, se si chiama `GetPercentPosition` prima di popolare completamente il recordset, la quantità di spostamento è correlata al numero di record è possibile accedere come indicato dalla chiamata [GetRecordCount](#getrecordcount).  
  
```  
float GetPercentPosition();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un numero compreso tra 0 e 100 che indica la posizione approssimativa del record corrente nell'oggetto recordset in base a una percentuale dei record del recordset.  
  
### <a name="remarks"></a>Note  
 È possibile spostare all'ultimo record chiamando [MoveLast](#movelast) per completa la popolazione di tutti i recordset, ma ciò potrebbe richiedere una quantità significativa di tempo.  
  
 È possibile chiamare `GetPercentPosition` su tutti i tre tipi di oggetti recordset, incluse le tabelle senza indici. Tuttavia, non è possibile chiamare `GetPercentPosition` in snapshot scorrimento forward-only o in un recordset aperto da una query pass-through su un database esterno. Se nessun record corrente o he record corrente è stato eliminato, un `CDaoException` viene generata un'eccezione.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà PercentPosition" nella Guida di DAO.  
  
##  <a name="getrecordcount"></a>  CDaoRecordset::GetRecordCount  
 Chiamare questa funzione membro per scoprire il numero di record in un recordset è stato effettuato l'accesso.  
  
```  
long GetRecordCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di record è possibile accedere in un oggetto recordset.  
  
### <a name="remarks"></a>Note  
 `GetRecordCount` non indica il numero di record è contenuto in un tipo dynaset o un recordset di tipo snapshot fino a quando non sono stato effettuato l'accesso tutti i record. Questa chiamata di funzione membro può richiedere una quantità significativa di tempo per il completamento.  
  
 Dopo aver eseguito l'ultimo record, il valore restituito indica il numero totale di record non eliminati nel recordset. Per forzare l'ultimo record a cui accedere, chiamare il `MoveLast` o `FindLast` funzione membro per il recordset. È inoltre possibile utilizzare un conteggio di SQL per determinare il numero approssimativo di record restituiti dalla query.  
  
 Poiché l'applicazione elimina i record in un recordset di tipo dynaset, il valore restituito di `GetRecordCount` diminuisce. Tuttavia, i record eliminati da altri utenti non vengono riflesse da `GetRecordCount` fino a quando il record corrente è posizionato su un record eliminato. Se si esegue una transazione che interessa il functoid Conteggio record e successivamente eseguire il rollback della transazione, `GetRecordCount` non riflette il numero effettivo di record rimanenti.  
  
 Il valore di `GetRecordCount` da un recordset di tipo snapshot non è interessato dalle modifiche nelle tabelle sottostanti.  
  
 Il valore di `GetRecordCount` da un tipo di tabella recordset riflette il numero approssimativo di record nella tabella ed è interessato immediatamente come record della tabella vengono aggiunti ed eliminati.  
  
 Un recordset record senza alcuna restituisce un valore pari a 0. Quando si utilizzano tabelle collegate o database ODBC, `GetRecordCount` restituisce sempre - 1. La chiamata di `Requery` funzione membro su un recordset Reimposta il valore di `GetRecordCount` come se fosse eseguita nuovamente la query.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà RecordCount" nella Guida di DAO.  
  
##  <a name="getsql"></a>  CDaoRecordset::GetSQL  
 Chiamare questa funzione membro per ottenere l'istruzione SQL che è stata utilizzata per selezionare i record del recordset quando è stato aperto.  
  
```  
CString GetSQL() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` che contiene l'istruzione SQL.  
  
### <a name="remarks"></a>Note  
 In genere si tratterà di un database SQL **selezionare** istruzione.  
  
 La stringa restituita da `GetSQL` è in genere diverso da qualsiasi stringa passati al recordset nel *lpszSQL* parametro per il [aprire](#open) funzione membro. In questo modo il recordset crea un'istruzione SQL completa in base a ciò che è passato a `Open`, specificato con ClassWizard e ciò che è stato specificato nel [m_strFilter](#m_strfilter) e [m_strSort](#m_strsort) membri dati.  
  
> [!NOTE]
>  Chiamare questa funzione membro solo dopo la chiamata `Open`.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà SQL" nella Guida di DAO.  
  
##  <a name="gettype"></a>  CDaoRecordset::GetType  
 Chiamare questa funzione membro dopo l'apertura del recordset per determinare il tipo dell'oggetto recordset.  
  
```  
short GetType();
```  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori seguenti che indica il tipo di un set di record:  
  
- **dbOpenTable** recordset di tipo di tabella  
  
- **dbOpenDynaset** tipo Dynaset  
  
- **dbOpenSnapshot** recordset di tipo Snapshot  
  
### <a name="remarks"></a>Note  
 Per informazioni correlate, vedere l'argomento "Proprietà di tipo" nella Guida di DAO.  
  
##  <a name="getvalidationrule"></a>  CDaoRecordset::GetValidationRule  
 Chiamare questa funzione membro per determinare la regola utilizzata per convalidare i dati.  
  
```  
CString GetValidationRule();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` oggetto che contiene un valore che convalida i dati in un record come viene modificato o aggiunto a una tabella.  
  
### <a name="remarks"></a>Note  
 Questa regola è basata su testo e viene applicata ogni volta che la tabella sottostante è stata modificata. Se i dati non validi, MFC genera un'eccezione. Il messaggio di errore restituito è il testo della proprietà messaggio di errore dell'oggetto campo sottostante, se specificato, o il testo dell'espressione specificata dalla proprietà ValidationRule dell'oggetto campo sottostante. È possibile chiamare [GetValidationText](#getvalidationtext) per ottenere il testo del messaggio di errore.  
  
 Ad esempio, un campo in un record che richiede il giorno del mese potrebbe avere una regola di convalida, ad esempio "BETWEEN giorno 1 e 31."  
  
 Per informazioni correlate, vedere l'argomento "Proprietà ValidationRule" nella Guida di DAO.  
  
##  <a name="getvalidationtext"></a>  CDaoRecordset::GetValidationText  
 Chiamare questa funzione membro per recuperare il testo della proprietà messaggio di errore dell'oggetto campo sottostante.  
  
```  
CString GetValidationText();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` oggetto contenente il testo del messaggio che viene visualizzato se il valore di un campo non soddisfa la regola di convalida dell'oggetto campo sottostante.  
  
### <a name="remarks"></a>Note  
 Per informazioni correlate, vedere l'argomento "Proprietà di messaggio di errore" nella Guida di DAO.  
  
##  <a name="isbof"></a>  CDaoRecordset::IsBOF  
 Chiamare questa funzione membro prima che lo scorrimento di record a record sapere se sono già state completate prima del primo record del recordset.  
  
```  
BOOL IsBOF() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il recordset non contiene record o se è eseguito lo scorrimento all'indietro prima del primo record; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È inoltre possibile chiamare `IsBOF` insieme a `IsEOF` per determinare se il recordset contiene record o è vuoto. Immediatamente dopo la chiamata `Open`, se il recordset non contiene record, `IsBOF` restituisce diverso da zero. Quando si apre un recordset con almeno un record, il primo record è il record corrente e `IsBOF` restituisce 0.  
  
 Se il primo record è il record corrente e si chiama `MovePrev`, `IsBOF` successivamente restituirà diverso da zero. Se `IsBOF` restituisce diverso da zero e si chiama `MovePrev`, viene generata un'eccezione. Se `IsBOF` restituisce un valore diverso da zero, il record corrente è definito e qualsiasi operazione che richiede un record corrente provocherà un'eccezione.  
  
 Effetto dei metodi specifici sul `IsBOF` e `IsEOF` impostazioni:  
  
-   La chiamata `Open*` internamente imposta il primo record del recordset il record corrente chiamando `MoveFirst`. Pertanto, la chiamata `Open` su un set vuoto di cause record `IsBOF` e `IsEOF` per restituire diverso da zero. (Vedere la tabella seguente per il comportamento di un errore `MoveFirst` o `MoveLast` chiamare.)  
  
-   Tutte le operazioni di spostamento che riescono a trovare un record causano entrambi `IsBOF` e `IsEOF` restituirà 0.  
  
-   Un' `AddNew` chiamata seguita da un' `Update` chiamata che è stato inserito un nuovo record farà `IsBOF` per restituire 0, ma solo se `IsEOF` già è diverso da zero. Lo stato di `IsEOF` sempre rimarrà invariata. Come definito dal motore di database Microsoft Jet, il puntatore del record corrente di un recordset vuoto è alla fine di un file, pertanto qualsiasi nuovo record viene inserito dopo il record corrente.  
  
-   Qualsiasi `Delete` chiamata, anche se rimuove il record rimanente solo da un recordset non modificherà il valore di `IsBOF` o `IsEOF`.  
  
 Questa tabella mostra le operazioni di spostamento consentite con diverse combinazioni di `IsBOF` /  `IsEOF`.  
  
||MoveFirst, MoveLast|MovePrev,<br /><br /> Spostare < 0|Spostare 0|MoveNext,<br /><br /> Spostare > 0|  
|------|-------------------------|-----------------------------|------------|-----------------------------|  
|`IsBOF`= diverso da zero,<br /><br /> `IsEOF`=0|Allowed|Eccezione|Eccezione|Allowed|  
|`IsBOF`=0,<br /><br /> `IsEOF`= diverso da zero|Allowed|Allowed|Eccezione|Eccezione|  
|Sia diverso da zero|Eccezione|Eccezione|Eccezione|Eccezione|  
|Entrambi 0|Allowed|Allowed|Allowed|Allowed|  
  
 Consentire un'operazione di spostamento non significa che l'operazione individuerà correttamente un record. Indica semplicemente che un tentativo di eseguire l'operazione di spostamento specificata è consentito e non genererà un'eccezione. Il valore di `IsBOF` e `IsEOF` funzioni membro possono cambiare in seguito al tentativo di spostamento.  
  
 L'effetto delle operazioni di spostamento non viene individuato un record per il valore di `IsBOF` e `IsEOF` impostazioni è illustrato nella tabella seguente.  
  
||IsBOF|IsEOF|  
|------|-----------|-----------|  
|`MoveFirst`, `MoveLast`|Diverso da zero|Diverso da zero|  
|`Move` 0|Nessuna modifica|Nessuna modifica|  
|`MovePrev`, `Move` < 0|Diverso da zero|Nessuna modifica|  
|`MoveNext`, `Move` > 0|Nessuna modifica|Diverso da zero|  
  
 Per informazioni correlate, vedere l'argomento "Proprietà BOF ed EOF" nella Guida di DAO.  
  
##  <a name="isdeleted"></a>  CDaoRecordset::IsDeleted  
 Chiamare questa funzione membro per determinare se il record corrente è stato eliminato.  
  
```  
BOOL IsDeleted() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il recordset è posizionato su un record eliminato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se si scorre a un record e `IsDeleted` restituisce **TRUE** (diverso da zero), quindi è necessario scorrere verso un altro record prima di poter eseguire altre operazioni sul recordset.  
  
> [!NOTE]
>  Non è necessario controllare lo stato eliminato per i record in un recordset snapshot o tipo di tabella. Poiché i record non possono essere eliminati da uno snapshot, non è necessario chiamare `IsDeleted`. Per i recordset di tipo di tabella, i record eliminati vengono effettivamente rimossi dal recordset. Una volta che un record è stato eliminato, da parte dell'utente, un altro utente, o in un altro oggetto recordset, non è possibile scorrere indietro al record specifico. Pertanto, non è necessario chiamare `IsDeleted`.  
  
 Quando si elimina un record da un dynaset, viene rimosso dal recordset e non sarà possibile scorrere indietro al record specifico. Tuttavia, se un record in un dynaset viene eliminato da un altro utente o in un altro oggetto recordset in base alla tabella stessa `IsDeleted` restituirà **TRUE** quando in un secondo momento lo scorrimento a tale record.  
  
 Per informazioni correlate, vedere gli argomenti "Eliminare Method", "Property LastModified" e "Proprietà EditMode" nella Guida di DAO.  
  
##  <a name="iseof"></a>  CDaoRecordset::IsEOF  
 Chiamare questa funzione membro durante lo scorrimento di record al record di informazioni se sono stati superati dell'ultimo record del recordset.  
  
```  
BOOL IsEOF() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il recordset non contiene record o se è eseguito lo scorrimento oltre l'ultimo record; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È inoltre possibile chiamare `IsEOF` per determinare se il recordset contiene record o è vuoto. Immediatamente dopo la chiamata `Open`, se il recordset non contiene record, `IsEOF` restituisce diverso da zero. Quando si apre un recordset con almeno un record, il primo record è il record corrente e `IsEOF` restituisce 0.  
  
 Se l'ultimo record è il record corrente quando si chiama `MoveNext`, `IsEOF` successivamente restituirà diverso da zero. Se `IsEOF` restituisce diverso da zero e si chiama `MoveNext`, viene generata un'eccezione. Se `IsEOF` restituisce un valore diverso da zero, il record corrente è definito e qualsiasi operazione che richiede un record corrente provocherà un'eccezione.  
  
 Effetto dei metodi specifici sul `IsBOF` e `IsEOF` impostazioni:  
  
-   La chiamata `Open` internamente imposta il primo record del recordset il record corrente chiamando `MoveFirst`. Pertanto, la chiamata `Open` su un set vuoto di cause record `IsBOF` e `IsEOF` per restituire diverso da zero. (Vedere la tabella seguente per il comportamento di un errore `MoveFirst` chiamare.)  
  
-   Tutte le operazioni di spostamento che riescono a trovare un record causano entrambi `IsBOF` e `IsEOF` restituirà 0.  
  
-   Un' `AddNew` chiamata seguita da un' `Update` chiamata che è stato inserito un nuovo record farà `IsBOF` per restituire 0, ma solo se `IsEOF` già è diverso da zero. Lo stato di `IsEOF` sempre rimarrà invariata. Come definito dal motore di database Microsoft Jet, il puntatore del record corrente di un recordset vuoto è alla fine di un file, pertanto qualsiasi nuovo record viene inserito dopo il record corrente.  
  
-   Qualsiasi `Delete` chiamata, anche se rimuove il record rimanente solo da un recordset non modificherà il valore di `IsBOF` o `IsEOF`.  
  
 Questa tabella mostra le operazioni di spostamento consentite con diverse combinazioni di `IsBOF` /  `IsEOF`.  
  
||MoveFirst, MoveLast|MovePrev,<br /><br /> Spostare < 0|Spostare 0|MoveNext,<br /><br /> Spostare > 0|  
|------|-------------------------|-----------------------------|------------|-----------------------------|  
|`IsBOF`= diverso da zero,<br /><br /> `IsEOF`=0|Allowed|Eccezione|Eccezione|Allowed|  
|`IsBOF`=0,<br /><br /> `IsEOF`= diverso da zero|Allowed|Allowed|Eccezione|Eccezione|  
|Sia diverso da zero|Eccezione|Eccezione|Eccezione|Eccezione|  
|Entrambi 0|Allowed|Allowed|Allowed|Allowed|  
  
 Consentire un'operazione di spostamento non significa che l'operazione individuerà correttamente un record. Indica semplicemente che un tentativo di eseguire l'operazione di spostamento specificata è consentito e non genererà un'eccezione. Il valore di `IsBOF` e `IsEOF` funzioni membro possono cambiare in seguito al tentativo di spostamento.  
  
 L'effetto delle operazioni di spostamento non viene individuato un record per il valore di `IsBOF` e `IsEOF` impostazioni è illustrato nella tabella seguente.  
  
||IsBOF|IsEOF|  
|------|-----------|-----------|  
|`MoveFirst`, `MoveLast`|Diverso da zero|Diverso da zero|  
|`Move` 0|Nessuna modifica|Nessuna modifica|  
|`MovePrev`, `Move` < 0|Diverso da zero|Nessuna modifica|  
|`MoveNext`, `Move` > 0|Nessuna modifica|Diverso da zero|  
  
 Per informazioni correlate, vedere l'argomento "Proprietà BOF ed EOF" nella Guida di DAO.  
  
##  <a name="isfielddirty"></a>  CDaoRecordset::IsFieldDirty  
 Chiamare questa funzione membro per determinare se il membro dati di campo specificato del dynaset è stato contrassegnato come "dirty" (modificata).  
  
```  
BOOL IsFieldDirty(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 *PV*  
 Un puntatore a membro di dati di campo cui si desidera controllare, lo stato o **NULL** per determinare se uno dei campi è dirty.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il membro dati di campo specificato è contrassegnato come dirty; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 I dati in tutti i membri di dati dei campi modificati verranno trasferiti al record nell'origine dati quando il record corrente viene aggiornato da una chiamata ai `Update` funzione membro `CDaoRecordset` (segue una chiamata a `Edit` o `AddNew`). Con questa Knowledge Base, è possibile eseguire ulteriori passaggi, ad esempio rimozione dei flag del membro dati di campo per contrassegnare la colonna in modo da non essere scritti per l'origine dati.  
  
 `IsFieldDirty` viene implementata tramite `DoFieldExchange`.  
  
##  <a name="isfieldnull"></a>  CDaoRecordset::IsFieldNull  
 Chiamare questa funzione membro per determinare se il membro dati di campo specificato di un set di record è stato contrassegnato come Null.  
  
```  
BOOL IsFieldNull(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 *PV*  
 Un puntatore a membro di dati di campo cui si desidera controllare, lo stato o **NULL** per determinare se uno dei campi sono Null.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il membro dati di campo specificato è contrassegnato come Null. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 (Nella terminologia dei database, Null significa "non having alcun valore" e non è identico **NULL** in C++.) Se un membro dati del campo viene contrassegnato come Null, viene interpretato come una colonna del record corrente per cui non è disponibile alcun valore.  
  
> [!NOTE]
>  In alcune situazioni, utilizzando `IsFieldNull` può risultare inefficiente, come illustrato nell'esempio di codice seguente:  
  
 [!code-cpp[NVC_MFCDatabase#5](../../mfc/codesnippet/cpp/cdaorecordset-class_5.cpp)]  
  
> [!NOTE]
>  Se si utilizza binding record dinamico, senza che deriva da `CDaoRecordset`, assicurarsi di utilizzare **VT_NULL** come illustrato nell'esempio.  
  
##  <a name="isfieldnullable"></a>  CDaoRecordset::IsFieldNullable  
 Chiamare questa funzione membro per determinare se il membro dati di campo specificato ammette "" (può essere impostata su un valore Null. C++ **NULL** non corrisponde al valore Null, ovvero nella terminologia dei database, "non having alcun valore").  
  
```  
BOOL IsFieldNullable(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 *PV*  
 Un puntatore a membro di dati di campo cui si desidera controllare, lo stato o **NULL** per determinare se uno dei campi sono Null.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il membro dati di campo specificato può essere Null. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un campo che non può essere Null deve essere un valore. Se si tenta di impostare tale campo su Null quando si aggiunge o aggiorna un record, l'origine dati rifiuta l'aggiunta o aggiornamento, e `Update` genererà un'eccezione. L'eccezione si verifica quando si chiama `Update`, non quando si chiama `SetFieldNull`.  
  
##  <a name="isopen"></a>  CDaoRecordset::IsOpen  
 Chiamare questa funzione membro per determinare se il recordset è aperto.  
  
```  
BOOL IsOpen() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto recordset `Open` o `Requery` funzione membro è stato precedentemente chiamata e il recordset non è stata chiusa; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_bcheckcachefordirtyfields"></a>  CDaoRecordset:: M_bcheckcachefordirtyfields  
 Contiene un flag che indica se i campi memorizzati nella cache vengono automaticamente contrassegnati come dirty (modificati) e Null.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita il flag **TRUE**. L'impostazione di questo membro dati consente di controllare l'intero meccanismo del doppio buffer. Se si imposta il flag su **TRUE**, è possibile disattivare la memorizzazione nella cache su base campo per campo utilizzando il meccanismo di DFX. Se si imposta il flag su **FALSE**, è necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.  
  
 Impostare il membro dati prima di chiamare `Open`. Questo meccanismo è principalmente per facilità d'uso. Le prestazioni potrebbero essere più lente a causa il doppio buffer di campi man mano che vengono apportate modifiche.  
  
##  <a name="m_nfields"></a>  CDaoRecordset::m_nFields  
 Contiene il numero di membri di dati di campi della classe recordset e il numero di colonne selezionate dal recordset dall'origine dati.  
  
### <a name="remarks"></a>Note  
 È necessario inizializzare il costruttore della classe recordset `m_nFields` con il numero corretto di campi associati staticamente. ClassWizard scrive questa inizializzazione automaticamente quando si utilizza per dichiarare la classe del recordset. È anche possibile scrivere lo manualmente.  
  
 Il framework utilizza questo numero per gestire l'interazione tra i membri di dati di campo e le corrispondenti colonne del record corrente nell'origine dati.  
  
> [!NOTE]
>  Questo numero deve corrispondere al numero di colonne di output registrato in `DoFieldExchange` dopo una chiamata a `SetFieldType` con il parametro **CDaoFieldExchange::outputColumn**.  
  
 È possibile associare le colonne in modo dinamico per mezzo di `CDaoRecordset::GetFieldValue` e `CDaoRecordset::SetFieldValue`. Se in tal modo, non necessaria incrementare il conteggio in `m_nFields` in modo da riflettere il numero della funzione DFX chiama `DoFieldExchange` funzione membro.  
  
##  <a name="m_nparams"></a>  CDaoRecordset::m_nParams  
 Contiene il numero di membri di dati di parametro nella classe recordset, il numero di parametri passati con la query del recordset.  
  
### <a name="remarks"></a>Note  
 Se la classe recordset dispone di alcun membro dati di parametro, è necessario inizializzare il costruttore per la classe *m_nParams* con il numero corretto. Il valore di *m_nParams* valore predefinito è 0. Se si aggiungono membri dati di parametro, che è necessario eseguire manualmente, è necessario inoltre aggiungere manualmente un'inizializzazione nel costruttore della classe in modo da riflettere il numero di parametri (che deve essere grande almeno come il numero di ' segnaposto nel *m_strFilter*  oppure *m_strSort* stringa).  
  
 Quando Parametrizza la query del recordset, il framework utilizza questo numero.  
  
> [!NOTE]
>  Questo numero deve corrispondere al numero di "parametri" registrato in `DoFieldExchange` dopo una chiamata a `SetFieldType` con il parametro **CFieldExchange::param**.  
  
 Per informazioni correlate, vedere l'argomento "Oggetto Parameter" nella Guida di DAO.  
  
##  <a name="m_pdaorecordset"></a>  CDaoRecordset::m_pDAORecordset  
 Contiene un puntatore all'interfaccia OLE per l'oggetto recordset DAO sottostante il `CDaoRecordset` oggetto.  
  
### <a name="remarks"></a>Note  
 Usare l'indicatore di misura se è necessario accedere direttamente all'interfaccia DAO.  
  
 Per informazioni correlate, vedere l'argomento "Oggetto Recordset" nella Guida di DAO.  
  
##  <a name="m_pdatabase"></a>  CDaoRecordset::m_pDatabase  
 Contiene un puntatore al `CDaoDatabase` oggetto attraverso il quale il recordset è connesso a un'origine dati.  
  
### <a name="remarks"></a>Note  
 Questa variabile viene impostata in due modi. In genere, si passa un puntatore a un già aperta `CDaoDatabase` oggetto quando si costruisce l'oggetto recordset. Se si passa **NULL** invece `CDaoRecordset` crea un `CDaoDatabase` oggetto e lo apre. In entrambi i casi `CDaoRecordset` contiene il puntatore nella variabile.  
  
 In genere non direttamente dovrai usare il puntatore archiviato **m_pDatabase**. Se si scrive le estensioni personalizzate di `CDaoRecordset`, tuttavia, potrebbe essere necessario utilizzare il puntatore. Ad esempio, potrebbe essere necessario l'indicatore di misura se genera la propria `CDaoException`(s).  
  
 Per informazioni correlate, vedere l'argomento "Oggetto di Database" nella Guida di DAO.  
  
##  <a name="m_strfilter"></a>  CDaoRecordset::m_strFilter  
 Contiene una stringa che viene utilizzata per costruire il **in cui** clausola di un'istruzione SQL.  
  
### <a name="remarks"></a>Note  
 Non include la parola riservata **in cui** per filtrare il recordset. L'utilizzo di questo membro dati non è applicabile a recordset di tipo di tabella. L'utilizzo di **m_strFilter** non ha alcun effetto quando si apre un recordset utilizzando un `CDaoQueryDef` puntatore.  
  
 Utilizzare il formato di data statunitense (mese-giorno-anno) quando si filtrano i campi contenenti le date, anche se non si utilizza la versione di Stati Uniti del motore di database Microsoft Jet; in caso contrario, i dati non possono essere filtrati come previsto.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Filter" nella Guida di DAO.  
  
##  <a name="m_strsort"></a>  CDaoRecordset::m_strSort  
 Contiene una stringa contenente il **ORDERBY** clausola di un'istruzione SQL senza le parole riservate **ORDERBY**.  
  
### <a name="remarks"></a>Note  
 È possibile ordinare gli oggetti recordset di tipo dynaset e snapshot.  
  
 Non è possibile ordinare gli oggetti recordset di tipo di tabella. Per determinare l'ordinamento di un recordset di tipo di tabella, chiamare [SetCurrentIndex](#setcurrentindex).  
  
 L'utilizzo di *m_strSort* non ha alcun effetto quando si apre un recordset utilizzando un `CDaoQueryDef` puntatore.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà di ordinamento" nella Guida di DAO.  
  
##  <a name="move"></a>  CDaoRecordset:: Move  
 Chiamare questa funzione membro per posizionare il recordset *lRows* record dal record corrente.  
  
```  
virtual void Move(long lRows);
```  
  
### <a name="parameters"></a>Parametri  
 *lRows*  
 Il numero di record per spostarsi in avanti o indietro. I valori positivi spostano in avanti, verso la fine del recordset. I valori negativi spostano all'indietro, verso l'inizio.  
  
### <a name="remarks"></a>Note  
 È possibile spostare in avanti o indietro. `Move( 1 )` equivale a `MoveNext`, e `Move( -1 )` equivale a `MovePrev`.  
  
> [!CAUTION]
>  Chiamare uno del `Move` funzioni genera un'eccezione se il recordset non contiene record. In generale, chiamare entrambe `IsBOF` e `IsEOF` prima di un'operazione di spostamento per determinare se il recordset include alcun record. Dopo aver chiamato `Open` oppure `Requery`, chiamare `IsBOF` o `IsEOF`.  
  
> [!NOTE]
>  Se è eseguito lo scorrimento oltre l'inizio o alla fine del recordset ( `IsBOF` oppure `IsEOF` restituisce diverso da zero), una chiamata a `Move` genera un `CDaoException`.  
  
> [!NOTE]
>  Se si chiama uno qualsiasi del `Move` funzioni mentre il record corrente viene aggiornata o aggiunti, gli aggiornamenti vengono persi senza alcun avviso.  
  
 Quando si chiama `Move` su uno snapshot di scorrimento forward-only, di `lRows` parametro deve essere un numero intero positivo e segnalibri non sono consentiti, in modo da poter proseguire solo.  
  
 Per rendere il primo, ultimo, successivo o precedente a record di in un recordset, la chiamata corrente di record, il `MoveFirst`, `MoveLast`, `MoveNext`, o `MovePrev` funzione membro.  
  
 Per informazioni correlate, vedere gli argomenti "Spostare Method" e "MoveFirst, MoveLast, MoveNext e MovePrevious metodi" nella Guida di DAO.  
  
##  <a name="movefirst"></a>  CDaoRecordset::MoveFirst  
 Chiamare questa funzione membro per rendere il primo record del recordset (se presente) del record corrente.  
  
```  
void MoveFirst();
```  
  
### <a name="remarks"></a>Note  
 Non è necessario chiamare `MoveFirst` subito dopo l'apertura del recordset. In quel momento, il primo record (se presente) viene automaticamente il record corrente.  
  
> [!CAUTION]
>  Chiamare uno del `Move` funzioni genera un'eccezione se il recordset non contiene record. In generale, chiamare entrambe `IsBOF` e `IsEOF` prima di un'operazione di spostamento per determinare se il recordset include alcun record. Dopo aver chiamato `Open` oppure `Requery`, chiamare `IsBOF` o `IsEOF`.  
  
> [!NOTE]
>  Se si chiama uno qualsiasi del `Move` funzioni mentre il record corrente viene aggiornata o aggiunti, gli aggiornamenti vengono persi senza alcun avviso.  
  
 Utilizzare il `Move` funzioni spostarsi dal record a altro senza applicare una condizione. Utilizzare le operazioni di ricerca per individuare i record in un tipo dynaset o oggetto di tipo snapshot recordset che soddisfano una determinata condizione. Per individuare un record in un oggetto recordset di tipo di tabella, chiamare `Seek`.  
  
 Se il recordset si riferisce a un recordset di tipo di tabella, lo spostamento segue nell'indice della tabella corrente. È possibile impostare l'indice corrente usando la proprietà di indice dell'oggetto DAO sottostante. Se non si imposta l'indice corrente, l'ordine dei record restituiti è definito.  
  
 Se si chiama `MoveLast` su un oggetto recordset in base a una query SQL o querydef, la query viene forzata fino al completamento e l'oggetto recordset è completamente popolato.  
  
 Non è possibile chiamare il `MoveFirst` o `MovePrev` funzione membro con uno snapshot di scorrimento forward-only.  
  
 Per spostare la posizione dell'oggetto corrente di registrare in un oggetto recordset uno specifico numero di record in avanti o indietro, chiamare `Move`.  
  
 Per informazioni correlate, vedere gli argomenti "Spostare Method" e "MoveFirst, MoveLast, MoveNext e MovePrevious metodi" nella Guida di DAO.  
  
##  <a name="movelast"></a>  CDaoRecordset::MoveLast  
 Chiamare questa funzione membro per rendere l'ultimo record (se presente) del recordset il record corrente.  
  
```  
void MoveLast();
```  
  
### <a name="remarks"></a>Note  
  
> [!CAUTION]
>  Chiamare uno del `Move` funzioni genera un'eccezione se il recordset non contiene record. In generale, chiamare entrambe `IsBOF` e `IsEOF` prima di un'operazione di spostamento per determinare se il recordset include alcun record. Dopo aver chiamato `Open` oppure `Requery`, chiamare `IsBOF` o `IsEOF`.  
  
> [!NOTE]
>  Se si chiama uno qualsiasi del `Move` funzioni mentre il record corrente viene aggiornata o aggiunti, gli aggiornamenti vengono persi senza alcun avviso.  
  
 Utilizzare il `Move` funzioni spostarsi dal record a altro senza applicare una condizione. Utilizzare le operazioni di ricerca per individuare i record in un tipo dynaset o oggetto di tipo snapshot recordset che soddisfano una determinata condizione. Per individuare un record in un oggetto recordset di tipo di tabella, chiamare `Seek`.  
  
 Se il recordset si riferisce a un recordset di tipo di tabella, lo spostamento segue nell'indice della tabella corrente. È possibile impostare l'indice corrente usando la proprietà di indice dell'oggetto DAO sottostante. Se non si imposta l'indice corrente, l'ordine dei record restituiti è definito.  
  
 Se si chiama `MoveLast` su un oggetto recordset in base a una query SQL o querydef, la query viene forzata fino al completamento e l'oggetto recordset è completamente popolato.  
  
 Per spostare la posizione dell'oggetto corrente di registrare in un oggetto recordset uno specifico numero di record in avanti o indietro, chiamare `Move`.  
  
 Per informazioni correlate, vedere gli argomenti "Spostare Method" e "MoveFirst, MoveLast, MoveNext e MovePrevious metodi" nella Guida di DAO.  
  
##  <a name="movenext"></a>  CDaoRecordset::MoveNext  
 Chiamare questa funzione membro per rendere il successivo record del recordset il record corrente.  
  
```  
void MoveNext();
```  
  
### <a name="remarks"></a>Note  
 È consigliabile chiamare `IsBOF` prima di provare a passare al record precedente. Una chiamata a `MovePrev` , verrà generata una `CDaoException` se `IsBOF` restituisce diverso da zero, che indica che è già eseguito lo scorrimento prima del primo record o che nessun record sono stato selezionato per il recordset.  
  
> [!CAUTION]
>  Chiamare uno del `Move` funzioni genera un'eccezione se il recordset non contiene record. In generale, chiamare entrambe `IsBOF` e `IsEOF` prima di un'operazione di spostamento per determinare se il recordset include alcun record. Dopo aver chiamato `Open` oppure `Requery`, chiamare `IsBOF` o `IsEOF`.  
  
> [!NOTE]
>  Se si chiama uno qualsiasi del `Move` funzioni mentre il record corrente viene aggiornata o aggiunti, gli aggiornamenti vengono persi senza alcun avviso.  
  
 Utilizzare il `Move` funzioni spostarsi dal record a altro senza applicare una condizione. Utilizzare le operazioni di ricerca per individuare i record in un tipo dynaset o oggetto di tipo snapshot recordset che soddisfano una determinata condizione. Per individuare un record in un oggetto recordset di tipo di tabella, chiamare `Seek`.  
  
 Se il recordset si riferisce a un recordset di tipo di tabella, lo spostamento segue nell'indice della tabella corrente. È possibile impostare l'indice corrente usando la proprietà di indice dell'oggetto DAO sottostante. Se non si imposta l'indice corrente, l'ordine dei record restituiti è definito.  
  
 Per spostare la posizione dell'oggetto corrente di registrare in un oggetto recordset uno specifico numero di record in avanti o indietro, chiamare `Move`.  
  
 Per informazioni correlate, vedere gli argomenti "Spostare Method" e "MoveFirst, MoveLast, MoveNext e MovePrevious metodi" nella Guida di DAO.  
  
##  <a name="moveprev"></a>  CDaoRecordset::MovePrev  
 Chiamare questa funzione membro per rendere il record precedente del recordset il record corrente.  
  
```  
void MovePrev();
```  
  
### <a name="remarks"></a>Note  
 È consigliabile chiamare `IsBOF` prima di provare a passare al record precedente. Una chiamata a `MovePrev` , verrà generata una `CDaoException` se `IsBOF` restituisce diverso da zero, che indica che è già eseguito lo scorrimento prima del primo record o che nessun record sono stato selezionato per il recordset.  
  
> [!CAUTION]
>  Chiamare uno del `Move` funzioni genera un'eccezione se il recordset non contiene record. In generale, chiamare entrambe `IsBOF` e `IsEOF` prima di un'operazione di spostamento per determinare se il recordset include alcun record. Dopo aver chiamato `Open` oppure `Requery`, chiamare `IsBOF` o `IsEOF`.  
  
> [!NOTE]
>  Se si chiama uno qualsiasi del `Move` funzioni mentre il record corrente viene aggiornata o aggiunti, gli aggiornamenti vengono persi senza alcun avviso.  
  
 Utilizzare il `Move` funzioni spostarsi dal record a altro senza applicare una condizione. Utilizzare le operazioni di ricerca per individuare i record in un tipo dynaset o oggetto di tipo snapshot recordset che soddisfano una determinata condizione. Per individuare un record in un oggetto recordset di tipo di tabella, chiamare `Seek`.  
  
 Se il recordset si riferisce a un recordset di tipo di tabella, lo spostamento segue nell'indice della tabella corrente. È possibile impostare l'indice corrente usando la proprietà di indice dell'oggetto DAO sottostante. Se non si imposta l'indice corrente, l'ordine dei record restituiti è definito.  
  
 Non è possibile chiamare il `MoveFirst` o `MovePrev` funzione membro con uno snapshot di scorrimento forward-only.  
  
 Per spostare la posizione dell'oggetto corrente di registrare in un oggetto recordset uno specifico numero di record in avanti o indietro, chiamare `Move`.  
  
 Per informazioni correlate, vedere gli argomenti "Spostare Method" e "MoveFirst, MoveLast, MoveNext e MovePrevious metodi" nella Guida di DAO.  
  
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
 *nOpenType*  
 Uno dei valori seguenti:  
  
- **dbOpenDynaset** un oggetto di tipo dynaset recordset con scorrimento bidirezionale. Questa è l'impostazione predefinita.  
  
- **dbOpenTable** un tipo di tabella recordset con scorrimento bidirezionale.  
  
- **dbOpenSnapshot** un recordset di tipo snapshot con scorrimento bidirezionale.  
  
 *lpszSQL*  
 Puntatore di stringa contenente uno degli elementi seguenti:  
  
-   Un **NULL** puntatore.  
  
-   Il nome di uno o più tabledefs e/o querydefs (delimitato da virgole).  
  
-   Un database SQL **selezionate** istruzione (facoltativamente con un database SQL **in cui** oppure **ORDERBY** clausola).  
  
-   Una query pass-through.  
  
 *nOptions*  
 Uno o più delle opzioni elencate di seguito. Il valore predefinito è 0. I valori possibili sono i seguenti:  
  
- **dbAppendOnly** è solo possibile aggiungere nuovi record (solo per i recordset di tipo dynaset). Questa opzione significa letteralmente che record possono solo essere aggiunti. Le classi di database ODBC MFC è disponibile un'opzione append-only che consente di essere recuperati e aggiunti record.  
  
- **dbForwardOnly** il recordset è uno snapshot di scorrimento forward-only.  
  
- **dbSeeChanges** generano un'eccezione se un altro utente modifica i dati che si sta modificando.  
  
- **dbDenyWrite** ad altri utenti non possono modificare o aggiungere i record.  
  
- **dbDenyRead** ad altri utenti non possono visualizzare i record (solo per i recordset di tipo di tabella).  
  
- **dbReadOnly** è possibile visualizzare solo i record; gli altri utenti possono modificarle.  
  
- **dbInconsistent** aggiornamenti non consistenti sono consentiti (solo per i recordset di tipo dynaset).  
  
- **dbConsistent** aggiornamenti consistenti sono consentite (solo per i recordset di tipo dynaset).  
  
> [!NOTE]
>  Le costanti **dbConsistent** e **dbInconsistent** si escludono a vicenda. È possibile usare uno o l'altro, ma non entrambi in una determinata istanza di `Open`.  
  
 *pTableDef*  
 Un puntatore a un [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) oggetto. Questa versione è valida solo per i recordset di tipo di tabella. Quando si utilizza questa opzione, il `CDaoDatabase` puntatore utilizzato per costruire il `CDaoRecordset` non viene usato; piuttosto, viene utilizzato il database in cui risiede l'oggetto tabledef.  
  
 *pQueryDef*  
 Un puntatore a un [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) oggetto. Questa versione è valida solo per dynaset-type e Recordset di tipo snapshot. Quando si utilizza questa opzione, il `CDaoDatabase` puntatore utilizzato per costruire il `CDaoRecordset` non viene usato; piuttosto, viene utilizzato il database in cui risiede l'oggetto querydef.  
  
### <a name="remarks"></a>Note  
 Prima di chiamare `Open`, è necessario costruire l'oggetto recordset. Sono disponibili diversi modi per eseguire questa operazione:  
  
-   Quando si costruisce l'oggetto recordset, passare un puntatore a un `CDaoDatabase` oggetto che è già aperto.  
  
-   Quando si costruisce l'oggetto recordset, passare un puntatore a un `CDaoDatabase` oggetto che non è aperta. Apertura del recordset un `CDaoDatabase` dell'oggetto, ma non chiuderà quando si chiude l'oggetto recordset.  
  
-   Quando si costruisce l'oggetto recordset, passare un **NULL** puntatore. Le chiamate a oggetti recordset `GetDefaultDBName` per ottenere il nome di Microsoft Access. File MDB da aprire. L'apertura del recordset quindi un `CDaoDatabase` oggetto e mantiene il report aperto fino a quando il recordset è aperto. Quando si chiama `Close` nell'oggetto recordset, il `CDaoDatabase` oggetto viene chiuso.  
  
    > [!NOTE]
    >  Quando si apre il recordset di `CDaoDatabase` dell'oggetto, viene aperto l'origine dati con ottenuto l'accesso.  
  
 Per la versione di `Open` che usa la *lpszSQL* parametro, una volta aperto il recordset è possibile recuperare i record in uno dei diversi modi. La prima opzione consiste nell'avere DFX (funzioni) `DoFieldExchange`. La seconda opzione consiste nell'utilizzare l'associazione dinamica chiamando il `GetFieldValue` funzione membro. Queste opzioni possono essere implementate separatamente o in combinazione. Se vengono combinate, è necessario passare nell'istruzione SQL se stessi durante la chiamata a `Open`.  
  
 Quando si utilizza la seconda versione del `Open` in cui viene passato un `CDaoTableDef` dell'oggetto, le colonne risultante saranno disponibili per associare tramite `DoFieldExchange` e il meccanismo DFX, e/o associare in modo dinamico tramite `GetFieldValue`.  
  
> [!NOTE]
>  È possibile chiamare solo `Open` utilizzando un `CDaoTableDef` oggetto per i recordset di tipo di tabella.  
  
 Quando si usa la terza versione di `Open` in cui viene passato un `CDaoQueryDef` dell'oggetto, che verranno eseguite query e le colonne risultante saranno disponibili per associare tramite `DoFieldExchange` e il meccanismo DFX, e/o associare in modo dinamico tramite `GetFieldValue`.  
  
> [!NOTE]
>  È possibile chiamare solo `Open` utilizzando un `CDaoQueryDef` oggetto dynaset di tipi di recordset di tipo snapshot.  
  
 Per la prima versione di `Open` che utilizza il `lpszSQL` parametro, i record vengono selezionati in base a criteri illustrati nella tabella seguente.  
  
|Valore del parametro `lpszSQL`|I record selezionati sono determinati da|Esempio|  
|--------------------------------------|----------------------------------------|-------------|  
|**NULL**|Stringa restituita da `GetDefaultSQL`.||  
|Un elenco delimitato da virgole di uno o più tabledefs e/o querydef nomi.|Tutte le colonne rappresentate nel `DoFieldExchange`.|`"Customer"`|  
|**Selezionare** elenco di colonne **FROM** elenco tabella|Le colonne specificate da tabledef(s) specificato e/o querydef(s).|`"SELECT CustId, CustName`<br /><br /> `FROM Customer"`|  
  
 La procedura normale consiste nel passare **NULL** alla `Open`; in tal caso, `Open` chiamate `GetDefaultSQL`, una funzione membro sottoponibile a override che genera l'errore ClassWizard durante la creazione di un `CDaoRecordset`-classe derivata. Questo valore fornisce i nomi tabledef(s) e/o querydef specificati in ClassWizard. È invece possibile specificare altre informazioni il *lpszSQL* parametro.  
  
 Qualsiasi elemento passato `Open` costruisce una stringa SQL finale per la query (la stringa può essere SQL **in cui** e **ORDERBY** clausole accodato per il *lpszSQL* stringa è passato), quindi viene eseguita la query. È possibile esaminare la stringa costruita chiamando `GetSQL` dopo la chiamata `Open`.  
  
 I membri dei dati di campo della classe recordset sono associati alle colonne dei dati selezionati. Se vengono restituiti record, il primo di essi diventa il record corrente.  
  
 Se si desidera impostare le opzioni per il recordset, ad esempio un filtro o ordinamento, impostare **m_strSort** oppure **m_strFilter** dopo aver creato l'oggetto recordset ma prima di chiamare `Open`. Se si desidera aggiornare i record del recordset quando il recordset è già aperto, chiamare `Requery`.  
  
 Se si chiama `Open` in un tipo dynaset o recordset di tipo snapshot, o se l'origine dati fa riferimento a un'istruzione SQL o un oggetto tabledef che rappresenta una tabella collegata, è possibile utilizzare **dbOpenTable** per l'argomento di tipo; in caso contrario, MFC genera un'eccezione. Per determinare se un oggetto tabledef rappresenta una tabella collegata, creare una [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) oggetto e chiamare il relativo [GetConnect](../../mfc/reference/cdaotabledef-class.md#getconnect) funzione membro.  
  
 Usare la **dbSeeChanges** flag se si desidera registrare le modifiche apportate da un altro utente o un altro programma nel computer quando si modifica o eliminazione del record stesso. Ad esempio, se due utenti possono iniziare a modificare lo stesso record, all'utente primo di chiamare il `Update` membro funzione ha esito positivo. Quando si `Update` viene chiamato dall'utente secondo un `CDaoException` viene generata un'eccezione. Analogamente, se il secondo utente tenta di chiamare `Delete` per eliminare il record e si già è stato modificato dal primo utente, un `CDaoException` si verifica.  
  
 In genere, se l'utente ottiene questo `CDaoException` durante l'aggiornamento, il codice deve aggiornare il contenuto dei campi e recuperare i nuovi valori modificati. Se l'eccezione si verifica in corso l'eliminazione, il codice può visualizzare i dati del nuovo record per l'utente e un messaggio che indica che i dati sono stata modificata recentemente. A questo punto, il codice può richiedere un messaggio di conferma che l'utente desidera comunque eliminare il record.  
  
> [!TIP]
>  Utilizzare l'opzione di scorrimento forward-only ( **dbForwardOnly**) per migliorare le prestazioni quando l'applicazione effettua un unico passaggio in un recordset è aperto da un'origine dati ODBC.  
  
 Per informazioni correlate, vedere l'argomento "OpenRecordset Method" nella Guida di DAO.  
  
##  <a name="requery"></a>  CDaoRecordset::Requery  
 Chiamare questa funzione membro per ricompilare (aggiornamento) di un recordset.  
  
```  
virtual void Requery();
```  
  
### <a name="remarks"></a>Note  
 Se vengono restituiti record, il primo di essi diventa il record corrente.  
  
 Affinché il recordset in modo da riflettere le aggiunte ed eliminazioni che è o ad altri utenti stanno effettuando all'origine dati, è necessario ricompilare il recordset chiamando `Requery`. Se il recordset è un dynaset, questo rispecchia automaticamente gli aggiornamenti che si o ad altri utenti per il record esistenti (ma non le aggiunte). Se il recordset è uno snapshot, è necessario chiamare `Requery` in modo da riflettere le modifiche da altri utenti, nonché le aggiunte e le eliminazioni.  
  
 Per dynaset o uno snapshot, chiamare `Requery` ogni volta che si desidera ricompilare il recordset utilizzando valori dei parametri. Impostare il nuovo filtro o ordinamento impostando [m_strFilter](#m_strfilter) e [m_strSort](#m_strsort) prima di chiamare `Requery`. Imposta nuovi parametri assegnando nuovi valori ai membri di dati di parametro prima di chiamare `Requery`.  
  
 Se il tentativo di ricompilare il recordset non riesce, viene chiuso il recordset. Prima di chiamare `Requery`, è possibile determinare se il recordset può essere eseguito chiamando il [CanRestart](#canrestart) funzione membro. `CanRestart` non garantisce che `Requery` avrà esito positivo.  
  
> [!CAUTION]
>  Chiamare `Requery` solo dopo aver chiamato `Open`.  
  
> [!NOTE]
>  La chiamata [Requery](#requery) segnalibri DAO viene modificato.  
  
 Non è possibile chiamare `Requery` in un tipo dynaset o recordset di tipo snapshot se la chiamata `CanRestart` restituisce 0, né è possibile utilizzare, in un recordset di tipo di tabella.  
  
 Se entrambi `IsBOF` e `IsEOF` restituito diverso da zero dopo aver chiamato `Requery`, la query non ha restituito alcun record e il recordset non conterrà alcun dato.  
  
 Per informazioni correlate, vedere l'argomento "Requery Method" nella Guida di DAO.  
  
##  <a name="seek"></a>  CDaoRecordset::Seek  
 Chiamare questa funzione membro per individuare il record in un oggetto recordset di tipo tabella indicizzata che soddisfa i criteri specificati per l'oggetto corrente di indice e verificare che il record corrente.  
  
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
 *lpszComparison*  
 Una delle espressioni stringa seguente: "<","\<=", "=", "> =", o ">".  
  
 *pKey1*  
 Un puntatore a un [COleVariant](../../mfc/reference/colevariant-class.md) il cui valore corrisponde al primo campo in corrispondenza dell'indice. Obbligatorio.  
  
 *pKey2*  
 Un puntatore a un `COleVariant` il cui valore corrisponde al campo del secondo nell'indice, se presente. Per impostazione predefinita **NULL**.  
  
 *pKey3*  
 Un puntatore a un `COleVariant` il cui valore corrisponde al campo del terzo nell'indice, se presente. Per impostazione predefinita **NULL**.  
  
 *pKeyArray*  
 Un puntatore a una matrice di varianti. Le dimensioni della matrice corrispondono al numero di campi nell'indice.  
  
 *nKeys*  
 Un numero intero corrispondente alla dimensione della matrice, ovvero il numero di campi nell'indice.  
  
> [!NOTE]
>  Non specificare i caratteri jolly nelle chiavi. I caratteri jolly causerà `Seek` per non restituire i record corrispondenti.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se vengono trovati record corrispondenti, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare la seconda versione (array) di `Seek` per gestire gli indici di campi di quattro o più.  
  
 `Seek` Abilita l'indice ad alte prestazioni la ricerca nei recordset di tipo di tabella. È necessario impostare l'indice corrente chiamando `SetCurrentIndex` prima di chiamare `Seek`. Se l'indice consente di identificare un campo chiave non univoco o campi, `Seek` individua il primo record che soddisfano i criteri. Se non è un indice, viene generata un'eccezione.  
  
 Si noti che se non si sta creando un recordset UNICODE, il `COleVariant` oggetti devono essere dichiarati in modo esplicito ANSI. This can be done by using the [COleVariant::COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** *lpszSrc***,** *vtSrc* **)** form of constructor with *vtSrc* set to `VT_BSTRT` (ANSI) or by using the **COleVariant** function [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** *lpszSrc***,** *vtSrc* **)** with *vtSrc* set to `VT_BSTRT`.  
  
 Quando si chiama `Seek`, passare uno o più valori di chiave e un operatore di confronto ("<","\<=", "=", "> =", o ">"). `Seek` allo scopo di esaminare i campi di chiave specificati e individua il primo record che soddisfa i criteri specificati da *lpszComparison* e *pKey1*. Una volta trovato, `Seek` restituisce diverso da zero e lo rende tale record corrente. Se `Seek` non riesce a trovare una corrispondenza, `Seek` restituisce zero e il record corrente non è definito. Quando si usa DAO direttamente, è necessario controllare in modo esplicito la proprietà NoMatch.  
  
 Se `lpszComparison` è "=", "> =", o ">", `Seek` inizia all'inizio dell'indice. Se *lpszComparison* è "<" o "< =", `Seek` inizia alla fine dell'indice e ricerca all'indietro a meno che non sono presenti voci duplicate dell'indice alla fine. In questo caso, `Seek` inizia in corrispondenza di una voce arbitraria tra le voci duplicate dell'indice alla fine dell'indice.  
  
 Non deve essere un record corrente quando si utilizza `Seek`.  
  
 Per individuare un record in un recordset di tipo snapshot che soddisfa una condizione specifica o un tipo dynaset, utilizzare le operazioni di ricerca. Per includere tutti i record, non solo quelli che soddisfano una condizione specifica, utilizzare le operazioni di spostamento per spostarsi da un record a altro.  
  
 Non è possibile chiamare `Seek` su una tabella collegata di qualsiasi tipo perché le tabelle collegate devono essere aperto come tipo dynaset o Recordset di tipo snapshot. Tuttavia, se si chiama `CDaoDatabase::Open` per aprire direttamente un database ISAM installabile, è possibile chiamare `Seek` nelle tabelle nel database, anche se le prestazioni potrebbero essere lente.  
  
 Per informazioni correlate, vedere l'argomento "Metodo Seek" nella Guida di DAO.  
  
##  <a name="setabsoluteposition"></a>  CDaoRecordset:: SetAbsolutePosition  
 Imposta il numero di record relativo del record corrente di un oggetto recordset.  
  
```  
void SetAbsolutePosition(long lPosition);
```  
  
### <a name="parameters"></a>Parametri  
 *lPosition*  
 Corrisponde alla posizione ordinale del record corrente nel recordset.  
  
### <a name="remarks"></a>Note  
 La chiamata `SetAbsolutePosition` consente di posizionare il puntatore del record corrente a un record specifico in base alla relativa posizione ordinale in un tipo dynaset o un recordset di tipo snapshot. È anche possibile determinare il numero di record corrente chiamando [GetAbsolutePosition](#getabsoluteposition).  
  
> [!NOTE]
>  Questa funzione membro è valida solo per dynaset-type e Recordset di tipo snapshot.  
  
 Il valore della proprietà AbsolutePosition dell'oggetto DAO sottostante è in base zero. il valore 0 si riferisce al primo record del recordset. Impostando un valore maggiore del numero di record popolati, in MFC per generare un'eccezione. È possibile determinare il numero di record popolati del recordset chiamando il `GetRecordCount` funzione membro.  
  
 Se il record corrente viene eliminato, non è definito il valore della proprietà AbsolutePosition e MFC genera un'eccezione se vi viene fatto riferimento. I nuovi record vengono aggiunti alla fine della sequenza.  
  
> [!NOTE]
>  Questa proprietà non deve essere utilizzato come un numero di record di surrogati. I segnalibri sono ancora il modo consigliato per mantenere e tornare a una posizione specifica e l'unico modo per inserire il record corrente in tutti i tipi di oggetti recordset che supportano i segnalibri. In particolare, la posizione di un determinato record cambia quando vengono eliminati i record che la preceda. Non vi è alcuna garanzia che un determinato record avrà la stessa posizione assoluta se il recordset viene ricreato, in quanto l'ordine dei singoli record all'interno di un recordset non è garantita a meno che non venga creata con un'istruzione SQL utilizzando un  **ORDERBY** clausola.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà AbsolutePosition" nella Guida di DAO.  
  
##  <a name="setbookmark"></a>  CDaoRecordset::SetBookmark  
 Chiamare questa funzione membro per posizionare il recordset sul record che contiene il segnalibro specificato.  
  
```  
void SetBookmark(COleVariant varBookmark);
```  
  
### <a name="parameters"></a>Parametri  
 *varBookmark*  
 Un [COleVariant](../../mfc/reference/colevariant-class.md) oggetto contenente il valore di segnalibro per un record specifico.  
  
### <a name="remarks"></a>Note  
 Quando un oggetto recordset viene creato o aperto, ognuno dei relativi record dispone già di un segnalibro univoco. È possibile recuperare il segnalibro per il record corrente chiamando `GetBookmark` e salvare il valore da un `COleVariant` oggetto. È possibile restituire al record specifico in un secondo momento chiamando `SetBookmark` utilizzando il valore salvato segnalibro.  
  
> [!NOTE]
>  La chiamata [Requery](#requery) segnalibri DAO viene modificato.  
  
 Si noti che se non si sta creando un recordset UNICODE, il `COleVariant` oggetto deve essere dichiarato in modo esplicito ANSI. This can be done by using the [COleVariant::COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** *lpszSrc***,** *vtSrc* **)** form of constructor with *vtSrc* set to `VT_BSTRT` (ANSI) or by using the `COleVariant` function [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** *lpszSrc***,** *vtSrc* **)** with *vtSrc* set to `VT_BSTRT`.  
  
 Per informazioni correlate, vedere gli argomenti "segnalibro" supporta proprietà e"nella Guida di DAO.  
  
##  <a name="setcachesize"></a>  CDaoRecordset:: SetCacheSize  
 Chiamare questa funzione membro per impostare il numero di record da memorizzare nella cache.  
  
```  
void SetCacheSize(long lSize);
```  
  
### <a name="parameters"></a>Parametri  
 *lSize*  
 Specifica il numero di record. Un valore tipico è 100. Il valore 0 disattiva la memorizzazione nella cache. L'impostazione deve essere compreso tra 5 e 1200 record. La cache può usare una notevole quantità di memoria.  
  
### <a name="remarks"></a>Note  
 Una cache è uno spazio nella memoria locale che contiene i dati recuperati dal server di più di recente nel caso in cui i dati verranno nuovamente richiesto durante l'esecuzione dell'applicazione. Dati la memorizzazione nella cache migliora le prestazioni di un'applicazione che recupera dati da un server remoto tramite gli oggetti recordset di tipo dynaset. Quando vengono richiesti dati, il motore di database Microsoft Jet controlla innanzitutto la cache per i dati richiesti anziché doverli recuperare dal server, che richiede più tempo. Dati non provengono da un'origine dati ODBC non vengono salvati nella cache.  
  
 Qualsiasi origine dati ODBC, ad esempio una tabella collegata, può avere una cache locale. Per creare la cache, aprire un oggetto recordset dall'origine dati remota, chiamata di `SetCacheSize` e `SetCacheStart` le funzioni membro e quindi chiamare il `FillCache` funzione membro o il passaggio tra i record utilizzando una delle operazioni di spostamento. Il *lSize* parametro del `SetCacheSize` funzione membro può essere in base al numero di record può utilizzare l'applicazione con una sola volta. Ad esempio, se si utilizza un recordset come origine dei dati da visualizzare sullo schermo, è possibile passare il `SetCacheSize` *lSize* parametro come 20 per visualizzare i 20 record alla volta.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà CacheSize e CacheStart" nella Guida di DAO.  
  
##  <a name="setcachestart"></a>  CDaoRecordset:: SetCacheStart  
 Chiamare questa funzione membro per specificare il segnalibro del primo record del recordset da memorizzare nella cache.  
  
```  
void SetCacheStart(COleVariant varBookmark);
```  
  
### <a name="parameters"></a>Parametri  
 *varBookmark*  
 Un [COleVariant](../../mfc/reference/colevariant-class.md) che specifica il segnalibro del primo record del recordset da memorizzare nella cache.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare il valore di segnalibro di tutti i record per il *varBookmark* parametro del `SetCacheStart` funzione membro. Il record che si desidera iniziare la cache con il record corrente, stabilire un segnalibro per tale record utilizzando [SetBookmark](#setbookmark)e passare il valore di segnalibro come parametro per il `SetCacheStart` funzione membro.  
  
 Il motore di database Microsoft Jet richiede record all'interno dell'intervallo di cache dalla cache e richiede i record compreso nell'intervallo della cache dal server.  
  
 Record recuperati dalla cache non riflettono le modifiche apportate contemporaneamente all'origine dati da altri utenti.  
  
 Per forzare un aggiornamento di tutti i dati memorizzati nella cache, passare il *lSize* parametro della `SetCacheSize` come 0, chiamare `SetCacheSize` nuovamente con la dimensione della cache richiesto in origine e quindi chiamare il `FillCache` funzione membro.  
  
 Si noti che se non si sta creando un recordset UNICODE, il `COleVariant` oggetto deve essere dichiarato in modo esplicito ANSI. This can be done by using the [COleVariant::COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** *lpszSrc***,** *vtSrc* **)** form of constructor with *vtSrc* set to `VT_BSTRT` (ANSI) or by using the `COleVariant` function [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** *lpszSrc***,** *vtSrc* **)** with *vtSrc* set to `VT_BSTRT`.  
  
 Per informazioni correlate, vedere l'argomento CacheSize, proprietà CacheStart"nella Guida di DAO.  
  
##  <a name="setcurrentindex"></a>  CDaoRecordset:: SetCurrentIndex  
 Chiamare questa funzione membro per impostare un indice in un recordset di tipo di tabella.  
  
```  
void SetCurrentIndex(LPCTSTR lpszIndex);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszIndex*  
 Un puntatore che contiene il nome dell'indice da impostare.  
  
### <a name="remarks"></a>Note  
 Record nelle tabelle di base non vengono archiviate in un ordine particolare. L'impostazione di un indice viene modificato l'ordine dei record restituiti dal database, ma non influenza l'ordine in cui sono archiviati i record. L'indice specificato deve essere già definito. Se si tenta di utilizzare un oggetto di indice che non esiste o se l'indice non è impostato quando si chiama [Seek](#seek), MFC genera un'eccezione.  
  
 È possibile creare un nuovo indice per la tabella chiamando [CDaoTableDef::CreateIndex](../../mfc/reference/cdaotabledef-class.md#createindex) e aggiungere il nuovo indice per la raccolta di indici di tabledef sottostante chiamando [CDaoTableDef:: Append](../../mfc/reference/cdaotabledef-class.md#append), e riaprire il recordset.  
  
 Record restituito da un recordset di tipo di tabella può essere ordinato solo per gli indici definiti per l'oggetto tabledef sottostante. Per ordinare i record in un altro ordine, è possibile aprire un tipo dynaset o un recordset di tipo snapshot utilizzando un database SQL **ORDERBY** clausola archiviato in [CDaoRecordset::m_strSort](#m_strsort).  
  
 Per informazioni correlate, vedere l'argomento "Oggetto Index" e la definizione "indice corrente" nella Guida di DAO.  
  
##  <a name="setfielddirty"></a>  CDaoRecordset:: SetFieldDirty  
 Chiamare questa funzione membro per contrassegnare un membro dati di campo del recordset come esempio unchanged o modificate.  
  
```  
void SetFieldDirty(
    void* pv,  
    BOOL bDirty = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *PV*  
 Contiene l'indirizzo di un membro dati di campo del recordset o **NULL**. Se **NULL**, vengono contrassegnati tutti i membri di dati di campo nel recordset. (C++ **NULL** non equivale Null nella terminologia dei database, vale a dire che "non having alcun valore.")  
  
 *bDirty*  
 **TRUE** se il membro dati di campo è contrassegnata come "dirty" (modificato). In caso contrario **FALSE** se il membro dati di campo è contrassegnata come "pulire" (non modificato).  
  
### <a name="remarks"></a>Note  
 Contrassegnare i campi come invariato assicura che il campo non viene aggiornato.  
  
 I segni di framework modificare i membri di dati campo per assicurarsi che verranno scritti nel record nell'origine dati per il meccanismo di scambio (DFX) di campi di record DAO. La modifica del valore di un campo in genere imposta il campo dirty automaticamente, pertanto è necessario chiamare raramente `SetFieldDirty` personalmente, ma in alcuni casi potrebbe essere necessario garantire che le colonne verranno essere aggiornate o inserite indipendentemente dal valore quale sia nei dati di campo in modo esplicito membro. Il meccanismo DFX utilizza inoltre l'utilizzo di **PSEUDONULL**. Per altre informazioni, vedere [CDaoFieldExchange:: M_noperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).  
  
 Se non viene utilizzato il meccanismo del doppio buffer, quindi la modifica del valore del campo non viene impostata automaticamente il campo come dirty. In questo caso, sarà necessario impostare in modo esplicito il campo come dirty. Il flag contenuto in [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controlla il controllo automatico dei campi automatico.  
  
> [!NOTE]
>  Chiamare questa funzione membro solo dopo aver chiamato [Edit](#edit) oppure [AddNew](#addnew).  
  
 Utilizzo **NULL** per il primo argomento della funzione verrà applicata la funzione a tutti i **outputColumn** campi, non **param** campi `CDaoFieldExchange`. Ad esempio, la chiamata  
  
 [!code-cpp[NVC_MFCDatabase#6](../../mfc/codesnippet/cpp/cdaorecordset-class_6.cpp)]  
  
 imposterà solo **outputColumn** campi **NULL**; **param** campi saranno interessati.  
  
 Lavorare su un **param**, è necessario fornire l'indirizzo effettivo della persona **param** si desidera utilizzare, ad esempio:  
  
 [!code-cpp[NVC_MFCDatabase#7](../../mfc/codesnippet/cpp/cdaorecordset-class_7.cpp)]  
  
 Ciò significa che non è possibile impostare tutte le **param** campi **NULL**, come accade con **outputColumn** campi.  
  
 `SetFieldDirty` viene implementata tramite `DoFieldExchange`.  
  
##  <a name="setfieldnull"></a>  CDaoRecordset::SetFieldNull  
 Chiamare questa funzione membro per contrassegnare un membro dati di campo del recordset come Null (in particolare non con nessun valore) o come non Null.  
  
```  
void SetFieldNull(
    void* pv,  
    BOOL bNull = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *PV*  
 Contiene l'indirizzo di un membro dati di campo del recordset o **NULL**. Se **NULL**, vengono contrassegnati tutti i membri di dati di campo nel recordset. (C++ **NULL** non equivale Null nella terminologia dei database, vale a dire che "non having alcun valore.")  
  
 *bNull*  
 Diverso da zero se il membro dati di campo deve essere contrassegnata come tabella non contenente alcun valore (Null). In caso contrario 0 se il membro dati di campo deve essere contrassegnato come non Null.  
  
### <a name="remarks"></a>Note  
 `SetFieldNull` viene utilizzato per i campi associati nel `DoFieldExchange` meccanismo.  
  
 Quando si aggiunge un nuovo record per un oggetto recordset, tutti i membri di dati di campo vengono inizialmente impostati su un valore Null e contrassegnati come "dirty" (modificato). Quando si recupera un record da un'origine dati, le relative colonne già dispongono di valori o sono Null. Se non è necessario rendere un campo Null, una [CDaoException](../../mfc/reference/cdaoexception-class.md) viene generata un'eccezione.  
  
 Se si utilizza il meccanismo del doppio buffer, ad esempio, se si desidera definire un campo del record corrente in quanto non hanno un valore, chiamare in modo specifico `SetFieldNull` con *bNull* impostata su **TRUE** di flag la classe come Null. Se un campo in precedenza è stato contrassegnato come Null e si desidera assegnare un valore, impostare semplicemente il nuovo valore. Non è necessario rimuovere il flag Null con `SetFieldNull`. Per determinare se il campo può essere Null, chiamare [IsFieldNullable](#isfieldnullable).  
  
 Se non si utilizza il meccanismo del doppio buffer, quindi la modifica del valore del campo non viene impostata automaticamente il campo come dirty e non Null. In particolare, è necessario impostare i campi dirty e non Null. Il flag contenuto in [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controlla il controllo automatico dei campi automatico.  
  
 Il meccanismo DFX impiega il ricorso **PSEUDONULL**. Per altre informazioni, vedere [CDaoFieldExchange:: M_noperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).  
  
> [!NOTE]
>  Chiamare questa funzione membro solo dopo aver chiamato [Edit](#edit) oppure [AddNew](#addnew).  
  
 Utilizzo **NULL** per il primo argomento della funzione verrà applicata la funzione solo a **outputColumn** campi, non **param** campi `CDaoFieldExchange`. Ad esempio, la chiamata  
  
 [!code-cpp[NVC_MFCDatabase#8](../../mfc/codesnippet/cpp/cdaorecordset-class_8.cpp)]  
  
 imposterà solo **outputColumn** campi **NULL**; **param** campi saranno interessati.  
  
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
 *lpszName*  
 Un puntatore a una stringa contenente il nome di un campo.  
  
 *varValue*  
 Un riferimento a un [COleVariant](../../mfc/reference/colevariant-class.md) oggetto contenente il valore del contenuto del campo.  
  
 *nIndex*  
 Valore intero che rappresenta la posizione ordinale del campo nella raccolta di campi del recordset (in base zero).  
  
 *lpszValue*  
 Un puntatore a una stringa contenente il valore del contenuto del campo.  
  
### <a name="remarks"></a>Note  
 Uso `SetFieldValue` e [GetFieldValue](#getfieldvalue) associare in modo dinamico i campi in fase di esecuzione anziché in modo statico colonne associazione utilizzando la [DoFieldExchange](#dofieldexchange) meccanismo.  
  
 Si noti che se non si sta creando un recordset UNICODE, è necessario utilizzare una forma di `SetFieldValue` che non contiene una `COleVariant` parametro, o `COleVariant` oggetto deve essere dichiarato in modo esplicito ANSI. This can be done by using the [COleVariant::COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** *lpszSrc***,** *vtSrc* **)** form of constructor with *vtSrc* set to `VT_BSTRT` (ANSI) or by using the `COleVariant` function [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** *lpszSrc***,** *vtSrc* **)** with *vtSrc* set to `VT_BSTRT`.  
  
 Per informazioni correlate, vedere gli argomenti "Campo oggetto" e "Proprietà Value" nella Guida di DAO.  
  
##  <a name="setfieldvaluenull"></a>  CDaoRecordset::SetFieldValueNull  
 Chiamare questa funzione membro per impostare il campo su un valore Null.  
  
```  
void SetFieldValueNull(int nIndex);  
void SetFieldValueNull(LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 L'indice del campo del recordset, per la ricerca in base all'indice in base zero.  
  
 *lpszName*  
 Il nome del campo del recordset, per la ricerca in base al nome.  
  
### <a name="remarks"></a>Note  
 C++ **NULL** non corrisponde al valore Null, ovvero nella terminologia dei database, "non having alcun valore."  
  
 Per informazioni correlate, vedere gli argomenti "Campo oggetto" e "Proprietà Value" nella Guida di DAO.  
  
##  <a name="setlockingmode"></a>  CDaoRecordset::SetLockingMode  
 Chiamare questa funzione membro per impostare il tipo di blocco per il recordset.  
  
```  
void SetLockingMode(BOOL bPessimistic);
```  
  
### <a name="parameters"></a>Parametri  
 *bPessimistic*  
 Flag che indica il tipo di blocco.  
  
### <a name="remarks"></a>Note  
 Quando il blocco pessimistico è attiva, la pagina 2 KB che contiene il record che si sta modificando è bloccato, non appena si chiama il `Edit` funzione membro. La pagina viene sbloccata quando si chiama il `Update` o `Close` funzione membro o una delle operazioni di spostamento o ricerca.  
  
 Quando il blocco ottimistico, la pagina 2 KB che contiene il record viene bloccata solo mentre il record venga aggiornato con il `Update` funzione membro.  
  
 Se una pagina è bloccata, nessun altro utente può modificare i record nella stessa pagina. Se si chiama `SetLockingMode` e passare un valore diverso da zero e un altro utente dispone già della pagina bloccata, viene generata un'eccezione quando si chiama `Edit`. Altri utenti possono leggere dati da pagine bloccate.  
  
 Se si chiama `SetLockingMode` con un valore pari a zero e versioni successive chiamare `Update` quando la pagina è bloccata da un altro utente, viene generata un'eccezione. Per visualizzare le modifiche apportate al record da un altro utente e perdere le modifiche, chiamare il `SetBookmark` funzione membro con il valore del segnalibro del record corrente.  
  
 Quando si utilizzano origini dati ODBC, la modalità di blocco è sempre ottimistica.  
  
##  <a name="setparamvalue"></a>  CDaoRecordset::SetParamValue  
 Chiamare questa funzione membro per impostare il valore di un parametro in recordset in fase di esecuzione.  
  
```  
virtual void SetParamValue(
    int nIndex,  
    const COleVariant& varValue);

 
virtual void SetParamValue(
    LPCTSTR lpszName,  
    const COleVariant& varValue);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Posizione numerica del parametro nella raccolta di parametri dell'oggetto querydef.  
  
 *var*  
 Il valore da impostare. vedere la sezione Osservazioni.  
  
 *lpszName*  
 Nome del valore del parametro che si desidera impostare.  
  
### <a name="remarks"></a>Note  
 Il parametro deve già sono stato definito come parte della stringa SQL del recordset. Il parametro è possibile accedere in base al nome o in base alla posizione di indice nella raccolta.  
  
 Specificare il valore da impostare come un `COleVariant` oggetto. Per informazioni sull'impostazione il valore desiderato e digitare il `COleVariant` dell'oggetto, vedere la classe [COleVariant](../../mfc/reference/colevariant-class.md). Si noti che se non si sta creando un recordset UNICODE, il `COleVariant` oggetto deve essere dichiarato in modo esplicito ANSI. This can be done by using the [COleVariant::COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** *lpszSrc***,** *vtSrc* **)** form of constructor with *vtSrc* set to `VT_BSTRT` (ANSI) or by using the `COleVariant` function [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** *lpszSrc***,** *vtSrc* **)** with *vtSrc* set to `VT_BSTRT`.  
  
##  <a name="setparamvaluenull"></a>  CDaoRecordset::SetParamValueNull  
 Chiamare questa funzione membro per impostare il parametro su un valore Null.  
  
```  
void SetParamValueNull(int nIndex);  
void SetParamValueNull(LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 L'indice del campo del recordset, per la ricerca in base all'indice in base zero.  
  
 *lpszName*  
 Il nome del campo del recordset, per la ricerca in base al nome.  
  
### <a name="remarks"></a>Note  
 C++ **NULL** non corrisponde al valore Null, ovvero nella terminologia dei database, "non having alcun valore."  
  
##  <a name="setpercentposition"></a>  CDaoRecordset:: SetPercentPosition  
 Chiamare questa funzione membro per impostare un valore che modifica la posizione approssimativa del record corrente nell'oggetto recordset in base a una percentuale dei record del recordset.  
  
```  
void SetPercentPosition(float fPosition);
```  
  
### <a name="parameters"></a>Parametri  
 *fPosition*  
 Numero compreso tra 0 e 100.  
  
### <a name="remarks"></a>Note  
 Quando si lavora con un tipo dynaset o un recordset di tipo snapshot, innanzitutto popolare il recordset mediante lo spostamento all'ultimo record prima di chiamare `SetPercentPosition`. Se si chiama `SetPercentPosition` prima di popolare completamente il recordset, l'entità dello spostamento è correlata al numero di record è possibile accedere come indicato dal valore di [GetRecordCount](#getrecordcount). È possibile spostare all'ultimo record chiamando `MoveLast`.  
  
 Dopo aver chiamato `SetPercentPosition`, il record in corrispondenza della posizione approssimativa corrispondente a tale valore diventa quello corrente.  
  
> [!NOTE]
>  La chiamata `SetPercentPosition` per spostare il record corrente a un record specifico in un recordset non è consigliato. Chiamare il [SetBookmark](#setbookmark) invece funzione membro.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà PercentPosition" nella Guida di DAO.  
  
##  <a name="update"></a>  CDaoRecordset::Update  
 Chiamare questa funzione membro dopo una chiamata ai `AddNew` o `Edit` funzione membro.  
  
```  
virtual void Update();
```  
  
### <a name="remarks"></a>Note  
 Questa chiamata è necessario per completare il `AddNew` o `Edit` operazione.  
  
 Entrambi `AddNew` e `Edit` preparare un buffer di modifica in cui vengono inseriti i dati aggiunti o modificati per il salvataggio nell'origine dati. `Update` Salva i dati. Vengono aggiornati solo i campi contrassegnati o rilevato come è stato modificato.  
  
 Se l'origine dati supporta le transazioni, è possibile apportare le `Update` chiamare (e il corrispondente `AddNew` o `Edit` chiamare) fa parte di una transazione.  
  
> [!CAUTION]
>  Se si chiama `Update` senza prima chiamare `AddNew` oppure `Edit`, `Update` genera un `CDaoException`. Se si chiama `AddNew` oppure `Edit`, è necessario chiamare `Update` prima di chiamare [MoveNext](#movenext) o chiudere il recordset o la connessione all'origine dati. In caso contrario, le modifiche verranno perse senza notifica.  
  
 Quando l'oggetto recordset pessimistico è bloccato in un ambiente multiutente, il record rimane bloccato dal momento in cui `Edit` viene utilizzato fino a quando l'aggiornamento è stata completata. Se il recordset è applicato il presupposto ottimistico bloccato, il record è bloccato e confrontato con il record precedentemente modificato prima di aggiornarli nel database. Se il record è stato modificato dopo la chiamata `Edit`, il `Update` operazione ha esito negativo e MFC genera un'eccezione. È possibile modificare la modalità di blocco con `SetLockingMode`.  
  
> [!NOTE]
>  Blocco ottimistico viene sempre utilizzato in formati di database esterno, ad esempio ODBC e driver ISAM installabile.  
  
 Per informazioni correlate, vedere gli argomenti "AddNew (metodo)", "CancelUpdate Method", "Eliminare Method", "LastModified Property", "Aggiornamento Method" e "Proprietà EditMode" nella Guida di DAO.  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)   
 [CDaoWorkspace (classe)](../../mfc/reference/cdaoworkspace-class.md)   
 [CDaoDatabase (classe)](../../mfc/reference/cdaodatabase-class.md)   
 [Classe CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md)

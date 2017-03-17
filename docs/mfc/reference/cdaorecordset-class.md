---
title: CDaoRecordset (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
- recordsets, types
- CDaoRecordset class
- records, CDaoRecordSet
ms.assetid: 2322067f-1027-4662-a5d7-aa2fc7488630
caps.latest.revision: 26
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 3d3d830a7d423a2653819e9cbf160538e486cfb0
ms.lasthandoff: 02/24/2017

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
|[CDaoRecordset::CanAppend](#canappend)|Restituisce zero se è possibile aggiungere nuovi record al recordset tramite il [AddNew](#addnew) funzione membro.|  
|[CDaoRecordset:: CanBookmark](#canbookmark)|Restituisce zero se l'oggetto recordset supporta i segnalibri.|  
|[CDaoRecordset::CancelUpdate](#cancelupdate)|Annulla gli aggiornamenti in sospeso a causa di un [modificare](#edit) o [AddNew](#addnew) operazione.|  
|[CDaoRecordset::CanRestart](#canrestart)|Restituisce se diverso da zero [Requery](#requery) può essere chiamato per eseguire nuovamente la query del recordset.|  
|[CDaoRecordset::CanScroll](#canscroll)|Restituisce zero se è possibile scorrere i record.|  
|[CDaoRecordset::CanTransact](#cantransact)|Restituisce zero se l'origine dati supporta le transazioni.|  
|[CDaoRecordset::CanUpdate](#canupdate)|Restituisce zero se il recordset può essere aggiornato (è possibile aggiungere, aggiornare o eliminare record).|  
|[CDaoRecordset::Close](#close)|Chiude l'oggetto recordset.|  
|[CDaoRecordset::Delete](#delete)|Elimina il record corrente dal recordset. È necessario scorrere in modo esplicito a un altro record dopo l'eliminazione.|  
|[CDaoRecordset::DoFieldExchange](#dofieldexchange)|Chiamato per lo scambio di dati (in entrambe le direzioni) tra i membri dati di campo del recordset e il record corrispondente nell'origine dati. Implementa DAO campi di record (DFX).|  
|[CDaoRecordset:: Edit](#edit)|Preparare le modifiche al record corrente. Chiamare **aggiornamento** per completare l'operazione di modifica.|  
|[CDaoRecordset:: FillCache](#fillcache)|Riempie tutta o parte di una cache locale per un oggetto recordset che contiene i dati da un'origine dati ODBC.|  
|[CDaoRecordset::Find](#find)|Individua innanzitutto successivo, precedente o nell'ultima posizione di una determinata stringa in un recordset di tipo dynaset che soddisfa i criteri specificati e imposta tale record come record corrente.|  
|[CDaoRecordset::FindFirst](#findfirst)|Individua il primo record in un recordset di tipo snapshot che soddisfa i criteri specificati e imposta tale record come record corrente o di tipo dynaset.|  
|[CDaoRecordset::FindLast](#findlast)|Individua l'ultimo record in un recordset di tipo snapshot che soddisfa i criteri specificati e imposta tale record come record corrente o di tipo dynaset.|  
|[CDaoRecordset::FindNext](#findnext)|Individua il record successivo in un recordset di tipo snapshot che soddisfa i criteri specificati e imposta tale record come record corrente o di tipo dynaset.|  
|[CDaoRecordset::FindPrev](#findprev)|Individua il record precedente in un recordset di tipo snapshot che soddisfa i criteri specificati e imposta tale record come record corrente o di tipo dynaset.|  
|[CDaoRecordset::GetAbsolutePosition](#getabsoluteposition)|Restituisce il numero del record corrente dell'oggetto recordset.|  
|[CDaoRecordset:: GetBookmark](#getbookmark)|Restituisce un valore che rappresenta il segnalibro su un record.|  
|[CDaoRecordset::GetCacheSize](#getcachesize)|Restituisce un valore che specifica il numero di record in un recordset di tipo dynaset contenente dati da memorizzare localmente nella cache da un'origine dati ODBC.|  
|[CDaoRecordset::GetCacheStart](#getcachestart)|Restituisce un valore che specifica il segnalibro del primo record del recordset da memorizzare nella cache.|  
|[CDaoRecordset::GetCurrentIndex](#getcurrentindex)|Restituisce un `CString` contenente il nome dell'indice più recente utilizzato in un tipo di tabella indicizzato, `CDaoRecordset`.|  
|[CDaoRecordset::GetDateCreated](#getdatecreated)|Restituisce la data e l'ora della tabella di base sottostante un `CDaoRecordset` oggetto è stato creato|  
|[CDaoRecordset::GetDateLastUpdated](#getdatelastupdated)|Restituisce la data e ora della modifica più recente apportata alla progettazione di una tabella di base sottostante un `CDaoRecordset` oggetto.|  
|[CDaoRecordset::GetDefaultDBName](#getdefaultdbname)|Restituisce il nome dell'origine dati predefinito.|  
|[CDaoRecordset::GetDefaultSQL](#getdefaultsql)|Chiamato per ottenere la stringa SQL predefinita da eseguire.|  
|[CDaoRecordset::GetEditMode](#geteditmode)|Restituisce un valore che indica lo stato di modifica per il record corrente.|  
|[CDaoRecordset::GetFieldCount](#getfieldcount)|Restituisce un valore che rappresenta il numero di campi in un recordset.|  
|[CDaoRecordset::GetFieldInfo](#getfieldinfo)|Restituisce i tipi specifici di informazioni sui campi del recordset.|  
|[CDaoRecordset:: GetFieldValue](#getfieldvalue)|Restituisce il valore di un campo in un recordset.|  
|[CDaoRecordset::GetIndexCount](#getindexcount)|Recupera il numero di indici in una tabella sottostante di un recordset.|  
|[CDaoRecordset::GetIndexInfo](#getindexinfo)|Restituisce i vari tipi di informazioni su un indice.|  
|[CDaoRecordset::GetLastModifiedBookmark](#getlastmodifiedbookmark)|Utilizzato per determinare più recentemente aggiunti o aggiornati i record.|  
|[CDaoRecordset::GetLockingMode](#getlockingmode)|Restituisce un valore che indica il tipo di blocco che viene applicata durante la modifica.|  
|[CDaoRecordset::GetName](#getname)|Restituisce un `CString` contenente il nome dell'oggetto recordset.|  
|[CDaoRecordset::GetParamValue](#getparamvalue)|Recupera il valore corrente del parametro specificato memorizzato nell'oggetto DAOParameter sottostante.|  
|[CDaoRecordset:: GetPercentPosition](#getpercentposition)|Restituisce la posizione del record corrente come percentuale del numero totale di record.|  
|[CDaoRecordset::GetRecordCount](#getrecordcount)|Restituisce il numero di record è possibile accedere in un oggetto recordset.|  
|[CDaoRecordset::GetSQL](#getsql)|Ottiene la stringa SQL utilizzata per selezionare i record del recordset.|  
|[CDaoRecordset::GetType](#gettype)|Chiamato per determinare il tipo di un recordset: tipo di tabella, tipo dynaset o di tipo snapshot.|  
|[CDaoRecordset::GetValidationRule](#getvalidationrule)|Restituisce un `CString` contenente il valore di convalida dei dati man mano che verrà immessi in un campo.|  
|[CDaoRecordset::GetValidationText](#getvalidationtext)|Recupera il testo che viene visualizzato quando una regola di convalida non viene soddisfatta.|  
|[CDaoRecordset::IsBOF](#isbof)|Restituisce zero se il recordset è stato posizionato prima del primo record. Non è presente alcun record corrente.|  
|[CDaoRecordset::IsDeleted](#isdeleted)|Restituisce zero se il recordset è posizionato su un record eliminato.|  
|[CDaoRecordset::IsEOF](#iseof)|Restituisce zero se il recordset è stato posizionato dopo l'ultimo record. Non è presente alcun record corrente.|  
|[CDaoRecordset::IsFieldDirty](#isfielddirty)|Restituisce zero se il campo specificato nel record corrente è stato modificato.|  
|[CDaoRecordset::IsFieldNull](#isfieldnull)|Restituisce zero se il campo specificato nel record corrente è Null (non con nessun valore).|  
|[CDaoRecordset::IsFieldNullable](#isfieldnullable)|Restituisce zero se il campo specificato nel record corrente può essere impostato su Null (non con nessun valore).|  
|[CDaoRecordset::IsOpen](#isopen)|Restituisce se diverso da zero [aprire](#open) è stato chiamato in precedenza.|  
|[CDaoRecordset:: Move](#move)|Posiziona l'oggetto recordset su un numero specificato di record del record corrente in entrambe le direzioni.|  
|[CDaoRecordset::MoveFirst](#movefirst)|Posiziona il record corrente nel primo record del recordset.|  
|[CDaoRecordset::MoveLast](#movelast)|Posiziona il record corrente sull'ultimo record del recordset.|  
|[CDaoRecordset::MoveNext](#movenext)|Posiziona il record corrente del record successivo nell'oggetto recordset.|  
|[CDaoRecordset::MovePrev](#moveprev)|Posiziona il record corrente del record precedente nell'oggetto recordset.|  
|[CDaoRecordset:: Open](#open)|Crea un nuovo set di record da una tabella, dynaset o snapshot.|  
|[CDaoRecordset::Requery](#requery)|Esegue la query del recordset per aggiornare il record selezionato.|  
|[CDaoRecordset::Seek](#seek)|Individua il record in un oggetto recordset di tipo tabella indicizzata che soddisfa i criteri specificati per l'indice corrente e imposta tale record come record corrente.|  
|[CDaoRecordset:: SetAbsolutePosition](#setabsoluteposition)|Imposta il numero del record corrente dell'oggetto recordset.|  
|[CDaoRecordset::SetBookmark](#setbookmark)|Posiziona il recordset in un record contenente il segnalibro specificato.|  
|[CDaoRecordset:: SetCacheSize](#setcachesize)|Imposta un valore che specifica il numero di record in un recordset di tipo dynaset contenente dati da memorizzare localmente nella cache da un'origine dati ODBC.|  
|[CDaoRecordset:: SetCacheStart](#setcachestart)|Imposta un valore che specifica il segnalibro del primo record del recordset da memorizzare nella cache.|  
|[CDaoRecordset:: SetCurrentIndex](#setcurrentindex)|Chiamato per impostare un indice in un recordset di tipo di tabella.|  
|[CDaoRecordset:: SetFieldDirty](#setfielddirty)|Contrassegna il campo specificato nel record corrente come è stato modificato.|  
|[CDaoRecordset::SetFieldNull](#setfieldnull)|Imposta il valore del campo specificato nel record corrente su Null (non con nessun valore).|  
|[CDaoRecordset::SetFieldValue](#setfieldvalue)|Imposta il valore di un campo in un recordset.|  
|[CDaoRecordset::SetFieldValueNull](#setfieldvaluenull)|Imposta il valore di un campo in un recordset su Null. (non con nessun valore).|  
|[CDaoRecordset::SetLockingMode](#setlockingmode)|Imposta un valore che indica il tipo di blocco per rendere effettive durante la modifica.|  
|[CDaoRecordset::SetParamValue](#setparamvalue)|Imposta il valore corrente del parametro specificato memorizzato nell'oggetto sottostante DAOParameter|  
|[CDaoRecordset::SetParamValueNull](#setparamvaluenull)|Imposta il valore corrente del parametro specificato su Null (non con nessun valore).|  
|[CDaoRecordset:: SetPercentPosition](#setpercentposition)|Imposta la posizione del record corrente in un percorso corrispondente a una percentuale del numero totale di record in un recordset.|  
|[CDaoRecordset::Update](#update)|Completa un' `AddNew` o **modificare** operazione salvando i dati nuovi o modificati nell'origine dati.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoRecordset:: M_bcheckcachefordirtyfields](#m_bcheckcachefordirtyfields)|Contiene un flag che indica se i campi vengono contrassegnati automaticamente come è stato modificato.|  
|[CDaoRecordset::m_nFields](#m_nfields)|Contiene il numero di membri dati di campo nella classe recordset e il numero di colonne selezionate dal recordset dall'origine dati.|  
|[CDaoRecordset::m_nParams](#m_nparams)|Contiene il numero di membri dati di parametro nella classe recordset, il numero di parametri passata con la query del recordset|  
|[CDaoRecordset::m_pDAORecordset](#m_pdaorecordset)|Puntatore all'interfaccia DAO sottostante dell'oggetto recordset.|  
|[CDaoRecordset::m_pDatabase](#m_pdatabase)|Database di origine per questo set di risultati. Contiene un puntatore a un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto.|  
|[CDaoRecordset::m_strFilter](#m_strfilter)|Contiene una stringa utilizzata per costruire un'istruzione SQL **dove** istruzione.|  
|[CDaoRecordset::m_strSort](#m_strsort)|Contiene una stringa utilizzata per costruire un'istruzione SQL **ORDER BY** istruzione.|  
  
## <a name="remarks"></a>Note  
 Noto come "Recordset" `CDaoRecordset` gli oggetti sono disponibili in tre formati seguenti:  
  
-   Recordset di tipo tabella rappresentano una tabella di base che è possibile utilizzare per esaminare, aggiungere, modificare o eliminare record da una singola tabella di database.  
  
-   Recordset di tipo dynaset sono il risultato di una query che può avere i record aggiornabili. Questi tipi di recordset sono un set di record che è possibile utilizzare per esaminare, aggiungere, modificare o eliminare record da tabelle o una tabella di database sottostante. Recordset di tipo dynaset può contenere i campi da una o più tabelle in un database.  
  
-   Recordset di tipo snapshot sono una copia statica di un set di record che è possibile utilizzare per trovare i dati o di generare report. Questi tipi di recordset può contenere i campi da una o più tabelle in un database ma non può essere aggiornate.  
  
 Ogni forma del recordset rappresenta un set di record predefinito al momento che il recordset è aperto. Quando si passa a un record in un recordset di tipo tabella o in un recordset di tipo dynaset, riflette le modifiche apportate al record dopo il recordset è aperto da altri utenti o da altri recordset nell'applicazione. (Impossibile aggiornare un recordset di tipo snapshot). È possibile utilizzare `CDaoRecordset` direttamente o derivare una classe recordset specifiche dell'applicazione da `CDaoRecordset`. È quindi possibile:  
  
-   Scorrere i record.  
  
-   Impostare un indice e cercare rapidamente i record utilizzando [Seek](#seek) (solo per i recordset di tipo tabella).  
  
-   Trovare i record in base a un confronto di stringa: "<",></",>\<=", "=", "> =", o ">" (tipo dynaset e Recordset di tipo snapshot).  
  
-   Aggiornare i record e specificare una modalità di blocco (ad eccezione di recordset di tipo snapshot).  
  
-   Applicare un filtro per limitare i record vengono selezionati tra quelli disponibili nell'origine dati del recordset.  
  
-   Ordinamento del recordset.  
  
-   Impostare i parametri del recordset per personalizzare la selezione con le informazioni non è note in fase di esecuzione.  
  
 Classe `CDaoRecordset` fornisce un'interfaccia simile a quello della classe `CRecordset`. La differenza principale è la classe `CDaoRecordset` accede ai dati tramite un oggetto DAO (Data Access) in base alle OLE. Classe `CRecordset` accede DBMS tramite Open Database Connectivity (ODBC) e un driver ODBC per uno specifico DBMS.  
  
> [!NOTE]
>  Le classi di database DAO sono distinte dalle classi di database MFC basate su ODBC Open Database Connectivity (). Tutti i nomi delle classi di database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO; le classi DAO offrono in genere funzionalità superiori in quanto sono specifiche per il motore di database Microsoft Jet.  
  
 È possibile utilizzare `CDaoRecordset` direttamente o derivare una classe da `CDaoRecordset`. Per utilizzare una classe recordset in entrambi i casi, aprire un database e creare un oggetto recordset, passando al costruttore un puntatore a di `CDaoDatabase` oggetto. È inoltre possibile costruire un `CDaoRecordset` dell'oggetto e consente di creare una password temporanea MFC `CDaoDatabase` oggetto. Chiamare quindi il recordset [aprire](#open) funzione membro, che specifica se l'oggetto è un recordset di tipo tabella, un recordset di tipo dynaset o un recordset di tipo snapshot. La chiamata a **aprire** seleziona i dati dal database e recupera il primo record.  
  
 Utilizzare i membri di dati e funzioni membro dell'oggetto per scorrere i record e operano su di essi. Le operazioni disponibili variano a seconda se l'oggetto è un recordset di tipo tabella, un recordset di tipo dynaset o un recordset di tipo snapshot, e se è aggiornabile o di sola lettura, in base alla capacità del database o dell'origine dati Open Database Connectivity (ODBC). Per aggiornare i record che possono sono stati modificati o aggiunti dopo il **aprire** chiamata, chiamare l'oggetto [Requery](#requery) funzione membro. Chiamare l'oggetto **Chiudi** membro funzione e dopo aver terminato l'eliminazione dell'oggetto.  
  
 `CDaoRecordset`utilizza i campi di record DAO (DFX) per supportare la lettura e l'aggiornamento dei campi di record membri C++ indipendente dai tipi di `CDaoRecordset` o `CDaoRecordset`-classe derivata. È anche possibile implementare l'associazione dinamica di colonne in un database senza utilizzare il meccanismo DFX utilizzando [GetFieldValue](#getfieldvalue) e [SetFieldValue](#setfieldvalue).  
  
 Per informazioni correlate, vedere l'argomento "Oggetto Recordset" nella Guida di DAO.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDaoRecordset`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
##  <a name="addnew"></a>CDaoRecordset:: AddNew  
 Chiamare questa funzione membro per aggiungere un nuovo record a un recordset di tipo tabella o dynaset.  
  
```  
virtual void AddNew();
```  
  
### <a name="remarks"></a>Note  
 I campi del record sono inizialmente Null. (Nella terminologia dei database, Null significa "non having alcun valore" e non è identico **NULL** in C++.) Per completare l'operazione, è necessario chiamare il [aggiornamento](#update) funzione membro. **Aggiornamento** Salva le modifiche apportate all'origine dati.  
  
> [!CAUTION]
>  Se si modifica un record e quindi scorrere fino a un altro record senza chiamare il metodo **aggiornamento**, le modifiche andranno perdute senza alcun avviso.  
  
 Se si aggiunge un record a un recordset di tipo dynaset chiamando [AddNew](#addnew), il record è visibile nell'oggetto recordset e incluso nella tabella sottostante dove risulta visibile a qualsiasi nuovo `CDaoRecordset` oggetti.  
  
 La posizione del nuovo record dipende dal tipo di recordset:  
  
-   In un tipo dynaset recordset, in cui viene inserito il nuovo record non è garantito. Questo comportamento è stato modificato con Microsoft Jet 3.0 per motivi di prestazioni e la concorrenza. Se l'obiettivo consiste nel creare il record appena aggiunto il record corrente, ottenere il segnalibro dell'ultimo record modificato e spostare il segnalibro:  
  
 [!code-cpp[NVC_MFCDatabase n.&1;](../../mfc/codesnippet/cpp/cdaorecordset-class_1.cpp)]  
  
-   In un recordset di tipo di tabella per cui è stato specificato un indice, vengono restituiti i record nella posizione nell'ordinamento. Se non è stato specificato alcun indice, i nuovi record vengono restituiti alla fine dell'oggetto recordset.  
  
 Il record corrente prima di utilizzare `AddNew` rimane invariato. Se si desidera rendere il nuovo record corrente e il recordset supporta i segnalibri, chiamata [SetBookmark](#setbookmark) al segnalibro identificato dall'impostazione della proprietà LastModified dell'oggetto recordset DAO sottostante. In questo modo è utile per determinare il valore per i campi Contatore (incremento automatico) in un record aggiunto. Per ulteriori informazioni, vedere [GetLastModifiedBookmark](#getlastmodifiedbookmark).  
  
 Se il database supporta le transazioni, è possibile rendere il `AddNew` delle chiamate parte di una transazione. Per ulteriori informazioni sulle transazioni, vedere la classe [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md). Si noti che è necessario chiamare [CDaoWorkspace::BeginTrans](../../mfc/reference/cdaoworkspace-class.md#begintrans) prima di chiamare `AddNew`.  
  
 Non è consentito chiamare `AddNew` per un oggetto recordset i cui [aprire](#open) funzione membro non è stata chiamata. Oggetto `CDaoException` viene generata se si chiama `AddNew` per un recordset che non può essere aggiunto. È possibile determinare se il recordset è aggiornabile chiamando [CanAppend](#canappend).  
  
 I segni di framework modificato membri dati di campo per garantire che verrà scritto il record nell'origine dati mediante il meccanismo di scambio (DFX) di campi di record DAO. Modifica del valore di un campo in genere impostato il dirty automaticamente, pertanto raramente sarà necessario chiamare [SetFieldDirty](#setfielddirty) autonomamente, ma si potrebbe essere utile verificare che le colonne verranno essere aggiornate o inserite indipendentemente dal valore sia nel membro dati di campo in modo esplicito. Il meccanismo DFX utilizza anche l'utilizzo di **PSEUDO NULL**. Per ulteriori informazioni, vedere [CDaoFieldExchange:: M_noperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).  
  
 Se non viene utilizzato il meccanismo del doppio buffer, quindi modificare il valore del campo non imposta automaticamente il campo come dirty. In questo caso, sarà necessario impostare esplicitamente il campo modificato. Il flag contenuto in [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controlla questo controllo automatico dei campi.  
  
> [!NOTE]
>  Se i record sono a doppio buffer (ovvero, il controllo automatico dei campi è abilitato), la chiamata `CancelUpdate` ripristinerà le variabili membro per i valori che avevano prima `AddNew` o **modificare** è stato chiamato.  
  
 Per informazioni correlate, vedere gli argomenti "Metodo AddNew", "Metodo CancelUpdate", "Proprietà LastModified" e "Proprietà EditMode" nella Guida di DAO.  
  
##  <a name="canappend"></a>CDaoRecordset::CanAppend  
 Chiamare questa funzione membro per determinare se il recordset aperto in precedenza consente di aggiungere nuovi record tramite la chiamata di [AddNew](#addnew) funzione membro.  
  
```  
BOOL CanAppend() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il recordset consente di aggiungere nuovi record; in caso contrario 0. `CanAppend`verrà restituito 0 se si apre il recordset in sola lettura.  
  
### <a name="remarks"></a>Note  
 Per informazioni correlate, vedere l'argomento "Metodo Append" nella Guida di DAO.  
  
##  <a name="canbookmark"></a>CDaoRecordset:: CanBookmark  
 Chiamare questa funzione membro per determinare se il recordset aperto in precedenza consente di contrassegnare singoli record utilizzando i segnalibri.  
  
```  
BOOL CanBookmark();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto recordset supporta i segnalibri, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se si utilizza recordset basato interamente su tabelle di motore di database Microsoft Jet, è possono usare i segnalibri tranne per i recordset di tipo snapshot viene contrassegnato come recordset forward-only scorrimento. Altri prodotti di database (origini dati ODBC esterne) potrebbero non supportare i segnalibri.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà supporta" nella Guida di DAO.  
  
##  <a name="cancelupdate"></a>CDaoRecordset::CancelUpdate  
 Il `CancelUpdate` funzione membro Annulla eventuali aggiornamenti in sospeso a causa di un [modificare](#edit) o [AddNew](#addnew) operazione.  
  
```  
virtual void CancelUpdate();
```  
  
### <a name="remarks"></a>Note  
 Ad esempio, se un'applicazione chiama il **modificare** o `AddNew` funzione membro e non è chiamato [aggiornamento](#update), `CancelUpdate` Annulla le modifiche apportate dopo **modificare** o `AddNew` è stato chiamato.  
  
> [!NOTE]
>  Se i record sono a doppio buffer (ovvero, il controllo automatico dei campi è abilitato), la chiamata `CancelUpdate` ripristinerà le variabili membro per i valori che avevano prima `AddNew` o **modificare** è stato chiamato.  
  
 Se è presente alcun **modificare** o `AddNew` operazione in sospeso, `CancelUpdate` fa sì che MFC generare un'eccezione. Chiamare il [GetEditMode](#geteditmode) funzione membro per determinare se è presente un'operazione in sospeso che può essere annullata.  
  
 Per informazioni correlate, vedere l'argomento "Metodo CancelUpdate" nella Guida di DAO.  
  
##  <a name="canrestart"></a>CDaoRecordset::CanRestart  
 Chiamare questa funzione membro per determinare se il recordset è possibile riavviare la query (per aggiornare i record) chiamando il **Requery** funzione membro.  
  
```  
BOOL CanRestart();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se **Requery** può essere chiamato per eseguire la query del recordset, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Recordset di tipo tabella non supportano **Requery**.  
  
 Se **Requery** non è supportato, chiamare [Chiudi](#close) quindi [aprire](#open) per aggiornare i dati. È possibile chiamare **Requery** per aggiornare un oggetto recordset sottostante della query con parametri dopo i valori di parametro sono stati modificati.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà riavviabili" nella Guida di DAO.  
  
##  <a name="canscroll"></a>CDaoRecordset::CanScroll  
 Chiamare questa funzione membro per determinare se il recordset consente lo scorrimento.  
  
```  
BOOL CanScroll() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è possibile scorrere i record, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se si chiama [aprire](#open) con **dbForwardOnly**, il recordset può solo lo scorrimento in avanti.  
  
 Per informazioni correlate, vedere l'argomento "Posizionamento del Record corrente puntatore con DAO" nella Guida di DAO.  
  
##  <a name="cantransact"></a>CDaoRecordset::CanTransact  
 Chiamare questa funzione membro per determinare se il recordset consente alle transazioni.  
  
```  
BOOL CanTransact();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'origine dati sottostante supporta le transazioni, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per informazioni correlate, vedere l'argomento "Proprietà Transactions" nella Guida di DAO.  
  
##  <a name="canupdate"></a>CDaoRecordset::CanUpdate  
 Chiamare questa funzione membro per determinare se il recordset può essere aggiornato.  
  
```  
BOOL CanUpdate() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il recordset può essere aggiornato (aggiungere, aggiornare ed eliminare record), in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Potrebbe essere un recordset di sola lettura se l'origine dati sottostante è di sola lettura o se è stato specificato **dbReadOnly** per `nOptions` durante la chiamata [aprire](#open) per il recordset.  
  
 Per informazioni correlate, vedere gli argomenti "Metodo AddNew", "Modifica metodo", "Metodo Delete", "Metodo di aggiornamento" e "Proprietà aggiornabile" nella Guida di DAO.  
  
##  <a name="cdaorecordset"></a>CDaoRecordset::CDaoRecordset  
 Costruisce un oggetto `CDaoRecordset`.  
  
```  
CDaoRecordset(CDaoDatabase* pDatabase = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pDatabase`  
 Contiene un puntatore a un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto o il valore **NULL**. Se non **NULL** e `CDaoDatabase` dell'oggetto **aprire** funzione membro non è stata chiamata per connettersi all'origine dati, l'oggetto recordset tenta di aprirlo automaticamente durante il proprio [aprire](#open) chiamare. Se si passa **NULL**, `CDaoDatabase` oggetto viene costruito e connessi mediante le informazioni di origine dati è specificato se si deriva la classe del recordset da `CDaoRecordset`.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare `CDaoRecordset` direttamente o derivare una classe specifica dell'applicazione da `CDaoRecordset`. È possibile utilizzare Creazione guidata classe per derivare le classi di recordset.  
  
> [!NOTE]
>  Se si deriva un `CDaoRecordset` classe derivata la classe deve fornire il proprio costruttore. Nel costruttore della classe derivata, chiamare il costruttore `CDaoRecordset::CDaoRecordset`, passando i parametri appropriati insieme a esso.  
  
 Passare **NULL** al costruttore del recordset per avere un `CDaoDatabase` oggetto creato e collegato automaticamente per l'utente. Questo è un collegamento utile che non richiede la creazione e connessione un `CDaoDatabase` oggetto prima della creazione del recordset. Se il `CDaoDatabase` oggetto non è aperto, un [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) inoltre essere creato l'oggetto che utilizza l'area di lavoro predefinito. Per ulteriori informazioni, vedere [CDaoDatabase::CDaoDatabase](../../mfc/reference/cdaodatabase-class.md#cdaodatabase).  
  
##  <a name="close"></a>CDaoRecordset::Close  
 Chiusura di un `CDaoRecordset` oggetto lo rimuove dalla raccolta di set di record aperti nel database associato.  
  
```  
virtual void Close();
```  
  
### <a name="remarks"></a>Note  
 Poiché **Chiudi** non elimina il `CDaoRecordset` dell'oggetto, è possibile riutilizzare l'oggetto chiamando **aprire** la stessa origine dati o un'origine dati diversa.  
  
 Tutte in sospeso [AddNew](#addnew) o [modificare](#edit) istruzioni vengono annullate e viene eseguito il rollback di tutte le transazioni in sospeso. Se si desidera mantenere le aggiunte o modifiche in sospeso, chiamare [aggiornamento](#update) prima di chiamare **Chiudi** per ogni oggetto recordset.  
  
 È possibile chiamare **aprire** nuovamente dopo la chiamata **Chiudi**. Ciò consente di riutilizzare l'oggetto recordset. Un'alternativa migliore consiste nel chiamare [Requery](#requery), se possibile.  
  
 Per informazioni correlate, vedere l'argomento "Close (metodo)" nella Guida di DAO.  
  
##  <a name="delete"></a>CDaoRecordset::Delete  
 Chiamare questa funzione membro per eliminare il record corrente in un oggetto recordset di tipo dynaset o tabella tipo aperto.  
  
```  
virtual void Delete();
```  
  
### <a name="remarks"></a>Note  
 Dopo la corretta eliminazione, i membri dati di campo del recordset vengono impostati su un valore Null ed è necessario chiamare in modo esplicito una delle funzioni membro di navigazione recordset ( [spostare](#move), [Seek](#seek), [SetBookmark](#setbookmark)e così via) per spostarsi dal record eliminato. Quando si eliminano record da un recordset, è necessario un record del recordset prima di chiamare **eliminare**; in caso contrario, MFC genera un'eccezione.  
  
 **Eliminare** rimuove il record corrente e rende inaccessibili. Anche se è possibile modificare o utilizzare il record eliminato, rimane corrente. Dopo il passaggio a un altro record, tuttavia, è possibile effettuare il record eliminato corrente nuovamente.  
  
> [!CAUTION]
>  Il recordset deve essere aggiornabile e deve esistere un record valido nel set di record corrente quando si chiama **eliminare**. Ad esempio, se si elimina un record ma non è possibile scorrere in un nuovo record prima di chiamare **eliminare** , **eliminare** genera un [CDaoException](../../mfc/reference/cdaoexception-class.md).  
  
 È possibile annullare l'eliminazione di un record se si utilizzano le transazioni e si chiama il [CDaoWorkspace::Rollback](../../mfc/reference/cdaoworkspace-class.md#rollback) funzione membro. Se la tabella di base è la tabella primaria in una catena Elimina relazione, eliminare il record corrente può anche eliminare uno o più record in una tabella esterna. Per ulteriori informazioni, vedere la propagazione"definizione" eliminare la Guida di DAO.  
  
 A differenza di `AddNew` e **modificare**, una chiamata a **eliminare** non è seguito da una chiamata a **aggiornamento**.  
  
 Per informazioni correlate, vedere gli argomenti "Metodo AddNew", "Modifica metodo", "Metodo Delete", "Metodo di aggiornamento" e "Proprietà aggiornabile" nella Guida di DAO.  
  
##  <a name="dofieldexchange"></a>CDaoRecordset::DoFieldExchange  
 Il framework chiama questa funzione membro per scambiare automaticamente i dati tra i membri dati di campo dell'oggetto recordset e le colonne corrispondenti del record corrente nell'origine dati.  
  
```  
virtual void DoFieldExchange(CDaoFieldExchange* pFX);
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Contiene un puntatore a un `CDaoFieldExchange` oggetto. Il framework sarà già impostata su questo oggetto per specificare un contesto per l'operazione di scambio di campo.  
  
### <a name="remarks"></a>Note  
 Inoltre, associa i membri dati del parametro, se disponibili, per i segnaposto dei parametri nella stringa dell'istruzione SQL per la selezione del recordset. Lo scambio di dati di campo, denominato campi di record DAO (DFX) funziona in entrambe le direzioni: dai membri di dati dell'oggetto recordset campi ai campi di record nell'origine dati e dal record nell'origine dei dati per l'oggetto recordset. Se si desidera associare le colonne in modo dinamico, non è necessario implementare `DoFieldExchange`.  
  
 L'unica azione in genere è necessario eseguire per implementare `DoFieldExchange` per il recordset derivato classe consiste nel creare la classe con la creazione guidata classe e specificare i tipi di dati e i nomi dei membri dati del campo. È anche possibile aggiungere codice a cosa ClassWizard scrive specificare i membri dati di parametro. Se tutti i campi devono essere associati in modo dinamico, questa funzione sarà inattiva se non si specificano membri dati di parametro.  
  
 Quando si dichiara la classe recordset derivata con ClassWizard, la procedura guidata scrive un override di `DoFieldExchange` , che è simile all'esempio seguente:  
  
 [!code-cpp[NVC_MFCDatabase n.&2;](../../mfc/codesnippet/cpp/cdaorecordset-class_2.cpp)]  
  
##  <a name="edit"></a>CDaoRecordset:: Edit  
 Chiamare questa funzione membro per consentire la modifica al record corrente.  
  
```  
virtual void Edit();
```  
  
### <a name="remarks"></a>Note  
 Dopo aver chiamato il **modificare** funzione membro, le modifiche apportate ai campi del record corrente vengono copiati nel buffer di copia. Dopo aver apportato le modifiche desiderate al record, chiamare **aggiornamento** per salvare le modifiche. **Modificare** Salva i valori dei membri dati del recordset. Se si chiama **modificare**, apportare modifiche, quindi chiamare **modificare** nuovamente, vengono ripristinati i valori del record di fossero prima del primo **modificare** chiamare.  
  
> [!CAUTION]
>  Se si modifica un record e quindi eseguire qualsiasi operazione di spostamento a un altro record senza prima chiamare **aggiornamento**, le modifiche andranno perdute senza alcun avviso. Inoltre, se si chiude l'oggetto recordset o il database padre, il record modificato viene eliminato senza avviso.  
  
 In alcuni casi, si desidera aggiornare una colonna, rendendo Null (che non contengono dati). A tale scopo, chiamare `SetFieldNull` con un parametro di **TRUE** per contrassegnare il campo Null; in questo modo anche la colonna da aggiornare. Se si desidera che un campo per scrivere l'origine dati anche se non è stato modificato il relativo valore, chiamare `SetFieldDirty` con un parametro di **TRUE**. Ciò avviene anche se il campo ha valore Null.  
  
 I segni di framework modificato membri dati di campo per garantire che verrà scritto il record nell'origine dati mediante il meccanismo di scambio (DFX) di campi di record DAO. Modifica del valore di un campo in genere impostato il dirty automaticamente, pertanto raramente sarà necessario chiamare [SetFieldDirty](#setfielddirty) autonomamente, ma si potrebbe essere utile verificare che le colonne verranno essere aggiornate o inserite indipendentemente dal valore sia nel membro dati di campo in modo esplicito. Il meccanismo DFX utilizza anche l'utilizzo di **PSEUDO NULL**. Per ulteriori informazioni, vedere [CDaoFieldExchange:: M_noperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).  
  
 Se non viene utilizzato il meccanismo del doppio buffer, quindi modificare il valore del campo non imposta automaticamente il campo come dirty. In questo caso, sarà necessario impostare esplicitamente il campo modificato. Il flag contenuto in [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controlla questo controllo automatico dei campi.  
  
 Quando l'oggetto recordset è blocco pessimistico in un ambiente multiutente, il record rimane bloccato dal momento in cui **modificare** viene utilizzata fino a completa l'aggiornamento. Se il recordset ottimistico è bloccato, il record è bloccato e confrontato con il record precedentemente modificato prima viene aggiornato nel database. Se il record è stato modificato dopo la chiamata **modificare**, **aggiornamento** operazione ha esito negativo e MFC genera un'eccezione. È possibile modificare la modalità di blocco con `SetLockingMode`.  
  
> [!NOTE]
>  Blocco ottimistico viene sempre utilizzato in formati di database esterno, ad esempio ODBC e driver ISAM installabile.  
  
 Il record corrente rimane invariato dopo la chiamata **modificare**. Per chiamare **modificare**, deve essere presente un record corrente. Se è presente alcun record corrente o se il recordset non fa riferimento a un oggetto recordset di tipo dynaset open-tipo di tabella, si verifica un'eccezione. La chiamata a **modificare** provoca un `CDaoException` per essere generata nelle condizioni seguenti:  
  
-   Non è presente alcun record corrente.  
  
-   Il database o il recordset è di sola lettura.  
  
-   Nessun campo nel record è aggiornabile.  
  
-   Il database o il recordset è stato aperto per l'utilizzo esclusivo da un altro utente.  
  
-   Un altro utente ha bloccato la pagina contenente il record.  
  
 Se l'origine dati supporta transazioni, è possibile rendere il **modificare** delle chiamate parte di una transazione. Si noti che è necessario chiamare `CDaoWorkspace::BeginTrans` prima di chiamare **modificare** e dopo aver aperto il recordset. Si noti inoltre che la chiamata `CDaoWorkspace::CommitTrans` non è un sostituto per chiamare il metodo **aggiornamento** per completare il **modificare** operazione. Per ulteriori informazioni sulle transazioni, vedere la classe `CDaoWorkspace`.  
  
 Per informazioni correlate, vedere gli argomenti "Metodo AddNew", "Modifica metodo", "Metodo Delete", "Metodo di aggiornamento" e "Proprietà aggiornabile" nella Guida di DAO.  
  
##  <a name="fillcache"></a>CDaoRecordset:: FillCache  
 Chiamare questa funzione membro per memorizzare nella cache un numero specificato di record dal recordset.  
  
```  
void FillCache(
    long* pSize = NULL,  
    COleVariant* pBookmark = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pSize`  
 Specifica il numero di righe da inserire nella cache. Se si omette questo parametro, il valore è determinato dall'impostazione della proprietà CacheSize dell'oggetto DAO sottostante.  
  
 `pBookmark`  
 Oggetto [COleVariant](../../mfc/reference/colevariant-class.md) specificando un segnalibro. La cache viene riempita a partire dal record indicato dal segnalibro. Se si omette questo parametro, la cache viene riempita a partire dal record indicato dalla proprietà CacheStart dell'oggetto DAO sottostante.  
  
### <a name="remarks"></a>Note  
 La memorizzazione nella cache migliora le prestazioni di un'applicazione che consente di recuperare o recupera, i dati da un server remoto. La cache è lo spazio nella memoria locale che contiene i dati recuperati più di recente dal server in base al presupposto che i dati verranno richiesti nuovamente durante l'esecuzione dell'applicazione. Quando vengono richiesti dati, il motore di database Microsoft Jet controlla innanzitutto la cache per i dati anziché il suo recupero dal server, che richiede più tempo. Utilizzando i dati la memorizzazione nella cache le origini dati ODBC non ha alcun effetto come i dati non vengono salvati nella cache.  
  
 Anziché attendere che la cache essere compilata con i record man mano che vengono richiamate, è possibile compilare in modo esplicito la cache in qualsiasi momento chiamando la `FillCache` funzione membro. Questo è un modo più veloce per riempire la cache in quanto `FillCache` recupera più record in una sola volta anziché uno alla volta. Ad esempio, mentre ogni schermata di record, è possibile configurare la chiamata dell'applicazione `FillCache` per recuperare la successiva schermata di record.  
  
 Qualsiasi database ODBC accessibile con gli oggetti recordset può avere una cache locale. Per creare la cache, aprire un oggetto recordset dall'origine dati remota e quindi chiamare il `SetCacheSize` e `SetCacheStart` funzioni membro dell'oggetto recordset. Se `lSize` e *lBookmark* creare un intervallo che non rientra nell'intervallo specificato dai parzialmente o totalmente `SetCacheSize` e `SetCacheStart`, la parte del recordset all'esterno di questo intervallo viene ignorata e non è stata caricata nella cache. Se `FillCache` , le richieste di record maggiore rimangono nell'origine dati remota, vengono recuperati solo i record rimanenti e viene generata alcuna eccezione.  
  
 I record recuperati dalla cache non riflettono le modifiche apportate contemporaneamente all'origine dati da altri utenti.  
  
 `FillCache`Recupera solo i record non è già stato memorizzato nella cache. Per forzare un aggiornamento di tutti i dati memorizzati nella cache, chiamare il `SetCacheSize` funzione membro con un `lSize` parametro uguale a 0, chiamata `SetCacheSize` nuovamente con il `lSize` parametro uguale alla dimensione della cache è richiesto in origine e quindi chiamare `FillCache`.  
  
 Per informazioni correlate, vedere l'argomento "Metodo FillCache" nella Guida di DAO.  
  
##  <a name="find"></a>CDaoRecordset::Find  
 Chiamare questa funzione membro per individuare una determinata stringa in un recordset di tipo dynaset o snapshot utilizzando un operatore di confronto.  
  
```  
virtual BOOL Find(
    long lFindType,  
    LPCTSTR lpszFilter);
```  
  
### <a name="parameters"></a>Parametri  
 *lFindType*  
 Un valore che indica il tipo di operazione di ricerca desiderato. I valori possibili sono:  
  
- **AFX_DAO_NEXT** individuare il successivo percorso di una stringa corrispondente.  
  
- **AFX_DAO_PREV** individuare il percorso precedente di una stringa corrispondente.  
  
- **AFX_DAO_FIRST** individuare la prima posizione di una stringa corrispondente.  
  
- **AFX_DAO_LAST** trovare l'ultimo percorso di una stringa corrispondente.  
  
 `lpszFilter`  
 Un'espressione stringa (come il **in** clausola in un'istruzione SQL senza la parola **in**) utilizzato per individuare il record. Ad esempio:  
  
 [!code-cpp[NVC_MFCDatabase n.&3;](../../mfc/codesnippet/cpp/cdaorecordset-class_3.cpp)]  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se vengono trovati record corrispondenti, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È possibile trovare innanzitutto successivo, precedente o nell'ultima istanza della stringa. **Trovare** è una funzione virtuale, pertanto è possibile eseguirne l'override e aggiungere la propria implementazione. Il `FindFirst`, `FindLast`, `FindNext`, e `FindPrev` chiamata di funzioni membro di **trovare** funzione membro, è possibile utilizzare **trovare** per controllare il comportamento di tutte le operazioni di ricerca.  
  
 Per individuare un record in un recordset di tipo tabella, chiamare il [Seek](#seek) funzione membro.  
  
> [!TIP]
>  Minore è il set di record sono più efficienti **trovare** sarà. In generale e in particolare con dati ODBC, è preferibile creare una nuova query che recupera solo i record desiderati.  
  
 Per informazioni correlate, vedere l'argomento "FindFirst, FindLast, FindNext e FindPrevious metodi" nella Guida di DAO.  
  
##  <a name="findfirst"></a>CDaoRecordset::FindFirst  
 Chiamare questa funzione membro per trovare il primo record che soddisfano una condizione specificata.  
  
```  
BOOL FindFirst(LPCTSTR lpszFilter);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFilter`  
 Un'espressione stringa (come il **in** clausola in un'istruzione SQL senza la parola **in**) utilizzato per individuare il record.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se vengono trovati record corrispondenti, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il `FindFirst` funzione membro inizia la ricerca dall'inizio del recordset e le ricerche alla fine dell'oggetto recordset.  
  
 Se si desidera includere tutti i record nella ricerca (non solo quelli che soddisfano una determinata condizione) utilizzano una delle operazioni di spostamento per spostare da un record a altro. Per individuare un record in un recordset di tipo tabella, chiamare il `Seek` funzione membro.  
  
 Se non si trova un record corrispondente ai criteri, il puntatore del record corrente è indeterminato, e `FindFirst` restituisce zero. Se il recordset contiene più di un record che soddisfano i criteri, `FindFirst` individua la prima occorrenza, `FindNext` individua l'occorrenza successiva e così via.  
  
> [!CAUTION]
>  Se si modifica il record corrente, assicurarsi di salvare le modifiche chiamando il **aggiornamento** funzione membro prima di passare a un altro record. Se si sposta in un altro record senza l'aggiornamento, le modifiche andranno perse senza alcun avviso.  
  
 Il **trovare** funzioni membro di ricerca dalla posizione e nella direzione specificata nella tabella seguente:  
  
|Operazioni di ricerca|Iniziare|Direzione ricerca|  
|---------------------|-----------|----------------------|  
|`FindFirst`|Inizio del recordset|Fine dell'oggetto recordset|  
|`FindLast`|Fine dell'oggetto recordset|Inizio del recordset|  
|`FindNext`|Record corrente|Fine dell'oggetto recordset|  
|**FindPrevious**|Record corrente|Inizio del recordset|  
  
> [!NOTE]
>  Quando si chiama `FindLast`, il motore di database Microsoft Jet viene popolato completamente il recordset prima di iniziare la ricerca, se non è già stato fatto. La prima ricerca può richiedere più ricerche successive.  
  
 Utilizzando una delle operazioni di ricerca non è uguale alla chiamata al metodo **MoveFirst** o `MoveNext`, tuttavia, che rende semplicemente il primo o il successivo record corrente senza specificare una condizione. È possibile eseguire un'operazione di ricerca con un'operazione di spostamento.  
  
 Quando si utilizzano le operazioni di ricerca, tenere presente quanto segue:  
  
-   Se **trovare** restituisce diverso da zero, il record corrente non è definito. In questo caso, è necessario posizionare il puntatore del record corrente Torna a un record valido.  
  
-   È possibile utilizzare un'operazione di ricerca con un recordset di tipo snapshot scorrimento forward-only.  
  
-   È necessario utilizzare il formato della data (mese-giorno-anno) degli Stati Uniti per la ricerca di campi che contengono date, anche se non si utilizza la versione degli Stati Uniti del motore di database Microsoft Jet; in caso contrario, i record corrispondenti non sono disponibili.  
  
-   Quando si lavora con database ODBC e dynaset di grandi dimensioni, si potrebbe scoprire che utilizzano le operazioni di ricerca è lenta, soprattutto quando si utilizzano oggetti Recordset di grandi dimensioni. È possibile migliorare le prestazioni tramite query SQL con personalizzato **ORDERBY** o **in** clausole, le query con parametri, o **CDaoQuerydef** gli oggetti che recuperano record indicizzati specifici.  
  
 Per informazioni correlate, vedere l'argomento "FindFirst, FindLast, FindNext e FindPrevious metodi" nella Guida di DAO.  
  
##  <a name="findlast"></a>CDaoRecordset::FindLast  
 Chiamare questa funzione membro per trovare l'ultimo record che soddisfano una condizione specificata.  
  
```  
BOOL FindLast(LPCTSTR lpszFilter);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFilter`  
 Un'espressione stringa (come il **in** clausola in un'istruzione SQL senza la parola **in**) utilizzato per individuare il record.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se vengono trovati record corrispondenti, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il `FindLast` funzione membro inizia la ricerca alla fine del recordset e Cerca all'indietro verso l'inizio dell'oggetto recordset.  
  
 Se si desidera includere tutti i record nella ricerca (non solo quelli che soddisfano una determinata condizione) utilizzano una delle operazioni di spostamento per spostare da un record a altro. Per individuare un record in un recordset di tipo tabella, chiamare il `Seek` funzione membro.  
  
 Se non si trova un record corrispondente ai criteri, il puntatore del record corrente è indeterminato, e `FindLast` restituisce zero. Se il recordset contiene più di un record che soddisfano i criteri, `FindFirst` individua la prima occorrenza, `FindNext` individua l'occorrenza successiva dopo la prima occorrenza e così via.  
  
> [!CAUTION]
>  Se si modifica il record corrente, assicurarsi salvare le modifiche chiamando il **aggiornamento** funzione membro prima di passare a un altro record. Se si sposta in un altro record senza l'aggiornamento, le modifiche andranno perse senza alcun avviso.  
  
 Utilizzando una delle operazioni di ricerca non è uguale alla chiamata al metodo **MoveFirst** o `MoveNext`, tuttavia, che rende semplicemente il primo o il successivo record corrente senza specificare una condizione. È possibile eseguire un'operazione di ricerca con un'operazione di spostamento.  
  
 Quando si utilizzano le operazioni di ricerca, tenere presente quanto segue:  
  
-   Se **trovare** restituisce diverso da zero, il record corrente non è definito. In questo caso, è necessario posizionare il puntatore del record corrente Torna a un record valido.  
  
-   È possibile utilizzare un'operazione di ricerca con un recordset di tipo snapshot scorrimento forward-only.  
  
-   È necessario utilizzare il formato della data (mese-giorno-anno) degli Stati Uniti per la ricerca di campi che contengono date, anche se non si utilizza la versione degli Stati Uniti del motore di database Microsoft Jet; in caso contrario, i record corrispondenti non sono disponibili.  
  
-   Quando si lavora con database ODBC e dynaset di grandi dimensioni, si potrebbe scoprire che utilizzano le operazioni di ricerca è lenta, soprattutto quando si utilizzano oggetti Recordset di grandi dimensioni. È possibile migliorare le prestazioni tramite query SQL con personalizzato **ORDERBY** o **in** clausole, le query con parametri, o **CDaoQuerydef** gli oggetti che recuperano record indicizzati specifici.  
  
 Per informazioni correlate, vedere l'argomento "FindFirst, FindLast, FindNext e FindPrevious metodi" nella Guida di DAO.  
  
##  <a name="findnext"></a>CDaoRecordset::FindNext  
 Chiamare questa funzione membro per trovare il record successivo che corrisponde a una condizione specificata.  
  
```  
BOOL FindNext(LPCTSTR lpszFilter);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFilter`  
 Un'espressione stringa (come il **in** clausola in un'istruzione SQL senza la parola **in**) utilizzato per individuare il record.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se vengono trovati record corrispondenti, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il `FindNext` funzione membro inizia la ricerca in corrispondenza del record corrente e con ricerca alla fine dell'oggetto recordset.  
  
 Se si desidera includere tutti i record nella ricerca (non solo quelli che soddisfano una determinata condizione) utilizzano una delle operazioni di spostamento per spostare da un record a altro. Per individuare un record in un recordset di tipo tabella, chiamare il `Seek` funzione membro.  
  
 Se non si trova un record corrispondente ai criteri, il puntatore del record corrente è indeterminato, e `FindNext` restituisce zero. Se il recordset contiene più di un record che soddisfano i criteri, `FindFirst` individua la prima occorrenza, `FindNext` individua l'occorrenza successiva e così via.  
  
> [!CAUTION]
>  Se si modifica il record corrente, assicurarsi salvare le modifiche chiamando il **aggiornamento** funzione membro prima di passare a un altro record. Se si sposta in un altro record senza l'aggiornamento, le modifiche andranno perse senza alcun avviso.  
  
 Utilizzando una delle operazioni di ricerca non è uguale alla chiamata al metodo **MoveFirst** o `MoveNext`, tuttavia, che rende semplicemente il primo o il successivo record corrente senza specificare una condizione. È possibile eseguire un'operazione di ricerca con un'operazione di spostamento.  
  
 Quando si utilizzano le operazioni di ricerca, tenere presente quanto segue:  
  
-   Se **trovare** restituisce diverso da zero, il record corrente non è definito. In questo caso, è necessario posizionare il puntatore del record corrente Torna a un record valido.  
  
-   È possibile utilizzare un'operazione di ricerca con un recordset di tipo snapshot scorrimento forward-only.  
  
-   È necessario utilizzare il formato della data (mese-giorno-anno) degli Stati Uniti per la ricerca di campi che contengono date, anche se non si utilizza la versione degli Stati Uniti del motore di database Microsoft Jet; in caso contrario, i record corrispondenti non sono disponibili.  
  
-   Quando si lavora con database ODBC e dynaset di grandi dimensioni, si potrebbe scoprire che utilizzano le operazioni di ricerca è lenta, soprattutto quando si utilizzano oggetti Recordset di grandi dimensioni. È possibile migliorare le prestazioni tramite query SQL con personalizzato **ORDERBY** o **in** clausole, le query con parametri, o **CDaoQuerydef** gli oggetti che recuperano record indicizzati specifici.  
  
 Per informazioni correlate, vedere l'argomento "FindFirst, FindLast, FindNext e FindPrevious metodi" nella Guida di DAO.  
  
##  <a name="findprev"></a>CDaoRecordset::FindPrev  
 Chiamare questa funzione membro per trovare il record precedente che corrisponde a una condizione specificata.  
  
```  
BOOL FindPrev(LPCTSTR lpszFilter);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFilter`  
 Un'espressione stringa (come il **in** clausola in un'istruzione SQL senza la parola **in**) utilizzato per individuare il record.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se vengono trovati record corrispondenti, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il `FindPrev` funzione membro inizia la ricerca in corrispondenza del record corrente e procede all'indietro verso l'inizio dell'oggetto recordset.  
  
 Se si desidera includere tutti i record nella ricerca (non solo quelli che soddisfano una determinata condizione) utilizzano una delle operazioni di spostamento per spostare da un record a altro. Per individuare un record in un recordset di tipo tabella, chiamare il `Seek` funzione membro.  
  
 Se non si trova un record corrispondente ai criteri, il puntatore del record corrente è indeterminato, e `FindPrev` restituisce zero. Se il recordset contiene più di un record che soddisfano i criteri, `FindFirst` individua la prima occorrenza, `FindNext` individua l'occorrenza successiva e così via.  
  
> [!CAUTION]
>  Se si modifica il record corrente, assicurarsi salvare le modifiche chiamando il **aggiornamento** funzione membro prima di passare a un altro record. Se si sposta in un altro record senza l'aggiornamento, le modifiche andranno perse senza alcun avviso.  
  
 Utilizzando una delle operazioni di ricerca non è uguale alla chiamata al metodo **MoveFirst** o `MoveNext`, tuttavia, che rende semplicemente il primo o il successivo record corrente senza specificare una condizione. È possibile eseguire un'operazione di ricerca con un'operazione di spostamento.  
  
 Quando si utilizzano le operazioni di ricerca, tenere presente quanto segue:  
  
-   Se **trovare** restituisce diverso da zero, il record corrente non è definito. In questo caso, è necessario posizionare il puntatore del record corrente Torna a un record valido.  
  
-   È possibile utilizzare un'operazione di ricerca con un recordset di tipo snapshot scorrimento forward-only.  
  
-   È necessario utilizzare il formato della data (mese-giorno-anno) degli Stati Uniti per la ricerca di campi che contengono date, anche se non si utilizza la versione degli Stati Uniti del motore di database Microsoft Jet; in caso contrario, i record corrispondenti non sono disponibili.  
  
-   Quando si lavora con database ODBC e dynaset di grandi dimensioni, si potrebbe scoprire che utilizzano le operazioni di ricerca è lenta, soprattutto quando si utilizzano oggetti Recordset di grandi dimensioni. È possibile migliorare le prestazioni tramite query SQL con personalizzato **ORDERBY** o **in** clausole, le query con parametri, o **CDaoQuerydef** gli oggetti che recuperano record indicizzati specifici.  
  
 Per informazioni correlate, vedere l'argomento "FindFirst, FindLast, FindNext e FindPrevious metodi" nella Guida di DAO.  
  
##  <a name="getabsoluteposition"></a>CDaoRecordset::GetAbsolutePosition  
 Restituisce il numero del record corrente dell'oggetto recordset.  
  
```  
long GetAbsolutePosition();
```  
  
### <a name="return-value"></a>Valore restituito  
 Intero compreso tra 0 e il numero di record del recordset. Corrisponde alla posizione ordinale del record corrente nell'oggetto recordset.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà AbsolutePosition dell'oggetto DAO sottostante è in base zero. il valore 0 si riferisce al primo record del recordset. È possibile determinare il numero di record popolati nell'oggetto recordset chiamando [GetRecordCount](#getrecordcount). La chiamata a `GetRecordCount` potrebbe richiedere molto tempo perché deve accedervi tutti i record per determinare il conteggio.  
  
 Se è presente alcun record corrente, come quando non sono presenti record del recordset, viene restituito 1. Se il record corrente viene eliminato, non è definito il valore della proprietà AbsolutePosition e MFC genera un'eccezione se si fa riferimento. Per i recordset di tipo dynaset, nuovi record vengono aggiunti alla fine della sequenza.  
  
> [!NOTE]
>  Questa proprietà non deve essere utilizzato come numero di record sostitutivo. I segnalibri sono ancora il modo consigliato per mantenere e tornare a una posizione specifica e sono l'unico modo per posizionare il record corrente in tutti i tipi di oggetti recordset. In particolare, la posizione di un determinato record cambia quando vengono eliminati i record precedente. Non vi è alcuna garanzia che un determinato record avrà la stessa posizione assoluta se l'oggetto recordset viene ricreato perché l'ordine dei singoli record all'interno di un recordset non è garantito a meno che non viene creato con un'istruzione SQL utilizzando un **ORDERBY** clausola.  
  
> [!NOTE]
>  Questa funzione membro è valida solo per dynaset e Recordset di tipo snapshot.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà AbsolutePosition" nella Guida di DAO.  
  
##  <a name="getbookmark"></a>CDaoRecordset:: GetBookmark  
 Chiamare questa funzione membro per ottenere il valore del segnalibro in un determinato record.  
  
```  
COleVariant GetBookmark();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore che rappresenta il segnalibro sul record corrente.  
  
### <a name="remarks"></a>Note  
 Quando un oggetto recordset viene creato o aperto, ognuno dei relativi record contiene già un segnalibro univoco se li supporta. Chiamare `CanBookmark` per determinare se un oggetto recordset supporta i segnalibri.  
  
 È possibile salvare il segnalibro per il record corrente assegnando il valore del segnalibro per un `COleVariant` oggetto. Per tornare rapidamente al record specifico in qualsiasi momento dopo il passaggio a un record diverso, chiamare `SetBookmark` con un parametro corrispondente al valore di tale `COleVariant` oggetto.  
  
> [!NOTE]
>  La chiamata a [Requery](#requery) modifica segnalibri DAO.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Bookmark" nella Guida di DAO.  
  
##  <a name="getcachesize"></a>CDaoRecordset::GetCacheSize  
 Chiamare questa funzione membro per ottenere il numero di record memorizzati nella cache.  
  
```  
long GetCacheSize();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che specifica il numero di record in un recordset di tipo dynaset contenente dati da memorizzare localmente nella cache da un'origine dati ODBC.  
  
### <a name="remarks"></a>Note  
 Memorizzazione di dati migliora le prestazioni di un'applicazione che recupera dati da un server remoto tramite gli oggetti recordset di tipo dynaset. La cache è uno spazio nella memoria locale che contiene i dati recuperati dal server di più di recente nel caso in cui i dati verranno nuovamente richiesto durante l'esecuzione dell'applicazione. Quando vengono richiesti dati, il motore di database Microsoft Jet controlla innanzitutto la cache per i dati richiesti anziché recuperarli dal server, che richiede più tempo. Dati che provengono da un'origine dati ODBC non vengono salvati nella cache.  
  
 Qualsiasi origine dati ODBC, ad esempio una tabella collegata, può disporre di una cache locale.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà CacheSize e CacheStart" nella Guida di DAO.  
  
##  <a name="getcachestart"></a>CDaoRecordset::GetCacheStart  
 Chiamare questa funzione membro per ottenere il valore del segnalibro del primo record del recordset da memorizzare nella cache.  
  
```  
COleVariant GetCacheStart();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `COleVariant` che specifica il segnalibro del primo record del recordset da memorizzare nella cache.  
  
### <a name="remarks"></a>Note  
 Il motore di database Microsoft Jet richiede record all'interno dell'intervallo della cache dalla cache e i record di fuori dell'intervallo di cache dal server.  
  
> [!NOTE]
>  I record recuperati dalla cache non riflettono le modifiche apportate contemporaneamente all'origine dati da altri utenti.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà CacheSize e CacheStart" nella Guida di DAO.  
  
##  <a name="getcurrentindex"></a>CDaoRecordset::GetCurrentIndex  
 Chiamare questa funzione membro per determinare l'indice attualmente in uso in un tipo di tabella indicizzato `CDaoRecordset` oggetto.  
  
```  
CString GetCurrentIndex();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` contenente il nome dell'indice attualmente in uso con un recordset di tipo di tabella. Restituisce una stringa vuota se non è stato impostato alcun indice.  
  
### <a name="remarks"></a>Note  
 Questo indice costituisce la base per ordinare i record in un recordset di tipo di tabella e viene utilizzato il [Seek](#seek) funzione membro per individuare i record.  
  
 Oggetto `CDaoRecordset` oggetto può avere più di un indice ma è possibile utilizzare un solo indice alla volta (anche se un [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) oggetto può avere più indici in cui è definiti).  
  
 Per informazioni correlate, vedere l'argomento "Oggetto indice" e la definizione "indice corrente" nella Guida di DAO.  
  
##  <a name="getdatecreated"></a>CDaoRecordset::GetDateCreated  
 Chiamare questa funzione membro per recuperare la data e ora di che creazione di una tabella di base.  
  
```  
COleDateTime GetDateCreated();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto contenente la data e ora di creazione della tabella di base.  
  
### <a name="remarks"></a>Note  
 Impostazioni data e ora derivano dal computer in cui è stata creata la tabella di base.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.  
  
##  <a name="getdatelastupdated"></a>CDaoRecordset::GetDateLastUpdated  
 Chiamare questa funzione membro per recuperare la data e ora che dell'ultimo aggiornamento dello schema.  
  
```  
COleDateTime GetDateLastUpdated();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto contenente la data e ora dell'ultimo aggiornamento della struttura della tabella di base (schema).  
  
### <a name="remarks"></a>Note  
 Impostazioni data e ora derivano dal computer in cui la struttura della tabella di base (schema) dell'ultimo aggiornamento.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.  
  
##  <a name="getdefaultdbname"></a>CDaoRecordset::GetDefaultDBName  
 Chiamare questa funzione membro per determinare il nome del database per il recordset.  
  
```  
virtual CString GetDefaultDBName();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` che contiene il percorso e il nome del database da cui deriva questo recordset.  
  
### <a name="remarks"></a>Note  
 Se un oggetto recordset viene creato senza un puntatore a un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md), questo percorso viene utilizzato l'oggetto recordset per aprire il database predefinito. Per impostazione predefinita, questa funzione restituisce una stringa vuota. Quando la creazione guidata classe deriva un nuovo oggetto recordset da `CDaoRecordset`, questa funzione verrà creato automaticamente.  
  
 Nell'esempio seguente viene illustrato l'utilizzo di due barre rovesciate (\\\\) nella stringa, è necessario per la stringa deve essere interpretato correttamente come.  
  
 [!code-cpp[NVC_MFCDatabase n.&4;](../../mfc/codesnippet/cpp/cdaorecordset-class_4.cpp)]  
  
##  <a name="getdefaultsql"></a>CDaoRecordset::GetDefaultSQL  
 Il framework chiama questa funzione membro per ottenere l'istruzione SQL predefinita su cui è basato il recordset.  
  
```  
virtual CString GetDefaultSQL();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` che contiene l'istruzione SQL predefinita.  
  
### <a name="remarks"></a>Note  
 Potrebbe trattarsi di un nome di tabella o un database SQL **selezionare** istruzione.  
  
 L'istruzione SQL predefinita è indirettamente definire dichiarando la classe recordset con ClassWizard e ClassWizard esegue questa attività per l'utente.  
  
 Se si passa una stringa SQL null a [aprire](#open), quindi questa funzione viene chiamata per determinare il nome della tabella o SQL per il recordset.  
  
##  <a name="geteditmode"></a>CDaoRecordset::GetEditMode  
 Chiamare questa funzione membro per determinare lo stato della modifica, ovvero uno dei valori seguenti:  
  
```  
short GetEditMode();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore che indica lo stato di modifica per il record corrente.  
  
### <a name="remarks"></a>Note  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|**dbEditNone**|Non è in corso alcuna operazione di modifica.|  
|**dbEditInProgress**|**Modificare** è stato chiamato.|  
|**dbEditAdd**|`AddNew`è stato chiamato.|  
  
 Per informazioni correlate, vedere l'argomento "Proprietà EditMode" nella Guida di DAO.  
  
##  <a name="getfieldcount"></a>CDaoRecordset::GetFieldCount  
 Chiamare questa funzione membro per recuperare il numero di campi (colonne) definiti nell'oggetto recordset.  
  
```  
short GetFieldCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di campi del recordset.  
  
### <a name="remarks"></a>Note  
 Per informazioni correlate, vedere l'argomento "Proprietà Count" nella Guida di DAO.  
  
##  <a name="getfieldinfo"></a>CDaoRecordset::GetFieldInfo  
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
 `nIndex`  
 Indice in base zero del campo predefinito nella raccolta di campi del recordset, per la ricerca in base all'indice.  
  
 `fieldinfo`  
 Un riferimento a un [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) struttura.  
  
 `dwInfoOptions`  
 Opzioni che specificano quali informazioni del recordset da recuperare. Le opzioni disponibili sono elencate qui insieme a ciò che provocano la restituzione della funzione. Per prestazioni ottimali, per recuperare solo il livello di informazioni che necessarie:  
  
- `AFX_DAO_PRIMARY_INFO`(Impostazione predefinita) Nome, tipo, dimensioni, gli attributi  
  
- `AFX_DAO_SECONDARY_INFO`Informazioni principali, oltre a: posizione ordinale, richiesto, consentire Zero tabella di origine esterna nome, il campo di origine, lunghezza, ordine di ordinamento,  
  
- `AFX_DAO_ALL_INFO`Informazioni primarie e secondarie, oltre a: valore predefinito, la regola di convalida, convalida testo  
  
 `lpszName`  
 Nome del campo.  
  
### <a name="remarks"></a>Note  
 Una versione della funzione consente di cercare un campo in base all'indice. L'altra versione consente di cercare un campo in base al nome.  
  
 Per una descrizione delle informazioni restituite, vedere il [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella sezione Descrizione del `dwInfoOptions`. Quando si richiedono informazioni su un unico livello, ottenere informazioni dei livelli precedenti oltre.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Attributes" nella Guida di DAO.  
  
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
 `lpszName`  
 Un puntatore a una stringa che contiene il nome di un campo.  
  
 `varValue`  
 Un riferimento a un `COleVariant` oggetto che verrà archiviato il valore di un campo.  
  
 `nIndex`  
 Indice in base zero del campo nella raccolta di campi del recordset, per la ricerca in base all'indice.  
  
### <a name="return-value"></a>Valore restituito  
 Le due versioni di `GetFieldValue` che restituiscono un valore restituito un [COleVariant](../../mfc/reference/colevariant-class.md) oggetto che contiene il valore di un campo.  
  
### <a name="remarks"></a>Note  
 È possibile cercare un campo in base al nome o alla posizione ordinale.  
  
> [!NOTE]
>  È più efficiente per chiamare una delle versioni di questa funzione membro che accetta un `COleVariant` riferimento a un oggetto come un parametro, anziché chiamare una versione che restituisce un `COleVariant` oggetto. Le ultime versioni di questa funzione vengono mantenute per compatibilità con le versioni precedenti.  
  
 Utilizzare `GetFieldValue` e [SetFieldValue](#setfieldvalue) associare in modo dinamico i campi in fase di esecuzione anziché in modo statico associazione delle colonne mediante il [DoFieldExchange](#dofieldexchange) meccanismo.  
  
 `GetFieldValue`e `DoFieldExchange` meccanismo può essere combinato per migliorare le prestazioni. Ad esempio, utilizzare `GetFieldValue` per recuperare un valore che è necessario solo su richiesta e assegnare la chiamata a un pulsante di "Informazioni" nell'interfaccia.  
  
 Per informazioni correlate, vedere gli argomenti "Campo oggetto" e "Valore proprietà" nella Guida di DAO.  
  
##  <a name="getindexcount"></a>CDaoRecordset::GetIndexCount  
 Chiamare questa funzione membro per determinare il numero di indici disponibili nell'oggetto recordset di tipo di tabella.  
  
```  
short GetIndexCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di indici del recordset di tipo di tabella.  
  
### <a name="remarks"></a>Note  
 `GetIndexCount`è utile per lo scorrimento in ciclo tutti gli indici nel recordset. A tale scopo, utilizzare `GetIndexCount` in combinazione con [GetIndexInfo](#getindexinfo). Se si chiama questa funzione membro di tipo dynaset o Recordset di tipo snapshot, MFC genera un'eccezione.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Attributes" nella Guida di DAO.  
  
##  <a name="getindexinfo"></a>CDaoRecordset::GetIndexInfo  
 Chiamare questa funzione membro per ottenere diversi tipi di informazioni su un indice definito nella tabella di base sottostante un oggetto recordset.  
  
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
 `nIndex`  
 Indice in base zero nella raccolta di indici della tabella, per la ricerca in base alla posizione numerica.  
  
 `indexinfo`  
 Un riferimento a un [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) struttura.  
  
 `dwInfoOptions`  
 Opzioni che specificano quali informazioni sull'indice da recuperare. Le opzioni disponibili sono elencate qui insieme a ciò che provocano la restituzione della funzione. Per prestazioni ottimali, per recuperare solo il livello di informazioni che necessarie:  
  
- `AFX_DAO_PRIMARY_INFO`(Impostazione predefinita) Campi nome, le informazioni di campo  
  
- `AFX_DAO_SECONDARY_INFO`Informazioni principali, oltre a: primario, Unique, Clustered, IgnoreNulls, obbligatorio, esterna  
  
- `AFX_DAO_ALL_INFO`Informazioni primarie e secondarie, oltre a: Distinct Count  
  
 `lpszName`  
 Un puntatore al nome dell'oggetto indice, per la ricerca in base al nome.  
  
### <a name="remarks"></a>Note  
 Una versione della funzione consente di cercare un indice in base alla posizione nella raccolta. L'altra versione consente di cercare un indice in base al nome.  
  
 Per una descrizione delle informazioni restituite, vedere il [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella sezione Descrizione del `dwInfoOptions`. Quando si richiedono informazioni su un unico livello, ottenere informazioni dei livelli precedenti oltre.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Attributes" nella Guida di DAO.  
  
##  <a name="getlastmodifiedbookmark"></a>CDaoRecordset::GetLastModifiedBookmark  
 Chiamare questa funzione membro per recuperare il segnalibro del record più recente aggiunti o aggiornati.  
  
```  
COleVariant GetLastModifiedBookmark();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `COleVariant` contenente un segnalibro che indica l'ultimo record aggiunto o modificato.  
  
### <a name="remarks"></a>Note  
 Quando un oggetto recordset viene creato o aperto, ognuno dei relativi record contiene già un segnalibro univoco se li supporta. Chiamare [GetBookmark](#getbookmark) per determinare se l'oggetto recordset supporta i segnalibri. Se il recordset non supporta i segnalibri, un `CDaoException` viene generata un'eccezione.  
  
 Quando si aggiunge un record, viene visualizzato alla fine del recordset e non è il record corrente. Per rendere il nuovo record corrente, chiamare `GetLastModifiedBookmark` e quindi chiamare `SetBookmark` per ripristinare il record appena aggiunto.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà LastModified" nella Guida di DAO.  
  
##  <a name="getlockingmode"></a>CDaoRecordset::GetLockingMode  
 Chiamare questa funzione membro per determinare il tipo di blocco attivo per il recordset.  
  
```  
BOOL GetLockingMode();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il tipo di blocco pessimistico, in caso contrario 0 per il blocco ottimistico record.  
  
### <a name="remarks"></a>Note  
 Quando il blocco pessimistico è attivata, la pagina di dati che contiene il record che si sta modificando è bloccato, non appena si chiama il [modificare](#edit) funzione membro. La pagina viene sbloccata quando si chiama il [aggiornamento](#update) o [Chiudi](#close) funzione membro o una qualsiasi delle operazioni di spostamento o ricerca.  
  
 Quando il blocco ottimistico, la pagina di dati che contiene il record viene bloccata solo mentre il record viene aggiornato con il **aggiornamento** funzione membro.  
  
 Quando si utilizzano origini dati ODBC, la modalità di blocco è sempre ottimistica.  
  
 Per informazioni correlate, vedere gli argomenti "Proprietà LockEdits" e "Blocco comportamento nelle applicazioni multiutente" nella Guida di DAO.  
  
##  <a name="getname"></a>CDaoRecordset::GetName  
 Chiamare questa funzione membro per recuperare il nome dell'oggetto recordset.  
  
```  
CString GetName();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` contenente il nome dell'oggetto recordset.  
  
### <a name="remarks"></a>Note  
 Il nome del set di record deve iniziare con una lettera e può contenere un massimo di 40 caratteri. Può includere numeri e caratteri di sottolineatura ma non può includere spazi o punteggiatura.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
##  <a name="getparamvalue"></a>CDaoRecordset::GetParamValue  
 Chiamare questa funzione membro per recuperare il valore corrente del parametro specificato memorizzato nell'oggetto DAOParameter sottostante.  
  
```  
virtual COleVariant GetParamValue(int nIndex);  
virtual COleVariant GetParamValue(LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Posizione numerica del parametro nell'oggetto DAOParameter sottostante.  
  
 `lpszName`  
 Il nome del parametro il cui valore desiderato.  
  
### <a name="return-value"></a>Valore restituito  
 Un oggetto della classe [COleVariant](../../mfc/reference/colevariant-class.md) che contiene il valore del parametro.  
  
### <a name="remarks"></a>Note  
 È possibile accedere il parametro in base al nome o in base alla posizione numerica nella raccolta.  
  
 Per informazioni correlate, vedere l'argomento "Parametro oggetto" nella Guida di DAO.  
  
##  <a name="getpercentposition"></a>CDaoRecordset:: GetPercentPosition  
 Quando si utilizza un tipo dynaset o recordset di tipo snapshot, se si chiama `GetPercentPosition` prima di popolare completamente il recordset, la quantità di spostamento è correlata al numero di record è possibile accedere come indicato dalla chiamata [GetRecordCount](#getrecordcount).  
  
```  
float GetPercentPosition();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un numero compreso tra 0 e 100 che indica la posizione approssimativa del record corrente nell'oggetto recordset basato su una percentuale dei record del recordset.  
  
### <a name="remarks"></a>Note  
 È possibile spostare all'ultimo record chiamando [MoveLast](#movelast) al completa della popolazione di tutti i recordset, ma questo potrebbe richiedere una quantità significativa di tempo.  
  
 È possibile chiamare `GetPercentPosition` su tutti i tre tipi di oggetti recordset, incluse le tabelle senza indici. Tuttavia, è possibile chiamare `GetPercentPosition` in snapshot scorrimento forward-only o in un recordset viene aperto da una query pass-through su un database esterno. Se è presente alcun record corrente o he record corrente è stato eliminato, un `CDaoException` viene generata un'eccezione.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà PercentPosition" nella Guida di DAO.  
  
##  <a name="getrecordcount"></a>CDaoRecordset::GetRecordCount  
 Chiamare questa funzione membro per scoprire il numero di record in un recordset è stato eseguito.  
  
```  
long GetRecordCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di record è possibile accedere in un oggetto recordset.  
  
### <a name="remarks"></a>Note  
 `GetRecordCount`indica il numero di record contenuto in un recordset di tipo snapshot o di tipo dynaset fino a quando tutti i record sono stati eseguiti. Questa chiamata di funzione membro può richiedere una quantità significativa di tempo.  
  
 Una volta che si accede all'ultimo record, il valore restituito indica il numero totale di record non eliminati. Per forzare l'ultimo record a cui accedere, chiamare il `MoveLast` o `FindLast` una funzione membro per il recordset. È inoltre possibile utilizzare un conteggio di SQL per determinare il numero approssimativo di record restituiti dalla query.  
  
 Poiché l'applicazione elimina i record in un recordset di tipo dynaset, il valore restituito di `GetRecordCount` diminuisce. Tuttavia, i record eliminati da altri utenti non sono riportati nei `GetRecordCount` fino a quando il record corrente è posizionato su un record eliminato. Se si esegue una transazione che modifica il numero di record e successivamente eseguire il rollback della transazione, `GetRecordCount` non riflette il numero effettivo di record rimanenti.  
  
 Il valore di `GetRecordCount` da un recordset di tipo snapshot non è interessato dalle modifiche nelle tabelle sottostanti.  
  
 Il valore di `GetRecordCount` da un tipo di tabella recordset riflette il numero approssimativo di record nella tabella e influisce immediatamente come i record della tabella vengono aggiunte ed eliminati.  
  
 Un recordset senza record restituisce un valore pari a 0. Quando si utilizzano le tabelle collegate o database ODBC, `GetRecordCount` restituisce sempre-1. La chiamata di **Requery** funzione membro in un recordset Reimposta il valore di `GetRecordCount` come se fosse eseguita nuovamente la query.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà RecordCount" nella Guida di DAO.  
  
##  <a name="getsql"></a>CDaoRecordset::GetSQL  
 Chiamare questa funzione membro per ottenere l'istruzione SQL utilizzata per selezionare i record del recordset quando è stato aperto.  
  
```  
CString GetSQL() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` che contiene l'istruzione SQL.  
  
### <a name="remarks"></a>Note  
 In genere si tratterà di un database SQL **selezionare** istruzione.  
  
 La stringa restituita da `GetSQL` è in genere diverso da qualsiasi stringa passati al recordset nel `lpszSQL` parametro per il [aprire](#open) funzione membro. In questo modo il recordset crea un'istruzione SQL completa in base alle quali passati a **aprire**, come specificato con ClassWizard e ciò che è stato specificato nel [m_strFilter](#m_strfilter) e [m_strSort](#m_strsort) membri dati.  
  
> [!NOTE]
>  Chiamare questa funzione membro solo dopo la chiamata **aprire**.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà SQL" nella Guida di DAO.  
  
##  <a name="gettype"></a>CDaoRecordset::GetType  
 Chiamare questa funzione membro dopo l'apertura del recordset per determinare il tipo dell'oggetto recordset.  
  
```  
short GetType();
```  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei seguenti valori che indica il tipo di un set di record:  
  
- **dbOpenTable** recordset di tipo tabella  
  
- **dbOpenDynaset** tipo Dynaset  
  
- **dbOpenSnapshot** recordset di tipo Snapshot  
  
### <a name="remarks"></a>Note  
 Per informazioni correlate, vedere l'argomento "Proprietà di tipo" nella Guida di DAO.  
  
##  <a name="getvalidationrule"></a>CDaoRecordset::GetValidationRule  
 Chiamare questa funzione membro per determinare la regola utilizzata per convalidare i dati.  
  
```  
CString GetValidationRule();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` che contiene un valore che convalida i dati in un record mentre vengono modificato o aggiunti a una tabella.  
  
### <a name="remarks"></a>Note  
 Questa regola è basata su testo e viene applicata ogni volta che la tabella sottostante viene modificata. Se i dati non sono consentiti, MFC genera un'eccezione. Il messaggio di errore restituito è il testo della proprietà messaggio di errore dell'oggetto campo sottostante, se specificato, o il testo dell'espressione specificata dalla proprietà ValidationRule dell'oggetto campo sottostante. È possibile chiamare [GetValidationText](#getvalidationtext) per ottenere il testo del messaggio di errore.  
  
 Ad esempio, un campo in un record che richiede il giorno del mese potrebbe avere una regola di convalida, ad esempio "giorno tra 1 e 31."  
  
 Per informazioni correlate, vedere l'argomento "Proprietà ValidationRule" nella Guida di DAO.  
  
##  <a name="getvalidationtext"></a>CDaoRecordset::GetValidationText  
 Chiamare questa funzione membro per recuperare il testo della proprietà messaggio di errore dell'oggetto campo sottostante.  
  
```  
CString GetValidationText();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` oggetto contenente il testo del messaggio che viene visualizzato se il valore di un campo non soddisfa la regola di convalida dell'oggetto campo sottostante.  
  
### <a name="remarks"></a>Note  
 Per informazioni correlate, vedere l'argomento "Proprietà di messaggio di errore" nella Guida di DAO.  
  
##  <a name="isbof"></a>CDaoRecordset::IsBOF  
 Chiamare questa funzione membro prima che si passa da record per record sapere se sono stati superati prima del primo record del recordset.  
  
```  
BOOL IsBOF() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il recordset non contiene alcun record o se è eseguito lo scorrimento all'indietro prima del primo record; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È inoltre possibile chiamare `IsBOF` insieme a `IsEOF` per determinare se il recordset contiene record o è vuoto. Immediatamente dopo la chiamata **aprire**, se il recordset non contiene alcun record, `IsBOF` restituisce diverso da zero. Quando si apre un oggetto recordset che include almeno un record, il primo record corrisponde al record corrente e `IsBOF` restituisce 0.  
  
 Se il primo record è il record corrente e si chiama `MovePrev`, `IsBOF` verrà successivamente restituito diverso da zero. Se `IsBOF` restituisce diverso da zero e si chiama `MovePrev`, viene generata un'eccezione. Se `IsBOF` restituisce un valore diverso da zero, il record corrente non è definito e qualsiasi azione che richiede un record corrente provocherà un'eccezione.  
  
 Effetto dei metodi specifici su `IsBOF` e `IsEOF` impostazioni:  
  
-   La chiamata a **aprire** internamente imposta il primo record del recordset il record corrente chiamando **MoveFirst**. Pertanto, la chiamata **aprire** su un set vuoto di cause record `IsBOF` e `IsEOF` per restituire diverso da zero. (Vedere la tabella seguente per il comportamento di un errore **MoveFirst** o `MoveLast` chiamare.)  
  
-   Tutte le operazioni di spostamento che riescono a trovare un record che entrambi `IsBOF` e `IsEOF` restituirà 0.  
  
-   Un `AddNew` chiamata seguita da un **aggiornamento** chiamata che è stato inserito un nuovo record farà `IsBOF` per restituire 0, ma solo se `IsEOF` è diverso da zero. Lo stato di `IsEOF` sempre rimarrà invariata. Come definito dal motore di database Microsoft Jet, il puntatore del record corrente di un recordset vuoto è alla fine di un file, dopo il record corrente viene inserito un nuovo record.  
  
-   Qualsiasi **eliminare** chiamata, anche se rimuove il record rimanente solo da un recordset non modificherà il valore di `IsBOF` o `IsEOF`.  
  
 Questa tabella mostra le operazioni di spostamento consentite con diverse combinazioni di `IsBOF` /  `IsEOF`.  
  
||MoveFirst, MoveLast|MovePrev,<br /><br /> Spostare< 0></ 0>|Spostare 0|MoveNext,<br /><br /> Spostare > 0|  
|------|-------------------------|-----------------------------|------------|-----------------------------|  
|`IsBOF`= diverso da zero,<br /><br /> `IsEOF`=0|Allowed|Eccezione|Eccezione|Allowed|  
|`IsBOF`=0,<br /><br /> `IsEOF`= diverso da zero|Allowed|Allowed|Eccezione|Eccezione|  
|Sia diverso da zero|Eccezione|Eccezione|Eccezione|Eccezione|  
|Entrambi 0|Allowed|Allowed|Allowed|Allowed|  
  
 Che consente un'operazione di spostamento non significa che l'operazione riuscirà a individuare un record. Significa semplicemente che un tentativo di eseguire l'operazione di spostamento specificata è consentito e non genererà un'eccezione. Il valore di `IsBOF` e `IsEOF` funzioni membro possono variare a seguito dello spostamento tentato.  
  
 L'effetto delle operazioni di spostamento non viene individuato un record per il valore di `IsBOF` e `IsEOF` impostazioni è illustrato nella tabella seguente.  
  
||IsBOF|IsEOF|  
|------|-----------|-----------|  
|**MoveFirst**,`MoveLast`|Diverso da zero|Diverso da zero|  
|**Spostare** 0|Nessuna modifica|Nessuna modifica|  
|`MovePrev`, **Move**< 0></ 0>|Diverso da zero|Nessuna modifica|  
|`MoveNext`, **Move** > 0|Nessuna modifica|Diverso da zero|  
  
 Per informazioni correlate, vedere l'argomento "Proprietà BOF ed EOF" nella Guida di DAO.  
  
##  <a name="isdeleted"></a>CDaoRecordset::IsDeleted  
 Chiamare questa funzione membro per determinare se è stato eliminato il record corrente.  
  
```  
BOOL IsDeleted() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il recordset è posizionato su un record eliminato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se si passa a un record e `IsDeleted` restituisce **TRUE** (diverso da zero), quindi è necessario scorrere verso un altro record prima di poter eseguire qualsiasi altra operazione recordset.  
  
> [!NOTE]
>  Non è necessario controllare lo stato eliminato per i record in un recordset di tipo tabella o snapshot. In quanto non eliminare i record da uno snapshot, non è necessario chiamare `IsDeleted`. Per i recordset di tipo tabella, i record eliminati vengono effettivamente rimosse dal recordset. Una volta che un record è stato eliminato, da un altro utente, o in un altro oggetto recordset, è possibile scorrere tale record. Pertanto, non è necessario chiamare `IsDeleted`.  
  
 Quando si elimina un record da un dynaset, viene rimosso dal recordset e tornare a tale record non è possibile scorrere. Tuttavia, se un record in un dynaset viene eliminato da un altro utente o in un altro oggetto recordset in base alla tabella stessa, `IsDeleted` restituirà **TRUE** quando in un secondo momento passare a tale record.  
  
 Per informazioni correlate, vedere gli argomenti "Metodo Delete", "Proprietà LastModified" e "Proprietà EditMode" nella Guida di DAO.  
  
##  <a name="iseof"></a>CDaoRecordset::IsEOF  
 Chiamare questa funzione membro durante lo scorrimento di record per record sapere se sono stati superati dell'ultimo record del recordset.  
  
```  
BOOL IsEOF() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il recordset non contiene alcun record o se è eseguito lo scorrimento oltre l'ultimo record; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È inoltre possibile chiamare `IsEOF` per determinare se il recordset contiene record o è vuoto. Immediatamente dopo la chiamata **aprire**, se il recordset non contiene alcun record, `IsEOF` restituisce diverso da zero. Quando si apre un oggetto recordset che include almeno un record, il primo record corrisponde al record corrente e `IsEOF` restituisce 0.  
  
 Se l'ultimo record è il record corrente quando si chiama `MoveNext`, `IsEOF` verrà successivamente restituito diverso da zero. Se `IsEOF` restituisce diverso da zero e si chiama `MoveNext`, viene generata un'eccezione. Se `IsEOF` restituisce un valore diverso da zero, il record corrente non è definito e qualsiasi azione che richiede un record corrente provocherà un'eccezione.  
  
 Effetto dei metodi specifici su `IsBOF` e `IsEOF` impostazioni:  
  
-   La chiamata a **aprire** internamente imposta il primo record del recordset il record corrente chiamando **MoveFirst**. Pertanto, la chiamata **aprire** su un set vuoto di cause record `IsBOF` e `IsEOF` per restituire diverso da zero. (Vedere la tabella seguente per il comportamento di un errore **MoveFirst** chiamare.)  
  
-   Tutte le operazioni di spostamento che riescono a trovare un record che entrambi `IsBOF` e `IsEOF` restituirà 0.  
  
-   Un `AddNew` chiamata seguita da un **aggiornamento** chiamata che è stato inserito un nuovo record farà `IsBOF` per restituire 0, ma solo se `IsEOF` è diverso da zero. Lo stato di `IsEOF` sempre rimarrà invariata. Come definito dal motore di database Microsoft Jet, il puntatore del record corrente di un recordset vuoto è alla fine di un file, dopo il record corrente viene inserito un nuovo record.  
  
-   Qualsiasi **eliminare** chiamata, anche se rimuove il record rimanente solo da un recordset non modificherà il valore di `IsBOF` o `IsEOF`.  
  
 Questa tabella mostra le operazioni di spostamento consentite con diverse combinazioni di `IsBOF` /  `IsEOF`.  
  
||MoveFirst, MoveLast|MovePrev,<br /><br /> Spostare< 0></ 0>|Spostare 0|MoveNext,<br /><br /> Spostare > 0|  
|------|-------------------------|-----------------------------|------------|-----------------------------|  
|`IsBOF`= diverso da zero,<br /><br /> `IsEOF`=0|Allowed|Eccezione|Eccezione|Allowed|  
|`IsBOF`=0,<br /><br /> `IsEOF`= diverso da zero|Allowed|Allowed|Eccezione|Eccezione|  
|Sia diverso da zero|Eccezione|Eccezione|Eccezione|Eccezione|  
|Entrambi 0|Allowed|Allowed|Allowed|Allowed|  
  
 Che consente un'operazione di spostamento non significa che l'operazione riuscirà a individuare un record. Significa semplicemente che un tentativo di eseguire l'operazione di spostamento specificata è consentito e non genererà un'eccezione. Il valore di `IsBOF` e `IsEOF` funzioni membro possono variare a seguito dello spostamento tentato.  
  
 L'effetto delle operazioni di spostamento non viene individuato un record per il valore di `IsBOF` e `IsEOF` impostazioni è illustrato nella tabella seguente.  
  
||IsBOF|IsEOF|  
|------|-----------|-----------|  
|**MoveFirst**,`MoveLast`|Diverso da zero|Diverso da zero|  
|**Spostare** 0|Nessuna modifica|Nessuna modifica|  
|`MovePrev`, **Move**< 0></ 0>|Diverso da zero|Nessuna modifica|  
|`MoveNext`, **Move** > 0|Nessuna modifica|Diverso da zero|  
  
 Per informazioni correlate, vedere l'argomento "Proprietà BOF ed EOF" nella Guida di DAO.  
  
##  <a name="isfielddirty"></a>CDaoRecordset::IsFieldDirty  
 Chiamare questa funzione membro per determinare se il membro dati di campo specificato di un dynaset è stato contrassegnato come "dirty" (modificata).  
  
```  
BOOL IsFieldDirty(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 `pv`  
 Un puntatore al membro dati campo cui si desidera controllare, lo stato o **NULL** per determinare se uno dei campi è dirty.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il membro dati di campo specificato è contrassegnato come modificato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 I dati in tutti i membri dati dei campi modificati verranno trasferiti al record nell'origine dati quando il record corrente viene aggiornato da una chiamata al **aggiornamento** funzione membro di `CDaoRecordset` (segue una chiamata a **modificare** o `AddNew`). Con queste informazioni, è possibile eseguire ulteriori operazioni, ad esempio rimozione dei flag del membro dati di campo per contrassegnare la colonna in modo non verrà scritto nell'origine dati.  
  
 `IsFieldDirty`viene implementata tramite `DoFieldExchange`.  
  
##  <a name="isfieldnull"></a>CDaoRecordset::IsFieldNull  
 Chiamare questa funzione membro per determinare se il membro dati di campo specificato di un recordset è stato contrassegnato come Null.  
  
```  
BOOL IsFieldNull(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 `pv`  
 Un puntatore al membro dati campo cui si desidera controllare, lo stato o **NULL** per determinare se i campi sono Null.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il membro dati di campo specificato è contrassegnato come Null. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 (Nella terminologia dei database, Null significa "non having alcun valore" e non è identico **NULL** in C++.) Se un membro dati del campo è contrassegnato come Null, viene interpretato come una colonna del record corrente per il quale non esiste alcun valore.  
  
> [!NOTE]
>  In determinate situazioni, utilizzando `IsFieldNull` può risultare inefficiente, come illustrato nell'esempio di codice seguente:  
  
 [!code-cpp[NVC_MFCDatabase n.&5;](../../mfc/codesnippet/cpp/cdaorecordset-class_5.cpp)]  
  
> [!NOTE]
>  Se si sta utilizzando l'associazione dinamica di record, senza la derivazione da `CDaoRecordset`, assicurarsi di utilizzare **VT_NULL** come illustrato nell'esempio.  
  
##  <a name="isfieldnullable"></a>CDaoRecordset::IsFieldNullable  
 Chiamare questa funzione membro per determinare se il membro dati di campo specificato è "ammette valori null" (può essere impostata su un valore Null. C++ **NULL** non è uguale a Null, ovvero nella terminologia dei database, come "non having alcun valore").  
  
```  
BOOL IsFieldNullable(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 `pv`  
 Un puntatore al membro dati campo cui si desidera controllare, lo stato o **NULL** per determinare se i campi sono Null.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il membro dati di campo specificato può essere Null. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un campo che non può essere Null deve avere un valore. Se si tenta di impostare un campo su Null quando si aggiunge o aggiorna un record, l'origine dati rifiuta l'aggiunta o l'aggiornamento e **aggiornamento** genererà un'eccezione. L'eccezione si verifica quando si chiama **aggiornamento**, non quando si chiama `SetFieldNull`.  
  
##  <a name="isopen"></a>CDaoRecordset::IsOpen  
 Chiamare questa funzione membro per determinare se il recordset è aperto.  
  
```  
BOOL IsOpen() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto recordset **aprire** o **Requery** funzione membro è stato precedentemente chiamata e il recordset non è stata chiusa; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_bcheckcachefordirtyfields"></a>CDaoRecordset:: M_bcheckcachefordirtyfields  
 Contiene un flag che indica se i campi memorizzati nella cache vengono contrassegnati automaticamente come dirty (modificati) e un valore Null.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita il flag **TRUE**. L'impostazione di questo membro dati controlla l'intero meccanismo del doppio buffer. Se si imposta il flag su **TRUE**, è possibile disattivare la memorizzazione nella cache in modo da campo utilizzando il meccanismo DFX. Se si imposta il flag su **FALSE**, è necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.  
  
 Impostare il membro dati prima di chiamare **aprire**. Questo meccanismo è principalmente per facilità d'uso. Prestazioni possono essere più lente a causa il doppio buffering dei campi quando vengono apportate modifiche.  
  
##  <a name="m_nfields"></a>CDaoRecordset::m_nFields  
 Contiene il numero di membri dati di campo nella classe recordset e il numero di colonne selezionate dal recordset dall'origine dati.  
  
### <a name="remarks"></a>Note  
 Il costruttore della classe recordset deve inizializzare `m_nFields` con il numero corretto di campi associati in modo statico. ClassWizard scrive questa inizializzazione quando si tenta di dichiarare la classe del recordset. È anche possibile scrivere il manualmente.  
  
 Il framework utilizza questo numero per gestire l'interazione tra i membri dati di campo e le colonne corrispondenti del record corrente nell'origine dati.  
  
> [!NOTE]
>  Questo numero deve corrispondere al numero di colonne di output registrato in `DoFieldExchange` dopo una chiamata a `SetFieldType` con il parametro **CDaoFieldExchange::outputColumn**.  
  
 È possibile associare le colonne in modo dinamico per mezzo di `CDaoRecordset::GetFieldValue` e `CDaoRecordset::SetFieldValue`. In tal caso, non è necessaria incrementare il conteggio in `m_nFields` in modo da riflettere il numero di funzione DFX chiama `DoFieldExchange` funzione membro.  
  
##  <a name="m_nparams"></a>CDaoRecordset::m_nParams  
 Contiene il numero di membri dati di parametro nella classe recordset, il numero di parametri passata con la query del recordset.  
  
### <a name="remarks"></a>Note  
 Se la classe del recordset è un membro dati di parametro, è necessario inizializzare il costruttore per la classe `m_nParams` con il numero corretto. Il valore di `m_nParams` il valore predefinito è 0. Se si aggiungono membri dati di parametro, che è necessario eseguire manualmente, è necessario aggiungere manualmente un'inizializzazione nel costruttore della classe in modo da riflettere il numero di parametri (che deve essere grande almeno come il numero di ' segnaposto di **m_strFilter** o `m_strSort` stringa).  
  
 Quando Parametrizza la query del recordset, il framework utilizza questo numero.  
  
> [!NOTE]
>  Questo numero deve corrispondere al numero di "params" registrato in `DoFieldExchange` dopo una chiamata a `SetFieldType` con il parametro **CFieldExchange::param**.  
  
 Per informazioni correlate, vedere l'argomento "Parametro oggetto" nella Guida di DAO.  
  
##  <a name="m_pdaorecordset"></a>CDaoRecordset::m_pDAORecordset  
 Contiene un puntatore all'interfaccia OLE per l'oggetto recordset DAO sottostante il `CDaoRecordset` oggetto.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo puntatore se è necessario accedere direttamente all'interfaccia DAO.  
  
 Per informazioni correlate, vedere l'argomento "Oggetto Recordset" nella Guida di DAO.  
  
##  <a name="m_pdatabase"></a>CDaoRecordset::m_pDatabase  
 Contiene un puntatore per il `CDaoDatabase` oggetto attraverso il quale il recordset è connesso a un'origine dati.  
  
### <a name="remarks"></a>Note  
 Questa variabile viene impostata in due modi. In genere, si passa un puntatore a un già aperto `CDaoDatabase` dell'oggetto quando si crea l'oggetto recordset. Se si passa **NULL** invece **CDaoRecordset** crea un `CDaoDatabase` oggetto e lo apre. In entrambi i casi `CDaoRecordset` memorizza il puntatore nella variabile.  
  
 In genere è non direttamente dovranno utilizzare il puntatore archiviato **m_pDatabase**. Se si scrive le estensioni personalizzate di `CDaoRecordset`, tuttavia, potrebbe essere necessario utilizzare il puntatore. Ad esempio, potrebbe essere necessario il puntatore se si genera il proprio `CDaoException`(s).  
  
 Per informazioni correlate, vedere l'argomento "Oggetto di Database" nella Guida di DAO.  
  
##  <a name="m_strfilter"></a>CDaoRecordset::m_strFilter  
 Contiene una stringa che viene utilizzata per costruire il **dove** clausola di un'istruzione SQL.  
  
### <a name="remarks"></a>Note  
 Non includere la parola riservata **in** per filtrare il recordset. L'utilizzo di questo membro dati non è applicabile a recordset di tipo di tabella. L'utilizzo di **m_strFilter** non ha alcun effetto quando si apre un recordset utilizzando un `CDaoQueryDef` puntatore.  
  
 Utilizzare il formato di data statunitense (mese-giorno-anno) quando si filtrano i campi che contengono date, anche se non si utilizza la versione degli Stati Uniti del motore di database Microsoft Jet; in caso contrario, i dati non possono essere filtrati nel modo previsto.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Filter" nella Guida di DAO.  
  
##  <a name="m_strsort"></a>CDaoRecordset::m_strSort  
 Contiene una stringa contenente il **ORDERBY** clausola di un'istruzione SQL senza le parole riservate **ORDERBY**.  
  
### <a name="remarks"></a>Note  
 È possibile ordinare gli oggetti recordset di tipo dynaset e snapshot.  
  
 Non è possibile ordinare gli oggetti recordset di tipo di tabella. Per determinare l'ordinamento di un recordset di tipo tabella, chiamare [SetCurrentIndex](#setcurrentindex).  
  
 L'utilizzo di `m_strSort` non ha alcun effetto quando si apre un recordset utilizzando un `CDaoQueryDef` puntatore.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà di ordinamento" nella Guida di DAO.  
  
##  <a name="move"></a>CDaoRecordset:: Move  
 Chiamare questa funzione membro per posizionare il recordset `lRows` record del record corrente.  
  
```  
virtual void Move(long lRows);
```  
  
### <a name="parameters"></a>Parametri  
 `lRows`  
 Il numero di record da spostare in avanti o indietro. I valori positivi spostano in avanti, verso la fine dell'oggetto recordset. I valori negativi spostano all'indietro, verso l'inizio.  
  
### <a name="remarks"></a>Note  
 È possibile spostare in avanti o indietro. `Move( 1 )`equivale a `MoveNext`, e `Move( -1 )` equivale a `MovePrev`.  
  
> [!CAUTION]
>  Chiamare uno del **spostare** funzioni genera un'eccezione se il recordset non contiene record. In generale, chiamare sia `IsBOF` e `IsEOF` prima di un'operazione di spostamento per determinare se il recordset contiene record. Dopo aver chiamato **aprire** o **Requery**, chiamare il metodo `IsBOF` o `IsEOF`.  
  
> [!NOTE]
>  Se è eseguito lo scorrimento oltre l'inizio o fine del recordset ( `IsBOF` o `IsEOF` restituisce diverso da zero), una chiamata a **spostare** genera un `CDaoException`.  
  
> [!NOTE]
>  Se si chiama uno del **spostare** funzioni mentre il record corrente viene aggiornato o aggiunto, gli aggiornamenti vengono persi senza alcun avviso.  
  
 Quando si chiama **spostare** su uno snapshot di scorrimento forward-only, di `lRows` parametro deve essere un numero intero positivo e i segnalibri non sono consentiti, pertanto è possibile spostare in avanti solo.  
  
 Per rendere il primo, ultimo, successivo o precedente a record di un recordset, la chiamata corrente di record, il **MoveFirst**, `MoveLast`, `MoveNext`, o `MovePrev` funzione membro.  
  
 Per informazioni correlate, vedere gli argomenti "Metodo Move" e "MoveFirst, MoveLast, MoveNext e MovePrevious metodi" nella Guida di DAO.  
  
##  <a name="movefirst"></a>CDaoRecordset::MoveFirst  
 Chiamare questa funzione membro per il primo record del recordset (se presente) del record corrente.  
  
```  
void MoveFirst();
```  
  
### <a name="remarks"></a>Note  
 Non è necessario chiamare **MoveFirst** immediatamente dopo l'apertura del recordset. In quel momento, il primo record (se presente) viene automaticamente il record corrente.  
  
> [!CAUTION]
>  Chiamare uno del **spostare** funzioni genera un'eccezione se il recordset non contiene record. In generale, chiamare sia `IsBOF` e `IsEOF` prima di un'operazione di spostamento per determinare se il recordset contiene record. Dopo aver chiamato **aprire** o **Requery**, chiamare il metodo `IsBOF` o `IsEOF`.  
  
> [!NOTE]
>  Se si chiama uno del **spostare** funzioni mentre il record corrente viene aggiornato o aggiunto, gli aggiornamenti vengono persi senza alcun avviso.  
  
 Utilizzare il **spostare** funzioni per spostarsi da un record a altro senza applicare una condizione. Utilizzare le operazioni di ricerca per individuare i record in un tipo dynaset o un oggetto recordset di tipo snapshot che soddisfano una determinata condizione. Per individuare un record in un oggetto recordset di tipo tabella, chiamare `Seek`.  
  
 Se il recordset fa riferimento a un recordset di tipo tabella, indice corrente della tabella movimento. È possibile impostare l'indice corrente utilizzando la proprietà di indice dell'oggetto DAO sottostante. Se non si imposta l'indice corrente, non è definito l'ordine dei record restituiti.  
  
 Se si chiama `MoveLast` su un oggetto recordset basato su una query SQL o querydef, la query viene forzata fino al completamento e l'oggetto recordset è completamente popolato.  
  
 Non è possibile chiamare il **MoveFirst** o `MovePrev` funzione membro con uno snapshot di scorrimento forward-only.  
  
 Per spostare la posizione dell'oggetto corrente di record in un oggetto recordset uno specifico numero di record avanti o indietro, chiamare **spostare**.  
  
 Per informazioni correlate, vedere gli argomenti "Metodo Move" e "MoveFirst, MoveLast, MoveNext e MovePrevious metodi" nella Guida di DAO.  
  
##  <a name="movelast"></a>CDaoRecordset::MoveLast  
 Chiamare questa funzione membro per rendere l'ultimo record (se presente) dell'oggetto Recordset, il record corrente.  
  
```  
void MoveLast();
```  
  
### <a name="remarks"></a>Note  
  
> [!CAUTION]
>  Chiamare uno del **spostare** funzioni genera un'eccezione se il recordset non contiene record. In generale, chiamare sia `IsBOF` e `IsEOF` prima di un'operazione di spostamento per determinare se il recordset contiene record. Dopo aver chiamato **aprire** o **Requery**, chiamare il metodo `IsBOF` o `IsEOF`.  
  
> [!NOTE]
>  Se si chiama uno del **spostare** funzioni mentre il record corrente viene aggiornato o aggiunto, gli aggiornamenti vengono persi senza alcun avviso.  
  
 Utilizzare il **spostare** funzioni per spostarsi da un record a altro senza applicare una condizione. Utilizzare le operazioni di ricerca per individuare i record in un tipo dynaset o un oggetto recordset di tipo snapshot che soddisfano una determinata condizione. Per individuare un record in un oggetto recordset di tipo tabella, chiamare `Seek`.  
  
 Se il recordset fa riferimento a un recordset di tipo tabella, indice corrente della tabella movimento. È possibile impostare l'indice corrente utilizzando la proprietà di indice dell'oggetto DAO sottostante. Se non si imposta l'indice corrente, non è definito l'ordine dei record restituiti.  
  
 Se si chiama `MoveLast` su un oggetto recordset basato su una query SQL o querydef, la query viene forzata fino al completamento e l'oggetto recordset è completamente popolato.  
  
 Per spostare la posizione dell'oggetto corrente di record in un oggetto recordset uno specifico numero di record avanti o indietro, chiamare **spostare**.  
  
 Per informazioni correlate, vedere gli argomenti "Metodo Move" e "MoveFirst, MoveLast, MoveNext e MovePrevious metodi" nella Guida di DAO.  
  
##  <a name="movenext"></a>CDaoRecordset::MoveNext  
 Chiamare questa funzione membro per rendere il successivo record del recordset, il record corrente.  
  
```  
void MoveNext();
```  
  
### <a name="remarks"></a>Note  
 È consigliabile chiamare `IsBOF` prima di tentare di passare al record precedente. Una chiamata a `MovePrev` genererà un `CDaoException` se `IsBOF` restituisce diverso da zero, che indica che è già eseguito lo scorrimento prima del primo record o che sono stati selezionato alcun record dal recordset.  
  
> [!CAUTION]
>  Chiamare uno del **spostare** funzioni genera un'eccezione se il recordset non contiene record. In generale, chiamare sia `IsBOF` e `IsEOF` prima di un'operazione di spostamento per determinare se il recordset contiene record. Dopo aver chiamato **aprire** o **Requery**, chiamare il metodo `IsBOF` o `IsEOF`.  
  
> [!NOTE]
>  Se si chiama uno del **spostare** funzioni mentre il record corrente viene aggiornato o aggiunto, gli aggiornamenti vengono persi senza alcun avviso.  
  
 Utilizzare il **spostare** funzioni per spostarsi da un record a altro senza applicare una condizione. Utilizzare le operazioni di ricerca per individuare i record in un tipo dynaset o un oggetto recordset di tipo snapshot che soddisfano una determinata condizione. Per individuare un record in un oggetto recordset di tipo tabella, chiamare `Seek`.  
  
 Se il recordset fa riferimento a un recordset di tipo tabella, indice corrente della tabella movimento. È possibile impostare l'indice corrente utilizzando la proprietà di indice dell'oggetto DAO sottostante. Se non si imposta l'indice corrente, non è definito l'ordine dei record restituiti.  
  
 Per spostare la posizione dell'oggetto corrente di record in un oggetto recordset uno specifico numero di record avanti o indietro, chiamare **spostare**.  
  
 Per informazioni correlate, vedere gli argomenti "Metodo Move" e "MoveFirst, MoveLast, MoveNext e MovePrevious metodi" nella Guida di DAO.  
  
##  <a name="moveprev"></a>CDaoRecordset::MovePrev  
 Chiamare questa funzione membro per rendere il record precedente del recordset, il record corrente.  
  
```  
void MovePrev();
```  
  
### <a name="remarks"></a>Note  
 È consigliabile chiamare `IsBOF` prima di tentare di passare al record precedente. Una chiamata a `MovePrev` genererà un `CDaoException` se `IsBOF` restituisce diverso da zero, che indica che è già eseguito lo scorrimento prima del primo record o che sono stati selezionato alcun record dal recordset.  
  
> [!CAUTION]
>  Chiamare uno del **spostare** funzioni genera un'eccezione se il recordset non contiene record. In generale, chiamare sia `IsBOF` e `IsEOF` prima di un'operazione di spostamento per determinare se il recordset contiene record. Dopo aver chiamato **aprire** o **Requery**, chiamare il metodo `IsBOF` o `IsEOF`.  
  
> [!NOTE]
>  Se si chiama uno del **spostare** funzioni mentre il record corrente viene aggiornato o aggiunto, gli aggiornamenti vengono persi senza alcun avviso.  
  
 Utilizzare il **spostare** funzioni per spostarsi da un record a altro senza applicare una condizione. Utilizzare le operazioni di ricerca per individuare i record in un tipo dynaset o un oggetto recordset di tipo snapshot che soddisfano una determinata condizione. Per individuare un record in un oggetto recordset di tipo tabella, chiamare `Seek`.  
  
 Se il recordset fa riferimento a un recordset di tipo tabella, indice corrente della tabella movimento. È possibile impostare l'indice corrente utilizzando la proprietà di indice dell'oggetto DAO sottostante. Se non si imposta l'indice corrente, non è definito l'ordine dei record restituiti.  
  
 Non è possibile chiamare il **MoveFirst** o `MovePrev` funzione membro con uno snapshot di scorrimento forward-only.  
  
 Per spostare la posizione dell'oggetto corrente di record in un oggetto recordset uno specifico numero di record avanti o indietro, chiamare **spostare**.  
  
 Per informazioni correlate, vedere gli argomenti "Metodo Move" e "MoveFirst, MoveLast, MoveNext e MovePrevious metodi" nella Guida di DAO.  
  
##  <a name="open"></a>CDaoRecordset:: Open  
 È necessario chiamare questa funzione membro per recuperare i record del recordset.  
  
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
 `nOpenType`  
 Uno dei valori seguenti:  
  
- **dbOpenDynaset** un recordset di tipo dynaset con scorrimento bidirezionale. Questa è l'impostazione predefinita.  
  
- **dbOpenTable** un recordset di tipo di tabella con scorrimento bidirezionale.  
  
- **dbOpenSnapshot** un recordset di tipo snapshot con scorrimento bidirezionale.  
  
 `lpszSQL`  
 Puntatore di stringa contenente uno degli elementi seguenti:  
  
-   Oggetto **NULL** puntatore.  
  
-   Il nome di uno o più oggetti TableDef e/o querydefs (delimitato da virgole).  
  
-   Un database SQL **selezionare** istruzione (eventualmente con un database SQL **in** o **ORDERBY** clausola).  
  
-   Una query pass-through.  
  
 `nOptions`  
 Uno o più delle opzioni riportate di seguito. Il valore predefinito è 0. I valori possibili sono i seguenti:  
  
- **dbAppendOnly** è solo possibile aggiungere nuovi record (solo per i recordset di tipo dynaset). Questa opzione significa letteralmente che possono solo essere accodati i record. Le classi di database ODBC MFC è presente un'opzione append-only che consente di essere recuperati e aggiunti record.  
  
- **dbForwardOnly** il recordset è uno snapshot di scorrimento forward-only.  
  
- **dbSeeChanges** generano un'eccezione se un altro utente modifica i dati che si sta modificando.  
  
- **dbDenyWrite** altri utenti non possono modificare o aggiungere record.  
  
- **dbDenyRead** gli altri utenti non possono visualizzare i record (solo per i recordset di tipo tabella).  
  
- **dbReadOnly** è possibile visualizzare solo i record; gli altri utenti possono essere modificate.  
  
- **dbInconsistent** aggiornamenti non consistenti consentiti (solo per i recordset di tipo dynaset).  
  
- **dbConsistent** solo aggiornamenti coerenti sono consentiti (solo per i recordset di tipo dynaset).  
  
> [!NOTE]
>  Le costanti **dbConsistent** e **dbInconsistent** si escludono a vicenda. È possibile utilizzare uno o l'altro, ma non entrambi in una determinata istanza di **aprire**.  
  
 *pTableDef*  
 Un puntatore a un [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) oggetto. Questa versione è valida solo per i recordset di tipo di tabella. Quando si utilizza questa opzione, il `CDaoDatabase` puntatore utilizzato per costruire il `CDaoRecordset` non viene utilizzata; piuttosto, viene utilizzato il database in cui risiede l'oggetto tabledef.  
  
 *pQueryDef*  
 Un puntatore a un [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) oggetto. Questa versione è valida solo per dynaset e Recordset di tipo snapshot. Quando si utilizza questa opzione, il `CDaoDatabase` puntatore utilizzato per costruire il `CDaoRecordset` non viene utilizzata; piuttosto, viene utilizzato il database in cui risiede l'oggetto querydef.  
  
### <a name="remarks"></a>Note  
 Prima di chiamare **aprire**, è necessario costruire l'oggetto recordset. Sono disponibili diversi modi per eseguire questa operazione:  
  
-   Quando si crea l'oggetto recordset, passare un puntatore a un `CDaoDatabase` oggetto che è già aperto.  
  
-   Quando si crea l'oggetto recordset, passare un puntatore a un `CDaoDatabase` oggetto che non è aperto. Apertura del recordset un `CDaoDatabase` dell'oggetto, ma non la chiude quando si chiude l'oggetto recordset.  
  
-   Quando si costruisce l'oggetto recordset, passare un **NULL** puntatore. Le chiamate di oggetti recordset `GetDefaultDBName` per ottenere il nome di Microsoft Access. File MDB da aprire. L'apertura del recordset quindi un `CDaoDatabase` oggetto e mantiene è aperto, purché il recordset è aperto. Quando si chiama **Chiudi** nell'oggetto recordset, il `CDaoDatabase` viene chiusa anche l'oggetto.  
  
    > [!NOTE]
    >  Quando si apre il recordset di `CDaoDatabase` dell'oggetto, l'origine dati viene aperto con accesso non esclusivo.  
  
 Per la versione di **aprire** che utilizza il `lpszSQL` parametro, una volta aperto il recordset è possibile recuperare i record in modi diversi. La prima opzione consiste nel funzioni DFX il `DoFieldExchange`. La seconda opzione consiste nell'utilizzare l'associazione dinamica chiamando il `GetFieldValue` funzione membro. Queste opzioni possono essere implementate separatamente o in combinazione. Se vengono combinate, è necessario passare nell'istruzione SQL se stessi durante la chiamata a **aprire**.  
  
 Quando si utilizza la seconda versione di **aprire** dove si passano un `CDaoTableDef` dell'oggetto, le colonne risultante saranno disponibili per associare tramite `DoFieldExchange` e il meccanismo DFX e/o associare in modo dinamico tramite `GetFieldValue`.  
  
> [!NOTE]
>  È possibile chiamare solo **aprire** utilizzando un `CDaoTableDef` oggetto per i recordset di tipo di tabella.  
  
 Quando si utilizza la terza versione di **aprire** dove si passano un `CDaoQueryDef` dell'oggetto, che verranno eseguite query e le colonne risultante saranno disponibili per associare tramite `DoFieldExchange` e il meccanismo DFX e/o associare in modo dinamico tramite `GetFieldValue`.  
  
> [!NOTE]
>  È possibile chiamare solo **aprire** utilizzando un `CDaoQueryDef` oggetto di tipo dynaset e Recordset di tipo snapshot.  
  
 Per la prima versione di **aprire** che utilizza il `lpszSQL` parametro, i record sono selezionata in base a criteri illustrata nella tabella seguente.  
  
|Valore del parametro `lpszSQL`|I record selezionati sono determinati da|Esempio|  
|--------------------------------------|----------------------------------------|-------------|  
|**NULL**|Stringa restituita da `GetDefaultSQL`.||  
|Un elenco delimitato da virgole di uno o più oggetti TableDef e/o querydef nomi.|Tutte le colonne rappresentate nel `DoFieldExchange`.|`"Customer"`|  
|**Selezionare** elenco di colonne **FROM** elenco tabella|Le colonne specificate da tabledef(s) specificato e/o querydef(s).|`"SELECT CustId, CustName`<br /><br /> `FROM Customer"`|  
  
 La procedura normale consiste nel passare **NULL** a **aprire**; in tal caso, **aprire** chiamate `GetDefaultSQL`, una funzione membro sottoponibili a override che ClassWizard genera durante la creazione di un `CDaoRecordset`-classe derivata. Questo valore indica il nome tabledef(s) e/o querydef specificate nella creazione guidata classe. Nel parametro `lpszSQL` è invece possibile specificare altre informazioni.  
  
 Qualsiasi elemento passato, **aprire** costruisce una stringa SQL finale per la query (la stringa potrebbe essere SQL **in cui** e **ORDERBY** clausole aggiunto il `lpszSQL` stringa passati), quindi viene eseguita la query. È possibile esaminare la stringa costruita chiamando `GetSQL` dopo la chiamata **aprire**.  
  
 I membri dei dati di campo della classe recordset sono associati alle colonne dei dati selezionati. Se vengono restituiti record, il primo di essi diventa il record corrente.  
  
 Se si desidera impostare le opzioni per il recordset, ad esempio un filtro o ordinamento, impostare `m_strSort` o **m_strFilter** dopo la creazione dell'oggetto recordset ma prima di chiamare **aprire**. Se si desidera aggiornare i record del recordset quando quest'ultimo è già aperto, chiamare **Requery**.  
  
 Se si chiama **aprire** su un tipo dynaset o recordset di tipo snapshot, o se l'origine dati fa riferimento a un'istruzione SQL o un oggetto tabledef che rappresenta una tabella collegata, è possibile utilizzare **dbOpenTable** per l'argomento di tipo; in caso contrario MFC genera un'eccezione. Per determinare se un oggetto tabledef rappresenta una tabella collegata, creare un [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) oggetto e chiamare il relativo [GetConnect](../../mfc/reference/cdaotabledef-class.md#getconnect) funzione membro.  
  
 Utilizzare il **dbSeeChanges** flag se si desidera registrare le modifiche apportate da un altro utente o un altro programma nel computer in uso quando si modifica o eliminazione del record stesso. Ad esempio, se due utenti possono iniziare a modificare lo stesso record, all'utente prima di chiamare il **aggiornamento** membro funzione ha esito positivo. Quando **aggiornamento** viene chiamato dall'utente, secondo un `CDaoException` viene generata un'eccezione. Analogamente, se il secondo utente tenta di chiamare **eliminare** per eliminare il record e si già è stata modificata dal primo utente, un `CDaoException` si verifica.  
  
 In genere, se l'utente ottiene questo `CDaoException` durante l'aggiornamento, il codice deve aggiornare il contenuto dei campi e recuperare i nuovi valori modificati. Se l'eccezione si verifica in corso l'eliminazione, il codice può visualizzare i dati del nuovo record per l'utente e un messaggio che indica che i dati sono stata modificata recentemente. A questo punto, il codice può richiedere una conferma che l'utente desidera comunque eliminare il record.  
  
> [!TIP]
>  Utilizzare l'opzione di scorrimento forward-only ( **dbForwardOnly**) per migliorare le prestazioni quando l'applicazione effettua un'unica operazione all'interno di un recordset è aperto da un'origine dati ODBC.  
  
 Per informazioni correlate, vedere l'argomento "Metodo OpenRecordset" nella Guida di DAO.  
  
##  <a name="requery"></a>CDaoRecordset::Requery  
 Chiamare questa funzione membro per ricompilare (aggiornamento) di un recordset.  
  
```  
virtual void Requery();
```  
  
### <a name="remarks"></a>Note  
 Se vengono restituiti record, il primo di essi diventa il record corrente.  
  
 Affinché il recordset in modo da riflettere le aggiunte ed eliminazioni che si stanno effettuando all'origine dati, è necessario ricompilare il recordset chiamando **Requery**. Se il recordset è un dynaset, riflette automaticamente gli aggiornamenti che si o ad altri utenti per il record esistente (ma non aggiunte). Se il recordset è uno snapshot, è necessario chiamare **Requery** in modo da riflettere le modifiche da altri utenti, nonché le aggiunte e le eliminazioni.  
  
 Per dynaset o uno snapshot, chiamare **Requery** ogni volta che si desidera ricompilare il recordset utilizzando valori dei parametri. Impostare il nuovo filtro o ordinamento impostando [m_strFilter](#m_strfilter) e [m_strSort](#m_strsort) prima di chiamare **Requery**. Imposta nuovi parametri assegnando nuovi valori ai membri dati di parametro prima di chiamare **Requery**.  
  
 Se il tentativo di ricompilare il recordset non riesce, il recordset è chiuso. Prima di chiamare **Requery**, è possibile determinare se il recordset può essere eseguito chiamando il [CanRestart](#canrestart) funzione membro. `CanRestart`non garantisce che **Requery** avrà esito positivo.  
  
> [!CAUTION]
>  Chiamare **Requery** solo dopo aver chiamato **aprire**.  
  
> [!NOTE]
>  La chiamata a [Requery](#requery) modifica segnalibri DAO.  
  
 Non è possibile chiamare **Requery** su un tipo dynaset o recordset di tipo snapshot se la chiamata a `CanRestart` restituisce 0, né è possibile utilizzare, in un recordset di tipo di tabella.  
  
 Se entrambi `IsBOF` e `IsEOF` restituito diverso da zero dopo la chiamata **Requery**, la query non ha restituito alcun record e il recordset non conterrà alcun dato.  
  
 Per informazioni correlate, vedere l'argomento "Metodo Requery" nella Guida di DAO.  
  
##  <a name="seek"></a>CDaoRecordset::Seek  
 Chiamare questa funzione membro per individuare il record in un oggetto recordset di tipo tabella indicizzata che soddisfa i criteri specificati per l'oggetto indicizzano e verificare che il record corrente.  
  
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
 `lpszComparison`  
 Una delle seguenti espressioni stringa: "<",></",>\<=", "=", "> =", o ">".  
  
 `pKey1`  
 Un puntatore a un [COleVariant](../../mfc/reference/colevariant-class.md) il cui valore corrisponde al primo campo nell'indice. Obbligatorio.  
  
 *pKey2*  
 Un puntatore a un `COleVariant` il cui valore corrisponde al secondo campo nell'indice, se presente. Per impostazione predefinita **NULL**.  
  
 *pKey3*  
 Un puntatore a un `COleVariant` il cui valore corrisponde al terzo campo nell'indice, se presente. Per impostazione predefinita **NULL**.  
  
 *pKeyArray*  
 Un puntatore a una matrice di varianti. La dimensione della matrice corrisponde al numero di campi nell'indice.  
  
 *nKeys*  
 Valore intero corrispondente alla dimensione della matrice, ovvero il numero di campi nell'indice.  
  
> [!NOTE]
>  Non specificare i caratteri jolly nelle chiavi. I caratteri jolly causerà `Seek` per non restituire i record corrispondenti.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se vengono trovati record corrispondenti, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare la seconda versione (matrice) di `Seek` per gestire gli indici di campi di quattro o più.  
  
 `Seek`Abilita l'indice ad alte prestazioni ricerca per i recordset di tipo di tabella. È necessario impostare l'indice corrente chiamando `SetCurrentIndex` prima di chiamare `Seek`. Se l'indice identifica un campo chiave non univoco o campi, `Seek` individua il primo record che soddisfano i criteri. Se non è un indice, viene generata un'eccezione.  
  
 Si noti che se non si sta creando un recordset UNICODE, la `COleVariant` oggetti devono essere dichiarati esplicitamente ANSI. Questa operazione può essere eseguita utilizzando il [COleVariant:: COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** `lpszSrc` **,** `vtSrc` **)** form del costruttore con `vtSrc` impostato su `VT_BSTRT` (ANSI) o tramite il **COleVariant** funzione [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** `lpszSrc` **,** `vtSrc` **)** con `vtSrc` impostato su `VT_BSTRT`.  
  
 Quando si chiama `Seek`, passare uno o più valori di chiave e un operatore di confronto ("<",></",>\<=", "=", "> =", o ">"). `Seek`Cerca i campi chiave specificati e individua il primo record che soddisfa i criteri specificati da `lpszComparison` e `pKey1`. Una volta trovato, `Seek` restituisce diverso da zero e rende il record corrente. Se `Seek` non riesce a trovare una corrispondenza, `Seek` restituisce zero e il record corrente non è definito. Quando si usa DAO direttamente, è necessario controllare in modo esplicito la proprietà NoMatch.  
  
 Se `lpszComparison` è "=", "> =", o ">", `Seek` inizia all'inizio dell'indice. Se `lpszComparison` è "<" or=""> </"> <=",> </=",> `Seek` inizia alla fine dell'indice e Cerca all'indietro a meno che non sono presenti voci di indice duplicati alla fine. In questo caso, `Seek` inizia in corrispondenza di una voce arbitraria tra le voci di indice duplicati alla fine dell'indice.  
  
 Non devono essere un record corrente quando si utilizza `Seek`.  
  
 Per individuare un record in un tipo dynaset o recordset di tipo snapshot che soddisfa una condizione specifica, utilizzare le operazioni di ricerca. Per includere tutti i record, non solo quelli che soddisfano una condizione specifica, utilizzare le operazioni di spostamento per spostarsi da un record a altro.  
  
 Non è possibile chiamare `Seek` su una tabella collegata di qualsiasi tipo perché le tabelle collegate devono essere aperto come tipo dynaset o Recordset di tipo snapshot. Tuttavia, se si chiama `CDaoDatabase::Open` per aprire direttamente un database ISAM installabile, è possibile chiamare `Seek` nelle tabelle di database, anche se le prestazioni potrebbero essere lento.  
  
 Per informazioni correlate, vedere l'argomento "Metodo Seek" nella Guida di DAO.  
  
##  <a name="setabsoluteposition"></a>CDaoRecordset:: SetAbsolutePosition  
 Imposta il numero di record relativo del record corrente dell'oggetto recordset.  
  
```  
void SetAbsolutePosition(long lPosition);
```  
  
### <a name="parameters"></a>Parametri  
 *lPosition*  
 Corrisponde alla posizione ordinale del record corrente nell'oggetto recordset.  
  
### <a name="remarks"></a>Note  
 La chiamata `SetAbsolutePosition` consente di posizionare il puntatore del record corrente a un record specifico in base alla posizione ordinale in un recordset di tipo snapshot o di tipo dynaset. È inoltre possibile determinare il numero di record corrente chiamando [GetAbsolutePosition](#getabsoluteposition).  
  
> [!NOTE]
>  Questa funzione membro è valida solo per dynaset e Recordset di tipo snapshot.  
  
 Il valore della proprietà AbsolutePosition dell'oggetto DAO sottostante è in base zero. il valore 0 si riferisce al primo record del recordset. Se si imposta un valore maggiore rispetto al numero di record popolati, in MFC per generare un'eccezione. È possibile determinare il numero di record popolati nell'oggetto recordset chiamando il `GetRecordCount` funzione membro.  
  
 Se il record corrente viene eliminato, non è definito il valore della proprietà AbsolutePosition e MFC genera un'eccezione se si fa riferimento. Nuovi record vengono aggiunti alla fine della sequenza.  
  
> [!NOTE]
>  Questa proprietà non deve essere utilizzato come numero di record sostitutivo. I segnalibri sono ancora il modo consigliato per mantenere e tornare a una posizione specifica e sono l'unico modo per posizionare il record corrente in tutti i tipi di oggetti recordset che supportano i segnalibri. In particolare, la posizione di un determinato record cambia quando vengono eliminati i record precedente. Non vi è alcuna garanzia che un determinato record avrà la stessa posizione assoluta se l'oggetto recordset viene ricreato perché l'ordine dei singoli record all'interno di un recordset non è garantito a meno che non viene creato con un'istruzione SQL utilizzando un **ORDERBY** clausola.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà AbsolutePosition" nella Guida di DAO.  
  
##  <a name="setbookmark"></a>CDaoRecordset::SetBookmark  
 Chiamare questa funzione membro per posizionare l'oggetto recordset sul record che contiene il segnalibro specificato.  
  
```  
void SetBookmark(COleVariant varBookmark);
```  
  
### <a name="parameters"></a>Parametri  
 `varBookmark`  
 Oggetto [COleVariant](../../mfc/reference/colevariant-class.md) oggetto contenente il valore del segnalibro per un record specifico.  
  
### <a name="remarks"></a>Note  
 Quando un oggetto recordset viene creato o aperto, ognuno dei relativi record dispone già di un segnalibro univoco. È possibile recuperare il segnalibro per il record corrente chiamando `GetBookmark` e salvare il valore da un `COleVariant` oggetto. È possibile restituire tale record in un secondo momento chiamando `SetBookmark` utilizzando il valore di segnalibro salvato.  
  
> [!NOTE]
>  La chiamata a [Requery](#requery) modifica segnalibri DAO.  
  
 Si noti che se non si sta creando un recordset UNICODE, la `COleVariant` oggetto deve essere dichiarato in modo esplicito ANSI. Questa operazione può essere eseguita utilizzando il [COleVariant:: COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** `lpszSrc` **,** `vtSrc` **)** form del costruttore con `vtSrc` impostato su `VT_BSTRT` (ANSI) o tramite il **COleVariant** funzione [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** `lpszSrc` **,** `vtSrc` **)** con `vtSrc` impostato su `VT_BSTRT`.  
  
 Per informazioni correlate, vedere gli argomenti "segnalibro" supporta proprietà e"nella Guida di DAO.  
  
##  <a name="setcachesize"></a>CDaoRecordset:: SetCacheSize  
 Chiamare questa funzione membro per impostare il numero di record da memorizzare nella cache.  
  
```  
void SetCacheSize(long lSize);
```  
  
### <a name="parameters"></a>Parametri  
 `lSize`  
 Specifica il numero di record. Un valore tipico è 100. Il valore 0 disattiva la memorizzazione nella cache. L'impostazione deve essere compreso tra 5 e 1200 record. La cache può utilizzare una notevole quantità di memoria.  
  
### <a name="remarks"></a>Note  
 La cache è uno spazio nella memoria locale che contiene i dati recuperati dal server di più di recente nel caso in cui i dati verranno nuovamente richiesto durante l'esecuzione dell'applicazione. Memorizzazione di dati migliora le prestazioni di un'applicazione che recupera dati da un server remoto tramite gli oggetti recordset di tipo dynaset. Quando vengono richiesti dati, il motore di database Microsoft Jet controlla innanzitutto la cache per i dati richiesti anziché recuperarli dal server, che richiede più tempo. Dati che provengono da un'origine dati ODBC non vengono salvati nella cache.  
  
 Qualsiasi origine dati ODBC, ad esempio una tabella collegata, può disporre di una cache locale. Per creare la cache, aprire un oggetto recordset dall'origine dati remota, chiamata di `SetCacheSize` e `SetCacheStart` funzioni membro e quindi chiamare il `FillCache` funzione membro o scorrere i record utilizzando una delle operazioni di spostamento. Il `lSize` parametro il `SetCacheSize` funzione membro può essere in base al numero di record dell'applicazione può utilizzare in una sola volta. Ad esempio, se si utilizza un recordset come origine dei dati da visualizzare sullo schermo, è possibile passare il `SetCacheSize``lSize` parametro come 20 per visualizzare 20 record alla volta.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà CacheSize e CacheStart" nella Guida di DAO.  
  
##  <a name="setcachestart"></a>CDaoRecordset:: SetCacheStart  
 Chiamare questa funzione membro per specificare il segnalibro del primo record del recordset da memorizzare nella cache.  
  
```  
void SetCacheStart(COleVariant varBookmark);
```  
  
### <a name="parameters"></a>Parametri  
 `varBookmark`  
 Oggetto [COleVariant](../../mfc/reference/colevariant-class.md) che specifica il segnalibro del primo record del recordset da memorizzare nella cache.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare il valore di segnalibro di tutti i record per il `varBookmark` parametro il `SetCacheStart` funzione membro. Il record che si desidera iniziare la cache con il record corrente, stabilire un segnalibro per tale record utilizzando [SetBookmark](#setbookmark)e passare il valore di segnalibro come parametro per il `SetCacheStart` funzione membro.  
  
 Il motore di database Microsoft Jet richiede record all'interno dell'intervallo della cache dalla cache e i record di fuori dell'intervallo di cache dal server.  
  
 I record recuperati dalla cache non riflettono le modifiche apportate contemporaneamente all'origine dati da altri utenti.  
  
 Per forzare un aggiornamento di tutti i dati memorizzati nella cache, passare il `lSize` parametro di `SetCacheSize` come 0, chiamare `SetCacheSize` nuovamente con le dimensioni della cache originariamente richiesta e quindi chiamare il `FillCache` funzione membro.  
  
 Si noti che se non si sta creando un recordset UNICODE, la `COleVariant` oggetto deve essere dichiarato in modo esplicito ANSI. Questa operazione può essere eseguita utilizzando il [COleVariant:: COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** `lpszSrc` **,** `vtSrc` **)** form del costruttore con `vtSrc` impostato su `VT_BSTRT` (ANSI) o tramite il **COleVariant** funzione [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** `lpszSrc` **,** `vtSrc` **)** con `vtSrc` impostato su `VT_BSTRT`.  
  
 Per informazioni correlate, vedere l'argomento CacheSize, proprietà CacheStart"nella Guida di DAO.  
  
##  <a name="setcurrentindex"></a>CDaoRecordset:: SetCurrentIndex  
 Chiamare questa funzione membro per impostare un indice in un recordset di tipo di tabella.  
  
```  
void SetCurrentIndex(LPCTSTR lpszIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszIndex`  
 Un puntatore che contiene il nome dell'indice da impostare.  
  
### <a name="remarks"></a>Note  
 I record nelle tabelle di base non sono archiviati in un ordine particolare. L'impostazione di un indice viene modificato l'ordine dei record restituiti dal database, ma non influenza l'ordine in cui sono archiviati i record. L'indice specificato deve essere già definita. Se si tenta di utilizzare un oggetto indice che non esiste o se l'indice non è impostata quando si chiama [Seek](#seek), MFC genera un'eccezione.  
  
 È possibile creare un nuovo indice per la tabella chiamando [CDaoTableDef::CreateIndex](../../mfc/reference/cdaotabledef-class.md#createindex) e aggiungendo il nuovo indice per la raccolta di indici dell'oggetto tabledef sottostante chiamando [CDaoTableDef:: Append](../../mfc/reference/cdaotabledef-class.md#append)e quindi riaprire il recordset.  
  
 I record restituiti da un recordset di tipo di tabella possono essere ordinati solo per gli indici definiti per l'oggetto tabledef sottostante. Per ordinare i record in un altro ordine, è possibile aprire un tipo dynaset o recordset di tipo snapshot con SQL **ORDERBY** clausola archiviati in [CDaoRecordset::m_strSort](#m_strsort).  
  
 Per informazioni correlate, vedere l'argomento "Oggetto indice" e la definizione "indice corrente" nella Guida di DAO.  
  
##  <a name="setfielddirty"></a>CDaoRecordset:: SetFieldDirty  
 Chiamare questa funzione membro per contrassegnare un membro dati di campo del recordset come come unchanged o modificati.  
  
```  
void SetFieldDirty(
    void* pv,  
    BOOL bDirty = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pv`  
 Contiene l'indirizzo di un membro dati di campo del recordset o **NULL**. Se **NULL**, vengono contrassegnati tutti i membri dati di campo del recordset. (C++ **NULL** non equivale Null nella terminologia dei database, il che significa "non having alcun valore.")  
  
 `bDirty`  
 **TRUE** se il membro dati di campo è contrassegnato come "dirty" (modificato). In caso contrario **FALSE** se il membro dati di campo è contrassegnato come "pulire" (non modificato).  
  
### <a name="remarks"></a>Note  
 Contrassegnare i campi come non modificate garantisce che il campo non viene aggiornato.  
  
 I segni di framework modificato membri dati di campo per garantire che verrà scritto il record nell'origine dati mediante il meccanismo di scambio (DFX) di campi di record DAO. Modifica del valore di un campo in genere impostato il dirty automaticamente, pertanto raramente sarà necessario chiamare `SetFieldDirty` autonomamente, ma si potrebbe essere utile verificare che le colonne verranno essere aggiornate o inserite indipendentemente dal valore sia nel membro dati di campo in modo esplicito. Il meccanismo DFX utilizza anche l'utilizzo di **PSEUDONULL**. Per ulteriori informazioni, vedere [CDaoFieldExchange:: M_noperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).  
  
 Se non viene utilizzato il meccanismo del doppio buffer, quindi modificare il valore del campo non imposta automaticamente il campo come dirty. In questo caso, sarà necessario impostare esplicitamente il campo come dirty. Il flag contenuto in [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controlla questo controllo automatico dei campi.  
  
> [!NOTE]
>  Chiamare questa funzione membro solo dopo aver chiamato [modificare](#edit) o [AddNew](#addnew).  
  
 Utilizzando **NULL** per il primo argomento della funzione verrà applicata la funzione a tutti **outputColumn** campi, non **param** campi `CDaoFieldExchange`. Ad esempio, la chiamata  
  
 [!code-cpp[6 NVC_MFCDatabase](../../mfc/codesnippet/cpp/cdaorecordset-class_6.cpp)]  
  
 imposterà solo **outputColumn** campi **NULL**; **param** campi non saranno interessati.  
  
 Per lavorare su un **param**, è necessario fornire l'indirizzo effettivo di singoli **param** si desidera utilizzare, ad esempio:  
  
 [!code-cpp[NVC_MFCDatabase&#7;](../../mfc/codesnippet/cpp/cdaorecordset-class_7.cpp)]  
  
 Ciò significa che non è possibile impostare tutti **param** campi **NULL**, come è possibile con **outputColumn** campi.  
  
 `SetFieldDirty`viene implementata tramite `DoFieldExchange`.  
  
##  <a name="setfieldnull"></a>CDaoRecordset::SetFieldNull  
 Chiamare questa funzione membro per contrassegnare un membro dati di campo del recordset come Null, in particolare che non ha alcun valore, o non Null.  
  
```  
void SetFieldNull(
    void* pv,  
    BOOL bNull = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pv`  
 Contiene l'indirizzo di un membro dati di campo del recordset o **NULL**. Se **NULL**, vengono contrassegnati tutti i membri dati di campo del recordset. (C++ **NULL** non equivale Null nella terminologia dei database, il che significa "non having alcun valore.")  
  
 `bNull`  
 Diverso da zero se il membro dati di campo deve essere contrassegnata come tabella non contenente alcun valore (Null). In caso contrario 0 se il membro dati di campo deve essere contrassegnata come non Null.  
  
### <a name="remarks"></a>Note  
 `SetFieldNull`viene utilizzato per i campi associati nel `DoFieldExchange` meccanismo.  
  
 Quando si aggiunge un nuovo record a un oggetto recordset, tutti i membri dati di campo vengono inizialmente impostati su un valore Null e contrassegnati come "dirty" (modificato). Quando si recupera un record da un'origine dati, le colonne già dispongono di valori o sono Null. Se non è appropriato rendere un campo Null, un [CDaoException](../../mfc/reference/cdaoexception-class.md) viene generata un'eccezione.  
  
 Se si utilizza il meccanismo del doppio buffer, ad esempio, se si desidera assegnare a un campo del record corrente in quanto non hanno un valore, chiamare in modo specifico `SetFieldNull` con `bNull` impostato su **TRUE** per contrassegnarlo come Null. Se un campo in precedenza è stato contrassegnato come Null e si desidera assegnare un valore, è sufficiente impostare il nuovo valore. Non è necessario rimuovere il flag Null con `SetFieldNull`. Per determinare se il campo può essere Null, chiamare [IsFieldNullable](#isfieldnullable).  
  
 Se non si utilizza il meccanismo del doppio buffer, quindi modificare il valore del campo non imposta automaticamente il campo come dirty e non Null. In particolare, è necessario impostare i campi modificati e non Null. Il flag contenuto in [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controlla questo controllo automatico dei campi.  
  
 Il meccanismo DFX impiega l'utilizzo di **PSEUDONULL**. Per ulteriori informazioni, vedere [CDaoFieldExchange:: M_noperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).  
  
> [!NOTE]
>  Chiamare questa funzione membro solo dopo aver chiamato [modificare](#edit) o [AddNew](#addnew).  
  
 Utilizzando **NULL** per il primo argomento della funzione verrà applicata solo alla funzione **outputColumn** campi, non **param** campi `CDaoFieldExchange`. Ad esempio, la chiamata  
  
 [!code-cpp[NVC_MFCDatabase n.&8;](../../mfc/codesnippet/cpp/cdaorecordset-class_8.cpp)]  
  
 imposterà solo **outputColumn** campi **NULL**; **param** campi non saranno interessati.  
  
##  <a name="setfieldvalue"></a>CDaoRecordset::SetFieldValue  
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
 `lpszName`  
 Un puntatore a una stringa contenente il nome di un campo.  
  
 `varValue`  
 Un riferimento a un [COleVariant](../../mfc/reference/colevariant-class.md) oggetto contenente il valore del contenuto del campo.  
  
 `nIndex`  
 Valore intero che rappresenta la posizione ordinale del campo nella raccolta di campi del recordset (in base zero).  
  
 `lpszValue`  
 Un puntatore a una stringa contenente il valore del contenuto del campo.  
  
### <a name="remarks"></a>Note  
 Utilizzare `SetFieldValue` e [GetFieldValue](#getfieldvalue) associare in modo dinamico i campi in fase di esecuzione anziché in modo statico associazione delle colonne mediante il [DoFieldExchange](#dofieldexchange) meccanismo.  
  
 Si noti che se non si sta creando un recordset UNICODE, è necessario utilizzare una forma di `SetFieldValue` che non contiene un `COleVariant` parametro, o `COleVariant` oggetto deve essere dichiarato in modo esplicito ANSI. Questa operazione può essere eseguita utilizzando il [COleVariant:: COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** `lpszSrc` **,** `vtSrc` **)** form del costruttore con `vtSrc` impostato su `VT_BSTRT` (ANSI) o tramite il **COleVariant** funzione [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** `lpszSrc` **,** `vtSrc` **)** con `vtSrc` impostato su `VT_BSTRT`.  
  
 Per informazioni correlate, vedere gli argomenti "Campo oggetto" e "Valore proprietà" nella Guida di DAO.  
  
##  <a name="setfieldvaluenull"></a>CDaoRecordset::SetFieldValueNull  
 Chiamare questa funzione membro per impostare il campo su un valore Null.  
  
```  
void SetFieldValueNull(int nIndex);  
void SetFieldValueNull(LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 L'indice del campo del recordset, per la ricerca in base all'indice in base zero.  
  
 `lpszName`  
 Il nome del campo del recordset, per la ricerca in base al nome.  
  
### <a name="remarks"></a>Note  
 C++ **NULL** non è uguale a Null, ovvero nella terminologia dei database, come "non having alcun valore."  
  
 Per informazioni correlate, vedere gli argomenti "Campo oggetto" e "Valore proprietà" nella Guida di DAO.  
  
##  <a name="setlockingmode"></a>CDaoRecordset::SetLockingMode  
 Chiamare questa funzione membro per impostare il tipo di blocco per il recordset.  
  
```  
void SetLockingMode(BOOL bPessimistic);
```  
  
### <a name="parameters"></a>Parametri  
 *bPessimistic*  
 Un flag che indica il tipo di blocco.  
  
### <a name="remarks"></a>Note  
 Quando il blocco pessimistico è attivata, la pagina 2 KB che contiene il record che si sta modificando è bloccato, non appena si chiama il **modificare** funzione membro. La pagina viene sbloccata quando si chiama il **aggiornamento** o **Chiudi** funzione membro o una qualsiasi delle operazioni di spostamento o ricerca.  
  
 Quando il blocco ottimistico, la pagina 2 KB che contiene il record viene bloccata solo mentre il record viene aggiornato con il **aggiornamento** funzione membro.  
  
 Se una pagina è bloccata, nessun altro utente può modificare i record nella stessa pagina. Se si chiama `SetLockingMode` e passare un valore diverso da zero e un altro utente già la pagina è bloccata, viene generata un'eccezione quando si chiama **modificare**. Altri utenti possono leggere dati da pagine bloccate.  
  
 Se si chiama `SetLockingMode` con un valore pari a zero e versioni successive chiamare **aggiornamento** quando la pagina è bloccata da un altro utente, viene generata un'eccezione. Per visualizzare le modifiche apportate al record da un altro utente e perdere le modifiche, chiamare il `SetBookmark` funzione membro con il valore del segnalibro del record corrente.  
  
 Quando si utilizzano origini dati ODBC, la modalità di blocco è sempre ottimistica.  
  
##  <a name="setparamvalue"></a>CDaoRecordset::SetParamValue  
 Chiamare questa funzione membro per impostare il valore di un parametro del recordset in fase di esecuzione.  
  
```  
virtual void SetParamValue(
    int nIndex,  
    const COleVariant& varValue);

 
virtual void SetParamValue(
    LPCTSTR lpszName,  
    const COleVariant& varValue);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Posizione numerica del parametro nella raccolta di parametri dell'oggetto querydef.  
  
 `var`  
 Il valore da impostare; vedere la sezione Osservazioni.  
  
 `lpszName`  
 Il nome del parametro il cui valore si desidera impostare.  
  
### <a name="remarks"></a>Note  
 Il parametro deve già sono stato definito come parte della stringa SQL del recordset. È possibile accedere il parametro in base al nome o in base alla posizione di indice nella raccolta.  
  
 Specificare il valore da impostare come un `COleVariant` oggetto. Per informazioni sull'impostazione il valore desiderato e digitare il `COleVariant` oggetto, vedere la classe [COleVariant](../../mfc/reference/colevariant-class.md). Si noti che se non si sta creando un recordset UNICODE, la `COleVariant` oggetto deve essere dichiarato in modo esplicito ANSI. Questa operazione può essere eseguita utilizzando il [COleVariant:: COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** `lpszSrc` **,** `vtSrc` **)** form del costruttore con `vtSrc` impostato su `VT_BSTRT` (ANSI) o tramite il **COleVariant** funzione [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** `lpszSrc` **,** `vtSrc` **)** con `vtSrc` impostato su `VT_BSTRT`.  
  
##  <a name="setparamvaluenull"></a>CDaoRecordset::SetParamValueNull  
 Chiamare questa funzione membro per impostare il parametro su un valore Null.  
  
```  
void SetParamValueNull(int nIndex);  
void SetParamValueNull(LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 L'indice del campo del recordset, per la ricerca in base all'indice in base zero.  
  
 `lpszName`  
 Il nome del campo del recordset, per la ricerca in base al nome.  
  
### <a name="remarks"></a>Note  
 C++ **NULL** non è uguale a Null, ovvero nella terminologia dei database, come "non having alcun valore."  
  
##  <a name="setpercentposition"></a>CDaoRecordset:: SetPercentPosition  
 Chiamare questa funzione membro per impostare un valore che cambia la posizione approssimativa del record corrente nell'oggetto recordset basato su una percentuale dei record del recordset.  
  
```  
void SetPercentPosition(float fPosition);
```  
  
### <a name="parameters"></a>Parametri  
 *fPosition*  
 Numero compreso tra 0 e 100.  
  
### <a name="remarks"></a>Note  
 Quando si utilizza un tipo dynaset o recordset di tipo snapshot, innanzitutto popolare il recordset mediante lo spostamento all'ultimo record prima di chiamare `SetPercentPosition`. Se si chiama `SetPercentPosition` prima di popolare completamente il recordset, la quantità di spostamento è correlata al numero di record è possibile accedere come indicato dal valore di [GetRecordCount](#getrecordcount). È possibile spostare all'ultimo record chiamando `MoveLast`.  
  
 Dopo aver chiamato `SetPercentPosition`, il record in corrispondenza della posizione approssimativa corrispondente al valore diventa quello corrente.  
  
> [!NOTE]
>  La chiamata a `SetPercentPosition` per spostare il record corrente a un record specifico in un recordset non è consigliato. Chiamare il [SetBookmark](#setbookmark) funzione membro.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà PercentPosition" nella Guida di DAO.  
  
##  <a name="update"></a>CDaoRecordset::Update  
 Chiamare questa funzione membro dopo una chiamata al `AddNew` o **modificare** funzione membro.  
  
```  
virtual void Update();
```  
  
### <a name="remarks"></a>Note  
 Questa chiamata è necessario per completare il `AddNew` o **modificare** operazione.  
  
 Entrambi `AddNew` e **modificare** preparare un buffer di modifica in cui sono inseriti i dati aggiunti o modificati per il salvataggio all'origine dati. **Aggiornamento** Salva i dati. Vengono aggiornati solo i campi contrassegnati o rilevata come modificata.  
  
 Se l'origine dati supporta transazioni, è possibile rendere il **aggiornamento** chiamare (e il corrispondente `AddNew` o **modificare** chiamare) fa parte di una transazione.  
  
> [!CAUTION]
>  Se si chiama **aggiornamento** senza prima chiamare `AddNew` o **modificare**, **aggiornamento** genera un `CDaoException`. Se si chiama `AddNew` o **modificare**, è necessario chiamare **aggiornamento** prima di chiamare [MoveNext](#movenext) o la chiusura del recordset o la connessione all'origine dati. In caso contrario, le modifiche andranno perdute senza notifica.  
  
 Quando l'oggetto recordset è blocco pessimistico in un ambiente multiutente, il record rimane bloccato dal momento in cui **modificare** viene utilizzata fino a completa l'aggiornamento. Se il recordset ottimistico è bloccato, il record è bloccato e confrontato con il record precedentemente modificato prima viene aggiornato nel database. Se il record è stato modificato dopo la chiamata **modificare**, **aggiornamento** operazione ha esito negativo e MFC genera un'eccezione. È possibile modificare la modalità di blocco con `SetLockingMode`.  
  
> [!NOTE]
>  Blocco ottimistico viene sempre utilizzato in formati di database esterno, ad esempio ODBC e driver ISAM installabile.  
  
 Per informazioni correlate, vedere gli argomenti "Metodo AddNew", "Metodo CancelUpdate", "Metodo Delete", "Proprietà LastModified", "Metodo di aggiornamento" e "Proprietà EditMode" nella Guida di DAO.  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)   
 [CDaoWorkspace (classe)](../../mfc/reference/cdaoworkspace-class.md)   
 [CDaoDatabase (classe)](../../mfc/reference/cdaodatabase-class.md)   
 [CDaoQueryDef (classe)](../../mfc/reference/cdaoquerydef-class.md)


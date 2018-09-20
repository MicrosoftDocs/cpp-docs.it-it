---
title: Struttura CDaoQueryDefInfo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDaoQueryDefInfo
dev_langs:
- C++
helpviewer_keywords:
- DAO (Data Access Objects), QueryDefs collection
- CDaoQueryDefInfo structure [MFC]
ms.assetid: e20837dc-e78d-4171-a195-1b4075fb5d2a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 930626a2c28009f8f0174069a88a59a12c9059af
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46418541"
---
# <a name="cdaoquerydefinfo-structure"></a>Struttura CDaoQueryDefInfo

Il `CDaoQueryDefInfo` struttura contiene informazioni su un oggetto querydef definito per data access Object (DAO).

## <a name="syntax"></a>Sintassi

```
struct CDaoQueryDefInfo
{
    CString m_strName;               // Primary
    short m_nType;   // Primary
    COleDateTime m_dateCreated;      // Secondary
    COleDateTime m_dateLastUpdated;  // Secondary
    BOOL m_bUpdatable;               // Secondary
    BOOL m_bReturnsRecords;          // Secondary
    CString m_strSQL;                // All
    CString m_strConnect;            // All
    short m_nODBCTimeout;            // All
};
```

#### <a name="parameters"></a>Parametri

*m_strName*<br/>
Identifica in modo univoco l'oggetto querydef. Per altre informazioni, vedere l'argomento "Proprietà di nome" nella Guida di DAO. Chiamare [CDaoQueryDef::GetName](../../mfc/reference/cdaoquerydef-class.md#getname) recuperare questa proprietà direttamente.

*m_nType*<br/>
Un valore che indica il tipo di un oggetto querydef operativo. Il valore può essere uno dei seguenti:

- `dbQSelect` Selezionare, ovvero la query Seleziona record.

- `dbQAction` Azione, ovvero la query viene spostato o modifica i dati, ma non restituisce i record.

- `dbQCrosstab` Campi incrociati, ovvero la query restituisce i dati in un formato di foglio di calcolo.

- `dbQDelete` Eliminazione, ovvero la query consente di eliminare un set di righe specificate.

- `dbQUpdate` Aggiornamento, la query consente di modificare un set di record.

- `dbQAppend` Aggiungere, ovvero la query aggiunge nuovi record alla fine di una tabella o query.

- `dbQMakeTable` Tabella: la query crea una nuova tabella da un recordset.

- `dbQDDL` Definizione dei dati, ovvero la query interessa la struttura delle tabelle o le relative parti.

- `dbQSQLPassThrough` Pass-through, l'istruzione SQL viene passata direttamente al database back-end, senza elaborazione intermedio.

- `dbQSetOperation` Unione, la query crea un oggetto recordset di tipo di snapshot che contiene i dati dai record specificati completamente in due o più tabelle con record duplicati rimossi. Per includere i duplicati, aggiungere la parola chiave **tutti** nell'istruzione SQL dell'oggetto.

- `dbQSPTBulk` Utilizzato con `dbQSQLPassThrough` per specificare una query che non restituisce i record.

> [!NOTE]
>  Per creare una query pass-through SQL, non si imposta la `dbQSQLPassThrough` costante. Ciò viene impostato automaticamente dal motore di database Microsoft Jet quando si crea un oggetto querydef e impostare la proprietà di connessione.

Per altre informazioni, vedere l'argomento "Proprietà di tipo" nella Guida di DAO.

*m_dateCreated*<br/>
Data e ora di che creazione di tale oggetto. Per recuperare direttamente la data di creazione querydef, chiamare il [GetDateCreated](../../mfc/reference/cdaotabledef-class.md#getdatecreated) funzione di membro del `CDaoTableDef` oggetto associato alla tabella. Per altre informazioni, vedere i commenti di seguito. Vedere anche l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.

*m_dateLastUpdated*<br/>
Data e ora dell'ultima modifica apportata all'oggetto querydef. Per recuperare direttamente la data dell'ultimo aggiornamento della tabella, chiamare il [GetDateLastUpdated](../../mfc/reference/cdaoquerydef-class.md#getdatelastupdated) funzione membro di tale oggetto. Per altre informazioni, vedere i commenti di seguito. E vedere l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.

*m_bUpdatable*<br/>
Indica se possono essere apportate modifiche a un oggetto querydef. Se questa proprietà è TRUE, tale oggetto può essere aggiornata; in caso contrario, non è. Aggiornabile, che definizione di query dell'oggetto querydef può essere modificata. La proprietà di un oggetto querydef aggiornabile è impostata su TRUE se la definizione della query può essere aggiornata, anche se il recordset risulta non è aggiornabile. Per recuperare direttamente questa proprietà, chiamare l'oggetto querydef [CanUpdate](../../mfc/reference/cdaoquerydef-class.md#canupdate) funzione membro. Per altre informazioni, vedere l'argomento "Proprietà aggiornabile" nella Guida di DAO.

*m_bReturnsRecords*<br/>
Indica se una query pass-through SQL a un database esterno restituisce i record. Se questa proprietà è TRUE, la query restituisce i record. Per recuperare direttamente questa proprietà, chiamare [CDaoQueryDef::GetReturnsRecords](../../mfc/reference/cdaoquerydef-class.md#getreturnsrecords). Non tutte le query pass-through a SQL per i database esterni di restituiscono i record. Ad esempio, un linguaggio SQL **UPDATE** istruzione aggiorna i record senza restituire alcun record, mentre un database SQL **seleziona** istruzione restituire i record. Per altre informazioni, vedere l'argomento "Restituisci proprietà" nella Guida di DAO.

*m_strSQL*<br/>
L'istruzione SQL che definisce la query eseguita da un oggetto querydef. La proprietà SQL contiene l'istruzione SQL che determina come i record sono selezionati, raggruppamento e ordinamento quando si esegue la query. È possibile usare la query per selezionare record da includere in un oggetto recordset dynaset - o -tipo di snapshot. È anche possibile definire le query di blocco per modificare i dati senza restituire alcun record. È possibile recuperare il valore di questa proprietà direttamente tramite la chiamata dell'oggetto querydef [GetSQL](../../mfc/reference/cdaoquerydef-class.md#getsql) funzione membro.

*m_strConnect*<br/>
Fornisce informazioni sull'origine di un database utilizzato in una query pass-through. Queste informazioni assumono la forma di una stringa di connessione. Per altre informazioni su stringhe di connessione e per informazioni sul recupero direttamente il valore di questa proprietà, vedere la [CDaoDatabase::GetConnect](../../mfc/reference/cdaodatabase-class.md#getconnect) funzione membro.

*m_nODBCTimeout*<br/>
Il numero di secondi di attesa motore di database Microsoft Jet prima di un errore di timeout si verifica quando viene eseguita una query su un database ODBC. Quando si usa un database ODBC, ad esempio Microsoft SQL Server, potrebbe esserci ritardi a causa di uso con intensa attività o il traffico di rete del server di ODBC. Invece di attendere in modo indefinito, è possibile specificare il tempo di attesa prima che produca un errore di gestione Microsoft Jet. Il valore di timeout predefinito è 60 secondi. È possibile recuperare il valore di questa proprietà direttamente tramite la chiamata dell'oggetto querydef [GetODBCTimeout](../../mfc/reference/cdaoquerydef-class.md#getodbctimeout) funzione membro. Per altre informazioni, vedere l'argomento "Proprietà ODBCTimeout" nella Guida di DAO.

## <a name="remarks"></a>Note

Tale oggetto è un oggetto della classe [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md). I riferimenti al database primario, secondario e tutti sopra indicano la modalità in cui vengono restituite le informazioni per il [funzione membro GetQueryDefInfo](../../mfc/reference/cdaodatabase-class.md#getquerydefinfo) funzione di membro nella classe `CDaoDatabase`.

Le informazioni recuperate dal [CDaoDatabase::GetQueryDefInfo](../../mfc/reference/cdaodatabase-class.md#getquerydefinfo) le funzioni membro vengono archiviate un `CDaoQueryDefInfo` struttura. Chiamare `GetQueryDefInfo` per l'oggetto di database in cui raccolta QueryDefs è archiviato l'oggetto querydef. `CDaoQueryDefInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile usare `Dump` per scaricare il contenuto di un `CDaoQueryDefInfo` oggetto. Classe `CDaoDatabase` fornisce anche le funzioni membro per accedere direttamente a tutte le proprietà restituite in un `CDaoQueryDefInfo` dell'oggetto, pertanto probabilmente raramente sarà necessario chiamare `GetQueryDefInfo`.

Quando si aggiunge un nuovo campo o un oggetto parameter alla raccolta campi o parametri di un oggetto querydef, viene generata un'eccezione se il database sottostante non supporta il tipo di dati specificato per il nuovo oggetto.

Le impostazioni di data e ora derivano dal computer in cui tale oggetto è stato creato o ultimo aggiornamento. In un ambiente multiutente, gli utenti devono ottenere queste impostazioni direttamente dal file server usando il **net ora** comando per evitare eventuali discrepanze nelle impostazioni di proprietà DateCreated e LastUpdated.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Classe CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md)<br/>
[Classe CDaoDatabase](../../mfc/reference/cdaodatabase-class.md)

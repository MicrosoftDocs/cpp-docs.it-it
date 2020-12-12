---
description: 'Altre informazioni su: struttura CDaoQueryDefInfo'
title: Struttura CDaoQueryDefInfo
ms.date: 11/04/2016
f1_keywords:
- CDaoQueryDefInfo
helpviewer_keywords:
- DAO (Data Access Objects), QueryDefs collection
- CDaoQueryDefInfo structure [MFC]
ms.assetid: e20837dc-e78d-4171-a195-1b4075fb5d2a
ms.openlocfilehash: 46b9b49d91d3d005d941eb585663c205fe30b2da
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97271811"
---
# <a name="cdaoquerydefinfo-structure"></a>Struttura CDaoQueryDefInfo

La `CDaoQueryDefInfo` struttura contiene informazioni su un oggetto QueryDef definito per DAO (Data Access Objects).

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
Assegna un nome univoco all'oggetto QueryDef. Per ulteriori informazioni, vedere l'argomento relativo alla proprietà Name nella Guida di DAO. Chiamare [CDaoQueryDef:: GetName](../../mfc/reference/cdaoquerydef-class.md#getname) per recuperare direttamente questa proprietà.

*m_nType*<br/>
Valore che indica il tipo operativo di un oggetto QueryDef. I possibili valori sono i seguenti:

- `dbQSelect` Select: la query seleziona i record.

- `dbQAction` Azione: la query sposta o modifica i dati, ma non restituisce i record.

- `dbQCrosstab` A campi incrociati: la query restituisce dati in un formato simile a un foglio di calcolo.

- `dbQDelete` Delete: la query elimina un set di righe specificate.

- `dbQUpdate` Aggiornamento: la query modifica un set di record.

- `dbQAppend` Accoda: la query aggiunge nuovi record alla fine di una tabella o di una query.

- `dbQMakeTable` Make-Table: la query crea una nuova tabella da un recordset.

- `dbQDDL` Data-Definition: la query influiscono sulla struttura delle tabelle o sulle relative parti.

- `dbQSQLPassThrough` Pass-through: l'istruzione SQL viene passata direttamente al back-end del database, senza elaborazione intermedia.

- `dbQSetOperation` Union: la query crea un oggetto recordset di tipo snapshot contenente i dati di tutti i record specificati in due o più tabelle con eventuali record duplicati rimossi. Per includere i duplicati, aggiungere la parola chiave **All** nell'istruzione SQL di querydef.

- `dbQSPTBulk` Utilizzato con `dbQSQLPassThrough` per specificare una query che non restituisce record.

> [!NOTE]
> Per creare una query pass-through SQL, non impostare la `dbQSQLPassThrough` costante. Questa impostazione viene impostata automaticamente dal motore di database di Microsoft Jet quando si crea un oggetto QueryDef e si imposta la proprietà Connect.

Per ulteriori informazioni, vedere l'argomento relativo alla proprietà Type nella Guida di DAO.

*m_dateCreated*<br/>
Data e ora di creazione dell'oggetto QueryDef. Per recuperare direttamente la data in cui è stato creato il querydef, chiamare la funzione membro [GetDateCreated](../../mfc/reference/cdaotabledef-class.md#getdatecreated) dell' `CDaoTableDef` oggetto associato alla tabella. Per ulteriori informazioni, vedere i commenti di seguito. Vedere anche l'argomento "DateCreated, proprietà LastUpdated" nella Guida di DAO.

*m_dateLastUpdated*<br/>
Data e ora dell'Ultima modifica apportata all'oggetto QueryDef. Per recuperare direttamente la data dell'ultimo aggiornamento della tabella, chiamare la funzione membro [GetDateLastUpdated](../../mfc/reference/cdaoquerydef-class.md#getdatelastupdated) dell'oggetto QueryDef. Per ulteriori informazioni, vedere i commenti di seguito. Vedere l'argomento "DateCreated, proprietà LastUpdated" nella Guida di DAO.

*m_bUpdatable*<br/>
Indica se è possibile apportare modifiche a un oggetto QueryDef. Se questa proprietà è TRUE, l'oggetto QueryDef è aggiornabile; in caso contrario, non lo è. Aggiornabile significa che la definizione della query dell'oggetto QueryDef può essere modificata. La proprietà aggiornabile di un oggetto QueryDef è impostata su TRUE se è possibile aggiornare la definizione della query, anche se il recordset risultante non è aggiornabile. Per recuperare direttamente questa proprietà, chiamare la funzione membro [CanUpdate](../../mfc/reference/cdaoquerydef-class.md#canupdate) di querydef. Per ulteriori informazioni, vedere l'argomento "proprietà aggiornabile" nella Guida di DAO.

*m_bReturnsRecords*<br/>
Indica se una query pass-through SQL a un database esterno restituisce record. Se questa proprietà è TRUE, la query restituisce i record. Per recuperare direttamente questa proprietà, chiamare [CDaoQueryDef:: GetReturnsRecords](../../mfc/reference/cdaoquerydef-class.md#getreturnsrecords). Non tutte le query pass-through SQL per i database esterni restituiscono record. Un'istruzione SQL **Update** , ad esempio, aggiorna i record senza restituire record, mentre un'istruzione SQL **SELECT** restituisce record. Per ulteriori informazioni, vedere l'argomento "proprietà ReturnsRecords" nella Guida di DAO.

*m_strSQL*<br/>
Istruzione SQL che definisce la query eseguita da un oggetto QueryDef. La proprietà SQL contiene l'istruzione SQL che determina la modalità di selezione, raggruppamento e ordinamento dei record quando si esegue la query. È possibile utilizzare la query per selezionare i record da includere in un oggetto recordset di tipo dynaset o snapshot. È inoltre possibile definire query bulk per modificare i dati senza restituire record. È possibile recuperare direttamente il valore di questa proprietà chiamando la funzione membro [GetSQL](../../mfc/reference/cdaoquerydef-class.md#getsql) di querydef.

*m_strConnect*<br/>
Fornisce informazioni sull'origine di un database utilizzato in una query pass-through. Queste informazioni assumono il formato di una stringa di connessione. Per ulteriori informazioni sulle stringhe di connessione e per informazioni sul recupero diretto del valore di questa proprietà, vedere la funzione membro [CDaoDatabase:: GetConnect](../../mfc/reference/cdaodatabase-class.md#getconnect) .

*m_nODBCTimeout*<br/>
Il numero di secondi di attesa del motore di database di Microsoft Jet prima che si verifichi un errore di timeout durante l'esecuzione di una query in un database ODBC. Quando si utilizza un database ODBC, ad esempio Microsoft SQL Server, è possibile che si verifichino ritardi a causa del traffico di rete o dell'utilizzo intensivo del server ODBC. Invece di attendere indefinitamente, è possibile specificare il tempo di attesa del motore Microsoft Jet prima che venga generato un errore. Il valore di timeout predefinito è 60 secondi. È possibile recuperare direttamente il valore di questa proprietà chiamando la funzione membro [GetODBCTimeout](../../mfc/reference/cdaoquerydef-class.md#getodbctimeout) di querydef. Per ulteriori informazioni, vedere l'argomento "proprietà ODBCTimeout" nella Guida di DAO.

## <a name="remarks"></a>Commenti

Il querydef è un oggetto della classe [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md). I riferimenti a primary, Secondary e all sopra indicati indicano il modo in cui le informazioni vengono restituite dalla funzione membro [GetQueryDefInfo](../../mfc/reference/cdaodatabase-class.md#getquerydefinfo) nella classe `CDaoDatabase` .

Le informazioni recuperate dalla funzione membro [CDaoDatabase:: GetQueryDefInfo](../../mfc/reference/cdaodatabase-class.md#getquerydefinfo) vengono archiviate in una `CDaoQueryDefInfo` struttura. Chiamare `GetQueryDefInfo` per l'oggetto di database nella cui raccolta QueryDefs è archiviato l'oggetto QueryDef. `CDaoQueryDefInfo` definisce inoltre una `Dump` funzione membro nelle compilazioni di debug. È possibile utilizzare `Dump` per eseguire il dump del contenuto di un `CDaoQueryDefInfo` oggetto. `CDaoDatabase`La classe fornisce anche funzioni membro per l'accesso diretto a tutte le proprietà restituite in un `CDaoQueryDefInfo` oggetto, quindi probabilmente raramente è necessario chiamare `GetQueryDefInfo` .

Quando si aggiunge un nuovo oggetto campo o parametro alla raccolta di campi o parametri di un oggetto QueryDef, viene generata un'eccezione se il database sottostante non supporta il tipo di dati specificato per il nuovo oggetto.

Le impostazioni di data e ora sono derivate dal computer in cui è stato creato o ultimo aggiornamento di querydef. In un ambiente multiutente, gli utenti devono ottenere queste impostazioni direttamente dalla file server usando il comando **net time** per evitare discrepanze nelle impostazioni delle proprietà DateCreated e LastUpdated.

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="see-also"></a>Vedi anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Classe CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md)<br/>
[CDaoDatabase (classe)](../../mfc/reference/cdaodatabase-class.md)

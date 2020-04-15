---
title: Struttura CDaoQueryDefInfo
ms.date: 11/04/2016
f1_keywords:
- CDaoQueryDefInfo
helpviewer_keywords:
- DAO (Data Access Objects), QueryDefs collection
- CDaoQueryDefInfo structure [MFC]
ms.assetid: e20837dc-e78d-4171-a195-1b4075fb5d2a
ms.openlocfilehash: e2f0325237a30989637821464c63a4d8b8000b1e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368942"
---
# <a name="cdaoquerydefinfo-structure"></a>Struttura CDaoQueryDefInfo

La `CDaoQueryDefInfo` struttura contiene informazioni su un oggetto querydef definito per gli oggetti DAO (Data Access Objects).

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
Assegna un nome univoco all'oggetto querydef. Per ulteriori informazioni, vedere l'argomento "Proprietà Name" nella Guida in linea di DAO. Chiamare [CDaoQueryDef::GetName](../../mfc/reference/cdaoquerydef-class.md#getname) per recuperare direttamente questa proprietà.

*m_nType*<br/>
Valore che indica il tipo operativo di un oggetto querydef. I possibili valori sono i seguenti:

- `dbQSelect`Seleziona: la query seleziona i record.

- `dbQAction`Azione: la query sposta o modifica i dati ma non restituisce i record.

- `dbQCrosstab`Tabella incrociata: la query restituisce i dati in un formato simile a un foglio di calcolo.

- `dbQDelete`Delete: la query elimina un set di righe specificate.

- `dbQUpdate`Aggiorna: la query modifica un set di record.

- `dbQAppend`Append: la query aggiunge nuovi record alla fine di una tabella o di una query.

- `dbQMakeTable`Crea-tabella: la query crea una nuova tabella da un recordset.

- `dbQDDL`Definizione dei dati: la query influisce sulla struttura delle tabelle o delle relative parti.

- `dbQSQLPassThrough`Pass-through: l'istruzione SQL viene passata direttamente al back-end del database, senza elaborazione intermedia.

- `dbQSetOperation`Unione: la query crea un oggetto recordset di tipo snapshot contenente i dati di tutti i record specificati in due o più tabelle con eventuali record duplicati rimossi. Per includere i duplicati, aggiungere la parola chiave **ALL** nell'istruzione SQL di querydef.

- `dbQSPTBulk`Utilizzato `dbQSQLPassThrough` con per specificare una query che non restituisce record.

> [!NOTE]
> Per creare una query pass-through SQL, `dbQSQLPassThrough` non impostare la costante. Viene impostato automaticamente dal modulo di gestione di database Microsoft Jet quando si crea un oggetto querydef e si imposta la proprietà Connect.

Per ulteriori informazioni, vedere l'argomento "Proprietà Type" nella Guida in linea di DAO.

*m_dateCreated*<br/>
Data e ora di creazione del querydef. Per recuperare direttamente la data di creazione del file querydef, chiamare la funzione membro [GetDateCreated](../../mfc/reference/cdaotabledef-class.md#getdatecreated) dell'oggetto `CDaoTableDef` associato alla tabella. Per ulteriori informazioni, vedere Commenti di seguito. Vedere anche l'argomento "Proprietà DateCreated, LastUpdated" nella Guida in linea di DAO.

*m_dateLastUpdated*<br/>
Data e ora della modifica più recente apportata al querydef. Per recuperare direttamente la data dell'ultimo aggiornamento della tabella, chiamare la funzione membro [GetDateLastUpdated](../../mfc/reference/cdaoquerydef-class.md#getdatelastupdated) del querydef. Per ulteriori informazioni, vedere Commenti di seguito. E vedere l'argomento "DateCreated, LastUpdated Properties" nella Guida in linea di DAO.

*m_bUpdatable*<br/>
Indica se è possibile apportare modifiche a un oggetto querydef. Se questa proprietà è TRUE, il querydef è aggiornabile; in caso contrario, non lo è. Aggiornabile significa che la definizione di query dell'oggetto querydef può essere modificata. La proprietà Updatable di un oggetto querydef è impostata su TRUE se la definizione della query può essere aggiornata, anche se il recordset risultante non è aggiornabile. Per recuperare direttamente questa proprietà, chiamare la funzione membro [CanUpdate](../../mfc/reference/cdaoquerydef-class.md#canupdate) di querydef. Per ulteriori informazioni, vedere l'argomento "Proprietà Aggiornabile" nella Guida in linea di DAO.

*m_bReturnsRecords*<br/>
Indica se una query pass-through SQL a un database esterno restituisce record. Se questa proprietà è TRUE, la query restituisce i record. Per recuperare direttamente questa proprietà, chiamare [CDaoQueryDef::GetReturnsRecords](../../mfc/reference/cdaoquerydef-class.md#getreturnsrecords). Non tutte le query pass-through SQL a database esterni restituiscono record. Ad esempio, un'istruzione SQL **UPDATE** aggiorna i record senza restituire record, mentre un'istruzione SQL **SELECT** restituisce i record. Per ulteriori informazioni, vedere l'argomento "Proprietà ReturnsRecords" nella Guida in linea di DAO.

*m_strSQL*<br/>
Istruzione SQL che definisce la query eseguita da un oggetto querydef. La proprietà SQL contiene l'istruzione SQL che determina la modalità di selezione, raggruppamento e ordine dei record quando si esegue la query. È possibile utilizzare la query per selezionare i record da includere in un oggetto recordset di tipo dynaset o snapshot. È inoltre possibile definire query bulk per modificare i dati senza restituire record. È possibile recuperare direttamente il valore di questa proprietà chiamando la funzione membro [GetSQL](../../mfc/reference/cdaoquerydef-class.md#getsql) di querydef.

*m_strConnect*<br/>
Fornisce informazioni sull'origine di un database utilizzato in una query pass-through. Queste informazioni assume la forma di una stringa di connessione. Per ulteriori informazioni sulle stringhe di connessione e per informazioni sul recupero diretto del valore di questa proprietà, vedere la funzione membro [CDaoDatabase::GetConnect.](../../mfc/reference/cdaodatabase-class.md#getconnect)

*m_nODBCTimeout*<br/>
Numero di secondi di attesa del modulo di gestione di database Microsoft Jet prima che si verifichi un errore di timeout durante l'esecuzione di una query in un database ODBC. Quando si utilizza un database ODBC, ad esempio Microsoft SQL Server, potrebbero verificarsi ritardi a causa del traffico di rete o dell'utilizzo intensivo del server ODBC. Anziché attendere a tempo indeterminato, è possibile specificare il tempo di attesa del modulo di gestione Microsoft Jet prima che venga generato un errore. Il valore di timeout predefinito è 60 secondi. È possibile recuperare direttamente il valore di questa proprietà chiamando la funzione membro [GetODBCTimeout](../../mfc/reference/cdaoquerydef-class.md#getodbctimeout) di querydef. Per ulteriori informazioni, vedere l'argomento "Proprietà ODBCTimeout" nella Guida in linea di DAO.

## <a name="remarks"></a>Osservazioni

il querydef è un oggetto della classe [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md). I riferimenti a Primary, Secondary e All sopra indicano come le informazioni vengono `CDaoDatabase`restituite dalla funzione membro [GetQueryDefInfo](../../mfc/reference/cdaodatabase-class.md#getquerydefinfo) nella classe .

Le informazioni recuperate dalla funzione membro [CDaoDatabase::GetQueryDefInfo](../../mfc/reference/cdaodatabase-class.md#getquerydefinfo) vengono archiviate in una `CDaoQueryDefInfo` struttura. Chiamare `GetQueryDefInfo` per l'oggetto di database nella cui raccolta QueryDefs è archiviato l'oggetto querydef. `CDaoQueryDefInfo`definisce anche `Dump` una funzione membro nelle build di debug. È possibile `Dump` utilizzare per eseguire `CDaoQueryDefInfo` il dump del contenuto di un oggetto. La `CDaoDatabase` classe fornisce anche funzioni membro per accedere direttamente `CDaoQueryDefInfo` a tutte le proprietà restituite in `GetQueryDefInfo`un oggetto, pertanto sarà probabilmente raramente necessario chiamare .

Quando si aggiunge un nuovo campo o oggetto parametro all'insieme Fields o Parameters di un oggetto querydef, viene generata un'eccezione se il database sottostante non supporta il tipo di dati specificato per il nuovo oggetto.

Le impostazioni di data e ora derivano dal computer in cui è stato creato o aggiornato per ultimo il querydef. In un ambiente multiutente, gli utenti devono ottenere queste impostazioni direttamente dal file server utilizzando il comando **net time** per evitare discrepanze nelle impostazioni delle proprietà DateCreated e LastUpdated.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Classe CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md)<br/>
[Classe CDaoDatabase](../../mfc/reference/cdaodatabase-class.md)

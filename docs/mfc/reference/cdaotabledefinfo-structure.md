---
title: Struttura CDaoTableDefInfo
ms.date: 11/04/2016
f1_keywords:
- CDaoTableDefInfo
helpviewer_keywords:
- CDaoTableDefInfo structure [MFC]
- DAO (Data Access Objects), TableDefs collection
ms.assetid: c01ccebb-5615-434e-883c-4f60eac943dd
ms.openlocfilehash: 10ff07ebcd9c6877d9bafc0b7c8724acb0bc45b9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50542974"
---
# <a name="cdaotabledefinfo-structure"></a>Struttura CDaoTableDefInfo

Il `CDaoTableDefInfo` struttura contiene informazioni su un oggetto tabledef definito per data access Object (DAO).

## <a name="syntax"></a>Sintassi

```
struct CDaoTableDefInfo
{
    CString m_strName;               // Primary
    BOOL m_bUpdatable;               // Primary
    long m_lAttributes;              // Primary
    COleDateTime m_dateCreated;      // Secondary
    COleDateTime m_dateLastUpdated;  // Secondary
    CString m_strSrcTableName;       // Secondary
    CString m_strConnect;            // Secondary
    CString m_strValidationRule;     // All
    CString m_strValidationText;     // All
    long m_lRecordCount;             // All
};
```

#### <a name="parameters"></a>Parametri

*m_strName*<br/>
Identifica in modo univoco l'oggetto tabledef. Per recuperare direttamente il valore di questa proprietà, chiamare la funzione membro [GetName](../../mfc/reference/cdaotabledef-class.md#getname) funzione membro. Per altre informazioni, vedere l'argomento "Proprietà di nome" nella Guida di DAO.

*m_bUpdatable*<br/>
Indica se possono essere apportate modifiche alla tabella. Il metodo più veloce per determinare se una tabella è aggiornabile consiste nell'aprire una `CDaoTableDef` dell'oggetto per la tabella e chiamare l'oggetto [CanUpdate](../../mfc/reference/cdaotabledef-class.md#canupdate) funzione membro. `CanUpdate` Restituisce sempre diverso da zero (TRUE) per un oggetto tabledef appena creato e 0 (FALSE) per un oggetto tabledef collegati. Un nuovo oggetto tabledef può essere aggiunto solo a un database per cui l'utente corrente dispone dell'autorizzazione di scrittura. Se la tabella contiene solo i campi non aggiornabile, `CanUpdate` restituisce 0. Quando uno o più campi sono aggiornabili, `CanUpdate` restituisce diverso da zero. È possibile modificare solo i campi aggiornabili. Per altre informazioni, vedere l'argomento "Proprietà aggiornabile" nella Guida di DAO.

*m_lAttributes*<br/>
Specifica le caratteristiche della tabella rappresentata dall'oggetto tabledef. Per recuperare gli attributi di un oggetto tabledef correnti, chiamare relativi [GetAttributes](../../mfc/reference/cdaotabledef-class.md#getattributes) funzione membro. Il valore restituito può essere una combinazione di queste costanti di tipo long (con OR bit per bit (**&#124;**) operator):

- `dbAttachExclusive` Per i database che utilizzano il motore di database Microsoft Jet, indica che la tabella è una tabella collegata aperta per l'uso esclusivo.

- `dbAttachSavePWD` Per i database che utilizzano il motore di database Microsoft Jet, indica che l'ID utente e password per la tabella collegata vengono salvate con le informazioni di connessione.

- `dbSystemObject` Indica che la tabella è una tabella di sistema fornita dal motore di database Microsoft Jet. (sola lettura).

- `dbHiddenObject` Indica che la tabella è una tabella nascosta fornita dal motore di database Microsoft Jet (per un utilizzo temporaneo). (sola lettura).

- `dbAttachedTable` Indica che la tabella è una tabella collegata da un database di non ODBC, ad esempio un database Paradox.

- `dbAttachedODBC` Indica che la tabella è una tabella collegata da un database ODBC, ad esempio Microsoft SQL Server.

*m_dateCreated*<br/>
Data e ora di che creazione della tabella. Per recuperare direttamente la data di creazione della tabella, chiamare il [GetDateCreated](../../mfc/reference/cdaotabledef-class.md#getdatecreated) funzione di membro del `CDaoTableDef` oggetto associato alla tabella. Per altre informazioni, vedere i commenti di seguito. Per informazioni correlate, vedere l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.

*m_dateLastUpdated*<br/>
Data e ora dell'ultima modifica apportata alla progettazione della tabella. Per recuperare direttamente la data dell'ultimo aggiornamento della tabella, chiamare il [GetDateLastUpdated](../../mfc/reference/cdaotabledef-class.md#getdatelastupdated) funzione di membro del `CDaoTableDef` oggetto associato alla tabella. Per altre informazioni, vedere i commenti di seguito. Per informazioni correlate, vedere l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.

*m_strSrcTableName*<br/>
Specifica il nome di una tabella collegata, se presente. Per recuperare direttamente il nome di tabella di origine, chiamare il [GetSourceTableName](../../mfc/reference/cdaotabledef-class.md#getsourcetablename) funzione di membro del `CDaoTableDef` oggetto associato alla tabella.

*m_strConnect*<br/>
Fornisce informazioni sull'origine di un database aperto. È possibile controllare questa proprietà chiamando i [GetConnect](../../mfc/reference/cdaotabledef-class.md#getconnect) funzione membro del `CDaoTableDef` oggetto. Per altre informazioni sulle stringhe di connessione, vedere `GetConnect`.

*m_strValidationRule*<br/>
Un valore che convalida i dati nei campi tabledef man mano che vengono modificate o aggiunte a una tabella. La convalida è supportata solo per i database che utilizzano il motore di database Microsoft Jet. Per recuperare direttamente la regola di convalida, chiamare il [GetValidationRule](../../mfc/reference/cdaotabledef-class.md#getvalidationrule) funzione di membro del `CDaoTableDef` oggetto associato alla tabella. Per informazioni correlate, vedere l'argomento "Proprietà ValidationRule" nella Guida di DAO.

*m_strValidationText*<br/>
Un valore che specifica il testo del messaggio che l'applicazione deve essere visualizzato se la regola di convalida specificata dalla proprietà valido se non viene soddisfatta. Per informazioni correlate, vedere l'argomento "Proprietà messaggio di errore" nella Guida di DAO.

*m_lRecordCount*<br/>
Il numero di record è possibile accedere in un oggetto tabledef. Impostazione di questa proprietà è di sola lettura. Per recuperare direttamente il functoid Conteggio record, chiamare il [GetRecordCount](../../mfc/reference/cdaotabledef-class.md#getrecordcount) funzione di membro del `CDaoTableDef` oggetto. La documentazione relativa a `GetRecordCount` descrive ulteriormente il numero di record. Si noti che il recupero di questo conteggio può essere un'operazione richiede molto tempo se la tabella contiene i numero di record.

## <a name="remarks"></a>Note

Tabledef è un oggetto della classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md). I riferimenti al database primario, secondario e tutti sopra indicano la modalità in cui vengono restituite le informazioni per il [GetTableDefInfo](../../mfc/reference/cdaodatabase-class.md#gettabledefinfo) funzione di membro nella classe `CDaoDatabase`.

Le informazioni recuperate dal [CDaoDatabase:: GetTableDefInfo](../../mfc/reference/cdaodatabase-class.md#gettabledefinfo) le funzioni membro vengono archiviate un `CDaoTableDefInfo` struttura. Chiamare il `GetTableDefInfo` funzione membro del `CDaoDatabase` oggetto la cui raccolta TableDefs è archiviato l'oggetto tabledef. `CDaoTableDefInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile usare `Dump` per scaricare il contenuto di un `CDaoTableDefInfo` oggetto.

Le impostazioni di data e ora derivano dal computer in cui è stata creata o dell'ultimo aggiornamento della tabella di base. In un ambiente multiutente, gli utenti devono ottenere queste impostazioni direttamente dal file server per evitare eventuali discrepanze DateCreated e le impostazioni delle proprietà di LastUpdated.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)<br/>
[Classe CDaoDatabase](../../mfc/reference/cdaodatabase-class.md)

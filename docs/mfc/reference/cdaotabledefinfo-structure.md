---
description: 'Altre informazioni su: Struttura CDaoTableDefInfo'
title: Struttura CDaoTableDefInfo
ms.date: 11/04/2016
f1_keywords:
- CDaoTableDefInfo
helpviewer_keywords:
- CDaoTableDefInfo structure [MFC]
- DAO (Data Access Objects), TableDefs collection
ms.assetid: c01ccebb-5615-434e-883c-4f60eac943dd
ms.openlocfilehash: 953a255b35860dcce0ac8d3ef5081951dd15c344
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247969"
---
# <a name="cdaotabledefinfo-structure"></a>Struttura CDaoTableDefInfo

La `CDaoTableDefInfo` struttura contiene informazioni su un oggetto TableDef definito per DAO (Data Access Objects).

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
Assegna un nome univoco all'oggetto TableDef. Per recuperare direttamente il valore di questa proprietà, chiamare la funzione membro [GetName](../../mfc/reference/cdaotabledef-class.md#getname) dell'oggetto TableDef. Per ulteriori informazioni, vedere l'argomento relativo alla proprietà Name nella Guida di DAO.

*m_bUpdatable*<br/>
Indica se è possibile apportare modifiche alla tabella. Il modo rapido per determinare se una tabella è aggiornabile consiste nell'aprire un `CDaoTableDef` oggetto per la tabella e chiamare la funzione membro [CanUpdate](../../mfc/reference/cdaotabledef-class.md#canupdate) dell'oggetto. `CanUpdate` restituisce sempre un valore diverso da zero (TRUE) per un oggetto TableDef appena creato e 0 (FALSE) per un oggetto TableDef associato. Un nuovo oggetto TableDef può essere aggiunto solo a un database per il quale l'utente corrente dispone dell'autorizzazione di scrittura. Se la tabella contiene solo campi non aggiornabili, `CanUpdate` restituisce 0. Quando uno o più campi sono aggiornabili, `CanUpdate` restituisce un valore diverso da zero. È possibile modificare solo i campi aggiornabili. Per ulteriori informazioni, vedere l'argomento "proprietà aggiornabile" nella Guida di DAO.

*m_lAttributes*<br/>
Specifica le caratteristiche della tabella rappresentata dall'oggetto TableDef. Per recuperare gli attributi correnti di un oggetto TableDef, chiamare la relativa funzione membro [GetAttributes](../../mfc/reference/cdaotabledef-class.md#getattributes) . Il valore restituito può essere una combinazione di queste costanti lunghe (usando l'operatore OR bit per bit (**&#124;**)):

- `dbAttachExclusive` Per i database che usano il motore di database di Microsoft Jet, indica che la tabella è una tabella collegata aperta per l'uso esclusivo.

- `dbAttachSavePWD` Per i database che utilizzano il motore di database di Microsoft Jet, indica che l'ID utente e la password per la tabella collegata vengono salvati con le informazioni di connessione.

- `dbSystemObject` Indica che la tabella è una tabella di sistema fornita dal motore di database di Microsoft Jet. (sola lettura).

- `dbHiddenObject` Indica che la tabella è una tabella nascosta fornita dal motore di database di Microsoft Jet (per l'uso temporaneo). (sola lettura).

- `dbAttachedTable` Indica che la tabella è una tabella collegata da un database non ODBC, ad esempio un database Paradox.

- `dbAttachedODBC` Indica che la tabella è una tabella collegata da un database ODBC, ad esempio Microsoft SQL Server.

*m_dateCreated*<br/>
Data e ora di creazione della tabella. Per recuperare direttamente la data di creazione della tabella, chiamare la funzione membro [GetDateCreated](../../mfc/reference/cdaotabledef-class.md#getdatecreated) dell' `CDaoTableDef` oggetto associato alla tabella. Per ulteriori informazioni, vedere i commenti di seguito. Per informazioni correlate, vedere l'argomento "DateCreated, proprietà LastUpdated" nella Guida di DAO.

*m_dateLastUpdated*<br/>
Data e ora dell'Ultima modifica apportata alla progettazione della tabella. Per recuperare direttamente la data dell'ultimo aggiornamento della tabella, chiamare la funzione membro [GetDateLastUpdated](../../mfc/reference/cdaotabledef-class.md#getdatelastupdated) dell' `CDaoTableDef` oggetto associato alla tabella. Per ulteriori informazioni, vedere i commenti di seguito. Per informazioni correlate, vedere l'argomento "DateCreated, proprietà LastUpdated" nella Guida di DAO.

*m_strSrcTableName*<br/>
Specifica il nome di una tabella collegata, se presente. Per recuperare direttamente il nome della tabella di origine, chiamare la funzione membro [GetSourceTableName](../../mfc/reference/cdaotabledef-class.md#getsourcetablename) dell' `CDaoTableDef` oggetto associato alla tabella.

*m_strConnect*<br/>
Fornisce informazioni sull'origine di un database aperto. È possibile controllare questa proprietà chiamando la funzione membro [GetConnect](../../mfc/reference/cdaotabledef-class.md#getconnect) dell' `CDaoTableDef` oggetto. Per ulteriori informazioni sulle stringhe di connessione, vedere `GetConnect` .

*m_strValidationRule*<br/>
Valore che convalida i dati nei campi di TableDef Man mano che vengono modificati o aggiunti a una tabella. La convalida è supportata solo per i database che utilizzano il motore di database di Microsoft Jet. Per recuperare direttamente la regola di convalida, chiamare la funzione membro [GetValidationRule](../../mfc/reference/cdaotabledef-class.md#getvalidationrule) dell' `CDaoTableDef` oggetto associato alla tabella. Per informazioni correlate, vedere l'argomento "Proprietà ValidationRule" nella Guida di DAO.

*m_strValidationText*<br/>
Valore che specifica il testo del messaggio che l'applicazione deve visualizzare se la regola di convalida specificata dalla proprietà ValidationRule non viene soddisfatta. Per informazioni correlate, vedere l'argomento "proprietà ValidationText" nella Guida di DAO.

*m_lRecordCount*<br/>
Numero di record a cui si accede in un oggetto TableDef. Questa impostazione di proprietà è di sola lettura. Per recuperare direttamente il numero di record, chiamare la funzione membro [GetRecordCount](../../mfc/reference/cdaotabledef-class.md#getrecordcount) dell' `CDaoTableDef` oggetto. La documentazione per `GetRecordCount` descrive ulteriormente il numero di record. Si noti che il recupero di questo conteggio può richiedere molto tempo se la tabella contiene molti record.

## <a name="remarks"></a>Commenti

Il TableDef è un oggetto della classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md). I riferimenti a primary, Secondary e all sopra indicati indicano il modo in cui le informazioni vengono restituite dalla funzione membro [GetTableDefInfo](../../mfc/reference/cdaodatabase-class.md#gettabledefinfo) nella classe `CDaoDatabase` .

Le informazioni recuperate dalla funzione membro [CDaoDatabase:: GetTableDefInfo](../../mfc/reference/cdaodatabase-class.md#gettabledefinfo) vengono archiviate in una `CDaoTableDefInfo` struttura. Chiamare la `GetTableDefInfo` funzione membro dell' `CDaoDatabase` oggetto nella cui raccolta di TableDef è archiviato l'oggetto TableDef. `CDaoTableDefInfo` definisce inoltre una `Dump` funzione membro nelle compilazioni di debug. È possibile utilizzare `Dump` per eseguire il dump del contenuto di un `CDaoTableDefInfo` oggetto.

Le impostazioni di data e ora derivano dal computer in cui è stata creata o aggiornata l'ultimo aggiornamento della tabella di base. In un ambiente multiutente, gli utenti devono ottenere queste impostazioni direttamente dalla file server per evitare discrepanze nelle impostazioni delle proprietà DateCreated e LastUpdated.

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="see-also"></a>Vedi anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)<br/>
[CDaoDatabase (classe)](../../mfc/reference/cdaodatabase-class.md)

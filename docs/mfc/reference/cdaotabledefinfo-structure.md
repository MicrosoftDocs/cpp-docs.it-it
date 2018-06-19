---
title: Struttura CDaoTableDefInfo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDaoTableDefInfo
dev_langs:
- C++
helpviewer_keywords:
- CDaoTableDefInfo structure [MFC]
- DAO (Data Access Objects), TableDefs collection
ms.assetid: c01ccebb-5615-434e-883c-4f60eac943dd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 53e20ca3f483bd9c00b298c69a526d8f5dd31cdb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33367734"
---
# <a name="cdaotabledefinfo-structure"></a>Struttura CDaoTableDefInfo
Il `CDaoTableDefInfo` struttura contiene informazioni su un oggetto tabledef definito per l'accesso oggetti DAO (data).  
  
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
 `m_strName`  
 Identifica in modo univoco l'oggetto tabledef. Per recuperare direttamente il valore di questa proprietà, chiamare la funzione membro [GetName](../../mfc/reference/cdaotabledef-class.md#getname) funzione membro. Per ulteriori informazioni, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
 `m_bUpdatable`  
 Indica se possono essere apportate modifiche alla tabella. Il metodo più veloce per determinare se una tabella è aggiornabile è aprire un `CDaoTableDef` per la tabella e chiamare l'oggetto [CanUpdate](../../mfc/reference/cdaotabledef-class.md#canupdate) funzione membro. `CanUpdate` Restituisce sempre diverso da zero (**TRUE**) per un oggetto tabledef appena creato e 0 (**FALSE**) per un oggetto tabledef associata. Un nuovo oggetto tabledef può essere aggiunto solo a un database per cui l'utente corrente dispone dell'autorizzazione di scrittura. Se la tabella contiene solo i campi non aggiornabile, `CanUpdate` restituisce 0. Quando uno o più campi sono aggiornabili, `CanUpdate` restituisce diverso da zero. È possibile modificare solo i campi aggiornabili. Per ulteriori informazioni, vedere l'argomento "Proprietà aggiornabile" nella Guida di DAO.  
  
 `m_lAttributes`  
 Specifica le caratteristiche della tabella rappresentata dall'oggetto tabledef. Per recuperare gli attributi di un oggetto tabledef correnti, chiamare il relativo [GetAttributes](../../mfc/reference/cdaotabledef-class.md#getattributes) funzione membro. Il valore restituito può essere una combinazione di queste costanti lungo (tramite l'OR (**&#124;**) (operatore)):  
  
- **dbAttachExclusive** per i database che utilizzano il motore di database Microsoft Jet, indica la tabella è una tabella collegata aperta per l'uso esclusivo.  
  
- **dbAttachSavePWD** per i database che utilizzano il motore di database Microsoft Jet, indica che l'ID utente e password per la tabella collegata vengono salvati con le informazioni di connessione.  
  
- **dbSystemObject** indica la tabella è una tabella di sistema fornita dal motore di database Microsoft Jet. (sola lettura).  
  
- **dbHiddenObject** indica la tabella è una tabella nascosta fornita dal motore di database Microsoft Jet (per l'utilizzo temporaneo). (sola lettura).  
  
- **dbAttachedTable** indica la tabella è una tabella collegata da un database non ODBC, ad esempio un database Paradox.  
  
- **dbAttachedODBC** indica la tabella è una tabella collegata da un database ODBC, ad esempio Microsoft SQL Server.  
  
 `m_dateCreated`  
 Data e ora di che creazione della tabella. Per recuperare direttamente la data di creazione della tabella, chiamare il [GetDateCreated](../../mfc/reference/cdaotabledef-class.md#getdatecreated) funzione membro del `CDaoTableDef` oggetto associato alla tabella. Per ulteriori informazioni, vedere i commenti di seguito. Per informazioni correlate, vedere l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.  
  
 `m_dateLastUpdated`  
 La data e l'ora della modifica più recente apportata alla struttura della tabella. Per recuperare direttamente la data dell'ultimo aggiornamento della tabella, chiamare il [GetDateLastUpdated](../../mfc/reference/cdaotabledef-class.md#getdatelastupdated) funzione membro del `CDaoTableDef` oggetto associato alla tabella. Per ulteriori informazioni, vedere i commenti di seguito. Per informazioni correlate, vedere l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.  
  
 *m_strSrcTableName*  
 Specifica il nome di una tabella collegata, se presente. Per recuperare direttamente il nome di tabella di origine, chiamare il [GetSourceTableName](../../mfc/reference/cdaotabledef-class.md#getsourcetablename) funzione membro del `CDaoTableDef` oggetto associato alla tabella.  
  
 `m_strConnect`  
 Vengono fornite informazioni sull'origine di un database aperto. È possibile controllare questa proprietà tramite la chiamata di [GetConnect](../../mfc/reference/cdaotabledef-class.md#getconnect) funzione membro del `CDaoTableDef` oggetto. Per ulteriori informazioni sulle stringhe di connessione, vedere `GetConnect`.  
  
 `m_strValidationRule`  
 Un valore che convalida i dati nei campi tabledef man mano che vengono modificate o aggiunte a una tabella. La convalida è supportata solo per i database che utilizzano il motore di database Microsoft Jet. Per recuperare direttamente la regola di convalida, chiamare il [GetValidationRule](../../mfc/reference/cdaotabledef-class.md#getvalidationrule) funzione membro del `CDaoTableDef` oggetto associato alla tabella. Per informazioni correlate, vedere l'argomento "Proprietà ValidationRule" nella Guida di DAO.  
  
 `m_strValidationText`  
 Un valore che specifica il testo del messaggio che l'applicazione deve essere visualizzato se la regola di convalida specificata dalla proprietà valido se non viene soddisfatta. Per informazioni correlate, vedere l'argomento "Proprietà di messaggio di errore" nella Guida di DAO.  
  
 *m_lRecordCount*  
 Il numero di record è possibile accedere in un oggetto tabledef. Impostazione di questa proprietà è di sola lettura. Per recuperare direttamente il numero di record, chiamare il [GetRecordCount](../../mfc/reference/cdaotabledef-class.md#getrecordcount) funzione membro di `CDaoTableDef` oggetto. La documentazione relativa a `GetRecordCount` descrive ulteriormente il numero di record. Si noti che il recupero di questo conteggio può essere un'operazione richiede molto tempo se la tabella contiene molti record.  
  
## <a name="remarks"></a>Note  
 Tabledef è un oggetto della classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md). I riferimenti al database primario, secondario e tutti sopra indicano la modalità in cui vengono restituite le informazioni per il [GetTableDefInfo](../../mfc/reference/cdaodatabase-class.md#gettabledefinfo) funzione membro nella classe `CDaoDatabase`.  
  
 Le informazioni recuperate dal [CDaoDatabase:: GetTableDefInfo](../../mfc/reference/cdaodatabase-class.md#gettabledefinfo) le funzioni membro vengono archiviate un `CDaoTableDefInfo` struttura. Chiamare il `GetTableDefInfo` funzione membro di `CDaoDatabase` oggetto la cui raccolta TableDefs è archiviato l'oggetto tabledef. `CDaoTableDefInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoTableDefInfo` oggetto.  
  
 Le impostazioni di data e ora derivano dal computer in cui è stata creata o dell'ultimo aggiornamento della tabella di base. In un ambiente multiutente, gli utenti devono ottenere tali impostazioni direttamente dal file server per evitare eventuali discrepanze DateCreated e LastUpdated le impostazioni delle proprietà.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)   
 [Classe CDaoDatabase](../../mfc/reference/cdaodatabase-class.md)

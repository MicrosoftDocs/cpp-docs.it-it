---
title: "CDaoRecordset Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDaoRecordset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CdaoRecordset (classe)"
  - "record, CDaoRecordSet"
  - "recordset, tipi"
ms.assetid: 2322067f-1027-4662-a5d7-aa2fc7488630
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 27
---
# CDaoRecordset Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un insieme di record selezionato da un'origine dati.  
  
## Sintassi  
  
```  
  
class CDaoRecordset : public CObject  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoRecordset::CDaoRecordset](../Topic/CDaoRecordset::CDaoRecordset.md)|Costruisce un oggetto `CDaoRecordset`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoRecordset::AddNew](../Topic/CDaoRecordset::AddNew.md)|Prepara per l'aggiunta di un nuovo record.  Chiamata [Aggiorna](../Topic/CDaoRecordset::Update.md) per completare l'aggiunta.|  
|[CDaoRecordset::CanAppend](../Topic/CDaoRecordset::CanAppend.md)|Restituisce diverso da zero se i nuovi record possono essere aggiunti al recordset mediante la funzione membro [AddNew](../Topic/CDaoRecordset::AddNew.md).|  
|[CDaoRecordset::CanBookmark](../Topic/CDaoRecordset::CanBookmark.md)|Restituisce diverso da zero se il recordset supporta i segnalibri.|  
|[CDaoRecordset::CancelUpdate](../Topic/CDaoRecordset::CancelUpdate.md)|Annulla tutti gli aggiornamenti in corso a causa di un'operazione [AddNew](../Topic/CDaoRecordset::AddNew.md) o [Modifica](../Topic/CDaoRecordset::Edit.md).|  
|[CDaoRecordset::CanRestart](../Topic/CDaoRecordset::CanRestart.md)|Restituisce diverso da zero se [Ripetere una query](../Topic/CDaoRecordset::Requery.md) può essere chiamato per eseguire nuovamente la query del recordset.|  
|[CDaoRecordset::CanScroll](../Topic/CDaoRecordset::CanScroll.md)|Restituisce diverso da zero se è possibile scorrere i record.|  
|[CDaoRecordset::CanTransact](../Topic/CDaoRecordset::CanTransact.md)|Restituisce diverso da zero se l'origine dati supporta le transazioni.|  
|[CDaoRecordset::CanUpdate](../Topic/CDaoRecordset::CanUpdate.md)|Restituisce diverso da zero se il recordset è possibile aggiornare \(è possibile aggiungere, aggiornare, o eliminare record\).|  
|[CDaoRecordset::Close](../Topic/CDaoRecordset::Close.md)|Chiude il recordset.|  
|[CDaoRecordset::Delete](../Topic/CDaoRecordset::Delete.md)|Elimina il record corrente dal recordset.  Impostare in modo esplicito passare a un altro record dopo l'eliminazione.|  
|[CDaoRecordset::DoFieldExchange](../Topic/CDaoRecordset::DoFieldExchange.md)|Chiamato per scambiare dati in entrambe le direzioni\) tra i membri dati di campo del recordset e il record corrispondente nell'origine dati.  Trasferimento di campi di record DAO di risorse \(DFX\).|  
|[CDaoRecordset::Edit](../Topic/CDaoRecordset::Edit.md)|Prepara per le modifiche al record corrente.  Chiamata **Aggiorna** per completare la modifica.|  
|[CDaoRecordset::FillCache](../Topic/CDaoRecordset::FillCache.md)|Il controllo occupa tutto o parte cache locale per un oggetto recordset contenente i dati da un'origine dati ODBC.|  
|[CDaoRecordset::Find](../Topic/CDaoRecordset::Find.md)|Individuare la prima, il percorso seguente, precedente, oppure l'ultima di una particolare stringa in un recordset di tipo dynaset che soddisfa i criteri specificati e fatto che registra il record corrente.|  
|[CDaoRecordset::FindFirst](../Topic/CDaoRecordset::FindFirst.md)|Individuare il primo record in un recordset di tipo dynaset o di tipo snapshot che soddisfa i criteri specificati e fatto che registra il record corrente.|  
|[CDaoRecordset::FindLast](../Topic/CDaoRecordset::FindLast.md)|Individuare l'ultimo record in un recordset di tipo dynaset o di tipo snapshot che soddisfa i criteri specificati e fatto che registra il record corrente.|  
|[CDaoRecordset::FindNext](../Topic/CDaoRecordset::FindNext.md)|Individuare il record successivo in un recordset di tipo dynaset o di tipo snapshot che soddisfa i criteri specificati e fatto che registra il record corrente.|  
|[CDaoRecordset::FindPrev](../Topic/CDaoRecordset::FindPrev.md)|Individuare il record precedente in un recordset di tipo dynaset o di tipo snapshot che soddisfa i criteri specificati e fatto che registra il record corrente.|  
|[CDaoRecordset::GetAbsolutePosition](../Topic/CDaoRecordset::GetAbsolutePosition.md)|Restituisce il numero di record del record corrente di un oggetto recordset.|  
|[CDaoRecordset::GetBookmark](../Topic/CDaoRecordset::GetBookmark.md)|Restituisce un valore che rappresenta il segnalibro su un record.|  
|[CDaoRecordset::GetCacheSize](../Topic/CDaoRecordset::GetCacheSize.md)|Restituisce un valore che specifica il numero di record in un recordset di tipo dynaset contenente i dati in locale da memorizzare nella cache da un'origine dati ODBC.|  
|[CDaoRecordset::GetCacheStart](../Topic/CDaoRecordset::GetCacheStart.md)|Restituisce un valore che specifica il segnalibro del primo record del recordset da memorizzare nella cache.|  
|[CDaoRecordset::GetCurrentIndex](../Topic/CDaoRecordset::GetCurrentIndex.md)|Restituisce `CString` contenente il nome dell'indice utilizzato più di recente in `CDaoRecordset`indicizzato e di tipo tabella.|  
|[CDaoRecordset::GetDateCreated](../Topic/CDaoRecordset::GetDateCreated.md)|Restituisce la data e l'ora nella tabella di base sottostante a un oggetto `CDaoRecordset` è stata creata|  
|[CDaoRecordset::GetDateLastUpdated](../Topic/CDaoRecordset::GetDateLastUpdated.md)|Restituisce la data e ora di modifica più recente effettuata alla progettazione di una tabella di base sottostante a un oggetto `CDaoRecordset`.|  
|[CDaoRecordset::GetDefaultDBName](../Topic/CDaoRecordset::GetDefaultDBName.md)|Restituisce il nome dell'origine dati predefiniti.|  
|[CDaoRecordset::GetDefaultSQL](../Topic/CDaoRecordset::GetDefaultSQL.md)|Chiamato per ottenere la stringa SQL predefinita a eseguire.|  
|[CDaoRecordset::GetEditMode](../Topic/CDaoRecordset::GetEditMode.md)|Restituisce un valore che indica lo stato della modifica del record corrente.|  
|[CDaoRecordset::GetFieldCount](../Topic/CDaoRecordset::GetFieldCount.md)|Restituisce un valore che rappresenta il numero di campi in un recordset.|  
|[CDaoRecordset::GetFieldInfo](../Topic/CDaoRecordset::GetFieldInfo.md)|Restituisce tipi specifici di informazioni sui campi del recordset.|  
|[CDaoRecordset::GetFieldValue](../Topic/CDaoRecordset::GetFieldValue.md)|Restituisce il valore di un campo di un recordset.|  
|[CDaoRecordset::GetIndexCount](../Topic/CDaoRecordset::GetIndexCount.md)|Recupera il numero di indici in una tabella sottostante a un recordset.|  
|[CDaoRecordset::GetIndexInfo](../Topic/CDaoRecordset::GetIndexInfo.md)|Restituisce i vari tipi di informazioni su un indice.|  
|[CDaoRecordset::GetLastModifiedBookmark](../Topic/CDaoRecordset::GetLastModifiedBookmark.md)|Utilizzato per determinare il record aggiunti di recente o aggiornato.|  
|[CDaoRecordset::GetLockingMode](../Topic/CDaoRecordset::GetLockingMode.md)|Restituisce un valore che indica il tipo di blocco viene applicata durante la modifica.|  
|[CDaoRecordset::GetName](../Topic/CDaoRecordset::GetName.md)|Restituisce `CString` contenente il nome del recordset.|  
|[CDaoRecordset::GetParamValue](../Topic/CDaoRecordset::GetParamValue.md)|Recupera il valore corrente del parametro specificato archiviato nell'oggetto sottostante di DAOParameter.|  
|[CDaoRecordset::GetPercentPosition](../Topic/CDaoRecordset::GetPercentPosition.md)|Restituisce la posizione del record corrente come percentuale del numero totale di record.|  
|[CDaoRecordset::GetRecordCount](../Topic/CDaoRecordset::GetRecordCount.md)|Restituisce il numero di record eseguito in un oggetto recordset.|  
|[CDaoRecordset::GetSQL](../Topic/CDaoRecordset::GetSQL.md)|Ottiene la stringa SQL utilizzata per selezionare i record del recordset.|  
|[CDaoRecordset::GetType](../Topic/CDaoRecordset::GetType.md)|Chiamato per determinare il tipo di recordset: tipo di tabella, di tipo dynaset, o tipo snapshot.|  
|[CDaoRecordset::GetValidationRule](../Topic/CDaoRecordset::GetValidationRule.md)|Restituisce `CString` contenente il valore da convalidare i dati quando viene inserito in un campo.|  
|[CDaoRecordset::GetValidationText](../Topic/CDaoRecordset::GetValidationText.md)|Recupera il testo visualizzato quando una regola di convalida non viene soddisfatta.|  
|[CDaoRecordset::IsBOF](../Topic/CDaoRecordset::IsBOF.md)|Restituisce diverso da zero se il recordset è stato inserito prima del primo record.  Non è disponibile alcun record corrente.|  
|[CDaoRecordset::IsDeleted](../Topic/CDaoRecordset::IsDeleted.md)|Restituisce diverso da zero se il recordset è posizionato su un record eliminato.|  
|[CDaoRecordset::IsEOF](../Topic/CDaoRecordset::IsEOF.md)|Restituisce diverso da zero se il recordset è stato posizionato dopo l'ultimo record.  Non è disponibile alcun record corrente.|  
|[CDaoRecordset::IsFieldDirty](../Topic/CDaoRecordset::IsFieldDirty.md)|Restituisce diverso da zero se il campo specificato nel record corrente è stato modificato.|  
|[CDaoRecordset::IsFieldNull](../Topic/CDaoRecordset::IsFieldNull.md)|Restituisce diverso da zero se il campo specificato nel record corrente è null \(non avendo valore\).|  
|[CDaoRecordset::IsFieldNullable](../Topic/CDaoRecordset::IsFieldNullable.md)|Restituisce diverso da zero se il campo specificato nel record corrente può essere impostato su null \(non avendo valore\).|  
|[CDaoRecordset::IsOpen](../Topic/CDaoRecordset::IsOpen.md)|Restituisce diverso da zero se [Apri](../Topic/CDaoRecordset::Open.md) è stata chiamata in precedenza.|  
|[CDaoRecordset::Move](../Topic/CDaoRecordset::Move.md)|Posiziona il recordset su un determinato numero di record dal record corrente in entrambe le direzioni.|  
|[CDaoRecordset::MoveFirst](../Topic/CDaoRecordset::MoveFirst.md)|Posizionare il record corrente nel primo record del recordset.|  
|[CDaoRecordset::MoveLast](../Topic/CDaoRecordset::MoveLast.md)|Posizionare il record corrente nell'ultimo record del recordset.|  
|[CDaoRecordset::MoveNext](../Topic/CDaoRecordset::MoveNext.md)|Posizionare il record corrente nel record successivo nel recordset.|  
|[CDaoRecordset::MovePrev](../Topic/CDaoRecordset::MovePrev.md)|Posizionare il record corrente nel record precedente nel recordset.|  
|[CDaoRecordset::Open](../Topic/CDaoRecordset::Open.md)|Crea un nuovo recordset da una tabella, da un dynaset, uno snapshot.|  
|[CDaoRecordset::Requery](../Topic/CDaoRecordset::Requery.md)|Esegue nuovamente la query del recordset per aggiornare i record selezionati.|  
|[CDaoRecordset::Seek](../Topic/CDaoRecordset::Seek.md)|Individuare il record in un oggetto indicizzato di recordset di tipo tabella che soddisfa i criteri specificati per l'indice corrente e fatto che registra il record corrente.|  
|[CDaoRecordset::SetAbsolutePosition](../Topic/CDaoRecordset::SetAbsolutePosition.md)|Imposta il numero di record del record corrente di un oggetto recordset.|  
|[CDaoRecordset::SetBookmark](../Topic/CDaoRecordset::SetBookmark.md)|Posizionare il recordset su un record contenente il segnalibro specificato.|  
|[CDaoRecordset::SetCacheSize](../Topic/CDaoRecordset::SetCacheSize.md)|Imposta un valore che specifica il numero di record in un recordset di tipo dynaset contenente i dati in locale da memorizzare nella cache da un'origine dati ODBC.|  
|[CDaoRecordset::SetCacheStart](../Topic/CDaoRecordset::SetCacheStart.md)|Imposta un valore che specifica il segnalibro del primo record del recordset da memorizzare nella cache.|  
|[CDaoRecordset::SetCurrentIndex](../Topic/CDaoRecordset::SetCurrentIndex.md)|Chiamato per impostare un indice in un recordset di tipo tabella.|  
|[CDaoRecordset::SetFieldDirty](../Topic/CDaoRecordset::SetFieldDirty.md)|Contrassegna il campo specificato nel record corrente come modificato.|  
|[CDaoRecordset::SetFieldNull](../Topic/CDaoRecordset::SetFieldNull.md)|Imposta il valore del campo specificato nel record corrente per annullare \(non avendo valore\).|  
|[CDaoRecordset::SetFieldValue](../Topic/CDaoRecordset::SetFieldValue.md)|Imposta il valore di un campo di un recordset.|  
|[CDaoRecordset::SetFieldValueNull](../Topic/CDaoRecordset::SetFieldValueNull.md)|Imposta il valore di un campo di un recordset per annullare.  \(non avendo valore\).|  
|[CDaoRecordset::SetLockingMode](../Topic/CDaoRecordset::SetLockingMode.md)|Imposta un valore che indica il tipo di blocco per attuare durante la modifica.|  
|[CDaoRecordset::SetParamValue](../Topic/CDaoRecordset::SetParamValue.md)|Imposta il valore corrente del parametro specificato archiviato nell'oggetto sottostante di DAOParameter|  
|[CDaoRecordset::SetParamValueNull](../Topic/CDaoRecordset::SetParamValueNull.md)|Imposta il valore corrente del parametro specificato per annullare \(non avendo valore\).|  
|[CDaoRecordset::SetPercentPosition](../Topic/CDaoRecordset::SetPercentPosition.md)|Imposta la posizione del record corrente a una posizione corrispondente a una percentuale del numero totale di record in un recordset.|  
|[CDaoRecordset::Update](../Topic/CDaoRecordset::Update.md)|Completa un'operazione **Modifica** o `AddNew` salvare i dati nuovi o modificati nell'origine dati.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoRecordset::m\_bCheckCacheForDirtyFields](../Topic/CDaoRecordset::m_bCheckCacheForDirtyFields.md)|Contiene un flag che indica se i campi automaticamente sono contrassegnati come modificati.|  
|[CDaoRecordset::m\_nFields](../Topic/CDaoRecordset::m_nFields.md)|Contiene il numero dei membri dati di campo nella classe recordset e il numero di colonne selezionate dal recordset dall'origine dati.|  
|[CDaoRecordset::m\_nParams](../Topic/CDaoRecordset::m_nParams.md)|Contiene il numero dei membri dati di parametro nella classe recordset al numero dei parametri passati alla query del recordset|  
|[CDaoRecordset::m\_pDAORecordset](../Topic/CDaoRecordset::m_pDAORecordset.md)|Un puntatore a un'interfaccia di DAO sottostante all'oggetto recordset.|  
|[CDaoRecordset::m\_pDatabase](../Topic/CDaoRecordset::m_pDatabase.md)|Database di origine per questo gruppo di risultati.  Contiene un puntatore a un oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md).|  
|[CDaoRecordset::m\_strFilter](../Topic/CDaoRecordset::m_strFilter.md)|Contiene una stringa utilizzata per creare un'istruzione SQL **where**.|  
|[CDaoRecordset::m\_strSort](../Topic/CDaoRecordset::m_strSort.md)|Contiene una stringa utilizzata per creare un'istruzione SQL **ORDER BY**.|  
  
## Note  
 Noto come "recordset", gli oggetti `CDaoRecordset` sono disponibili nei seguenti tre modi:  
  
-   I recordset di tipo tabella rappresentano una tabella di base che è possibile utilizzare per esaminare, aggiungere, modificare, o eliminare i record da una tabella di database.  
  
-   I recordset di tipo dynaset sono il risultato di una query che può contenere record aggiornato.  Questi recordset sono un insieme di record che è possibile utilizzare per esaminare, aggiungere, modificare, o eliminare i record da una tabella di database o dalle tabelle sottostante.  I recordset di tipo dynaset possono contenere i campi da una o più tabelle di un database.  
  
-   I recordset di tipo snapshot sono una copia statica di un insieme di record che è possibile utilizzare per individuare i dati o generare rapporti.  Questi recordset possono contenere i campi da una o più tabelle di un database ma non possono essere aggiornati.  
  
 Ogni form del recordset rappresenta un insieme di record corretto quando si apre il recordset.  Quando si scorre un record in un recordset di tipo tabella o in un recordset di tipo dynaset, riflette le modifiche apportate al record dopo che il recordset viene aperto, da altri utenti o da altri recordset nell'applicazione.  \(Il recordset di tipo snapshot di un oggetto non può essere aggiornato.\) È possibile utilizzare direttamente `CDaoRecordset` o derivare una classe specifica dell'applicazione di recordset da `CDaoRecordset`.  Sarà quindi possibile:  
  
-   Scorrimento dei record.  
  
-   Impostare un indice e individuare rapidamente i record mediante [ricerca](../Topic/CDaoRecordset::Seek.md) \(recordset di tipo tabella solo\).  
  
-   Individuare i record in base a un confronto di stringhe: "\<", "\<\=", "\=", "\>\=", o "\>" \(recordset di tipo dynaset e di tipo snapshot\).  
  
-   Aggiornare i record e specificare la modalità di blocco \(eccetto i recordset di tipo snapshot\).  
  
-   Filtrare il recordset per limitare i record sceglie da quelli disponibili nell'origine dati.  
  
-   Ordinare il recordset.  
  
-   Parametri al recordset per personalizzare la selezione con informazioni non note fino al runtime.  
  
 La classe fornisce i `CDaoRecordset` di un'interfaccia simile a quella della classe `CRecordset`.  La differenza principale è che la classe `CDaoRecordset` accede ai dati tramite un oggetto di accesso ai dati \(DAO\) basato su OLE.  La classe `CRecordset` accede al DBMS con ODBC \(open database connectivity\) e un driver ODBC per il DBMS.  
  
> [!NOTE]
>  Le classi di database DAO sono differenziate dalle classi di database MFC basate su ODBC.  Tutti i nomi delle classi di database DAO dispongono del prefisso "di CDao".  È ancora possibile accedere alle origini dati ODBC con le classi DAO, le classi DAO presentano in genere le funzionalità principali perché sono specifiche del modulo di gestione di database Microsoft Jet.  
  
 È possibile utilizzare direttamente `CDaoRecordset` o derivare la classe da `CDaoRecordset`.  Per utilizzare una classe di recordset in entrambi i casi, aprire un database e creare un oggetto recordset, passando al costruttore un puntatore all'oggetto `CDaoDatabase`.  È inoltre possibile costruire un oggetto `CDaoRecordset` e si lascia MFC creare un oggetto temporaneo `CDaoDatabase` automaticamente.  Chiamare la funzione membro [Apri](../Topic/CDaoRecordset::Open.md) del recordset, che specifica se l'oggetto è un recordset di tipo tabella, un recordset di tipo dynaset, o un recordset di tipo snapshot.  Chiamare **Apri** selezionare i dati dal database e recupera il primo record.  
  
 Utilizzare le funzioni membro e i membri dati dell'oggetto scorrere i record e funzionili su.  Le operazioni disponibili dipendono da se l'oggetto è un recordset di tipo tabella, un recordset di tipo dynaset, o un recordset di tipo snapshot e se è aggiornabile o in sola lettura a questo dipende dalla funzionalità di database o di un'origine dati ODBC \(open database connectivity\).  Per aggiornare i record che possono essere modificati o aggiungere poiché la chiamata **Apri**, chiama la funzione membro [Ripetere una query](../Topic/CDaoRecordset::Requery.md) dell'oggetto.  Chiamare la funzione membro **Chiudi** dell'oggetto ed eliminare l'oggetto dopo aver utilizzato.  
  
 `CDaoRecordset` utilizza il trasferimento di campi di record DAO \(DFX\) per supportare la lettura e aggiornare i campi del record mediante membri indipendenti dai tipi C\+\+ del `CDaoRecordset` o `CDaoRecordset`classe derivata da.  È inoltre possibile applicare il collegamento dinamico delle colonne in un database senza utilizzare il meccanismo di DFX utilizzando [GetFieldValue](../Topic/CDaoRecordset::GetFieldValue.md) e [SetFieldValue](../Topic/CDaoRecordset::SetFieldValue.md).  
  
 Per informazioni correlate, vedere l'argomento "oggetto recordset" nella Guida di DAO.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDaoRecordset`  
  
## Requisiti  
 **Header:** afxdao.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDaoTableDef Class](../../mfc/reference/cdaotabledef-class.md)   
 [CDaoWorkspace Class](../../mfc/reference/cdaoworkspace-class.md)   
 [CDaoDatabase Class](../../mfc/reference/cdaodatabase-class.md)   
 [CDaoQueryDef Class](../../mfc/reference/cdaoquerydef-class.md)
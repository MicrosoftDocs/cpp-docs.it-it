---
title: "CRecordset Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CRecordset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRecordset class"
  - "database records [C++]"
  - "ODBC (recordset) [C++], oggetti CRecordset"
  - "sets of records [C++]"
ms.assetid: dd89a21d-ef39-4aab-891b-1e373d67c855
caps.latest.revision: 23
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRecordset Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un insieme di record selezionato da un'origine dati.  
  
## Sintassi  
  
```  
class CRecordset : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecordset::CRecordset](../Topic/CRecordset::CRecordset.md)|Costruisce un oggetto `CRecordset`.  La classe derivata deve fornire un costruttore che chiama questo.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecordset::AddNew](../Topic/CRecordset::AddNew.md)|Prepara per l'aggiunta di un nuovo record.  Chiamata `Update` per completare l'aggiunta.|  
|[CRecordset::CanAppend](../Topic/CRecordset::CanAppend.md)|Restituisce diverso da zero se i nuovi record possono essere aggiunti al recordset mediante la funzione membro `AddNew`.|  
|[CRecordset::CanBookmark](../Topic/CRecordset::CanBookmark.md)|Restituisce diverso da zero se il recordset supporta i segnalibri.|  
|[CRecordset::Cancel](../Topic/CRecordset::Cancel.md)|Annulla un'operazione asincrona o un processo da un secondo thread.|  
|[CRecordset::CancelUpdate](../Topic/CRecordset::CancelUpdate.md)|Annulla tutti gli aggiornamenti in corso a causa di un'operazione `Edit` o `AddNew`.|  
|[CRecordset::CanRestart](../Topic/CRecordset::CanRestart.md)|Restituisce diverso da zero se `Requery` può essere chiamato per eseguire nuovamente la query del recordset.|  
|[CRecordset::CanScroll](../Topic/CRecordset::CanScroll.md)|Restituisce diverso da zero se è possibile scorrere i record.|  
|[CRecordset::CanTransact](../Topic/CRecordset::CanTransact.md)|Restituisce diverso da zero se l'origine dati supporta le transazioni.|  
|[CRecordset::CanUpdate](../Topic/CRecordset::CanUpdate.md)|Restituisce diverso da zero se il recordset è possibile aggiornare \(è possibile aggiungere, aggiornare, o eliminare record\).|  
|[CRecordset::CheckRowsetError](../Topic/CRecordset::CheckRowsetError.md)|Chiamato per gestire gli errori generati durante il recupero record.|  
|[CRecordset::Close](../Topic/CRecordset::Close.md)|Chiude il recordset e ODBC **HSTMT** associato.|  
|[CRecordset::Delete](../Topic/CRecordset::Delete.md)|Elimina il record corrente dal recordset.  Impostare in modo esplicito passare a un altro record dopo l'eliminazione.|  
|[CRecordset::DoBulkFieldExchange](../Topic/CRecordset::DoBulkFieldExchange.md)|Chiamato per lo scambio di massa di righe di dati da un'origine dati al recordset.  Bulk Record Field Exchange di risorse \(RFX di massa.|  
|[CRecordset::DoFieldExchange](../Topic/CRecordset::DoFieldExchange.md)|Chiamato per scambiare dati in entrambe le direzioni\) tra i membri dati di campo del recordset e il record corrispondente nell'origine dati.  Implementa trasferimento di campi di Record.|  
|[CRecordset::Edit](../Topic/CRecordset::Edit.md)|Prepara per le modifiche al record corrente.  Chiamata `Update` per completare la modifica.|  
|[CRecordset::FlushResultSet](../Topic/CRecordset::FlushResultSet.md)|Restituisce diverso da zero se esiste un altro gruppo di risultati da recuperare quando si utilizza una query già definita.|  
|[CRecordset::GetBookmark](../Topic/CRecordset::GetBookmark.md)|Assegna il valore del segnalibro di un record all'oggetto parametro.|  
|[CRecordset::GetDefaultConnect](../Topic/CRecordset::GetDefaultConnect.md)|Chiamato per ottenere la stringa di connessione predefinito.|  
|[CRecordset::GetDefaultSQL](../Topic/CRecordset::GetDefaultSQL.md)|Chiamato per ottenere la stringa SQL predefinita a eseguire.|  
|[CRecordset::GetFieldValue](../Topic/CRecordset::GetFieldValue.md)|Restituisce il valore di un campo di un recordset.|  
|[CRecordset::GetODBCFieldCount](../Topic/CRecordset::GetODBCFieldCount.md)|Restituisce il numero di campi del recordset.|  
|[CRecordset::GetODBCFieldInfo](../Topic/CRecordset::GetODBCFieldInfo.md)|Restituisce tipi specifici di informazioni sui campi in un recordset.|  
|[CRecordset::GetRecordCount](../Topic/CRecordset::GetRecordCount.md)|Restituisce il numero di record del recordset.|  
|[CRecordset::GetRowsetSize](../Topic/CRecordset::GetRowsetSize.md)|Restituisce il numero di record che si desidera recuperare durante la sola raccolta.|  
|[CRecordset::GetRowsFetched](../Topic/CRecordset::GetRowsFetched.md)|Restituisce il numero di righe recuperate durante la raccolta.|  
|[CRecordset::GetRowStatus](../Topic/CRecordset::GetRowStatus.md)|Restituisce lo stato della riga dopo una raccolta.|  
|[CRecordset::GetSQL](../Topic/CRecordset::GetSQL.md)|Ottiene la stringa SQL utilizzata per selezionare i record del recordset.|  
|[CRecordset::GetStatus](../Topic/CRecordset::GetStatus.md)|Ottiene lo stato del recordset: indice del record corrente e se un conteggio finale dei record è stato ottenuto.|  
|[CRecordset::GetTableName](../Topic/CRecordset::GetTableName.md)|Ottiene il nome della tabella in cui il recordset basato.|  
|[CRecordset::IsBOF](../Topic/CRecordset::IsBOF.md)|Restituisce diverso da zero se il recordset è stato inserito prima del primo record.  Non è disponibile alcun record corrente.|  
|[CRecordset::IsDeleted](../Topic/CRecordset::IsDeleted.md)|Restituisce diverso da zero se il recordset è posizionato su un record eliminato.|  
|[CRecordset::IsEOF](../Topic/CRecordset::IsEOF.md)|Restituisce diverso da zero se il recordset è stato posizionato dopo l'ultimo record.  Non è disponibile alcun record corrente.|  
|[CRecordset::IsFieldDirty](../Topic/CRecordset::IsFieldDirty.md)|Restituisce diverso da zero se il campo specificato nel record corrente è stato modificato.|  
|[CRecordset::IsFieldNull](../Topic/CRecordset::IsFieldNull.md)|Restituisce diverso da zero se il campo specificato nel record corrente è null \(non ha valore\).|  
|[CRecordset::IsFieldNullable](../Topic/CRecordset::IsFieldNullable.md)|Restituisce diverso da zero se il campo specificato nel record corrente può essere impostato su null \(non avendo valore\).|  
|[CRecordset::IsOpen](../Topic/CRecordset::IsOpen.md)|Restituisce diverso da zero se `Open` è stata chiamata in precedenza.|  
|[CRecordset::Move](../Topic/CRecordset::Move.md)|Posiziona il recordset su un determinato numero di record dal record corrente in entrambe le direzioni.|  
|[CRecordset::MoveFirst](../Topic/CRecordset::MoveFirst.md)|Posizionare il record corrente nel primo record del recordset.  Test per `IsBOF` per primo.|  
|[CRecordset::MoveLast](../Topic/CRecordset::MoveLast.md)|Posizionare il record corrente nell'ultimo record oultimo rowset.  Test per `IsEOF` per primo.|  
|[CRecordset::MoveNext](../Topic/CRecordset::MoveNext.md)|Posizionare il record corrente nel record successivo o sul rowset successivo.  Test per `IsEOF` per primo.|  
|[CRecordset::MovePrev](../Topic/CRecordset::MovePrev.md)|Posizionare il record corrente nel record precedente o sul rowset precedente.  Test per `IsBOF` per primo.|  
|[CRecordset::OnSetOptions](../Topic/CRecordset::OnSetOptions.md)|Chiamato per impostare opzioni \(utilizzato nella selezione\) per l'istruzione specificato ODBC.|  
|[CRecordset::OnSetUpdateOptions](../Topic/CRecordset::OnSetUpdateOptions.md)|Chiamato per impostare opzioni \(utilizzate sull'aggiornamento\) per l'istruzione specificato ODBC.|  
|[CRecordset::Open](../Topic/CRecordset::Open.md)|Apre il recordset recuperando la tabella o esegue la query del recordset rappresenta.|  
|[CRecordset::RefreshRowset](../Topic/CRecordset::RefreshRowset.md)|Aggiorna i dati e lo stato delle righe specificate.|  
|[CRecordset::Requery](../Topic/CRecordset::Requery.md)|Esegue nuovamente la query del recordset per aggiornare i record selezionati.|  
|[CRecordset::SetAbsolutePosition](../Topic/CRecordset::SetAbsolutePosition.md)|Posizionare il recordset nel record corrispondente al numero di record specificato.|  
|[CRecordset::SetBookmark](../Topic/CRecordset::SetBookmark.md)|Posizionare il recordset sul record specificato dal segnalibro.|  
|[CRecordset::SetFieldDirty](../Topic/CRecordset::SetFieldDirty.md)|Contrassegna il campo specificato nel record corrente come modificato.|  
|[CRecordset::SetFieldNull](../Topic/CRecordset::SetFieldNull.md)|Imposta il valore del campo specificato nel record corrente per annullare \(non avendo valore\).|  
|[CRecordset::SetLockingMode](../Topic/CRecordset::SetLockingMode.md)|Imposta blocco ottimistico "di" modalità di blocco \(impostazione predefinita\) o "blocco pessimistico".  Determina quali record sono bloccati per gli aggiornamenti.|  
|[CRecordset::SetParamNull](../Topic/CRecordset::SetParamNull.md)|Imposta il parametro specificato per annullare \(non avendo valore\).|  
|[CRecordset::SetRowsetCursorPosition](../Topic/CRecordset::SetRowsetCursorPosition.md)|Posizionare il cursore sulla riga specificata nel rowset.|  
|[CRecordset::SetRowsetSize](../Topic/CRecordset::SetRowsetSize.md)|Specifica il numero di record che si desidera recuperare durante la raccolta.|  
|[CRecordset::Update](../Topic/CRecordset::Update.md)|Completa un'operazione `Edit` o `AddNew` salvare i dati nuovi o modificati nell'origine dati.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecordset::m\_hstmt](../Topic/CRecordset::m_hstmt.md)|Contiene l'handle di un'istruzione ODBC per il recordset.  Digitare `HSTMT`.|  
|[CRecordset::m\_nFields](../Topic/CRecordset::m_nFields.md)|Contiene il numero dei membri dati di campo del recordset.  Digitare `UINT`.|  
|[CRecordset::m\_nParams](../Topic/CRecordset::m_nParams.md)|Contiene il numero dei membri dati di parametro nel recordset.  Digitare `UINT`.|  
|[CRecordset::m\_pDatabase](../Topic/CRecordset::m_pDatabase.md)|Contiene un puntatore all'oggetto `CDatabase` in cui il recordset è connesso a un'origine dati.|  
|[CRecordset::m\_strFilter](../Topic/CRecordset::m_strFilter.md)|Contiene `CString` che specifica una clausola `WHERE` \(SQL\) SQL.  Utilizzato come un filtro per selezionare solo i record che soddisfano determinati criteri.|  
|[CRecordset::m\_strSort](../Topic/CRecordset::m_strSort.md)|Contiene `CString` che specifica una clausola SQL `ORDER BY`.  Utilizzato per controllare quali record vengono ordinati.|  
  
## Note  
 Noto come "recordset", gli oggetti `CRecordset` in genere utilizzati in due formati: dynaset e snapshot.  Un dynaset restano sincronizzati con gli aggiornamenti dei dati apportate da altri utenti.  Uno snapshot è una visualizzazione statica dei dati.  Ogni form rappresenta un insieme di record corretto quando si apre il recordset, ma quando si scorre un record in un dynaset, riflette le modifiche apportate successivamente al record, da altri utenti o da altri recordset nell'applicazione.  
  
> [!NOTE]
>  Se si utilizzano gli oggetti di accesso ai dati che \(DAO\) classi anziché le classi ODBC \(open database connectivity\), la classe [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) di utilizzare.  Per ulteriori informazioni, vedere l'articolo [cenni preliminari: La programmazione di database](../../data/data-access-programming-mfc-atl.md).  
  
 Per utilizzare qualsiasi tipo di recordset, in genere deriva una classe specifica dell'applicazione di recordset da `CRecordset`.  I recordset selezionano record da un'origine dati e quindi:  
  
-   Scorrimento dei record.  
  
-   Aggiornare i record e specificare la modalità di blocco.  
  
-   Filtrare il recordset per limitare i record sceglie da quelli disponibili nell'origine dati.  
  
-   Ordinare il recordset.  
  
-   Parametri al recordset per personalizzare la selezione con informazioni non note fino al runtime.  
  
 Per utilizzare la classe, aprire un database e creare un oggetto recordset, passando al costruttore un puntatore all'oggetto `CDatabase`.  Chiamare la funzione membro **Apri** del recordset, dove è possibile specificare se l'oggetto è un dynaset o uno snapshot.  Chiamare **Apri** selezionare i dati da un'origine dati.  Dopo che l'oggetto recordset viene aperto, utilizzare le funzioni membro e i membri dati per scorrere i record e per funzionarli su.  Le operazioni disponibili dipendono da se l'oggetto è un dynaset o uno snapshot, se è aggiornabile o di sola lettura \(questo dipende dalla funzionalità dell'origine dati ODBC \(open database connectivity\) e se si è implementato il recupero di massa di righe.  Per aggiornare i record che possono essere modificati o aggiungere poiché la chiamata **Apri**, chiama la funzione membro **Requery** dell'oggetto.  Chiamare la funzione membro **Chiudi** dell'oggetto ed eliminare l'oggetto dopo aver utilizzato.  
  
 In una classe derivata `CRecordset`, trasferimento di campi di Record o il l'rfx di massa\) viene utilizzato per supportare la lettura e aggiornare i campi del record.  
  
 Per ulteriori informazioni sui recordset e su Record Field Exchange, vedere gli articoli [cenni preliminari: La programmazione di database](../../data/data-access-programming-mfc-atl.md), [recordset \(ODBC\)](../../data/odbc/recordset-odbc.md), [recordset: Recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md)e [Trasferimento di campi di Record](../../data/odbc/record-field-exchange-rfx.md).  Per lo stato attivo sui dynaset e sugli snapshot, vedere gli articoli [dynaset](../../data/odbc/dynaset.md) e [snapshot](../../data/odbc/snapshot.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CRecordset`  
  
## Requisiti  
 **Header:** afxdb.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDatabase Class](../../mfc/reference/cdatabase-class.md)   
 [CRecordView Class](../../mfc/reference/crecordview-class.md)
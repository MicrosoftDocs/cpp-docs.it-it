---
title: "Recordset: ulteriori informazioni sugli aggiornamenti (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ambienti multiutente, aggiornamenti a recordset"
  - "recordset ODBC, aggiornamento"
  - "record, aggiornamento"
  - "recordset, aggiornamento"
  - "scorrimento, aggiornamenti a recordset"
  - "transazioni, aggiornamento di recordset"
  - "aggiornamento di recordset"
ms.assetid: 0353a742-d226-4fe2-8881-a7daeffe86cd
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Recordset: ulteriori informazioni sugli aggiornamenti (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 In questo argomento vengono fornite informazioni su:  
  
-   [Effetti delle transazioni sugli aggiornamenti](#_core_how_transactions_affect_updates).  
  
-   [Aggiornamenti effettuati in un ambiente multiutente](#_core_your_updates_and_the_updates_of_other_users).  
  
-   [Ulteriori informazioni su Update e Delete](#_core_more_about_update_and_delete).  
  
> [!NOTE]
>  L'argomento è relativo agli oggetti derivati da `CRecordset` per cui il recupero di massa di righe non è ancora stato implementato.  Se si implementa il recupero di massa di righe, alcune delle informazioni riportate in questo argomento non saranno applicabili.  Non è possibile ad esempio chiamare le funzioni membro `AddNew`, **Edit**, **Delete** e **Update**, ma è possibile eseguire transazioni.  Per ulteriori informazioni sul recupero di massa di righe, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
##  <a name="_core_how_other_operations_affect_updates"></a> Effetti delle altre operazioni sugli aggiornamenti  
 Gli aggiornamenti vengono influenzati dalle transazioni in corso al momento dell'aggiornamento, nel caso in cui si chiuda o si scorra il recordset prima del completamento di una transazione.  
  
###  <a name="_core_how_transactions_affect_updates"></a> Effetti delle transazioni sugli aggiornamenti  
 Oltre al funzionamento di `AddNew`, **Edit** e **Delete**, è importante comprendere l'interazione delle funzioni membro **BeginTrans**, **CommitTrans** e **Rollback** di [CDatabase](../../mfc/reference/cdatabase-class.md) con le funzioni di aggiornamento di [CRecordset](../../mfc/reference/crecordset-class.md).  
  
 Per impostazione predefinita, le chiamate ad `AddNew` e a **Edit** influenzano l'origine dati quando si chiama **Update**.  Le chiamate a **Delete** hanno invece un effetto immediato.  È tuttavia possibile stabilire una transazione ed eseguire tali chiamate in batch.  Gli aggiornamenti non sono permanenti fino a quando non se ne esegue il commit.  È pertanto possibile eseguire il rollback anziché il commit della transazione.  
  
 Per ulteriori informazioni sulle transazioni, vedere [Transazione \(ODBC\)](../../data/odbc/transaction-odbc.md).  
  
###  <a name="_core_how_closing_the_recordset_affects_updates"></a> Effetti della chiusura del recordset sugli aggiornamenti  
 Se viene chiuso un recordset o il relativo oggetto `CDatabase` associato mentre è in corso una transazione, ovvero quando non è ancora stata chiamata la funzione [CDatabase::CommitTrans](../Topic/CDatabase::CommitTrans.md) o [CDatabase::Rollback](../Topic/CDatabase::Rollback.md), verrà eseguito automaticamente il rollback di transazione, a meno che il database back\-end non sia il motore di gestione di database Microsoft Jet.  
  
> [!CAUTION]
>  Se si utilizza il motore di database Microsoft Jet, la chiusura di un recordset all'interno di una transazione esplicita non comporta il rilascio delle righe modificate o dei blocchi inseriti finché non si esegue il commit o il rollback della transazione esplicita.  Si consiglia di aprire e chiudere sempre i recordset all'interno o all'esterno di una transazione Jet esplicita.  
  
###  <a name="_core_how_scrolling_affects_updates"></a> Effetti dello scorrimento sugli aggiornamenti  
 Quando si [Recordset: scorrimento \(ODBC\)](../../data/odbc/recordset-scrolling-odbc.md) un recordset, nel buffer di modifica vengono inseriti nuovi record correnti e il record precedente non viene prima memorizzato.  Durante lo scorrimento vengono ignorati i record eliminati in precedenza.  Se si scorre un recordset dopo una chiamata ad `AddNew` o **Edit** senza chiamare prima **Update**, **CommitTrans** o **Rollback**, tutte le modifiche andranno perse senza alcun avviso quando verrà inserito un nuovo record nel buffer di modifica.  Nel buffer di modifica viene inserito il record corrente, il record memorizzato viene liberato e non viene apportata alcuna modifica all'origine dati.  Questa condizione è valida sia per `AddNew` che per **Edit**.  
  
##  <a name="_core_your_updates_and_the_updates_of_other_users"></a> Aggiornamenti effettuati in un ambiente multiutente  
 Quando si utilizza un recordset per aggiornare i dati, gli aggiornamenti effettuati influenzano gli altri utenti.  In modo analogo, gli aggiornamenti effettuati dagli altri utenti per l'intera durata del recordset influenzano l'utente del recordset.  
  
 In un ambiente multiutente è possibile che alcuni utenti aprano recordset contenenti alcuni dei record selezionati nel recordset di un altro utente.  Le modifiche apportate a un record prima del relativo recupero vengono riflesse nel recordset dell'utente singolo.  I dynaset recuperano un record ogni volta che lo si scorre. In tal modo, i dynaset riflettono le modifiche apportate ogni volta che si scorre un record.  Gli snapshot invece recuperano un record la prima volta che lo si scorre, pertanto riflettono solo le modifiche apportate prima dello scorrimento iniziale del record.  
  
 I record aggiunti da altri utenti dopo l'apertura del recordset non vengono visualizzati nel recordset fino a quando non viene ripetuta la query.  Se il recordset è un dynaset, le modifiche apportate dagli altri utenti ai record esistenti vengono visualizzate nel dynaset dell'utente singolo quando quest'ultimo scorre i record modificati.  Se il recordset è uno snapshot, le modifiche non vengono visualizzate fino a quando non viene ripetuta la query sullo snapshot.  Se si desidera visualizzare i record aggiunti o eliminati da altri utenti in uno snapshot o quelli aggiunti da altri utenti in un dynaset, chiamare [CRecordset::Requery](../Topic/CRecordset::Requery.md) per ricompilare il recordset. Tenere presente che le eliminazioni effettuate dagli altri utenti vengono visualizzate nel dynaset. È inoltre possibile chiamare **Requery** per visualizzare i record aggiunti personalmente, ma non quelli eliminati.  
  
> [!TIP]
>  Per imporre la memorizzazione nella cache di un intero snapshot in una sola operazione, chiamare `MoveLast` immediatamente dopo l'apertura dello snapshot.  Successivamente chiamare **MoveFirst** per iniziare a utilizzare i record.  L'utilizzo di `MoveLast` equivale allo scorrimento di tutti i record, con la differenza che, mediante tale funzione, vengono recuperati tutti contemporaneamente.  Si noti tuttavia che tale operazione può ridurre le prestazioni e può non essere necessaria per alcuni driver.  
  
 Gli effetti degli aggiornamenti eseguiti da un utente singolo sono simili a quelli degli aggiornamenti eseguiti da altri utenti.  
  
##  <a name="_core_more_about_update_and_delete"></a> Ulteriori informazioni su Update e Delete  
 In questa sezione vengono fornite informazioni aggiuntive relative all'utilizzo di **Update** e **Delete**.  
  
### Riuscita e mancata riuscita di Update  
 Se la funzione **Update** ha esito positivo, la modalità `AddNew` o **Edit** viene terminata.  Per avviare nuovamente la modalità `AddNew` o **Edit**, chiamare `AddNew` o **Edit**.  
  
 Se la funzione **Update** ha esito negativo, ovvero restituisce **FALSE** o genera un'eccezione, continua a essere attiva la modalità `AddNew` o **Edit**, a seconda dell'ultima funzione chiamata.  È quindi possibile effettuare una delle operazioni riportate di seguito.  
  
-   Modificare un membro dati di campo e chiamare di nuovo **Update**.  
  
-   Chiamare `AddNew` per reimpostare i membri dati di campo su Null, quindi impostare i valori dei membri dati di campo e chiamare di nuovo **Update**.  
  
-   Chiamare **Edit** per caricare nuovamente i valori contenuti nel recordset prima della prima chiamata ad `AddNew` o **Edit**, quindi impostare i valori dei membri dati di campo e chiamare di nuovo **Update**.  I membri dati di campo mantengono i nuovi valori se la chiamata a **Update** ha esito positivo, ma non dopo una chiamata ad `AddNew`.  
  
-   Chiamare **Move** \(anche con un parametro **AFX\_MOVE\_REFRESH** o 0\) per eliminare tutte le modifiche e terminare la modalità `AddNew` o **Edit**.  
  
### Update e Delete  
 Questa sezione si riferisce sia ad **Update** che a **Delete**.  
  
 Durante un'operazione **Update** o **Delete** è necessario aggiornare un solo record,  ovvero il record corrente, che corrisponde ai valori nei campi del recordset.  Se, per qualche ragione, non viene aggiornato alcun record o vengono aggiornati più record, viene generata un'eccezione contenente uno dei valori **RETCODE** seguenti:  
  
-   **AFX\_SQL\_ERROR\_NO\_ROWS\_AFFECTED**  
  
-   **AFX\_SQL\_ERROR\_MULTIPLE\_ROWS\_AFFECTED**  
  
 Quando vengono generate queste eccezioni, continua a essere attiva la modalità `AddNew` o **Edit** impostata durante la chiamata a **Update** o a **Delete**.  Di seguito sono riportati gli scenari più comuni in cui vengono generate queste eccezioni.  In genere, vengono generate le eccezioni seguenti:  
  
-   **AFX\_SQL\_ERROR\_NO\_ROWS\_AFFECTED** quando si utilizza la modalità di blocco ottimistico e il record è stato modificato da un altro utente in modo tale da impedire al framework di identificare il record corretto da aggiornare o eliminare.  
  
-   **AFX\_SQL\_ERROR\_MULTIPLE\_ROWS\_AFFECTED** quando alla tabella che si sta aggiornando non viene assegnata alcuna chiave primaria o indice univoco e non si dispone di un numero sufficiente di colonne nel recordset per identificare in modo univoco una riga di una tabella.  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Recordset: selezione dei record \(ODBC\)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)   
 [Trasferimento di campi di record \(RFX\)](../../data/odbc/record-field-exchange-rfx.md)   
 [SQL](../../data/odbc/sql.md)   
 [Eccezioni: eccezioni di database](../../mfc/exceptions-database-exceptions.md)
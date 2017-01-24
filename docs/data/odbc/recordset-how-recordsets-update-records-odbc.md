---
title: "Recordset: aggiornamento dei record (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "recordset ODBC, aggiornamento"
  - "record, aggiornamento"
  - "recordset, modifica di record"
  - "recordset, aggiornamento"
  - "aggiornamento di recordset"
ms.assetid: 5ceecc06-7a86-43b1-93db-a54fb1e717c7
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Recordset: aggiornamento dei record (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 Oltre a selezionare record da un'origine dati, tramite i recordset è possibile aggiornare o eliminare i record selezionati o aggiungere nuovi record.  La possibilità di aggiornare un recordset è determinata da tre fattori: l'aggiornabilità dell'origine dati connessa, le opzioni specificate quando si crea un oggetto recordset e la stringa SQL creata.  
  
> [!NOTE]
>  La stringa SQL su cui è basato l'oggetto `CRecordset` può influenzare la possibilità di aggiornare il recordset.  Se ad esempio la stringa SQL contiene un join o una clausola **GROUP BY**, in MFC l'aggiornabilità del set viene impostata su **FALSE**.  
  
> [!NOTE]
>  L'argomento è relativo agli oggetti derivati da `CRecordset` per cui il recupero di massa di righe non è ancora stato implementato.  Se si utilizza il recupero di massa di righe, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 In questo argomento vengono fornite informazioni su:  
  
-   [Ruolo del programmatore nell'aggiornamento del recordset](#_core_your_role_in_recordset_updating) e operazioni effettuate automaticamente dal framework.  
  
-   [Recordset come buffer di modifica](#_core_the_edit_buffer) e differenze tra [dynaset e snapshot](#_core_dynasets_and_snapshots).  
  
 In [Recordset: funzionamento dei metodi AddNew, Edit e Delete \(ODBC\)](../../data/odbc/recordset-how-addnew-edit-and-delete-work-odbc.md) sono descritte le operazioni eseguite da queste funzioni per quanto riguarda il recordset.  
  
 In [Recordset: ulteriori informazioni sugli aggiornamenti \(ODBC\)](../../data/odbc/recordset-more-about-updates-odbc.md) vengono fornite informazioni aggiuntive sugli aggiornamenti dei recordset: vengono illustrati gli effetti delle transazioni sugli aggiornamenti, gli effetti della chiusura o dello scorrimento del recordset sugli aggiornamenti in corso e l'interazione tra gli aggiornamenti effettuati da un determinato utente con quelli eseguiti da altri utenti.  
  
##  <a name="_core_your_role_in_recordset_updating"></a> Ruolo del programmatore nell'aggiornamento del recordset  
 Nella tabella riportata di seguito viene illustrato il ruolo svolto dal programmatore nell'utilizzo dei recordset per aggiungere, modificare o eliminare record, insieme alle operazioni effettuate automaticamente dal framework.  
  
### Aggiornamento del recordset: programmatore e framework  
  
|Programmatore|Framework|  
|-------------------|---------------|  
|Determina se l'origine dati è abilitata per l'aggiornamento o per le aggiunte.|Fornisce le funzioni membro di [CDatabase](../../mfc/reference/cdatabase-class.md) per verificare se l'origine dati è abilitata per l'aggiornamento o per le aggiunte.|  
|Apre un recordset aggiornabile di qualsiasi tipo.||  
|Determina se il recordset è aggiornabile chiamando le funzioni di aggiornamento di `CRecordset`, ovvero `CanUpdate` o `CanAppend`.||  
|Chiama le funzioni membro del recordset per aggiungere, modificare ed eliminare i record.|Gestisce il meccanismo di trasferimento di dati tra l'oggetto recordset e l'origine dati.|  
|Utilizza eventualmente le transazioni per controllare il processo di aggiornamento.|Fornisce le funzioni membro `CDatabase` per il supporto delle transazioni.|  
  
 Per ulteriori informazioni sulle transazioni, vedere [Transazione \(ODBC\)](../../data/odbc/transaction-odbc.md).  
  
##  <a name="_core_the_edit_buffer"></a> Buffer di modifica  
 L'insieme di tutti i membri dati di campo di un recordset funge da buffer di modifica contenente un solo record, quello corrente.  Le operazioni di aggiornamento vengono applicate al record corrente mediante questo buffer.  
  
-   Quando si aggiunge un record, il buffer di modifica viene utilizzato per compilare il nuovo record.  Una volta aggiunto il record, il record che era in precedenza corrente viene reimpostato come record corrente.  
  
-   Quando si aggiorna o si modifica un record, il buffer di modifica viene utilizzato per impostare i membri dati di campo del recordset sui nuovi valori.  Una volta terminato l'aggiornamento, il record aggiornato continua a essere il record corrente.  
  
 Quando si chiama [AddNew](../Topic/CRecordset::AddNew.md) o [Edit](../Topic/CRecordset::Edit.md), il record corrente viene memorizzato per essere ripristinato in seguito, se necessario.  Quando si chiama [Delete](../Topic/CRecordset::Delete.md), il record corrente non viene memorizzato, ma viene contrassegnato come eliminato. È quindi necessario passare a un altro record.  
  
> [!NOTE]
>  Il buffer di modifica non svolge alcun ruolo nell'eliminazione dei record.  Quando si elimina il record corrente, questo viene contrassegnato come eliminato e il recordset non risulta posizionato su alcun record fino a quando non si passa a un altro record.  
  
##  <a name="_core_dynasets_and_snapshots"></a> Dynaset e snapshot  
 I [dynaset](../../data/odbc/dynaset.md) aggiornano il contenuto di un record durante lo scorrimento.  Gli [snapshot](../../data/odbc/snapshot.md) sono invece rappresentazioni statiche dei record. Il contenuto di un record non viene pertanto aggiornato fino a quando non si chiama [Requery](../Topic/CRecordset::Requery.md).  Per utilizzare tutte le funzionalità dei dynaset, è necessario utilizzare un driver ODBC conforme al livello corretto di supporto dell'API ODBC.  Per ulteriori informazioni, vedere [ODBC](../../data/odbc/odbc-basics.md) e [Dynaset](../../data/odbc/dynaset.md).  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Recordset: funzionamento dei metodi AddNew, Edit e Delete \(ODBC\)](../../data/odbc/recordset-how-addnew-edit-and-delete-work-odbc.md)
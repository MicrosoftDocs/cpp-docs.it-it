---
title: "Transazione: effetti delle transazioni sugli aggiornamenti (ODBC) | Microsoft Docs"
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
  - "CommitTrans (metodo)"
  - "recordset ODBC, transazioni"
  - "Rollback (metodo), transazioni ODBC"
  - "transazioni, rollback"
  - "transazioni, aggiornamento di recordset"
ms.assetid: 9e00bbf4-e9fb-4332-87fc-ec8ac61b3f68
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Transazione: effetti delle transazioni sugli aggiornamenti (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Gli aggiornamenti dell'[origine dati](../../data/odbc/data-source-odbc.md) vengono gestiti durante le transazioni attraverso l'utilizzo di un buffer di modifica: si tratta dello stesso metodo utilizzato al di fuori delle transazioni.  I membri dati di campo di un recordset fungono collettivamente da buffer di modifica contenente il record corrente e del quale il recordset effettua temporaneamente il backup durante un'operazione `AddNew` o **Edit**.  Durante un'operazione **Delete**, non viene effettuato il backup del record corrente all'interno di una transazione.  Per ulteriori informazioni sul buffer di modifica e sulla modalità di memorizzazione del record corrente negli aggiornamenti, vedere [Recordset: aggiornamento dei record \(ODBC\)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).  
  
> [!NOTE]
>  Se si è implementato il recupero di massa delle righe, non è possibile chiamare `AddNew`, **Edit** o **Delete**.  Per effettuare gli aggiornamenti dell'origine dati, è invece necessario scrivere funzioni personalizzate.  Per ulteriori informazioni sul recupero di massa di righe, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Durante le transazioni è possibile eseguire il commit o il rollback delle operazioni `AddNew`, **Edit** e **Delete**.  Gli effetti di **CommitTrans** e **Rollback** possono fare in modo che il record corrente non venga ripristinato nel buffer di modifica.  Per assicurarsi che il record corrente venga ripristinato correttamente, è importante comprendere l'interazione delle funzioni membro **CommitTrans** e **Rollback** di `CDatabase` con le funzioni di aggiornamento di `CRecordset`.  
  
##  <a name="_core_how_committrans_affects_updates"></a> Effetti di CommitTrans sugli aggiornamenti  
 La tabella seguente illustra gli effetti di **CommitTrans** sulle transazioni.  
  
### Effetti di CommitTrans sugli aggiornamenti  
  
|Operazione|Stato dell'origine dati|  
|----------------|-----------------------------|  
|`AddNew` e **Update**, quindi **CommitTrans**|Il nuovo record viene aggiunto all'origine dati.|  
|`AddNew` \(senza **Update**\), quindi **CommitTrans**|Il nuovo record va perduto.  Il record non viene aggiunto all'origine dati.|  
|**Edit** e **Update**, quindi **CommitTrans**|Le modifiche vengono applicate all'origine dati.|  
|**Edit** \(senza **Update**\), quindi **CommitTrans**|Le modifiche apportate al record vanno perdute.  Il record rimane invariato nell'origine dati.|  
|**Delete**, quindi **CommitTrans**|I record vengono eliminati dall'origine dati.|  
  
##  <a name="_core_how_rollback_affects_updates"></a> Effetti di Rollback sulle transazioni  
 La tabella seguente illustra gli effetti di **Rollback** sulle transazioni.  
  
### Effetti di Rollback sulle transazioni  
  
|Operazione|Stato del record corrente|È inoltre necessario|Stato dell'origine dati|  
|----------------|-------------------------------|--------------------------|-----------------------------|  
|`AddNew` e **Update**, quindi **Rollback**|Il contenuto del record corrente viene memorizzato temporaneamente per lasciare spazio al nuovo record.  Il nuovo record viene immesso nel buffer di modifica.  Dopo la chiamata di **Update**, il record corrente viene ripristinato nel buffer di modifica.||L'aggiunta all'origine dati effettuata da **Update** viene annullata.|  
|`AddNew` \(senza **Update**\), quindi **Rollback**|Il contenuto del record corrente viene memorizzato temporaneamente per lasciare spazio al nuovo record.  Il buffer di modifica contiene il nuovo record.|Chiamare nuovamente `AddNew` per ripristinare nel buffer di modifica un nuovo record vuoto.  Oppure chiamare **Move**\(0\) per ripristinare i vecchi valori nel buffer di modifica.|Poiché l'operazione **Update** non è stata chiamata, non sono state apportate modifiche all'origine dati.|  
|**Edit** e **Update**, quindi **Rollback**|Una versione non modificata del record corrente viene memorizzata temporaneamente.  Vengono apportate modifiche al contenuto del buffer di modifica.  Dopo la chiamata ad **Update**, la versione non modificata del record rimane ancora memorizzata temporaneamente.|*Dynaset*: scorrere oltre il record corrente quindi tornare indietro per ripristinare la versione non modificata del record nel buffer di modifica.<br /><br /> *Snapshot*: chiamare **Requery** per aggiornare il recordset dall'origine dati.|Le modifiche apportate da **Update** all'origine dati vengono annullate.|  
|**Edit** \(senza **Update**\), quindi **Rollback**|Una versione non modificata del record corrente viene memorizzata temporaneamente.  Vengono apportate modifiche al contenuto del buffer di modifica.|Chiamare nuovamente **Edit** per ripristinare la versione non modificata del record nel buffer di modifica.|Poiché l'operazione **Update** non è stata chiamata, non sono state apportate modifiche all'origine dati.|  
|**Delete**, quindi **Rollback**|Il contenuto del record corrente viene eliminato.|Chiamare **Requery** per ripristinare il contenuto del record corrente dall'origine dati.|L'eliminazione dei dati dall'origine dati viene annullata.|  
  
## Vedere anche  
 [Transazione \(ODBC\)](../../data/odbc/transaction-odbc.md)   
 [Transazione \(ODBC\)](../../data/odbc/transaction-odbc.md)   
 [Transazione: esecuzione di una transazione in un recordset \(ODBC\)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md)   
 [CDatabase Class](../../mfc/reference/cdatabase-class.md)   
 [CRecordset Class](../../mfc/reference/crecordset-class.md)
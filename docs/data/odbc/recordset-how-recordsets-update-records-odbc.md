---
title: 'Recordset: Aggiornamento dei record (ODBC) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- records, updating
- ODBC recordsets, updating
- recordsets, editing records
- updating recordsets
- recordsets, updating
ms.assetid: 5ceecc06-7a86-43b1-93db-a54fb1e717c7
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: e38f2e62e9aa7b01680e9b2fd1e4a540ee552c3c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="recordset-how-recordsets-update-records-odbc"></a>Recordset: aggiornamento dei record (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 Oltre le possibilità di selezionare i record da un'origine dati, recordset, facoltativamente, aggiornare o eliminare i record selezionati o aggiungere nuovi record. Possibilità di aggiornamento di un oggetto recordset determinata da tre fattori: indica se l'origine dati connessa è aggiornabile, le opzioni specificate quando si crea un oggetto recordset e la query SQL che viene creata.  
  
> [!NOTE]
>  L'istruzione SQL in cui il `CRecordset` base dell'oggetto possono influire sulla possibilità di aggiornamento del recordset. Ad esempio, se la stringa SQL contiene un join o un **GROUP BY** clausola, in MFC l'aggiornabilità **FALSE**.  
  
> [!NOTE]
>  Questo argomento si applica agli oggetti derivati da `CRecordset` in quale riga bulk recupero non è stato implementato. Se si utilizza il recupero di righe di massa, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Questo argomento viene illustrato:  
  
-   [Il ruolo durante l'aggiornamento di recordset](#_core_your_role_in_recordset_updating) ed eseguite dal framework per l'utente.  
  
-   [Il recordset come buffer di modifica](#_core_the_edit_buffer) e [differenze tra i dynaset e snapshot](#_core_dynasets_and_snapshots).  
  
 [Recordset: Modalità AddNew, Edit e Delete (ODBC)](../../data/odbc/recordset-how-addnew-edit-and-delete-work-odbc.md) descrive le azioni di queste funzioni dal punto di vista dell'oggetto recordset.  
  
 [Recordset: Ulteriori su aggiornamenti (ODBC)](../../data/odbc/recordset-more-about-updates-odbc.md) consente di completare la sequenza di aggiornamento di recordset che spiega come transazioni sugli aggiornamenti, influenza gli aggiornamenti in corso la chiusura di un recordset o lo scorrimento e interazione con gli aggiornamenti di altri utenti.  
  
##  <a name="_core_your_role_in_recordset_updating"></a>Il ruolo durante l'aggiornamento di Recordset  
 Nella tabella seguente viene illustrato il ruolo all'utilizzo di recordset per aggiungere, modificare o eliminare i record, insieme a eseguite dal framework per l'utente.  
  
### <a name="recordset-updating-you-and-the-framework"></a>Aggiornamento di Recordset: Programmatore e Framework  
  
|Programmatore|Framework|  
|---------|-------------------|  
|Determinare se l'origine dati è aggiornabile (o videoregistrazione).|Fornisce [CDatabase](../../mfc/reference/cdatabase-class.md) funzioni membro per verificare l'origine dati o per le aggiunte.|  
|Aprire un oggetto recordset aggiornabile (di qualsiasi tipo).||  
|Determina se il recordset è aggiornabile chiamando `CRecordset` aggiornamento delle funzioni, ad esempio `CanUpdate` o `CanAppend`.||  
|Chiamare le funzioni membro per aggiungere, modificare ed eliminare i record di recordset.|Gestisce il meccanismo di scambio di dati tra l'oggetto recordset e l'origine dati.|  
|Facoltativamente, è possibile utilizzare le transazioni per controllare il processo di aggiornamento.|Fornisce `CDatabase` funzioni membro per supportare le transazioni.|  
  
 Per ulteriori informazioni sulle transazioni, vedere [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
##  <a name="_core_the_edit_buffer"></a>Il Buffer di modifica  
 Eseguito collettivamente, i membri di dati del campo di un recordset fungono da un buffer di modifica contenente un record, il record corrente. Le operazioni di aggiornamento utilizzano questo buffer per funzionare con il record corrente.  
  
-   Quando si aggiunge un record, il buffer di modifica viene utilizzato per creare un nuovo record. Dopo aver aggiunto il record, il record che era in precedenza corrente diventa di nuovo.  
  
-   Quando si aggiorna buffer (modifica) un record, la modifica viene utilizzato per impostare i membri di dati del campo del recordset ai nuovi valori. Al termine dell'aggiornamento, il record aggiornato è ancora aggiornato.  
  
 Quando si chiama [AddNew](../../mfc/reference/crecordset-class.md#addnew) o [modifica](../../mfc/reference/crecordset-class.md#edit), il record corrente viene archiviato in modo da essere ripristinato in seguito, in base alle esigenze. Quando si chiama [eliminare](../../mfc/reference/crecordset-class.md#delete), il record corrente non viene archiviato ma è contrassegnato come eliminato ed è necessario scorrere a un altro record.  
  
> [!NOTE]
>  Il buffer di modifica non ha alcun ruolo nell'eliminazione dei record. Quando si elimina il record corrente, il record viene contrassegnato come eliminato e quest'ultimo è "non in un record" fino a quando non si passa a un altro record.  
  
##  <a name="_core_dynasets_and_snapshots"></a>I dynaset e snapshot  
 [I dynaset](../../data/odbc/dynaset.md) aggiornare il contenuto di un record durante lo scorrimento di record. [Gli snapshot](../../data/odbc/snapshot.md) sono rappresentazioni statiche dei record, il contenuto di un record non viene aggiornato a meno che non si chiama [Requery](../../mfc/reference/crecordset-class.md#requery). Per utilizzare tutte le funzionalità di dynaset, è necessario utilizzare un driver ODBC che è conforme al corretto livello di supporto delle API ODBC. Per ulteriori informazioni, vedere [ODBC](../../data/odbc/odbc-basics.md) e [Dynaset](../../data/odbc/dynaset.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: funzionamento dei metodi AddNew, Edit e Delete (ODBC)](../../data/odbc/recordset-how-addnew-edit-and-delete-work-odbc.md)
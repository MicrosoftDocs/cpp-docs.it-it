---
title: 'Transazione: Effetti delle transazioni sugli aggiornamenti (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- transactions, updating recordsets
- ODBC recordsets, transactions
- transactions, rolling back
- CommitTrans method
- Rollback method, ODBC transactions
ms.assetid: 9e00bbf4-e9fb-4332-87fc-ec8ac61b3f68
ms.openlocfilehash: 996b8410366661cb91cf82cfff823f17d3aad8b4
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59033111"
---
# <a name="transaction-how-transactions-affect-updates-odbc"></a>Transazione: Effetti delle transazioni sugli aggiornamenti (ODBC)

Aggiorna il [zdroj dat](../../data/odbc/data-source-odbc.md) gestiti durante le transazioni tramite l'uso di un buffer di modifica (lo stesso metodo usato all'esterno di transazioni). Membri dati del campo di un recordset collettivamente fungono da buffer di modifica che contiene il record corrente, ovvero un set di record backup temporaneamente durante un' `AddNew` o `Edit`. Durante un `Delete` operazione, il record corrente non viene eseguito il in una transazione. Per altre informazioni sui buffer di modifica e come gli aggiornamenti memorizzare il record corrente, vedere [Recordset: Aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).

> [!NOTE]
>  Se è stato implementato il recupero di righe bulk, è possibile chiamare `AddNew`, `Edit`, o `Delete`. È invece necessario scrivere funzioni personalizzate per effettuare gli aggiornamenti all'origine dati. Per altre informazioni sul recupero di righe bulk, vedere [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Durante le transazioni `AddNew`, `Edit`, e `Delete` operazioni possono eseguire il commit o rollback. Gli effetti delle `CommitTrans` e `Rollback` potrebbe causare il record corrente non venga ripristinato nel buffer di modifica. Per assicurarsi che il record corrente viene ripristinato correttamente, è importante comprendere come il `CommitTrans` e `Rollback` le funzioni membro della `CDatabase` funzionano con le funzioni di aggiornamento di `CRecordset`.

##  <a name="_core_how_committrans_affects_updates"></a> Come CommitTrans sugli aggiornamenti

Nella tabella seguente illustra gli effetti di `CommitTrans` sulle transazioni.

### <a name="how-committrans-affects-updates"></a>Come CommitTrans sugli aggiornamenti

|Operazione|Stato dell'origine dati|
|---------------|---------------------------|
|`AddNew` e `Update`e quindi `CommitTrans`|Nuovo record vengono aggiunti all'origine dati.|
|`AddNew` (senza `Update`) e quindi `CommitTrans`|Nuovo record viene perso. Record non è stato aggiunto all'origine dati.|
|`Edit` e `Update`e quindi `CommitTrans`|Modifiche vengono applicate all'origine dati.|
|`Edit` (senza `Update`) e quindi `CommitTrans`|Modifiche al record vengono perse. Record rimane invariato nell'origine dati.|
|`Delete` Quindi `CommitTrans`|Record eliminati dall'origine dati.|

##  <a name="_core_how_rollback_affects_updates"></a> Effetti delle transazioni di Rollback

Nella tabella seguente illustra gli effetti di `Rollback` sulle transazioni.

### <a name="how-rollback-affects-transactions"></a>Effetti delle transazioni di Rollback

|Operazione|Stato del record corrente|È inoltre necessario|Stato dell'origine dati|
|---------------|------------------------------|-------------------|---------------------------|
|`AddNew` e `Update`, quindi `Rollback`|Contenuto del record corrente viene archiviato temporaneamente per liberare spazio per nuovi record. Nuovo record viene inserito nel buffer di modifica. Dopo aver `Update` viene chiamato, corrente record viene ripristinato nel buffer di modifica.||L'aggiunta all'origine dei dati apportate da `Update` è invertito.|
|`AddNew` (senza `Update`), quindi `Rollback`|Contenuto del record corrente viene archiviato temporaneamente per liberare spazio per nuovi record. Modificare il buffer contiene il nuovo record.|Chiamare `AddNew` nuovo per ripristinare il buffer di modifica per un nuovo record vuoto. O chiamare `Move`(0) per ripristinare i valori precedenti per il buffer di modifica.|Poiché `Update` non è stato chiamato, non sono presenti modifiche apportate all'origine dati.|
|`Edit` e `Update`, quindi `Rollback`|Una versione non modificata del record corrente verrà archiviata temporaneamente. Le modifiche vengono apportate al contenuto del buffer di modifica. Dopo aver `Update` viene chiamato, il non modificato del record versione viene archiviata ancora temporaneamente.|*Dynaset*: Scorrere oltre il record corrente, quindi tornare indietro per ripristinare la versione non modificata del record di buffer di modifica.<br /><br /> *Snapshot*: Chiamare `Requery` per aggiornare il recordset dall'origine dati.|Modifiche all'origine dei dati apportate da `Update` vengono invertiti.|
|`Edit` (senza `Update`), quindi `Rollback`|Una versione non modificata del record corrente verrà archiviata temporaneamente. Le modifiche vengono apportate al contenuto del buffer di modifica.|Chiamare `Edit` nuovamente per ripristinare la versione non modificata del record del buffer di modifica.|Poiché `Update` non è stato chiamato, non sono presenti modifiche apportate all'origine dati.|
|`Delete` Quindi `Rollback`|Il contenuto del record corrente viene eliminato.|Chiamare `Requery` per ripristinare il contenuto del record corrente dall'origine dati.|L'eliminazione dei dati dall'origine dati viene invertito.|

## <a name="see-also"></a>Vedere anche

[Transazione (ODBC)](../../data/odbc/transaction-odbc.md)<br/>
[Transazione (ODBC)](../../data/odbc/transaction-odbc.md)<br/>
[Transazione: Esecuzione di una transazione in un Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md)<br/>
[Classe CDatabase](../../mfc/reference/cdatabase-class.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)
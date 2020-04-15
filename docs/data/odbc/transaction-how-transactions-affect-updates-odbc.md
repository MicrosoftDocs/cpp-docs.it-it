---
title: 'Transazione: effetti delle transazioni sugli aggiornamenti (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- transactions, updating recordsets
- ODBC recordsets, transactions
- transactions, rolling back
- CommitTrans method
- Rollback method, ODBC transactions
ms.assetid: 9e00bbf4-e9fb-4332-87fc-ec8ac61b3f68
ms.openlocfilehash: 8a87176ecb20beaf46583e1190b0ad458d508b31
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376428"
---
# <a name="transaction-how-transactions-affect-updates-odbc"></a>Transazione: effetti delle transazioni sugli aggiornamenti (ODBC)

Gli aggiornamenti [all'origine dati](../../data/odbc/data-source-odbc.md) vengono gestiti durante le transazioni tramite l'utilizzo di un buffer di modifica (lo stesso metodo utilizzato all'esterno delle transazioni). I membri dati di campo di un recordset fungono collettivamente da buffer di modifica `AddNew` contenente `Edit`il record corrente, di cui il recordset esegue temporaneamente il backup durante un oggetto o . Durante `Delete` un'operazione, non viene eseguito il backup del record corrente all'interno di una transazione. Per ulteriori informazioni sul buffer di modifica e sul modo in cui gli aggiornamenti archiviano il record corrente, vedere [Recordset: come recordset Aggiorna record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).

> [!NOTE]
> Se è stato implementato il recupero `AddNew`di `Edit`massa `Delete`di righe, non è possibile chiamare , , o . È invece necessario scrivere funzioni personalizzate per eseguire aggiornamenti all'origine dati. Per ulteriori informazioni sul recupero di massa di righe, vedere Recordset: recupero di massa di [record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Durante le `AddNew`transazioni, è possibile eseguire il commit o il rollback delle operazioni , `Edit`e `Delete` . Gli effetti `CommitTrans` `Rollback` di e potrebbero causare il ripristino del record corrente nel buffer di modifica. Per assicurarsi che il record corrente venga ripristinato `CommitTrans` correttamente, è importante comprendere in che modo le funzioni membro e e `Rollback` di lavoro con le funzioni di `CDatabase` aggiornamento di `CRecordset`.

## <a name="how-committrans-affects-updates"></a><a name="_core_how_committrans_affects_updates"></a>Effetti di CommitTrans sugli aggiornamentiHow CommitTrans Affects Updates

Nella tabella seguente vengono `CommitTrans` illustrati gli effetti delle transazioni.

### <a name="how-committrans-affects-updates"></a>Effetti di CommitTrans sugli aggiornamentiHow CommitTrans Affects Updates

|Operazione|Stato dell'origine dati|
|---------------|---------------------------|
|`AddNew`e `Update`, e poi`CommitTrans`|Nuovo record vengono aggiunti all'origine dati.|
|`AddNew`(senza `Update`), e quindi`CommitTrans`|Il nuovo record viene perso. Record non aggiunto all'origine dati.|
|`Edit`e `Update`, e poi`CommitTrans`|Modifiche di cui è stato eseguito il commit nell'origine dati.|
|`Edit`(senza `Update`), e quindi`CommitTrans`|Le modifiche apportate al record vengono perse. Record rimane invariato nell'origine dati.|
|`Delete`Poi`CommitTrans`|Record eliminati dall'origine dati.|

## <a name="how-rollback-affects-transactions"></a><a name="_core_how_rollback_affects_updates"></a>Effetti del rollback sulle transazioniHow Rollback Affects Transactions

Nella tabella seguente vengono `Rollback` illustrati gli effetti delle transazioni.

### <a name="how-rollback-affects-transactions"></a>Effetti del rollback sulle transazioniHow Rollback Affects Transactions

|Operazione|Stato del record corrente|È inoltre necessario|Stato dell'origine dati|
|---------------|------------------------------|-------------------|---------------------------|
|`AddNew`e `Update`, quindi`Rollback`|Il contenuto del record corrente viene memorizzato temporaneamente per fare spazio al nuovo record. Il nuovo record viene immesso nel buffer di modifica. Dopo `Update` la chiamata, il record corrente viene ripristinato nel buffer di modifica.||L'aggiunta all'origine dati effettuata da `Update` viene invertita.|
|`AddNew`(senza `Update`), quindi`Rollback`|Il contenuto del record corrente viene memorizzato temporaneamente per fare spazio al nuovo record. Il buffer di modifica contiene un nuovo record.|Chiamare `AddNew` nuovamente per ripristinare il buffer di modifica in un nuovo record vuoto. Oppure `Move`chiamare (0) per ripristinare i valori precedenti nel buffer di modifica.|Poiché `Update` non è stato chiamato, non sono state apportate modifiche all'origine dati.|
|`Edit`e `Update`, quindi`Rollback`|Una versione non modificata del record corrente viene memorizzata temporaneamente. Vengono apportate modifiche al contenuto del buffer di modifica. Dopo `Update` la chiamata, la versione non modificata del record viene ancora archiviata temporaneamente.|*Dynaset*: Scorrere il record corrente e quindi tornare indietro per ripristinare la versione non modificata del record nel buffer di modifica.<br /><br /> *Snapshot:* `Requery` chiamata per aggiornare il recordset dall'origine dati.|Le modifiche apportate `Update` all'origine dati da vengono invertite.|
|`Edit`(senza `Update`), quindi`Rollback`|Una versione non modificata del record corrente viene memorizzata temporaneamente. Vengono apportate modifiche al contenuto del buffer di modifica.|Chiamare `Edit` nuovamente per ripristinare la versione non modificata del record nel buffer di modifica.|Poiché `Update` non è stato chiamato, non sono state apportate modifiche all'origine dati.|
|`Delete`Poi`Rollback`|Il contenuto del record corrente viene eliminato.|Chiamare `Requery` per ripristinare il contenuto del record corrente dall'origine dati.|L'eliminazione dei dati dall'origine dati viene annullata.|

## <a name="see-also"></a>Vedere anche

[Transazione (ODBC)](../../data/odbc/transaction-odbc.md)<br/>
[Transazione: esecuzione di una transazione in un recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md)<br/>
[Classe CDatabase](../../mfc/reference/cdatabase-class.md)<br/>
[CRecordset (classe)](../../mfc/reference/crecordset-class.md)

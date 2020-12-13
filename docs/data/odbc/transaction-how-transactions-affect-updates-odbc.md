---
description: 'Altre informazioni su: transazione: come le transazioni influiscono sugli aggiornamenti (ODBC)'
title: 'Transazione: effetti delle transazioni sugli aggiornamenti (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- transactions, updating recordsets
- ODBC recordsets, transactions
- transactions, rolling back
- CommitTrans method
- Rollback method, ODBC transactions
ms.assetid: 9e00bbf4-e9fb-4332-87fc-ec8ac61b3f68
ms.openlocfilehash: 56435d477ab11fe057ec20610a35e75d84cf7340
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333892"
---
# <a name="transaction-how-transactions-affect-updates-odbc"></a>Transazione: effetti delle transazioni sugli aggiornamenti (ODBC)

Gli aggiornamenti all' [origine dati](../../data/odbc/data-source-odbc.md) vengono gestiti durante le transazioni tramite l'utilizzo di un buffer di modifica (lo stesso metodo utilizzato al di fuori delle transazioni). I membri dati del campo di un recordset vengono collettivamente usati come buffer di modifica che contiene il record corrente, di cui il recordset esegue temporaneamente il backup durante un `AddNew` o `Edit` . Durante un' `Delete` operazione, non viene eseguito il backup del record corrente all'interno di una transazione. Per ulteriori informazioni sul buffer di modifica e sul modo in cui gli aggiornamenti archiviano il record corrente, vedere [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).

> [!NOTE]
> Se è stato implementato il recupero di righe bulk, non è possibile chiamare `AddNew` , `Edit` o `Delete` . È invece necessario scrivere funzioni personalizzate per eseguire gli aggiornamenti all'origine dati. Per ulteriori informazioni sul recupero di righe in blocco, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Durante le transazioni `AddNew` , `Edit` `Delete` è possibile eseguire il commit o il rollback delle operazioni, e. Gli effetti di `CommitTrans` e `Rollback` potrebbero causare il ripristino del record corrente nel buffer di modifica. Per assicurarsi che il record corrente sia correttamente ripristinato, è importante comprendere il modo in cui `CommitTrans` le `Rollback` funzioni membro e di `CDatabase` funzionano con le funzioni di aggiornamento di `CRecordset` .

## <a name="how-committrans-affects-updates"></a><a name="_core_how_committrans_affects_updates"></a> Effetti di CommitTrans sugli aggiornamenti

Nella tabella seguente vengono illustrati gli effetti di `CommitTrans` sulle transazioni.

### <a name="how-committrans-affects-updates"></a>Effetti di CommitTrans sugli aggiornamenti

|Operazione|Stato dell'origine dati|
|---------------|---------------------------|
|`AddNew` e `Update` quindi `CommitTrans`|Viene aggiunto un nuovo record all'origine dati.|
|`AddNew` (senza `Update` ), quindi `CommitTrans`|Il nuovo record viene perso. Il record non è stato aggiunto all'origine dati.|
|`Edit` e `Update` quindi `CommitTrans`|Modifica di cui è stato eseguito il commit nell'origine dati.|
|`Edit` (senza `Update` ), quindi `CommitTrans`|Le modifiche apportate al record vengono perse. Il record rimane invariato nell'origine dati.|
|`Delete` quindi `CommitTrans`|Record eliminati dall'origine dati.|

## <a name="how-rollback-affects-transactions"></a><a name="_core_how_rollback_affects_updates"></a> Effetti del rollback sulle transazioni

Nella tabella seguente vengono illustrati gli effetti di `Rollback` sulle transazioni.

### <a name="how-rollback-affects-transactions"></a>Effetti del rollback sulle transazioni

|Operazione|Stato del record corrente|È inoltre necessario|Stato dell'origine dati|
|---------------|------------------------------|-------------------|---------------------------|
|`AddNew` e `Update` quindi `Rollback`|Il contenuto del record corrente viene archiviato temporaneamente per fare spazio al nuovo record. Il nuovo record viene immesso nel buffer di modifica. Dopo la `Update` chiamata a, il record corrente viene ripristinato nel buffer di modifica.||L'aggiunta dell'origine dati effettuata da `Update` è invertita.|
|`AddNew` (senza `Update` ), quindi `Rollback`|Il contenuto del record corrente viene archiviato temporaneamente per fare spazio al nuovo record. Il buffer di modifica contiene un nuovo record.|Chiamare `AddNew` di nuovo per ripristinare il buffer di modifica in un nuovo record vuoto. In alternativa `Move` , chiamare (0) per ripristinare i valori precedenti nel buffer di modifica.|Poiché `Update` non è stato chiamato, non sono state apportate modifiche all'origine dati.|
|`Edit` e `Update` quindi `Rollback`|Una versione non modificata del record corrente viene archiviata temporaneamente. Le modifiche vengono apportate al contenuto del buffer di modifica. `Update`Una volta chiamato il metodo, la versione non modificata del record viene ancora archiviata temporaneamente.|*Dynaset*: scorrere il record corrente e tornare indietro per ripristinare la versione non modificata del record nel buffer di modifica.<br /><br /> *Snapshot*: chiamare `Requery` per aggiornare il recordset dall'origine dati.|Le modifiche apportate all'origine dati da `Update` sono invertite.|
|`Edit` (senza `Update` ), quindi `Rollback`|Una versione non modificata del record corrente viene archiviata temporaneamente. Le modifiche vengono apportate al contenuto del buffer di modifica.|Chiamare `Edit` di nuovo per ripristinare la versione non modificata del record nel buffer di modifica.|Poiché `Update` non è stato chiamato, non sono state apportate modifiche all'origine dati.|
|`Delete` quindi `Rollback`|Il contenuto del record corrente viene eliminato.|Chiamare `Requery` per ripristinare il contenuto del record corrente dall'origine dati.|L'eliminazione dei dati dall'origine dati è invertita.|

## <a name="see-also"></a>Vedi anche

[Transazione (ODBC)](../../data/odbc/transaction-odbc.md)<br/>
[Transazione: esecuzione di una transazione in un recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md)<br/>
[CDatabase (classe)](../../mfc/reference/cdatabase-class.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)

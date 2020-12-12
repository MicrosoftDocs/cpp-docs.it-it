---
description: 'Altre informazioni su: trasferimento di campi di record (RFX)'
title: Trasferimento di campi di record (RFX)
ms.date: 11/04/2016
helpviewer_keywords:
- RFX (ODBC) [C++]
- data [MFC], moving between sources and recordsets
- database classes [C++], RFX
- data [MFC]
- ODBC [C++], RFX
ms.assetid: f5ddfbf0-2901-48d7-9848-4fb84de3c7ee
ms.openlocfilehash: d181d779f74096dc035e9d492e50ef1823982b24
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97298890"
---
# <a name="record-field-exchange-rfx"></a>Trasferimento di campi di record (RFX)

Le classi di database ODBC MFC automatizzano lo stato di trasferimento dei dati tra l'origine dati e un oggetto [Recordset](../../data/odbc/recordset-odbc.md) . Quando si deriva una classe da [CRecordset](../../mfc/reference/crecordset-class.md) e non si utilizza il recupero di righe bulk, i dati vengono trasferiti dal meccanismo RFX (record Field Exchange).

> [!NOTE]
> Se è stato implementato il recupero di righe bulk in una `CRecordset` classe derivata, il Framework utilizza il meccanismo Bulk Record Field Exchange (RFX bulk) per trasferire i dati. Per ulteriori informazioni, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

RFX è simile a DDX (Dialog Data Exchange). Lo scambio di dati tra un'origine dati e i membri dati del campo di un recordset richiede più chiamate alla funzione [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) del recordset e una notevole interazione tra il Framework e [ODBC](../../data/odbc/odbc-basics.md). Il meccanismo RFX è indipendente dai tipi e consente di evitare di chiamare funzioni ODBC quali `::SQLBindCol` . Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

RFX è soprattutto trasparente per l'utente. Se si dichiarano le classi recordset con la creazione guidata applicazione MFC o **Aggiungi classe** (come descritto in [aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)), RFX viene incorporato automaticamente. La classe recordset deve derivare dalla classe `CRecordset` di base fornita dal Framework. La creazione guidata applicazione MFC consente di creare una classe recordset iniziale. **Aggiungi classe** consente di aggiungere altre classi recordset in modo necessario. Per ulteriori informazioni ed esempi, vedere [aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md).

È necessario aggiungere manualmente una piccola quantità di codice RFX in tre casi, quando si desidera:

- Usare query con parametri. Per ulteriori informazioni, vedere [Recordset: parametrizzazione di un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

- Eseguire join (usando un recordset per le colonne di due o più tabelle). Per ulteriori informazioni, vedere [Recordset: esecuzione di un join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md).

- Associare le colonne di dati in modo dinamico. Questa operazione è meno comune della parametrizzazione. Per ulteriori informazioni, vedere [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).

Per informazioni più avanzate su RFX, vedere [trasferimento di campi di record:](../../data/odbc/record-field-exchange-how-rfx-works.md)funzionamento di RFX.

Negli argomenti seguenti vengono illustrati i dettagli dell'utilizzo degli oggetti recordset:

- [Trasferimento di campi di record: utilizzo di RFX](../../data/odbc/record-field-exchange-using-rfx.md)

- [Trasferimento di campi di record: utilizzo delle funzioni RFX](../../data/odbc/record-field-exchange-using-the-rfx-functions.md)

- [Trasferimento di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md)

## <a name="see-also"></a>Vedi anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)<br/>
[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)<br/>
[Supporto database, creazione guidata applicazione MFC](../../mfc/reference/database-support-mfc-application-wizard.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)

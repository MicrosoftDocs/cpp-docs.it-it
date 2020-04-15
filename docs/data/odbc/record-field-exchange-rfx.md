---
title: Trasferimento di campi di record (RFX)
ms.date: 11/04/2016
helpviewer_keywords:
- RFX (ODBC) [C++]
- data [MFC], moving between sources and recordsets
- database classes [C++], RFX
- data [MFC]
- ODBC [C++], RFX
ms.assetid: f5ddfbf0-2901-48d7-9848-4fb84de3c7ee
ms.openlocfilehash: 6f965b90e1e0bbcfd3ad04bb5b40644d61050b2e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367156"
---
# <a name="record-field-exchange-rfx"></a>Trasferimento di campi di record (RFX)

Le classi di database ODBC MFC automatizzano lo spostamento dei dati tra l'origine dati e un oggetto [recordset.](../../data/odbc/recordset-odbc.md) Quando si deriva una classe da [CRecordset](../../mfc/reference/crecordset-class.md) e non si utilizza il recupero di massa di righe, i dati vengono trasferiti dal meccanismo di scambio di campi di record (RFX).

> [!NOTE]
> Se è stato implementato il recupero `CRecordset` di massa di righe in una classe derivata, il framework utilizza il meccanismo di scambio di campi di massa (RFX) di massa per trasferire i dati. Per ulteriori informazioni, vedere [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

RFX è simile a DDX (Dialog Data Exchange). Lo spostamento di dati tra un'origine dati e i membri dati di campo di un recordset richiede più chiamate alla funzione [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) del recordset e una notevole interazione tra il framework e [ODBC](../../data/odbc/odbc-basics.md). Il meccanismo RFX è indipendente dai tipi e consente `::SQLBindCol`di risparmiare il lavoro di chiamata di funzioni ODBC quali . Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

RFX è per lo più trasparente per l'utente. Se si dichiarano le classi recordset con la Creazione guidata applicazione MFC o **Aggiungi classe** (come descritto in Aggiunta di un consumer [ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)), RFX verrà compilato automaticamente. La classe recordset deve essere `CRecordset` derivata dalla classe base fornita dal framework. La Creazione guidata applicazione MFC consente di creare una classe recordset iniziale. **Aggiungi classe** consente di aggiungere altre classi recordset in base alle esigenze. Per ulteriori informazioni ed esempi, vedere [Aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md).

È necessario aggiungere manualmente una piccola quantità di codice RFX in tre casi, quando si desidera:

- Utilizzare query con parametri. Per ulteriori informazioni, vedere [Recordset: applicazione di parametri a un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

- Eseguire join (utilizzando un recordset per le colonne di due o più tabelle). Per ulteriori informazioni, vedere [Recordset: esecuzione di un join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md).

- Associare le colonne di dati in modo dinamico. Questo è meno comune della parametrizzazione. Per ulteriori informazioni, vedere [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).

Se è necessaria una conoscenza più avanzata di RFX, vedere [Scambio di campi record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

Negli argomenti seguenti vengono illustrati i dettagli relativi all'utilizzo degli oggetti recordset:

- [Trasferimento di campi di record: utilizzo di RFX](../../data/odbc/record-field-exchange-using-rfx.md)

- [Trasferimento di campi di record: utilizzo delle funzioni RFX](../../data/odbc/record-field-exchange-using-the-rfx-functions.md)

- [Trasferimento di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md)

## <a name="see-also"></a>Vedere anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)<br/>
[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)<br/>
[Supporto database, Creazione guidata applicazione MFC](../../mfc/reference/database-support-mfc-application-wizard.md)<br/>
[CRecordset (classe)](../../mfc/reference/crecordset-class.md)

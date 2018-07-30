---
title: Campi di record (RFX) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- RFX (ODBC) [C++]
- data [MFC], moving between sources and recordsets
- database classes [C++], RFX
- data [MFC]
- ODBC [C++], RFX
ms.assetid: f5ddfbf0-2901-48d7-9848-4fb84de3c7ee
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 563784a3f7c0961022972a1fd950218642d3ec2e
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39337362"
---
# <a name="record-field-exchange-rfx"></a>Trasferimento di campi di record (RFX)
Le classi di database ODBC MFC automatizzare lo spostamento dei dati tra l'origine dati e un [recordset](../../data/odbc/recordset-odbc.md) oggetto. Quando si deriva una classe dalla classe [CRecordset](../../mfc/reference/crecordset-class.md) e non utilizzare il recupero di righe bulk, i dati vengono trasferiti dal meccanismo di campi di record (RFX) di exchange.  
  
> [!NOTE]
>  Se è stato implementato il recupero di righe bulk in un oggetto derivato `CRecordset` (classe), il framework utilizza il meccanismo di scambio (RFX di massa) campi di record di operazioni bulk per trasferire i dati. Per altre informazioni, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 RFX è simile a dialog data exchange (DDX). Spostare dati tra un'origine dati e i membri di dati di campo di un recordset sono necessarie più chiamate per il recordset [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) (funzione) e una considerevole interazione tra framework e [ODBC](../../data/odbc/odbc-basics.md). Il meccanismo di RFX è indipendente dai tipi e si salva il lavoro di chiamata di funzioni ODBC come `::SQLBindCol`. Per altre informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
 RFX è quasi completamente trasparente all'utente. Se si dichiarano le classi di recordset con la creazione guidata applicazione MFC o **Aggiungi classe** (come descritto in [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)), RFX viene compilata automaticamente. La classe recordset deve essere derivata dalla classe di base `CRecordset` fornito dal framework. La creazione guidata applicazione MFC consente di creare una classe recordset iniziale. **Aggiungi classe** consente di aggiungere altre classi di recordset a seconda delle necessità. Per altre informazioni ed esempi, vedere [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md).  
  
 È necessario aggiungere manualmente una piccola quantità di codice RFX nei tre casi, quando si desidera:  
  
-   Usare le query con parametri. Per altre informazioni, vedere [Recordset: applicazione di parametri a un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).  
  
-   Eseguire join (utilizzando un recordset per le colonne da due o più tabelle). Per altre informazioni, vedere [Recordset: esecuzione di un Join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md).  
  
-   Associazione dinamica di colonne di dati. Questo è meno frequente la parametrizzazione. Per altre informazioni, vedere [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).  
  
 Se è necessario una più avanzate su RFX, vedere [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 Gli argomenti seguenti illustrano i dettagli di utilizzo degli oggetti recordset:  
  
-   [Trasferimento di campi di record: uso di RFX](../../data/odbc/record-field-exchange-using-rfx.md)  
  
-   [Trasferimento di campi di record: uso delle funzioni RFX](../../data/odbc/record-field-exchange-using-the-rfx-functions.md)  
  
-   [Trasferimento di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)   
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)   
 [Supporto database, creazione guidata applicazione MFC](../../mfc/reference/database-support-mfc-application-wizard.md)   
 [Classe CRecordset](../../mfc/reference/crecordset-class.md)
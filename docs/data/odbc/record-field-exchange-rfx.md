---
title: Campi di record (RFX) | Documenti Microsoft
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
- RFX (ODBC) [C++]
- data [MFC], moving between sources and recordsets
- database classes [C++], RFX
- data [MFC]
- ODBC [C++], RFX
ms.assetid: f5ddfbf0-2901-48d7-9848-4fb84de3c7ee
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 50fc0aea1ef50124cd98b0d0498b767d1f00e5c0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="record-field-exchange-rfx"></a>Trasferimento di campi di record (RFX)
Le classi di database ODBC MFC automatizzare lo spostamento dei dati tra l'origine dati e un [recordset](../../data/odbc/recordset-odbc.md) oggetto. Quando si deriva una classe da [CRecordset](../../mfc/reference/crecordset-class.md) e non si utilizza il recupero di massa di righe, i dati vengono trasferiti mediante il meccanismo di campi di record (RFX) di exchange.  
  
> [!NOTE]
>  Se è stato implementato il recupero di massa di righe in una classe `CRecordset` (classe), il framework utilizza il meccanismo di blocco campi di record (RFX di massa) di exchange per trasferire i dati. Per ulteriori informazioni, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 RFX è simile a dialog data exchange (DDX). Lo spostamento dei dati tra un'origine dati e i membri di dati del campo di un recordset necessarie più chiamate per il recordset [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) funzione e una considerevole interazione tra il framework e [ODBC](../../data/odbc/odbc-basics.md). Il meccanismo RFX è indipendente dai tipi e si salva il lavoro di chiamare le funzioni ODBC quali **:: SQLBindCol**. Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
 RFX è quasi completamente trasparente all'utente. Se si dichiarano le classi di recordset con la creazione guidata applicazione MFC o **Aggiungi classe** (come descritto in [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)), RFX viene incorporato automaticamente. Deve essere derivata dalla classe di base della classe recordset `CRecordset` fornita dal framework. La creazione guidata applicazione MFC consente di creare una classe recordset iniziale. **Aggiungi classe** consente di aggiungere altre classi di recordset, a seconda delle necessità. Per ulteriori informazioni ed esempi, vedere [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md).  
  
 È necessario aggiungere manualmente una piccola quantità di codice RFX nei tre casi, quando si desidera:  
  
-   Utilizzare le query con parametri. Per ulteriori informazioni, vedere [Recordset: applicazione di parametri a un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).  
  
-   Eseguire dei join (utilizzando un recordset per le colonne da due o più tabelle). Per ulteriori informazioni, vedere [Recordset: esecuzione di un Join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md).  
  
-   Associazione dinamica di colonne di dati. Si tratta di una parametrizzazione meno frequente. Per ulteriori informazioni, vedere [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).  
  
 Se è necessaria una comprensione più avanzata di RFX, vedere [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 Gli argomenti seguenti illustrano i dettagli sull'utilizzo degli oggetti recordset:  
  
-   [Trasferimento di campi di record: uso di RFX](../../data/odbc/record-field-exchange-using-rfx.md)  
  
-   [Trasferimento di campi di record: uso delle funzioni RFX](../../data/odbc/record-field-exchange-using-the-rfx-functions.md)  
  
-   [Trasferimento di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)   
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)   
 [Supporto database, creazione guidata applicazione MFC](../../mfc/reference/database-support-mfc-application-wizard.md)   
 [Classe CRecordset](../../mfc/reference/crecordset-class.md)
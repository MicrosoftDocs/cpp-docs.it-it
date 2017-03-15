---
title: "Trasferimento di campi di record (RFX) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dati [MFC]"
  - "dati [MFC], spostamento tra origini e recordset"
  - "classi di database [C++], RFX"
  - "ODBC [C++], RFX"
  - "RFX (ODBC) [C++]"
ms.assetid: f5ddfbf0-2901-48d7-9848-4fb84de3c7ee
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Trasferimento di campi di record (RFX)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le classi di database ODBC MFC consentono di rendere automatico lo spostamento di dati tra un'origine dati e un oggetto [recordset](../../data/odbc/recordset-odbc.md).  Quando si deriva una classe da [CRecordset](../../mfc/reference/crecordset-class.md) e non si utilizza il recupero di massa di righe, i dati vengono trasferiti mediante il meccanismo di trasferimento di campi di record \(RFX, Record Field Exchange\).  
  
> [!NOTE]
>  Se è stato implementato il recupero di massa di righe in una classe `CRecordset` derivata, il framework trasferisce i dati utilizzando il meccanismo di trasferimento di massa di campi di record, ovvero RFX di massa.  Per ulteriori informazioni, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Il meccanismo RFX è simile al meccanismo Dialog Data Exchange \(DDX\).  Lo spostamento dei dati tra un'origine dati e i membri dati di campo di un recordset richiede l'esecuzione di più chiamate alla funzione [DoFieldExchange](../Topic/CRecordset::DoFieldExchange.md) del recordset e una considerevole interazione tra il framework e [ODBC](../../data/odbc/odbc-basics.md).  Il meccanismo RFX è indipendente dai tipi e consente di non richiamare funzioni ODBC quali **::SQLBindCol**.  Per ulteriori informazioni su DDX, vedere [Dialog Data Exchange \(DDX\) e Dialog Data Validation \(DDV\)](../../mfc/dialog-data-exchange-and-validation.md).  
  
 Il meccanismo RFX è quasi completamente trasparente all'utente.  Se si dichiarano le classi recordset con la Creazione guidata applicazioni MFC o tramite il comando **Aggiungi classe** \(come descritto in [Aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)\), RFX viene incorporato automaticamente.  La classe recordset deve essere derivata dalla classe base `CRecordset` fornita dal framework.  La Creazione guidata applicazioni MFC consente di creare una classe recordset iniziale.  **Aggiungi classe** consente di aggiungere altre classi recordset, a seconda delle esigenze.  Per ulteriori informazioni ed esempi, vedere [Aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md).  
  
 È necessario aggiungere manualmente una piccola quantità di codice RFX nei tre casi seguenti.  
  
-   Utilizzare query con parametri.  Per ulteriori informazioni, vedere [Recordset: applicazione di parametri a un recordset \(ODBC\)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).  
  
-   Per eseguire join, utilizzando un recordset per colonne di due o più tabelle.  Per ulteriori informazioni, vedere [Recordset: esecuzione di un join \(ODBC\)](../../data/odbc/recordset-performing-a-join-odbc.md).  
  
-   Quando si desidera associare le colonne di dati dinamicamente.  Questa operazione è meno comune rispetto all'applicazione di parametri.  Per ulteriori informazioni, vedere [Recordset: associazione dinamica di colonne di dati \(ODBC\)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).  
  
 Per informazioni più dettagliate su RFX, vedere [Trasferimento di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 Negli argomenti elencati di seguito vengono fornite informazioni dettagliate sull'utilizzo degli oggetti recordset.  
  
-   [Trasferimento di campi di record: utilizzo di RFX](../../data/odbc/record-field-exchange-using-rfx.md)  
  
-   [Trasferimento di campi di record: utilizzo delle funzioni RFX](../../data/odbc/record-field-exchange-using-the-rfx-functions.md)  
  
-   [Trasferimento di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md)  
  
## Vedere anche  
 [Open Database Connectivity \(ODBC\)](../../data/odbc/open-database-connectivity-odbc.md)   
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)   
 [Supporto database, Creazione guidata applicazione MFC](../../mfc/reference/database-support-mfc-application-wizard.md)   
 [CRecordset Class](../../mfc/reference/crecordset-class.md)
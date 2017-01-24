---
title: "Visualizzazioni di record (accesso ai dati MFC) | Microsoft Docs"
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
  - "DAO [C++], visualizzazioni di record"
  - "database [C++], visualizzazioni di record"
  - "form [C++], attività di accesso ai dati"
  - "MFC [C++], visualizzazioni di record"
  - "ODBC (recordset) [C++], visualizzazioni di record"
  - "visualizzazioni di record [C++]"
ms.assetid: 562122d9-01d8-4284-acf6-ea109ab0408d
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Visualizzazioni di record (accesso ai dati MFC)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa sezione si applica solo alle classi ODBC MFC e DAO.  Per informazioni sulle visualizzazioni di record OLE DB, vedere [COleDBRecordView](../mfc/reference/coledbrecordview-class.md) e [Uso delle visualizzazioni di record OLE DB](../data/oledb/using-ole-db-record-views.md).  
  
 Per supportare le applicazioni di accesso ai dati basato su form, la libreria di classi fornisce la classe [CRecordView](../mfc/reference/crecordview-class.md) e la classe [CDaoRecordView](../mfc/reference/cdaorecordview-class.md).  Una visualizzazione di record è un oggetto visualizzazione form i cui controlli sono associati direttamente ai membri dati del campo di un oggetto [recordset](../data/odbc/recordset-odbc.md) e indirettamente alle corrispondenti colonne di una tabella o dei risultati di una query sull'origine dati.  Analogamente alla relativa classe base [CFormView](../mfc/reference/cformview-class.md), `CRecordView` e `CDaoRecordView` si basano su una risorsa modello di finestra di dialogo.  
  
## Usi dei form  
 I form possono essere usati per svariate attività di accesso ai dati:  
  
-   Immissione di dati  
  
-   Esame in sola lettura di dati  
  
-   Aggiornamento dei dati  
  
## Altre informazioni sulle visualizzazioni di record  
 Il materiale fornito in questi argomenti è relativo sia alle classi basate su ODBC che a quelle basate su DAO.  Usare `CRecordView` per ODBC e `CDaoRecordView` per DAO.  
  
 Gli argomenti trattati includono:  
  
-   [Funzionalità delle classi di visualizzazione di record](../data/features-of-record-view-classes-mfc-data-access.md)  
  
-   [Scambio di dati per le visualizzazioni di record](../data/data-exchange-for-record-views-mfc-data-access.md)  
  
-   [Ruolo del programmatore nell'uso di una visualizzazione di record](../data/your-role-in-working-with-a-record-view-mfc-data-access.md)  
  
-   [Progettazione e creazione di una visualizzazione di record](../data/designing-and-creating-a-record-view-mfc-data-access.md)  
  
-   [Uso di una visualizzazione di record](../data/using-a-record-view-mfc-data-access.md)  
  
## Vedere anche  
 [Programmazione dell'accesso ai dati \(MFC\/ATL\)](../data/data-access-programming-mfc-atl.md)   
 [Elenco dei driver ODBC](../data/odbc/odbc-driver-list.md)
---
title: "Uso di una visualizzazione di record (accesso ai dati MFC) | Microsoft Docs"
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
  - "visualizzazioni di record, personalizzazione di codice predefinito"
ms.assetid: 91f2828f-0666-4273-ae28-e4703fd98521
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Uso di una visualizzazione di record (accesso ai dati MFC)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo argomento illustra come personalizzare il codice predefinito per le visualizzazioni di record fornito dalla procedura guidata.  In genere, è opportuno limitare la selezione di record con un [filtro](../data/odbc/recordset-filtering-records-odbc.md) o con [parametri](../data/odbc/recordset-parameterizing-a-recordset-odbc.md), eventualmente [ordinare](../data/odbc/recordset-sorting-records-odbc.md) i record e personalizzare l'istruzione SQL.  
  
 Queste informazioni si applicano sia a [CRecordView](../mfc/reference/crecordview-class.md) \(ODBC\) che a [CDaoRecordView](../mfc/reference/cdaorecordview-class.md) \(DAO\).  
  
 L'uso di `CRecordView` o `CDaoRecordView` è molto simile all'uso di [CFormView](../mfc/reference/cformview-class.md).  L'approccio di base consiste nell'usare la visualizzazione di record per visualizzare ed eventualmente aggiornare i record di un solo recordset.  Tuttavia, è possibile voler usare anche altri recordset, come illustrato in [Visualizzazioni di record: inserimento di dati in una casella di riepilogo da un secondo recordset](../data/filling-a-list-box-from-a-second-recordset-mfc-data-access.md).  
  
## Vedere anche  
 [Visualizzazioni di record \(accesso ai dati MFC\)](../data/record-views-mfc-data-access.md)   
 [Elenco dei driver ODBC](../data/odbc/odbc-driver-list.md)
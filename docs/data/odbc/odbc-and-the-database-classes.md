---
title: "ODBC e classi di database | Microsoft Docs"
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
  - "classi di database [C++], ODBC"
  - "MFC [C++], ODBC e"
  - "funzioni API ODBC [C++]"
  - "classi ODBC [C++], classi di database MFC"
ms.assetid: b166f82d-6f85-4556-aac8-fb851235d22c
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# ODBC e classi di database
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le classi di database ODBC MFC includono le chiamate alle funzioni dell'API ODBC eseguite, in genere, dal programmatore nelle funzioni membro delle classi [CDatabase](../../mfc/reference/cdatabase-class.md) e [CRecordset](../../mfc/reference/crecordset-class.md).  Le classi di database gestiscono automaticamente diverse operazioni, tra le quali, ad esempio, le sequenze di chiamate ODBC complesse, l'associazione di record restituiti alle posizioni di archiviazione, la gestione delle condizioni di errore e così via.  Di conseguenza, per la gestione di record tramite un oggetto recordset viene utilizzata un'interfaccia di classe notevolmente più semplice.  
  
> [!NOTE]
>  È possibile accedere alle origini dati ODBC tramite le classi ODBC MFC, come descritto nel presente argomento, oppure tramite le classi DAO \(Data Access Object\) MFC.  
  
 Anche se includono le funzionalità ODBC, le classi di database non forniscono tuttavia un mapping uno\-a\-uno delle funzioni dell'API ODBC.  Le classi di database forniscono un livello più elevato di astrazione, basato sugli oggetti di accesso ai dati di Microsoft Access e Microsoft Visual Basic.  Per ulteriori informazioni, vedere [Definizione del modello di programmazione del database MFC](../../data/what-is-the-mfc-database-programming-model-q.md).  
  
## Vedere anche  
 [Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)
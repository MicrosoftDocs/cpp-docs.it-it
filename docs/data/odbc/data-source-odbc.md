---
title: "Origine dati (ODBC) | Microsoft Docs"
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
  - "CDatabase (classe), connessioni a origini dati"
  - "configurazione di origini dati ODBC"
  - "ODBC (origini dati)"
  - "ODBC (origini dati), configurazione"
  - "ODBC (origini dati), rappresentazione CDatabase"
ms.assetid: b246721f-b9e1-49bd-a6c7-f348b8c3d537
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Origine dati (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 In un contesto di database, un'origine dati ODBC include un gruppo di dati specifico, le informazioni necessarie per accedere a tali dati e informazioni sulla posizione, che è possibile descrivere mediante il nome dell'origine dati.  Per utilizzare la classe [CDatabase](../../mfc/reference/cdatabase-class.md), è necessario configurare l'origine dati mediante l'Amministratore ODBC \(Open Database Connectivity\).  Due esempi di origine dati sono un database remoto in esecuzione su Microsoft SQL Server in rete e un file di Microsoft Access in una directory locale.  Dall'applicazione in uso è possibile accedere a qualsiasi origine dati per la quale si dispone di un driver ODBC.  
  
 È possibile attivare una o più origini dati contemporaneamente nell'applicazione in uso, ciascuna rappresentata da un oggetto `CDatabase`.  È inoltre possibile stabilire più connessioni simultanee a qualsiasi origine dati  e connettersi a origini dati remote e locali, a seconda dei driver installati e delle capacità dei driver ODBC utilizzati.  Per ulteriori informazioni sulle origini dati e sull'Amministratore ODBC, vedere [ODBC](../../data/odbc/odbc-basics.md) e [Amministratore ODBC](../../data/odbc/odbc-administrator.md).  
  
 Negli argomenti riportati di seguito vengono fornite ulteriori informazioni sulle origini dati.  
  
-   [Origine dati: gestione delle connessioni \(ODBC\)](../../data/odbc/data-source-managing-connections-odbc.md)  
  
-   [Origine dati: determinazione dello schema dell'origine dati \(ODBC\)](../../data/odbc/data-source-determining-the-schema-of-the-data-source-odbc.md)  
  
## Vedere anche  
 [Open Database Connectivity \(ODBC\)](../../data/odbc/open-database-connectivity-odbc.md)
---
title: "Connessione a un&#39;origine dati | Microsoft Docs"
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
  - "connessioni [C++], origine dati"
  - "origini dati [C++], connessione"
  - "connessioni di database [C++], classi ODBC MFC"
  - "connessioni di database [C++], ODBC"
  - "database [C++], connessione"
  - "connessioni ODBC [C++], utilizzo"
  - "origini dati ODBC [C++], connessioni"
ms.assetid: ef6c8c98-5979-43a8-9fb5-5bb06fc59f36
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Connessione a un&#39;origine dati
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un'origine dati ODBC include un gruppo di dati specifico, le informazioni necessarie per accedere a tali dati e informazioni sulla posizione, che è possibile descrivere mediante il nome dell'origine dati.  Dal punto di vista del programma creato, l'origine dati include i dati, il DBMS, la rete, se presente, e ODBC.  
  
 Per accedere ai dati forniti da un'origine dati, è necessario che il programma stabilisca innanzitutto una connessione con l'origine dati.  L'accesso a tutti i dati viene gestito mediante questa connessione.  
  
 Le connessioni alle origini dati vengono inserite dalla classe [CDatabase](../../mfc/reference/cdatabase-class.md).  Dopo la connessione di un oggetto `CDatabase` a un'origine dati, è possibile eseguire le seguenti operazioni.  
  
-   Creare [recordset](../../mfc/reference/crecordset-class.md) per selezionare record dalle tabelle o dalle query.  
  
-   Gestire le [transazioni](../../data/odbc/transaction-odbc.md), raggruppando gli aggiornamenti per permetterne il commit simultaneo nell'origine dati oppure eseguendo il rollback dell'intera transazione in modo che l'origine dati resti invariata, nel caso in cui questa supporti il livello di transazioni richiesto.  
  
-   Eseguire direttamente le istruzioni di [SQL](../../data/odbc/sql.md).  
  
 Al termine della connessione a un'origine dati, chiudere l'oggetto `CDatabase` ed eliminarlo o riutilizzarlo per una nuova connessione.  Per ulteriori informazioni sulle connessioni alle origini dati, vedere [Origine dati \(ODBC\)](../../data/odbc/data-source-odbc.md).  
  
## Vedere anche  
 [ODBC e MFC](../../data/odbc/odbc-and-mfc.md)
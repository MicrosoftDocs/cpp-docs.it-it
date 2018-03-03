---
title: Connessione a un'origine dati | Documenti Microsoft
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
- database connections [C++], ODBC
- ODBC connections [C++], using
- connections [C++], data source
- databases [C++], connecting to
- data sources [C++], connecting to
- ODBC data sources [C++], connections
- database connections [C++], MFC ODBC classes
ms.assetid: ef6c8c98-5979-43a8-9fb5-5bb06fc59f36
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 08872f9e1034c50ca1468d6834f3a44dc06c1ebe
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="connecting-to-a-data-source"></a>Connessione a un'origine dati
Un'origine dati ODBC è un set specifico di dati, le informazioni necessarie per accedere ai dati e il percorso dell'origine dati, che può essere descritte con un nome origine dati. Dal punto di vista del programma, l'origine dati include i dati, il sistema DBMS, la rete (se presente) e ODBC.  
  
 Per accedere ai dati forniti da un'origine dati, il programma deve innanzitutto stabilire una connessione all'origine dati. Ogni accesso ai dati viene gestito tramite tale connessione.  
  
 Connessioni alle origini dati vengono incapsulati dalla classe [CDatabase](../../mfc/reference/cdatabase-class.md). Quando un `CDatabase` oggetto è connesso a un'origine dati, è possibile:  
  
-   Costruire [recordset](../../mfc/reference/crecordset-class.md), per selezionare record dalle tabelle o query.  
  
-   Gestire [transazioni](../../data/odbc/transaction-odbc.md), gli aggiornamenti batch in modo che tutte vengano eseguito il commit all'origine dati in una sola volta (o l'intera transazione viene eseguito il rollback in modo che l'origine dati è invariato), ovvero se l'origine dati supporta il livello di transazioni richiesto.  
  
-   Eseguire direttamente [SQL](../../data/odbc/sql.md) istruzioni.  
  
 Al termine del lavoro con una connessione all'origine dati, si chiude il `CDatabase` oggetto ed eliminarlo o riutilizzarlo per una nuova connessione. Per ulteriori informazioni sulle connessioni di origine dati, vedere [origine dati (ODBC)](../../data/odbc/data-source-odbc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [ODBC e MFC](../../data/odbc/odbc-and-mfc.md)
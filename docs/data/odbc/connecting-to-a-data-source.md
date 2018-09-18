---
title: La connessione a un'origine dei dati | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 4be8214ad036d67a02ce4b9c5935d3deb92252c1
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46061097"
---
# <a name="connecting-to-a-data-source"></a>Connessione a un'origine dati

Un'origine dati ODBC è un set specifico di dati, le informazioni necessarie per accedere a tali dati e la posizione dell'origine dati, che può essere descritto usando un nome origine dati. Dal punto di vista del programma, l'origine dati include i dati, il sistema DBMS, la rete (se presente) e ODBC.  
  
Per accedere ai dati forniti da un'origine dati, il programma prima di tutto necessario stabilire una connessione all'origine dati. Ogni accesso ai dati viene gestito tramite tale connessione.  
  
Connessioni alle origini dati sono incapsulate dalla classe [CDatabase](../../mfc/reference/cdatabase-class.md). Quando un `CDatabase` oggetto è connesso a un'origine dati, è possibile:  
  
- Costruire [recordset](../../mfc/reference/crecordset-class.md), per selezionare record da tabelle o query.  
  
- Gestire [transazioni](../../data/odbc/transaction-odbc.md), pertanto tutti i batch aggiornamenti vengono eseguito il commit all'origine dati in una sola volta (o viene eseguito il rollback dell'intera transazione in modo che l'origine dati è invariato), ovvero se l'origine dati supporta il livello necessario di transazioni.  
  
- Eseguire direttamente [SQL](../../data/odbc/sql.md) istruzioni.  
  
Al termine del lavoro con una connessione all'origine dati, si chiude il `CDatabase` oggetto e oppure eliminarla definitivamente riutilizzarlo per una nuova connessione. Per altre informazioni sulle connessioni alle origini dati, vedere [origine dati (ODBC)](../../data/odbc/data-source-odbc.md).  
  
## <a name="see-also"></a>Vedere anche  

[ODBC e MFC](../../data/odbc/odbc-and-mfc.md)
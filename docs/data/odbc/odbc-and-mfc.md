---
title: ODBC e MFC | Documenti Microsoft
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
- ODBC [C++], MFC
- connections [C++], databases
- connections [C++], data source
- databases [C++], connecting to
- data sources [C++], connecting to
- MFC [C++], ODBC and
- database connections [C++], MFC ODBC classes
ms.assetid: 98f02fd7-1235-437b-89a9-edfd0fc797f7
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 48dd657d4cf1b315b29fda881b949dea29204f24
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="odbc-and-mfc"></a>ODBC e MFC
> [!NOTE]
>  Per utilizzare le classi di database MFC, è necessario disporre del driver ODBC appropriato per l'origine dati. Il driver ODBC di Microsoft più recente per SQL Server è [Microsoft ODBC Driver 13 for SQL Server](https://www.microsoft.com/en-us/download/details.aspx?id=50420). La maggior parte dei fornitori di database offrono un driver ODBC per Windows. 
  
 In questo argomento vengono illustrati i concetti principali delle classi di database basate su ODBC della libreria Microsoft Foundation Classes (MFC) e viene fornita una panoramica del funzionano congiunto di classi. Per ulteriori informazioni su ODBC e MFC, vedere gli argomenti seguenti:  
  
-   [Connessione a un'origine dati](connecting-to-a-data-source.md)  
  
-   [Selezione e modifica di record](selecting-and-manipulating-records.md)  
  
-   [Visualizzazione e modifica di dati in un form](displaying-and-manipulating-data-in-a-form.md)  
  
-   [Utilizzo di documenti e visualizzazioni](working-with-documents-and-views.md)  
  
-   [Accesso a ODBC e SQL](access-to-odbc-and-sql.md)  
  
-   [Ulteriori informazioni sulle classi ODBC MFC](further-reading-about-the-mfc-odbc-classes.md)  
  
 Le classi di database MFC basate su ODBC sono progettate per fornire l'accesso a qualsiasi database per cui è disponibile un driver ODBC. Perché le classi ODBC, l'applicazione possa accedere a dati in diversi formati di dati diversi e diverse configurazioni locale o remoto. Non è necessario scrivere codice speciale per gestire i sistemi di gestione di diversi database (DBMS). Fino a quando gli utenti dispongono di un driver ODBC appropriato per i dati che desidera accedere, usano il programma di modificare i dati nelle tabelle archiviate.  
  
## <a name="see-also"></a>Vedere anche  
 [Open Database Connectivity (ODBC)](open-database-connectivity-odbc.md)
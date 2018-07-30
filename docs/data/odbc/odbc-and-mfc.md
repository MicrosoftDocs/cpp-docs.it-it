---
title: ODBC e MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 2374bb59eb2c4ac32f8690a88ec5223ba95e5dce
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39336406"
---
# <a name="odbc-and-mfc"></a>ODBC e MFC
> [!NOTE]
>  Per usare le classi di database MFC, è necessario il driver ODBC appropriato per l'origine dati. Il driver ODBC di Microsoft più recente per SQL Server viene [Microsoft ODBC Driver 13 for SQL Server](https://www.microsoft.com/download/details.aspx?id=50420). La maggior parte dei fornitori di database offrono un driver ODBC per Windows. 
  
 In questo argomento introduce i concetti principali delle classi di database basato su ODBC della libreria Microsoft Foundation Classes (MFC) e viene fornita una panoramica del funzionano congiunto di classi. Per ulteriori informazioni su ODBC e MFC, vedere gli argomenti seguenti:  
  
-   [Connessione a un'origine dati](connecting-to-a-data-source.md)  
  
-   [Selezione e modifica di record](selecting-and-manipulating-records.md)  
  
-   [Visualizzazione e modifica di dati in un form](displaying-and-manipulating-data-in-a-form.md)  
  
-   [Utilizzo di documenti e visualizzazioni](working-with-documents-and-views.md)  
  
-   [Accesso a ODBC e SQL](access-to-odbc-and-sql.md)  
  
-   [Ulteriori informazioni sulle classi ODBC MFC](further-reading-about-the-mfc-odbc-classes.md)  
  
 Le classi di database MFC basate su ODBC sono progettate per fornire l'accesso a qualsiasi database per cui è disponibile un driver ODBC. Poiché le classi usano ODBC, l'applicazione possa accedere a dati in diversi formati di dati diversi e diverse configurazioni locali/remoti. Non devi scrivere codice speciale per gestire sistemi di gestione di diversi database (DBMS). Fino a quando gli utenti hanno un driver ODBC appropriato per i dati che desiderano accedere ai, usano il programma di modificare i dati nelle tabelle presenti.  
  
## <a name="see-also"></a>Vedere anche  
 [Open Database Connectivity (ODBC)](open-database-connectivity-odbc.md)
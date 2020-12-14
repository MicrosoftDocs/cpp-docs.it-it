---
description: 'Ulteriori informazioni su: ODBC e MFC'
title: ODBC e MFC
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC [C++], MFC
- connections [C++], databases
- connections [C++], data source
- databases [C++], connecting to
- data sources [C++], connecting to
- MFC [C++], ODBC and
- database connections [C++], MFC ODBC classes
ms.assetid: 98f02fd7-1235-437b-89a9-edfd0fc797f7
ms.openlocfilehash: 32cc3f9a023a4b965e8872fde27291bf8df3f1a4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97195099"
---
# <a name="odbc-and-mfc"></a>ODBC e MFC

> [!NOTE]
> Per utilizzare le classi di database MFC, è necessario disporre del driver ODBC appropriato per l'origine dati. Il driver Microsoft ODBC più recente per SQL Server è [Microsoft ODBC driver 13 for SQL Server](https://www.microsoft.com/download/details.aspx?id=50420). La maggior parte dei fornitori di database fornisce un driver ODBC per Windows.

In questo argomento vengono presentati i concetti principali delle classi di database basate su ODBC della libreria Microsoft Foundation Classes (MFC) e viene fornita una panoramica del modo in cui le classi interagiscono. Per ulteriori informazioni su ODBC e MFC, vedere gli argomenti seguenti:

- [Connessione a un'origine dati](connecting-to-a-data-source.md)

- [Selezione e modifica di record](selecting-and-manipulating-records.md)

- [Visualizzazione e modifica di dati in un form](displaying-and-manipulating-data-in-a-form.md)

- [Utilizzo di documenti e visualizzazioni](working-with-documents-and-views.md)

- [Accesso a ODBC e SQL](access-to-odbc-and-sql.md)

- [Ulteriori informazioni sulle classi ODBC MFC](further-reading-about-the-mfc-odbc-classes.md)

Le classi di database MFC basate su ODBC sono progettate per consentire l'accesso a qualsiasi database per cui è disponibile un driver ODBC. Poiché le classi utilizzano ODBC, l'applicazione può accedere ai dati in diversi formati di dati e configurazioni locali/remote differenti. Non è necessario scrivere codice speciale per gestire sistemi di gestione di database (DBMS) diversi. Se gli utenti dispongono di un driver ODBC appropriato per i dati a cui si desidera accedere, possono utilizzare il programma per modificare i dati nelle tabelle archiviate.

## <a name="see-also"></a>Vedi anche

[Open Database Connectivity (ODBC)](open-database-connectivity-odbc.md)

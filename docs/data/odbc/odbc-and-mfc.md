---
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
ms.openlocfilehash: 38a625c73a17ecae4d8adc61e8c56bc4bdda67f6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320077"
---
# <a name="odbc-and-mfc"></a>ODBC e MFC

> [!NOTE]
> Per utilizzare le classi di database MFC, è necessario disporre del driver ODBC appropriato per l'origine dati. Il più recente driver Microsoft ODBC per SQL Server è [Driver Microsoft ODBC 13 per SQL Server](https://www.microsoft.com/download/details.aspx?id=50420). La maggior parte dei fornitori di database fornisce un driver ODBC per Windows.

In questo argomento vengono presentati i concetti principali delle classi di database basate su ODBC della libreria MFC (Microsoft Foundation Classes) e viene fornita una panoramica del funzionamento delle classi. Per ulteriori informazioni su ODBC e MFC, vedere i seguenti argomenti:

- [Connessione a un'origine dati](connecting-to-a-data-source.md)

- [Selezione e manipolazione dei record](selecting-and-manipulating-records.md)

- [Visualizzazione e modifica dei dati in un modulo](displaying-and-manipulating-data-in-a-form.md)

- [Utilizzo di documenti e visualizzazioni](working-with-documents-and-views.md)

- [Accesso a ODBC e SQL](access-to-odbc-and-sql.md)

- [Ulteriori informazioni sulle classi ODBC MFC](further-reading-about-the-mfc-odbc-classes.md)

Le classi di database MFC basate su ODBC sono progettate per fornire l'accesso a qualsiasi database per il quale è disponibile un driver ODBC. Poiché le classi utilizzano ODBC, l'applicazione può accedere ai dati in molti formati di dati diversi e configurazioni locali/remote diverse. Non è necessario scrivere codice caso speciale per gestire diversi sistemi di gestione di database (DBS). Finché gli utenti dispongono di un driver ODBC appropriato per i dati a cui desiderano accedere, possono utilizzare il programma per modificare i dati nelle tabelle archiviate in tale posizione.

## <a name="see-also"></a>Vedere anche

[Open Database Connectivity (ODBC)](open-database-connectivity-odbc.md)

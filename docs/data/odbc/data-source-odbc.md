---
title: Origine dati (ODBC)
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC data sources, configuring
- CDatabase class, data source connections
- ODBC data sources
- configuring ODBC data sources
- ODBC data sources, represented by CDatabase
ms.assetid: b246721f-b9e1-49bd-a6c7-f348b8c3d537
ms.openlocfilehash: ed9eeb8f5ef0d53846761062cf2c6575d2eaf9e6
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213302"
---
# <a name="data-source-odbc"></a>Origine dati (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In termini di database, un'origine dati è un set di dati specifico, le informazioni necessarie per accedere a tali dati e il percorso dell'origine dati, che può essere descritto utilizzando un nome dell'origine dati. Per utilizzare la classe [CDatabase](../../mfc/reference/cdatabase-class.md), è necessario che l'origine dati sia configurata tramite l'amministratore di Open Database Connectivity (ODBC). Esempi di origini dati includono un database remoto in esecuzione in Microsoft SQL Server in una rete o in un file di Microsoft Access in una directory locale. Dall'applicazione è possibile accedere a qualsiasi origine dati per la quale si dispone di un driver ODBC.

È possibile disporre di una o più origini dati attive contemporaneamente nell'applicazione, ciascuna rappresentata da un oggetto `CDatabase`. È inoltre possibile disporre di più connessioni simultanee a qualsiasi origine dati. È possibile connettersi a origini dati locali e remote, a seconda dei driver installati e delle funzionalità dei driver ODBC. Per ulteriori informazioni sulle origini dati e sull'amministratore ODBC, vedere [ODBC](../../data/odbc/odbc-basics.md) e ODBC [Administrator](../../data/odbc/odbc-administrator.md).

Negli argomenti seguenti vengono illustrate altre informazioni sulle origini dati:

- [Origine dati: gestione delle connessioni (ODBC)](../../data/odbc/data-source-managing-connections-odbc.md)

- [Origine dati: determinazione dello schema dell'origine dati (ODBC)](../../data/odbc/data-source-determining-the-schema-of-the-data-source-odbc.md)

## <a name="see-also"></a>Vedere anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)

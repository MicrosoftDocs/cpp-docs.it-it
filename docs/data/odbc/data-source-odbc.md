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
ms.openlocfilehash: b435c65bab565e109d37e1dd24e051993cbb30c8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62397913"
---
# <a name="data-source-odbc"></a>Origine dati (ODBC)

Questo argomento si applica alle classi ODBC MFC.

In termini di database, un'origine dati è un set specifico di dati, le informazioni necessarie per accedere a tali dati e la posizione dell'origine dati, che può essere descritto usando un nome origine dati. Per utilizzare la classe [CDatabase](../../mfc/reference/cdatabase-class.md), l'origine dati deve essere configurata tramite Amministrazione Open Database Connectivity (ODBC). Esempi di origini dati includono un database remoto in esecuzione su Microsoft SQL Server in una rete o un file di Microsoft Access in una directory locale. Dall'applicazione, è possibile accedere a qualsiasi origine dati per cui si ha un driver ODBC.

È possibile avere uno o più origini dati nell'applicazione in una sola volta, ognuno rappresentato da un `CDatabase` oggetto. È inoltre più connessioni simultanee a qualsiasi origine dati. È possibile connettersi in remoto, nonché a origini dati locali, a seconda dei driver che è stato installato e le funzionalità del driver ODBC. Per altre informazioni sulle origini dati e l'amministratore ODBC, vedere [ODBC](../../data/odbc/odbc-basics.md) e [Amministratore ODBC](../../data/odbc/odbc-administrator.md).

Gli argomenti seguenti fornite ulteriori informazioni sulle origini dati:

- [Origine dati: gestione delle connessioni (ODBC)](../../data/odbc/data-source-managing-connections-odbc.md)

- [Origine dati: determinazione dello schema dell'origine dati (ODBC)](../../data/odbc/data-source-determining-the-schema-of-the-data-source-odbc.md)

## <a name="see-also"></a>Vedere anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)
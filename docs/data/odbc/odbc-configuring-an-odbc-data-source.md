---
title: "ODBC: Configurazione di un'origine dati ODBC | Microsoft Docs"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ODBC data sources, configuring
- ODBC connections, configuring
- configuring ODBC data sources
ms.assetid: 1cd03e6a-8d59-4eca-a8c6-1010582d5e67
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a9a0cd385596f62432f16b7e5abc4259a267dd76
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50080312"
---
# <a name="odbc-configuring-an-odbc-data-source"></a>ODBC: configurazione di un'origine dati ODBC

Usare un [zdroj dat](../../data/odbc/data-source-odbc.md) con un'applicazione è stata sviluppata, è necessario utilizzare Amministratore ODBC per configurarlo. Amministratore ODBC tiene traccia delle origini dati disponibili e le relative informazioni di connessione nel Registro di sistema Windows. Utilizzare l'amministratore ODBC per aggiungere, modificare ed eliminare origini dati nel **Zdroje dat** nella finestra di dialogo e per aggiungere ed eliminare i driver ODBC.

> [!NOTE]
>  Queste informazioni si applicano quando si usano le classi MFC oggetto DAO (Data Access) per l'accesso a ODBC e quando si utilizzano classi ODBC MFC.

Amministratore ODBC viene installato automaticamente con il supporto per database di libreria Microsoft Foundation Classes (MFC). Per altre informazioni sull'Amministratore ODBC, vedere [Amministratore ODBC](../../data/odbc/odbc-administrator.md) e il sistema di Guida di riferimento API ODBC.

Per informazioni su come scrivere programmi di amministrazione e installazione ODBC per applicazioni database MFC[Nota tecnica 48](../../mfc/tn048-writing-odbc-setup-and-administration-programs.md).

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)<br/>
[ODBC: chiamata diretta delle funzioni dell'API ODBC](../../data/odbc/odbc-calling-odbc-api-functions-directly.md)
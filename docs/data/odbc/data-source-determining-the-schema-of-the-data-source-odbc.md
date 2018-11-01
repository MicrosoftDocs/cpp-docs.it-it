---
title: "Origine dati: determinazione dello schema dell'origine dati (ODBC)"
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC data sources [C++], schema
- schemas [C++], data sources
- data sources [C++], determining schema
ms.assetid: 17284acb-eb10-4f27-9944-ad1d973c0b05
ms.openlocfilehash: ed6500c5718cf90b39600b12659a3090fe9532ce
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50580760"
---
# <a name="data-source-determining-the-schema-of-the-data-source-odbc"></a>Origine dati: determinazione dello schema dell'origine dati (ODBC)

Questo argomento si applica alle classi ODBC MFC.

Per impostare i membri di dati di `CRecordset` oggetti, è necessario conoscere lo schema dell'origine dati a cui ci si connette. Determinazione dello schema di un'origine dati consiste nell'ottenere un elenco delle tabelle nell'origine dati, un elenco di colonne in ogni tabella, il tipo di dati di ogni colonna e l'esistenza di tutti gli indici.

## <a name="see-also"></a>Vedere anche

[Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)<br/>
[Origine dati: gestione delle connessioni (ODBC)](../../data/odbc/data-source-managing-connections-odbc.md)
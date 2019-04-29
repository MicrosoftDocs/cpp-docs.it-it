---
title: "Origine dati: Determinazione dello Schema dell'origine dati (ODBC)"
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC data sources [C++], schema
- schemas [C++], data sources
- data sources [C++], determining schema
ms.assetid: 17284acb-eb10-4f27-9944-ad1d973c0b05
ms.openlocfilehash: c419a3ac2d870e6a85675492ee6c9b726427a0e9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62395976"
---
# <a name="data-source-determining-the-schema-of-the-data-source-odbc"></a>Origine dati: Determinazione dello Schema dell'origine dati (ODBC)

Questo argomento si applica alle classi ODBC MFC.

Per impostare i membri di dati di `CRecordset` oggetti, è necessario conoscere lo schema dell'origine dati a cui ci si connette. Determinazione dello schema di un'origine dati consiste nell'ottenere un elenco delle tabelle nell'origine dati, un elenco di colonne in ogni tabella, il tipo di dati di ogni colonna e l'esistenza di tutti gli indici.

## <a name="see-also"></a>Vedere anche

[Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)<br/>
[Origine dati: gestione delle connessioni (ODBC)](../../data/odbc/data-source-managing-connections-odbc.md)
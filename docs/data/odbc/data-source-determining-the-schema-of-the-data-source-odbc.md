---
title: "Origine dati: determinazione dello schema dell'origine dati (ODBC)"
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC data sources [C++], schema
- schemas [C++], data sources
- data sources [C++], determining schema
ms.assetid: 17284acb-eb10-4f27-9944-ad1d973c0b05
ms.openlocfilehash: 60ed77ec8870ba80832d4f8c73a8362062dc9c2a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213317"
---
# <a name="data-source-determining-the-schema-of-the-data-source-odbc"></a>Origine dati: determinazione dello schema dell'origine dati (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

Per impostare i membri dati negli oggetti di `CRecordset`, è necessario conoscerne lo schema per l'origine dati a cui ci si connette. Per determinare lo schema di un'origine dati, è necessario ottenere un elenco delle tabelle nell'origine dati, un elenco di colonne in ogni tabella, il tipo di dati di ogni colonna e l'esistenza di eventuali indici.

## <a name="see-also"></a>Vedere anche

[Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)<br/>
[Origine dati: gestione delle connessioni (ODBC)](../../data/odbc/data-source-managing-connections-odbc.md)

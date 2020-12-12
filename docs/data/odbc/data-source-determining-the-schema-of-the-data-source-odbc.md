---
description: "Ulteriori informazioni su: origine dati: determinazione dello schema dell'origine dati (ODBC)"
title: "Origine dati: determinazione dello schema dell'origine dati (ODBC)"
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC data sources [C++], schema
- schemas [C++], data sources
- data sources [C++], determining schema
ms.assetid: 17284acb-eb10-4f27-9944-ad1d973c0b05
ms.openlocfilehash: d253874b3a759b4937e975342ab4351789fd24e7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97295094"
---
# <a name="data-source-determining-the-schema-of-the-data-source-odbc"></a>Origine dati: determinazione dello schema dell'origine dati (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

Per impostare i membri dati negli `CRecordset` oggetti, è necessario essere a conoscenza dello schema dell'origine dati a cui ci si connette. Per determinare lo schema di un'origine dati, è necessario ottenere un elenco delle tabelle nell'origine dati, un elenco di colonne in ogni tabella, il tipo di dati di ogni colonna e l'esistenza di eventuali indici.

## <a name="see-also"></a>Vedi anche

[Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)<br/>
[Origine dati: gestione delle connessioni (ODBC)](../../data/odbc/data-source-managing-connections-odbc.md)

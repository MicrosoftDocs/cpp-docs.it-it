---
title: "Origine dati: Determinazione dello Schema dell'origine dati (ODBC) | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ODBC data sources [C++], schema
- schemas [C++], data sources
- data sources [C++], determining schema
ms.assetid: 17284acb-eb10-4f27-9944-ad1d973c0b05
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 6da4067766eddab40bac75ee73d825dc5886dd0f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33088277"
---
# <a name="data-source-determining-the-schema-of-the-data-source-odbc"></a>Origine dati: determinazione dello schema dell'origine dati (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 Per impostare i membri di dati del `CRecordset` oggetti, è necessario conoscere lo schema dell'origine dati a cui ci si connette. Determinazione dello schema di un'origine dati, è necessario ottenere un elenco di tabelle nell'origine dati, un elenco di colonne in ogni tabella, il tipo di dati di ogni colonna e l'esistenza di tutti gli indici.  
  
## <a name="see-also"></a>Vedere anche  
 [Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)   
 [Origine dati: gestione delle connessioni (ODBC)](../../data/odbc/data-source-managing-connections-odbc.md)
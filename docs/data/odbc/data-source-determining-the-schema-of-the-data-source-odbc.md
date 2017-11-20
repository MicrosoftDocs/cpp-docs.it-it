---
title: 'Origine dati: Determinazione dello Schema dell''origine dati (ODBC) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- ODBC data sources [C++], schema
- schemas [C++], data sources
- data sources [C++], determining schema
ms.assetid: 17284acb-eb10-4f27-9944-ad1d973c0b05
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 54a596ce7821d89096836a0edbaf810d6c3f4a2e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="data-source-determining-the-schema-of-the-data-source-odbc"></a>Origine dati: determinazione dello schema dell'origine dati (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 Per impostare i membri di dati del `CRecordset` oggetti, è necessario conoscere lo schema dell'origine dati a cui ci si connette. Determinazione dello schema di un'origine dati, è necessario ottenere un elenco di tabelle nell'origine dati, un elenco di colonne in ogni tabella, il tipo di dati di ogni colonna e l'esistenza di tutti gli indici.  
  
## <a name="see-also"></a>Vedere anche  
 [Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)   
 [Origine dati: gestione delle connessioni (ODBC)](../../data/odbc/data-source-managing-connections-odbc.md)
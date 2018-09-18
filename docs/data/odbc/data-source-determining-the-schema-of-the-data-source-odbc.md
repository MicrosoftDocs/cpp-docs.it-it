---
title: "Origine dati: Determinazione dello Schema dell'origine dati (ODBC) | Microsoft Docs"
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
ms.openlocfilehash: d9db21b7531f71ba40be64018b71c4e2e3e555e2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46064971"
---
# <a name="data-source-determining-the-schema-of-the-data-source-odbc"></a>Origine dati: determinazione dello schema dell'origine dati (ODBC)

Questo argomento si applica alle classi ODBC MFC.  
  
Per impostare i membri di dati di `CRecordset` oggetti, è necessario conoscere lo schema dell'origine dati a cui ci si connette. Determinazione dello schema di un'origine dati consiste nell'ottenere un elenco delle tabelle nell'origine dati, un elenco di colonne in ogni tabella, il tipo di dati di ogni colonna e l'esistenza di tutti gli indici.  
  
## <a name="see-also"></a>Vedere anche  

[Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)<br/>
[Origine dati: gestione delle connessioni (ODBC)](../../data/odbc/data-source-managing-connections-odbc.md)
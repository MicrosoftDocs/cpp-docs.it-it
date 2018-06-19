---
title: Schema (accesso ai dati MFC) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- structures [C++], database
- databases [C++], schema
- database schema [C++], about database schemas
- database schema [C++]
- schemas [C++], database
- structures [C++]
ms.assetid: 7d17e35f-1ccf-4853-b915-5b8c7a45b9ee
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f7ba3e7b64a8c65678830593098ef658b3495c75
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33104698"
---
# <a name="schema--mfc-data-access"></a>Schema (accesso ai dati MFC)
Uno schema di database descrive la struttura corrente delle tabelle e delle visualizzazioni del database. In generale, il codice prodotto da una creazione guidata si basa sul presupposto che lo schema della tabella o delle tabelle a cui accede un recordset non venga modificato, anche se le classi di database supportano alcune modifiche dello schema, quali l'aggiunta, il riordino o l'eliminazione di colonne non associate. Se una tabella viene modificata, sarà necessario aggiornare manualmente il recordset della tabella, quindi ripetere la compilazione dell'applicazione.  
  
 È inoltre possibile integrare il codice generato dalla creazione guidata in modo che funzioni con un database il cui schema non è del tutto conosciuto in fase di compilazione. Per ulteriori informazioni, vedere [Recordset: associazione dinamica di colonne di dati (ODBC)](../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Accesso ai dati (MFC/ATL) di programmazione](../data/data-access-programming-mfc-atl.md)   
 [SQL](../data/odbc/sql.md)   
 [Recordset (ODBC)](../data/odbc/recordset-odbc.md)
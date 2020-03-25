---
title: Schema (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- structures [C++], database
- databases [C++], schema
- database schema [C++], about database schemas
- database schema [C++]
- schemas [C++], database
- structures [C++]
ms.assetid: 7d17e35f-1ccf-4853-b915-5b8c7a45b9ee
ms.openlocfilehash: 0eac4f47c3d00c34c1aadaef18202a95f831ad82
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80209093"
---
# <a name="schema--mfc-data-access"></a>Schema (accesso ai dati MFC)

Uno schema di database descrive la struttura corrente delle tabelle e delle visualizzazioni del database. In generale, il codice prodotto da una creazione guidata si basa sul presupposto che lo schema della tabella o delle tabelle a cui accede un recordset non venga modificato, anche se le classi di database supportano alcune modifiche dello schema, quali l'aggiunta, il riordino o l'eliminazione di colonne non associate. Se una tabella viene modificata, sarà necessario aggiornare manualmente il recordset della tabella, quindi ripetere la compilazione dell'applicazione.

È inoltre possibile integrare il codice generato dalla creazione guidata in modo che funzioni con un database il cui schema non è del tutto conosciuto in fase di compilazione. Per ulteriori informazioni, vedere [Recordset: associazione dinamica di colonne di dati (ODBC)](../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).

## <a name="see-also"></a>Vedere anche

[Programmazione dell'accesso ai dati (MFC/ATL)](../data/data-access-programming-mfc-atl.md)<br/>
[SQL](../data/odbc/sql.md)<br/>
[Recordset (ODBC)](../data/odbc/recordset-odbc.md)

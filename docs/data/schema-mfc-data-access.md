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
ms.openlocfilehash: cc333ee987ed0c6cba6cb11730d8f940e49d525d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62152696"
---
# <a name="schema--mfc-data-access"></a>Schema (accesso ai dati MFC)

Uno schema di database descrive la struttura corrente delle tabelle e delle visualizzazioni del database. In generale, il codice prodotto da una creazione guidata si basa sul presupposto che lo schema della tabella o delle tabelle a cui accede un recordset non venga modificato, anche se le classi di database supportano alcune modifiche dello schema, quali l'aggiunta, il riordino o l'eliminazione di colonne non associate. Se una tabella viene modificata, sarà necessario aggiornare manualmente il recordset della tabella, quindi ripetere la compilazione dell'applicazione.

È inoltre possibile integrare il codice generato dalla creazione guidata in modo che funzioni con un database il cui schema non è del tutto conosciuto in fase di compilazione. Per altre informazioni, vedere [Recordset: Associazione dinamica di colonne di dati (ODBC)](../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).

## <a name="see-also"></a>Vedere anche

[Accesso ai dati (MFC/ATL) di programmazione](../data/data-access-programming-mfc-atl.md)<br/>
[SQL](../data/odbc/sql.md)<br/>
[Recordset (ODBC)](../data/odbc/recordset-odbc.md)
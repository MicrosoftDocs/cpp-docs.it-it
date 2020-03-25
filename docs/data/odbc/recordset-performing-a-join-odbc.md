---
title: 'Recordset: esecuzione di un join (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- joins [C++], in recordsets
- data binding [C++], recordset columns
- recordsets [C++], binding data
- data binding [C++], columns in recordsets
- filters [C++], join conditions for recordsets
- ODBC recordsets [C++], joins
- recordsets [C++], joining tables
ms.assetid: ca720900-a156-4780-bf01-4293633bea64
ms.openlocfilehash: 7e8d42f2b96911cd57aca7c132b53ed7c10162be
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212797"
---
# <a name="recordset-performing-a-join-odbc"></a>Recordset: esecuzione di un join (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

## <a name="what-a-join-is"></a>Cosa è un join

L'operazione di join, un'attività comune di accesso ai dati, consente di utilizzare i dati di più di una tabella utilizzando un singolo oggetto recordset. L'Unione di due o più tabelle produce un recordset che può contenere colonne di ogni tabella, ma viene visualizzato come una singola tabella per l'applicazione. In alcuni casi il join utilizza tutte le colonne di tutte le tabelle, ma a volte la clausola SQL **Select** in un join utilizza solo alcune colonne di ogni tabella. Le classi di database supportano join di sola lettura ma non join aggiornabili.

Per selezionare record contenenti colonne da tabelle unite in join, sono necessari gli elementi seguenti:

- Elenco di tabelle contenente i nomi di tutte le tabelle da unire in join.

- Elenco di colonne contenente i nomi di tutte le colonne partecipanti. Le colonne con lo stesso nome ma da tabelle diverse sono qualificate dal nome della tabella.

- Filtro (clausola SQL **where** ) che specifica le colonne in cui vengono unite le tabelle. Il formato di questo filtro è "Tabella1. KeyCol = Table2. KeyCol" ed esegue effettivamente il join.

È possibile unire in join più di due tabelle in modo analogo, equivalenti a più coppie di colonne, ciascuna coppia unita dalla parola chiave SQL **e**.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: dichiarazione di una classe per una query predefinita (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md)<br/>
[Recordset: dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md)<br/>
[Recordset: ripetizione di una query in un recordset (ODBC)](../../data/odbc/recordset-requerying-a-recordset-odbc.md)

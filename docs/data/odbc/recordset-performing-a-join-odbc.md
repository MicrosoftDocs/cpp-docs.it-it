---
title: 'Recordset: Esecuzione di un Join (ODBC)'
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
ms.openlocfilehash: 9e589f00ec0512794d14accc6bb33c0e7adbd378
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59035413"
---
# <a name="recordset-performing-a-join-odbc"></a>Recordset: Esecuzione di un Join (ODBC)

Questo argomento si applica alle classi ODBC MFC.

## <a name="what-a-join-is"></a>Che cos'è un Join

L'operazione di join, un'attività di accesso ai dati comuni, consente di lavorare con dati provenienti da più di una tabella usando un unico oggetto recordset. Unione di due o più tabelle restituisce un recordset che può contenere colonne di ogni tabella, ma viene visualizzato come una singola tabella per l'applicazione. In alcuni casi il join utilizza tutte le colonne di tutte le tabelle, ma in alcuni casi il codice SQL **seleziona** clausola in un join utilizza solo alcune colonne di ogni tabella. Le classi di database supportano i join di sola lettura, ma non aggiornabili.

Per selezionare record contenenti le colonne da tabelle unite in join, sono necessari gli elementi seguenti:

- Un elenco di tabelle contenenti i nomi di tutte le tabelle da unire in join.

- Un elenco di colonne contenente i nomi di tutte le colonne coinvolte. Le colonne con lo stesso nome ma di tabelle diverse sono qualificate dal nome della tabella.

- Un filtro (SQL **in cui** clausola) che specifica le colonne in cui vengono unite le tabelle. Questo filtro assume la forma "Tabella1. ColChiave = Tabella2. ColChiave" ed esegue il join.

È possibile aggiungere più di due tabelle nello stesso modo facendo corrispondere più coppie di colonne, ogni unite mediante la parola chiave SQL **AND**.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: Dichiarazione di una classe per una Query predefinita (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md)<br/>
[Recordset: Dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md)<br/>
[Recordset: Ripetizione di query in un Recordset (ODBC)](../../data/odbc/recordset-requerying-a-recordset-odbc.md)
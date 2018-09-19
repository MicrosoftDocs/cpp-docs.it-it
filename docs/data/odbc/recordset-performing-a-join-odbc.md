---
title: 'Recordset: Esecuzione di un Join (ODBC) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- joins [C++], in recordsets
- data binding [C++], recordset columns
- recordsets [C++], binding data
- data binding [C++], columns in recordsets
- filters [C++], join conditions for recordsets
- ODBC recordsets [C++], joins
- recordsets [C++], joining tables
ms.assetid: ca720900-a156-4780-bf01-4293633bea64
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: e033a300a023b3460fb27ced7cd4bae99ebd0b92
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46097897"
---
# <a name="recordset-performing-a-join-odbc"></a>Recordset: esecuzione di un join (ODBC)

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
[Recordset: dichiarazione di una classe per una query predefinita (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md)<br/>
[Recordset: dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md)<br/>
[Recordset: ripetizione di una query in un recordset (ODBC)](../../data/odbc/recordset-requerying-a-recordset-odbc.md)
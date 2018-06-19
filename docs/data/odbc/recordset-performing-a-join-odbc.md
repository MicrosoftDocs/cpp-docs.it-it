---
title: 'Recordset: Esecuzione di un Join (ODBC) | Documenti Microsoft'
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
ms.openlocfilehash: 0be740a57f5c455b971dd23575401c666bf0723c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33093311"
---
# <a name="recordset-performing-a-join-odbc"></a>Recordset: esecuzione di un join (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
## <a name="what-a-join-is"></a>Che cos'è un Join  
 L'operazione di join, un'attività di accesso ai dati comuni, consente di lavorare con dati provenienti da più di una tabella utilizzando un unico oggetto recordset. Unione di due o più tabelle produce un recordset che può contenere colonne di ogni tabella, ma viene visualizzato come una singola tabella per l'applicazione. Il join utilizza talvolta tutte le colonne di tutte le tabelle, ma talvolta SQL **selezionare** clausola in un join utilizza solo alcune colonne di ogni tabella. Le classi di database supportano i join di sola lettura, ma non aggiornabili.  
  
 Per selezionare i record contenenti le colonne di tabelle unite in join, è necessario quanto segue:  
  
-   Un elenco di tabelle contenenti i nomi di tutte le tabelle da unire in join.  
  
-   Un elenco di colonne contenente i nomi di tutte le colonne coinvolte. Le colonne con lo stesso nome ma di tabelle diverse vengono qualificate dal nome della tabella.  
  
-   Un filtro (SQL **dove** clausola) che specifica le colonne in cui vengono unite le tabelle. Questo filtro assume il formato "Tabella1. ColChiave = Tabella2. ColChiave" ed esegue il join.  
  
 È possibile unire più di due tabelle nello stesso modo facendo corrispondere più coppie di colonne, ciascuna unite tramite la parola chiave SQL **AND**.  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: Dichiarazione di una classe per una Query già definita (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md)   
 [Recordset: Dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md)   
 [Recordset: ripetizione di una query in un recordset (ODBC)](../../data/odbc/recordset-requerying-a-recordset-odbc.md)
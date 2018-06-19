---
title: Utilizzo di più set di risultati da una Stored Procedure | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- stored procedures, returning result sets
- multiple result sets
ms.assetid: c450c12c-a76c-4ae4-9675-071a41eeac05
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 6393901839e8450ebc45b11f1d4bd2250da2ca56
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33106310"
---
# <a name="using-multiple-result-sets-from-one-stored-procedure"></a>Utilizzo di più set di risultati di un'unica stored procedure
La maggior parte di stored procedure restituiscono più set di risultati. Una stored procedure include in genere uno o più istruzioni di selezione. Il consumer deve prendere in considerazione questa opzione per gestire tutti i set di risultati.  
  
### <a name="to-handle-multiple-result-sets"></a>Per gestire più risultati imposta  
  
1.  Creare un `CCommand` classe con `CMultipleResults` come argomento di modello e con la funzione di accesso di propria scelta. In genere, si tratta di una funzione di accesso dinamica o manuale. Se si utilizza un altro tipo di funzione di accesso, potrebbe non essere in grado di determinare le colonne di output per ogni set di righe.  
  
2.  Eseguire la stored procedure come di consueto e associare le colonne (vedere [ricerca per categorie di recupero dei dati?](../../data/oledb/fetching-data.md)).  
  
3.  Utilizzare i dati.  
  
4.  Chiamare `GetNextResult` sulla `CCommand` classe. Se un altro set di righe di risultati è disponibile, `GetNextResult` restituisce S_OK e sarà necessario riassociare le colonne, se si utilizza una funzione di accesso manuali. Se `GetNextResult` restituisce un errore, sono disponibili altri gruppi di risultati.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle stored procedure](../../data/oledb/using-stored-procedures.md)
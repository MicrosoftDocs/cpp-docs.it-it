---
title: "Utilizzo di più set di risultati da una Stored Procedure | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- stored procedures, returning result sets
- multiple result sets
ms.assetid: c450c12c-a76c-4ae4-9675-071a41eeac05
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 787c2123981f894eb4b6ba088cfcef774b6ed6f8
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
---
title: Utilizzando più set di risultati da una Stored Procedure | Microsoft Docs
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
ms.openlocfilehash: 3e75a100bb5b56b613419160a3ea063bce42bbdb
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46092323"
---
# <a name="using-multiple-result-sets-from-one-stored-procedure"></a>Utilizzo di più set di risultati di un'unica stored procedure

La maggior parte di stored procedure restituiscono più set di risultati. Una stored procedure include in genere uno o più istruzioni di selezione. Il consumer deve prendere in considerazione questa opzione per gestire tutti i set di risultati.  
  
### <a name="to-handle-multiple-result-sets"></a>Per gestire il risultato di più imposta  
  
1. Creare un `CCommand` classe `CMultipleResults` come argomento di modello e con la funzione di accesso di propria scelta. In genere, si tratta di una funzione di accesso dinamiche o manuali. Se si usa un altro tipo di funzione di accesso, potrebbe non essere in grado di determinare le colonne di output per ogni set di righe.  
  
1. Eseguire la stored procedure come di consueto e associare le colonne (vedere [ricerca per categorie dei dati di recuperare?](../../data/oledb/fetching-data.md)).  
  
1. Usare i dati.  
  
1. Chiamare `GetNextResult` sul `CCommand` classe. Se un altro set di righe di risultati è disponibile, `GetNextResult` restituisce S_OK e se si usa una funzione di accesso manuali, è necessario riassociare le colonne. Se `GetNextResult` restituisce un errore, sono disponibili altri gruppi di risultati.  
  
## <a name="see-also"></a>Vedere anche  

[Uso delle stored procedure](../../data/oledb/using-stored-procedures.md)
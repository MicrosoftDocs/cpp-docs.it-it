---
title: Utilizzo di più set di risultati di un'unica stored procedure
ms.date: 10/24/2018
helpviewer_keywords:
- stored procedures, returning result sets
- multiple result sets
ms.assetid: c450c12c-a76c-4ae4-9675-071a41eeac05
ms.openlocfilehash: 69e5c956d897e217501cbac9b9b93db868731221
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59028425"
---
# <a name="using-multiple-result-sets-from-one-stored-procedure"></a>Utilizzo di più set di risultati di un'unica stored procedure

La maggior parte di stored procedure restituiscono più set di risultati. Una stored procedure include in genere uno o più istruzioni di selezione. Il consumer deve prendere in considerazione questa inclusione per gestire tutti i set di risultati.

## <a name="to-handle-multiple-result-sets"></a>Per gestire il risultato di più imposta

1. Creare un `CCommand` classe `CMultipleResults` come argomento di modello e con la funzione di accesso di propria scelta, in genere un accesso dinamica o manuale. Se si usa un altro tipo di funzione di accesso, potrebbe non essere in grado di determinare le colonne di output per ogni set di righe.

1. Eseguire la stored procedure come di consueto e associare le colonne (vedere [ricerca per categorie dei dati di recuperare?](../../data/oledb/fetching-data.md)).

1. Usare i dati.

1. Chiamare `GetNextResult` sul `CCommand` classe. Se un altro set di righe di risultati è disponibile, `GetNextResult` restituisce S_OK e se si usa una funzione di accesso manuali, è necessario riassociare le colonne. Se `GetNextResult` restituisce un errore, sono disponibili altri gruppi di risultati.

## <a name="see-also"></a>Vedere anche

[Uso delle stored procedure](../../data/oledb/using-stored-procedures.md)
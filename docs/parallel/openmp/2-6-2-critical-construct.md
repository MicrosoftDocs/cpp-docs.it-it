---
title: 2.6.2 Costrutto critical
ms.date: 11/04/2016
ms.assetid: c46ecd00-b4a2-4a5e-ba92-288c329e773a
ms.openlocfilehash: dcc0e6144be5daee2a225cda621db818e5a38e2c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50539074"
---
# <a name="262-critical-construct"></a>2.6.2 Costrutto critical

Il **critici** direttiva identifica un costrutto che limita l'esecuzione del blocco strutturato associato a un solo thread alla volta. La sintassi del **critici** direttiva è come segue:

```
#pragma omp critical [(name)]  new-linestructured-block
```

Facoltativo *nome* può essere usato per identificare l'area critica. Gli identificatori utilizzati per identificare un'area critica con collegamento esterno e sono in uno spazio dei nomi separato dagli spazi dei nomi utilizzati da etichette, i tag, i membri e identificatori comuni.

Un thread attende all'inizio di un'area critica nessun altro thread durante l'esecuzione di un'area critica (in un punto qualsiasi all'interno del programma) con lo stesso nome. Tutto senza nome **critici** direttive di eseguire il mapping per lo stesso nome specificato.
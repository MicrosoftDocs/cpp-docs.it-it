---
title: 2.6.2 costrutto critical | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: c46ecd00-b4a2-4a5e-ba92-288c329e773a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e51bd425999081c7a06a7d5692dbea16c887fa0b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46417852"
---
# <a name="262-critical-construct"></a>2.6.2 Costrutto critical

Il **critici** direttiva identifica un costrutto che limita l'esecuzione del blocco strutturato associato a un solo thread alla volta. La sintassi del **critici** direttiva è come segue:

```
#pragma omp critical [(name)]  new-linestructured-block
```

Facoltativo *nome* può essere usato per identificare l'area critica. Gli identificatori utilizzati per identificare un'area critica con collegamento esterno e sono in uno spazio dei nomi separato dagli spazi dei nomi utilizzati da etichette, i tag, i membri e identificatori comuni.

Un thread attende all'inizio di un'area critica nessun altro thread durante l'esecuzione di un'area critica (in un punto qualsiasi all'interno del programma) con lo stesso nome. Tutto senza nome **critici** direttive di eseguire il mapping per lo stesso nome specificato.
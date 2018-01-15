---
title: 2.6.2 costrutto critical | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: c46ecd00-b4a2-4a5e-ba92-288c329e773a
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4c658b32536404dde1a693582e78bfbedc2823b8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="262-critical-construct"></a>2.6.2 Costrutto critical
Il **critico** direttiva identifica un costrutto che limita l'esecuzione del blocco strutturato associato a un solo thread alla volta. La sintassi del **critico** direttiva è come segue:  
  
```  
#pragma omp critical [(name)]  new-linestructured-block  
```  
  
 Facoltativo *nome* può essere utilizzato per identificare l'area critica. Gli identificatori utilizzati per identificare un'area critica dispongono di collegamento esterno e sono in uno spazio dei nomi che è diversa dagli spazi dei nomi utilizzati da etichette, tag, i membri e gli identificatori normali.  
  
 Un thread attende all'inizio di un'area critica, nessun altro thread durante l'esecuzione di un'area critica (in un punto qualsiasi all'interno del programma) con lo stesso nome. In **critico** direttive eseguire il mapping per lo stesso nome specificato.